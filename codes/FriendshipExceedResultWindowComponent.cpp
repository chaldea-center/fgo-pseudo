void __fastcall FriendshipExceedResultWindowComponent___ctor(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FFB85 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FFB85 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_44502392(this, userServantEntity, 0, v3);
}


void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_44502392(
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
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  DataManager_o *Instance; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x22
  __int64 v19; // x23
  __int64 v20; // x24
  Il2CppObject *MasterData_object; // x0
  __int128 v22; // q0
  UserServantCollectionMaster_o *v23; // x22
  int64_t v24; // x23
  const MethodInfo *v25; // x6
  __int64 v26; // x1
  __int64 v27; // x2
  System_Action_o *v28; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_49FFB84 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, userServantEntity);
    sub_1B640C8(&Method_BaseDialog_EndOpenBaseDialog__, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1B640C8(&Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_49FFB84 = 1;
  }
  v15 = Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__;
  if ( (*((_BYTE *)Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1B640E0(Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_1B640AC(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userServantEntity )
    goto LABEL_16;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v31.fields.currentCryptoKey = v20;
  *(_QWORD *)&v31.fields.fakeValue = v19;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v31, 0LL);
  if ( !v18 )
    goto LABEL_16;
  DataMasterBase_object__object__int___GetEntity(
    v18,
    (int32_t)Instance,
    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v22 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v23 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v30.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v30.fields.fakeValue = v22;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v29 = v30;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v29, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v23
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntity(v23, v24, (int32_t)Instance, 0LL),
        !this->fields.friendshipExceedInfoComponent) )
  {
LABEL_16:
    sub_1B64324(Instance);
  }
  FriendshipExceedInfoComponent__SetInfo(
    this->fields.friendshipExceedInfoComponent,
    userServantEntity,
    (UserServantCollectionEntity_o *)Instance,
    1,
    1,
    currentMax,
    v25);
  v28 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v26, v27);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0LL);
}