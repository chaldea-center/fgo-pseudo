void BattleResultComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7

  if ( (byte_4D3028A & 1) == 0 )
  {
    sub_1C94098(&BattleResultComponent_TypeInfo);
    sub_1C94098(&StringLiteral_10599/*"PartyOrganization/FriendshipUpItem"*/);
    byte_4D3028A = 1;
  }
  BattleResultComponent_TypeInfo->static_fields->FriendshipUpItemLoadAssetPath = (struct System_String_o *)StringLiteral_10599/*"PartyOrganization/FriendshipUpItem"*/;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleResultComponent_TypeInfo->static_fields,
    StringLiteral_10599/*"PartyOrganization/FriendshipUpItem"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultEventItemComponent_o *eventItemResult; // x0
  PlayMakerFSM_o *fsm; // x8
  __int64 *v5; // x9

  if ( (byte_4D30276 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3502/*"CLOSE"*/);
    sub_1C94098(&StringLiteral_9285/*"NEXT"*/);
    byte_4D30276 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                method),
        (fsm = this->fields.fsm) == 0) )
  {
    sub_1C942F0(eventItemResult, method);
  }
  v5 = &StringLiteral_9285/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v5 = &StringLiteral_3502/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0);
}


void BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D30273 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_5460/*"END_PROC"*/);
    byte_4D30273 = 1;
  }
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchGuard, 0, 0);
  touchGuard = (UnityEngine_GameObject_o *)this->fields.nextButtonSpr;
  if ( !touchGuard
    || (v4.fields.r = 1.0,
        v4.fields.g = 1.0,
        v4.fields.b = 1.0,
        v4.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)touchGuard, v4, 0),
        (touchGuard = (UnityEngine_GameObject_o *)this->fields.fsm) == 0) )
  {
LABEL_7:
    sub_1C942F0(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5460/*"END_PROC"*/, 0);
}


void BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_c *v3; // x0
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  if ( (byte_4D3027D & 1) == 0 )
  {
    sub_1C94098(&AndroidBackKeyManager_TypeInfo);
    sub_1C94098(&BattleResultComponent_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&RandomLimitCountManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C94098(&StringLiteral_23507/*"sendFsmEvent"*/);
    sub_1C94098(&StringLiteral_5460/*"END_PROC"*/);
    byte_4D3027D = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  ServantAssetLoadManager__EndRetryTransition(Instance, 0);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0, 0) )
  {
    Instance = (ServantAssetLoadManager_o *)this->fields.battleRetryConfirmComponent;
    if ( !Instance )
      goto LABEL_15;
    BattleRetryConfirmComponent__Close((BattleRetryConfirmComponent_o *)Instance, 0);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  Instance = (ServantAssetLoadManager_o *)this->fields.endtargetObject;
  if ( !Instance )
LABEL_15:
    sub_1C942F0(Instance, v5);
  UnityEngine_GameObject__SendMessage_72092252(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23507/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5460/*"END_PROC"*/,
    0);
}


void BattleResultComponent__EndRetryConfirmDialog(
        BattleResultComponent_o *this,
        bool isDecide,
        int32_t boostId,
        const MethodInfo *method)
{
  BattleResultComponent_c *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4D30280 & 1) == 0 )
  {
    sub_1C94098(&BattleResultComponent_TypeInfo);
    sub_1C94098(&StringLiteral_9285/*"NEXT"*/);
    byte_4D30280 = 1;
  }
  v7 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v7);
  if ( isDecide )
  {
    BattleResultComponent__OpenFollowerSceneForRetry(this, boostId, v9);
  }
  else
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C942F0(0, v8);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9285/*"NEXT"*/, 0);
  }
}


void BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  const MethodInfo *v9; // x2
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4D30266 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30266 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v7 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4D25F19 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  if ( !v7 )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  gameObject = this->fields.obj_basebg;
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bondsResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultBondsComponent__Init((BattleResultBondsComponent_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.expResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultExpComponent__Init((BattleResultExpComponent_o *)gameObject, v6);
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultItemComponent__Init((BattleResultItemComponent_o *)gameObject, v6);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v6);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventDamageItemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v6);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventFortificationItemResult;
    if ( !gameObject )
      goto LABEL_36;
    BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v6);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.friendResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultFriendComponent__Init((BattleResultFriendComponent_o *)gameObject, releasePerformanceObject, v9);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.battleRetryConfirmComponent;
    if ( !gameObject )
      goto LABEL_36;
    BattleRetryConfirmComponent__Init((BattleRetryConfirmComponent_o *)gameObject, 0);
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_36;
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(v13, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.ServantRewardActionComp, 0, v14, v15, v16, v17, v18, v19);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)p_screenTouch,
          (int32_t)Component_object,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 14)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_36:
    sub_1C942F0(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  PlayMakerFSM_o *fsm; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v8; // w20
  Il2CppObject *v9; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D30285 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_12285/*"SKIP"*/);
    sub_1C94098(&StringLiteral_9285/*"NEXT"*/);
    byte_4D30285 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26A98 = 1;
  }
  fsm = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    fsm = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult || !Master_object )
    goto LABEL_30;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            HIDWORD(fsm[2].fields.addEventHandlers->klass),
                            battleResult->fields.eventId,
                            0);
  if ( EventDataLostBattleId == -1 )
    goto LABEL_28;
  v8 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 )
LABEL_30:
    sub_1C942F0(fsm, v3);
  if ( UserEventDataLostMaster__TryGetEntity(
         (UserEventDataLostMaster_o *)v9,
         &entity,
         fsm[2].fields.addEventHandlers->fields.method_code,
         v8,
         0) )
  {
    fsm = (PlayMakerFSM_o *)entity;
    if ( !entity )
      goto LABEL_30;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0) )
    {
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_30;
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9285/*"NEXT"*/, 0);
    }
  }
LABEL_28:
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_30;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12285/*"SKIP"*/, 0);
}


void BattleResultComponent__LoadFriendshipUpItemAsset(
        BattleResultComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  FriendshipUpItemSelectDialog_o *isExistAssetStorage; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x22
  BattleResultComponent_c *v22; // x0
  System_String_o *FriendshipUpItemLoadAssetPath; // x20
  BattleResultComponent_c *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21

  if ( (byte_4D30288 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&BattleResultComponent_TypeInfo);
    sub_1C94098(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__);
    sub_1C94098(&BattleResultComponent___c__DisplayClass75_0_TypeInfo);
    byte_4D30288 = 1;
  }
  v5 = sub_1C942E4(BattleResultComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0, 0) )
  {
    isExistAssetStorage = this->fields.friendshipUpItemSelectDialog;
    if ( !isExistAssetStorage )
      goto LABEL_21;
    FriendshipUpItemSelectDialog__Init(isExistAssetStorage, 0);
    goto LABEL_19;
  }
  v22 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v22 = BattleResultComponent_TypeInfo;
  }
  FriendshipUpItemLoadAssetPath = v22->static_fields->FriendshipUpItemLoadAssetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  isExistAssetStorage = (FriendshipUpItemSelectDialog_o *)AssetManager__isExistAssetStorage(
                                                            FriendshipUpItemLoadAssetPath,
                                                            0);
  if ( ((unsigned __int8)isExistAssetStorage & 1) == 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_21:
    sub_1C942F0(isExistAssetStorage, v7);
  }
  v24 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v24 = BattleResultComponent_TypeInfo;
  }
  v25 = v24->static_fields->FriendshipUpItemLoadAssetPath;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C942E4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v25, v26, 1, 0);
}


void BattleResultComponent__OnDestroy(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D30265 & 1) == 0 )
  {
    sub_1C94098(&AtlasManager_TypeInfo);
    byte_4D30265 = 1;
  }
  BattleResultComponent__ReleaseFriendshipUpItemAsset(this, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
}


void BattleResultComponent__OpenBonds(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0), (obj_fronttouch = this->fields.obj_basebg) == 0)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0),
        (obj_fronttouch = (UnityEngine_GameObject_o *)this->fields.bondsResult) == 0) )
  {
    sub_1C942F0(obj_fronttouch, method);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, 0);
}


void BattleResultComponent__OpenDataLostBattleResetDialog(BattleResultComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v7; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4D30286 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__);
    sub_1C94098(&DataLostResetManager_TypeInfo);
    this = (BattleResultComponent_o *)sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D30286 = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_1C942F0(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26A98 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v7, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__, 0);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v7, 0);
}


void BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0

  if ( (byte_4D30277 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_12285/*"SKIP"*/);
    byte_4D30277 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseNotificationDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.resultSprite;
  if ( !Instance )
    goto LABEL_19;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.eventItemResult;
  if ( !Instance )
    goto LABEL_19;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.obj_fronttouch;
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.obj_basebg;
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  eventDamageItemResult = this->fields.eventDamageItemResult;
  if ( !eventDamageItemResult )
    goto LABEL_19;
  usrEvent = eventDamageItemResult->fields.usrEvent;
  if ( usrEvent
    && UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventDamageItemResult->fields.currentEventId, 0) >= 1 )
  {
    Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
    if ( !Instance )
      goto LABEL_19;
    if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v4) )
    {
      Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v4);
        return;
      }
LABEL_19:
      sub_1C942F0(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12285/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenEventFortificationItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_4D30284 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_12285/*"SKIP"*/);
    byte_4D30284 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseNotificationDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.resultSprite;
  if ( !Instance )
    goto LABEL_21;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.eventItemResult;
  if ( !Instance )
    goto LABEL_21;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
  if ( !Instance )
    goto LABEL_21;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.obj_fronttouch;
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.obj_basebg;
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0) )
  {
    Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
    if ( !Instance )
      goto LABEL_21;
    if ( BattleResultEventFortificationItemComponent__IsFortificationInfos(
           (BattleResultEventFortificationItemComponent_o *)Instance,
           v4) )
    {
      Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__OpenEventFortification((BattleResultEventItemComponent_o *)Instance, v4);
        return;
      }
LABEL_21:
      sub_1C942F0(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12285/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4D30275 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_12285/*"SKIP"*/);
    byte_4D30275 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseNotificationDialog(Instance, 0);
  Instance = (CommonUI_o *)this->fields.resultSprite;
  if ( !Instance )
    goto LABEL_14;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.obj_fronttouch;
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
  Instance = (CommonUI_o *)this->fields.obj_basebg;
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0);
  Instance = (CommonUI_o *)this->fields.eventItemResult;
  if ( !Instance )
    goto LABEL_14;
  if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v4) )
  {
    Instance = (CommonUI_o *)this->fields.eventItemResult;
    if ( Instance )
    {
      BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v4);
      return;
    }
