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

  if ( (byte_5932043 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    byte_5932043 = 1;
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
    sub_21FFECC(skillExtraResultInfoWindow, method);
  }
  FriendshipExceedResultWindowComponent__ValidateSerializedField(
    (FriendshipExceedResultWindowComponent_o *)skillExtraResultInfoWindow,
    0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
  this->fields.fsm = (struct PlayMakerFSM_o *)Component_object;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.fsm, (int32_t)Component_object, v5, v6, v7, v8, v9, v10);
}


void CombineSpecialResultEffectComponent__Close(CombineSpecialResultEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetData_o *movieAssetData; // x20
  AssetData_o *effectAssetData; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_5932054 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5932054 = 1;
  }
  movieAssetData = this->fields.movieAssetData;
  if ( movieAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAsset_47465556(movieAssetData, 0);
  }
  effectAssetData = this->fields.effectAssetData;
  if ( effectAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAsset_47465556(effectAssetData, 0);
  }
  CombineSpecialResultEffectComponent__DestroyMoviePlayer(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v7);
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
    sub_21FFECC(0, nextAction);
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
    sub_21FFECC(0, nextAction);
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
    sub_21FFECC(0, nextAction);
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
    sub_21FFECC(0, nextAction);
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
    sub_21FFECC(0, nextAction);
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
    sub_21FFECC(0, nextAction);
  SkillUpResultWindowComponent__CloseToNext(skillResultInfoWindow, nextAction, 0);
}


UnityEngine_GameObject_o *CombineSpecialResultEffectComponent__CreateCriMoviePlayerObject(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *moviePlayerName,
        UnityEngine_Component_o *parent,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *object; // x20
  Il2CppObject *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x19

  if ( (byte_5932057 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIPanel___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Resources_Load_GameObject___);
    byte_5932057 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             moviePlayerName,
             (const MethodInfo_3945260 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v9 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)parent, 0, 0);
  if ( v10 )
    GameObjectExtensions__SafeSetParent((UnityEngine_GameObject_o *)v9, parent, 0);
  if ( !v9 )
    goto LABEL_14;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)v9,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIPanel___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
  v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v10 )
  {
    if ( Component_object )
    {
      UIPanel__set_sortingOrder((UIPanel_o *)Component_object, 1, 0);
      return (UnityEngine_GameObject_o *)v9;
    }
LABEL_14:
    sub_21FFECC(v10, v11);
  }
  return (UnityEngine_GameObject_o *)v9;
}


