void FriendshipExceedResultWindowComponent___ctor(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D3091B & 1) == 0 )
  {
    sub_1C94098(&BaseDialog_TypeInfo);
    byte_4D3091B = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void FriendshipExceedResultWindowComponent__CloseToNext(
        FriendshipExceedResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x20

  if ( (byte_4D3091A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_FriendshipExceedResultWindowComponent___c__DisplayClass10_0__CloseToNext_b__0__);
    sub_1C94098(&FriendshipExceedResultWindowComponent___c__DisplayClass10_0_TypeInfo);
    byte_4D3091A = 1;
  }
  v5 = sub_1C942E4(FriendshipExceedResultWindowComponent___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_FriendshipExceedResultWindowComponent___c__DisplayClass10_0__CloseToNext_b__0__,
    0);
  BaseDialog__SafeClose((BaseDialog_o *)this, v14, 0);
}


void FriendshipExceedResultWindowComponent__OpenFriendshipExceedInfo(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t currentMax,
        System_Action_o *openedAction,
        const MethodInfo *method)
{
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v10; // x1
  __int128 v11; // q1
  UserServantCollectionMaster_o *v12; // x23
  int64_t v13; // x0
  __int64 v14; // x25
  __int64 v15; // x26
  int64_t v16; // x24
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x6
  const MethodInfo *v20; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4D30918 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D30918 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !userServantEntity )
    goto LABEL_19;
  v11 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v12 = Master_object;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v11;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v21 = v22;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v21, 0);
  v15 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v16 = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v15;
  *(_QWORD *)&v24.fields.fakeValue = v14;
  Master_object = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                     v24,
                                                     0);
  if ( !v12 )
    goto LABEL_19;
  if ( UserServantCollectionMaster__TryGetEntity(v12, &entity, v16, (int32_t)Master_object, 0) )
  {
    v17 = Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__;
    if ( (*((_BYTE *)Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__ + 83) & 2) != 0 )
      v17 = (_QWORD *)sub_1C940B0(Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__);
    v18 = (System_Reflection_MethodBase_o *)sub_1C9407C(v17, v17[4]);
    OverwriteAssetSoundName__PlaySystemSe(v18, 6, 0, 0);
    Master_object = (UserServantCollectionMaster_o *)this->fields.friendshipExceedInfoComponent;
    if ( Master_object )
    {
      FriendshipExceedInfoComponent__SetInfo(
        (FriendshipExceedInfoComponent_o *)Master_object,
        userServantEntity,
        entity,
        1,
        1,
        currentMax,
        v19);
      FriendshipExceedResultWindowComponent__SetupSpecialEffectUI(this, v20);
      BaseDialog__Open((BaseDialog_o *)this, openedAction, 0, 0, 0);
      return;
    }
LABEL_19:
    sub_1C942F0(Master_object, v10);
  }
  if ( openedAction )
    ((void (__fastcall *)(intptr_t, intptr_t))openedAction->fields.invoke_impl)(
      openedAction->fields.method_code,
      openedAction->fields.method);
}


void FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_49395340(this, userServantEntity, 0, v3);
}


void FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_49395340(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t currentMax,
        const MethodInfo *method)
{
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  Il2CppObject *MasterData_object; // x0
  __int128 v15; // q0
  UserServantCollectionMaster_o *v16; // x22
  int64_t v17; // x23
  const MethodInfo *v18; // x6
  System_Action_o *v19; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4D30917 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_1C94098(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C94098(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C94098(&Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D30917 = 1;
  }
  v7 = Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__;
  if ( (*((_BYTE *)Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C940B0(Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C9407C(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userServantEntity )
    goto LABEL_16;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v13;
  *(_QWORD *)&v22.fields.fakeValue = v12;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v22, 0);
  if ( !v11 )
    goto LABEL_16;
  DataMasterBase_object__object__int___GetEntity(
    v11,
    (int32_t)Instance,
    (const MethodInfo_345B4C0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v15 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v16 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v20, 0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                userServantEntity->fields.svtId,
                                0);
  if ( !v16
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntity(v16, v17, (int32_t)Instance, 0),
        !this->fields.friendshipExceedInfoComponent) )
  {
LABEL_16:
    sub_1C942F0(Instance, v10);
  }
  FriendshipExceedInfoComponent__SetInfo(
    this->fields.friendshipExceedInfoComponent,
    userServantEntity,
    (UserServantCollectionEntity_o *)Instance,
    1,
    1,
    currentMax,
    v18);
  v19 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0, 0);
}


void FriendshipExceedResultWindowComponent__SetupSpecialEffectUI(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  UILabel_o *friendshipExceedInfoTitle; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *specialImageInfos; // x19
  FriendshipExceedResultWindowComponent___c_c *v7; // x0
  System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__o *_9__9_0; // x20
  Il2CppObject *v9; // x21
  struct FriendshipExceedResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D30919 & 1) == 0 )
  {
    sub_1C94098(&System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo___);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&Method_FriendshipExceedResultWindowComponent___c__SetupSpecialEffectUI_b__9_0__);
    sub_1C94098(&FriendshipExceedResultWindowComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_3845/*"COSTUME_CHANGE_FRIENDSHIP_EXCEED_TITLE"*/);
    byte_4D30919 = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.friendshipExceedInfoTitle, 1, 0);
    friendshipExceedInfoTitle = this->fields.friendshipExceedInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3845/*"COSTUME_CHANGE_FRIENDSHIP_EXCEED_TITLE"*/, 0);
    if ( !friendshipExceedInfoTitle )
      sub_1C942F0(v4, v5);
    UILabel__set_text(friendshipExceedInfoTitle, v4, 0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.specialImageInfos, 0) )
    {
      specialImageInfos = (System_Collections_Generic_IEnumerable_T__o *)this->fields.specialImageInfos;
      v7 = FriendshipExceedResultWindowComponent___c_TypeInfo;
      if ( !FriendshipExceedResultWindowComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipExceedResultWindowComponent___c_TypeInfo);
        v7 = FriendshipExceedResultWindowComponent___c_TypeInfo;
      }
      _9__9_0 = v7->static_fields->__9__9_0;
      if ( !_9__9_0 )
      {
        if ( !v7->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v7);
          v7 = FriendshipExceedResultWindowComponent___c_TypeInfo;
        }
        v9 = (Il2CppObject *)v7->static_fields->__9;
        _9__9_0 = (System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__o *)sub_1C942E4(System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__TypeInfo);
        System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo____ctor(
          _9__9_0,
          v9,
          Method_FriendshipExceedResultWindowComponent___c__SetupSpecialEffectUI_b__9_0__,
          0);
        static_fields = FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields;
        static_fields->__9__9_0 = _9__9_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0,
          (int32_t)_9__9_0,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
      }
      BasicHelper__ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo_(
        specialImageInfos,
        (System_Action_T__o *)_9__9_0,
        (const MethodInfo_31894C0 *)Method_BasicHelper_ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo___);
    }
  }
}


void FriendshipExceedResultWindowComponent__ValidateSerializedField(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void FriendshipExceedResultWindowComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3091E & 1) == 0 )
  {
    sub_1C94098(&FriendshipExceedResultWindowComponent___c_TypeInfo);
    byte_4D3091E = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(FriendshipExceedResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct FriendshipExceedResultWindowComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void FriendshipExceedResultWindowComponent___c___ctor(
        FriendshipExceedResultWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendshipExceedResultWindowComponent___c___SetupSpecialEffectUI_b__9_0(
        FriendshipExceedResultWindowComponent___c_o *this,
        FriendshipExceedResultWindowComponent_SpecialimageInfo_o n,
        const MethodInfo *method)
{
  System_String_o *ImageName; // x19
  UISprite_o *Sprite; // x20

  ImageName = n.fields.ImageName;
  Sprite = n.fields.Sprite;
  if ( (byte_4D3091F & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    byte_4D3091F = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(Sprite, ImageName, 0);
}


void FriendshipExceedResultWindowComponent___c__DisplayClass10_0___ctor(
        FriendshipExceedResultWindowComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void FriendshipExceedResultWindowComponent___c__DisplayClass10_0___CloseToNext_b__0(
        FriendshipExceedResultWindowComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}