LABEL_14:
    sub_1C942F0(Instance, v4);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12285/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenExp(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0), (obj_fronttouch = this->fields.obj_basebg) == 0)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0),
        (obj_fronttouch = (UnityEngine_GameObject_o *)this->fields.expResult) == 0) )
  {
    sub_1C942F0(obj_fronttouch, method);
  }
  BattleResultExpComponent__Open((BattleResultExpComponent_o *)obj_fronttouch, method);
}


void BattleResultComponent__OpenFollowerSceneForRetry(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  int32_t QuestId_k__BackingField; // w21
  Il2CppObject *Entity; // x22
  MapControl_QuestInfo_o *v9; // x20
  int32_t questId; // w23
  bool IsQuestClear_41072884; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v14; // w22
  Il2CppObject *v15; // x21
  TerminalPramsManager_c *v16; // x0
  const MethodInfo *v17; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4D30281 & 1) == 0 )
  {
    sub_1C94098(&CondType_TypeInfo);
    sub_1C94098(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C94098(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C94098(&MapControl_QuestInfo_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C94098(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D30281 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_345B4C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v9 = (MapControl_QuestInfo_o *)sub_1C942E4(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v9, 0);
  questId = v9->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_41072884 = CondType__IsQuestClear_41072884(questId, -1, 0, 0);
  fixedVal = -1;
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BC = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Entity )
    goto LABEL_36;
  CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                            (QuestEntity_o *)Entity,
                            QuestId_k__BackingField,
                            *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL),
                            !IsQuestClear_41072884,
                            &fixedVal,
                            0);
  v9->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0);
  v9->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v14 = fixedVal;
  else
    v14 = ActConsume;
  v15 = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D29271 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29271 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_36;
  if ( !clsQuestCheck__CheckQuestPlayable(
          (clsQuestCheck_o *)v15,
          v9,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 128LL),
          boostId,
          0) )
    return;
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->lastPlayQuestConsumeAp = v14;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C942F0(Instance, v5);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v17);
}


void BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleResultComponent_c *v4; // x0

  v2 = this;
  if ( (byte_4D30274 & 1) == 0 )
  {
    sub_1C94098(&BattleResultComponent_TypeInfo);
    sub_1C94098(&RandomLimitCountManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleResultComponent_o *)sub_1C94098(&StringLiteral_13112/*"StartQuestClearReward"*/);
    byte_4D30274 = 1;
  }
  battleResult = v2->fields.battleResult;
  if ( !battleResult )
    goto LABEL_14;
  if ( (battleResult->fields.resultDispFlag & 0x800) != 0 )
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_13112/*"StartQuestClearReward"*/, 0.3, 0);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  this = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0),
        (this = (BattleResultComponent_o *)v2->fields.obj_fronttouch) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (BattleResultComponent_o *)v2->fields.friendResult) == 0) )
  {
LABEL_14:
    sub_1C942F0(this, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)this, method);
  v4 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v4);
}


void BattleResultComponent__OpenFriendshipUpItemSelectDialog(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D30287 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__);
    byte_4D30287 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__,
    0);
  if ( !battleRetryConfirmComponent )
    sub_1C942F0(v5, v6);
  BattleRetryConfirmComponent__BaseDialogClose(battleRetryConfirmComponent, v4, 0);
}


void BattleResultComponent__OpenItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *eventEndTitle; // x8
  Il2CppObject *Instance; // x0
  System_String_o *v5; // x20
  System_String_o *eventEndMessage; // x21
  CommonUI_o *v7; // x22
  NotificationDialog_ClickDelegate_o *v8; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_4D3026C & 1) == 0 )
  {
    sub_1C94098(&Method_BattleResultComponent_endCloseEndEventMessage__);
    sub_1C94098(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3026C = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v7 = (CommonUI_o *)Instance;
    v8 = (NotificationDialog_ClickDelegate_o *)sub_1C942E4(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_31585792(
      v7,
      v5,
      eventEndMessage,
      v8,
      -1,
      0,
      0,
      0,
      0,
      1,
      0,
      0,
      0,
      0,
      0,
      1,
      0,
      0,
      0,
      0);
  }
  resultSprite = (UnityEngine_Component_o *)this->fields.resultSprite;
  if ( !resultSprite
    || (resultSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSprite, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSprite, 0, 0),
        (resultSprite = (UnityEngine_Component_o *)this->fields.obj_fronttouch) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSprite, 0, 0),
        (resultSprite = (UnityEngine_Component_o *)this->fields.obj_basebg) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSprite, 1, 0),
        (resultSprite = (UnityEngine_Component_o *)this->fields.itemResult) == 0) )
  {
LABEL_13:
    sub_1C942F0(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, method);
}


void BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x21
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  int32_t m_CachedPtr_high; // w22
  int32_t m_CancellationTokenSource; // w23
  System_Action_o *v8; // x21
  TerminalPramsManager_c *v9; // x0
  int32_t QuestId_k__BackingField; // w22
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4D3027E & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultComponent__OpenRetryQuest_b__65_0__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D3027E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(battleRetryConfirmComponent->fields.doubleContentsPrefab->fields.m_CachedPtr);
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4D265BC = 1;
  }
  if ( !LODWORD(battleRetryConfirmComponent->fields.tripleContentsNoneUseItemPrefab) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CancellationTokenSource = (int32_t)battleRetryConfirmComponent->fields.doubleContentsPrefab->fields.m_CancellationTokenSource;
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4D26A98 = 1;
  }
  if ( !LODWORD(battleRetryConfirmComponent->fields.tripleContentsNoneUseItemPrefab) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_39;
  PartyOrganizationUtility__SetQuestCache(
    (PartyOrganizationUtility_o *)Instance,
    m_CachedPtr_high,
    m_CancellationTokenSource,
    HIDWORD(battleRetryConfirmComponent->fields.doubleContentsPrefab->klass),
    0);
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_39;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0) )
  {
    v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent__OpenRetryQuest_b__65_0__, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D265BD )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      byte_4D265BD = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v9->static_fields->_QuestId_k__BackingField;
    if ( !byte_4D265BC )
    {
      sub_1C94098(&TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
      byte_4D265BC = 1;
    }
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TerminalPramsManager_TypeInfo;
    }
    EventTutorialMaster__CheckTutorial(
      0,
      96,
      v8,
      QuestId_k__BackingField,
      v9->static_fields->_PhaseCnt_k__BackingField,
      0,
      0,
      0);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
    goto LABEL_39;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)UnityEngine_Object__op_Inequality(
                                                                   Component_object,
                                                                   0,
                                                                   0);
  if ( ((unsigned __int8)battleRetryConfirmComponent & 1) != 0 )
  {
    if ( Component_object )
    {
      battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)Component_object[2].monitor;
      if ( battleRetryConfirmComponent )
      {
        BattlePerformance__ClearObjForceDestroy((BattlePerformance_o *)battleRetryConfirmComponent, 0);
        return;
      }
    }
LABEL_39:
    sub_1C942F0(battleRetryConfirmComponent, v3);
  }
}


void BattleResultComponent__OpenTutorial(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleEventTutorial_o *eventTutorial; // x0
  BattleEventTutorial_o *v4; // x20
  System_Action_o *v5; // x21
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleEventTutorial_o *v7; // x20
  System_Action_o *v8; // x21
  struct BattleResultComponent_resultData_o *v9; // x8
  BattleEventTutorial_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4D3026B & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultComponent_OpenTutorial__);
    sub_1C94098(&StringLiteral_5460/*"END_PROC"*/);
    byte_4D3026B = 1;
  }
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  if ( !BattleEventTutorial__isResultPhase(eventTutorial, 0) )
    goto LABEL_19;
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  eventTutorial = (BattleEventTutorial_o *)BattleEventTutorial__isResult(eventTutorial, 0);
  v4 = this->fields.eventTutorial;
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    v5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0);
    if ( v4 )
    {
      BattleEventTutorial__callResult(v4, v5, 0);
      return;
    }
LABEL_23:
    sub_1C942F0(eventTutorial, method);
  }
  if ( !v4 )
    goto LABEL_23;
  eventTutorial = (BattleEventTutorial_o *)BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0);
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    battleResult = this->fields.battleResult;
    if ( !battleResult )
      goto LABEL_23;
    if ( battleResult->fields.battleResult == 1 )
    {
      v7 = this->fields.eventTutorial;
      v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0);
      if ( !v7 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v7, v8, 0);
      return;
    }
  }
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  eventTutorial = (BattleEventTutorial_o *)BattleEventTutorial__isResultLose(eventTutorial, 0);
  if ( ((unsigned __int8)eventTutorial & 1) == 0 )
    goto LABEL_19;
  v9 = this->fields.battleResult;
  if ( !v9 )
    goto LABEL_23;
  if ( v9->fields.battleResult != 1 )
  {
    v10 = this->fields.eventTutorial;
    v11 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0);
    if ( !v10 )
      goto LABEL_23;
    BattleEventTutorial__callResultLose(v10, v11, 0);
  }
  else
  {
LABEL_19:
    eventTutorial = (BattleEventTutorial_o *)this->fields.fsm;
    if ( !eventTutorial )
      goto LABEL_23;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5460/*"END_PROC"*/, 0);
  }
}