System_String_o *CombineSpecialResultEffectComponent__CreateMoviePath(
        System_String_o *movieName,
        const MethodInfo *method)
{
  if ( (byte_5932056 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9549/*"Movie/{0}.usm"*/);
    byte_5932056 = 1;
  }
  return System_String__Format((System_String_o *)StringLiteral_9549/*"Movie/{0}.usm"*/, (Il2CppObject *)movieName, 0);
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
  sub_21FFBF4(p_moviePlayer, 0, v2, v3, v4, v5, v6, v7);
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
    sub_21FFECC(bgCollider, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent__EndLoad(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593204A & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_13564/*"StartAnimation"*/);
    byte_593204A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0),
        (Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(Instance, v4);
  }
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13564/*"StartAnimation"*/,
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

  if ( (byte_5932058 & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    byte_5932058 = 1;
  }
  CriMoviePlayerObject = CombineSpecialResultEffectComponent__CreateCriMoviePlayerObject(this, moviePlayerName, 0, v3);
  if ( !CriMoviePlayerObject )
    sub_21FFECC(0, v6);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               CriMoviePlayerObject,
                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


UnityEngine_GameObject_o *CombineSpecialResultEffectComponent__GetEffect(
        CombineSpecialResultEffectComponent_o *this,
        System_String_o *name,
        UnityEngine_GameObject_o *parentObj,
        const MethodInfo *method)
{
  AssetData_o *effectAssetData; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Object_object__58323140; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  Il2CppObject *v13; // x21

  if ( (byte_5932048 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575184);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5932048 = 1;
  }
  effectAssetData = this->fields.effectAssetData;
  if ( !effectAssetData )
    return 0;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              effectAssetData,
                              name,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  v13 = 0;
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
  {
    if ( parentObj )
      parentObj = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(parentObj, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11, v12);
    v13 = UnityEngine_Object__Instantiate_object__59507108(
            Object_object__58323140,
            (UnityEngine_Transform_o *)parentObj,
            1,
            (const MethodInfo_38C01A4 *)Method_UnityEngine_Object_Instantiate_GameObject____91575184);
    GameObjectExtensions__ResetLocalPosition((UnityEngine_GameObject_o *)v13, 0);
    GameObjectExtensions__ResetLocalScale((UnityEngine_GameObject_o *)v13, 0);
  }
  return (UnityEngine_GameObject_o *)v13;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v11; // x2
  __int64 v12; // x2
  __int64 v13; // x21
  __int64 v14; // x22
  int32_t klass; // w19
  int klass_high; // w23
  int32_t friendshipExceedCount; // w24
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *v20; // x20
  __int64 fraction; // [xsp+8h] [xbp-58h] BYREF
  int32_t max[2]; // [xsp+10h] [xbp-50h] BYREF
  UserServantCollectionEntity_o *v24; // [xsp+18h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+28h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_5932055 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5932055 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  entity = 0;
  *(_QWORD *)max = 0;
  v24 = 0;
  fraction = 0;
  if ( baseUsrSvtData )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userId, *(_QWORD *)&svtId);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( !Master_object )
      goto LABEL_22;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
           &entity,
           svtId,
           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
      if ( !Master_object )
        goto LABEL_22;
      Master_object = (Il2CppObject *)UserServantCollectionMaster__TryGetEntity(
                                        (UserServantCollectionMaster_o *)Master_object,
                                        &v24,
                                        userId,
                                        svtId,
                                        0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( entity && v24 )
        {
          v13 = *(_QWORD *)&v24->fields.friendship.fields.currentCryptoKey;
          v14 = *(_QWORD *)&v24->fields.friendship.fields.fakeValue;
          klass = (int32_t)entity[6].klass;
          klass_high = HIDWORD(entity[6].klass);
          friendshipExceedCount = v24->fields.friendshipExceedCount;
          if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9, v12);
          v20 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FriendshipMaster___);
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18, v19);
          *(_QWORD *)&v26.fields.currentCryptoKey = v13;
          *(_QWORD *)&v26.fields.fakeValue = v14;
          Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v26, 0);
          if ( v20 )
          {
            FriendshipMaster__GetFriendshipRank(
              (FriendshipMaster_o *)v20,
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
        sub_21FFECC(Master_object, v9);
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
  __int64 v22; // x2
  CombineRootComponent_c *v23; // x0
  System_String_o *COMBINE_ASSET_PATH; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2

  if ( (byte_5932045 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&CombineRootComponent_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent___c__DisplayClass34_0__LoadEffectAsset_b__0__);
    sub_21FFC50(&CombineSpecialResultEffectComponent___c__DisplayClass34_0_TypeInfo);
    byte_5932045 = 1;
  }
  v5 = sub_21FFEBC(CombineSpecialResultEffectComponent___c__DisplayClass34_0_TypeInfo);
  CombineSpecialResultEffectComponent___c__DisplayClass34_0___ctor(
    (CombineSpecialResultEffectComponent___c__DisplayClass34_0_o *)v5,
    0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = nextAction;
  v14 = v5 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)nextAction, v15, v16, v17, v18, v19, v20);
  v23 = CombineRootComponent_TypeInfo;
  if ( !*(&CombineRootComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo, v21, v22);
    v23 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v23->static_fields->COMBINE_ASSET_PATH;
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_CombineSpecialResultEffectComponent___c__DisplayClass34_0__LoadEffectAsset_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26, v27);
  if ( !AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v25, 1, 0, 0) )
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
  __int64 v22; // x2
  System_String_o *movieName; // x20
  System_String_o *MoviePath; // x20
  AssetLoader_LoadEndDataHandler_o *v25; // x22
  __int64 v26; // x1
  __int64 v27; // x2

  if ( (byte_5932044 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&CommonUI_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent___c__DisplayClass33_0__LoadMovieAsset_b__0__);
    sub_21FFC50(&CombineSpecialResultEffectComponent___c__DisplayClass33_0_TypeInfo);
    byte_5932044 = 1;
  }
  v5 = sub_21FFEBC(CombineSpecialResultEffectComponent___c__DisplayClass33_0_TypeInfo);
  CombineSpecialResultEffectComponent___c__DisplayClass33_0___ctor(
    (CombineSpecialResultEffectComponent___c__DisplayClass33_0_o *)v5,
    0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = nextAction;
  v14 = v5 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)nextAction, v15, v16, v17, v18, v19, v20);
  if ( System_String__IsNullOrEmpty(this->fields.movieName, 0) )
    goto LABEL_16;
  movieName = this->fields.movieName;
  if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v21, v22);
  MoviePath = CommonUI__CreateMoviePath(movieName, 0);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_CombineSpecialResultEffectComponent___c__DisplayClass33_0__LoadMovieAsset_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v26, v27);
  if ( !AssetManager__downloadAssetStorage(MoviePath, v25, 1, 0) )
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
  __int64 v5; // x2
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x0
  intptr_t *v10; // x8
  System_Action_o *v11; // x21
  int32_t noticeState; // w8
  System_Action_o *v13; // x20
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2
  System_Action_o *v16; // x0
  intptr_t *v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  AvalonSceneManager_c *v20; // x8
  System_Action_o *v21; // x20
  const MethodInfo *v22; // x2
  System_Action_c *v23; // x0
  System_Action_o *v24; // x0
  intptr_t *v25; // x8
  System_Action_o *v26; // x20
  const MethodInfo *v27; // x2
  System_Action_c *v28; // x0
  System_Action_o *v29; // x20
  const MethodInfo *v30; // x2
  System_Action_c *v31; // x0
  System_Action_o *v32; // x20
  const MethodInfo *v33; // x2

  if ( (byte_5932053 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_0__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_1__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_2__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_3__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_4__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_5__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_6__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_7__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_8__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__OnClick_b__57_9__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5932053 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v7 = AvalonSceneManager_TypeInfo;
      if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
        v7 = AvalonSceneManager_TypeInfo;
      }
      DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
      v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      v10 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_0__;
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
          v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            v26,
            (Il2CppObject *)this,
            Method_CombineSpecialResultEffectComponent__OnClick_b__57_8__,
            0);
          CombineSpecialResultEffectComponent__CloseExceedDescription(this, v26, v27);
        }
        else if ( noticeState == 8 )
        {
          this->fields.noticeState = 0;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = AvalonSceneManager_TypeInfo;
          if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v18, v19);
            v20 = AvalonSceneManager_TypeInfo;
          }
          DEFAULT_FADE_TIME = v20->static_fields->DEFAULT_FADE_TIME;
          v9 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          v10 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_9__;
