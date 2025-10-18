void CombineSpecialResultEffectComponent___ctor(CombineSpecialResultEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.movieFadeOutTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineSpecialResultEffectComponent__Awake(CombineSpecialResultEffectComponent_o *this, const MethodInfo *method)
{
  SkillUpExtraResultWindowComponent_o *skillExtraResultInfoWindow; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *Component_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C47033 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_4C47033 = 1;
  }
  skillExtraResultInfoWindow = this->fields.skillExtraResultInfoWindow;
  if ( !skillExtraResultInfoWindow
    || (SkillUpExtraResultWindowComponent__ValidateSerializedField(skillExtraResultInfoWindow, 0),
        (skillExtraResultInfoWindow = (SkillUpExtraResultWindowComponent_o *)this->fields.rarityResultInfoWindow) == 0)
    || (RarityResultWindowComponent__ValidateSerializedField(
          (RarityResultWindowComponent_o *)skillExtraResultInfoWindow,
          0),
        (skillExtraResultInfoWindow = (SkillUpExtraResultWindowComponent_o *)this->fields.classPassiveResultWindow) == 0)
    || (ClassPassiveResultWindowComponent__ValidateSerializedField(
          (ClassPassiveResultWindowComponent_o *)skillExtraResultInfoWindow,
          v4),
        (skillExtraResultInfoWindow = (SkillUpExtraResultWindowComponent_o *)this->fields.friendshipExceedResultWindow) == 0) )
  {
    sub_1C372B4(skillExtraResultInfoWindow);
  }
  FriendshipExceedResultWindowComponent__ValidateSerializedField(
    (FriendshipExceedResultWindowComponent_o *)skillExtraResultInfoWindow,
    0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.fsm, (int32_t)Component_object, v6, v7);
}


void CombineSpecialResultEffectComponent__Close(CombineSpecialResultEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *movieAssetData; // x20
  AssetData_o *effectAssetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C47044 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C47044 = 1;
  }
  movieAssetData = this->fields.movieAssetData;
  if ( movieAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(movieAssetData, 0);
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(effectAssetData, 0);
  }
  CombineSpecialResultEffectComponent__DestroyMoviePlayer(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


void CombineSpecialResultEffectComponent__CloseClassPassiveResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  ClassPassiveResultWindowComponent_o *classPassiveResultWindow; // x0

  classPassiveResultWindow = this->fields.classPassiveResultWindow;
  if ( !classPassiveResultWindow )
    sub_1C372B4(0);
  ClassPassiveResultWindowComponent__CloseToNext(classPassiveResultWindow, nextAction, method);
}


void CombineSpecialResultEffectComponent__CloseExceedDescription(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x0

  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !skillResultInfoWindow )
    sub_1C372B4(0);
  SkillUpResultWindowComponent__CloseToNext(skillResultInfoWindow, nextAction, 0);
}


void CombineSpecialResultEffectComponent__CloseRarityResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  RarityResultWindowComponent_o *rarityResultInfoWindow; // x0

  rarityResultInfoWindow = this->fields.rarityResultInfoWindow;
  if ( !rarityResultInfoWindow )
    sub_1C372B4(0);
  RarityResultWindowComponent__CloseToNext(rarityResultInfoWindow, nextAction, 0);
}


void CombineSpecialResultEffectComponent__CloseSkillChangeMessage(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x0

  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !skillResultInfoWindow )
    sub_1C372B4(0);
  SkillUpResultWindowComponent__CloseToNext(skillResultInfoWindow, nextAction, 0);
}


void CombineSpecialResultEffectComponent__CloseSkillChangeResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  SkillUpExtraResultWindowComponent_o *skillExtraResultInfoWindow; // x0

  skillExtraResultInfoWindow = this->fields.skillExtraResultInfoWindow;
  if ( !skillExtraResultInfoWindow )
    sub_1C372B4(0);
  SkillUpExtraResultWindowComponent__CloseToNext(skillExtraResultInfoWindow, nextAction, 0);
}


void CombineSpecialResultEffectComponent__CloseTreasureDeviceChangeInfo(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x0

  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !skillResultInfoWindow )
    sub_1C372B4(0);
  SkillUpResultWindowComponent__CloseToNext(skillResultInfoWindow, nextAction, 0);
}


UnityEngine_GameObject_o *CombineSpecialResultEffectComponent__CreateCriMoviePlayerObject(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  Il2CppObject *object; // x20
  Il2CppObject *v7; // x20
  _BOOL8 v8; // x0
  Il2CppObject *Component_object; // x19

  if ( (byte_4C47047 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_4C47047 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( v8 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v7, parent, 0);
  if ( !v7 )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v7,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v8 )
  {
    if ( Component_object )
    {
      UIPanel__set_sortingOrder((UIPanel_o *)Component_object, 1, 0);
      return (UnityEngine_GameObject_o *)v7;
    }
LABEL_14:
    sub_1C372B4(v8);
  }
  return (UnityEngine_GameObject_o *)v7;
}


System_String_o *CombineSpecialResultEffectComponent__CreateMoviePath(
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_4C47046 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9181/*"Movie/{0}.usm"*/);
    byte_4C47046 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9181/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0);
}


void CombineSpecialResultEffectComponent__DestroyMoviePlayer(
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
    CRIMoviePlayer__Dispose(moviePlayer, 0);
  p_moviePlayer->klass = 0;
  sub_1C36FFC(p_moviePlayer, 0, v2, v3);
}


void CombineSpecialResultEffectComponent__EndDisp(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider
    || (UnityEngine_Collider__set_enabled(bgCollider, 1, 0),
        (bgCollider = (UnityEngine_Collider_o *)this->fields.touchInfo) == 0) )
  {
    sub_1C372B4(bgCollider);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent__EndLoad(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C4703A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_13045/*"StartAnimation"*/);
    byte_4C4703A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_1C372B4(Instance);
  }
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13045/*"StartAnimation"*/,
    this->fields.animStartedTime,
    0);
}