void BattleResultComponent__PushFollowerScene(BattleResultComponent_o *this, int32_t boostId, const MethodInfo *method)
{
  BattleResultComponent_c *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v9; // x23
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x20

  if ( (byte_4D30282 & 1) == 0 )
  {
    sub_1C94098(&BattleResultComponent_TypeInfo);
    sub_1C94098(&BattleSetupInfo_TypeInfo);
    sub_1C94098(&RandomLimitCountManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C94098(&SoundManager_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D30282 = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  v4 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v4);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.8, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D26A98 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D26A98 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4D265BD = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_4D265BC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4D265BC = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v5->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BattleSetupInfo_o *)sub_1C942E4(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_29;
  Instance = (Il2CppObject *)BattleSetupInfo__ConvertBattleSetupInfo(
                               v9,
                               WarId_k__BackingField,
                               QuestId_k__BackingField,
                               PhaseCnt_k__BackingField,
                               0,
                               0,
                               0,
                               0);
  v12 = Instance;
  if ( boostId )
  {
    if ( !Instance )
      goto LABEL_29;
    HIDWORD(Instance[3].monitor) = boostId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C942F0(Instance, v11);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v12, 0);
}


void BattleResultComponent__QpFix(BattleResultComponent_o *this, const MethodInfo *method)
{
  struct BattleResultItemComponent_o *itemResult; // x9
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleResultComponent_o *v4; // x19
  struct BattleResultItemComponent_o *v5; // x9
  struct BattleResultComponent_resultData_o *v6; // x8

  itemResult = this->fields.itemResult;
  if ( !itemResult
    || (battleResult = this->fields.battleResult, v4 = this, !battleResult)
    || (this = (BattleResultComponent_o *)itemResult->fields.getQpLabel) == 0
    || (UILabel__set_text((UILabel_o *)this, battleResult->fields.ultimateGetQpText, 0),
        (v5 = v4->fields.itemResult) == 0)
    || (v6 = v4->fields.battleResult) == 0
    || (this = (BattleResultComponent_o *)v5->fields.nowQpLabel) == 0 )
  {
    sub_1C942F0(this, method);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0);
}


void BattleResultComponent__ReleaseFriendshipUpItemAsset(BattleResultComponent_o *this, const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_cashedFriendshipUpItemAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *cashedFriendshipUpItemAssetData; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D30289 & 1) == 0 )
  {
    sub_1C94098(&AssetManager_TypeInfo);
    byte_4D30289 = 1;
  }
  cashedFriendshipUpItemAssetData = this->fields.cashedFriendshipUpItemAssetData;
  p_cashedFriendshipUpItemAssetData = (GrandQuestFolderBoardItem_o *)&this->fields.cashedFriendshipUpItemAssetData;
  v4 = cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_41285308(v4, 0);
    p_cashedFriendshipUpItemAssetData->klass = 0;
    sub_1C9403C(p_cashedFriendshipUpItemAssetData, 0, v6, v7, v8, v9, v10, v11);
  }
}


void BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_4D30269 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30269 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0, 0) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0), (v5 = this->fields.screenTouch) == 0) )
      sub_1C942F0(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0);
  }
}


void BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  if ( (byte_4D30283 & 1) == 0 )
  {
    sub_1C94098(&BattlePerformance_TypeInfo);
    byte_4D30283 = 1;
  }
  UnityEngine_Time__set_timeScale(1.0, 0);
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
  BattlePerformance__AdjustSmoothnessByCurrentSpeed(0);
}


void BattleResultComponent__ScrollBarMotion(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Object_array *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Il2CppObject *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  Il2CppObject *v36; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x1
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x1
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  __int64 v57; // x1
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  __int64 v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  Il2CppObject *v78; // x21
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  __int64 v85; // x1
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  Il2CppObject *v92; // x21
  int32_t v93; // w2
  int32_t v94; // w3
  System_String_o *v95; // x4
  int32_t v96; // w5
  int64_t v97; // x6
  System_String_o *v98; // x7
  __int64 v99; // x1
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  Il2CppObject *v106; // x21
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  int v109; // [xsp+Ch] [xbp-44h] BYREF
  int v110; // [xsp+10h] [xbp-40h] BYREF
  int v111; // [xsp+14h] [xbp-3Ch] BYREF
  int v112; // [xsp+18h] [xbp-38h] BYREF
  int v113; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4D30270 & 1) == 0 )
  {
    sub_1C94098(&iTween_EaseType_TypeInfo);
    sub_1C94098(&object___TypeInfo);
    sub_1C94098(&float_TypeInfo);
    sub_1C94098(&StringLiteral_19853/*"from"*/);
    sub_1C94098(&StringLiteral_12698/*"ScrollBarMotionCompleteValue"*/);
    sub_1C94098(&StringLiteral_24310/*"time"*/);
    sub_1C94098(&StringLiteral_22649/*"onupdate"*/);
    sub_1C94098(&StringLiteral_18660/*"delay"*/);
    sub_1C94098(&StringLiteral_12699/*"ScrollBarMotionUpdateValue"*/);
    sub_1C94098(&StringLiteral_24349/*"to"*/);
    sub_1C94098(&StringLiteral_18868/*"easeType"*/);
    sub_1C94098(&StringLiteral_22641/*"oncomplete"*/);
    sub_1C94098(&iTween_TypeInfo);
    byte_4D30270 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_64165648(gameObject, 0);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = sub_1C94140(object___TypeInfo, 14);
  if ( !v5 )
    sub_1C942F0(0, v6);
  v13 = (System_Object_array *)v5;
  v14 = StringLiteral_19853/*"from"*/;
  if ( StringLiteral_19853/*"from"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_19853/*"from"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_19853/*"from"*/;
  }
  else
  {
    v15 = 0;
  }
  if ( !LODWORD(v13->max_length) )
    goto LABEL_67;
  v13->m_Items[0] = (Il2CppObject *)v15;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v13->m_Items, v15, v7, v8, v9, v10, v11, v12);
  v113 = 0;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v113);
  v22 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_1C941D4(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
  }
  if ( LODWORD(v13->max_length) <= 1 )
    goto LABEL_67;
  v13->m_Items[1] = v22;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[1], (int32_t)v22, v16, v17, v18, v19, v20, v21);
  v14 = StringLiteral_24349/*"to"*/;
  if ( StringLiteral_24349/*"to"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_24349/*"to"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v29 = StringLiteral_24349/*"to"*/;
  }
  else
  {
    v29 = 0;
  }
  if ( LODWORD(v13->max_length) <= 2 )
    goto LABEL_67;
  v13->m_Items[2] = (Il2CppObject *)v29;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  v112 = 1065353216;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v112);
  v36 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_1C941D4(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
  }
  if ( LODWORD(v13->max_length) <= 3 )
    goto LABEL_67;
  v13->m_Items[3] = v36;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[3], (int32_t)v36, v30, v31, v32, v33, v34, v35);
  v14 = StringLiteral_22649/*"onupdate"*/;
  if ( StringLiteral_22649/*"onupdate"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_22649/*"onupdate"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v43 = StringLiteral_22649/*"onupdate"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( LODWORD(v13->max_length) <= 4 )
    goto LABEL_67;
  v13->m_Items[4] = (Il2CppObject *)v43;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  v14 = StringLiteral_12699/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12699/*"ScrollBarMotionUpdateValue"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_12699/*"ScrollBarMotionUpdateValue"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v50 = StringLiteral_12699/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v50 = 0;
  }
  if ( LODWORD(v13->max_length) <= 5 )
    goto LABEL_67;
  v13->m_Items[5] = (Il2CppObject *)v50;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[5], v50, v44, v45, v46, v47, v48, v49);
  v14 = StringLiteral_22641/*"oncomplete"*/;
  if ( StringLiteral_22641/*"oncomplete"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_22641/*"oncomplete"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v57 = StringLiteral_22641/*"oncomplete"*/;
  }
  else
  {
    v57 = 0;
  }
  if ( LODWORD(v13->max_length) <= 6 )
    goto LABEL_67;
  v13->m_Items[6] = (Il2CppObject *)v57;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[6], v57, v51, v52, v53, v54, v55, v56);
  v14 = StringLiteral_12698/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12698/*"ScrollBarMotionCompleteValue"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_12698/*"ScrollBarMotionCompleteValue"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v64 = StringLiteral_12698/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v64 = 0;
  }
  if ( LODWORD(v13->max_length) <= 7 )
    goto LABEL_67;
  v13->m_Items[7] = (Il2CppObject *)v64;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[7], v64, v58, v59, v60, v61, v62, v63);
  v14 = StringLiteral_18868/*"easeType"*/;
  if ( StringLiteral_18868/*"easeType"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_18868/*"easeType"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v71 = StringLiteral_18868/*"easeType"*/;
  }
  else
  {
    v71 = 0;
  }
  if ( LODWORD(v13->max_length) <= 8 )
    goto LABEL_67;
  v13->m_Items[8] = (Il2CppObject *)v71;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[8], v71, v65, v66, v67, v68, v69, v70);
  v111 = 17;
  v14 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v111);
  v78 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_1C941D4(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
  }
  if ( LODWORD(v13->max_length) <= 9 )
    goto LABEL_67;
  v13->m_Items[9] = v78;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[9], (int32_t)v78, v72, v73, v74, v75, v76, v77);
  v14 = StringLiteral_24310/*"time"*/;
  if ( StringLiteral_24310/*"time"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_24310/*"time"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v85 = StringLiteral_24310/*"time"*/;
  }
  else
  {
    v85 = 0;
  }
  if ( LODWORD(v13->max_length) <= 0xA )
    goto LABEL_67;
  v13->m_Items[10] = (Il2CppObject *)v85;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[10], v85, v79, v80, v81, v82, v83, v84);
  v110 = 1065353216;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v110);
  v92 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_1C941D4(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
  }
  if ( LODWORD(v13->max_length) <= 0xB )
    goto LABEL_67;
  v13->m_Items[11] = v92;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[11], (int32_t)v92, v86, v87, v88, v89, v90, v91);
  v14 = StringLiteral_18660/*"delay"*/;
  if ( StringLiteral_18660/*"delay"*/ )
  {
    v14 = sub_1C941D4(StringLiteral_18660/*"delay"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v99 = StringLiteral_18660/*"delay"*/;
  }
  else
  {
    v99 = 0;
  }
  if ( LODWORD(v13->max_length) <= 0xC )
    goto LABEL_67;
  v13->m_Items[12] = (Il2CppObject *)v99;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[12], v99, v93, v94, v95, v96, v97, v98);
  v109 = 0;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v109);
  v106 = (Il2CppObject *)v14;
  if ( v14 )
  {
    v14 = sub_1C941D4(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_68:
      v108 = sub_1C94314(v14);
      sub_1C941C0(v108, 0);
    }
  }
  if ( LODWORD(v13->max_length) <= 0xD )