LABEL_10:
          v11 = v9;
          System_Action___ctor(v9, (Il2CppObject *)this, *v10, 0);
          if ( Instance )
          {
            CommonUI__maskFadeout((CommonUI_o *)Instance, 1, DEFAULT_FADE_TIME, v11, 0);
            return;
          }
LABEL_41:
          sub_21FFECC(bgCollider, method);
        }
      }
      else if ( noticeState == 5 )
      {
        this->fields.noticeState = 6;
        v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v21,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__OnClick_b__57_6__,
          0);
        CombineSpecialResultEffectComponent__CloseClassPassiveResultInfo(this, v21, v22);
      }
      else
      {
        this->fields.noticeState = 7;
        v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(
          v14,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__OnClick_b__57_7__,
          0);
        CombineSpecialResultEffectComponent__CloseTreasureDeviceChangeInfo(this, v14, v15);
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
          v23 = System_Action_TypeInfo;
          this->fields.noticeState = 4;
          v24 = (System_Action_o *)sub_21FFEBC(v23);
          v25 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_2__;
        }
        else
        {
          v28 = System_Action_TypeInfo;
          this->fields.noticeState = 5;
          v24 = (System_Action_o *)sub_21FFEBC(v28);
          v25 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_3__;
        }
        v29 = v24;
        System_Action___ctor(v24, (Il2CppObject *)this, *v25, 0);
        CombineSpecialResultEffectComponent__CloseRarityResultInfo(this, v29, v30);
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
          v16 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          v17 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_4__;
        }
        else
        {
          v31 = System_Action_TypeInfo;
          this->fields.noticeState = 5;
          v16 = (System_Action_o *)sub_21FFEBC(v31);
          v17 = &Method_CombineSpecialResultEffectComponent__OnClick_b__57_5__;
        }
        v32 = v16;
        System_Action___ctor(v16, (Il2CppObject *)this, *v17, 0);
        CombineSpecialResultEffectComponent__CloseSkillChangeResultInfo(this, v32, v33);
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
      v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__OnClick_b__57_1__, 0);
      bgCollider = (UnityEngine_Collider_o *)this->fields.skillResultInfoWindow;
      if ( !bgCollider )
        goto LABEL_41;
      SkillUpResultWindowComponent__CloseToNext((SkillUpResultWindowComponent_o *)bgCollider, v13, 0);
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
  __int64 v43; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x23
  __int64 v45; // x24
  __int64 v46; // x25
  int32_t v47; // w0
  UserServantEntity_o *v48; // x23
  int32_t v49; // w0
  __int64 lv; // x2
  const MethodInfo *v51; // x3
  unsigned int i; // w25
  SkillInfo_o *v53; // x8
  int32_t id; // w23
  int32_t v55; // w5
  SkillInfo_o *v56; // x9
  Il2CppClass **v57; // x9
  Il2CppClass *v58; // x10
  Il2CppClass *v59; // x8
  ServantSkillAddEntity_o *v60; // [xsp+0h] [xbp-60h] BYREF
  SkillInfo_array *v61; // [xsp+8h] [xbp-58h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+18h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // 0:x0.16

  if ( (byte_5932046 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CombineSpecialResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5932046 = 1;
  }
  skillInfoList = 0;
  v60 = 0;
  v61 = 0;
  this->fields.baseUsrSvtData = baseData;
  sub_21FFBF4(
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resUsrSvtData,
    (int32_t)resData,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.servantCostumeEntity = svtCostumeEnt;
  sub_21FFBF4(
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
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.resultSvtOverwriteStatus,
    (int32_t)OverwriteStatus,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)sub_21FFEBC(CombineSpecialResultEffectComponent_CostumeSkillInfoManager_TypeInfo);
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager___ctor(v35, 0);
  this->fields.costumeSkillInfoManager = v35;
  p_costumeSkillInfoManager = &this->fields.costumeSkillInfoManager;
  sub_21FFBF4(
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
  v45 = *(_QWORD *)&baseUsrSvtData->fields.dispLimitCount.fields.currentCryptoKey;
  v46 = *(_QWORD *)&baseUsrSvtData->fields.dispLimitCount.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v43);
  *(_QWORD *)&v63.fields.currentCryptoKey = v45;
  *(_QWORD *)&v63.fields.fakeValue = v46;
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v63, 0);
  UserServantEntity__getSkillInfo(baseUsrSvtData, &skillInfoList, -1, v47, 1, 0, -1, 0);
  v48 = *p_resUsrSvtData;
  if ( !*p_resUsrSvtData )
LABEL_38:
    sub_21FFECC(resUsrSvtData, v26);
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v48->fields.dispLimitCount, 0);
  UserServantEntity__getSkillInfo(v48, &v61, -1, v49, 1, 0, -1, 0);
  for ( i = 0; ; ++i )
  {
    resUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v26, lv);
      resUsrSvtData = (UserServantEntity_o *)BalanceConfig_TypeInfo;
    }
    if ( (signed int)i >= *(_DWORD *)(*(_QWORD *)&resUsrSvtData->fields.portraitLimitCount.fields.fakeValue + 40LL) )
      break;
    if ( !v61 )
      goto LABEL_38;
    if ( i >= LODWORD(v61->max_length) )
      goto LABEL_39;
    v53 = v61->m_Items[i];
    if ( !v53 )
      goto LABEL_38;
    resUsrSvtData = *p_resUsrSvtData;
    if ( !*p_resUsrSvtData )
      goto LABEL_38;
    id = v53->fields.id;
    resUsrSvtData = (UserServantEntity_o *)UserServantEntity__TryGetServantSkillAddBySkillId(resUsrSvtData, &v60, id, 0);
    if ( ((unsigned __int8)resUsrSvtData & 1) != 0 )
    {
      resUsrSvtData = (UserServantEntity_o *)v60;
      if ( !v60 )
        goto LABEL_38;
      resUsrSvtData = (UserServantEntity_o *)ServantSkillAddEntity__GetBaseSkillId(v60, 0);
      if ( !v60 )
        goto LABEL_38;
      id = (int)resUsrSvtData;
      resUsrSvtData = (UserServantEntity_o *)ServantSkillAddEntity__GetExchangedSkillId(v60, 0);
      v55 = (int)resUsrSvtData;
    }
    else
    {
      v55 = 0;
    }
    if ( id < 1 )
      continue;
    if ( !skillInfoList )
      goto LABEL_38;
    if ( i >= LODWORD(skillInfoList->max_length) )
      goto LABEL_39;
    v56 = skillInfoList->m_Items[i];
    if ( !v56 )
      goto LABEL_38;
    v26 = (unsigned int)v56->fields.id;
    lv = (unsigned int)v56->fields.lv;
    v57 = &v61->obj.klass + (int)i;
    if ( (_DWORD)v26 == id )
    {
      if ( !v61 )
        goto LABEL_38;
      if ( i >= LODWORD(v61->max_length) )
LABEL_39:
        sub_21FFED4(resUsrSvtData);
      v58 = v57[4];
      if ( !v58 )
        goto LABEL_38;
      if ( (_DWORD)lv == HIDWORD(v58->_1.name) )
        continue;
    }
    else if ( !v61 )
    {
      goto LABEL_38;
    }
    if ( i >= LODWORD(v61->max_length) )
      goto LABEL_39;
    v59 = v57[4];
    if ( !v59 )
      goto LABEL_38;
    resUsrSvtData = (UserServantEntity_o *)*p_costumeSkillInfoManager;
    if ( !*p_costumeSkillInfoManager )
      goto LABEL_38;
    CombineSpecialResultEffectComponent_CostumeSkillInfoManager__Add(
      (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)resUsrSvtData,
      v26,
      lv,
      id,
      HIDWORD(v59->_1.name),
      v55,
      HIDWORD(v59->_1.name),
      0);
  }
  CombineSpecialResultEffectComponent__Play_37577404(this, endAction, 0, v51);
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
  __int64 v22; // x2
  System_String_o *Path; // x23
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5932049 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__PlayMovie_b__38_0__);
    sub_21FFC50(&CommonUI_TypeInfo);
    byte_5932049 = 1;
  }
  if ( this->fields.movieAssetData && !System_String__IsNullOrEmpty(this->fields.movieName, 0) )
  {
    v5 = CommonUI_TypeInfo;
    if ( !*(&CommonUI_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CommonUI_TypeInfo, v3, v4);
      v5 = CommonUI_TypeInfo;
    }
    CriMoviePlayer = CombineSpecialResultEffectComponent__GetCriMoviePlayer(
                       this,
                       v5->static_fields->MoviePlayerObjectPath,
                       v4);
    this->fields.moviePlayer = CriMoviePlayer;
    p_moviePlayer = &this->fields.moviePlayer;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.moviePlayer,
      (int32_t)CriMoviePlayer,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v16, v22);
    if ( !byte_593205D )
    {
      sub_21FFC50(&BgmManager_TypeInfo);
      byte_593205D = 1;
    }
    movieAssetData = (AssetData_o *)BgmManager_TypeInfo;
    if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v16, v22);
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
      || (v24.fields.r = 0.0,
          v24.fields.g = 0.0,
          v24.fields.b = 0.0,
          v24.fields.a = 1.0,
          CRIMoviePlayer__SetBackgroundColor((CRIMoviePlayer_o *)movieAssetData, v24, 0),
          (movieAssetData = (AssetData_o *)*p_moviePlayer) == 0) )
    {
LABEL_22:
      sub_21FFECC(movieAssetData, v16);
    }
    CRIMoviePlayer__MoviePlay((CRIMoviePlayer_o *)movieAssetData, 1, 0, 0, 0, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineSpecialResultEffectComponent__Play_37577404(
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
  __int64 v14; // x2
  UISprite_o *touchInfoBaseSprite; // x20
  __int64 v16; // x20
  System_Action_object__o *v17; // x21
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Action_object__o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  ActionChain_o *v31; // x21
  __int64 v32; // x20
  System_Action_o *v33; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5932047 & 1) == 0 )
  {
    sub_21FFC50(&ActionChain_TypeInfo);
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&System_Action_Action____TypeInfo);
    sub_21FFC50(&System_Action_Action__TypeInfo);
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent_LoadEffectAsset__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent_LoadMovieAsset__);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__Play_b__36_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_21686/*"img_txt_touchscreen_sp"*/);
    byte_5932047 = 1;
  }
  this->fields.isSkipDetail = isSkipResultDetail;
  this->fields.endCallbackFunc = endAction;
  sub_21FFBF4(
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
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
  AtlasManager__SetDownloadCommonSprite(touchInfoBaseSprite, (System_String_o *)StringLiteral_21686/*"img_txt_touchscreen_sp"*/, 0);
  AtlasManager__SetDownloadCommonSprite(this->fields.touchInfoEffectSprite, (System_String_o *)StringLiteral_21686/*"img_txt_touchscreen_sp"*/, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bgCollider;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  gameObject = this->fields.touchInfo;
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !gameObject )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)gameObject, 1, 0);
  v16 = sub_21FFD10(System_Action_Action____TypeInfo, 2);
  v17 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent_LoadMovieAsset__,
    0);
  if ( !v16 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v16 + 24) )
    goto LABEL_18;
  *(_QWORD *)(v16 + 32) = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 32), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (System_Action_object__o *)sub_21FFEBC(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v24,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent_LoadEffectAsset__,
    0);
  if ( (*(_DWORD *)(v16 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_18;
  *(_QWORD *)(v16 + 40) = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 40), (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (ActionChain_o *)sub_21FFEBC(ActionChain_TypeInfo);
  ActionChain___ctor_55902484(v31, (System_Action_Action__array *)v16, 0);
  v32 = sub_21FFD10(System_Action___TypeInfo, 1);
  v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__Play_b__36_0__, 0);
  if ( !v32 )
    goto LABEL_17;
  if ( !*(_DWORD *)(v32 + 24) )
LABEL_18:
    sub_21FFED4(gameObject);
  *(_QWORD *)(v32 + 32) = v33;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)v33, v34, v35, v36, v37, v38, v39);
  if ( !v31
    || (gameObject = (UnityEngine_GameObject_o *)ChainableActionBase__Final(
                                                   (ChainableActionBase_o *)v31,
                                                   (System_Action_array *)v32,
                                                   0)) == 0 )
  {
LABEL_17:
    sub_21FFECC(gameObject, v12);
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

  if ( (byte_593204F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    byte_593204F = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  resUsrSvtData = this->fields.resUsrSvtData;
  classPassiveResultWindow = this->fields.classPassiveResultWindow;
  servantCostumeEntity = this->fields.servantCostumeEntity;
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0);
  if ( !classPassiveResultWindow )
    sub_21FFECC(v8, v9);
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
  __int64 v4; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v6; // q1
  __int64 v7; // x2
  struct UserServantEntity_o *v8; // x8
  int64_t v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w0
  const MethodInfo *v13; // x3
  int32_t OldFriendshipMaxRank; // w0
  FriendshipExceedResultWindowComponent_o *friendshipExceedResultWindow; // x20
  int32_t v16; // w22
  UserServantEntity_o *resUsrSvtData; // x21
  System_Action_o *v18; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+20h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_5932052 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo_b__55_0__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5932052 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_12;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v20.fields.fakeValue = v6;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v4);
  v19 = v20;
  bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v19, 0);
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_12;
  v9 = (int64_t)bgCollider;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v7);
  *(_QWORD *)&v21.fields.currentCryptoKey = v10;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v21, 0);
  OldFriendshipMaxRank = CombineSpecialResultEffectComponent__GetOldFriendshipMaxRank(this, v9, v12, v13);
  friendshipExceedResultWindow = this->fields.friendshipExceedResultWindow;
  v16 = OldFriendshipMaxRank;
  resUsrSvtData = this->fields.resUsrSvtData;
  v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowFriendshipExceedInfo_b__55_0__,
    0);
  if ( !friendshipExceedResultWindow )
