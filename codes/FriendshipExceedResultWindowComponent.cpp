void __fastcall FriendshipExceedResultWindowComponent___ctor(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A4B0 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A4B0 = 1;
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

  FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_29844136(this, userServantEntity, 0, v3);
}


void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_29844136(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t currentMax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  DataManager_o *Instance; // x0
  __int64 v16; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int128 v21; // q1
  UserServantCollectionMaster_o *v22; // x22
  int64_t v23; // x23
  const MethodInfo *v24; // x6
  System_Action_o *v25; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_418A4AF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, userServantEntity);
    sub_B2C35C(&Method_BaseDialog_EndOpenBaseDialog__, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&SoundManager_TypeInfo, v14);
    byte_418A4AF = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(6, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userServantEntity )
    goto LABEL_19;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v19;
  *(_QWORD *)&v28.fields.fakeValue = v18;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v28, 0LL);
  if ( !v17 )
    goto LABEL_19;
  DataMasterBase_WarMaster__WarEntity__int___GetEntity(
    v17,
    (int32_t)Instance,
    (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v21 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v22 = (UserServantCollectionMaster_o *)MasterData_WarQuestSelectionMaster;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v21;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v26 = v27;
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v26, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v22
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntity(v22, v23, (int32_t)Instance, 0LL),
        !this->fields.friendshipExceedInfoComponent) )
  {
LABEL_19:
    sub_B2C434(Instance, v16);
  }
  FriendshipExceedInfoComponent__SetInfo(
    this->fields.friendshipExceedInfoComponent,
    userServantEntity,
    (UserServantCollectionEntity_o *)Instance,
    1,
    1,
    currentMax,
    v24);
  v25 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v25, 0, 0LL);
}