LABEL_67:
    sub_1C942F8(v14);
  v13->m_Items[13] = v106;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v13->m_Items[13], (int32_t)v106, v100, v101, v102, v103, v104, v105);
  v107 = iTween__Hash(v13, 0);
  iTween__ValueTo(v4, v107, 0);
}


void BattleResultComponent__ScrollBarMotionCompleteValue(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  BattleResultItemComponent_o *itemResult; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  System_Action_o *v6; // x21
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_4D30272 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__);
    this = (BattleResultComponent_o *)sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4D30272 = 1;
  }
  itemResult = v2->fields.itemResult;
  if ( !itemResult )
    goto LABEL_11;
  itemWindow = itemResult->fields.itemWindow;
  if ( !itemWindow )
    goto LABEL_11;
  itemObjectList = itemWindow->fields.itemObjectList;
  if ( !itemObjectList )
    goto LABEL_11;
  if ( itemObjectList->fields._size >= 8 )
  {
    this = (BattleResultComponent_o *)v2->fields.resultItemScrollBar;
    if ( !this )
      goto LABEL_11;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0);
    itemResult = v2->fields.itemResult;
  }
  v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)v2, Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__, 0);
  if ( !itemResult )
LABEL_11:
    sub_1C942F0(this, method);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v6, v7);
}


void BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4D30271 & 1) == 0 )
  {
    sub_1C94098(&iTween_TypeInfo);
    byte_4D30271 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1C942F0(0, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_64165648(gameObject, 0);
    BattleResultComponent__ScrollBarMotionCompleteValue(this, v7);
  }
}


void BattleResultComponent__Set(
        BattleResultComponent_o *this,
        BattleResultComponent_resultData_array *resultList,
        BattleEventTutorial_o *tutorial,
        AssetData_o *resultAsset,
        System_Int32_array *viewGroupIds,
        BattleData_o *bData,
        const MethodInfo *method)
{
  System_String_o *v7; // x7
  AssetData_o *v10; // x23
  BattleResultComponent_resultData_array *v12; // x21
  BattleResultComponent_o *v13; // x22
  struct BattleResultComponent_resultData_o *v14; // x1
  BattleResultComponent_o **p_battleResult; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  TerminalPramsManager_c *v22; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v25; // x0
  int32_t v26; // w19
  BalanceConfig_c *v27; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v29; // x0
  BattleResultComponent_o *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *eventItemResult; // x0
  BattleResultComponent___c_c *v32; // x8
  BattleResultComponent_o *v33; // x26
  System_Converter_TInput__TOutput__o *_9__39_0; // x19
  BattleResultComponent_resultData_array *v35; // x24
  AssetData_o *v36; // x21
  Il2CppObject *v37; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_String_array *v45; // x0
  System_String_o *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventDamageItemResult; // x0
  BattleResultComponent___c_c *v48; // x8
  BattleResultComponent_o *v49; // x26
  System_Converter_TInput__TOutput__o *_9__39_1; // x19
  BattleResultComponent_resultData_array *v51; // x24
  AssetData_o *v52; // x21
  Il2CppObject *v53; // x23
  struct BattleResultComponent___c_StaticFields *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  System_String_array *v61; // x0
  System_String_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  struct System_String_o *m_CancellationTokenSource; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  struct BattleResultComponent_resultData_o *v76; // x8
  BattleData_o *v77; // x29
  struct System_String_o *eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v79; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v81; // x26
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  BattleResultComponent_resultData_o *v88; // x8
  BattleResultComponent_o *v89; // x8
  struct BattleResultEventItemComponent_o *v90; // x9
  struct System_Threading_CancellationTokenSource_o *v91; // x11
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v93; // x12
  AssetData_o *v94; // x21
  BattleResultExpComponent_o *expResult; // x24
  UserGameEntity_o *parentComp; // x27
  UserEquipEntity_o *v97; // x28
  MasterLvRewardInfo_array *eventEndTitle; // x29
  int64_t maxTurnDamageInBattle; // x19
  int64_t maxTurnDamageRecord; // x23
  int32_t v101; // w25
  struct BattleResultEventItemComponent_o *v102; // x9
  struct System_Threading_CancellationTokenSource_o *v103; // x10
  UserGameEntity_o *v104; // x29
  BattleResultItemComponent_o *v105; // x25
  BattleDropItem_array *v106; // x26
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  int64_t obj_fronttouch; // x20
  int32_t itemResult_high; // w21
  DropUpInfo_array *dropupinfos; // x19
  EventConquestInfo_array *ServantRewardActionComp; // x23
  int32_t firstClearRewardQp; // w24
  struct BattleResultItemComponent_o *v114; // x9
  struct UILabel_o *getQpLabel; // x9
  struct UnityEngine_GameObject_o *mText; // x1
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  struct BattleResultItemComponent_o *v123; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v125; // x9
  struct System_String_o *v126; // x1
  struct UIScrollBar_o *resultItemScrollBar; // x8
  Il2CppObject *v128; // x0
  struct BattleResultItemComponent_o *v129; // x8
  Il2CppObject *v130; // x23
  UILabel_o *v131; // x19
  System_String_o *v132; // x0
  struct BattleResultItemComponent_o *v133; // x8
  struct BattleResultAddRewardBonus_o *rewardBonus; // x9
  UILabel_o *v135; // x19
  Il2CppObject *v136; // x0
  BattleResultFriendComponent_o *v137; // x19
  int32_t v138; // w23
  int32_t m_CancellationTokenSource_high; // w24
  int64_t m_CachedPtr; // x25
  int32_t endtargetObject; // w26
  int32_t endtargetObject_high; // w27
  int32_t v143; // w28
  struct BattleResultComponent_resultData_o *v144; // x8
  struct BattleResultComponent_resultData_o *v145; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v147; // x8
  const MethodInfo *v148; // x2
  struct BattleResultComponent_resultData_o *v149; // x8
  BattleResultComponent_o *v150; // x8
  int v151; // w9
  int v152; // w10
  unsigned int v153; // w10
  unsigned int v154; // w9
  struct BattleInfoData_o *v155; // x9
  struct DeckData_o *myDeck; // x9
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w9
  __int64 v159; // x20
  char v160; // w22
  BattleResultComponent_o *v161; // x19
  int32_t m_CachedPtr_high; // w23
  int obj_basebg; // w8
  TerminalPramsManager_c *v164; // x0
  BattleResultComponent_o *v165; // x8
  unsigned int v166; // w9
  BattleResultComponent_o *v167; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x9
  BattleResultComponent_resultData_array *v169; // x25
  AssetData_o *v170; // x21
  Il2CppObject *Master_object; // x19
  int32_t v172; // w23
  int32_t QuestId; // w24
  bool v174; // w8
  struct UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x10
  BattleResultComponent_o *v176; // x8
  int v177; // w9
  unsigned int v178; // w9
  int v179; // w19
  BattleResultComponent_resultData_o *v180; // x9
  struct BattleInfoData_o *battle_info; // x10
  BattleResultComponent_resultData_o *battleResult; // [xsp+0h] [xbp-100h]
  MethodInfo *methoda; // [xsp+10h] [xbp-F0h]
  const MethodInfo *v184; // [xsp+40h] [xbp-C0h]
  UserEventPointEntity_array *FriendIconPrefab; // [xsp+50h] [xbp-B0h]
  UserEventEntity_array *friendResult; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  BattleResultComponent_resultData_array *v188; // [xsp+68h] [xbp-98h]
  BattleResultComponent_resultData_array *v189; // [xsp+68h] [xbp-98h]
  System_Int32_array *v190; // [xsp+70h] [xbp-90h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+78h] [xbp-88h]
  BattleData_o *v192; // [xsp+80h] [xbp-80h]
  struct BattleResultComponent_resultData_o **v193; // [xsp+88h] [xbp-78h]
  int32_t befUserGameQp; // [xsp+90h] [xbp-70h] BYREF
  int v195; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v197; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = resultAsset;
  v12 = resultList;
  v13 = this;
  if ( (byte_4D3026A & 1) == 0 )
  {
    sub_1C94098(&BalanceConfig_TypeInfo);
    sub_1C94098(&System_Converter_int__string__TypeInfo);
    sub_1C94098(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C94098(&EventInfoUIProgressControl_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C94098(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C94098(&LocalizationManager_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&QuestKnockdownResult_TypeInfo);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&Method_BattleResultComponent___c__Set_b__39_0__);
    sub_1C94098(&Method_BattleResultComponent___c__Set_b__39_1__);
    sub_1C94098(&BattleResultComponent___c_TypeInfo);
    sub_1C94098(&StringLiteral_19825/*"freeShopIds"*/);
    sub_1C94098(&StringLiteral_11172/*"RESULT_QP_PLUS"*/);
    sub_1C94098(&StringLiteral_25304/*"{0:#,0}"*/);
    sub_1C94098(&StringLiteral_23320/*"returnRarePriShopIds"*/);
    this = (BattleResultComponent_o *)sub_1C94098(&StringLiteral_808/*","*/);
    byte_4D3026A = 1;
  }
  entity = 0;
  if ( !v12 )
    goto LABEL_200;
  if ( !LODWORD(v12->max_length) )
    goto LABEL_201;
  v14 = v12->m_Items[0];
  v13->fields.battleResult = v14;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v13->fields.battleResult,
    (int32_t)v14,
    (int32_t)tutorial,
    (int32_t)resultAsset,
    (System_String_o *)viewGroupIds,
    (int32_t)bData,
    (int64_t)method,
    v7);
  v13->fields.eventTutorial = tutorial;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v13->fields.eventTutorial,
    (int32_t)tutorial,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( !v13->fields.battleResult )
    goto LABEL_200;
  v193 = &v13->fields.battleResult;
  if ( v13->fields.battleResult->fields.battleResult == 1 )
  {
    if ( !bData )
      goto LABEL_200;
    this = (BattleResultComponent_o *)BattleData__IsNotResetResultDispFlag(bData, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p_battleResult )
        goto LABEL_200;
      LODWORD((*p_battleResult)[1].fields.bondsResult) |= 0x3Fu;
    }
    this = (BattleResultComponent_o *)BattleData__isEventActivityPoint(bData, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D29BFE )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29BFE = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v22->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0);
      if ( !byte_4D29BED )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29BED = 1;
      }
      v25 = TerminalPramsManager_TypeInfo;
      v26 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = TerminalPramsManager_TypeInfo;
      }
      p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
      v25->static_fields->_BeforeEventActivityPoint_k__BackingField = v26;
      v27 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v27->static_fields->UserEventActivityPointMax;
      if ( !byte_4D29BFE )
      {
        sub_1C94098(&TerminalPramsManager_TypeInfo);
        byte_4D29BFE = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      if ( v29->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v29->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v29);
        if ( !byte_4D29BED )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D29BED = 1;
        }
        v29 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v29->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v29);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
    }
  }
  v30 = *p_battleResult;
  v190 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v13->fields.eventTutorial;
  v192 = bData;
  if ( !*p_battleResult )
    goto LABEL_200;
  eventItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v30[1].fields.eventItemResult;
  if ( eventItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventItemResult,
                                        (const MethodInfo_31E12DC *)Method_System_Linq_Enumerable_ToList_int___);
    v32 = BattleResultComponent___c_TypeInfo;
    v33 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v32 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_0 = (System_Converter_TInput__TOutput__o *)v32->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      v35 = v12;
      v36 = v10;
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = BattleResultComponent___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v32->static_fields->__9;
      _9__39_0 = (System_Converter_TInput__TOutput__o *)sub_1C942E4(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_0, v37, Method_BattleResultComponent___c__Set_b__39_0__, 0);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = (struct System_Converter_int__string__o *)_9__39_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__39_0,
        (int32_t)_9__39_0,
        v39,
        v40,
        v41,
        v42,
        v43,
        v44);
      v10 = v36;
      v12 = v35;
    }
    if ( !v33 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v33,
                                        (System_Converter_T__TOutput__o *)_9__39_0,
                                        (const MethodInfo_30C0430 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_200;
    v45 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
    v46 = System_String__Join((System_String_o *)StringLiteral_808/*","*/, v45, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19825/*"freeShopIds"*/, v46, 0);
    v30 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
  }
  eventDamageItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v30[1].fields.eventDamageItemResult;
  if ( eventDamageItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventDamageItemResult,
                                        (const MethodInfo_31E12DC *)Method_System_Linq_Enumerable_ToList_int___);
    v48 = BattleResultComponent___c_TypeInfo;
    v49 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v48 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_1 = (System_Converter_TInput__TOutput__o *)v48->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      v51 = v12;
      v52 = v10;
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = BattleResultComponent___c_TypeInfo;
      }
      v53 = (Il2CppObject *)v48->static_fields->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_1C942E4(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_1, v53, Method_BattleResultComponent___c__Set_b__39_1__, 0);
      v54 = BattleResultComponent___c_TypeInfo->static_fields;
      v54->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v54->__9__39_1, (int32_t)_9__39_1, v55, v56, v57, v58, v59, v60);
      v10 = v52;
      v12 = v51;
    }
    if ( !v49 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v49,
                                        (System_Converter_T__TOutput__o *)_9__39_1,
                                        (const MethodInfo_30C0430 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_200;
    v61 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_string__ToArray__);
    v62 = System_String__Join((System_String_o *)StringLiteral_808/*","*/, v61, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23320/*"returnRarePriShopIds"*/, v62, 0);
  }
  UnityEngine_PlayerPrefs__Save(0);
  if ( !*p_battleResult )
    goto LABEL_200;
  m_CancellationTokenSource = (struct System_String_o *)(*p_battleResult)->fields.m_CancellationTokenSource;
  v13->fields.eventEndTitle = m_CancellationTokenSource;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v13->fields.eventEndTitle,
    (int32_t)m_CancellationTokenSource,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v76 = v13->fields.battleResult;
  v77 = bData;
  if ( !v76 )
    goto LABEL_200;
  eventEndMessage = v76->fields.eventEndMessage;
  v13->fields.eventEndMessage = eventEndMessage;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v13->fields.eventEndMessage,
    (int32_t)eventEndMessage,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v79 = v13->fields.battleResult;
  if ( !v79 )
    goto LABEL_200;
  isTrialQuestNewRecord = v79->fields.isTrialQuestNewRecord;
  v81 = (QuestKnockdownResult_o *)sub_1C942E4(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v81, isTrialQuestNewRecord, bData, 0);
  if ( !bData )
    goto LABEL_200;
  this = (BattleResultComponent_o *)bData->fields.battle_info;
  if ( !this )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleInfoData__IsWaveMyDecks(
                                      (BattleInfoData_o *)this,
                                      bData->fields.questphase_ent,
                                      0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_68;
  this = (BattleResultComponent_o *)bData->fields.battle_info;
  if ( !this )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleInfoData__IsSelectPartyMyDecks(
                                      (BattleInfoData_o *)this,
                                      bData->fields.questphase_ent,
                                      0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_68:
    v88 = v13->fields.battleResult;
    if ( !v88 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v13->fields.bondsResult;
    if ( !this )
      goto LABEL_200;
    BattleResultBondsComponent__SetMultiBondsResultData(
      (BattleResultBondsComponent_o *)this,
      bData,
      v88->fields.oldUserSvtCollection,
      v88->fields.friendshipRewardInfos,
      v88->fields.followerType,
      v10,
      v88->fields.friendshipExpBase,
      v88->fields.getJoinSvts,
      v88,
      (bool)&dword_0 + 1,
      0);
  }
  else
  {
    v167 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
    bondsResult = v167->fields.bondsResult;
    if ( bondsResult && bondsResult->fields.m_CachedPtr )
    {
      v169 = v12;
      v170 = v10;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v172 = BattleData__get_eventId(v192, 0);
      QuestId = BattleData__getQuestId(v192, 0);
      this = (BattleResultComponent_o *)BattleData__getPhase(v192, 0);
      if ( !Master_object )
        goto LABEL_200;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v172,
                                          QuestId,
                                          (int32_t)this,
                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_200;
        v10 = v170;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0);
        v174 = (unsigned __int8)this & 1;
      }
      else
      {
        v174 = 0;
        v10 = v170;
      }
      v180 = v13->fields.battleResult;
      v12 = v169;
      if ( !v180 )
        goto LABEL_200;
      battle_info = v192->fields.battle_info;
      if ( !battle_info )
        goto LABEL_200;
      this = (BattleResultComponent_o *)v13->fields.bondsResult;
      if ( !this )
        goto LABEL_200;
      BattleResultBondsComponent__setResultData(
        (BattleResultBondsComponent_o *)this,
        v180->fields.myDeck,
        v180->fields.oldUserSvtCollection,
        v180->fields.friendshipRewardInfos,
        v180->fields.followerType,
        v10,
        battle_info->fields.userSvt,
        v180->fields.friendshipExpBase,
        v180->fields.getJoinSvts,
        v180,
        v174,
        v192,
        0);
    }
    else
    {
      LODWORD(v167[1].fields.bondsResult) &= ~1u;
    }
  }
  v89 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_200;
  v90 = v89->fields.eventItemResult;
  if ( v90
    && (v91 = v90->fields.m_CancellationTokenSource) != 0
    && (itemResult = v89->fields.itemResult) != 0
    && (v93 = itemResult->fields.m_CancellationTokenSource) != 0 )
  {
    v188 = v12;
    if ( !(_DWORD)v91 || !(_DWORD)v93 )
      goto LABEL_201;
    v94 = v10;
    expResult = v13->fields.expResult;
    parentComp = (UserGameEntity_o *)v90->fields.parentComp;
    v97 = (UserEquipEntity_o *)itemResult->fields.parentComp;
    eventEndTitle = (MasterLvRewardInfo_array *)v89->fields.eventEndTitle;
    maxTurnDamageRecord = v192->fields.maxTurnDamageRecord;
    maxTurnDamageInBattle = v192->fields.maxTurnDamageInBattle;
    v101 = BattleData__getQuestId(v192, 0);
    this = (BattleResultComponent_o *)BattleData__getPhase(v192, 0);
    if ( !expResult )
      goto LABEL_200;
    BattleResultExpComponent__SetResultData(
      expResult,
      parentComp,
      v97,
      eventEndTitle,
      v94,
      maxTurnDamageInBattle,
      maxTurnDamageRecord,
      v81,
      v101,
      (int32_t)this,
      methoda);
    v77 = v192;
    p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
    v12 = v188;
    v89 = (BattleResultComponent_o *)*v193;
    if ( !*v193 )
      goto LABEL_200;
  }
  else
  {
    LODWORD(v89[1].fields.bondsResult) &= ~2u;
  }
  v102 = v89->fields.eventItemResult;
  if ( !v102 || (v103 = v102->fields.m_CancellationTokenSource) == 0 )
  {
    LODWORD(v89[1].fields.bondsResult) &= ~4u;
    goto LABEL_91;
  }
  if ( !(_DWORD)v103 )
