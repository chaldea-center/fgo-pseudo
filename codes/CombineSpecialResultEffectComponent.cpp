void __fastcall CombineSpecialResultEffectComponent___ctor(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  this->fields.movieFadeOutTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent__Awake(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  CombineSpecialResultEffectComponent_o *v2; // x19
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  v2 = this;
  if ( (byte_4B488D4 & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_o *)sub_1BDB878(
                                                      &Method_UnityEngine_Component_GetComponent_PlayMakerFSM___,
                                                      method);
    byte_4B488D4 = 1;
  }
  if ( !v2->fields.skillExtraResultInfoWindow
    || !v2->fields.rarityResultInfoWindow
    || (this = (CombineSpecialResultEffectComponent_o *)v2->fields.classPassiveResultWindow) == 0LL
    || (ClassPassiveResultWindowComponent__ValidateSerializedField((ClassPassiveResultWindowComponent_o *)this, 0LL),
        (this = (CombineSpecialResultEffectComponent_o *)v2->fields.friendshipExceedResultWindow) == 0LL) )
  {
    sub_1BDBAD4(this, method);
  }
  FriendshipExceedResultWindowComponent__ValidateSerializedField((FriendshipExceedResultWindowComponent_o *)this, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)v2,
                       (const MethodInfo_302A12C *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  v2->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&v2->fields.fsm, (int32_t)Component_object, v4, v5);
}


void __fastcall CombineSpecialResultEffectComponent__Close(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *movieAssetData; // x20
  AssetData_o *effectAssetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4B488E5 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, method);
    byte_4B488E5 = 1;
  }
  movieAssetData = this->fields.movieAssetData;
  if ( movieAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39554172(movieAssetData, 0LL);
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39554172(effectAssetData, 0LL);
  }
  CombineSpecialResultEffectComponent__DestroyMoviePlayer(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BDBAD4(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent__CloseClassPassiveResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  ClassPassiveResultWindowComponent_o *classPassiveResultWindow; // x0

  classPassiveResultWindow = this->fields.classPassiveResultWindow;
  if ( !classPassiveResultWindow )
    sub_1BDBAD4(0LL, nextAction);
  ClassPassiveResultWindowComponent__CloseToNext(classPassiveResultWindow, nextAction, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent__CloseExceedDescription(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x0

  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !skillResultInfoWindow )
    sub_1BDBAD4(0LL, nextAction);
  SkillUpResultWindowComponent__CloseToNext(skillResultInfoWindow, nextAction, method);
}


void __fastcall CombineSpecialResultEffectComponent__CloseRarityResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  RarityResultWindowComponent_o *rarityResultInfoWindow; // x0

  rarityResultInfoWindow = this->fields.rarityResultInfoWindow;
  if ( !rarityResultInfoWindow )
    sub_1BDBAD4(0LL, nextAction);
  RarityResultWindowComponent__CloseToNext(rarityResultInfoWindow, nextAction, method);
}


void __fastcall CombineSpecialResultEffectComponent__CloseSkillChangeMessage(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x0

  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !skillResultInfoWindow )
    sub_1BDBAD4(0LL, nextAction);
  SkillUpResultWindowComponent__CloseToNext(skillResultInfoWindow, nextAction, method);
}


void __fastcall CombineSpecialResultEffectComponent__CloseSkillChangeResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  SkillUpExtraResultWindowComponent_o *skillExtraResultInfoWindow; // x0

  skillExtraResultInfoWindow = this->fields.skillExtraResultInfoWindow;
  if ( !skillExtraResultInfoWindow )
    sub_1BDBAD4(0LL, nextAction);
  SkillUpExtraResultWindowComponent__CloseToNext(skillExtraResultInfoWindow, nextAction, method);
}


void __fastcall CombineSpecialResultEffectComponent__CloseTreasureDeviceChangeInfo(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x0

  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !skillResultInfoWindow )
    sub_1BDBAD4(0LL, nextAction);
  SkillUpResultWindowComponent__CloseToNext(skillResultInfoWindow, nextAction, method);
}


UnityEngine_GameObject_o *__fastcall CombineSpecialResultEffectComponent__CreateCriMoviePlayerObject(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *object; // x20
  Il2CppObject *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_4B488E8 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIPanel___, moviePlayerName);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    sub_1BDB878(&Method_UnityEngine_Resources_Load_GameObject___, v8);
    byte_4B488E8 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_30CD6D0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object_(
          object,
          (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0LL, 0LL);
  if ( v11 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v10, parent, 0LL);
  if ( !v10 )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v10,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v11 )
  {
    if ( Component_object )
    {
      UIPanel__set_sortingOrder((UIPanel_o *)Component_object, 1, 0LL);
      return (UnityEngine_GameObject_o *)v10;
    }
LABEL_14:
    sub_1BDBAD4(v11, v12);
  }
  return (UnityEngine_GameObject_o *)v10;
}


System_String_o *__fastcall CombineSpecialResultEffectComponent__CreateMoviePath(
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_4B488E7 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_9178/*"Movie/{0}.usm"*/, method);
    byte_4B488E7 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9178/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent__DestroyMoviePlayer(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CRIMoviePlayer_o *moviePlayer; // x0
  CGThumbnailListItem_o *p_moviePlayer; // x19

  p_moviePlayer = (CGThumbnailListItem_o *)&this->fields.moviePlayer;
  moviePlayer = this->fields.moviePlayer;
  if ( moviePlayer )
    CRIMoviePlayer__Dispose(moviePlayer, 0LL);
  p_moviePlayer->klass = 0LL;
  sub_1BDB81C(p_moviePlayer, 0, v2, v3);
}


void __fastcall CombineSpecialResultEffectComponent__EndDisp(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0LL) )
  {
    sub_1BDBAD4(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent__EndLoad(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B488DB & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1BDB878(&StringLiteral_13013/*"StartAnimation"*/, v3);
    byte_4B488DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(Instance, v5);
  }
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13013/*"StartAnimation"*/,
    this->fields.animStartedTime,
    0LL);
}