CRIMoviePlayer_o *CombineSpecialResultEffectComponent__GetCriMoviePlayer(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *moviePlayerName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *CriMoviePlayerObject; // x0

  if ( (byte_4C47048 & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    byte_4C47048 = 1;
  }
  CriMoviePlayerObject = CombineSpecialResultEffectComponent__CreateCriMoviePlayerObject(this, moviePlayerName, 0, v3);
  if ( !CriMoviePlayerObject )
    sub_1C372B4(0);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               CriMoviePlayerObject,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


UnityEngine_GameObject_o *CombineSpecialResultEffectComponent__GetEffect(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *name,
        UnityEngine_GameObject_o *parentObj,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  Il2CppObject *Object_object__51154888; // x20
  Il2CppObject *v10; // x19

  if ( (byte_4C47038 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78193016);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47038 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    return 0;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              effectAssetData,
                              name,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__51154888, 0, 0) )
    return 0;
  if ( parentObj )
    parentObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parentObj, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__51855708(
          Object_object__51154888,
          (UnityEngine_Transform_o *)parentObj,
          1,
          (const MethodInfo_317415C *)Method_UnityEngine_Object_Instantiate_GameObject____78193016);
  GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v10, 0);
  GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v10, 0);
  return (UnityEngine_GameObject_o *)v10;
}


int32_t CombineSpecialResultEffectComponent__GetOldFriendshipMaxRank(
        CombineSpecialResultEffectComponent_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t klass; // w19
  int klass_high; // w23
  int32_t friendshipExceedCount; // w24
  Il2CppObject *v13; // x20
  __int64 fraction; // [xsp+8h] [xbp-58h] BYREF
  int32_t max[2]; // [xsp+10h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *v17; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C47045 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C47045 = 1;
  }
  entity = 0;
  *(_QWORD *)max = 0;
  v17 = 0;
  fraction = 0;
  if ( this->fields.baseUsrSvtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Master_object )
      goto LABEL_22;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           svtId,
           (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !Master_object )
        goto LABEL_22;
      Master_object = (Il2CppObject *)UserServantCollectionMaster__TryGetEntity(
                                        (UserServantCollectionMaster_o *)Master_object,
                                        &v17,
                                        userId,
                                        svtId,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( entity && v17 )
        {
          v8 = *(_QWORD *)&v17->fields.friendship.fields.currentCryptoKey;
          v9 = *(_QWORD *)&v17->fields.friendship.fields.fakeValue;
          klass = (int32_t)entity[6].klass;
          klass_high = HIDWORD(entity[6].klass);
          friendshipExceedCount = v17->fields.friendshipExceedCount;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v13 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FriendshipMaster___);
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v19.fields.currentCryptoKey = v8;
          *(_QWORD *)&v19.fields.fakeValue = v9;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v19, 0);
          if ( v13 )
          {
            FriendshipMaster__GetFriendshipRank(
              (FriendshipMaster_o *)v13,
              klass,
              (int32_t)Master_object,
              klass_high + friendshipExceedCount - 1,
              max,
              &max[1],
              (int32_t *)&fraction + 1,
              (float *)&fraction,
              0);
            return max[1];
          }
        }
LABEL_22:
        sub_1C372B4(Master_object);
      }
    }
  }
  return 0;
}


void CombineSpecialResultEffectComponent__LoadEffectAsset(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CombineRootComponent_c *v12; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x22

  if ( (byte_4C47035 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent___c__DisplayClass34_0__LoadEffectAsset_b__0__);
    sub_1C37058(&CombineSpecialResultEffectComponent___c__DisplayClass34_0_TypeInfo);
    byte_4C47035 = 1;
  }
  v5 = sub_1C372A4(CombineSpecialResultEffectComponent___c__DisplayClass34_0_TypeInfo);
  CombineSpecialResultEffectComponent___c__DisplayClass34_0___ctor(
    (CombineSpecialResultEffectComponent___c__DisplayClass34_0_o *)v5,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = nextAction;
  v9 = v5 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)nextAction, v10, v11);
  v12 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v12 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v12->static_fields->COMBINE_ASSET_PATH;
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CombineSpecialResultEffectComponent___c__DisplayClass34_0__LoadEffectAsset_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v14, 1, 0) )
  {
    if ( *(_QWORD *)v9 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v9 + 64LL),
        *(_QWORD *)(*(_QWORD *)v9 + 40LL));
  }
}


void CombineSpecialResultEffectComponent__LoadMovieAsset(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *movieName; // x20
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v14; // x22

  if ( (byte_4C47034 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&CommonUI_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent___c__DisplayClass33_0__LoadMovieAsset_b__0__);
    sub_1C37058(&CombineSpecialResultEffectComponent___c__DisplayClass33_0_TypeInfo);
    byte_4C47034 = 1;
  }
  v5 = sub_1C372A4(CombineSpecialResultEffectComponent___c__DisplayClass33_0_TypeInfo);
  CombineSpecialResultEffectComponent___c__DisplayClass33_0___ctor(
    (CombineSpecialResultEffectComponent___c__DisplayClass33_0_o *)v5,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = nextAction;
  v9 = v5 + 24;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)nextAction, v10, v11);
  if ( System_String__IsNullOrEmpty(this->fields.movieName, 0) )
    goto LABEL_16;
  movieName = this->fields.movieName;
  if ( !CommonUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
  MoviePath = CommonUI__CreateMoviePath(movieName, 0);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_CombineSpecialResultEffectComponent___c__DisplayClass33_0__LoadMovieAsset_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v14, 1, 0) )
  {
LABEL_16:
    if ( *(_QWORD *)v9 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v9 + 64LL),
        *(_QWORD *)(*(_QWORD *)v9 + 40LL));
  }
}


