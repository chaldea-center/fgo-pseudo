void __fastcall FriendshipExceedResultWindowComponent___ctor(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B2B98 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B2B98 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_30050968(this, userServantEntity, 0, v3);
}


void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_30050968(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t currentMax,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v9; // x22
  __int64 v10; // x23
  __int64 v11; // x24
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v13; // q1
  UserServantCollectionMaster_o *v14; // x22
  int64_t v15; // x23
  const MethodInfo *v16; // x6
  System_Action_o *v17; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_42B2B97 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B52984(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B2B97 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userServantEntity )
    goto LABEL_19;
  v9 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v11;
  *(_QWORD *)&v20.fields.fakeValue = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v20, 0LL);
  if ( !v9 )
    goto LABEL_19;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    v9,
    (int32_t)Instance,
    (const MethodInfo_23E22D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v13 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v14 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v19.fields.fakeValue = v13;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v18 = v19;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v18, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v14
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntity(v14, v15, (int32_t)Instance, 0LL),
        !this->fields.friendshipExceedInfoComponent) )
  {
LABEL_19:
    sub_B52A5C(Instance, v8);
  }
  FriendshipExceedInfoComponent__SetInfo(
    this->fields.friendshipExceedInfoComponent,
    userServantEntity,
    (UserServantCollectionEntity_o *)Instance,
    1,
    1,
    currentMax,
    v16);
  v17 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v17, 0, 0LL);
}