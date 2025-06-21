void __fastcall FriendshipExceedResultWindowComponent___ctor(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B202DD & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B202DD = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent__CloseToNext(
        FriendshipExceedResultWindowComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4B202DC & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_FriendshipExceedResultWindowComponent___c__DisplayClass10_0__CloseToNext_b__0__, v5);
    sub_1BCAFF8(&FriendshipExceedResultWindowComponent___c__DisplayClass10_0_TypeInfo, v6);
    byte_4B202DC = 1;
  }
  v7 = sub_1BCB244(FriendshipExceedResultWindowComponent___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  *(_QWORD *)(v7 + 16) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  v12 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v7,
    Method_FriendshipExceedResultWindowComponent___c__DisplayClass10_0__CloseToNext_b__0__,
    0LL);
  BaseDialog__SafeClose((BaseDialog_o *)this, v12, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent__OpenFriendshipExceedInfo(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t currentMax,
        System_Action_o *openedAction,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UserServantCollectionMaster_o *Master_object; // x0
  __int64 v14; // x1
  __int128 v15; // q1
  UserServantCollectionMaster_o *v16; // x23
  int64_t v17; // x0
  __int64 v18; // x25
  __int64 v19; // x26
  int64_t v20; // x24
  _QWORD *v21; // x0
  System_Reflection_MethodBase_o *v22; // x0
  const MethodInfo *v23; // x7
  const MethodInfo *v24; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h]
  UserServantCollectionEntity_o *entity; // [xsp+48h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B202DA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserServantCollectionMaster___, userServantEntity);
    sub_1BCAFF8(&DataManager_TypeInfo, v9);
    sub_1BCAFF8(&Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__, v10);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_4B202DA = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (UserServantCollectionMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  if ( !userServantEntity )
    goto LABEL_19;
  v15 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v16 = Master_object;
  *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v26.fields.fakeValue = v15;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v25 = v26;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v25, 0LL);
  v19 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  v20 = v17;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v19;
  *(_QWORD *)&v28.fields.fakeValue = v18;
  Master_object = (UserServantCollectionMaster_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                                     v28,
                                                     0LL);
  if ( !v16 )
    goto LABEL_19;
  if ( UserServantCollectionMaster__TryGetEntity(v16, &entity, v20, (int32_t)Master_object, 0LL) )
  {
    v21 = Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__;
    if ( (*((_BYTE *)Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__ + 83) & 2) != 0 )
      v21 = (_QWORD *)sub_1BCB010(Method_FriendshipExceedResultWindowComponent_OpenFriendshipExceedInfo__);
    v22 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v21, v21[4]);
    OverwriteAssetSoundName__PlaySystemSe(v22, 6, 0, 0LL);
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
        this->fields.isSpecialEffect,
        v23);
      FriendshipExceedResultWindowComponent__SetupSpecialEffectUI(this, v24);
      BaseDialog__Open((BaseDialog_o *)this, openedAction, 0, 0LL);
      return;
    }
LABEL_19:
    sub_1BCB254(Master_object, v14);
  }
  if ( openedAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))openedAction->fields.m_target)(
      openedAction->fields.original_method_info,
      *(_QWORD *)&openedAction->fields.extra_arg);
}


void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo(
        FriendshipExceedResultWindowComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_47474868(this, userServantEntity, 0, v3);
}