void CombineSpecialResultEffectComponent__OnClick(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  const MethodInfo *v4; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x0
  intptr_t *v9; // x8
  System_Action_o *v10; // x21
  System_Action_o *v11; // x0
  intptr_t *v12; // x8
  System_Action_o *v13; // x0
  intptr_t *v14; // x8
  System_Action_o *v15; // x0
  intptr_t *v16; // x8
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x20
  AvalonSceneManager_c *v20; // x8
  System_Action_o *v21; // x20
  System_Action_o *v22; // x20

  if ( (byte_4C47043 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_0__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_1__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_2__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_3__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_4__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_5__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_6__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_7__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_8__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_9__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C47043 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_37;
  if ( UnityEngine_Collider__get_enabled(bgCollider, 0) )
  {
    bgCollider = this->fields.bgCollider;
    if ( !bgCollider )
      goto LABEL_37;
    UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
    if ( this->fields.isSkipDetail )
    {
      this->fields.noticeState = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v6 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
      v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      v9 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_0__;
LABEL_10:
      v10 = v8;
      System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
      if ( Instance )
      {
        CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
        return;
      }
LABEL_37:
      sub_1C372B4(bgCollider);
    }
    switch ( this->fields.noticeState )
    {
      case 1:
        this->fields.noticeState = 2;
        CombineSpecialResultEffectComponent__ShowSkillChangeMessage(this, v4);
        return;
      case 2:
        this->fields.noticeState = 3;
        v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        v12 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_1__;
        goto LABEL_26;
      case 3:
        bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
        if ( !bgCollider )
          goto LABEL_37;
        if ( CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
               (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
               0) )
        {
          this->fields.noticeState = 4;
          v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          v14 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_2__;
        }
        else
        {
          this->fields.noticeState = 5;
          v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          v14 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_3__;
        }
        v21 = v13;
        System_Action___ctor(v13, (Il2CppObject *)this, *v14, 0);
        bgCollider = (UnityEngine_Collider_o *)this->fields.rarityResultInfoWindow;
        if ( !bgCollider )
          goto LABEL_37;
        RarityResultWindowComponent__CloseToNext((RarityResultWindowComponent_o *)bgCollider, v21, 0);
        return;
      case 4:
        bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
        if ( !bgCollider )
          goto LABEL_37;
        ++LODWORD(bgCollider->fields.m_CachedPtr);
        if ( CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
               (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
               0) )
        {
          v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          v16 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_4__;
        }
        else
        {
          this->fields.noticeState = 5;
          v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          v16 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_5__;
        }
        v22 = v15;
        System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0);
        bgCollider = (UnityEngine_Collider_o *)this->fields.skillExtraResultInfoWindow;
        if ( !bgCollider )
          goto LABEL_37;
        SkillUpExtraResultWindowComponent__CloseToNext((SkillUpExtraResultWindowComponent_o *)bgCollider, v22, 0);
        return;
      case 5:
        this->fields.noticeState = 6;
        v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v17,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__OnClick_b__57_6__,
          0);
        bgCollider = (UnityEngine_Collider_o *)this->fields.classPassiveResultWindow;
        if ( !bgCollider )
          goto LABEL_37;
        ClassPassiveResultWindowComponent__CloseToNext((ClassPassiveResultWindowComponent_o *)bgCollider, v17, v18);
        return;
      case 6:
        this->fields.noticeState = 7;
        v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        v12 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_7__;
        goto LABEL_26;
      case 7:
        this->fields.noticeState = 8;
        v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        v12 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_8__;
LABEL_26:
        v19 = v11;
        System_Action___ctor(v11, (Il2CppObject *)this, *v12, 0);
        bgCollider = (UnityEngine_Collider_o *)this->fields.skillResultInfoWindow;
        if ( !bgCollider )
          goto LABEL_37;
        SkillUpResultWindowComponent__CloseToNext((SkillUpResultWindowComponent_o *)bgCollider, v19, 0);
        break;
      case 8:
        this->fields.noticeState = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v20 = AvalonSceneManager_TypeInfo;
        if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          v20 = AvalonSceneManager_TypeInfo;
        }
        DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
        v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        v9 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_9__;
        goto LABEL_10;
      default:
        return;
    }
  }
}


void CombineSpecialResultEffectComponent__Play(
        CombineSpecialResultEffectComponent_o *this,
        UserServantEntity_o *baseData,
        UserServantEntity_o *resData,
        ServantCostumeEntity_o *svtCostumeEnt,
        System_Action_o *endAction,
        const MethodInfo *method)
{
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UserServantEntity_o *resUsrSvtData; // x0
  struct ServantOverwriteStatus_o *OverwriteStatus; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *v20; // x23
  struct CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o **p_costumeSkillInfoManager; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UserServantEntity_o *baseUsrSvtData; // x23
  __int64 v25; // x24
  __int64 v26; // x25
  int32_t v27; // w0
  UserServantEntity_o *v28; // x23
  int32_t v29; // w0
  const MethodInfo *v30; // x3
  unsigned int i; // w25
  SkillInfo_o *v32; // x8
  int32_t id; // w23
  int32_t v34; // w5
  SkillInfo_o *v35; // x8
  int32_t v36; // w1
  int32_t lv; // w2
  SkillInfo_o *v38; // x9
  SkillInfo_o *v39; // x8
  ServantSkillAddEntity_o *v40; // [xsp+0h] [xbp-60h] BYREF
  SkillInfo_array *v41; // [xsp+8h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4C47036 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CombineSpecialResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C47036 = 1;
  }
  skillInfoList = 0;
  v40 = 0;
  v41 = 0;
  this->fields.baseUsrSvtData = baseData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (int32_t)resData,
    (const MethodInfo *)svtCostumeEnt);
  this->fields.resUsrSvtData = resData;
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resUsrSvtData, (int32_t)resData, v12, v13);
  this->fields.servantCostumeEntity = svtCostumeEnt;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.servantCostumeEntity, (int32_t)svtCostumeEnt, v14, v15);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_38;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(resUsrSvtData, 0, 0);
  this->fields.resultSvtOverwriteStatus = OverwriteStatus;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.resultSvtOverwriteStatus, (int32_t)OverwriteStatus, v18, v19);
  v20 = (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C372A4(CombineSpecialResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager___ctor(v20, 0);
  this->fields.costumeSkillInfoManager = v20;
  p_costumeSkillInfoManager = &this->fields.costumeSkillInfoManager;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.costumeSkillInfoManager, (int32_t)v20, v22, v23);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_38;
  v26 = *(_QWORD *)&baseUsrSvtData->fields.dispLimitCount.fields.currentCryptoKey;
  v25 = *(_QWORD *)&baseUsrSvtData->fields.dispLimitCount.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v26;
  *(_QWORD *)&v43.fields.fakeValue = v25;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v43, 0);
  UserServantEntity__getSkillInfo(baseUsrSvtData, &skillInfoList, -1, v27, 1, 0, -1, 0);
  v28 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