LABEL_12:
    sub_21FFECC(bgCollider, method);
  FriendshipExceedResultWindowComponent__OpenFriendshipExceedInfo(
    friendshipExceedResultWindow,
    resUsrSvtData,
    v16,
    v18,
    0);
}


void CombineSpecialResultEffectComponent__ShowLevelExceedDescription(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0
  __int64 v4; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  int32_t v9; // w21
  System_Action_o *v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_5932051 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__ShowLevelExceedDescription_b__53_0__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_3977/*"COSTUME_CHANGE_DESCRIPTION_LEVEL_EXCEED"*/);
    byte_5932051 = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_9;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_9;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v4);
  *(_QWORD *)&v11.fields.currentCryptoKey = v6;
  *(_QWORD *)&v11.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v11, 0);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v10,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowLevelExceedDescription_b__53_0__,
    0);
  if ( !skillResultInfoWindow )
LABEL_9:
    sub_21FFECC(bgCollider, method);
  SkillUpResultWindowComponent__OpenSkillChangeMessage_37613912(
    skillResultInfoWindow,
    v9,
    (System_String_o *)StringLiteral_3977/*"COSTUME_CHANGE_DESCRIPTION_LEVEL_EXCEED"*/,
    v10,
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

  if ( (byte_593204E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    byte_593204E = 1;
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
        v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0),
        !rarityResultInfoWindow) )
  {
LABEL_8:
    sub_21FFECC(baseUsrSvtData, method);
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
  __int64 v4; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int64 v6; // x21
  __int64 v7; // x22
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x20
  struct ServantCostumeEntity_o *servantCostumeEntity; // x8
  int32_t v10; // w21
  struct ServantCostumeEntity_o *v11; // x8
  Il2CppObject *v12; // x22
  Il2CppObject *v13; // x0
  System_String_o *v14; // x22
  System_Action_o *v15; // x23
  int32_t id; // [xsp+8h] [xbp-48h] BYREF
  int32_t svtId; // [xsp+Ch] [xbp-44h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_593204C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__ShowSkillChangeMessage_b__43_0__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&StringLiteral_3978/*"COSTUME_CHANGE_DESCRIPTION_{0}_{1}"*/);
    byte_593204C = 1;
  }
  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    goto LABEL_11;
  UnityEngine_Collider__set_enabled(bgCollider, 0, 0);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_11;
  v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
  skillResultInfoWindow = this->fields.skillResultInfoWindow;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v4);
  *(_QWORD *)&v18.fields.currentCryptoKey = v6;
  *(_QWORD *)&v18.fields.fakeValue = v7;
  bgCollider = (UnityEngine_Collider_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v18, 0);
  servantCostumeEntity = this->fields.servantCostumeEntity;
  if ( !servantCostumeEntity )
    goto LABEL_11;
  v10 = (int)bgCollider;
  svtId = servantCostumeEntity->fields.svtId;
  bgCollider = (UnityEngine_Collider_o *)j_il2cpp_value_box_0(qword_594C070, &svtId);
  v11 = this->fields.servantCostumeEntity;
  if ( !v11
    || (v12 = (Il2CppObject *)bgCollider,
        id = v11->fields.id,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &id),
        v14 = System_String__Format_75484576((System_String_o *)StringLiteral_3978/*"COSTUME_CHANGE_DESCRIPTION_{0}_{1}"*/, v12, v13, 0),
        v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)this,
          Method_CombineSpecialResultEffectComponent__ShowSkillChangeMessage_b__43_0__,
          0),
        !skillResultInfoWindow) )
  {
LABEL_11:
    sub_21FFECC(bgCollider, method);
  }
  SkillUpResultWindowComponent__OpenSkillChangeMessage_37613912(skillResultInfoWindow, v10, v14, v15, 0);
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

  if ( (byte_593204D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo_b__45_0__);
    byte_593204D = 1;
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
  callback = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    callback,
    (Il2CppObject *)this,
    Method_CombineSpecialResultEffectComponent__ShowSkillChangeResultInfo_b__45_0__,
    0);
  if ( !skillExtraResultInfoWindow )