CRIMoviePlayer_o *__fastcall CombineSpecialResultEffectComponent__GetCriMoviePlayer(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *moviePlayerName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0
  __int64 v6; // x1

  if ( (byte_4B488E9 & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_o *)sub_1BDB878(
                                                      &Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___,
                                                      moviePlayerName);
    byte_4B488E9 = 1;
  }
  CriMoviePlayerObject = CombineSpecialResultEffectComponent__CreateCriMoviePlayerObject(this, moviePlayerName, 0LL, v3);
  if ( !CriMoviePlayerObject )
    sub_1BDBAD4(0LL, v6);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               CriMoviePlayerObject,
                               (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


UnityEngine_GameObject_o *__fastcall CombineSpecialResultEffectComponent__GetEffect(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *name,
        UnityEngine_GameObject_o *parentObj,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__50417328; // x20
  Il2CppObject *v12; // x19

  if ( (byte_4B488D9 & 1) == 0 )
  {
    sub_1BDB878(&Method_AssetData_GetObject_GameObject____77074016, name);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject____77160152, v7);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v8);
    byte_4B488D9 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    return 0LL;
  Object_object__50417328 = AssetData__GetObject_object__50417328(
                              effectAssetData,
                              name,
                              (const MethodInfo_3014EB0 *)Method_AssetData_GetObject_GameObject____77074016);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__50417328, 0LL, 0LL) )
    return 0LL;
  if ( parentObj )
    parentObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parentObj, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__51108928(
          Object_object__50417328,
          (UnityEngine_Transform_o *)parentObj,
          1,
          (const MethodInfo_30BDC40 *)Method_UnityEngine_Object_Instantiate_GameObject____77160152);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v12, 0LL);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v12, 0LL);
  return (UnityEngine_GameObject_o *)v12;
}


int32_t __fastcall CombineSpecialResultEffectComponent__GetOldFriendshipMaxRank(
        CombineSpecialResultEffectComponent_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t klass; // w19
  int klass_high; // w23
  int32_t friendshipExceedCount; // w24
  Il2CppObject *v19; // x20
  float fraction[2]; // [xsp+8h] [xbp-58h] BYREF
  int32_t max[2]; // [xsp+10h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *v23; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4B488E6 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_FriendshipMaster___, userId);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantCollectionMaster___, v8);
    sub_1BDB878(&DataManager_TypeInfo, v9);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4B488E6 = 1;
  }
  entity = 0LL;
  *(_QWORD *)max = 0LL;
  v23 = 0LL;
  *(_QWORD *)fraction = 0LL;
  if ( this->fields.baseUsrSvtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Master_object )
      goto LABEL_22;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           svtId,
           (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !Master_object )
        goto LABEL_22;
      Master_object = (Il2CppObject *)UserServantCollectionMaster__TryGetEntity(
                                        (UserServantCollectionMaster_o *)Master_object,
                                        &v23,
                                        userId,
                                        svtId,
                                        0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( entity && v23 )
        {
          v14 = *(_QWORD *)&v23->fields.friendship.fields.currentCryptoKey;
          v15 = *(_QWORD *)&v23->fields.friendship.fields.fakeValue;
          klass = (int32_t)entity[6].klass;
          klass_high = HIDWORD(entity[6].klass);
          friendshipExceedCount = v23->fields.friendshipExceedCount;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v19 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_FriendshipMaster___);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v25.fields.currentCryptoKey = v14;
          *(_QWORD *)&v25.fields.fakeValue = v15;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v25, 0LL);
          if ( v19 )
          {
            FriendshipMaster__GetFriendshipRank(
              (FriendshipMaster_o *)v19,
              klass,
              (int32_t)Master_object,
              klass_high + friendshipExceedCount - 1,
              max,
              &max[1],
              (int32_t *)&fraction[1],
              fraction,
              0LL);
            return max[1];
          }
        }
LABEL_22:
        sub_1BDBAD4(Master_object, v13);
      }
    }
  }
  return 0;
}


void __fastcall CombineSpecialResultEffectComponent__LoadEffectAsset(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CombineRootComponent_c *v17; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x22

  if ( (byte_4B488D6 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, nextAction);
    sub_1BDB878(&CombineRootComponent_TypeInfo, v5);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent___c__DisplayClass34_0__LoadEffectAsset_b__0__, v7);
    sub_1BDB878(&CombineSpecialResultEffectComponent___c__DisplayClass34_0_TypeInfo, v8);
    byte_4B488D6 = 1;
  }
  v9 = sub_1BDBAC4(CombineSpecialResultEffectComponent___c__DisplayClass34_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = nextAction;
  v14 = v9 + 24;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)nextAction, v15, v16);
  v17 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v17 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v17->static_fields->COMBINE_ASSET_PATH;
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_CombineSpecialResultEffectComponent___c__DisplayClass34_0__LoadEffectAsset_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v19, 1, 0LL) )
  {
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
  }
}


void __fastcall CombineSpecialResultEffectComponent__LoadMovieAsset(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_String_o *movieName; // x20
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v19; // x22

  if ( (byte_4B488D5 & 1) == 0 )
  {
    sub_1BDB878(&AssetManager_TypeInfo, nextAction);
    sub_1BDB878(&CommonUI_TypeInfo, v5);
    sub_1BDB878(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent___c__DisplayClass33_0__LoadMovieAsset_b__0__, v7);
    sub_1BDB878(&CombineSpecialResultEffectComponent___c__DisplayClass33_0_TypeInfo, v8);
    byte_4B488D5 = 1;
  }
  v9 = sub_1BDBAC4(CombineSpecialResultEffectComponent___c__DisplayClass33_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BDBAD4(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = nextAction;
  v14 = v9 + 24;
  sub_1BDB81C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)nextAction, v15, v16);
  if ( System_String__IsNullOrEmpty(this->fields.movieName, 0LL) )
    goto LABEL_16;
  movieName = this->fields.movieName;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  MoviePath = CommonUI__CreateMoviePath(movieName, 0LL);
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1BDBAC4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v9,
    Method_CombineSpecialResultEffectComponent___c__DisplayClass33_0__LoadMovieAsset_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v19, 1, 0LL) )
  {
LABEL_16:
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
  }
}