LABEL_38:
    sub_1C372B4(resUsrSvtData);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v28->fields.dispLimitCount, 0);
  UserServantEntity__getSkillInfo(v28, &v41, -1, v29, 1, 0, -1, 0);
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
    if ( !v41 )
      goto LABEL_38;
    if ( i >= LODWORD(v41->max_length) )
      goto LABEL_39;
    v32 = v41->m_Items[i];
    if ( !v32 )
      goto LABEL_38;
    resUsrSvtData = *p_resUsrSvtData;
    if ( !*p_resUsrSvtData )
      goto LABEL_38;
    id = v32->fields.id;
    resUsrSvtData = (UserServantEntity_o *)UserServantEntity__TryGetServantSkillAddBySkillId(resUsrSvtData, &v40, id, 0);
    if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
    {
      resUsrSvtData = (UserServantEntity_o *)v40;
      if ( !v40 )
        goto LABEL_38;
      resUsrSvtData = (UserServantEntity_o *)ServantSkillAddEntity__GetBaseSkillId(v40, 0);
      if ( !v40 )
        goto LABEL_38;
      id = (int)resUsrSvtData;
      resUsrSvtData = (UserServantEntity_o *)ServantSkillAddEntity__GetExchangedSkillId(v40, 0);
      v34 = (int)resUsrSvtData;
    }
    else
    {
      v34 = 0;
    }
    if ( id < 1 )
      continue;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( i >= LODWORD(skillInfoList->max_length) )
      goto LABEL_39;
    v35 = skillInfoList->m_Items[i];
    if ( !v35 )
      goto LABEL_38;
    v36 = v35->fields.id;
    lv = v35->fields.lv;
    if ( v36 == id )
    {
      if ( !v41 )
        goto LABEL_38;
      if ( i >= LODWORD(v41->max_length) )
LABEL_39:
        sub_1C372BC(resUsrSvtData);
      v38 = v41->m_Items[i];
      if ( !v38 )
        goto LABEL_38;
      if ( lv == v38->fields.lv )
        continue;
    }
    else if ( !v41 )
    {
      goto LABEL_38;
    }
    if ( i >= LODWORD(v41->max_length) )
      goto LABEL_39;
    v39 = v41->m_Items[i];
    if ( !v39 )
      goto LABEL_38;
    resUsrSvtData = (UserServantEntity_o *)*p_costumeSkillInfoManager;
    if ( !*p_costumeSkillInfoManager )
      goto LABEL_38;
    CombineSpecialResultEffectComponent_CostumeSkillInfoManager__Add(
      (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)resUsrSvtData,
      v36,
      lv,
      id,
      v39->fields.lv,
      v34,
      v39->fields.lv,
      0);
  }
  CombineSpecialResultEffectComponent__Play_48644104(this, endAction, 0, v30);
}


void CombineSpecialResultEffectComponent__PlayMovie(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CommonUI_c *v4; // x0
  struct CRIMoviePlayer_o *CriMoviePlayer; // x0
  struct CRIMoviePlayer_o **p_moviePlayer; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x1
  System_String_o *MoviePath; // x22
  AssetData_o *movieAssetData; // x0
  float v13; // s0
  int32_t fadeStartFrame; // w24
  CRIMoviePlayer_o *v15; // x20
  System_String_o *Path; // x23
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C47039 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__PlayMovie_b__38_0__);
    sub_1C37058(&CommonUI_TypeInfo);
    byte_4C47039 = 1;
  }
  if ( this->fields.movieAssetData && !System_String__IsNullOrEmpty(this->fields.movieName, 0) )
  {
    v4 = CommonUI_TypeInfo;
    if ( !CommonUI_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo);
      v4 = CommonUI_TypeInfo;
    }
    CriMoviePlayer = CombineSpecialResultEffectComponent__GetCriMoviePlayer(
                       this,
                       v4->static_fields->MoviePlayerObjectPath,
                       v3);
    this->fields.moviePlayer = CriMoviePlayer;
    p_moviePlayer = &this->fields.moviePlayer;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.moviePlayer, (int32_t)CriMoviePlayer, v7, v8);
    v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__PlayMovie_b__38_0__, 0);
    MoviePath = CombineSpecialResultEffectComponent__CreateMoviePath(this->fields.movieName, v10);
    movieAssetData = this->fields.movieAssetData;
    v13 = this->fields.animStartedTime * 30.0;
    if ( v13 == INFINITY )
      fadeStartFrame = 0x80000000;
    else
      fadeStartFrame = (int)v13;
    if ( !movieAssetData )
      goto LABEL_22;
    v15 = *p_moviePlayer;
    Path = AssetData__get_Path(movieAssetData, 0);
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    if ( !byte_4C3DDFF )
    {
      sub_1C37058(&BgmManager_TypeInfo);
      byte_4C3DDFF = 1;
    }
    movieAssetData = (AssetData_o *)BgmManager_TypeInfo;
    if ( !BgmManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
      movieAssetData = (AssetData_o *)BgmManager_TypeInfo;
    }
    if ( !v15 )
      goto LABEL_22;
    CRIMoviePlayer__Initialize(
      v15,
      MoviePath,
      Path,
      *(float *)(*(_QWORD *)&movieAssetData[1].fields.alreadySetIsResourcesUnload + 36LL),
      0,
      0,
      v9,
      0,
      0,
      1,
      fadeStartFrame,
      1,
      0,
      0);
    movieAssetData = (AssetData_o *)*p_moviePlayer;
    if ( !*p_moviePlayer
      || (v17.fields.r = 0.0,
          v17.fields.g = 0.0,
          v17.fields.b = 0.0,
          v17.fields.a = 1.0,
          CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)movieAssetData, v17, 0),
          (movieAssetData = (AssetData_o *)*p_moviePlayer) == 0) )
    {
LABEL_22:
      sub_1C372B4(movieAssetData);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)movieAssetData, 1, 0, 0, 0, 0);
  }
}