LABEL_201:
    sub_1C942F8(this);
  this = (BattleResultComponent_o *)v77->fields.quest_ent;
  v189 = v12;
  if ( !this )
    goto LABEL_200;
  v104 = (UserGameEntity_o *)v102->fields.parentComp;
  v105 = v13->fields.itemResult;
  v106 = (BattleDropItem_array *)v89->fields.eventEndMessage;
  eventId = HIDWORD(v89->fields.m_CachedPtr);
  fsm = (int32_t)v89->fields.fsm;
  fsm_high = HIDWORD(v89->fields.fsm);
  obj_fronttouch = (int64_t)v89[1].fields.obj_fronttouch;
  itemResult_high = HIDWORD(v89[1].fields.itemResult);
  dropupinfos = (DropUpInfo_array *)v89[1].fields.friendResult;
  ServantRewardActionComp = (EventConquestInfo_array *)v89[1].fields.ServantRewardActionComp;
  firstClearRewardQp = (int32_t)v89->fields.obj_basebg;
  FriendIconPrefab = (UserEventPointEntity_array *)v89->fields.FriendIconPrefab;
  friendResult = (UserEventEntity_array *)v89->fields.friendResult;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000000000LL, 0);
  if ( !*v193 )
    goto LABEL_200;
  if ( !v105 )
    goto LABEL_200;
  BattleResultItemComponent__setResultData(
    v105,
    v106,
    fsm,
    fsm_high,
    v104,
    eventId,
    friendResult,
    FriendIconPrefab,
    obj_fronttouch,
    v190,
    itemResult_high,
    dropupinfos,
    ServantRewardActionComp,
    firstClearRewardQp,
    (unsigned __int8)this & 1,
    (*v193)->fields.rewardBonus,
    v184);
  v77 = v192;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  v12 = v189;
  v89 = (BattleResultComponent_o *)*v193;
  if ( !*v193 )
    goto LABEL_200;
