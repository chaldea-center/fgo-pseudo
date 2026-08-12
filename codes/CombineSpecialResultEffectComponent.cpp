void CombineSpecialResultEffectComponent___ctor(CombineSpecialResultEffectComponent_o *this, const MethodInfo *method)
{
  this->fields.movieFadeOutTime = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CombineSpecialResultEffectComponent__Awake(CombineSpecialResultEffectComponent_o *this, const MethodInfo *method)
{
  SkillUpExtraResultWindowComponent_o *skillExtraResultInfoWindow; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5974C1E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_5974C1E = 1;
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
          method),
        (skillExtraResultInfoWindow = (SkillUpExtraResultWindowComponent_o *)this->fields.friendshipExceedResultWindow) == 0) )
  {
    sub_2213CDC(skillExtraResultInfoWindow, method);
  }
  FriendshipExceedResultWindowComponent__ValidateSerializedField(
    (FriendshipExceedResultWindowComponent_o *)skillExtraResultInfoWindow,
    0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
}


void CombineSpecialResultEffectComponent__Close(CombineSpecialResultEffectComponent_o *this, const MethodInfo *method)
{
  AssetData_o *movieAssetData; // x20
  AssetData_o *effectAssetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_5974C2F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_5974C2F = 1;
  }
  movieAssetData = this->fields.movieAssetData;
  if ( movieAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47496972(movieAssetData, 0);
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47496972(effectAssetData, 0);
  }
  CombineSpecialResultEffectComponent__DestroyMoviePlayer(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v6);
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
    sub_2213CDC(0, nextAction);
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
    sub_2213CDC(0, nextAction);
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
    sub_2213CDC(0, nextAction);
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
    sub_2213CDC(0, nextAction);
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
    sub_2213CDC(0, nextAction);
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
    sub_2213CDC(0, nextAction);
  SkillUpResultWindowComponent__CloseToNext(skillResultInfoWindow, nextAction, 0);
}


UnityEngine_GameObject_o *CombineSpecialResultEffectComponent__CreateCriMoviePlayerObject(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *object; // x20
  Il2CppObject *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Component_object; // x19

  if ( (byte_5974C32 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_5974C32 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_39787F0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  v8 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( v9 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v8, parent, 0);
  if ( !v8 )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v8,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v9 )
  {
    if ( Component_object )
    {
      UIPanel__set_sortingOrder((UIPanel_o *)Component_object, 1, 0);
      return (UnityEngine_GameObject_o *)v8;
    }
LABEL_14:
    sub_2213CDC(v9, v10);
  }
  return (UnityEngine_GameObject_o *)v8;
}


System_String_o *CombineSpecialResultEffectComponent__CreateMoviePath(
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_5974C31 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9562/*"Movie/{0}.usm"*/);
    byte_5974C31 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9562/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0);
}


void CombineSpecialResultEffectComponent__DestroyMoviePlayer(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CRIMoviePlayer_o *moviePlayer; // x0
  MissionNaviTransitionBoardItem_o *p_moviePlayer; // x19

  p_moviePlayer = (MissionNaviTransitionBoardItem_o *)&this->fields.moviePlayer;
  moviePlayer = this->fields.moviePlayer;
  if ( moviePlayer )
    CRIMoviePlayer__Dispose(moviePlayer, 0);
  p_moviePlayer->klass = 0;
  sub_2213A04(p_moviePlayer, 0, v2, v3, v4, v5, v6, v7);
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
    sub_2213CDC(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent__EndLoad(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5974C25 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_13591/*"StartAnimation"*/);
    byte_5974C25 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_2213CDC(Instance, v4);
  }
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13591/*"StartAnimation"*/,
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
  __int64 v6; // x1

  if ( (byte_5974C33 & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_o *)sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    byte_5974C33 = 1;
  }
  CriMoviePlayerObject = CombineSpecialResultEffectComponent__CreateCriMoviePlayerObject(this, moviePlayerName, 0, v3);
  if ( !CriMoviePlayerObject )
    sub_2213CDC(0, v6);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               CriMoviePlayerObject,
                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


UnityEngine_GameObject_o *CombineSpecialResultEffectComponent__GetEffect(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *name,
        UnityEngine_GameObject_o *parentObj,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  __int64 v8; // x1
  Il2CppObject *Object_object__58532980; // x20
  __int64 v10; // x1
  Il2CppObject *v11; // x21

  if ( (byte_5974C23 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5974C23 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    return 0;
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              effectAssetData,
                              name,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  v11 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58532980, 0, 0) )
  {
    if ( parentObj )
      parentObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parentObj, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    v11 = UnityEngine_Object__Instantiate_object__59717228(
            Object_object__58532980,
            (UnityEngine_Transform_o *)parentObj,
            1,
            (const MethodInfo_38F366C *)Method_UnityEngine_Object_Instantiate_GameObject____91801592);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v11, 0);
    GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v11, 0);
  }
  return (UnityEngine_GameObject_o *)v11;
}