void CombineSpecialResultEffectComponent__Play_48644104(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *endAction,
        bool isSkipResultDetail,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UISprite_o *touchInfoBaseSprite; // x20
  __int64 v9; // x20
  System_Action_object__o *v10; // x21
  char v11; // w2
  const MethodInfo *v12; // x3
  System_Action_object__o *v13; // x21
  char v14; // w2
  const MethodInfo *v15; // x3
  ActionChain_o *v16; // x21
  __int64 v17; // x20
  System_Action_o *v18; // x22
  char v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C47037 & 1) == 0 )
  {
    sub_1C37058(&ActionChain_TypeInfo);
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&System_Action_Action____TypeInfo);
    sub_1C37058(&System_Action_Action__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent_LoadEffectAsset__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent_LoadMovieAsset__);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__Play_b__36_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_20729/*"img_txt_touchscreen_sp"*/);
    byte_4C47037 = 1;
  }
  this->fields.isSkipDetail = isSkipResultDetail;
  this->fields.endCallbackFunc = endAction;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.endCallbackFunc, (int32_t)endAction, isSkipResultDetail, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  touchInfoBaseSprite = this->fields.touchInfoBaseSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetDownloadCommonSprite(touchInfoBaseSprite, (System_String_o *)StringLiteral_20729/*"img_txt_touchscreen_sp"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.touchInfoEffectSprite, (System_String_o *)StringLiteral_20729/*"img_txt_touchscreen_sp"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgCollider;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  gameObject = this->fields.touchInfo;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v9 = sub_1C37100(System_Action_Action____TypeInfo, 2);
  v10 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v10,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent_LoadMovieAsset__,
    0);
  if ( !v9 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v9 + 24) )
    goto LABEL_18;
  *(_QWORD *)(v9 + 32) = v10;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)v10, v11, v12);
  v13 = (System_Action_object__o *)sub_1C372A4(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent_LoadEffectAsset__,
    0);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_18;
  *(_QWORD *)(v9 + 40) = v13;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)v13, v14, v15);
  v16 = (ActionChain_o *)sub_1C372A4(ActionChain_TypeInfo);
  ActionChain___ctor_49040972(v16, (System_Action_Action__array *)v9, 0);
  v17 = sub_1C37100(System_Action___TypeInfo, 1);
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__Play_b__36_0__, 0);
  if ( !v17 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v17 + 24) )
LABEL_18:
    sub_1C372BC(gameObject);
  *(_QWORD *)(v17 + 32) = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v19, v20);
  if ( !v16
    || (gameObject = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                   (ChainableActionBase_o *)v16,
                                                   (System_Action_array *)v17,
                                                   0)) == 0 )
  {
LABEL_17:
    sub_1C372B4(gameObject);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)gameObject, 0);
}


void CombineSpecialResultEffectComponent__ShowClassPassiveResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  ClassPassiveResultWindowComponent_o *classPassiveResultWindow; // x20
  UserServantEntity_o *baseUsrSvtData; // x21
  UserServantEntity_o *resUsrSvtData; // x22
  ServantCostumeEntity_o *servantCostumeEntity; // x23
  System_Action_o *v7; // x24
  __int64 v8; // x0
  const MethodInfo *v9; // x5

  if ( (byte_4C4703F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    byte_4C4703F = 1;
  }
  classPassiveResultWindow = this->fields.classPassiveResultWindow;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  resUsrSvtData = this->fields.resUsrSvtData;
  servantCostumeEntity = this->fields.servantCostumeEntity;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0);
  if ( !classPassiveResultWindow )
    sub_1C372B4(v8);
  ClassPassiveResultWindowComponent__Open(
    classPassiveResultWindow,
    baseUsrSvtData,
    resUsrSvtData,
    servantCostumeEntity,
    v7,
    v9);
}


void CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v5; // q1
  struct UserServantEntity_o *v6; // x8
  int64_t v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w0
  const MethodInfo *v11; // x3
  int32_t OldFriendshipMaxRank; // w0
  FriendshipExceedResultWindowComponent_o *friendshipExceedResultWindow; // x20
  UserServantEntity_o *resUsrSvtData; // x21
  int32_t v15; // w22
  System_Action_o *v16; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4C47042 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo_b__55_0__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C47042 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v17 = v18;
  bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v17, 0);
  v6 = this->fields.baseUsrSvtData;
  if ( !v6 )
    goto LABEL_12;
  v7 = (int64_t)bgCollider;
  v9 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = v9;
  *(_QWORD *)&v19.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v19, 0);
  OldFriendshipMaxRank = CombineSpecialResultEffectComponent__GetOldFriendshipMaxRank(this, v7, v10, v11);
  friendshipExceedResultWindow = this->fields.friendshipExceedResultWindow;
  resUsrSvtData = this->fields.resUsrSvtData;
  v15 = OldFriendshipMaxRank;
  v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo_b__55_0__,
    0);
  if ( !friendshipExceedResultWindow )
LABEL_12:
    sub_1C372B4(bgCollider);
  FriendshipExceedResultWindowComponent__OpenFriendshipExceedInfo(
    friendshipExceedResultWindow,
    resUsrSvtData,
    v15,
    v16,
    0);
}


void CombineSpecialResultEffectComponent__ShowLevelExceedDescription(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  int32_t v8; // w21
  System_Action_o *v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_4C47041 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__ShowLevelExceedDescription_b__53_0__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_3838/*"COSTUME_CHANGE_DESCRIPTION_LEVEL_EXCEED"*/);
    byte_4C47041 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_9;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v10, 0);
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowLevelExceedDescription_b__53_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_1C372B4(bgCollider);
  SkillUpResultWindowComponent__OpenSkillChangeMessage_48678556(
    skillResultInfoWindow,
    v8,
    (System_String_o *)StringLiteral_3838/*"COSTUME_CHANGE_DESCRIPTION_LEVEL_EXCEED"*/,
    v9,
    0);
}