LABEL_11:
    sub_21FFECC(bgCollider, *(_QWORD *)&index);
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
  __int64 v2; // x2
  struct UserServantEntity_o *baseUsrSvtData; // x20
  int v5; // w8
  int64_t Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x21
  __int128 v10; // q1
  Il2CppObject *Entity; // x21
  __int64 v12; // x2
  struct UserServantEntity_o *resUsrSvtData; // x8
  ServantTreasureDeviceAddMaster_o *v14; // x20
  __int64 v15; // x21
  __int64 v16; // x22
  int32_t v17; // w21
  int32_t v18; // w22
  int32_t v19; // w20
  SkillUpResultWindowComponent_o *skillResultInfoWindow; // x21
  int32_t id; // w23
  int32_t lv; // w24
  int32_t v23; // w22
  int32_t v24; // w25
  System_Action_o *v25; // x26
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+30h] [xbp-80h]
  TreasureDvcInfo_o *v28; // [xsp+58h] [xbp-58h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+68h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_5932050 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent_EndDisp__);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_5932050 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  tdInfo = 0;
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v28 = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_24;
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  v10 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v27.fields.fakeValue = v10;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7, v8);
  v26 = v27;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v26, 0);
  if ( !v9 )
    goto LABEL_24;
  Entity = DataMasterBase_object__object__long___GetEntity(
             v9,
             Master_object,
             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  Master_object = UserServantEntity__getTreasureDeviceInfo(baseUsrSvtData, &tdInfo, -1, -1, 0, 0);
  if ( !Entity )
    goto LABEL_24;
  UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)Entity, &v28, -1, -1, 0, 0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantTreasureDeviceAddMaster___);
  resUsrSvtData = this->fields.resUsrSvtData;
  if ( !resUsrSvtData )
    goto LABEL_24;
  v14 = (ServantTreasureDeviceAddMaster_o *)Master_object;
  v15 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&resUsrSvtData->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v12);
  *(_QWORD *)&v30.fields.currentCryptoKey = v15;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v30, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_24;
  v17 = Master_object;
  Master_object = UserServantEntity__getLimitCount(this->fields.resUsrSvtData, 0);
  if ( !this->fields.resUsrSvtData )
    goto LABEL_24;
  v18 = Master_object;
  Master_object = UserServantEntity__getDispLimitCount(this->fields.resUsrSvtData, 0, 0);
  if ( !v28 || !v14 )
    goto LABEL_24;
  Master_object = (int64_t)ServantTreasureDeviceAddMaster__GetEnableEntity(
                             v14,
                             v17,
                             v18,
                             Master_object,
                             v28->fields.id,
                             0,
                             0);
  if ( Master_object )
  {
    Master_object = ServantTreasureDeviceAddEntity__GetExchangedTreasureDeviceId(
                      (ServantTreasureDeviceAddEntity_o *)Master_object,
                      0);
    v19 = Master_object;
  }
  else
  {
    v19 = 0;
  }
  if ( !tdInfo
    || !v28
    || (skillResultInfoWindow = this->fields.skillResultInfoWindow,
        id = tdInfo->fields.id,
        lv = tdInfo->fields.lv,
        v24 = v28->fields.id,
        v23 = v28->fields.lv,
        v25 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
        System_Action___ctor(v25, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent_EndDisp__, 0),
        !skillResultInfoWindow) )
  {
LABEL_24:
    sub_21FFECC(Master_object, v7);
  }
  SkillUpResultWindowComponent__OpenNpUpResultInfo_37615712(
    skillResultInfoWindow,
    id,
    lv,
    v24,
    v23,
    v19,
    v23,
    v25,
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

  if ( (byte_593204B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12804/*"START_ANIMATION"*/);
    sub_21FFC50(&StringLiteral_13565/*"StartAnimationName"*/);
    byte_593204B = 1;
  }
  fsm = (char *)this->fields.fsm;
  if ( !fsm
    || (fsm = (char *)PlayMakerFSM__get_FsmVariables((PlayMakerFSM_o *)fsm, 0)) == 0
    || (fsm = (char *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                        (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                        (System_String_o *)StringLiteral_13565/*"StartAnimationName"*/,
                        0)) == 0
    || (effectAnimName = this->fields.effectAnimName,
        *((_QWORD *)fsm + 7) = effectAnimName,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(fsm + 56), (int32_t)effectAnimName, v4, v5, v6, v7, v8, v9),
        (fsm = (char *)this->fields.fsm) == 0) )
  {
    sub_21FFECC(fsm, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_12804/*"START_ANIMATION"*/, 0);
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
    sub_21FFECC(touchInfo, method);
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
    sub_21FFECC(this, method);
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
    sub_21FFECC(this, method);
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

  if ( (byte_593205B & 1) == 0 )
  {
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    byte_593205B = 1;
  }
  moviePlayer = (UnityEngine_Component_o *)this->fields.moviePlayer;
  if ( !moviePlayer
    || (gameObject = UnityEngine_Component__get_gameObject(moviePlayer, 0),
        (moviePlayer = (UnityEngine_Component_o *)GameObjectExtensions__SafeGetComponent_object_(
                                                    gameObject,
                                                    (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___)) == 0) )
  {
    sub_21FFECC(moviePlayer, method);
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

  if ( (byte_5932059 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CombineSpecialResultEffectComponent__Play_b__36_1__);
    sub_21FFC50(&StringLiteral_11859/*"ResultEffect"*/);
    byte_5932059 = 1;
  }
  Effect = CombineSpecialResultEffectComponent__GetEffect(
             this,
             this->fields.effectPrefabName,
             this->fields.effectParent,
             v2);
  this->fields.effect = Effect;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.effect, (int32_t)Effect, v5, v6, v7, v8, v9, v10);
  fsm = this->fields.fsm;
  if ( !fsm
    || (fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_FsmVariables(fsm, 0)) == 0
    || (fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                  (HutongGames_PlayMaker_FsmVariables_o *)fsm,
                                  (System_String_o *)StringLiteral_11859/*"ResultEffect"*/,
                                  0)) == 0 )
  {
    sub_21FFECC(fsm, v11);
  }
  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)fsm, this->fields.effect, 0);
  CombineSpecialResultEffectComponent__PlayMovie(this, v13);
  v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_CombineSpecialResultEffectComponent__Play_b__36_1__, 0);
  v15 = BasicHelper__DelayCall(0.132, v14, 1, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v15, 0);
}


