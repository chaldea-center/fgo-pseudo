void __fastcall FriendshipExceedResultWindowComponent___ctor(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19ABF & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19ABF = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_45684228(this, userServantEntity, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_45684228(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t currentMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  DataManager_o *Instance; // x0
  __int64 v26; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v27; // x22
  __int64 v28; // x23
  __int64 v29; // x24
  Il2CppObject *MasterData_object; // x0
  __int64 v31; // x1
  __int128 v32; // q0
  UserServantCollectionMaster_o *v33; // x22
  int64_t v34; // x23
  const MethodInfo *v35; // x6
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Action_o *v39; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16

  if ( (byte_4B19ABE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userServantEntity, *(_QWORD *)&currentMax);
    sub_1BCA7E0(&Method_BaseDialog_EndOpenBaseDialog__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v13, v14);
    sub_1BCA7E0(&Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21, v22);
    byte_4B19ABE = 1;
  }
  v23 = Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__;
  if ( (*((_BYTE *)Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__ + 83) & 2) != 0 )
    v23 = (_QWORD *)sub_1BCA7F8(Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__);
  v24 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v23, v23[4]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 6, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userServantEntity )
    goto LABEL_16;
  v27 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v29 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v42.fields.currentCryptoKey = v29;
  *(_QWORD *)&v42.fields.fakeValue = v28;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v42, 0LL);
  if ( !v27 )
    goto LABEL_16;
  DataMasterBase_object__object__int___GetEntity(
    v27,
    (int32_t)Instance,
    (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v32 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v33 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v32;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v31);
  v40 = v41;
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v40, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v33
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntity(v33, v34, (int32_t)Instance, 0LL),
        !this->fields.friendshipExceedInfoComponent) )
  {
LABEL_16:
    sub_1BCAA3C(Instance, v26);
  }
  FriendshipExceedInfoComponent__SetInfo(
    this->fields.friendshipExceedInfoComponent,
    userServantEntity,
    (UserServantCollectionEntity_o *)Instance,
    1,
    1,
    currentMax,
    v35);
  v39 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v36, v37, v38);
  System_Action___ctor(v39, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
}