void CombineSpecialResultEffectComponent__ShowRarityResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t v4; // w20
  struct ServantOverwriteStatus_o *resultSvtOverwriteStatus; // x8
  int32_t v6; // w21
  int32_t Rarity_k__BackingField; // w22
  int32_t Cost_k__BackingField; // w23
  RarityResultWindowComponent_o *rarityResultInfoWindow; // x25
  ServantCostumeEntity_o *servantCostumeEntity; // x24
  System_Action_o *v11; // x26

  if ( (byte_4C4703E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    byte_4C4703E = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_8;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getRarity(baseUsrSvtData, 0);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_8;
  v4 = (int)baseUsrSvtData;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getCost(this->fields.baseUsrSvtData, 0);
  resultSvtOverwriteStatus = this->fields.resultSvtOverwriteStatus;
  if ( !resultSvtOverwriteStatus
    || (v6 = (int)baseUsrSvtData,
        Rarity_k__BackingField = resultSvtOverwriteStatus->fields._Rarity_k__BackingField,
        Cost_k__BackingField = resultSvtOverwriteStatus->fields._Cost_k__BackingField,
        rarityResultInfoWindow = this->fields.rarityResultInfoWindow,
        servantCostumeEntity = this->fields.servantCostumeEntity,
        v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0),
        !rarityResultInfoWindow) )
  {
LABEL_8:
    sub_1C372B4(baseUsrSvtData);
  }
  RarityResultWindowComponent__Open(
    rarityResultInfoWindow,
    v4,
    v6,
    Rarity_k__BackingField,
    Cost_k__BackingField,
    servantCostumeEntity,
    v11,
    0);
}


void CombineSpecialResultEffectComponent__ShowSkillChangeMessage(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  struct ServantCostumeEntity_o *servantCostumeEntity; // x8
  int32_t v15; // w21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  struct ServantCostumeEntity_o *v22; // x8
  Il2CppObject *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x22
  System_Action_o *v26; // x23
  int32_t id; // [xsp+8h] [xbp-48h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_4C4703C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__ShowSkillChangeMessage_b__43_0__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_3839/*"COSTUME_CHANGE_DESCRIPTION_{0}_{1}"*/);
    byte_4C4703C = 1;
  }
  bgCollider = (__int64)this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_11;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v29.fields.currentCryptoKey = v7;
  *(_QWORD *)&v29.fields.fakeValue = v6;
  bgCollider = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v29, 0);
  servantCostumeEntity = this->fields.servantCostumeEntity;
  if ( !servantCostumeEntity )
    goto LABEL_11;
  v15 = bgCollider;
  svtId = servantCostumeEntity->fields.svtId;
  bgCollider = j_il2cpp_value_box_0(int_TypeInfo, &svtId, v8, v9, v10, v11, v12, v13);
  v22 = this->fields.servantCostumeEntity;
  if ( !v22
    || (v23 = (Il2CppObject *)bgCollider,
        id = v22->fields.id,
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v16, v17, v18, v19, v20, v21),
        v25 = System_String__Format_63602948((System_String_o *)StringLiteral_3839/*"COSTUME_CHANGE_DESCRIPTION_{0}_{1}"*/, v23, v24, 0),
        v26 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v26,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__ShowSkillChangeMessage_b__43_0__,
          0),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_1C372B4(bgCollider);
  }
  SkillUpResultWindowComponent__OpenSkillChangeMessage_48678556(skillResultInfoWindow, v15, v25, v26, 0);
}


void CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  intptr_t m_CachedPtr; // x8
  UnityEngine_Collider_c *klass; // x9
  _DWORD *monitor; // x10
  SkillUpExtraResultWindowComponent_o *skillExtraResultInfoWindow; // x20
  int32_t v10; // w21
  int32_t v11; // w22
  int32_t name; // w23
  int32_t name_high; // w24
  int32_t v14; // w25
  int32_t v15; // w26
  ServantCostumeEntity_o *servantCostumeEntity; // x27
  System_Action_o *callback; // x28

  if ( (byte_4C4703D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo_b__45_0__);
    byte_4C4703D = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
  if ( !bgCollider )
    goto LABEL_11;
  bgCollider = (UnityEngine_Collider_o *)CombineSpecialResultEffectComponent_CostumeSkillInfoManager__GetSkillChangeInfo(
                                           (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
                                           index,
                                           0);
  if ( !bgCollider )
    goto LABEL_11;
  m_CachedPtr = bgCollider->fields.m_CachedPtr;
  if ( !m_CachedPtr )
    goto LABEL_11;
  klass = bgCollider[1].klass;
  if ( !klass )
    goto LABEL_11;
  monitor = bgCollider[1].monitor;
  if ( !monitor )
    goto LABEL_11;
  skillExtraResultInfoWindow = this->fields.skillExtraResultInfoWindow;
  v10 = *(_DWORD *)(m_CachedPtr + 16);
  v11 = *(_DWORD *)(m_CachedPtr + 20);
  name = (int32_t)klass->_1.name;
  name_high = HIDWORD(klass->_1.name);
  v14 = monitor[4];
  v15 = monitor[5];
  servantCostumeEntity = this->fields.servantCostumeEntity;
  callback = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    callback,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo_b__45_0__,
    0);
  if ( !skillExtraResultInfoWindow )
LABEL_11:
    sub_1C372B4(bgCollider);
  SkillUpExtraResultWindowComponent__OpenSkillChangeResultInfo(
    skillExtraResultInfoWindow,
    v10,
    v11,
    name,
    name_high,
    v14,
    v15,
    servantCostumeEntity,
    callback,
    0);
}