void CombineSpecialResultEffectComponent___Play_b__36_1(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_593205A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12838/*"START_SPECIAL_EFFECT"*/);
    byte_593205A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12838/*"START_SPECIAL_EFFECT"*/, 0);
}


void CombineSpecialResultEffectComponent___ShowFriendshipExceedInfo_b__55_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_21FFECC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowLevelExceedDescription_b__53_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_21FFECC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowSkillChangeMessage_b__43_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_21FFECC(0, method);
  UnityEngine_Collider__set_enabled(bgCollider, 1, 0);
}


void CombineSpecialResultEffectComponent___ShowSkillChangeResultInfo_b__45_0(
        CombineSpecialResultEffectComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *bgCollider; // x0

  bgCollider = this->fields.bgCollider;
  if ( !bgCollider )
    sub_21FFECC(0, method);
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

  if ( (byte_5932061 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__TypeInfo);
    byte_5932061 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo___ctor__);
  this->fields.skillList = (struct System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.skillList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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

  if ( (byte_593205E & 1) == 0 )
  {
    sub_21FFC50(&CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_TypeInfo);
    sub_21FFC50(&CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__Add__);
    byte_593205E = 1;
  }
  v15 = sub_21FFEBC(CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  v16 = sub_21FFEBC(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v16, 0);
  if ( !v16 )
    goto LABEL_12;
  *(_DWORD *)(v16 + 16) = beforeSkillId;
  *(_DWORD *)(v16 + 20) = breforeSkillLv;
  if ( !v15 )
    goto LABEL_12;
  *(_QWORD *)(v15 + 16) = v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 16), v16, v19, v20, v21, v22, v23, v24);
  v25 = sub_21FFEBC(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v25, 0);
  if ( !v25 )
    goto LABEL_12;
  *(_DWORD *)(v25 + 16) = afterSkillId;
  *(_DWORD *)(v25 + 20) = afterSkillLv;
  *(_QWORD *)(v15 + 24) = v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 24), v25, v26, v27, v28, v29, v30, v31);
  v32 = sub_21FFEBC(CombineSpecialResultEffectComponent_CostumeSkillInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v32, 0);
  if ( !v32 )
    goto LABEL_12;
  *(_DWORD *)(v32 + 16) = exAfterSkillId;
  *(_DWORD *)(v32 + 20) = exAfterSkillLv;
  *(_QWORD *)(v15 + 32) = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 32), v32, v33, v34, v35, v36, v37, v38);
  skillList = (System_Collections_Generic_List_object__o *)this->fields.skillList;
  if ( !skillList
    || (items = skillList->fields._items,
        v47 = Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__Add__,
        ++skillList->fields._version,
        !items) )
  {
LABEL_12:
    sub_21FFECC(v17, v18);
  }
  size = skillList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      skillList,
      (Il2CppObject *)v15,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &items->obj.klass + size;
    skillList->fields._size = size + 1;
    v49[4] = (Il2CppClass *)v15;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 4), v15, v39, v40, v41, v42, v43, v44);
  }
}