int32_t CombineSpecialResultEffectComponent__GetOldFriendshipMaxRank(
        CombineSpecialResultEffectComponent_o *this,
        int64_t userId,
        int32_t svtId,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUsrSvtData; // x8
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t klass; // w19
  int klass_high; // w23
  int32_t friendshipExceedCount; // w24
  __int64 v16; // x1
  Il2CppObject *v17; // x20
  __int64 fraction; // [xsp+8h] [xbp-58h] BYREF
  int32_t max[2]; // [xsp+10h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *v21; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_5974C30 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974C30 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  entity = 0;
  *(_QWORD *)max = 0;
  v21 = 0;
  fraction = 0;
  if ( baseUsrSvtData )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userId);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Master_object )
      goto LABEL_22;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           svtId,
           (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !Master_object )
        goto LABEL_22;
      Master_object = (Il2CppObject *)UserServantCollectionMaster__TryGetEntity(
                                        (UserServantCollectionMaster_o *)Master_object,
                                        &v21,
                                        userId,
                                        svtId,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( entity && v21 )
        {
          v11 = *(_QWORD *)&v21->fields.friendship.fields.currentCryptoKey;
          v12 = *(_QWORD *)&v21->fields.friendship.fields.fakeValue;
          klass = (int32_t)entity[6].klass;
          klass_high = HIDWORD(entity[6].klass);
          friendshipExceedCount = v21->fields.friendshipExceedCount;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
          v17 = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_FriendshipMaster___);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
          *(_QWORD *)&v23.fields.currentCryptoKey = v11;
          *(_QWORD *)&v23.fields.fakeValue = v12;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v23, 0);
          if ( v17 )
          {
            FriendshipMaster__GetFriendshipRank(
              (FriendshipMaster_o *)v17,
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
        sub_2213CDC(Master_object, v9);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  CombineRootComponent_c *v22; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v24; // x22
  __int64 v25; // x1

  if ( (byte_5974C20 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CombineRootComponent_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent___c__DisplayClass34_0__LoadEffectAsset_b__0__);
    sub_2213A60(&CombineSpecialResultEffectComponent___c__DisplayClass34_0_TypeInfo);
    byte_5974C20 = 1;
  }
  v5 = sub_2213CCC(CombineSpecialResultEffectComponent___c__DisplayClass34_0_TypeInfo);
  CombineSpecialResultEffectComponent___c__DisplayClass34_0___ctor(
    (CombineSpecialResultEffectComponent___c__DisplayClass34_0_o *)v5,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = nextAction;
  v14 = v5 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)nextAction, v15, v16, v17, v18, v19, v20);
  v22 = CombineRootComponent_TypeInfo;
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v21);
    v22 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v22->static_fields->COMBINE_ASSET_PATH;
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_CombineSpecialResultEffectComponent___c__DisplayClass34_0__LoadEffectAsset_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v24, 1, 0, 0) )
  {
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
  }
}


void CombineSpecialResultEffectComponent__LoadMovieAsset(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *nextAction,
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
  __int64 v14; // x19
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  System_String_o *movieName; // x20
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v24; // x22
  __int64 v25; // x1

  if ( (byte_5974C1F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&CommonUI_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent___c__DisplayClass33_0__LoadMovieAsset_b__0__);
    sub_2213A60(&CombineSpecialResultEffectComponent___c__DisplayClass33_0_TypeInfo);
    byte_5974C1F = 1;
  }
  v5 = sub_2213CCC(CombineSpecialResultEffectComponent___c__DisplayClass33_0_TypeInfo);
  CombineSpecialResultEffectComponent___c__DisplayClass33_0___ctor(
    (CombineSpecialResultEffectComponent___c__DisplayClass33_0_o *)v5,
    0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = nextAction;
  v14 = v5 + 24;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)nextAction, v15, v16, v17, v18, v19, v20);
  if ( System_String__IsNullOrEmpty(this->fields.movieName, 0) )
    goto LABEL_16;
  movieName = this->fields.movieName;
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v21);
  MoviePath = CommonUI__CreateMoviePath(movieName, 0);
  v24 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v24,
    (Il2CppObject *)v5,
    Method_CombineSpecialResultEffectComponent___c__DisplayClass33_0__LoadMovieAsset_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v24, 1, 0) )
  {
LABEL_16:
    if ( *(_QWORD *)v14 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
  }
}