void CombineSpecialResultEffectComponent__ShowTreasureDeviceChangeInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUsrSvtData; // x20
  int64_t Master_object; // x0
  __int128 v5; // q1
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x21
  Il2CppObject *Entity; // x21
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantTreasureDeviceAddMaster_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w21
  int32_t v13; // w22
  int32_t v14; // w20
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t id; // w23
  int32_t lv; // w24
  int32_t v18; // w22
  int32_t v19; // w25
  System_Action_o *v20; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+30h] [xbp-80h]
  TreasureDvcInfo_o *v23; // [xsp+58h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4C47040 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    sub_1C37058(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C47040 = 1;
  }
  tdInfo = 0;
  v23 = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_24;
  v5 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v22.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v21 = v22;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v21, 0);
  if ( !v6 )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v6,
             Master_object,
             (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Master_object = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0);
  if ( !Entity )
    goto LABEL_24;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v23, -1, -1, 0, 0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_24;
  v9 = (ServantTreasureDeviceAddMaster_o *)Master_object;
  v11 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = v11;
  *(_QWORD *)&v25.fields.fakeValue = v10;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v25, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_24;
  v12 = Master_object;
  Master_object = UserServantEntity__getLimitCount(this->fields.resUsrSvtData, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_24;
  v13 = Master_object;
  Master_object = UserServantEntity__getDispLimitCount(this->fields.resUsrSvtData, 0, 0);
  if ( !v23 || !v9 )
    goto LABEL_24;
  Master_object = (int64_t)ServantTreasureDeviceAddMaster__GetEnableEntity(
                             v9,
                             v12,
                             v13,
                             Master_object,
                             v23->fields.id,
                             0,
                             0);
  if ( Master_object )
  {
    Master_object = ServantTreasureDeviceAddEntity__GetExchangedTreasureDeviceId(
                      (ServantTreasureDeviceAddEntity_o *)Master_object,
                      0);
    v14 = Master_object;
  }
  else
  {
    v14 = 0;
  }
  if ( !tdInfo
    || !v23
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v19 = v23->fields.id,
        v18 = v23->fields.lv,
        v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(v20, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0),
        !skillResultInfoWindow) )
  {
LABEL_24:
    sub_1C372B4(Master_object);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo_48680368(
    skillResultInfoWindow,
    id,
    lv,
    v19,
    v18,
    v14,
    v18,
    v20,
    this->fields.servantCostumeEntity,
    0);
}


void CombineSpecialResultEffectComponent__StartAnimation(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  char *fsm; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_String_o *effectAnimName; // x1

  if ( (byte_4C4703B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12309/*"START_ANIMATION"*/);
    sub_1C37058(&StringLiteral_13046/*"StartAnimationName"*/);
    byte_4C4703B = 1;
  }
  fsm = (char *)this->fields.fsm;
  if ( !fsm
    || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0)) == 0
    || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                        (System_String_o *)StringLiteral_13046/*"StartAnimationName"*/,
                        0)) == 0
    || (effectAnimName = this->fields.effectAnimName,
        *((_QWORD *)fsm + 7) = effectAnimName,
        sub_1C36FFC((CGThumbnailListItem_o *)(fsm + 56), (int32_t)effectAnimName, v4, v5),
        (fsm = (char *)this->fields.fsm) == 0) )
  {
    sub_1C372B4(fsm);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12309/*"START_ANIMATION"*/, 0);
}


void CombineSpecialResultEffectComponent__StartResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchInfo; // x0

  touchInfo = this->fields.touchInfo;
  this->fields.noticeState = 1;
  if ( !touchInfo
    || (UnityEngine_GameObject__SetActive(touchInfo, 1, 0),
        (touchInfo = (UnityEngine_GameObject_o *)this->fields.bgCollider) == 0) )
  {
    sub_1C372B4(touchInfo);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)touchInfo, 1, 0);
}


void CombineSpecialResultEffectComponent___OnClick_b__57_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endCallbackFunc; // x8

  endCallbackFunc = this->fields.endCallbackFunc;
  if ( endCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))endCallbackFunc->fields.invoke_impl)(
      endCallbackFunc->fields.method_code,
      endCallbackFunc->fields.method);
}


void CombineSpecialResultEffectComponent___OnClick_b__57_2(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x8

  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    sub_1C372B4(this);
  CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo(this, costumeSkillInfoManager->fields.Index, v2);
}


void CombineSpecialResultEffectComponent___OnClick_b__57_4(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *costumeSkillInfoManager; // x8

  costumeSkillInfoManager = this->fields.costumeSkillInfoManager;
  if ( !costumeSkillInfoManager )
    sub_1C372B4(this);
  CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo(this, costumeSkillInfoManager->fields.Index, v2);
}


void CombineSpecialResultEffectComponent___OnClick_b__57_9(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *endCallbackFunc; // x8

  endCallbackFunc = this->fields.endCallbackFunc;
  if ( endCallbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))endCallbackFunc->fields.invoke_impl)(
      endCallbackFunc->fields.method_code,
      endCallbackFunc->fields.method);
}


void CombineSpecialResultEffectComponent___PlayMovie_b__38_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *moviePlayer; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v5; // x20

  if ( (byte_4C4704B & 1) == 0 )
  {
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_4C4704B = 1;
  }
  moviePlayer = (UnityEngine_Component_o *)this->fields.moviePlayer;
  if ( !moviePlayer
    || (gameObject = UnityEngine_Component__get_gameObject(moviePlayer, 0),
        (moviePlayer = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                    gameObject,
                                                    (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___)) == 0) )
  {
    sub_1C372B4(moviePlayer);
  }
  v5 = moviePlayer;
  *(float *)&moviePlayer[2].monitor = this->fields.movieFadeOutTime;
  *(float *)&moviePlayer[5].monitor = TweenAlpha__get_value((TweenAlpha_o *)moviePlayer, 0);
  HIDWORD(v5[5].monitor) = 0;
}