LABEL_91:
  if ( v89[1].fields.resultItemScrollBar )
  {
    v114 = v13->fields.itemResult;
    if ( !v114 )
      goto LABEL_200;
    getQpLabel = v114->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_200;
    mText = (struct UnityEngine_GameObject_o *)getQpLabel->fields.mText;
    v89[1].fields.touchGuard = mText;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v89[1].fields.touchGuard, (int32_t)mText, v82, v83, v84, v85, v86, v87);
    v123 = v13->fields.itemResult;
    if ( !v123 )
      goto LABEL_200;
    nowQpLabel = v123->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_200;
    v125 = v13->fields.battleResult;
    if ( !v125 )
      goto LABEL_200;
    v126 = nowQpLabel->fields.mText;
    v125->fields.ultimateNowQpText = v126;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&v125->fields.ultimateNowQpText,
      (int32_t)v126,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
    if ( !*p_battleResult )
      goto LABEL_200;
    resultItemScrollBar = (*p_battleResult)[1].fields.resultItemScrollBar;
    if ( !resultItemScrollBar )
      goto LABEL_200;
    v195 = (__int64)resultItemScrollBar->fields.thumb & ~(SLODWORD(resultItemScrollBar->fields.thumb) >> 31);
    v128 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v195);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v128, 0);
    v129 = v13->fields.itemResult;
    if ( !v129 )
      goto LABEL_200;
    v130 = (Il2CppObject *)this;
    v131 = v129->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v132 = LocalizationManager__Get((System_String_o *)StringLiteral_11172/*"RESULT_QP_PLUS"*/, 0);
    this = (BattleResultComponent_o *)System_String__Format(v132, v130, 0);
    if ( !v131 )
      goto LABEL_200;
    UILabel__set_text(v131, (System_String_o *)this, 0);
    v133 = v13->fields.itemResult;
    p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
    if ( !v133 )
      goto LABEL_200;
    if ( !*v193 )
      goto LABEL_200;
    rewardBonus = (*v193)->fields.rewardBonus;
    if ( !rewardBonus )
      goto LABEL_200;
    v135 = v133->fields.nowQpLabel;
    befUserGameQp = rewardBonus->fields.befUserGameQp;
    v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &befUserGameQp);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25304/*"{0:#,0}"*/, v136, 0);
    if ( !v135 )
      goto LABEL_200;
    UILabel__set_text(v135, (System_String_o *)this, 0);
    this = (BattleResultComponent_o *)v13->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_200;
    v197.fields.r = 0.29804;
    v197.fields.a = 1.0;
    v197.fields.g = 0.29804;
    v197.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v197, 0);
    v89 = (BattleResultComponent_o *)*v193;
    if ( !*v193 )
      goto LABEL_200;
  }
  this = (BattleResultComponent_o *)v77->fields.quest_ent;
  if ( !this )
    goto LABEL_200;
  v137 = v13->fields.friendResult;
  v138 = (int32_t)v89[1].fields.m_CancellationTokenSource;
  m_CancellationTokenSource_high = HIDWORD(v89[1].fields.m_CancellationTokenSource);
  m_CachedPtr = v89[1].fields.m_CachedPtr;
  endtargetObject = (int32_t)v89[1].fields.endtargetObject;
  endtargetObject_high = HIDWORD(v89[1].fields.endtargetObject);
  v143 = (int32_t)v89[1].fields.fsm;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000, 0);
  if ( !v137 )
    goto LABEL_200;
  BattleResultFriendComponent__setResultData(
    v137,
    v138,
    m_CancellationTokenSource_high,
    m_CachedPtr,
    endtargetObject,
    endtargetObject_high,
    v143,
    (unsigned __int8)this & 1,
    (const MethodInfo *)battleResult);
  v144 = v13->fields.battleResult;
  if ( !v144 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)v13->fields.eventItemResult;
  if ( !this )
    goto LABEL_200;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, void *))this->klass[1]._1.image)(
                                      this,
                                      v144->fields.resultEventRewardInfos,
                                      (unsigned int)v144->fields.eventId,
                                      v144->fields.resultBoostItemRewardInfos,
                                      v144->fields.rewardInfos,
                                      this->klass[1]._1.gc_desc);
  v145 = v13->fields.battleResult;
  if ( !v145 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)v13->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_200;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, void *))this->klass[1]._1.image)(
    this,
    v145->fields.resultDamageRewardInfos,
    (unsigned int)v145->fields.eventId,
    v145->fields.resultBoostItemRewardInfos,
    v145->fields.rewardInfos,
    this->klass[1]._1.gc_desc);
  eventFortificationItemResult = (UnityEngine_Object_o *)v13->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v147 = v13->fields.battleResult;
    if ( !v147 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_200;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, void *))this->klass[1]._1.image)(
                                        this,
                                        v147->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v147->fields.eventId,
                                        0,
                                        0,
                                        this->klass[1]._1.gc_desc);
    v149 = v13->fields.battleResult;
    if ( !v149 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_200;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v149->fields.fortificationInfos,
      v148);
  }
  this = *p_eventTutorial;
  if ( !*p_eventTutorial )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleEventTutorial__CheckHasResultPhaseTutorial((BattleEventTutorial_o *)this, 0);
  v150 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_200;
  v151 = (int)v150[1].fields.bondsResult;
  v152 = ((unsigned __int8)this & 1) != 0 ? 64 : 0;
  v153 = v151 & 0xFFFFFFBF | v152;
  v154 = (v151 & 0x200) != 0 ? v153 & 0xFFFFFFEF : v153;
  LODWORD(v150[1].fields.bondsResult) = v154;
  v155 = v77->fields.battle_info;
  if ( !v155 )
LABEL_200:
    sub_1C942F0(this, resultList);
  myDeck = v155->fields.myDeck;
  if ( myDeck && (svts = myDeck->fields.svts) != 0 && (max_length = svts->max_length, max_length >= 1) )
  {
    v159 = 0;
    do
    {
      if ( (unsigned int)v159 >= max_length )
        goto LABEL_201;
      this = (BattleResultComponent_o *)svts->m_Items[v159];
      if ( !this )
        goto LABEL_200;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0);
      v160 = (char)this;
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      ++v159;
    }
    while ( (int)v159 < max_length );
    p_battleResult = (BattleResultComponent_o **)v193;
    v150 = (BattleResultComponent_o *)*v193;
    if ( !*v193 )
      goto LABEL_200;
  }
  else
  {
    v160 = 0;
  }
  if ( HIDWORD(v150->fields.m_CachedPtr) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_200;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        HIDWORD((*p_battleResult)->fields.m_CachedPtr),
                                        0);
    v161 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_200;
      m_CachedPtr_high = HIDWORD((*p_battleResult)->fields.m_CachedPtr);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      this = (BattleResultComponent_o *)EventInfoUIProgressControl__GetEventProgressValueSaveData_45317284(
                                          m_CachedPtr_high,
                                          0,
                                          0);
      obj_basebg = (int)v161->fields.obj_basebg;
      LODWORD(v161) = 0;
      if ( (_DWORD)this != obj_basebg )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D28FDC )
        {
          sub_1C94098(&TerminalPramsManager_TypeInfo);
          byte_4D28FDC = 1;
        }
        v164 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v164 = TerminalPramsManager_TypeInfo;
        }
        v164->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0);
        LODWORD(v161) = 1;
      }
    }
  }
  else
  {
    LODWORD(v161) = 0;
  }
  if ( v160 & 1 | !v77->fields.isRetryable )
    goto LABEL_164;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                                      (BattleResultComponent_resultData_o *)this,
                                      (const MethodInfo *)resultList);
  if ( (((unsigned int)v161 | (unsigned int)this) & 1) != 0 )
  {
LABEL_164:
    v165 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
    v166 = (__int64)v165[1].fields.bondsResult & 0xFFFFF7FF;
  }
  else
  {
    v165 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
    v166 = LODWORD(v165[1].fields.bondsResult) | 0x800;
  }
  friendshipUpItemDialogRoot = v165[1].fields.friendshipUpItemDialogRoot;
  LODWORD(v165[1].fields.bondsResult) = v166;
  LODWORD(v165[1].fields.bondsResult) = v166 & 0xFFFFEFFF;
  if ( friendshipUpItemDialogRoot && friendshipUpItemDialogRoot[1].klass )
    LODWORD(v165[1].fields.bondsResult) = v166 | 0x1000;
  this = (BattleResultComponent_o *)BattleData__isBattleResultLoseQuestClear(v77, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleResultComponent_o *)BattleData__isBattleRetreatQuestClear(v77, 0), ((unsigned __int8)this & 1) != 0) )
  {
    if ( v77->fields.isItemResultSkip )
    {
      this = (BattleResultComponent_o *)BattleData__IsWarBoard(v77, 0);
      v176 = *p_battleResult;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v176 )
          goto LABEL_200;
        v177 = (int)v176[1].fields.bondsResult;
        if ( (v177 & 4) != 0 )
        {
          v178 = v177 | 4;
LABEL_189:
          LODWORD(v176[1].fields.bondsResult) = v178;
          LODWORD(v176[1].fields.bondsResult) = v178 & 0xFFFFFFE7;
          goto LABEL_190;
        }
      }
      else if ( !v176 )
      {
        goto LABEL_200;
      }
      v178 = (__int64)v176[1].fields.bondsResult & 0xFFFFFFFB;
      goto LABEL_189;
    }
  }
LABEL_190:
  if ( !*p_battleResult )
    goto LABEL_200;
  v179 = (int)(*p_battleResult)[1].fields.itemResult;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo(v12, v179 == 1, 0);
}


void BattleResultComponent__SkippAddRewardEffect(BattleResultComponent_o *this, const MethodInfo *method)
{
  this->fields.isAddRewardEffectSkip = 1;
}