void CombineSpecialResultEffectComponent__OnClick(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  __int64 v4; // x1
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v6; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v8; // x0
  intptr_t *v9; // x8
  System_Action_o *v10; // x21
  int32_t noticeState; // w8
  System_Action_o *v12; // x20
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2
  System_Action_o *v15; // x0
  intptr_t *v16; // x8
  __int64 v17; // x1
  AvalonSceneManager_c *v18; // x8
  System_Action_o *v19; // x20
  const MethodInfo *v20; // x2
  System_Action_c *v21; // x0
  System_Action_o *v22; // x0
  intptr_t *v23; // x8
  System_Action_o *v24; // x20
  const MethodInfo *v25; // x2
  System_Action_c *v26; // x0
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x2
  System_Action_c *v29; // x0
  System_Action_o *v30; // x20
  const MethodInfo *v31; // x2

  if ( (byte_5974C2E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AvalonSceneManager_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_0__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_1__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_2__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_3__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_4__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_5__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_6__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_7__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_8__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_9__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5974C2E = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_41;
  if ( UnityEngine_Collider__get_enabled(bgCollider, 0) )
  {
    bgCollider = this->fields.bgCollider;
    if ( !bgCollider )
      goto LABEL_41;
    UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
    if ( this->fields.isSkipDetail )
    {
      this->fields.noticeState = 0;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v6 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4);
        v6 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v6->static_fields->DEFAULT_FADE_TIME;
      v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v9 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_0__;
      goto LABEL_10;
    }
    noticeState = this->fields.noticeState;
    if ( noticeState > 4 )
    {
      if ( noticeState > 6 )
      {
        if ( noticeState == 7 )
        {
          this->fields.noticeState = 8;
          v24 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          System_Action___ctor(
            v24,
            (Il2CppObject *)this,
            Method_CombineSpecialResultEffectComponent__OnClick_b__57_8__,
            0);
          CombineSpecialResultEffectComponent__CloseExceedDescription(this, v24, v25);
        }
        else if ( noticeState == 8 )
        {
          this->fields.noticeState = 0;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v18 = AvalonSceneManager_TypeInfo;
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v17);
            v18 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
          v8 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          v9 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_9__;
LABEL_10:
          v10 = v8;
          System_Action___ctor(v8, (Il2CppObject *)this, *v9, 0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v10, 0);
            return;
          }
LABEL_41:
          sub_2213CDC(bgCollider, method);
        }
      }
      else if ( noticeState == 5 )
      {
        this->fields.noticeState = 6;
        v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v19,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__OnClick_b__57_6__,
          0);
        CombineSpecialResultEffectComponent__CloseClassPassiveResultInfo(this, v19, v20);
      }
      else
      {
        this->fields.noticeState = 7;
        v13 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(
          v13,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__OnClick_b__57_7__,
          0);
        CombineSpecialResultEffectComponent__CloseTreasureDeviceChangeInfo(this, v13, v14);
      }
    }
    else if ( noticeState > 2 )
    {
      if ( noticeState == 3 )
      {
        bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
        if ( !bgCollider )
          goto LABEL_41;
        if ( CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
               (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
               0) )
        {
          v21 = System_Action_TypeInfo;
          this->fields.noticeState = 4;
          v22 = (System_Action_o *)sub_2213CCC(v21);
          v23 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_2__;
        }
        else
        {
          v26 = System_Action_TypeInfo;
          this->fields.noticeState = 5;
          v22 = (System_Action_o *)sub_2213CCC(v26);
          v23 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_3__;
        }
        v27 = v22;
        System_Action___ctor(v22, (Il2CppObject *)this, *v23, 0);
        CombineSpecialResultEffectComponent__CloseRarityResultInfo(this, v27, v28);
      }
      else
      {
        bgCollider = (UnityEngine_Collider_o *)this->fields.costumeSkillInfoManager;
        if ( !bgCollider )
          goto LABEL_41;
        ++LODWORD(bgCollider->fields.m_CachedPtr);
        if ( CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
               (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)bgCollider,
               0) )
        {
          v15 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
          v16 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_4__;
        }
        else
        {
          v29 = System_Action_TypeInfo;
          this->fields.noticeState = 5;
          v15 = (System_Action_o *)sub_2213CCC(v29);
          v16 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_5__;
        }
        v30 = v15;
        System_Action___ctor(v15, (Il2CppObject *)this, *v16, 0);
        CombineSpecialResultEffectComponent__CloseSkillChangeResultInfo(this, v30, v31);
      }
    }
    else if ( noticeState == 1 )
    {
      this->fields.noticeState = 2;
      CombineSpecialResultEffectComponent__ShowSkillChangeMessage(this, method);
    }
    else if ( noticeState == 2 )
    {
      this->fields.noticeState = 3;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__OnClick_b__57_1__, 0);
      bgCollider = (UnityEngine_Collider_o *)this->fields.skillResultInfoWindow;
      if ( !bgCollider )
        goto LABEL_41;
      SkillUpResultWindowComponent__CloseToNext((SkillUpResultWindowComponent_o *)bgCollider, v12, 0);
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
  bool v6; // w6
  bool v7; // w7
  struct UserServantEntity_o **p_resUsrSvtData; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  __int64 v26; // x1
  UserServantEntity_o *resUsrSvtData; // x0
  struct ServantOverwriteStatus_o *OverwriteStatus; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *v35; // x23
  struct CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o **p_costumeSkillInfoManager; // x22
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct UserServantEntity_o *baseUsrSvtData; // x23
  __int64 v44; // x24
  __int64 v45; // x25
  int32_t v46; // w0
  UserServantEntity_o *v47; // x23
  int32_t v48; // w0
  const MethodInfo *v49; // x3
  unsigned int i; // w25
  SkillInfo_o *v51; // x8
  int32_t id; // w23
  int32_t v53; // w5
  SkillInfo_o *v54; // x9
  int32_t lv; // w2
  Il2CppClass **v56; // x9
  Il2CppClass *v57; // x10
  Il2CppClass *v58; // x8
  ServantSkillAddEntity_o *v59; // [xsp+0h] [xbp-60h] BYREF
  SkillInfo_array *v60; // [xsp+8h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_5974C21 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&CombineSpecialResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5974C21 = 1;
  }
  skillInfoList = 0;
  v59 = 0;
  v60 = 0;
  this->fields.baseUsrSvtData = baseData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseUsrSvtData,
    (int32_t)baseData,
    (System_String_o *)resData,
    (System_String_o *)svtCostumeEnt,
    (int32_t)endAction,
    (int32_t)method,
    v6,
    v7);
  this->fields.resUsrSvtData = resData;
  p_resUsrSvtData = &this->fields.resUsrSvtData;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData,
    (int32_t)resData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.servantCostumeEntity = svtCostumeEnt;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantCostumeEntity,
    (int32_t)svtCostumeEnt,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_38;
  OverwriteStatus = UserServantEntity__GetOverwriteStatus(resUsrSvtData, 0, 0);
  this->fields.resultSvtOverwriteStatus = OverwriteStatus;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultSvtOverwriteStatus,
    (int32_t)OverwriteStatus,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)sub_2213CCC(CombineSpecialResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager___ctor(v35, 0);
  this->fields.costumeSkillInfoManager = v35;
  p_costumeSkillInfoManager = &this->fields.costumeSkillInfoManager;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.costumeSkillInfoManager,
    (int32_t)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_38;
  v44 = *(_QWORD *)&baseUsrSvtData->fields.dispLimitCount.fields.currentCryptoKey;
  v45 = *(_QWORD *)&baseUsrSvtData->fields.dispLimitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26);
  *(_QWORD *)&v62.fields.currentCryptoKey = v44;
  *(_QWORD *)&v62.fields.fakeValue = v45;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v62, 0);
  UserServantEntity__getSkillInfo(baseUsrSvtData, &skillInfoList, -1, v46, 1, 0, -1, 0);
  v47 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