void CombineSpecialResultEffectComponent___Play_b__36_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct UnityEngine_GameObject_o *Effect; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v8; // x1
  System_Action_o *v9; // x20
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_4C47049 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CombineSpecialResultEffectComponent__Play_b__36_1__);
    sub_1C37058(&StringLiteral_11385/*"ResultEffect"*/);
    byte_4C47049 = 1;
  }
  Effect = CombineSpecialResultEffectComponent__GetEffect(
             this,
             this->fields.effectPrefabName,
             this->fields.effectParent,
             v2);
  this->fields.effect = Effect;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.effect, (int32_t)Effect, v5, v6);
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0)) == 0
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11385/*"ResultEffect"*/,
                                  0)) == 0 )
  {
    sub_1C372B4(fsm);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, this->fields.effect, 0);
  CombineSpecialResultEffectComponent__PlayMovie(this, v8);
  v9 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__Play_b__36_1__, 0);
  v10 = BasicHelper__DelayCall(0.132, v9, 1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v10, 0);
}


void CombineSpecialResultEffectComponent___Play_b__36_1(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C4704A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12343/*"START_SPECIAL_EFFECT"*/);
    byte_4C4704A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12343/*"START_SPECIAL_EFFECT"*/, 0);
}


void CombineSpecialResultEffectComponent___ShowFriendshipExceedInfo_b__55_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowLevelExceedDescription_b__53_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowSkillChangeMessage_b__43_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowSkillChangeResultInfo_b__45_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor(
        CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineSpecialResultEffectComponent_CostumeSkillInfo___ctor(
        CombineSpecialResultEffectComponent_CostumeSkillInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineSpecialResultEffectComponent_CostumeSkillInfoManager___ctor(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4704F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__TypeInfo);
    byte_4C4704F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.skillList, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineSpecialResultEffectComponent_CostumeSkillInfoManager__Add(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t beforeSkillId,
        int32_t breforeSkillLv,
        int32_t afterSkillId,
        int32_t afterSkillLv,
        int32_t exAfterSkillId,
        int32_t exAfterSkillLv,
        const MethodInfo *method)
{
  __int64 v15; // x19
  __int64 v16; // x27
  System_Collections_Generic_List_object__o *skillList; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x8

  if ( (byte_4C4704C & 1) == 0 )
  {
    sub_1C37058(&CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_TypeInfo);
    sub_1C37058(&CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__Add__);
    byte_4C4704C = 1;
  }
  v15 = sub_1C372A4(CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  v16 = sub_1C372A4(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  if ( !v16 )
    goto LABEL_12;
  *(_DWORD *)(v16 + 16) = beforeSkillId;
  *(_DWORD *)(v16 + 20) = breforeSkillLv;
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = v16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 16), v16, v18, v19);
  v20 = sub_1C372A4(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( !v20 )
    goto LABEL_12;
  *(_DWORD *)(v20 + 16) = afterSkillId;
  *(_DWORD *)(v20 + 20) = afterSkillLv;
  *(_QWORD *)(v15 + 24) = v20;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 24), v20, v21, v22);
  v23 = sub_1C372A4(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    goto LABEL_12;
  *(_DWORD *)(v23 + 16) = exAfterSkillId;
  *(_DWORD *)(v23 + 20) = exAfterSkillLv;
  *(_QWORD *)(v15 + 32) = v23;
  sub_1C36FFC((CGThumbnailListItem_o *)(v15 + 32), v23, v24, v25);
  skillList = (System_Collections_Generic_List_object__o *)this->fields.skillList;
  if ( !skillList
    || (items = skillList->fields._items,
        v29 = Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__Add__,
        ++skillList->fields._version,
        !items) )
  {
LABEL_12:
    sub_1C372B4(skillList);
  }
  size = skillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillList,
      (Il2CppObject *)v15,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &items->obj.klass + size;
    skillList->fields._size = size + 1;
    v31[4] = (Il2CppClass *)v15;
    sub_1C36FFC((CGThumbnailListItem_o *)(v31 + 4), v15, v26, v27);
  }
}


CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *CombineSpecialResultEffectComponent_CostumeSkillInfoManager__GetSkillChangeInfo(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *skillList; // x0

  if ( (byte_4C4704D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Item__);
    byte_4C4704D = 1;
  }
  skillList = (System_Collections_Generic_List_object__o *)this->fields.skillList;
  if ( !skillList )
    sub_1C372B4(0);
  return (CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                                           skillList,
                                                                           index,
                                                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Item__);
}


bool CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__o *skillList; // x8
  int size; // w8

  v2 = this;
  if ( (byte_4C4704E & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Count__);
    byte_4C4704E = 1;
  }
  skillList = v2->fields.skillList;
  if ( !skillList )
    sub_1C372B4(this);
  size = skillList->fields._size;
  return size >= 1 && v2->fields.Index < size;
}


void CombineSpecialResultEffectComponent___c__DisplayClass33_0___ctor(
        CombineSpecialResultEffectComponent___c__DisplayClass33_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineSpecialResultEffectComponent___c__DisplayClass33_0___LoadMovieAsset_b__0(
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
      sub_1C372B4(0);
    _4__this->fields.movieAssetData = movieAsset;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.movieAssetData, (int32_t)movieAsset, (int32_t)method, v3);
  }
  nextAction = this->fields.nextAction;
  if ( nextAction )
    ((void (__fastcall *)(intptr_t, intptr_t))nextAction->fields.invoke_impl)(
      nextAction->fields.method_code,
      nextAction->fields.method);
}


void CombineSpecialResultEffectComponent___c__DisplayClass34_0___ctor(
        CombineSpecialResultEffectComponent___c__DisplayClass34_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CombineSpecialResultEffectComponent___c__DisplayClass34_0___LoadEffectAsset_b__0(
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
      sub_1C372B4(0);
    _4__this->fields.effectAssetData = data;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.effectAssetData, (int32_t)data, (int32_t)method, v3);
  }
  nextAction = this->fields.nextAction;
  if ( nextAction )
    ((void (__fastcall *)(intptr_t, intptr_t))nextAction->fields.invoke_impl)(
      nextAction->fields.method_code,
      nextAction->fields.method);
}