void __fastcall CombineSpecialResultEffectComponent__OnClick(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v17; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v19; // x0
  __int64 *v20; // x8
  System_Action_o *v21; // x21
  System_Action_o *v22; // x0
  __int64 *v23; // x8
  System_Action_o *v24; // x0
  __int64 *v25; // x8
  System_Action_o *v26; // x0
  __int64 *v27; // x8
  System_Action_o *v28; // x20
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2
  AvalonSceneManager_c *v31; // x8
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x2
  System_Action_o *v34; // x20
  const MethodInfo *v35; // x2

  if ( (byte_4B488E4 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&AvalonSceneManager_TypeInfo, v3);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_0__, v4);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_1__, v5);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_2__, v6);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_3__, v7);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_4__, v8);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_5__, v9);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_6__, v10);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_7__, v11);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_8__, v12);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_9__, v13);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    byte_4B488E4 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_37;
  if ( UnityEngine_Collider__get_enabled(bgCollider, 0LL) )
  {
    bgCollider = this->fields.bgCollider;
    if ( !bgCollider )
      goto LABEL_37;
    UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
    if ( this->fields.isSkipDetail )
    {
      this->fields.noticeState = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v17 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v17 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
      v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
      v20 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_0__;
LABEL_10:
      v21 = v19;
      System_Action___ctor(v19, (Il2CppObject *)this, *v20, 0LL);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v21, 0LL);
        return;
      }
LABEL_37:
      sub_1BDBAD4(bgCollider, method);
    }
    switch ( this->fields.noticeState )
    {
      case 1:
        this->fields.noticeState = 2;
        CombineSpecialResultEffectComponent__ShowSkillChangeMessage(this, method);
        return;
      case 2:
        this->fields.noticeState = 3;
        v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        v23 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_1__;
        goto LABEL_26;
      case 3:
        bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
        if ( !bgCollider )
          goto LABEL_37;
        if ( CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
               (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
               method) )
        {
          this->fields.noticeState = 4;
          v24 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          v25 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_2__;
        }
        else
        {
          this->fields.noticeState = 5;
          v24 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          v25 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_3__;
        }
        v32 = v24;
        System_Action___ctor(v24, (Il2CppObject *)this, *v25, 0LL);
        bgCollider = (UnityEngine_Collider_o *)this->fields.rarityResultInfoWindow;
        if ( !bgCollider )
          goto LABEL_37;
        RarityResultWindowComponent__CloseToNext((RarityResultWindowComponent_o *)bgCollider, v32, v33);
        return;
      case 4:
        bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
        if ( !bgCollider )
          goto LABEL_37;
        ++bgCollider->fields.m_CachedPtr;
        if ( CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
               (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
               method) )
        {
          v26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          v27 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_4__;
        }
        else
        {
          this->fields.noticeState = 5;
          v26 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
          v27 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_5__;
        }
        v34 = v26;
        System_Action___ctor(v26, (Il2CppObject *)this, *v27, 0LL);
        bgCollider = (UnityEngine_Collider_o *)this->fields.skillExtraResultInfoWindow;
        if ( !bgCollider )
          goto LABEL_37;
        SkillUpExtraResultWindowComponent__CloseToNext((SkillUpExtraResultWindowComponent_o *)bgCollider, v34, v35);
        return;
      case 5:
        this->fields.noticeState = 6;
        v28 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        System_Action___ctor(
          v28,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__OnClick_b__57_6__,
          0LL);
        bgCollider = (UnityEngine_Collider_o *)this->fields.classPassiveResultWindow;
        if ( !bgCollider )
          goto LABEL_37;
        ClassPassiveResultWindowComponent__CloseToNext((ClassPassiveResultWindowComponent_o *)bgCollider, v28, 0LL);
        return;
      case 6:
        this->fields.noticeState = 7;
        v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        v23 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_7__;
        goto LABEL_26;
      case 7:
        this->fields.noticeState = 8;
        v22 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        v23 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_8__;
LABEL_26:
        v29 = v22;
        System_Action___ctor(v22, (Il2CppObject *)this, *v23, 0LL);
        bgCollider = (UnityEngine_Collider_o *)this->fields.skillResultInfoWindow;
        if ( !bgCollider )
          goto LABEL_37;
        SkillUpResultWindowComponent__CloseToNext((SkillUpResultWindowComponent_o *)bgCollider, v29, v30);
        break;
      case 8:
        this->fields.noticeState = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v31 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v31 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v31->static_fields->DEFAULT_FADE_TIME;
        v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
        v20 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_9__;
        goto LABEL_10;
      default:
        return;
    }
  }
}


void __fastcall CombineSpecialResultEffectComponent__Play(
        CombineSpecialResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        UserServantEntity_o *resData,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  struct ServantOverwriteStatus_o *OverwriteStatus; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *v23; // x23
  const MethodInfo *v24; // x1
  struct CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o **p_costumeSkillInfoManager; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UserServantEntity_o *baseUsrSvtData; // x23
  __int64 v29; // x24
  __int64 v30; // x25
  int32_t v31; // w0
  UserServantEntity_o *v32; // x23
  int32_t v33; // w0
  __int64 lv; // x2
  const MethodInfo *v35; // x3
  il2cpp_array_size_t i; // w25
  SkillInfo_o *v37; // x8
  int32_t id; // w23
  const MethodInfo *v39; // x7
  int32_t v40; // w5
  SkillInfo_o *v41; // x8
  SkillInfo_o *v42; // x9
  SkillInfo_o *v43; // x8
  ServantSkillAddEntity_o *v44; // [xsp+0h] [xbp-60h] BYREF
  SkillInfo_array *v45; // [xsp+8h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4B488D7 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, baseData);
    sub_1BDB878(&CombineSpecialResultEffectComponent_CostumeSkillInfoManager_TypeInfo, v11);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_4B488D7 = 1;
  }
  skillInfoList = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  this->fields.baseUsrSvtData = baseData;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)resData,
    (const MethodInfo *)svtCostumeEnt);
  this->fields.resUsrSvtData = resData;
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v14, v15);
  this->fields.servantCostumeEntity = svtCostumeEnt;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.servantCostumeEntity, (int32_t)svtCostumeEnt, v16, v17);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_38;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(resUsrSvtData, 0LL, 0LL);
  this->fields.resultSvtOverwriteStatus = OverwriteStatus;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.resultSvtOverwriteStatus, (int32_t)OverwriteStatus, v21, v22);
  v23 = (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)sub_1BDBAC4(CombineSpecialResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager___ctor(v23, v24);
  this->fields.costumeSkillInfoManager = v23;
  p_costumeSkillInfoManager = &this->fields.costumeSkillInfoManager;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v23, v26, v27);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_38;
  v30 = *(_QWORD *)&baseUsrSvtData->fields.dispLimitCount.fields.currentCryptoKey;
  v29 = *(_QWORD *)&baseUsrSvtData->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v47.fields.currentCryptoKey = v30;
  *(_QWORD *)&v47.fields.fakeValue = v29;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v47, 0LL);
  UserServantEntity__getSkillInfo(baseUsrSvtData, &skillInfoList, -1, v31, 1, 0, -1, 0LL);
  v32 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