LABEL_38:
    sub_2213CDC(resUsrSvtData, v26);
  v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v47->fields.dispLimitCount, 0);
  UserServantEntity__getSkillInfo(v47, &v60, -1, v48, 1, 0, -1, 0);
  for ( i = 0; ; ++i )
  {
    resUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26);
      resUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)&resUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 40LL) )
      break;
    if ( !v60 )
      goto LABEL_38;
    if ( i >= LODWORD(v60->max_length) )
      goto LABEL_39;
    v51 = v60->m_Items[i];
    if ( !v51 )
      goto LABEL_38;
    resUsrSvtData = *p_resUsrSvtData;
    if ( !*p_resUsrSvtData )
      goto LABEL_38;
    id = v51->fields.id;
    resUsrSvtData = (UserServantEntity_o *)UserServantEntity__TryGetServantSkillAddBySkillId(resUsrSvtData, &v59, id, 0);
    if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
    {
      resUsrSvtData = (UserServantEntity_o *)v59;
      if ( !v59 )
        goto LABEL_38;
      resUsrSvtData = (UserServantEntity_o *)ServantSkillAddEntity__GetBaseSkillId(v59, 0);
      if ( !v59 )
        goto LABEL_38;
      id = (int)resUsrSvtData;
      resUsrSvtData = (UserServantEntity_o *)ServantSkillAddEntity__GetExchangedSkillId(v59, 0);
      v53 = (int)resUsrSvtData;
    }
    else
    {
      v53 = 0;
    }
    if ( id < 1 )
      continue;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( i >= LODWORD(skillInfoList->max_length) )
      goto LABEL_39;
    v54 = skillInfoList->m_Items[i];
    if ( !v54 )
      goto LABEL_38;
    v26 = (unsigned int)v54->fields.id;
    lv = v54->fields.lv;
    v56 = &v60->obj.klass + (int)i;
    if ( (_DWORD)v26 == id )
    {
      if ( !v60 )
        goto LABEL_38;
      if ( i >= LODWORD(v60->max_length) )
LABEL_39:
        sub_2213CE4(resUsrSvtData);
      v57 = v56[4];
      if ( !v57 )
        goto LABEL_38;
      if ( lv == HIDWORD(v57->_1.name) )
        continue;
    }
    else if ( !v60 )
    {
      goto LABEL_38;
    }
    if ( i >= LODWORD(v60->max_length) )
      goto LABEL_39;
    v58 = v56[4];
    if ( !v58 )
      goto LABEL_38;
    resUsrSvtData = (UserServantEntity_o *)*p_costumeSkillInfoManager;
    if ( !*p_costumeSkillInfoManager )
      goto LABEL_38;
    CombineSpecialResultEffectComponent_CostumeSkillInfoManager__Add(
      (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)resUsrSvtData,
      v26,
      lv,
      id,
      HIDWORD(v58->_1.name),
      v53,
      HIDWORD(v58->_1.name),
      0);
  }
  CombineSpecialResultEffectComponent__Play_55968624(this, endAction, 0, v49);
}