void __fastcall FriendshipExceedResultWindowComponent__SetFriendshipExceedInfo_47474868(
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
  __int64 v18; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x22
  __int64 v20; // x23
  __int64 v21; // x24
  Il2CppObject *MasterData_object; // x0
  __int128 v23; // q0
  UserServantCollectionMaster_o *v24; // x22
  int64_t v25; // x23
  const MethodInfo *v26; // x7
  System_Action_o *v27; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4B202D9 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, userServantEntity);
    sub_1BCAFF8(&Method_BaseDialog_EndOpenBaseDialog__, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v9);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_1BCAFF8(&Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_4B202D9 = 1;
  }
  v15 = Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__;
  if ( (*((_BYTE *)Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__ + 83) & 2) != 0 )
    v15 = (_QWORD *)sub_1BCB010(Method_FriendshipExceedResultWindowComponent_SetFriendshipExceedInfo__);
  v16 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v15, v15[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, 6, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !userServantEntity )
    goto LABEL_16;
  v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v21 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
  v20 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v30.fields.currentCryptoKey = v21;
  *(_QWORD *)&v30.fields.fakeValue = v20;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v30, 0LL);
  if ( !v19 )
    goto LABEL_16;
  DataMasterBase_object__object__int___GetEntity(
    v19,
    (int32_t)Instance,
    (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  v23 = *(_OWORD *)&userServantEntity->fields.userId.fields.fakeValue;
  v24 = (UserServantCollectionMaster_o *)MasterData_object;
  *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v29.fields.fakeValue = v23;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v28 = v29;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v28, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(
                                userServantEntity->fields.svtId,
                                0LL);
  if ( !v24
    || (Instance = (DataManager_o *)UserServantCollectionMaster__GetEntity(v24, v25, (int32_t)Instance, 0LL),
        !this->fields.friendshipExceedInfoComponent) )
  {
LABEL_16:
    sub_1BCB254(Instance, v18);
  }
  FriendshipExceedInfoComponent__SetInfo(
    this->fields.friendshipExceedInfoComponent,
    userServantEntity,
    (UserServantCollectionEntity_o *)Instance,
    1,
    1,
    currentMax,
    0,
    v26);
  v27 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_BaseDialog_EndOpenBaseDialog__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent__SetupSpecialEffectUI(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UILabel_o *friendshipExceedInfoTitle; // x20
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *specialImageInfos; // x19
  FriendshipExceedResultWindowComponent___c_c *v12; // x0
  System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__o *_9__9_0; // x20
  Il2CppObject *v14; // x21
  struct FriendshipExceedResultWindowComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B202DB & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo___, v3);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v4);
    sub_1BCAFF8(&Method_FriendshipExceedResultWindowComponent___c__SetupSpecialEffectUI_b__9_0__, v5);
    sub_1BCAFF8(&FriendshipExceedResultWindowComponent___c_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_3803/*"COSTUME_CHANGE_FRIENDSHIP_EXCEED_TITLE"*/, v7);
    byte_4B202DB = 1;
  }
  if ( this->fields.isSpecialEffect )
  {
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.friendshipExceedInfoTitle, 1, 0LL);
    friendshipExceedInfoTitle = this->fields.friendshipExceedInfoTitle;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_3803/*"COSTUME_CHANGE_FRIENDSHIP_EXCEED_TITLE"*/, 0LL);
    if ( !friendshipExceedInfoTitle )
      sub_1BCB254(v9, v10);
    UILabel__set_text(friendshipExceedInfoTitle, v9, 0LL);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.specialImageInfos, 0LL) )
    {
      specialImageInfos = (System_Collections_Generic_IEnumerable_T__o *)this->fields.specialImageInfos;
      v12 = FriendshipExceedResultWindowComponent___c_TypeInfo;
      if ( !FriendshipExceedResultWindowComponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipExceedResultWindowComponent___c_TypeInfo);
        v12 = FriendshipExceedResultWindowComponent___c_TypeInfo;
      }
      _9__9_0 = v12->static_fields->__9__9_0;
      if ( !_9__9_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = FriendshipExceedResultWindowComponent___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__9_0 = (System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__o *)sub_1BCB244(System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo__TypeInfo);
        System_Action_FriendshipExceedResultWindowComponent_SpecialimageInfo____ctor(
          _9__9_0,
          v14,
          Method_FriendshipExceedResultWindowComponent___c__SetupSpecialEffectUI_b__9_0__,
          0LL);
        static_fields = FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields;
        static_fields->__9__9_0 = _9__9_0;
        sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v16, v17);
      }
      BasicHelper__ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo_(
        specialImageInfos,
        (System_Action_T__o *)_9__9_0,
        (const MethodInfo_3007F74 *)Method_BasicHelper_ForEach_FriendshipExceedResultWindowComponent_SpecialimageInfo___);
    }
  }
}


void __fastcall FriendshipExceedResultWindowComponent__ValidateSerializedField(
        FriendshipExceedResultWindowComponent_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall FriendshipExceedResultWindowComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B202DE & 1) == 0 )
  {
    sub_1BCAFF8(&FriendshipExceedResultWindowComponent___c_TypeInfo, v1);
    byte_4B202DE = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(FriendshipExceedResultWindowComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields->__9 = (struct FriendshipExceedResultWindowComponent___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)FriendshipExceedResultWindowComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall FriendshipExceedResultWindowComponent___c___ctor(
        FriendshipExceedResultWindowComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent___c___SetupSpecialEffectUI_b__9_0(
        FriendshipExceedResultWindowComponent___c_o *this,
        FriendshipExceedResultWindowComponent_SpecialimageInfo_o n,
        const MethodInfo *method)
{
  System_String_o *ImageName; // x19
  UISprite_o *Sprite; // x20

  ImageName = n.fields.ImageName;
  Sprite = n.fields.Sprite;
  if ( (byte_4B202DF & 1) == 0 )
  {
    sub_1BCAFF8(&AtlasManager_TypeInfo, n.fields.Sprite);
    byte_4B202DF = 1;
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(Sprite, ImageName, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent___c__DisplayClass10_0___ctor(
        FriendshipExceedResultWindowComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall FriendshipExceedResultWindowComponent___c__DisplayClass10_0___CloseToNext_b__0(
        FriendshipExceedResultWindowComponent___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}