LABEL_38:
    sub_1BDBAD4(resUsrSvtData, v18);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v32->fields.dispLimitCount, 0LL);
  UserServantEntity__getSkillInfo(v32, &v45, -1, v33, 1, 0, -1, 0LL);
  for ( i = 0; ; ++i )
  {
    resUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      resUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)&resUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 40LL) )
      break;
    if ( !v45 )
      goto LABEL_38;
    if ( i >= v45->max_length )
      goto LABEL_39;
    v37 = v45->m_Items[i];
    if ( !v37 )
      goto LABEL_38;
    resUsrSvtData = *p_resUsrSvtData;
    if ( !*p_resUsrSvtData )
      goto LABEL_38;
    id = v37->fields.id;
    resUsrSvtData = (UserServantEntity_o *)UserServantEntity__TryGetServantSkillAddBySkillId(
                                             resUsrSvtData,
                                             &v44,
                                             id,
                                             0LL);
    if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
    {
      resUsrSvtData = (UserServantEntity_o *)v44;
      if ( !v44 )
        goto LABEL_38;
      resUsrSvtData = (UserServantEntity_o *)ServantSkillAddEntity__GetBaseSkillId(v44, 0LL);
      if ( !v44 )
        goto LABEL_38;
      id = (int)resUsrSvtData;
      resUsrSvtData = (UserServantEntity_o *)ServantSkillAddEntity__GetExchangedSkillId(v44, 0LL);
      v40 = (int)resUsrSvtData;
    }
    else
    {
      v40 = 0;
    }
    if ( id < 1 )
      continue;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( i >= skillInfoList->max_length )
      goto LABEL_39;
    v41 = skillInfoList->m_Items[i];
    if ( !v41 )
      goto LABEL_38;
    v18 = (unsigned int)v41->fields.id;
    lv = (unsigned int)v41->fields.lv;
    if ( (_DWORD)v18 == id )
    {
      if ( !v45 )
        goto LABEL_38;
      if ( i >= v45->max_length )
LABEL_39:
        sub_1BDBADC(resUsrSvtData, v18, lv);
      v42 = v45->m_Items[i];
      if ( !v42 )
        goto LABEL_38;
      if ( (_DWORD)lv == v42->fields.lv )
        continue;
    }
    else if ( !v45 )
    {
      goto LABEL_38;
    }
    if ( i >= v45->max_length )
      goto LABEL_39;
    v43 = v45->m_Items[i];
    if ( !v43 )
      goto LABEL_38;
    resUsrSvtData = (UserServantEntity_o *)*p_costumeSkillInfoManager;
    if ( !*p_costumeSkillInfoManager )
      goto LABEL_38;
    CombineSpecialResultEffectComponent_CostumeSkillInfoManager__Add(
      (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)resUsrSvtData,
      v18,
      lv,
      id,
      v43->fields.lv,
      v40,
      v43->fields.lv,
      v39);
  }
  CombineSpecialResultEffectComponent__Play_47365964(this, endAction, 0, v35);
}


void __fastcall CombineSpecialResultEffectComponent__PlayMovie(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  CommonUI_c *v7; // x0
  struct CRIMoviePlayer_o *CriMoviePlayer; // x0
  struct CRIMoviePlayer_o **p_moviePlayer; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x1
  __int64 v14; // x1
  System_String_o *MoviePath; // x22
  AssetData_o *movieAssetData; // x0
  float v17; // s0
  int32_t fadeStartFrame; // w24
  CRIMoviePlayer_o *v19; // x20
  System_String_o *Path; // x23
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B488DA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&BgmManager_TypeInfo, v3);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__PlayMovie_b__38_0__, v4);
    sub_1BDB878(&CommonUI_TypeInfo, v5);
    byte_4B488DA = 1;
  }
  if ( this->fields.movieAssetData && !System_String__IsNullOrEmpty(this->fields.movieName, 0LL) )
  {
    v7 = CommonUI_TypeInfo;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
      v7 = CommonUI_TypeInfo;
    }
    CriMoviePlayer = CombineSpecialResultEffectComponent__GetCriMoviePlayer(
                       this,
                       v7->static_fields->MoviePlayerObjectPath,
                       v6);
    this->fields.moviePlayer = CriMoviePlayer;
    p_moviePlayer = &this->fields.moviePlayer;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.moviePlayer, (int32_t)CriMoviePlayer, v10, v11);
    v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(
      v12,
      (Il2CppObject *)this,
      Method_CombineSpecialResultEffectComponent__PlayMovie_b__38_0__,
      0LL);
    MoviePath = CombineSpecialResultEffectComponent__CreateMoviePath(this->fields.movieName, v13);
    movieAssetData = this->fields.movieAssetData;
    v17 = this->fields.animStartedTime * 30.0;
    if ( v17 == INFINITY )
      fadeStartFrame = 0x80000000;
    else
      fadeStartFrame = (int)v17;
    if ( !movieAssetData )
      goto LABEL_22;
    v19 = *p_moviePlayer;
    Path = AssetData__get_Path(movieAssetData, 0LL);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4B3FA3F )
    {
      sub_1BDB878(&BgmManager_TypeInfo, v14);
      byte_4B3FA3F = 1;
    }
    movieAssetData = (AssetData_o *)BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      movieAssetData = (AssetData_o *)BgmManager_TypeInfo;
    }
    if ( !v19 )
      goto LABEL_22;
    CRIMoviePlayer__Initialize(
      v19,
      MoviePath,
      Path,
      *((float *)movieAssetData[2].monitor + 9),
      0,
      0LL,
      v12,
      0,
      0LL,
      1,
      fadeStartFrame,
      1,
      0LL,
      0LL);
    movieAssetData = (AssetData_o *)*p_moviePlayer;
    if ( !*p_moviePlayer
      || (v21.fields.r = 0.0,
          v21.fields.g = 0.0,
          v21.fields.b = 0.0,
          v21.fields.a = 1.0,
          CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)movieAssetData, v21, 0LL),
          (movieAssetData = (AssetData_o *)*p_moviePlayer) == 0LL) )
    {
LABEL_22:
      sub_1BDBAD4(movieAssetData, v14);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)movieAssetData, 1, 0, 0, 0, 0LL);
  }
}