void CombineSpecialResultEffectComponent__PlayMovie(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  CommonUI_c *v5; // x0
  struct CRIMoviePlayer_o *CriMoviePlayer; // x0
  struct CRIMoviePlayer_o **p_moviePlayer; // x19
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  System_String_o *MoviePath; // x22
  AssetData_o *movieAssetData; // x0
  float v19; // s0
  int32_t fadeStartFrame; // w24
  CRIMoviePlayer_o *v21; // x21
  System_String_o *Path; // x23
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974C24 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__PlayMovie_b__38_0__);
    sub_2213A60(&CommonUI_TypeInfo);
    byte_5974C24 = 1;
  }
  if ( this->fields.movieAssetData && !System_String__IsNullOrEmpty(this->fields.movieName, 0) )
  {
    v5 = CommonUI_TypeInfo;
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v3);
      v5 = CommonUI_TypeInfo;
    }
    CriMoviePlayer = CombineSpecialResultEffectComponent__GetCriMoviePlayer(
                       this,
                       v5->static_fields->MoviePlayerObjectPath,
                       v4);
    this->fields.moviePlayer = CriMoviePlayer;
    p_moviePlayer = &this->fields.moviePlayer;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.moviePlayer,
      (int32_t)CriMoviePlayer,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__PlayMovie_b__38_0__, 0);
    MoviePath = CombineSpecialResultEffectComponent__CreateMoviePath(this->fields.movieName, v15);
    movieAssetData = this->fields.movieAssetData;
    v19 = this->fields.animStartedTime * 30.0;
    if ( v19 == INFINITY )
      fadeStartFrame = 0x80000000;
    else
      fadeStartFrame = (int)v19;
    if ( !movieAssetData )
      goto LABEL_22;
    v21 = *p_moviePlayer;
    Path = AssetData__get_Path(movieAssetData, 0);
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v16);
    if ( !byte_596B2FF )
    {
      sub_2213A60(&BgmManager_TypeInfo);
      byte_596B2FF = 1;
    }
    movieAssetData = (AssetData_o *)BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v16);
      movieAssetData = (AssetData_o *)BgmManager_TypeInfo;
    }
    if ( !v21 )
      goto LABEL_22;
    CRIMoviePlayer__Initialize(
      v21,
      MoviePath,
      Path,
      *(float *)(*(_QWORD *)&movieAssetData[1].fields.alreadySetIsResourcesUnload + 36LL),
      0,
      0,
      v14,
      0,
      0,
      1,
      fadeStartFrame,
      1,
      0,
      0,
      0,
      0);
    movieAssetData = (AssetData_o *)*p_moviePlayer;
    if ( !*p_moviePlayer
      || (v23.fields.r = 0.0,
          v23.fields.g = 0.0,
          v23.fields.b = 0.0,
          v23.fields.a = 1.0,
          CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)movieAssetData, v23, 0),
          (movieAssetData = (AssetData_o *)*p_moviePlayer) == 0) )
    {
LABEL_22:
      sub_2213CDC(movieAssetData, v16);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)movieAssetData, 1, 0, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineSpecialResultEffectComponent__Play_55968624(
        CombineSpecialResultEffectComponent_o *this,
        System_Action_o *endAction,
        bool isSkipResultDetail,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  UISprite_o *touchInfoBaseSprite; // x20
  __int64 v15; // x20
  System_Action_object__o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Action_object__o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  ActionChain_o *v30; // x21
  __int64 v31; // x20
  System_Action_o *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_5974C22 & 1) == 0 )
  {
    sub_2213A60(&ActionChain_TypeInfo);
    sub_2213A60(&System_Action___TypeInfo);
    sub_2213A60(&System_Action_Action____TypeInfo);
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent_LoadEffectAsset__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent_LoadMovieAsset__);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__Play_b__36_0__);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&StringLiteral_21727/*"img_txt_touchscreen_sp"*/);
    byte_5974C22 = 1;
  }
  this->fields.isSkipDetail = isSkipResultDetail;
  this->fields.endCallbackFunc = endAction;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallbackFunc,
    (int32_t)endAction,
    (System_String_o *)isSkipResultDetail,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  touchInfoBaseSprite = this->fields.touchInfoBaseSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
  AtlasManager__SetDownloadCommonSprite(touchInfoBaseSprite, (System_String_o *)StringLiteral_21727/*"img_txt_touchscreen_sp"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.touchInfoEffectSprite, (System_String_o *)StringLiteral_21727/*"img_txt_touchscreen_sp"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgCollider;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  gameObject = this->fields.touchInfo;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v15 = sub_2213B20(System_Action_Action____TypeInfo, 2);
  v16 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent_LoadMovieAsset__,
    0);
  if ( !v15 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_18;
  *(_QWORD *)(v15 + 32) = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v23,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent_LoadEffectAsset__,
    0);
  if ( (*(_DWORD *)(v15 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_18;
  *(_QWORD *)(v15 + 40) = v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 40), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = (ActionChain_o *)sub_2213CCC(ActionChain_TypeInfo);
  ActionChain___ctor_56107140(v30, (System_Action_Action__array *)v15, 0);
  v31 = sub_2213B20(System_Action___TypeInfo, 1);
  v32 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__Play_b__36_0__, 0);
  if ( !v31 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v31 + 24) )
LABEL_18:
    sub_2213CE4(gameObject);
  *(_QWORD *)(v31 + 32) = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v31 + 32), (int32_t)v32, v33, v34, v35, v36, v37, v38);
  if ( !v30
    || (gameObject = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                   (ChainableActionBase_o *)v30,
                                                   (System_Action_array *)v31,
                                                   0)) == 0 )
  {
LABEL_17:
    sub_2213CDC(gameObject, v12);
  }
  ChainableActionBase__Execute((ChainableActionBase_o *)gameObject, 0);
}


void CombineSpecialResultEffectComponent__ShowClassPassiveResultInfo(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x21
  UserServantEntity_o *resUsrSvtData; // x22
  ClassPassiveResultWindowComponent_o *classPassiveResultWindow; // x20
  ServantCostumeEntity_o *servantCostumeEntity; // x23
  System_Action_o *v7; // x24
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x5

  if ( (byte_5974C2A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    byte_5974C2A = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  resUsrSvtData = this->fields.resUsrSvtData;
  classPassiveResultWindow = this->fields.classPassiveResultWindow;
  servantCostumeEntity = this->fields.servantCostumeEntity;
  v7 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0);
  if ( !classPassiveResultWindow )
    sub_2213CDC(v8, v9);
  ClassPassiveResultWindowComponent__Open(
    classPassiveResultWindow,
    baseUsrSvtData,
    resUsrSvtData,
    servantCostumeEntity,
    v7,
    v10);
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
  int32_t v14; // w22
  UserServantEntity_o *resUsrSvtData; // x21
  System_Action_o *v16; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5974C2D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo_b__55_0__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974C2D = 1;
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
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v17 = v18;
  bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v17, 0);
  v6 = this->fields.baseUsrSvtData;
  if ( !v6 )
    goto LABEL_12;
  v7 = (int64_t)bgCollider;
  v8 = *(_QWORD *)&v6->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&v6->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v19.fields.currentCryptoKey = v8;
  *(_QWORD *)&v19.fields.fakeValue = v9;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v19, 0);
  OldFriendshipMaxRank = CombineSpecialResultEffectComponent__GetOldFriendshipMaxRank(this, v7, v10, v11);
  friendshipExceedResultWindow = this->fields.friendshipExceedResultWindow;
  v14 = OldFriendshipMaxRank;
  resUsrSvtData = this->fields.resUsrSvtData;
  v16 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo_b__55_0__,
    0);
  if ( !friendshipExceedResultWindow )
LABEL_12:
    sub_2213CDC(bgCollider, method);
  FriendshipExceedResultWindowComponent__OpenFriendshipExceedInfo(
    friendshipExceedResultWindow,
    resUsrSvtData,
    v14,
    v16,
    0);
}


void CombineSpecialResultEffectComponent__ShowLevelExceedDescription(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v8; // w21
  System_Action_o *v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_5974C2C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__ShowLevelExceedDescription_b__53_0__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_3982/*"COSTUME_CHANGE_DESCRIPTION_LEVEL_EXCEED"*/);
    byte_5974C2C = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_9;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v10.fields.currentCryptoKey = v5;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v10, 0);
  v9 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v9,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowLevelExceedDescription_b__53_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_2213CDC(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage_37611424(
    skillResultInfoWindow,
    v8,
    (System_String_o *)StringLiteral_3982/*"COSTUME_CHANGE_DESCRIPTION_LEVEL_EXCEED"*/,
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
  RarityResultWindowComponent_o *rarityResultInfoWindow; // x25
  int32_t Rarity_k__BackingField; // w22
  int32_t Cost_k__BackingField; // w23
  ServantCostumeEntity_o *servantCostumeEntity; // x24
  System_Action_o *v11; // x26

  if ( (byte_5974C29 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    byte_5974C29 = 1;
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
        rarityResultInfoWindow = this->fields.rarityResultInfoWindow,
        Rarity_k__BackingField = resultSvtOverwriteStatus->fields._Rarity_k__BackingField,
        Cost_k__BackingField = resultSvtOverwriteStatus->fields._Cost_k__BackingField,
        servantCostumeEntity = this->fields.servantCostumeEntity,
        v11 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0),
        !rarityResultInfoWindow) )
  {
LABEL_8:
    sub_2213CDC(baseUsrSvtData, method);
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
  UnityEngine_Collider_o *bgCollider; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v5; // x21
  __int64 v6; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  struct ServantCostumeEntity_o *servantCostumeEntity; // x8
  int32_t v9; // w21
  struct ServantCostumeEntity_o *v10; // x8
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  System_String_o *v13; // x22
  System_Action_o *v14; // x23
  int32_t id; // [xsp+8h] [xbp-48h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_5974C27 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__ShowSkillChangeMessage_b__43_0__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&StringLiteral_3983/*"COSTUME_CHANGE_DESCRIPTION_{0}_{1}"*/);
    byte_5974C27 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_11;
  v5 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v17.fields.currentCryptoKey = v5;
  *(_QWORD *)&v17.fields.fakeValue = v6;
  bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v17, 0);
  servantCostumeEntity = this->fields.servantCostumeEntity;
  if ( !servantCostumeEntity )
    goto LABEL_11;
  v9 = (int)bgCollider;
  svtId = servantCostumeEntity->fields.svtId;
  bgCollider = (UnityEngine_Collider_o *)j_il2cpp_value_box_0(qword_5984348, &svtId);
  v10 = this->fields.servantCostumeEntity;
  if ( !v10
    || (v11 = (Il2CppObject *)bgCollider,
        id = v10->fields.id,
        v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &id),
        v13 = System_String__Format_75697880((System_String_o *)StringLiteral_3983/*"COSTUME_CHANGE_DESCRIPTION_{0}_{1}"*/, v11, v12, 0),
        v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__ShowSkillChangeMessage_b__43_0__,
          0),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_2213CDC(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenSkillChangeMessage_37611424(skillResultInfoWindow, v9, v13, v14, 0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_5974C28 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo_b__45_0__);
    byte_5974C28 = 1;
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
  callback = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    callback,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo_b__45_0__,
    0);
  if ( !skillExtraResultInfoWindow )
LABEL_11:
    sub_2213CDC(bgCollider, *(_QWORD *)&index);
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
  int v4; // w8
  int64_t Master_object; // x0
  __int64 v6; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x21
  __int128 v8; // q1
  Il2CppObject *Entity; // x21
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantTreasureDeviceAddMaster_o *v11; // x20
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w21
  int32_t v15; // w22
  int32_t v16; // w20
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t id; // w23
  int32_t lv; // w24
  int32_t v20; // w22
  int32_t v21; // w25
  System_Action_o *v22; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v23; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v24; // [xsp+30h] [xbp-80h]
  TreasureDvcInfo_o *v25; // [xsp+58h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_5974C2B & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    sub_2213A60(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5974C2B = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  tdInfo = 0;
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v25 = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_24;
  v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v8 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v24.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v24.fields.fakeValue = v8;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
  v23 = v24;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v23, 0);
  if ( !v7 )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v7,
             Master_object,
             (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Master_object = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0);
  if ( !Entity )
    goto LABEL_24;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v25, -1, -1, 0, 0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_24;
  v11 = (ServantTreasureDeviceAddMaster_o *)Master_object;
  v12 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6);
  *(_QWORD *)&v27.fields.currentCryptoKey = v12;
  *(_QWORD *)&v27.fields.fakeValue = v13;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_24;
  v14 = Master_object;
  Master_object = UserServantEntity__getLimitCount(this->fields.resUsrSvtData, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_24;
  v15 = Master_object;
  Master_object = UserServantEntity__getDispLimitCount(this->fields.resUsrSvtData, 0, 0);
  if ( !v25 || !v11 )
    goto LABEL_24;
  Master_object = (int64_t)ServantTreasureDeviceAddMaster__GetEnableEntity(
                             v11,
                             v14,
                             v15,
                             Master_object,
                             v25->fields.id,
                             0,
                             0);
  if ( Master_object )
  {
    Master_object = ServantTreasureDeviceAddEntity__GetExchangedTreasureDeviceId(
                      (ServantTreasureDeviceAddEntity_o *)Master_object,
                      0);
    v16 = Master_object;
  }
  else
  {
    v16 = 0;
  }
  if ( !tdInfo
    || !v25
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v21 = v25->fields.id,
        v20 = v25->fields.lv,
        v22 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo),
        System_Action___ctor(v22, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0),
        !skillResultInfoWindow) )
  {
LABEL_24:
    sub_2213CDC(Master_object, v6);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo_37613224(
    skillResultInfoWindow,
    id,
    lv,
    v21,
    v20,
    v16,
    v20,
    v22,
    this->fields.servantCostumeEntity,
    0);
}