void BattleResultComponent__StartAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_c *v3; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *touchGuard; // x0
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_4D3026E & 1) == 0 )
  {
    sub_1C94098(&BattleResultComponent_TypeInfo);
    byte_4D3026E = 1;
  }
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1C942F0(0, v4);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3026F & 1) == 0 )
  {
    sub_1C94098(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
    byte_4D3026F = 1;
  }
  v3 = sub_1C942E4(BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  bool IsUsePopupQuestReward; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D3027F & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D3027F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D265BD )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D265BD = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  IsUsePopupQuestReward = TerminalPramsManager__IsUsePopupQuestReward(v2->static_fields->_QuestId_k__BackingField, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v5);
  if ( IsUsePopupQuestReward )
    RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest((RewardMiniPopupExecutor_o *)Instance, 0);
  else
    RewardMiniPopupExecutor__AddTaskOnReBattle((RewardMiniPopupExecutor_o *)Instance, 0);
}


void BattleResultComponent__StartResult(
        BattleResultComponent_o *this,
        UnityEngine_GameObject_o *target,
        System_String_o *endEvent,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v8; // x21
  struct BattleResultComponent_resultData_o *battleResult; // x8
  struct BattleData_o *data; // x8

  if ( (byte_4D30267 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_10026/*"OpenResult"*/);
    sub_1C94098(&StringLiteral_10636/*"Performance"*/);
    byte_4D30267 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10636/*"Performance"*/,
                            0);
  if ( !perf )
    goto LABEL_15;
  v8 = (HutongGames_PlayMaker_FsmGameObject_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)perf, 0);
  if ( !v8 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v8, (UnityEngine_GameObject_o *)fsm, 0);
  fsm = (PlayMakerFSM_o *)perf->fields.data;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)BattleData__isNoResult((BattleData_o *)fsm, 0);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    battleResult = this->fields.battleResult;
    if ( !battleResult )
      goto LABEL_15;
    battleResult->fields.resultDispFlag = 0;
  }
  data = perf->fields.data;
  if ( !data
    || (fsm = (PlayMakerFSM_o *)data->fields.battleEvent) == 0
    || (((void (__fastcall *)(PlayMakerFSM_o *, struct BattleResultComponent_resultData_o *, void *))fsm->klass[1]._1.properties)(
          fsm,
          this->fields.battleResult,
          fsm->klass[1]._1.methods),
        (fsm = this->fields.fsm) == 0) )
  {
LABEL_15:
    sub_1C942F0(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10026/*"OpenResult"*/, 0);
}


void BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
        UnityEngine_GameObject_o **prefabObject,
        System_String_o *prefabName,
        AssetData_o *assetData,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v8; // x19
  Il2CppObject *Object_object__51893132; // x21
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v8 = (GrandQuestFolderBoardItem_o *)prefabObject;
  if ( (byte_4D30290 & 1) == 0 )
  {
    sub_1C94098(&Method_AssetData_GetObject_GameObject____79044816);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    prefabObject = (UnityEngine_GameObject_o **)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D30290 = 1;
  }
  if ( !assetData )
    sub_1C942F0(prefabObject, prefabName);
  Object_object__51893132 = AssetData__GetObject_object__51893132(
                              assetData,
                              prefabName,
                              (const MethodInfo_317D38C *)Method_AssetData_GetObject_GameObject____79044816);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__52598436(
          Object_object__51893132,
          root,
          (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
  v8->klass = (GrandQuestFolderBoardItem_c *)v10;
  sub_1C9403C(v8, (int32_t)v10, v11, v12, v13, v14, v15, v16);
}


void BattleResultComponent___OpenDataLostBattleResetDialog_b__73_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  MissionNotifyManager_o *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4D3028E & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    sub_1C94098(&StringLiteral_5460/*"END_PROC"*/);
    byte_4D3028E = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D28FDC )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D28FDC = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0);
  if ( !byte_4D299A6 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D299A6 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3ABAA64 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0);
  if ( !byte_4D29BF3 )
  {
    sub_1C94098(&TerminalPramsManager_TypeInfo);
    byte_4D29BF3 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  Instance = (MissionNotifyManager_o *)this->fields.fsm;
  if ( !Instance )
LABEL_20:
    sub_1C942F0(Instance, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5460/*"END_PROC"*/, 0);
}


void BattleResultComponent___OpenFriendshipUpItemSelectDialog_b__74_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  FriendshipUpItemSelectDialog_o *v4; // x20
  Il2CppObject *battleRetryConfirmComponent; // x21
  System_Action_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4D3028F & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleRetryConfirmComponent_BaseDialogOpen__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D3028F = 1;
  }
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0, 0) )
  {
    v4 = this->fields.friendshipUpItemSelectDialog;
    battleRetryConfirmComponent = (Il2CppObject *)this->fields.battleRetryConfirmComponent;
    v6 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(v6, battleRetryConfirmComponent, Method_BattleRetryConfirmComponent_BaseDialogOpen__, 0);
    if ( !v4 )
      sub_1C942F0(v7, v8);
    FriendshipUpItemSelectDialog__Open(v4, v6, 0);
  }
}


void BattleResultComponent___OpenRetryQuest_b__65_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4D3028C & 1) == 0 )
  {
    sub_1C94098(&Method_BattleResultComponent__OpenRetryQuest_b__65_1__);
    sub_1C94098(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4D3028C = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C942E4(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenRetryQuest_b__65_1__,
    0);
  if ( !battleRetryConfirmComponent )
    sub_1C942F0(v5, v6);
  BattleRetryConfirmComponent__Open(battleRetryConfirmComponent, v4, 0);
}


void BattleResultComponent___OpenRetryQuest_b__65_1(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4D3028D & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_13112/*"StartQuestClearReward"*/);
    byte_4D3028D = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13112/*"StartQuestClearReward"*/, 0.3, 0);
}


void BattleResultComponent___ScrollBarMotionCompleteValue_b__50_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4D3028B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_5460/*"END_PROC"*/);
    byte_4D3028B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5460/*"END_PROC"*/, 0);
}


void BattleResultComponent__checkNew(BattleResultComponent_o *this, int32_t resultType, const MethodInfo *method)
{
  __int64 v5; // x20
  BattleResultItemComponent_o *itemResult; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleResultComponent_c *v14; // x0
  const MethodInfo **v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  BattleDropItem_o *NewDrop; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v30; // w0
  Il2CppObject *Instance; // x21
  System_Action_o *v32; // x22
  __int64 *v33; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7

  if ( (byte_4D30278 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&BattleResultComponent_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C94098(&Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__);
    sub_1C94098(&BattleResultComponent___c__DisplayClass58_0_TypeInfo);
    sub_1C94098(&StringLiteral_9649/*"OPEN"*/);
    sub_1C94098(&StringLiteral_9285/*"NEXT"*/);
    byte_4D30278 = 1;
  }
  v5 = sub_1C942E4(BattleResultComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v14);
  *(_QWORD *)(v5 + 16) = 0;
  v15 = (const MethodInfo **)(v5 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), 0, v16, v17, v18, v19, v20, v21);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_35;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, v7);
      goto LABEL_18;
    case 2:
      itemResult = (BattleResultItemComponent_o *)this->fields.eventItemResult;
      if ( !itemResult )
        goto LABEL_35;
      goto LABEL_17;
    case 3:
      itemResult = (BattleResultItemComponent_o *)this->fields.eventDamageItemResult;
      if ( !itemResult )
        goto LABEL_35;
      goto LABEL_17;
    case 4:
      eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v30 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0);
      v7 = 0;
      if ( !v30 )
        goto LABEL_19;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_35;
LABEL_17:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, v7);
LABEL_18:
      v7 = (const MethodInfo *)NewDrop;
LABEL_19:
      *v15 = v7;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v7, v23, v24, v25, v26, v27, v28);
LABEL_20:
      if ( !*v15 )
      {
        p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
        ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
        {
          itemResult = (BattleResultItemComponent_o *)*p_ServantRewardActionComp;
          if ( !*p_ServantRewardActionComp )
            goto LABEL_35;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)itemResult,
                                                 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_72111160(gameObject, 0);
          *p_ServantRewardActionComp = 0;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields.ServantRewardActionComp,
            0,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_35;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0, 0);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v33 = &StringLiteral_9285/*"NEXT"*/;
          goto LABEL_34;
        }
LABEL_35:
        sub_1C942F0(itemResult, v7);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v32 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)v5,
        Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__,
        0);
      if ( !Instance )
        goto LABEL_35;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v32, 0);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_35;
      v33 = &StringLiteral_9649/*"OPEN"*/;
LABEL_34:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v33, 0);
      return;
    default:
      goto LABEL_20;
  }
}


void BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4D30268 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_12364/*"START_Begin"*/);
    byte_4D30268 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12364/*"START_Begin"*/, 0);
}


void BattleResultComponent__endCloseEndEventMessage(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D3026D & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3026D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C942F0(0, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4D30279 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_5460/*"END_PROC"*/);
    byte_4D30279 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C942F0(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5460/*"END_PROC"*/, 0);
}


BattleResultComponent_resultData_o *BattleResultComponent__getBattleResult(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleResult;
}


void BattleResultComponent__openNewCommandCodeView(
        BattleResultComponent_o *this,
        int64_t userCommandCodeId,
        System_Action_o *action,
        const MethodInfo *method)
{
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x23
  __int64 v9; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D3027C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4D3027C = 1;
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.ServantRewardActionComp, 0, v12, v13, v14, v15, v16, v17);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0),
        *p_ServantRewardActionComp = Prefab,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.ServantRewardActionComp,
          (int32_t)Prefab,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0)
    || (ServantRewardAction__SetupCommandCode_37847964(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0) )
  {
LABEL_14:
    sub_1C942F0(transform, v9);
  }
  ServantRewardAction__Play((ServantRewardAction_o *)transform, action, 0.0, 0);
}