void __fastcall CombineSpecialResultEffectComponent__Play_47365964(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *endAction,
        bool isSkipResultDetail,
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
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UISprite_o *touchInfoBaseSprite; // x20
  __int64 v20; // x20
  System_Action_object__o *v21; // x21
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  System_Action_object__o *v24; // x21
  const MethodInfo *v25; // x3
  ActionChain_o *v26; // x21
  __int64 v27; // x20
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3

  if ( (byte_4B488D8 & 1) == 0 )
  {
    sub_1BDB878(&ActionChain_TypeInfo, endAction);
    sub_1BDB878(&System_Action___TypeInfo, v7);
    sub_1BDB878(&System_Action_Action____TypeInfo, v8);
    sub_1BDB878(&System_Action_Action__TypeInfo, v9);
    sub_1BDB878(&System_Action_TypeInfo, v10);
    sub_1BDB878(&AtlasManager_TypeInfo, v11);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent_LoadEffectAsset__, v12);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent_LoadMovieAsset__, v13);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__Play_b__36_0__, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BDB878(&StringLiteral_20736/*"img_txt_touchscreen_sp"*/, v16);
    byte_4B488D8 = 1;
  }
  this->fields.isSkipDetail = isSkipResultDetail;
  this->fields.endCallbackFunc = endAction;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.endCallbackFunc, (int32_t)endAction, isSkipResultDetail, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  touchInfoBaseSprite = this->fields.touchInfoBaseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(touchInfoBaseSprite, (System_String_o *)StringLiteral_20736/*"img_txt_touchscreen_sp"*/, 0LL);
  AtlasManager__SetDownloadCommonSprite(this->fields.touchInfoEffectSprite, (System_String_o *)StringLiteral_20736/*"img_txt_touchscreen_sp"*/, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgCollider;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  gameObject = this->fields.touchInfo;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0LL);
  v20 = sub_1BDB920(System_Action_Action____TypeInfo, 2LL);
  v21 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent_LoadMovieAsset__,
    0LL);
  if ( !v20 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v20 + 24) )
    goto LABEL_18;
  *(_QWORD *)(v20 + 32) = v21;
  sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 32), (int32_t)v21, (unsigned __int8)v22, v23);
  v24 = (System_Action_object__o *)sub_1BDBAC4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent_LoadEffectAsset__,
    0LL);
  if ( *(_DWORD *)(v20 + 24) <= 1u )
    goto LABEL_18;
  *(_QWORD *)(v20 + 40) = v24;
  sub_1BDB81C((CGThumbnailListItem_o *)(v20 + 40), (int32_t)v24, (unsigned __int8)v22, v25);
  v26 = (ActionChain_o *)sub_1BDBAC4(ActionChain_TypeInfo);
  ActionChain___ctor_48337224(v26, (System_Action_Action__array *)v20, 0LL);
  v27 = sub_1BDB920(System_Action___TypeInfo, 1LL);
  v28 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v28, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__Play_b__36_0__, 0LL);
  if ( !v27 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v27 + 24) )
LABEL_18:
    sub_1BDBADC(gameObject, v18, v22);
  *(_QWORD *)(v27 + 32) = v28;
  sub_1BDB81C((CGThumbnailListItem_o *)(v27 + 32), (int32_t)v28, (unsigned __int8)v22, v29);
  if ( !v26
    || (gameObject = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                   (ChainableActionBase_o *)v26,
                                                   (System_Action_array *)v27,
                                                   0LL)) == 0LL )
  {
LABEL_17:
    sub_1BDBAD4(gameObject, v18);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)gameObject, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent__ShowClassPassiveResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ClassPassiveResultWindowComponent_o *classPassiveResultWindow; // x20
  UserServantEntity_o *baseUsrSvtData; // x21
  UserServantEntity_o *resUsrSvtData; // x22
  ServantCostumeEntity_o *servantCostumeEntity; // x23
  System_Action_o *v8; // x24
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B488E0 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent_EndDisp__, v3);
    byte_4B488E0 = 1;
  }
  classPassiveResultWindow = this->fields.classPassiveResultWindow;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  resUsrSvtData = this->fields.resUsrSvtData;
  servantCostumeEntity = this->fields.servantCostumeEntity;
  v8 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0LL);
  if ( !classPassiveResultWindow )
    sub_1BDBAD4(v9, v10);
  ClassPassiveResultWindowComponent__Open(
    classPassiveResultWindow,
    baseUsrSvtData,
    resUsrSvtData,
    servantCostumeEntity,
    v8,
    0LL);
}


void __fastcall CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v8; // q1
  struct UserServantEntity_o *v9; // x8
  int64_t v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w0
  const MethodInfo *v14; // x3
  int32_t OldFriendshipMaxRank; // w0
  FriendshipExceedResultWindowComponent_o *friendshipExceedResultWindow; // x20
  UserServantEntity_o *resUsrSvtData; // x21
  int32_t v18; // w22
  System_Action_o *v19; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_4B488E3 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo_b__55_0__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    byte_4B488E3 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  *(_OWORD *)&v21.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v21.fields.fakeValue = v8;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v20 = v21;
  bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v20, 0LL);
  v9 = this->fields.baseUsrSvtData;
  if ( !v9 )
    goto LABEL_12;
  v10 = (int64_t)bgCollider;
  v12 = *(_QWORD *)&v9->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&v9->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v22.fields.currentCryptoKey = v12;
  *(_QWORD *)&v22.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v22, 0LL);
  OldFriendshipMaxRank = CombineSpecialResultEffectComponent__GetOldFriendshipMaxRank(this, v10, v13, v14);
  friendshipExceedResultWindow = this->fields.friendshipExceedResultWindow;
  resUsrSvtData = this->fields.resUsrSvtData;
  v18 = OldFriendshipMaxRank;
  v19 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo_b__55_0__,
    0LL);
  if ( !friendshipExceedResultWindow )
LABEL_12:
    sub_1BDBAD4(bgCollider, method);
  FriendshipExceedResultWindowComponent__OpenFriendshipExceedInfo(
    friendshipExceedResultWindow,
    resUsrSvtData,
    v18,
    v19,
    0LL);
}


void __fastcall CombineSpecialResultEffectComponent__ShowLevelExceedDescription(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w21
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4B488E2 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__ShowLevelExceedDescription_b__53_0__, v3);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1BDB878(&StringLiteral_3867/*"COSTUME_CHANGE_DESCRIPTION_LEVEL_EXCEED"*/, v5);
    byte_4B488E2 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_9;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v10 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = v10;
  *(_QWORD *)&v14.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v14, 0LL);
  v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowLevelExceedDescription_b__53_0__,
    0LL);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1BDBAD4(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage_47368504(
    skillResultInfoWindow,
    v11,
    (System_String_o *)StringLiteral_3867/*"COSTUME_CHANGE_DESCRIPTION_LEVEL_EXCEED"*/,
    v12,
    v13);
}