void CombineSpecialResultEffectComponent__StartAnimation(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  char *fsm; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  struct System_String_o *effectAnimName; // x1

  if ( (byte_5974C26 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12830/*"START_ANIMATION"*/);
    sub_2213A60(&StringLiteral_13592/*"StartAnimationName"*/);
    byte_5974C26 = 1;
  }
  fsm = (char *)this->fields.fsm;
  if ( !fsm
    || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0)) == 0
    || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                        (System_String_o *)StringLiteral_13592/*"StartAnimationName"*/,
                        0)) == 0
    || (effectAnimName = this->fields.effectAnimName,
        *((_QWORD *)fsm + 7) = effectAnimName,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(fsm + 56), (int32_t)effectAnimName, v4, v5, v6, v7, v8, v9),
        (fsm = (char *)this->fields.fsm) == 0) )
  {
    sub_2213CDC(fsm, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12830/*"START_ANIMATION"*/, 0);
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
    sub_2213CDC(touchInfo, method);
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
    sub_2213CDC(this, method);
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
    sub_2213CDC(this, method);
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
  float value; // s0

  if ( (byte_5974C36 & 1) == 0 )
  {
    sub_2213A60(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_5974C36 = 1;
  }
  moviePlayer = (UnityEngine_Component_o *)this->fields.moviePlayer;
  if ( !moviePlayer
    || (gameObject = UnityEngine_Component__get_gameObject(moviePlayer, 0),
        (moviePlayer = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                    gameObject,
                                                    (const MethodInfo_38B8770 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___)) == 0) )
  {
    sub_2213CDC(moviePlayer, method);
  }
  v5 = moviePlayer;
  *(float *)&moviePlayer[2].monitor = this->fields.movieFadeOutTime;
  value = TweenAlpha__get_value((TweenAlpha_o *)moviePlayer, 0);
  HIDWORD(v5[5].monitor) = 0;
  *(float *)&v5[5].monitor = value;
}


void CombineSpecialResultEffectComponent___Play_b__36_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct UnityEngine_GameObject_o *Effect; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  PlayMakerFSM_o *fsm; // x0
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x20
  System_Collections_IEnumerator_o *v15; // x1

  if ( (byte_5974C34 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineSpecialResultEffectComponent__Play_b__36_1__);
    sub_2213A60(&StringLiteral_11879/*"ResultEffect"*/);
    byte_5974C34 = 1;
  }
  Effect = CombineSpecialResultEffectComponent__GetEffect(
             this,
             this->fields.effectPrefabName,
             this->fields.effectParent,
             v2);
  this->fields.effect = Effect;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effect, (int32_t)Effect, v5, v6, v7, v8, v9, v10);
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0)) == 0
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11879/*"ResultEffect"*/,
                                  0)) == 0 )
  {
    sub_2213CDC(fsm, v11);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, this->fields.effect, 0);
  CombineSpecialResultEffectComponent__PlayMovie(this, v13);
  v14 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__Play_b__36_1__, 0);
  v15 = BasicHelper__DelayCall(0.132, v14, 1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v15, 0);
}