void BattleResultComponent__openNewServantView(
        BattleResultComponent_o *this,
        int64_t userSvtId,
        bool isNew,
        bool isDoEffect,
        System_Action_o *action,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  Il2CppObject *v16; // x23
  UnityEngine_Object_o *gameObject; // x25
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  Il2CppObject *v24; // x25
  ServantRewardAction_o *Prefab; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  ServantRewardAction_o *v32; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v35; // w25
  Il2CppObject v36; // q1
  int64_t v37; // x22
  Il2CppObject v38; // q1
  int64_t v39; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_4D3027B & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4D3027B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_345DA1C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v16 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
  {
    Instance = (DataManager_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_72110972(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.ServantRewardActionComp, 0, v18, v19, v20, v21, v22, v23);
  }
  v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v24 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v24,
             (UnityEngine_Transform_o *)Instance,
             1,
             0);
  *p_ServantRewardActionComp = Prefab;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.ServantRewardActionComp,
    (int32_t)Prefab,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !v16 )
    goto LABEL_27;
  v32 = *p_ServantRewardActionComp;
  klass = v16[5].klass;
  monitor = v16[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = klass;
  *(_QWORD *)&v43.fields.fakeValue = monitor;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v43, 0);
  if ( isDoEffect )
  {
    v36 = v16[2];
    *(Il2CppObject *)&v42.fields.currentCryptoKey = v16[1];
    *(Il2CppObject *)&v42.fields.fakeValue = v36;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v41 = v42;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v41, 0);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[6],
                                  0);
    if ( v32 )
    {
      ServantRewardAction__Setup(v32, v35, v37, (int32_t)Instance, 1, isNew, 1, 10, 0);
      goto LABEL_25;
    }
LABEL_27:
    sub_1C942F0(Instance, v12);
  }
  v38 = v16[2];
  *(Il2CppObject *)&v42.fields.currentCryptoKey = v16[1];
  *(Il2CppObject *)&v42.fields.fakeValue = v38;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v42;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v40, 0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[6],
                                0);
  if ( !v32 )
    goto LABEL_27;
  ServantRewardAction__Setup(v32, v35, v39, (int32_t)Instance, 1, 1, 1, 2, 0);
LABEL_25:
  Instance = (DataManager_o *)*p_ServantRewardActionComp;
  if ( !*p_ServantRewardActionComp )
    goto LABEL_27;
  ServantRewardAction__Play((ServantRewardAction_o *)Instance, action, 0.0, 0);
}


void BattleResultComponent__openTouchWait(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1C942F0(0, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0);
}


void BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1C942F0(0, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0);
}


void BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1C942F0(0, flg);
  UnityEngine_GameObject__SetActive(obj_fronttouch, flg, 0);
}


void BattleResultComponent__showServantRewardAction(
        BattleResultComponent_o *this,
        int64_t userSvtId,
        int32_t type,
        const MethodInfo *method)
{
  bool v7; // w21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x5
  __int64 v10; // x1
  UnityEngine_Component_o *Instance; // x0
  __int64 *v12; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D3027A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleResultComponent_endNewView__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C94098(&StringLiteral_9649/*"OPEN"*/);
    sub_1C94098(&StringLiteral_9285/*"NEXT"*/);
    byte_4D3027A = 1;
  }
  if ( userSvtId < 1 )
  {
    p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
    ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
    {
      Instance = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
      if ( !*p_ServantRewardActionComp )
        goto LABEL_17;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_72111160(gameObject, 0);
      *p_ServantRewardActionComp = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.ServantRewardActionComp, 0, v16, v17, v18, v19, v20, v21);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v12 = &StringLiteral_9285/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C942F0(Instance, v10);
  }
  v7 = Gift__IsEventSvtGet(type, 0);
  v8 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0);
  BattleResultComponent__openNewServantView(this, userSvtId, v7, v7, v8, v9);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v12 = &StringLiteral_9649/*"OPEN"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v12, 0);
}


void BattleResultComponent__StartAddRewardAnimationCoroutine_d__47___ctor(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__MoveNext(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4D30294 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C94098(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4D30294 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this
      || (itemResult = _4__this->fields.itemResult) == 0
      || (itemWindow = itemResult->fields.itemWindow) == 0
      || (itemObjectList = itemWindow->fields.itemObjectList) == 0 )
    {
      sub_1C942F0(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, method);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForSeconds_o *)sub_1C942E4(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v4, 0.1, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6, v7, v8, v9, v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__System_Collections_IEnumerator_Reset(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__System_Collections_IEnumerator_get_Current(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__System_IDisposable_Dispose(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleResultComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30291 & 1) == 0 )
  {
    sub_1C94098(&BattleResultComponent___c_TypeInfo);
    byte_4D30291 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleResultComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleResultComponent___c___ctor(BattleResultComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *BattleResultComponent___c___Set_b__39_0(
        BattleResultComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


System_String_o *BattleResultComponent___c___Set_b__39_1(
        BattleResultComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0);
}


void BattleResultComponent___c__DisplayClass58_0___ctor(
        BattleResultComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultComponent___c__DisplayClass58_0___checkNew_b__0(
        BattleResultComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  BattleResultComponent___c__DisplayClass58_0_o *v2; // x19
  struct BattleDropItem_o *newDrop; // x8
  struct BattleDropItem_o *v4; // x8
  int64_t userSvtId; // x20
  Il2CppObject *_4__this; // x19
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x3
  struct BattleDropItem_o *v9; // x8
  struct BattleDropItem_o *v10; // x8
  int64_t v11; // x21
  Il2CppObject *v12; // x19
  char v13; // w20
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x5

  v2 = this;
  if ( (byte_4D30292 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    this = (BattleResultComponent___c__DisplayClass58_0_o *)sub_1C94098(&Method_BattleResultComponent_endNewView__);
    byte_4D30292 = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsCommandCode_41175896(newDrop->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.newDrop;
    if ( v4 )
    {
      userSvtId = v4->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v7 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
      System_Action___ctor(v7, _4__this, Method_BattleResultComponent_endNewView__, 0);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v7, v8);
        return;
      }
    }
LABEL_12:
    sub_1C942F0(this, method);
  }
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsEventSvtGet_41175552(v9->fields.type, 0);
  v10 = v2->fields.newDrop;
  if ( !v10 )
    goto LABEL_12;
  v11 = v10->fields.userSvtId;
  v12 = (Il2CppObject *)v2->fields.__4__this;
  v13 = (char)this;
  v14 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(v14, v12, Method_BattleResultComponent_endNewView__, 0);
  if ( !v12 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v12, v11, v13 & 1, v13 & 1, v14, v15);
}


void BattleResultComponent___c__DisplayClass75_0___ctor(
        BattleResultComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultComponent___c__DisplayClass75_0___LoadFriendshipUpItemAsset_b__1(
        BattleResultComponent___c__DisplayClass75_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  void *_4__this; // x0
  const MethodInfo *v11; // x4
  struct BattleResultComponent_o *v12; // x8
  UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x20
  AssetData_o *cashedFriendshipUpItemAssetData; // x21
  struct BattleResultComponent_o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct BattleResultComponent_o *v22; // x8
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  struct BattleResultComponent_o *v24; // x8
  struct System_Action_o *callback; // x8
  UnityEngine_GameObject_o *prefabObject; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D30293 & 1) == 0 )
  {
    sub_1C94098(&BattleResultComponent_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_6887/*"FriendshipUpItemSelectDialog"*/);
    byte_4D30293 = 1;
  }
  prefabObject = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  *((_QWORD *)_4__this + 26) = assetData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)((char *)_4__this + 208),
    (int32_t)assetData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_18;
  cashedFriendshipUpItemAssetData = v12->fields.cashedFriendshipUpItemAssetData;
  friendshipUpItemDialogRoot = v12->fields.friendshipUpItemDialogRoot;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
    &prefabObject,
    (System_String_o *)StringLiteral_6887/*"FriendshipUpItemSelectDialog"*/,
    cashedFriendshipUpItemAssetData,
    friendshipUpItemDialogRoot,
    v11);
  _4__this = prefabObject;
  if ( !prefabObject )
    goto LABEL_18;
  v15 = this->fields.__4__this;
  _4__this = UnityEngine_GameObject__GetComponent_object_(
               prefabObject,
               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
  if ( !v15 )
    goto LABEL_18;
  v15->fields.friendshipUpItemSelectDialog = (struct FriendshipUpItemSelectDialog_o *)_4__this;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v15->fields.friendshipUpItemSelectDialog,
    (int32_t)_4__this,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_18;
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)v22->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (void *)UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v24 = this->fields.__4__this;
    if ( v24 )
    {
      _4__this = v24->fields.friendshipUpItemSelectDialog;
      if ( _4__this )
      {
        FriendshipUpItemSelectDialog__Init((FriendshipUpItemSelectDialog_o *)_4__this, 0);
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_1C942F0(_4__this, assetData);
  }
LABEL_16:
  callback = this->fields.callback;
  if ( !callback )
    goto LABEL_18;
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void BattleResultComponent_resultData___ctor(BattleResultComponent_resultData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleResultComponent_resultData__IsGetJoinSvtsEffect(
        BattleResultComponent_resultData_o *this,
        const MethodInfo *method)
{
  struct GetSvts_array *getJoinSvts; // x10
  int max_length; // w8
  __int64 v4; // x9
  GetSvts_o **m_Items; // x10
  GetSvts_o *v6; // x11
  _BOOL4 isNew; // w11

  getJoinSvts = this->fields.getJoinSvts;
  if ( !getJoinSvts )
    return 0;
  max_length = getJoinSvts->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0;
  m_Items = getJoinSvts->m_Items;
  do
  {
    if ( (unsigned int)v4 >= max_length )
      sub_1C942F8(this);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1C942F0(this, method);
    isNew = v6->fields.isNew;
    if ( isNew )
      break;
    ++v4;
  }
  while ( (int)v4 < max_length );
  return isNew;
}


bool BattleResultComponent_resultData__checkResultDispFlag(
        BattleResultComponent_resultData_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  return (this->fields.resultDispFlag & flag) != 0;
}


void BattleResultComponent_resultData__clearAllDispFlag(
        BattleResultComponent_resultData_o *this,
        const MethodInfo *method)
{
  this->fields.resultDispFlag = 0;
}


void BattleResultComponent_resultData__disableResultDispFlag(
        BattleResultComponent_resultData_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  this->fields.resultDispFlag &= ~flag;
}


void BattleResultComponent_resultData__enableResultDispFlag(
        BattleResultComponent_resultData_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  this->fields.resultDispFlag |= flag;
}


bool BattleResultComponent_resultData__isWin(BattleResultComponent_resultData_o *this, const MethodInfo *method)
{
  return this->fields.battleResult == 1;
}


void BattleResultComponent_resultData__setDefaultDispFlag(
        BattleResultComponent_resultData_o *this,
        const MethodInfo *method)
{
  this->fields.resultDispFlag |= 0x3Fu;
}