void __fastcall CombineSpecialResultEffectComponent__ShowRarityResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t v5; // w20
  struct ServantOverwriteStatus_o *resultSvtOverwriteStatus; // x8
  int32_t v7; // w21
  int32_t Rarity_k__BackingField; // w22
  int32_t Cost_k__BackingField; // w23
  RarityResultWindowComponent_o *rarityResultInfoWindow; // x25
  ServantCostumeEntity_o *servantCostumeEntity; // x24
  System_Action_o *v12; // x26
  const MethodInfo *v13; // x7

  if ( (byte_4B488DF & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent_EndDisp__, v3);
    byte_4B488DF = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_8;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getRarity(baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_8;
  v5 = (int)baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getCost(this->fields.baseUsrSvtData, 0LL);
  resultSvtOverwriteStatus = this->fields.resultSvtOverwriteStatus;
  if ( !resultSvtOverwriteStatus
    || (v7 = (int)baseUsrSvtData,
        Rarity_k__BackingField = resultSvtOverwriteStatus->fields._Rarity_k__BackingField,
        Cost_k__BackingField = resultSvtOverwriteStatus->fields._Cost_k__BackingField,
        rarityResultInfoWindow = this->fields.rarityResultInfoWindow,
        servantCostumeEntity = this->fields.servantCostumeEntity,
        v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0LL),
        !rarityResultInfoWindow) )
  {
LABEL_8:
    sub_1BDBAD4(baseUsrSvtData, method);
  }
  RarityResultWindowComponent__Open(
    rarityResultInfoWindow,
    v5,
    v7,
    Rarity_k__BackingField,
    Cost_k__BackingField,
    servantCostumeEntity,
    v12,
    v13);
}


void __fastcall CombineSpecialResultEffectComponent__ShowSkillChangeMessage(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  struct ServantCostumeEntity_o *servantCostumeEntity; // x8
  int32_t v16; // w21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct ServantCostumeEntity_o *v20; // x8
  Il2CppObject *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x22
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x4
  int32_t id; // [xsp+8h] [xbp-48h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B488DD & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__ShowSkillChangeMessage_b__43_0__, v3);
    sub_1BDB878(&int_TypeInfo, v4);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_3868/*"COSTUME_CHANGE_DESCRIPTION_{0}_{1}"*/, v6);
    byte_4B488DD = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_11;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v11 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v11;
  *(_QWORD *)&v28.fields.fakeValue = v10;
  bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v28, 0LL);
  servantCostumeEntity = this->fields.servantCostumeEntity;
  if ( !servantCostumeEntity )
    goto LABEL_11;
  v16 = (int)bgCollider;
  svtId = servantCostumeEntity->fields.svtId;
  bgCollider = (UnityEngine_Collider_o *)j_il2cpp_value_box_0(int_TypeInfo, &svtId, v12, v13, v14);
  v20 = this->fields.servantCostumeEntity;
  if ( !v20
    || (v21 = (Il2CppObject *)bgCollider,
        id = v20->fields.id,
        v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v17, v18, v19),
        v23 = System_String__Format_62613552((System_String_o *)StringLiteral_3868/*"COSTUME_CHANGE_DESCRIPTION_{0}_{1}"*/, v21, v22, 0LL),
        v24 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(
          v24,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__ShowSkillChangeMessage_b__43_0__,
          0LL),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_1BDBAD4(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenSkillChangeMessage_47368504(skillResultInfoWindow, v16, v23, v24, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Collider_o *bgCollider; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x8
  UnityEngine_Collider_c *klass; // x9
  _DWORD *monitor; // x10
  SkillUpExtraResultWindowComponent_o *skillExtraResultInfoWindow; // x20
  int32_t v12; // w21
  int32_t v13; // w22
  int32_t name; // w23
  int32_t name_high; // w24
  int32_t v16; // w25
  int32_t v17; // w26
  ServantCostumeEntity_o *servantCostumeEntity; // x27
  System_Action_o *callback; // x28
  const MethodInfo *v20; // [xsp+8h] [xbp-68h]

  if ( (byte_4B488DE & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, *(_QWORD *)&index);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo_b__45_0__, v5);
    byte_4B488DE = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0LL);
  bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
  if ( !bgCollider )
    goto LABEL_11;
  bgCollider = (UnityEngine_Collider_o *)CombineSpecialResultEffectComponent_CostumeSkillInfoManager__GetSkillChangeInfo(
                                           (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
                                           index,
                                           v7);
  if ( !bgCollider )
    goto LABEL_11;
  v8 = *(_QWORD *)&bgCollider->fields.m_CachedPtr;
  if ( !v8 )
    goto LABEL_11;
  klass = bgCollider[1].klass;
  if ( !klass )
    goto LABEL_11;
  monitor = bgCollider[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  skillExtraResultInfoWindow = this->fields.skillExtraResultInfoWindow;
  v12 = *(_DWORD *)(v8 + 16);
  v13 = *(_DWORD *)(v8 + 20);
  name = (int32_t)klass->_1.name;
  name_high = HIDWORD(klass->_1.name);
  v16 = monitor[4];
  v17 = monitor[5];
  servantCostumeEntity = this->fields.servantCostumeEntity;
  callback = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(
    callback,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo_b__45_0__,
    0LL);
  if ( !skillExtraResultInfoWindow )
LABEL_11:
    sub_1BDBAD4(bgCollider, *(_QWORD *)&index);
  SkillUpExtraResultWindowComponent__OpenSkillChangeResultInfo(
    skillExtraResultInfoWindow,
    v12,
    v13,
    name,
    name_high,
    v16,
    v17,
    servantCostumeEntity,
    callback,
    v20);
}


void __fastcall CombineSpecialResultEffectComponent__ShowTreasureDeviceChangeInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x20
  int64_t Master_object; // x0
  __int64 v12; // x1
  __int128 v13; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  Il2CppObject *Entity; // x21
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantTreasureDeviceAddMaster_o *v17; // x20
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w21
  int32_t v21; // w22
  int32_t v22; // w20
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t id; // w23
  int32_t lv; // w24
  int32_t v26; // w22
  int32_t v27; // w25
  System_Action_o *v28; // x26
  const MethodInfo *v29; // [xsp+8h] [xbp-A8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+30h] [xbp-80h]
  TreasureDvcInfo_o *v32; // [xsp+58h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4B488E1 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent_EndDisp__, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___, v4);
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v7);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    byte_4B488E1 = 1;
  }
  tdInfo = 0LL;
  v32 = 0LL;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_24;
  v13 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v31.fields.fakeValue = v13;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v30 = v31;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v30, 0LL);
  if ( !v14 )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v14,
             Master_object,
             (const MethodInfo_32E4398 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Master_object = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
  if ( !Entity )
    goto LABEL_24;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v32, -1, -1, 0, 0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_24;
  v17 = (ServantTreasureDeviceAddMaster_o *)Master_object;
  v19 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v19;
  *(_QWORD *)&v34.fields.fakeValue = v18;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v34, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_24;
  v20 = Master_object;
  Master_object = UserServantEntity__getLimitCount(this->fields.resUsrSvtData, 0LL);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_24;
  v21 = Master_object;
  Master_object = UserServantEntity__getDispLimitCount(this->fields.resUsrSvtData, 0, 0LL);
  if ( !v32 || !v17 )
    goto LABEL_24;
  Master_object = (int64_t)ServantTreasureDeviceAddMaster__GetEnableEntity(
                             v17,
                             v20,
                             v21,
                             Master_object,
                             v32->fields.id,
                             0,
                             0LL);
  if ( Master_object )
  {
    Master_object = ServantTreasureDeviceAddEntity__GetExchangedTreasureDeviceId(
                      (ServantTreasureDeviceAddEntity_o *)Master_object,
                      0LL);
    v22 = Master_object;
  }
  else
  {
    v22 = 0;
  }
  if ( !tdInfo
    || !v32
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v27 = v32->fields.id,
        v26 = v32->fields.lv,
        v28 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo),
        System_Action___ctor(v28, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0LL),
        !skillResultInfoWindow) )
  {
LABEL_24:
    sub_1BDBAD4(Master_object, v12);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo_47372976(
    skillResultInfoWindow,
    id,
    lv,
    v27,
    v26,
    v22,
    v26,
    v28,
    this->fields.servantCostumeEntity,
    v29);
}