void CombineSpecialResultEffectComponent___Play_b__36_1(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_5974C35 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12864/*"START_SPECIAL_EFFECT"*/);
    byte_5974C35 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_2213CDC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12864/*"START_SPECIAL_EFFECT"*/, 0);
}


void CombineSpecialResultEffectComponent___ShowFriendshipExceedInfo_b__55_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowLevelExceedDescription_b__53_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowSkillChangeMessage_b__43_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowSkillChangeResultInfo_b__45_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_2213CDC(0, method);
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A160 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__TypeInfo);
    byte_596A160 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.skillList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x25
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  System_Collections_Generic_List_object__o *skillList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v47; // x10
  __int64 size; // x11
  Il2CppClass **v49; // x0

  if ( (byte_596A15D & 1) == 0 )
  {
    sub_2213A60(&CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_TypeInfo);
    sub_2213A60(&CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__Add__);
    byte_596A15D = 1;
  }
  v15 = sub_2213CCC(CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  v16 = sub_2213CCC(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  if ( !v16 )
    goto LABEL_12;
  *(_DWORD *)(v16 + 16) = beforeSkillId;
  *(_DWORD *)(v16 + 20) = breforeSkillLv;
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 16), v16, v19, v20, v21, v22, v23, v24);
  v25 = sub_2213CCC(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  if ( !v25 )
    goto LABEL_12;
  *(_DWORD *)(v25 + 16) = afterSkillId;
  *(_DWORD *)(v25 + 20) = afterSkillLv;
  *(_QWORD *)(v15 + 24) = v25;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 24), v25, v26, v27, v28, v29, v30, v31);
  v32 = sub_2213CCC(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0);
  if ( !v32 )
    goto LABEL_12;
  *(_DWORD *)(v32 + 16) = exAfterSkillId;
  *(_DWORD *)(v32 + 20) = exAfterSkillLv;
  *(_QWORD *)(v15 + 32) = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 32), v32, v33, v34, v35, v36, v37, v38);
  skillList = (System_Collections_Generic_List_object__o *)this->fields.skillList;
  if ( !skillList
    || (items = skillList->fields._items,
        v47 = Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__Add__,
        ++skillList->fields._version,
        !items) )
  {
LABEL_12:
    sub_2213CDC(v17, v18);
  }
  size = skillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillList,
      (Il2CppObject *)v15,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    skillList->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v49 + 4), v15, v39, v40, v41, v42, v43, v44);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *CombineSpecialResultEffectComponent_CostumeSkillInfoManager__GetSkillChangeInfo(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *skillList; // x0

  if ( (byte_596A15E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Item__);
    byte_596A15E = 1;
  }
  skillList = (System_Collections_Generic_List_object__o *)this->fields.skillList;
  if ( !skillList )
    sub_2213CDC(0, *(_QWORD *)&index);
  return (CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                                           skillList,
                                                                           index,
                                                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Item__);
}


bool CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__o *skillList; // x8
  int size; // w8

  v2 = this;
  if ( (byte_596A15F & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Count__);
    byte_596A15F = 1;
  }
  skillList = v2->fields.skillList;
  if ( !skillList )
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CombineSpecialResultEffectComponent_o *_4__this; // x0
  struct System_Action_o *nextAction; // x8

  if ( movieAsset )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_2213CDC(0, movieAsset);
    _4__this->fields.movieAssetData = movieAsset;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.movieAssetData,
      (int32_t)movieAsset,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CombineSpecialResultEffectComponent_o *_4__this; // x0
  struct System_Action_o *nextAction; // x8

  if ( data )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      sub_2213CDC(0, data);
    _4__this->fields.effectAssetData = data;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.effectAssetData,
      (int32_t)data,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
  nextAction = this->fields.nextAction;
  if ( nextAction )
    ((void (__fastcall *)(intptr_t, intptr_t))nextAction->fields.invoke_impl)(
      nextAction->fields.method_code,
      nextAction->fields.method);
}