// local variable allocation has failed, the output may be wrong!
CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *CombineSpecialResultEffectComponent_CostumeSkillInfoManager__GetSkillChangeInfo(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *skillList; // x0

  if ( (byte_593205F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Item__);
    byte_593205F = 1;
  }
  skillList = (System_Collections_Generic_List_object__o *)this->fields.skillList;
  if ( !skillList )
    sub_21FFECC(0, *(_QWORD *)&index);
  return (CombineSpecialResultEffectComponent_CostumeSkillChangeInfo_o *)System_Collections_Generic_List_object___get_Item(
                                                                           skillList,
                                                                           index,
                                                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Item__);
}


bool CombineSpecialResultEffectComponent_CostumeSkillInfoManager__HasSkillChangeInfo(
        CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *this,
        const MethodInfo *method)
{
  CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *v2; // x19
  struct System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__o *skillList; // x8
  int size; // w8

  v2 = this;
  if ( (byte_5932060 & 1) == 0 )
  {
    this = (CombineSpecialResultEffectComponent_CostumeSkillInfoManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_CombineSpecialResultEffectComponent_CostumeSkillChangeInfo__get_Count__);
    byte_5932060 = 1;
  }
  skillList = v2->fields.skillList;
  if ( !skillList )
    sub_21FFECC(this, method);
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
      sub_21FFECC(0, movieAsset);
    _4__this->fields.movieAssetData = movieAsset;
    sub_21FFBF4(
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
      sub_21FFECC(0, data);
    _4__this->fields.effectAssetData = data;
    sub_21FFBF4(
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