void __fastcall CombineSpecialResultEffectComponent__StartAnimation(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  char *fsm; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_String_o *effectAnimName; // x1

  if ( (byte_4B488DC & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_12279/*"START_ANIMATION"*/, method);
    sub_1BDB878(&StringLiteral_13014/*"StartAnimationName"*/, v3);
    byte_4B488DC = 1;
  }
  fsm = (char *)this->fields.fsm;
  if ( !fsm
    || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0LL)) == 0LL
    || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                        (System_String_o *)StringLiteral_13014/*"StartAnimationName"*/,
                        0LL)) == 0LL
    || (effectAnimName = this->fields.effectAnimName,
        *((_QWORD *)fsm + 7) = effectAnimName,
        sub_1BDB81C((CGThumbnailListItem_o *)(fsm + 56), (int32_t)effectAnimName, v5, v6),
        (fsm = (char *)this->fields.fsm) == 0LL) )
  {
    sub_1BDBAD4(fsm, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12279/*"START_ANIMATION"*/, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent__StartResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchInfo; // x0

  touchInfo = this->fields.touchInfo;
  this->fields.noticeState = 1;
  if ( !touchInfo
    || (UnityEngine_GameObject__SetActive(touchInfo, 1, 0LL),
        (touchInfo = (UnityEngine_GameObject_o *)this->fields.bgCollider) == 0LL) )
  {
    sub_1BDBAD4(touchInfo, method);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)touchInfo, 1, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent___OnClick_b__57_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endCallbackFunc; // x8

  endCallbackFunc = this->fields.endCallbackFunc;
  if ( endCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallbackFunc->fields.m_target)(
      endCallbackFunc->fields.original_method_info,
      *(_QWORD *)&endCallbackFunc->fields.extra_arg);
}


void __fastcall CombineSpecialResultEffectComponent___OnClick_b__57_2(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x8

  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    sub_1BDBAD4(this, method);
  CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo(this, costumeSkillInfoManager->fields.Index, v2);
}


void __fastcall CombineSpecialResultEffectComponent___OnClick_b__57_4(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x8

  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    sub_1BDBAD4(this, method);
  CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo(this, costumeSkillInfoManager->fields.Index, v2);
}


void __fastcall CombineSpecialResultEffectComponent___OnClick_b__57_9(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endCallbackFunc; // x8

  endCallbackFunc = this->fields.endCallbackFunc;
  if ( endCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallbackFunc->fields.m_target)(
      endCallbackFunc->fields.original_method_info,
      *(_QWORD *)&endCallbackFunc->fields.extra_arg);
}


void __fastcall CombineSpecialResultEffectComponent___PlayMovie_b__38_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *moviePlayer; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x20

  if ( (byte_4B488EC & 1) == 0 )
  {
    sub_1BDB878(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    byte_4B488EC = 1;
  }
  moviePlayer = (UnityEngine_Component_o *)this->fields.moviePlayer;
  if ( !moviePlayer
    || (gameObject = UnityEngine_Component__get_gameObject(moviePlayer, 0LL),
        (moviePlayer = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                    gameObject,
                                                    (const MethodInfo_308A008 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___)) == 0LL) )
  {
    sub_1BDBAD4(moviePlayer, method);
  }
  v5 = moviePlayer;
  *(float *)&moviePlayer[2].monitor = this->fields.movieFadeOutTime;
  *(float *)&moviePlayer[5].monitor = TweenAlpha__get_value((TweenAlpha_o *)moviePlayer, 0LL);
  HIDWORD(v5[5].monitor) = 0;
}


void __fastcall CombineSpecialResultEffectComponent___Play_b__36_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *Effect; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v11; // x1
  System_Action_o *v12; // x20
  System_Collections_IEnumerator_o *v13; // x1

  if ( (byte_4B488EA & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_CombineSpecialResultEffectComponent__Play_b__36_1__, v4);
    sub_1BDB878(&StringLiteral_11355/*"ResultEffect"*/, v5);
    byte_4B488EA = 1;
  }
  Effect = CombineSpecialResultEffectComponent__GetEffect(
             this,
             this->fields.effectPrefabName,
             this->fields.effectParent,
             v2);
  this->fields.effect = Effect;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Effect, v7, v8);
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0LL)) == 0LL
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11355/*"ResultEffect"*/,
                                  0LL)) == 0LL )
  {
    sub_1BDBAD4(fsm, v9);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, this->fields.effect, 0LL);
  CombineSpecialResultEffectComponent__PlayMovie(this, v11);
  v12 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__Play_b__36_1__, 0LL);
  v13 = BasicHelper__DelayCall(0.132, v12, 1, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent___Play_b__36_1(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B488EB & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_12310/*"START_SPECIAL_EFFECT"*/, method);
    byte_4B488EB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BDBAD4(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12310/*"START_SPECIAL_EFFECT"*/, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent___ShowFriendshipExceedInfo_b__55_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BDBAD4(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent___ShowLevelExceedDescription_b__53_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BDBAD4(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent___ShowSkillChangeMessage_b__43_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BDBAD4(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent___ShowSkillChangeResultInfo_b__45_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1BDBAD4(0LL, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor(
        CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent_CostumeSkillInfo___ctor(
        CombineSpecialResultEffectComponent_CostumeSkillInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent_CostumeSkillInfoManager___ctor(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B488F0 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor__,
      method);
    sub_1BDB878(
      &System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__TypeInfo,
      v3);
    byte_4B488F0 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__o *)v4;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineSpecialResultEffectComponent_CostumeSkillInfoManager__Add(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t beforeSkillId,
        int32_t breforeSkillLv,
        int32_t afterSkillId,
        int32_t afterSkillLv,
        int32_t exAfterSkillId,
        int32_t exAfterSkillLv,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x19
  __int64 v18; // x27
  System_Collections_Generic_List_object__o *skillList; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x25
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8

  if ( (byte_4B488ED & 1) == 0 )
  {
    sub_1BDB878(&CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_TypeInfo, *(_QWORD *)&beforeSkillId);
    sub_1BDB878(&CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo, v15);
    sub_1BDB878(
      &Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__Add__,
      v16);
    byte_4B488ED = 1;
  }
  v17 = sub_1BDBAC4(CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  v18 = sub_1BDBAC4(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  if ( !v18 )
    goto LABEL_12;
  *(_DWORD *)(v18 + 16) = beforeSkillId;
  *(_DWORD *)(v18 + 20) = breforeSkillLv;
  if ( !v17 )
    goto LABEL_12;
  *(_QWORD *)(v17 + 16) = v18;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 16), v18, v21, v22);
  v23 = sub_1BDBAC4(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_12;
  *(_DWORD *)(v23 + 16) = afterSkillId;
  *(_DWORD *)(v23 + 20) = afterSkillLv;
  *(_QWORD *)(v17 + 24) = v23;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 24), v23, v24, v25);
  v26 = sub_1BDBAC4(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v26, 0LL);
  if ( !v26 )
    goto LABEL_12;
  *(_DWORD *)(v26 + 16) = exAfterSkillId;
  *(_DWORD *)(v26 + 20) = exAfterSkillLv;
  *(_QWORD *)(v17 + 32) = v26;
  sub_1BDB81C((CGThumbnailListItem_o *)(v17 + 32), v26, v27, v28);
  skillList = (System_Collections_Generic_List_object__o *)this->fields.skillList;
  if ( !skillList
    || (items = skillList->fields._items,
        v32 = Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__Add__,
        ++skillList->fields._version,
        !items) )
  {
LABEL_12:
    sub_1BDBAD4(skillList, v20);
  }
  size = skillList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillList,
      (Il2CppObject *)v17,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &items->obj.klass + size;
    skillList->fields._size = size + 1;
    v34[4] = (Il2CppClass *)v17;
    sub_1BDB81C((CGThumbnailListItem_o *)(v34 + 4), v17, v29, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *__fastcall CombineSpecialResultEffectComponent_CostumeSkillInfoManager__GetSkillChangeInfo(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *skillList; // x0

  if ( (byte_4B488EE & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Item__,
      *(_QWORD *)&index);
    byte_4B488EE = 1;
  }
  skillList = (System_Collections_Generic_List_object__o *)this->fields.skillList;
  if ( !skillList )
    sub_1BDBAD4(0LL, *(_QWORD *)&index);
  return (CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                                           skillList,
                                                                           index,
                                                                           (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Item__);
}


bool __fastcall CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__o *skillList; // x8
  int size; // w8

  v2 = this;
  if ( (byte_4B488EF & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)sub_1BDB878(
                                                                              &Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Count__,
                                                                              method);
    byte_4B488EF = 1;
  }
  skillList = v2->fields.skillList;
  if ( !skillList )
    sub_1BDBAD4(this, method);
  size = skillList->fields._size;
  return size >= 1 && v2->fields.Index < size;
}


void __fastcall CombineSpecialResultEffectComponent___c__DisplayClass33_0___ctor(
        CombineSpecialResultEffectComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent___c__DisplayClass33_0___LoadMovieAsset_b__0(
        CombineSpecialResultEffectComponent___c__DisplayClass33_0_o *this,
        AssetData_o *movieAsset,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CombineSpecialResultEffectComponent_o *_4__this; // x0
  struct System_Action_o *nextAction; // x8

  if ( movieAsset )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1BDBAD4(0LL, movieAsset);
    _4__this->fields.movieAssetData = movieAsset;
    sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.movieAssetData, (int32_t)movieAsset, (int32_t)method, v3);
  }
  nextAction = this->fields.nextAction;
  if ( nextAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))nextAction->fields.m_target)(
      nextAction->fields.original_method_info,
      *(_QWORD *)&nextAction->fields.extra_arg);
}


void __fastcall CombineSpecialResultEffectComponent___c__DisplayClass34_0___ctor(
        CombineSpecialResultEffectComponent___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineSpecialResultEffectComponent___c__DisplayClass34_0___LoadEffectAsset_b__0(
        CombineSpecialResultEffectComponent___c__DisplayClass34_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CombineSpecialResultEffectComponent_o *_4__this; // x0
  struct System_Action_o *nextAction; // x8

  if ( data )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_1BDBAD4(0LL, data);
    _4__this->fields.effectAssetData = data;
    sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.effectAssetData, (int32_t)data, (int32_t)method, v3);
  }
  nextAction = this->fields.nextAction;
  if ( nextAction )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))nextAction->fields.m_target)(
      nextAction->fields.original_method_info,
      *(_QWORD *)&nextAction->fields.extra_arg);
}