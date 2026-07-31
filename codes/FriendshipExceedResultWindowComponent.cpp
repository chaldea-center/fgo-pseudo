void FriendshipExceedResultWindowComponent___ctor(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_593C8CA & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593C8CA = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x20

  if ( (byte_593C8C9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_FriendshipExceedResultWindowComponent___c__DisplayClass10_0__CloseToNext_b__0__);
    sub_21FFC50(&FriendshipExceedResultWindowComponent___c__DisplayClass10_0_TypeInfo);
    byte_593C8C9 = 1;
  }
  v5 = sub_21FFEBC(FriendshipExceedResultWindowComponent___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)callback, v8, v9, v10, v11, v12, v13);
  v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
  int v9; // w8
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v11; // x1
  UserServantCollectionMaster_o *v12; // x23
  __int128 v13; // q1
  int v14; // w8
  int64_t v15; // x0
  __int64 v16; // x1
  __int64 v17; // x25
  __int64 v18; // x26
  int64_t v19; // x24
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  const MethodInfo *v22; // x6
  const MethodInfo *v23; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+20h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_593C8C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593C8C7 = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userServantEntity);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !userServantEntity )
    goto LABEL_19;
  v12 = Master_object;
  v13 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v14 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v25.fields.fakeValue = v13;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
  v24 = v25;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v24, 0);
  v17 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v19 = v15;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
  *(_QWORD *)&v27.fields.currentCryptoKey = v17;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  Master_object = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                     v27,
                                                     0);
  if ( !v12 )
    goto LABEL_19;
  if ( UserServantCollectionMaster__TryGetEntity(v12, &entity, v19, (int32_t)Master_object, 0) )
  {
    v20 = Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__;
    if ( (*((_BYTE *)Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_21FFC68(Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__);
    v21 = (System_Reflection_MethodBase_o *)sub_21FFC34(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 6, 0, 0);
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
        v22);
      FriendshipExceedResultWindowComponent__SetupSpecialEffectUI(this, v23);
      BaseDialog__Open((BaseDialog_o *)this, openedAction, 0, 0, 0);
      return;
    }
LABEL_19:
    sub_21FFECC(Master_object, v11);
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

  FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_55708556(this, userServantEntity, 0, v3);
}


void FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_55708556(
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
  __int64 v14; // x1
  Il2CppObject *MasterData_object; // x22
  __int128 v16; // q1
  int v17; // w8
  int64_t v18; // x23
  const MethodInfo *v19; // x6
  System_Action_o *v20; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_593C8C6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BaseDialog_EndOpenBaseDialog__);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593C8C6 = 1;
  }
  v7 = Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__;
  if ( (*((_BYTE *)Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_21FFC68(Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__);
  v8 = (System_Reflection_MethodBase_o *)sub_21FFC34(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 6, 0, 0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userServantEntity )
    goto LABEL_16;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v12 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
  *(_QWORD *)&v23.fields.currentCryptoKey = v12;
  *(_QWORD *)&v23.fields.fakeValue = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0);
  if ( !v11 )
    goto LABEL_16;
  DataMasterBase_object__object__int___GetEntity(
    v11,
    (int32_t)Instance,
    (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v16 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v17 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v16;
  if ( !v17 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
  v21 = v22;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v21, 0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                userServantEntity->fields.svtId,
                                0);
  if ( !MasterData_object
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntity(
                                      (UserServantCollectionMaster_o *)MasterData_object,
                                      v18,
                                      (int32_t)Instance,
                                      0),
        !this->fields.friendshipExceedInfoComponent) )
  {
LABEL_16:
    sub_21FFECC(Instance, v10);
  }
  FriendshipExceedInfoComponent__SetInfo(
    this->fields.friendshipExceedInfoComponent,
    userServantEntity,
    (UserServantCollectionEntity_o *)Instance,
    1,
    1,
    currentMax,
    v19);
  v20 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0, 0);
}


void FriendshipExceedResultWindowComponent__SetupSpecialEffectUI(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UILabel_o *friendshipExceedInfoTitle; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *specialImageInfos; // x19
  FriendshipExceedResultWindowComponent___c_c *v9; // x0
  struct FriendshipExceedResultWindowComponent___c_StaticFields *static_fields; // x8
  System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__o *_9__9_0; // x20
  Il2CppObject *v12; // x21
  struct FriendshipExceedResultWindowComponent___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593C8C8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_FriendshipExceedResultWindowComponent___c__SetupSpecialEffectUI_b__9_0__);
    sub_21FFC50(&FriendshipExceedResultWindowComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_3979/*"COSTUME_CHANGE_FRIENDSHIP_EXCEED_TITLE"*/);
    byte_593C8C8 = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.friendshipExceedInfoTitle, 1, 0);
    friendshipExceedInfoTitle = this->fields.friendshipExceedInfoTitle;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v3);
    v5 = LocalizationManager__Get((System_String_o *)StringLiteral_3979/*"COSTUME_CHANGE_FRIENDSHIP_EXCEED_TITLE"*/, 0);
    if ( !friendshipExceedInfoTitle )
      sub_21FFECC(v5, v6);
    UILabel__set_text(friendshipExceedInfoTitle, v5, 0);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.specialImageInfos, 0) )
    {
      specialImageInfos = (System_Collections_Generic_IEnumerable_T__o *)this->fields.specialImageInfos;
      v9 = FriendshipExceedResultWindowComponent___c_TypeInfo;
      if ( !*(&FriendshipExceedResultWindowComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(FriendshipExceedResultWindowComponent___c_TypeInfo, v7);
        v9 = FriendshipExceedResultWindowComponent___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__9_0 = static_fields->__9__9_0;
      if ( !_9__9_0 )
      {
        if ( !*(&v9->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v9, v7);
          static_fields = FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__9_0 = (System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__o *)sub_21FFEBC(System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__TypeInfo);
        System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo____ctor(
          _9__9_0,
          v12,
          Method_FriendshipExceedResultWindowComponent___c__SetupSpecialEffectUI_b__9_0__,
          0);
        v13 = FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields;
        v13->__9__9_0 = _9__9_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__9_0, (int32_t)_9__9_0, v14, v15, v16, v17, v18, v19);
      }
      BasicHelper__ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo_(
        specialImageInfos,
        (System_Action_T__o *)_9__9_0,
        (const MethodInfo_37E0794 *)Method_BasicHelper_ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo___);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C8CD & 1) == 0 )
  {
    sub_21FFC50(&FriendshipExceedResultWindowComponent___c_TypeInfo);
    byte_593C8CD = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(FriendshipExceedResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct FriendshipExceedResultWindowComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields,
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
  if ( (byte_593C8CE & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_593C8CE = 1;
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, n.fields.Sprite);
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