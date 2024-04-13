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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  struct UserGameEntity_o *usrData; // x8

  if ( (byte_42E9E21 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserPresentBoxMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E9E21 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserPresentBoxMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserPresentBoxMaster__getVaildList((UserPresentBoxMaster_o *)Instance, usrData->fields.userId, 0LL);
}


ServantEntity_o *__fastcall MyRoomData__getSvtData(MyRoomData_o *this, int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  ServantEntity_o *result; // x0

  if ( (byte_42E9E1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E9E1E = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  result = (ServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( result )
    return (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)result,
                                svtId,
                                (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  return result;
}


int32_t __fastcall MyRoomData__getSvtFriendshipLv(MyRoomData_o *this, int32_t hSvtId, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char *Instance; // x0
  __int64 v13; // x1
  struct UserGameEntity_o *usrData; // x8
  __int64 v15; // x19
  __int64 v16; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_42E9E1F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, hSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E9E1F = 1;
  }
  Instance = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (usrData = this->fields.usrData) == 0LL)
    || !Instance
    || (Instance = (char *)UserServantCollectionMaster__GetEntityDefinitely(
                             (UserServantCollectionMaster_o *)Instance,
                             usrData->fields.userId,
                             hSvtId,
                             0LL)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  v15 = *(_QWORD *)(Instance + 100);
  v16 = *(_QWORD *)(Instance + 108);
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v15;
  *(_QWORD *)&v18.fields.fakeValue = v16;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v18, 0LL);
}


ServantLimitEntity_o *__fastcall MyRoomData__getSvtLimitData(
        MyRoomData_o *this,
        int32_t svtId,
        int32_t limitCnt,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  ServantLimitEntity_o *result; // x0

  if ( (byte_42E9E20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitMaster___, svtId, limitCnt, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E9E20 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  result = (ServantLimitEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                     (DataManager_o *)Instance,
                                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitMaster___);
  if ( result )
    return ServantLimitMaster__GetEntity((ServantLimitMaster_o *)result, svtId, limitCnt, 0LL);
  return result;
}


int32_t __fastcall MyRoomData__getUserFriendSum(MyRoomData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  DataManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_42E9E1B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_TblFriendMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5, v6);
    byte_42E9E1B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_TblFriendMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v8);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E9E1A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserExpMaster___, currentLv, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E9E1A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserExpMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return UserExpMaster__getEntityFromLevel((UserExpMaster_o *)Instance, currentLv + 1, 0LL);
}


UserServantEntity_o *__fastcall MyRoomData__getUsrSvtData(
        MyRoomData_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  UserServantEntity_o *result; // x0

  if ( (byte_42E9E1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, usrSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E9E1D = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v12);
  result = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( result )
    return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)result,
             usrSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  return result;
}


System_Int32_array *__fastcall MyRoomData__getUsrSvtNum(MyRoomData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Int32_array *v10; // x19
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  il2cpp_array_size_t max_length; // w8
  System_Int32_array *result; // x0
  __int64 v15; // x0
  int32_t servantEquipSum; // [xsp+8h] [xbp-8h] BYREF
  int32_t servantSum; // [xsp+Ch] [xbp-4h] BYREF

  if ( (byte_42E9E1C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int___TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7, v8, v9);
    byte_42E9E1C = 1;
  }
  servantSum = 0;
  servantEquipSum = 0;
  v10 = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 2LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL
    || (Instance = (DataManager_o *)UserServantMaster__getCount(
                                      (UserServantMaster_o *)Instance,
                                      &servantSum,
                                      &servantEquipSum,
                                      0,
                                      0LL),
        !v10) )
  {
    sub_B5D69C(Instance, v12);
  }
  max_length = v10->max_length;
  if ( !max_length || (v10->m_Items[1] = servantSum, max_length == 1) )
  {
    v15 = sub_B5D6C8(Instance);
    sub_B5D668(v15, 0LL);
  }
  result = v10;
  v10->m_Items[2] = servantEquipSum;
  return result;
}


void __fastcall MyRoomData__setUserInfoData(MyRoomData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  MstProfileData_o *v13; // x21
  int64_t *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int64_t ActiveUserEquipId; // x0
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **name; // x1
  int64_t v30; // x21
  int64_t v31; // x21
  int64_t v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **friendCode; // x1
  __int64 v40; // x0
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int64_t lateExp; // [xsp+8h] [xbp-28h] BYREF
  int64_t exp; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_42E9E19 & 1) == 0 )
  {
    sub_B5D5C4(&MstProfileData_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9E19 = 1;
  }
  exp = 0LL;
  lateExp = 0LL;
  barExp = 0.0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  p_usrData = &this->fields.usrData;
  sub_B5D560((BattleServantConfConponent_o *)p_usrData, (System_Int32_array **)SelfUserGame, v7, v8, v9, v10, v11, v12);
  v13 = (MstProfileData_o *)sub_B5D694(MstProfileData_TypeInfo);
  MstProfileData___ctor(v13, 0LL);
  v14 = (int64_t *)(p_usrData + 3);
  p_usrData[3] = (struct UserGameEntity_o *)v13;
  sub_B5D560((BattleServantConfConponent_o *)(p_usrData + 3), (System_Int32_array **)v13, v15, v16, v17, v18, v19, v20);
  if ( !*p_usrData )
    goto LABEL_44;
  ActiveUserEquipId = (int64_t)p_usrData[3];
  if ( !ActiveUserEquipId )
    goto LABEL_44;
  name = (System_Int32_array **)(*p_usrData)->fields.name;
  *(_QWORD *)(ActiveUserEquipId + 16) = name;
  sub_B5D560((BattleServantConfConponent_o *)(ActiveUserEquipId + 16), name, v23, v24, v25, v26, v27, v28);
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 32) = (*p_usrData)->fields.genderType;
  ActiveUserEquipId = (int64_t)*p_usrData;
  if ( !*p_usrData )
    goto LABEL_44;
  v30 = *v14;
  ActiveUserEquipId = UserGameEntity__getActiveUserEquipId((UserGameEntity_o *)ActiveUserEquipId, 0LL);
  if ( !v30 )
    goto LABEL_44;
  *(_QWORD *)(v30 + 40) = ActiveUserEquipId;
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
  v31 = *v14;
  ActiveUserEquipId = UserGameEntity__GetFriendPoint((UserGameEntity_o *)ActiveUserEquipId, 0LL);
  if ( !v31 )
    goto LABEL_44;
  *(_DWORD *)(v31 + 96) = ActiveUserEquipId;
  v32 = *v14;
  ActiveUserEquipId = MyRoomData__getUserFriendSum((MyRoomData_o *)ActiveUserEquipId, v22);
  if ( !v32 )
    goto LABEL_44;
  *(_DWORD *)(v32 + 100) = ActiveUserEquipId;
  if ( !*p_usrData )
    goto LABEL_44;
  if ( !*v14 )
    goto LABEL_44;
  *(_DWORD *)(*v14 + 104) = (*p_usrData)->fields.friendKeep;
  ActiveUserEquipId = (int64_t)MyRoomData__getUsrSvtNum((MyRoomData_o *)ActiveUserEquipId, v22);
  if ( !ActiveUserEquipId )
    goto LABEL_44;
  if ( !*(_DWORD *)(ActiveUserEquipId + 24) )
    goto LABEL_45;
  if ( !*v14 || (*(_DWORD *)(*v14 + 108) = *(_DWORD *)(ActiveUserEquipId + 32), !*p_usrData) || !*v14 )
LABEL_44:
    sub_B5D69C(ActiveUserEquipId, v22);
  *(_DWORD *)(*v14 + 112) = (*p_usrData)->fields.svtKeep;
  if ( *(_DWORD *)(ActiveUserEquipId + 24) <= 1u )
  {
LABEL_45:
    v40 = sub_B5D6C8(ActiveUserEquipId);
    sub_B5D668(v40, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)(ActiveUserEquipId + 128), friendCode, v33, v34, v35, v36, v37, v38);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.usrData,
    (System_Int32_array **)SelfUserGame,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}