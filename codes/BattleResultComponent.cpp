void BattleResultComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C3B1C9 & 1) == 0 )
  {
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_10564/*"PartyOrganization/FriendshipUpItem"*/);
    byte_4C3B1C9 = 1;
  }
  BattleResultComponent_TypeInfo->static_fields->FriendshipUpItemLoadAssetPath = (struct System_String_o *)StringLiteral_10564/*"PartyOrganization/FriendshipUpItem"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleResultComponent_TypeInfo->static_fields, StringLiteral_10564/*"PartyOrganization/FriendshipUpItem"*/, v1, v2);
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

  if ( (byte_4C3B1B5 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_3497/*"CLOSE"*/);
    sub_1C32C20(&StringLiteral_9263/*"NEXT"*/);
    byte_4C3B1B5 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                method),
        (fsm = this->fields.fsm) == 0) )
  {
    sub_1C32E7C(eventItemResult);
  }
  v5 = &StringLiteral_9263/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v5 = &StringLiteral_3497/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0);
}


void BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B1B2 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5455/*"END_PROC"*/);
    byte_4C3B1B2 = 1;
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
    sub_1C32E7C(touchGuard);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5455/*"END_PROC"*/, 0);
}


void BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_c *v3; // x0
  ServantAssetLoadManager_o *Instance; // x0
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  if ( (byte_4C3B1BC & 1) == 0 )
  {
    sub_1C32C20(&AndroidBackKeyManager_TypeInfo);
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C32C20(&StringLiteral_23266/*"sendFsmEvent"*/);
    sub_1C32C20(&StringLiteral_5455/*"END_PROC"*/);
    byte_4C3B1BC = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1C32E7C(Instance);
  UnityEngine_GameObject__SendMessage_71205428(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23266/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5455/*"END_PROC"*/,
    0);
}


void BattleResultComponent__EndRetryConfirmDialog(
        BattleResultComponent_o *this,
        bool isDecide,
        int32_t boostId,
        const MethodInfo *method)
{
  BattleResultComponent_c *v7; // x0
  const MethodInfo *v8; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3B1BF & 1) == 0 )
  {
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    sub_1C32C20(&StringLiteral_9263/*"NEXT"*/);
    byte_4C3B1BF = 1;
  }
  v7 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v7);
  if ( isDecide )
  {
    BattleResultComponent__OpenFollowerSceneForRetry(this, boostId, v8);
  }
  else
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C32E7C(0);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9263/*"NEXT"*/, 0);
  }
}


void BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v6; // x21
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  const MethodInfo *v11; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4C3B1A5 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B1A5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v6 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C313D1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  if ( !v6 )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition(v6, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
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
  BattleResultBondsComponent__Init((BattleResultBondsComponent_o *)gameObject, v7);
  gameObject = (UnityEngine_GameObject_o *)this->fields.expResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultExpComponent__Init((BattleResultExpComponent_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultItemComponent__Init((BattleResultItemComponent_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v8);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventDamageItemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v9);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventFortificationItemResult;
    if ( !gameObject )
      goto LABEL_36;
    BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v11);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.friendResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultFriendComponent__Init((BattleResultFriendComponent_o *)gameObject, releasePerformanceObject, 0);
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
    v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71223640(v15, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v16, v17);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1C32BC4((CGThumbnailListItem_o *)p_screenTouch, (int32_t)Component_object, v20, v21),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 14)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_36:
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  PlayMakerFSM_o *fsm; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v7; // w20
  Il2CppObject *v8; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B1C4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_12234/*"SKIP"*/);
    sub_1C32C20(&StringLiteral_9263/*"NEXT"*/);
    byte_4C3B1C4 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
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
  v7 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  }
  if ( !v8 )
LABEL_30:
    sub_1C32E7C(fsm);
  if ( UserEventDataLostMaster__TryGetEntity(
         (UserEventDataLostMaster_o *)v8,
         &entity,
         fsm[2].fields.addEventHandlers->fields.method_code,
         v7,
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
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9263/*"NEXT"*/, 0);
    }
  }
LABEL_28:
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_30;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12234/*"SKIP"*/, 0);
}


void BattleResultComponent__LoadFriendshipUpItemAsset(
        BattleResultComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  FriendshipUpItemSelectDialog_o *isExistAssetStorage; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x22
  BattleResultComponent_c *v13; // x0
  System_String_o *FriendshipUpItemLoadAssetPath; // x20
  BattleResultComponent_c *v15; // x0
  System_String_o *v16; // x20
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4C3B1C7 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    sub_1C32C20(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__);
    sub_1C32C20(&BattleResultComponent___c__DisplayClass75_0_TypeInfo);
    byte_4C3B1C7 = 1;
  }
  v5 = sub_1C32E6C(BattleResultComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callback;
  v9 = v5 + 24;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v10, v11);
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
  v13 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v13 = BattleResultComponent_TypeInfo;
  }
  FriendshipUpItemLoadAssetPath = v13->static_fields->FriendshipUpItemLoadAssetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  isExistAssetStorage = (FriendshipUpItemSelectDialog_o *)AssetManager__isExistAssetStorage(
                                                            FriendshipUpItemLoadAssetPath,
                                                            0);
  if ( ((unsigned __int8)isExistAssetStorage & 1) == 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v9 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v9 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v9 + 64LL),
        *(_QWORD *)(*(_QWORD *)v9 + 40LL));
      return;
    }
LABEL_21:
    sub_1C32E7C(isExistAssetStorage);
  }
  v15 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v15 = BattleResultComponent_TypeInfo;
  }
  v16 = v15->static_fields->FriendshipUpItemLoadAssetPath;
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1C32E6C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, v17, 1, 0);
}


void BattleResultComponent__OnDestroy(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B1A4 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    byte_4C3B1A4 = 1;
  }
  BattleResultComponent__ReleaseFriendshipUpItemAsset(this, method);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleasePartyOrganizationAtlas(0);
}


void BattleResultComponent__OpenBonds(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  const MethodInfo *v4; // x1

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0), (obj_fronttouch = this->fields.obj_basebg) == 0)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0),
        (obj_fronttouch = (UnityEngine_GameObject_o *)this->fields.bondsResult) == 0) )
  {
    sub_1C32E7C(obj_fronttouch);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, v4);
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
  if ( (byte_4C3B1C5 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__);
    sub_1C32C20(&DataLostResetManager_TypeInfo);
    this = (BattleResultComponent_o *)sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B1C5 = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_1C32E7C(this);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v7, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__, 0);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v7, 0);
}


void BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4C3B1B6 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_12234/*"SKIP"*/);
    byte_4C3B1B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v6) )
    {
      Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v7);
        return;
      }
LABEL_19:
      sub_1C32E7C(Instance);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12234/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenEventFortificationItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  UnityEngine_Object_o *eventFortificationItemResult; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4C3B1C3 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_12234/*"SKIP"*/);
    byte_4C3B1C3 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
           v5) )
    {
      Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__OpenEventFortification((BattleResultEventItemComponent_o *)Instance, v6);
        return;
      }
LABEL_21:
      sub_1C32E7C(Instance);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12234/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  if ( (byte_4C3B1B4 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_12234/*"SKIP"*/);
    byte_4C3B1B4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v5);
      return;
    }
LABEL_14:
    sub_1C32E7C(Instance);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12234/*"SKIP"*/, 0);
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
    sub_1C32E7C(obj_fronttouch);
  }
  BattleResultExpComponent__Open((BattleResultExpComponent_o *)obj_fronttouch, 0);
}


void BattleResultComponent__OpenFollowerSceneForRetry(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t QuestId_k__BackingField; // w21
  Il2CppObject *Entity; // x22
  MapControl_QuestInfo_o *v8; // x20
  int32_t questId; // w23
  bool IsQuestClear_40225464; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v13; // w22
  Il2CppObject *v14; // x21
  TerminalPramsManager_c *v15; // x0
  const MethodInfo *v16; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C3B1C0 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C32C20(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C32C20(&MapControl_QuestInfo_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B1C0 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_3396838 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v8 = (MapControl_QuestInfo_o *)sub_1C32E6C(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v8, 0);
  questId = v8->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40225464 = CondType__IsQuestClear_40225464(questId, -1, 0, 0);
  fixedVal = -1;
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A96 = 1;
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
                            !IsQuestClear_40225464,
                            &fixedVal,
                            0);
  v8->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0);
  v8->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v13 = fixedVal;
  else
    v13 = ActConsume;
  v14 = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C344B5 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C344B5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v14 )
    goto LABEL_36;
  if ( !clsQuestCheck__CheckQuestPlayable(
          (clsQuestCheck_o *)v14,
          v8,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 128LL),
          boostId,
          0) )
    return;
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->lastPlayQuestConsumeAp = v13;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C32E7C(Instance);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v16);
}


void BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleResultComponent_c *v4; // x0

  v2 = this;
  if ( (byte_4C3B1B3 & 1) == 0 )
  {
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleResultComponent_o *)sub_1C32C20(&StringLiteral_13060/*"StartQuestClearReward"*/);
    byte_4C3B1B3 = 1;
  }
  battleResult = v2->fields.battleResult;
  if ( !battleResult )
    goto LABEL_14;
  if ( (battleResult->fields.resultDispFlag & 0x800) != 0 )
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_13060/*"StartQuestClearReward"*/, 0.3, 0);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  this = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0),
        (this = (BattleResultComponent_o *)v2->fields.obj_fronttouch) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (BattleResultComponent_o *)v2->fields.friendResult) == 0) )
  {
LABEL_14:
    sub_1C32E7C(this);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)this, 0);
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

  if ( (byte_4C3B1C6 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__);
    byte_4C3B1C6 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__,
    0);
  if ( !battleRetryConfirmComponent )
    sub_1C32E7C(v5);
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

  if ( (byte_4C3B1AB & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleResultComponent_endCloseEndEventMessage__);
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B1AB = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v7 = (CommonUI_o *)Instance;
    v8 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_31193120(
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
    sub_1C32E7C(resultSprite);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, 0);
}


void BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  int32_t m_CachedPtr_high; // w22
  int32_t m_CancellationTokenSource; // w23
  System_Action_o *v7; // x21
  TerminalPramsManager_c *v8; // x0
  int32_t QuestId_k__BackingField; // w22
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4C3B1BD & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleResultComponent__OpenRetryQuest_b__65_0__);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B1BD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(battleRetryConfirmComponent->fields.doubleContentsPrefab->fields.m_CachedPtr);
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4C31A96 = 1;
  }
  if ( !LODWORD(battleRetryConfirmComponent->fields.tripleContentsNoneUseItemPrefab) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CancellationTokenSource = (int32_t)battleRetryConfirmComponent->fields.doubleContentsPrefab->fields.m_CancellationTokenSource;
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4C31DAD = 1;
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
    v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultComponent__OpenRetryQuest_b__65_0__, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C31A97 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C31A97 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v8->static_fields->_QuestId_k__BackingField;
    if ( !byte_4C31A96 )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
      byte_4C31A96 = 1;
    }
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = TerminalPramsManager_TypeInfo;
    }
    EventTutorialMaster__CheckTutorial(
      0,
      96,
      v7,
      QuestId_k__BackingField,
      v8->static_fields->_PhaseCnt_k__BackingField,
      0,
      0,
      0);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
    goto LABEL_39;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
    sub_1C32E7C(battleRetryConfirmComponent);
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

  if ( (byte_4C3B1AA & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleResultComponent_OpenTutorial__);
    sub_1C32C20(&StringLiteral_5455/*"END_PROC"*/);
    byte_4C3B1AA = 1;
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
    v5 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0);
    if ( v4 )
    {
      BattleEventTutorial__callResult(v4, v5, 0);
      return;
    }
LABEL_23:
    sub_1C32E7C(eventTutorial);
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
      v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
    v11 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5455/*"END_PROC"*/, 0);
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
  Il2CppObject *v11; // x20

  if ( (byte_4C3B1C1 & 1) == 0 )
  {
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    sub_1C32C20(&BattleSetupInfo_TypeInfo);
    sub_1C32C20(&RandomLimitCountManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B1C1 = 1;
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
  if ( !byte_4C31DAD )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31DAD = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C31A97 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C31A96 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C31A96 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v5->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BattleSetupInfo_o *)sub_1C32E6C(BattleSetupInfo_TypeInfo);
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
  v11 = Instance;
  if ( boostId )
  {
    if ( !Instance )
      goto LABEL_29;
    HIDWORD(Instance[3].monitor) = boostId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C32E7C(Instance);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v11, 0);
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
    sub_1C32E7C(this);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0);
}


void BattleResultComponent__ReleaseFriendshipUpItemAsset(BattleResultComponent_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_cashedFriendshipUpItemAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *cashedFriendshipUpItemAssetData; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3B1C8 & 1) == 0 )
  {
    sub_1C32C20(&AssetManager_TypeInfo);
    byte_4C3B1C8 = 1;
  }
  cashedFriendshipUpItemAssetData = this->fields.cashedFriendshipUpItemAssetData;
  p_cashedFriendshipUpItemAssetData = (CGThumbnailListItem_o *)&this->fields.cashedFriendshipUpItemAssetData;
  v4 = cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40435328(v4, 0);
    p_cashedFriendshipUpItemAssetData->klass = 0;
    sub_1C32BC4(p_cashedFriendshipUpItemAssetData, 0, v6, v7);
  }
}


void BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  ScreenTouchInformationComponent_o *v4; // x0

  if ( (byte_4C3B1A8 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B1A8 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0, 0) )
  {
    v4 = this->fields.screenTouch;
    if ( !v4 || (ScreenTouchInformationComponent__ResetPlayScale(v4, 0), (v4 = this->fields.screenTouch) == 0) )
      sub_1C32E7C(v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v4, 0);
  }
}


void BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  if ( (byte_4C3B1C2 & 1) == 0 )
  {
    sub_1C32C20(&BattlePerformance_TypeInfo);
    byte_4C3B1C2 = 1;
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Object_array *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x1
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  __int64 v37; // x1
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  __int64 v62; // x5
  __int64 v63; // x6
  __int64 v64; // x7
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  Il2CppObject *v67; // x21
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  __int64 v74; // x5
  __int64 v75; // x6
  __int64 v76; // x7
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  Il2CppObject *v79; // x21
  System_Collections_Hashtable_o *v80; // x0
  __int64 v81; // x0
  int v82; // [xsp+Ch] [xbp-44h] BYREF
  int v83; // [xsp+10h] [xbp-40h] BYREF
  int v84; // [xsp+14h] [xbp-3Ch] BYREF
  int v85; // [xsp+18h] [xbp-38h] BYREF
  int v86; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C3B1AF & 1) == 0 )
  {
    sub_1C32C20(&iTween_EaseType_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_12643/*"ScrollBarMotionCompleteValue"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_18551/*"delay"*/);
    sub_1C32C20(&StringLiteral_12644/*"ScrollBarMotionUpdateValue"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_18750/*"easeType"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3B1AF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63266448(gameObject, 0);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = sub_1C32CC8(object___TypeInfo, 14);
  if ( !v5 )
    sub_1C32E7C(0);
  v8 = (System_Object_array *)v5;
  v9 = StringLiteral_19689/*"from"*/;
  if ( StringLiteral_19689/*"from"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_19689/*"from"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v10 = StringLiteral_19689/*"from"*/;
  }
  else
  {
    v10 = 0;
  }
  if ( !LODWORD(v8->max_length) )
    goto LABEL_67;
  v8->m_Items[0] = (Il2CppObject *)v10;
  sub_1C32BC4((CGThumbnailListItem_o *)v8->m_Items, v10, v6, v7);
  v86 = 0;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v86, v11, v12, v13, v14, v15, v16);
  v19 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C32D5C(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
  }
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_67;
  v8->m_Items[1] = v19;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[1], (int32_t)v19, v17, v18);
  v9 = StringLiteral_24106/*"to"*/;
  if ( StringLiteral_24106/*"to"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_24106/*"to"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v22 = StringLiteral_24106/*"to"*/;
  }
  else
  {
    v22 = 0;
  }
  if ( LODWORD(v8->max_length) <= 2 )
    goto LABEL_67;
  v8->m_Items[2] = (Il2CppObject *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[2], v22, v20, v21);
  v85 = 1065353216;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v85, v23, v24, v25, v26, v27, v28);
  v31 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C32D5C(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
  }
  if ( LODWORD(v8->max_length) <= 3 )
    goto LABEL_67;
  v8->m_Items[3] = v31;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[3], (int32_t)v31, v29, v30);
  v9 = StringLiteral_22435/*"onupdate"*/;
  if ( StringLiteral_22435/*"onupdate"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v34 = StringLiteral_22435/*"onupdate"*/;
  }
  else
  {
    v34 = 0;
  }
  if ( LODWORD(v8->max_length) <= 4 )
    goto LABEL_67;
  v8->m_Items[4] = (Il2CppObject *)v34;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[4], v34, v32, v33);
  v9 = StringLiteral_12644/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12644/*"ScrollBarMotionUpdateValue"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_12644/*"ScrollBarMotionUpdateValue"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v37 = StringLiteral_12644/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v37 = 0;
  }
  if ( LODWORD(v8->max_length) <= 5 )
    goto LABEL_67;
  v8->m_Items[5] = (Il2CppObject *)v37;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[5], v37, v35, v36);
  v9 = StringLiteral_22427/*"oncomplete"*/;
  if ( StringLiteral_22427/*"oncomplete"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v40 = StringLiteral_22427/*"oncomplete"*/;
  }
  else
  {
    v40 = 0;
  }
  if ( LODWORD(v8->max_length) <= 6 )
    goto LABEL_67;
  v8->m_Items[6] = (Il2CppObject *)v40;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[6], v40, v38, v39);
  v9 = StringLiteral_12643/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12643/*"ScrollBarMotionCompleteValue"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_12643/*"ScrollBarMotionCompleteValue"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v43 = StringLiteral_12643/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( LODWORD(v8->max_length) <= 7 )
    goto LABEL_67;
  v8->m_Items[7] = (Il2CppObject *)v43;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[7], v43, v41, v42);
  v9 = StringLiteral_18750/*"easeType"*/;
  if ( StringLiteral_18750/*"easeType"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_18750/*"easeType"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v46 = StringLiteral_18750/*"easeType"*/;
  }
  else
  {
    v46 = 0;
  }
  if ( LODWORD(v8->max_length) <= 8 )
    goto LABEL_67;
  v8->m_Items[8] = (Il2CppObject *)v46;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[8], v46, v44, v45);
  v84 = 17;
  v9 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v84, v47, v48, v49, v50, v51, v52);
  v55 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C32D5C(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
  }
  if ( LODWORD(v8->max_length) <= 9 )
    goto LABEL_67;
  v8->m_Items[9] = v55;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[9], (int32_t)v55, v53, v54);
  v9 = StringLiteral_24067/*"time"*/;
  if ( StringLiteral_24067/*"time"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_24067/*"time"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v58 = StringLiteral_24067/*"time"*/;
  }
  else
  {
    v58 = 0;
  }
  if ( LODWORD(v8->max_length) <= 0xA )
    goto LABEL_67;
  v8->m_Items[10] = (Il2CppObject *)v58;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[10], v58, v56, v57);
  v83 = 1065353216;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v83, v59, v60, v61, v62, v63, v64);
  v67 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C32D5C(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
  }
  if ( LODWORD(v8->max_length) <= 0xB )
    goto LABEL_67;
  v8->m_Items[11] = v67;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[11], (int32_t)v67, v65, v66);
  v9 = StringLiteral_18551/*"delay"*/;
  if ( StringLiteral_18551/*"delay"*/ )
  {
    v9 = sub_1C32D5C(StringLiteral_18551/*"delay"*/, v8->obj.klass->_1.element_class);
    if ( !v9 )
      goto LABEL_68;
    v70 = StringLiteral_18551/*"delay"*/;
  }
  else
  {
    v70 = 0;
  }
  if ( LODWORD(v8->max_length) <= 0xC )
    goto LABEL_67;
  v8->m_Items[12] = (Il2CppObject *)v70;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[12], v70, v68, v69);
  v82 = 0;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v82, v71, v72, v73, v74, v75, v76);
  v79 = (Il2CppObject *)v9;
  if ( v9 )
  {
    v9 = sub_1C32D5C(v9, v8->obj.klass->_1.element_class);
    if ( !v9 )
    {
LABEL_68:
      v81 = sub_1C32EA0(v9);
      sub_1C32D48(v81, 0);
    }
  }
  if ( LODWORD(v8->max_length) <= 0xD )
LABEL_67:
    sub_1C32E84(v9);
  v8->m_Items[13] = v79;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->m_Items[13], (int32_t)v79, v77, v78);
  v80 = iTween__Hash(v8, 0);
  iTween__ValueTo(v4, v80, 0);
}


void BattleResultComponent__ScrollBarMotionCompleteValue(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  BattleResultItemComponent_o *itemResult; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  System_Action_o *v6; // x21

  v2 = this;
  if ( (byte_4C3B1B1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__);
    this = (BattleResultComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C3B1B1 = 1;
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
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)v2, Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__, 0);
  if ( !itemResult )
LABEL_11:
    sub_1C32E7C(this);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v6, 0);
}


void BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4C3B1B0 & 1) == 0 )
  {
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C3B1B0 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1C32E7C(0);
  UIProgressBar__set_value(resultItemScrollBar, value, 0);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63266448(gameObject, 0);
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
  BattleResultComponent_o *v11; // x22
  BattleResultComponent_resultData_o *v12; // x1
  struct BattleResultComponent_resultData_o **p_battleResult; // x25
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  TerminalPramsManager_c *v16; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v19; // x0
  int32_t v20; // w19
  BalanceConfig_c *v21; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v23; // x0
  struct BattleResultComponent_resultData_o *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *freeShopIds; // x0
  BattleResultComponent___c_c *v26; // x8
  BattleResultComponent_o *v27; // x26
  System_Converter_TInput__TOutput__o *_9__39_0; // x19
  Il2CppObject *v29; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_String_array *v33; // x0
  System_String_o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *returnRarePriShopIds; // x0
  BattleResultComponent___c_c *v36; // x8
  BattleResultComponent_o *v37; // x26
  System_Converter_TInput__TOutput__o *_9__39_1; // x19
  Il2CppObject *v39; // x23
  struct BattleResultComponent___c_StaticFields *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_String_array *v43; // x0
  System_String_o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  BattleResultComponent_o **v47; // x29
  struct System_String_o *eventEndTitle; // x1
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct BattleResultComponent_resultData_o *v51; // x8
  struct System_String_o *eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v53; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v55; // x26
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  BattleResultComponent_resultData_o *battleResult; // x8
  BattleResultComponent_o *v59; // x8
  struct BattleResultEventItemComponent_o *eventItemResult; // x9
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x11
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v63; // x12
  BattleResultExpComponent_o *expResult; // x24
  UserGameEntity_o *parentComp; // x27
  UserEquipEntity_o *v66; // x28
  MasterLvRewardInfo_array *v67; // x29
  int64_t maxTurnDamageInBattle; // x19
  int64_t maxTurnDamageRecord; // x23
  int32_t v70; // w25
  struct BattleResultEventItemComponent_o *v71; // x9
  struct System_Threading_CancellationTokenSource_o *v72; // x10
  UserGameEntity_o *v73; // x29
  BattleResultItemComponent_o *v74; // x25
  BattleDropItem_array *v75; // x26
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  int64_t obj_fronttouch; // x20
  int32_t itemResult_high; // w21
  DropUpInfo_array *dropupinfos; // x19
  EventConquestInfo_array *ServantRewardActionComp; // x23
  int32_t firstClearRewardQp; // w24
  struct BattleResultItemComponent_o *v83; // x9
  struct UILabel_o *getQpLabel; // x9
  struct UnityEngine_GameObject_o *mText; // x1
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct BattleResultItemComponent_o *v88; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v90; // x9
  struct System_String_o *v91; // x1
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  __int64 v95; // x5
  __int64 v96; // x6
  __int64 v97; // x7
  struct UIScrollBar_o *resultItemScrollBar; // x8
  Il2CppObject *v99; // x0
  struct BattleResultItemComponent_o *v100; // x8
  Il2CppObject *v101; // x23
  UILabel_o *v102; // x19
  System_String_o *v103; // x0
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  __int64 v107; // x5
  __int64 v108; // x6
  __int64 v109; // x7
  struct BattleResultItemComponent_o *v110; // x8
  struct UIScrollBar_o *v111; // x9
  UILabel_o *v112; // x19
  Il2CppObject *v113; // x0
  BattleResultFriendComponent_o *v114; // x19
  int32_t v115; // w23
  int32_t m_CancellationTokenSource_high; // w24
  int64_t m_CachedPtr; // x25
  int32_t endtargetObject; // w26
  int32_t endtargetObject_high; // w27
  int32_t v120; // w28
  struct BattleResultComponent_resultData_o *v121; // x8
  struct BattleResultComponent_resultData_o *v122; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v124; // x8
  const MethodInfo *v125; // x2
  struct BattleResultComponent_resultData_o *v126; // x8
  const MethodInfo *v127; // x1
  BattleResultComponent_o *v128; // x8
  int v129; // w9
  int v130; // w10
  unsigned int v131; // w10
  unsigned int v132; // w9
  struct BattleInfoData_o *v133; // x9
  struct DeckData_o *v134; // x9
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w9
  __int64 v137; // x20
  char v138; // w22
  BattleResultComponent_o *v139; // x19
  int32_t m_CachedPtr_high; // w23
  int obj_basebg; // w8
  TerminalPramsManager_c *v142; // x0
  BattleResultComponent_o *v143; // x8
  unsigned int v144; // w9
  struct BattleResultComponent_resultData_o *v145; // x8
  struct DeckData_o *myDeck; // x9
  Il2CppObject *Master_object; // x19
  int32_t v148; // w23
  int32_t QuestId; // w24
  const MethodInfo *v150; // x7
  bool v151; // w27
  struct UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x10
  BattleResultComponent_o *v153; // x8
  int v154; // w9
  unsigned int v155; // w9
  int v156; // w19
  BattleResultComponent_resultData_o *v157; // x19
  struct BattleInfoData_o *battle_info; // x8
  BattleResultBondsComponent_o *bondsResult; // x23
  UserServantCollectionEntity_array *oldUserSvtCollection; // x25
  DeckData_o *v161; // x24
  int32_t followerType; // w28
  BattleUserServantData_array *userSvt; // x29
  MethodInfo *methoda; // [xsp+10h] [xbp-F0h]
  UserEventPointEntity_array *FriendIconPrefab; // [xsp+50h] [xbp-B0h]
  UserEventEntity_array *friendResult; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  System_Int32_array *v168; // [xsp+68h] [xbp-98h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+70h] [xbp-90h]
  BattleResultComponent_resultData_array *resultAssetb; // [xsp+78h] [xbp-88h]
  BattleData_o *v172; // [xsp+80h] [xbp-80h]
  struct BattleResultComponent_resultData_o **v173; // [xsp+88h] [xbp-78h]
  int thumb_high; // [xsp+90h] [xbp-70h] BYREF
  int v175; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v177; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = this;
  if ( (byte_4C3B1A9 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&System_Converter_int__string__TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C32C20(&EventInfoUIProgressControl_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&QuestKnockdownResult_TypeInfo);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_BattleResultComponent___c__Set_b__39_0__);
    sub_1C32C20(&Method_BattleResultComponent___c__Set_b__39_1__);
    sub_1C32C20(&BattleResultComponent___c_TypeInfo);
    sub_1C32C20(&StringLiteral_19661/*"freeShopIds"*/);
    sub_1C32C20(&StringLiteral_11130/*"RESULT_QP_PLUS"*/);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    sub_1C32C20(&StringLiteral_23087/*"returnRarePriShopIds"*/);
    this = (BattleResultComponent_o *)sub_1C32C20(&StringLiteral_811/*","*/);
    byte_4C3B1A9 = 1;
  }
  entity = 0;
  if ( !resultList )
    goto LABEL_200;
  if ( !LODWORD(resultList->max_length) )
    goto LABEL_201;
  v12 = resultList->m_Items[0];
  v11->fields.battleResult = v12;
  p_battleResult = &v11->fields.battleResult;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&v11->fields.battleResult,
    (int32_t)v12,
    (int32_t)tutorial,
    (const MethodInfo *)resultAsset);
  v11->fields.eventTutorial = tutorial;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.eventTutorial, (int32_t)tutorial, v14, v15);
  if ( !v11->fields.battleResult )
    goto LABEL_200;
  v172 = bData;
  if ( v11->fields.battleResult->fields.battleResult == 1 )
  {
    if ( !bData )
      goto LABEL_200;
    this = (BattleResultComponent_o *)BattleData__IsNotResetResultDispFlag(bData, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p_battleResult )
        goto LABEL_200;
      (*p_battleResult)->fields.resultDispFlag |= 0x3Fu;
    }
    this = (BattleResultComponent_o *)BattleData__isEventActivityPoint(bData, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C34E06 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C34E06 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v16->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(v172, 0);
      if ( !byte_4C34DF6 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C34DF6 = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      v20 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      bData = v172;
      v19->static_fields->_BeforeEventActivityPoint_k__BackingField = v20;
      v21 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v21->static_fields->UserEventActivityPointMax;
      if ( !byte_4C34E06 )
      {
        sub_1C32C20(&TerminalPramsManager_TypeInfo);
        byte_4C34E06 = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      if ( v23->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v23->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v23);
        if ( !byte_4C34DF6 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C34DF6 = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        v23->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v23->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v23);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
    }
  }
  v24 = *p_battleResult;
  v168 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v11->fields.eventTutorial;
  v173 = &v11->fields.battleResult;
  if ( !*p_battleResult )
    goto LABEL_200;
  freeShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.freeShopIds;
  if ( freeShopIds )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        freeShopIds,
                                        (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
    v26 = BattleResultComponent___c_TypeInfo;
    v27 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v26 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_0 = (System_Converter_TInput__TOutput__o *)v26->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = BattleResultComponent___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v26->static_fields->__9;
      _9__39_0 = (System_Converter_TInput__TOutput__o *)sub_1C32E6C(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_0, v29, Method_BattleResultComponent___c__Set_b__39_0__, 0);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = (struct System_Converter_int__string__o *)_9__39_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v31, v32);
    }
    if ( !v27 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v27,
                                        (System_Converter_T__TOutput__o *)_9__39_0,
                                        (const MethodInfo_30047F0 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_200;
    v33 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
    v34 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, v33, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19661/*"freeShopIds"*/, v34, 0);
    v24 = *v173;
    if ( !*v173 )
      goto LABEL_200;
  }
  returnRarePriShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)v24->fields.returnRarePriShopIds;
  if ( returnRarePriShopIds )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        returnRarePriShopIds,
                                        (const MethodInfo_31214BC *)Method_System_Linq_Enumerable_ToList_int___);
    v36 = BattleResultComponent___c_TypeInfo;
    v37 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v36 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_1 = (System_Converter_TInput__TOutput__o *)v36->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = BattleResultComponent___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_1C32E6C(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_1, v39, Method_BattleResultComponent___c__Set_b__39_1__, 0);
      v40 = BattleResultComponent___c_TypeInfo->static_fields;
      v40->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&v40->__9__39_1, (int32_t)_9__39_1, v41, v42);
    }
    if ( !v37 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v37,
                                        (System_Converter_T__TOutput__o *)_9__39_1,
                                        (const MethodInfo_30047F0 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_200;
    v43 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
    v44 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, v43, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23087/*"returnRarePriShopIds"*/, v44, 0);
  }
  UnityEngine_PlayerPrefs__Save(0);
  v47 = (BattleResultComponent_o **)&v11->fields.battleResult;
  if ( !*v173 )
    goto LABEL_200;
  eventEndTitle = (*v173)->fields.eventEndTitle;
  v11->fields.eventEndTitle = eventEndTitle;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.eventEndTitle, (int32_t)eventEndTitle, v45, v46);
  v51 = v11->fields.battleResult;
  if ( !v51 )
    goto LABEL_200;
  eventEndMessage = v51->fields.eventEndMessage;
  v11->fields.eventEndMessage = eventEndMessage;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.eventEndMessage, (int32_t)eventEndMessage, v49, v50);
  v53 = v11->fields.battleResult;
  if ( !v53 )
    goto LABEL_200;
  isTrialQuestNewRecord = v53->fields.isTrialQuestNewRecord;
  v55 = (QuestKnockdownResult_o *)sub_1C32E6C(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v55, isTrialQuestNewRecord, bData, 0);
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
    battleResult = v11->fields.battleResult;
    if ( !battleResult )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v11->fields.bondsResult;
    if ( !this )
      goto LABEL_200;
    BattleResultBondsComponent__SetMultiBondsResultData(
      (BattleResultBondsComponent_o *)this,
      bData,
      battleResult->fields.oldUserSvtCollection,
      battleResult->fields.friendshipRewardInfos,
      battleResult->fields.followerType,
      resultAsset,
      battleResult->fields.friendshipExpBase,
      battleResult->fields.getJoinSvts,
      battleResult,
      (bool)&dword_0 + 1,
      methoda);
  }
  else
  {
    v145 = *v173;
    if ( !*v173 )
      goto LABEL_200;
    myDeck = v145->fields.myDeck;
    if ( myDeck && myDeck->fields.svts )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v148 = BattleData__get_eventId(bData, 0);
      QuestId = BattleData__getQuestId(bData, 0);
      this = (BattleResultComponent_o *)BattleData__getPhase(bData, 0);
      if ( !Master_object )
        goto LABEL_200;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v148,
                                          QuestId,
                                          (int32_t)this,
                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_200;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0);
        v151 = (unsigned __int8)this & 1;
      }
      else
      {
        v151 = 0;
      }
      v157 = v11->fields.battleResult;
      if ( !v157 )
        goto LABEL_200;
      battle_info = bData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_200;
      bondsResult = v11->fields.bondsResult;
      if ( !bondsResult )
        goto LABEL_200;
      oldUserSvtCollection = v157->fields.oldUserSvtCollection;
      v161 = v157->fields.myDeck;
      followerType = v157->fields.followerType;
      userSvt = battle_info->fields.userSvt;
      BattleResultBondsComponent__InitResultData(
        v11->fields.bondsResult,
        oldUserSvtCollection,
        v157->fields.friendshipRewardInfos,
        resultAsset,
        v157->fields.friendshipExpBase,
        v157->fields.getJoinSvts,
        0,
        v150);
      BattleResultBondsComponent__SetResultDataLocal(
        bondsResult,
        v161,
        oldUserSvtCollection,
        followerType,
        userSvt,
        v157,
        v151,
        bData,
        -1,
        -1,
        methoda);
      v47 = (BattleResultComponent_o **)&v11->fields.battleResult;
    }
    else
    {
      v145->fields.resultDispFlag &= ~1u;
    }
  }
  v59 = *v47;
  if ( !*v47 )
    goto LABEL_200;
  eventItemResult = v59->fields.eventItemResult;
  if ( eventItemResult
    && (m_CancellationTokenSource = eventItemResult->fields.m_CancellationTokenSource) != 0
    && (itemResult = v59->fields.itemResult) != 0
    && (v63 = itemResult->fields.m_CancellationTokenSource) != 0 )
  {
    if ( !(_DWORD)m_CancellationTokenSource || !(_DWORD)v63 )
      goto LABEL_201;
    expResult = v11->fields.expResult;
    parentComp = (UserGameEntity_o *)eventItemResult->fields.parentComp;
    v66 = (UserEquipEntity_o *)itemResult->fields.parentComp;
    v67 = (MasterLvRewardInfo_array *)v59->fields.eventEndTitle;
    maxTurnDamageRecord = bData->fields.maxTurnDamageRecord;
    maxTurnDamageInBattle = bData->fields.maxTurnDamageInBattle;
    v70 = BattleData__getQuestId(bData, 0);
    this = (BattleResultComponent_o *)BattleData__getPhase(bData, 0);
    if ( !expResult )
      goto LABEL_200;
    BattleResultExpComponent__SetResultData(
      expResult,
      parentComp,
      v66,
      v67,
      resultAsset,
      maxTurnDamageInBattle,
      maxTurnDamageRecord,
      v55,
      v70,
      (int32_t)this,
      0);
    v47 = (BattleResultComponent_o **)&v11->fields.battleResult;
    v59 = (BattleResultComponent_o *)*v173;
    if ( !*v173 )
      goto LABEL_200;
  }
  else
  {
    LODWORD(v59[1].fields.bondsResult) &= ~2u;
  }
  v71 = v59->fields.eventItemResult;
  if ( !v71 || (v72 = v71->fields.m_CancellationTokenSource) == 0 )
  {
    LODWORD(v59[1].fields.bondsResult) &= ~4u;
    goto LABEL_91;
  }
  if ( !(_DWORD)v72 )
LABEL_201:
    sub_1C32E84(this);
  this = (BattleResultComponent_o *)bData->fields.quest_ent;
  resultAssetb = resultList;
  if ( !this )
    goto LABEL_200;
  v73 = (UserGameEntity_o *)v71->fields.parentComp;
  v74 = v11->fields.itemResult;
  v75 = (BattleDropItem_array *)v59->fields.eventEndMessage;
  eventId = HIDWORD(v59->fields.m_CachedPtr);
  fsm = (int32_t)v59->fields.fsm;
  fsm_high = HIDWORD(v59->fields.fsm);
  obj_fronttouch = (int64_t)v59[1].fields.obj_fronttouch;
  itemResult_high = HIDWORD(v59[1].fields.itemResult);
  dropupinfos = (DropUpInfo_array *)v59[1].fields.friendResult;
  ServantRewardActionComp = (EventConquestInfo_array *)v59[1].fields.ServantRewardActionComp;
  firstClearRewardQp = (int32_t)v59->fields.obj_basebg;
  FriendIconPrefab = (UserEventPointEntity_array *)v59->fields.FriendIconPrefab;
  friendResult = (UserEventEntity_array *)v59->fields.friendResult;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000000000LL, 0);
  if ( !*v173 )
    goto LABEL_200;
  if ( !v74 )
    goto LABEL_200;
  BattleResultItemComponent__setResultData(
    v74,
    v75,
    fsm,
    fsm_high,
    v73,
    eventId,
    friendResult,
    FriendIconPrefab,
    obj_fronttouch,
    v168,
    itemResult_high,
    dropupinfos,
    ServantRewardActionComp,
    firstClearRewardQp,
    (unsigned __int8)this & 1,
    (*v173)->fields.rewardBonus,
    0);
  bData = v172;
  v47 = (BattleResultComponent_o **)&v11->fields.battleResult;
  resultList = resultAssetb;
  v59 = (BattleResultComponent_o *)*v173;
  if ( !*v173 )
    goto LABEL_200;
LABEL_91:
  if ( v59[1].fields.resultItemScrollBar )
  {
    v83 = v11->fields.itemResult;
    if ( !v83 )
      goto LABEL_200;
    getQpLabel = v83->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_200;
    mText = (struct UnityEngine_GameObject_o *)getQpLabel->fields.mText;
    v59[1].fields.touchGuard = mText;
    sub_1C32BC4((CGThumbnailListItem_o *)&v59[1].fields.touchGuard, (int32_t)mText, v56, v57);
    v88 = v11->fields.itemResult;
    if ( !v88 )
      goto LABEL_200;
    nowQpLabel = v88->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_200;
    v90 = v11->fields.battleResult;
    if ( !v90 )
      goto LABEL_200;
    v91 = nowQpLabel->fields.mText;
    v90->fields.ultimateNowQpText = v91;
    sub_1C32BC4((CGThumbnailListItem_o *)&v90->fields.ultimateNowQpText, (int32_t)v91, v86, v87);
    if ( !*v47 )
      goto LABEL_200;
    resultItemScrollBar = (*v47)[1].fields.resultItemScrollBar;
    if ( !resultItemScrollBar )
      goto LABEL_200;
    v175 = (__int64)resultItemScrollBar->fields.thumb & ~(SLODWORD(resultItemScrollBar->fields.thumb) >> 31);
    v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175, v92, v93, v94, v95, v96, v97);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v99, 0);
    v100 = v11->fields.itemResult;
    if ( !v100 )
      goto LABEL_200;
    v101 = (Il2CppObject *)this;
    v102 = v100->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v103 = LocalizationManager__Get((System_String_o *)StringLiteral_11130/*"RESULT_QP_PLUS"*/, 0);
    this = (BattleResultComponent_o *)System_String__Format(v103, v101, 0);
    if ( !v102 )
      goto LABEL_200;
    UILabel__set_text(v102, (System_String_o *)this, 0);
    v110 = v11->fields.itemResult;
    bData = v172;
    if ( !v110 )
      goto LABEL_200;
    if ( !*v47 )
      goto LABEL_200;
    v111 = (*v47)[1].fields.resultItemScrollBar;
    if ( !v111 )
      goto LABEL_200;
    v112 = v110->fields.nowQpLabel;
    thumb_high = HIDWORD(v111->fields.thumb);
    v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &thumb_high, v104, v105, v106, v107, v108, v109);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25047/*"{0:#,0}"*/, v113, 0);
    if ( !v112 )
      goto LABEL_200;
    UILabel__set_text(v112, (System_String_o *)this, 0);
    this = (BattleResultComponent_o *)v11->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_200;
    v177.fields.r = 0.29804;
    v177.fields.a = 1.0;
    v177.fields.g = 0.29804;
    v177.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v177, 0);
    v59 = *v47;
    if ( !*v47 )
      goto LABEL_200;
  }
  this = (BattleResultComponent_o *)bData->fields.quest_ent;
  if ( !this )
    goto LABEL_200;
  v114 = v11->fields.friendResult;
  v115 = (int32_t)v59[1].fields.m_CancellationTokenSource;
  m_CancellationTokenSource_high = HIDWORD(v59[1].fields.m_CancellationTokenSource);
  m_CachedPtr = v59[1].fields.m_CachedPtr;
  endtargetObject = (int32_t)v59[1].fields.endtargetObject;
  endtargetObject_high = HIDWORD(v59[1].fields.endtargetObject);
  v120 = (int32_t)v59[1].fields.fsm;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000, 0);
  if ( !v114 )
    goto LABEL_200;
  BattleResultFriendComponent__setResultData(
    v114,
    v115,
    m_CancellationTokenSource_high,
    m_CachedPtr,
    endtargetObject,
    endtargetObject_high,
    v120,
    (unsigned __int8)this & 1,
    0);
  v121 = v11->fields.battleResult;
  if ( !v121 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)v11->fields.eventItemResult;
  if ( !this )
    goto LABEL_200;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, void *))this->klass[1]._1.image)(
                                      this,
                                      v121->fields.resultEventRewardInfos,
                                      (unsigned int)v121->fields.eventId,
                                      v121->fields.resultBoostItemRewardInfos,
                                      v121->fields.rewardInfos,
                                      this->klass[1]._1.gc_desc);
  v122 = v11->fields.battleResult;
  if ( !v122 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)v11->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_200;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, void *))this->klass[1]._1.image)(
    this,
    v122->fields.resultDamageRewardInfos,
    (unsigned int)v122->fields.eventId,
    v122->fields.resultBoostItemRewardInfos,
    v122->fields.rewardInfos,
    this->klass[1]._1.gc_desc);
  eventFortificationItemResult = (UnityEngine_Object_o *)v11->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v124 = v11->fields.battleResult;
    if ( !v124 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v11->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_200;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, void *))this->klass[1]._1.image)(
                                        this,
                                        v124->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v124->fields.eventId,
                                        0,
                                        0,
                                        this->klass[1]._1.gc_desc);
    v126 = v11->fields.battleResult;
    if ( !v126 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v11->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_200;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v126->fields.fortificationInfos,
      v125);
  }
  this = *p_eventTutorial;
  if ( !*p_eventTutorial )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleEventTutorial__CheckHasResultPhaseTutorial((BattleEventTutorial_o *)this, 0);
  v128 = *v47;
  if ( !*v47 )
    goto LABEL_200;
  v129 = (int)v128[1].fields.bondsResult;
  v130 = ((unsigned __int8)this & 1) != 0 ? 64 : 0;
  v131 = v129 & 0xFFFFFFBF | v130;
  v132 = (v129 & 0x200) != 0 ? v131 & 0xFFFFFFEF : v131;
  LODWORD(v128[1].fields.bondsResult) = v132;
  v133 = bData->fields.battle_info;
  if ( !v133 )
    goto LABEL_200;
  v134 = v133->fields.myDeck;
  if ( v134 && (svts = v134->fields.svts) != 0 && (max_length = svts->max_length, max_length >= 1) )
  {
    v137 = 0;
    do
    {
      if ( (unsigned int)v137 >= max_length )
        goto LABEL_201;
      this = (BattleResultComponent_o *)svts->m_Items[v137];
      if ( !this )
        goto LABEL_200;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0);
      v138 = (char)this;
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      ++v137;
    }
    while ( (int)v137 < max_length );
    v128 = *v47;
    bData = v172;
    if ( !*v47 )
      goto LABEL_200;
  }
  else
  {
    v138 = 0;
  }
  if ( HIDWORD(v128->fields.m_CachedPtr) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( *v47 && this )
    {
      this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                          (EventProgressValueMaster_o *)this,
                                          HIDWORD((*v47)->fields.m_CachedPtr),
                                          0);
      v139 = this;
      if ( this )
      {
        if ( !*v47 )
          goto LABEL_200;
        m_CachedPtr_high = HIDWORD((*v47)->fields.m_CachedPtr);
        if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
        this = (BattleResultComponent_o *)EventInfoUIProgressControl__GetEventProgressValueSaveData_44630072(
                                            m_CachedPtr_high,
                                            0,
                                            0);
        obj_basebg = (int)v139->fields.obj_basebg;
        LODWORD(v139) = 0;
        if ( (_DWORD)this != obj_basebg )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C342B1 )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            byte_4C342B1 = 1;
          }
          v142 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v142 = TerminalPramsManager_TypeInfo;
          }
          v142->static_fields->_SpotId_k__BackingField = -1;
          TerminalPramsManager__SpotIdSave_SaveData(0);
          LODWORD(v139) = 1;
        }
      }
      goto LABEL_161;
    }
LABEL_200:
    sub_1C32E7C(this);
  }
  LODWORD(v139) = 0;
LABEL_161:
  if ( v138 & 1 | !bData->fields.isRetryable )
    goto LABEL_164;
  this = *v47;
  if ( !*v47 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                                      (BattleResultComponent_resultData_o *)this,
                                      v127);
  if ( (((unsigned int)v139 | (unsigned int)this) & 1) != 0 )
  {
LABEL_164:
    v143 = *v47;
    if ( !*v47 )
      goto LABEL_200;
    v144 = (__int64)v143[1].fields.bondsResult & 0xFFFFF7FF;
  }
  else
  {
    v143 = *v47;
    if ( !*v47 )
      goto LABEL_200;
    v144 = LODWORD(v143[1].fields.bondsResult) | 0x800;
  }
  friendshipUpItemDialogRoot = v143[1].fields.friendshipUpItemDialogRoot;
  LODWORD(v143[1].fields.bondsResult) = v144;
  LODWORD(v143[1].fields.bondsResult) = v144 & 0xFFFFEFFF;
  if ( friendshipUpItemDialogRoot && friendshipUpItemDialogRoot[1].klass )
    LODWORD(v143[1].fields.bondsResult) = v144 | 0x1000;
  this = (BattleResultComponent_o *)BattleData__isBattleResultLoseQuestClear(bData, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleResultComponent_o *)BattleData__isBattleRetreatQuestClear(bData, 0),
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( bData->fields.isItemResultSkip )
    {
      this = (BattleResultComponent_o *)BattleData__IsWarBoard(bData, 0);
      v153 = *v47;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v153 )
          goto LABEL_200;
        v154 = (int)v153[1].fields.bondsResult;
        if ( (v154 & 4) != 0 )
        {
          v155 = v154 | 4;
LABEL_189:
          LODWORD(v153[1].fields.bondsResult) = v155;
          LODWORD(v153[1].fields.bondsResult) = v155 & 0xFFFFFFE7;
          goto LABEL_190;
        }
      }
      else if ( !v153 )
      {
        goto LABEL_200;
      }
      v155 = (__int64)v153[1].fields.bondsResult & 0xFFFFFFFB;
      goto LABEL_189;
    }
  }
LABEL_190:
  if ( !*v47 )
    goto LABEL_200;
  v156 = (int)(*v47)[1].fields.itemResult;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo(resultList, v156 == 1, 0);
}


void BattleResultComponent__SkippAddRewardEffect(BattleResultComponent_o *this, const MethodInfo *method)
{
  this->fields.isAddRewardEffectSkip = 1;
}


void BattleResultComponent__StartAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_c *v3; // x0
  UnityEngine_GameObject_o *touchGuard; // x0
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_4C3B1AD & 1) == 0 )
  {
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    byte_4C3B1AD = 1;
  }
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B1AE & 1) == 0 )
  {
    sub_1C32C20(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
    byte_4C3B1AE = 1;
  }
  v3 = sub_1C32E6C(BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  bool IsUsePopupQuestReward; // w19
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B1BE & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3B1BE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C31A97 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C31A97 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  IsUsePopupQuestReward = TerminalPramsManager__IsUsePopupQuestReward(v2->static_fields->_QuestId_k__BackingField, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
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

  if ( (byte_4C3B1A6 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_10001/*"OpenResult"*/);
    sub_1C32C20(&StringLiteral_10601/*"Performance"*/);
    byte_4C3B1A6 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10601/*"Performance"*/,
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
    sub_1C32E7C(fsm);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10001/*"OpenResult"*/, 0);
}


void BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
        UnityEngine_GameObject_o **prefabObject,
        System_String_o *prefabName,
        AssetData_o *assetData,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v8; // x19
  Il2CppObject *Object_object__51111776; // x21
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v8 = (CGThumbnailListItem_o *)prefabObject;
  if ( (byte_4C3B1CF & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject____78147088);
    prefabObject = (UnityEngine_GameObject_o **)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B1CF = 1;
  }
  if ( !assetData )
    sub_1C32E7C(prefabObject);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              assetData,
                              prefabName,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__51812484(
          Object_object__51111776,
          root,
          (const MethodInfo_3169884 *)Method_UnityEngine_Object_Instantiate_GameObject____78147088);
  v8->klass = (CGThumbnailListItem_c *)v10;
  sub_1C32BC4(v8, (int32_t)v10, v11, v12);
}


void BattleResultComponent___OpenDataLostBattleResetDialog_b__73_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  MissionNotifyManager_o *Instance; // x0
  TerminalPramsManager_c *v6; // x0

  if ( (byte_4C3B1CD & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5455/*"END_PROC"*/);
    byte_4C3B1CD = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C342B1 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C342B1 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0);
  if ( !byte_4C34BD0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34BD0 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0);
  if ( !byte_4C34DFC )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C34DFC = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  Instance = (MissionNotifyManager_o *)this->fields.fsm;
  if ( !Instance )
LABEL_20:
    sub_1C32E7C(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5455/*"END_PROC"*/, 0);
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

  if ( (byte_4C3B1CE & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleRetryConfirmComponent_BaseDialogOpen__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B1CE = 1;
  }
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0, 0) )
  {
    v4 = this->fields.friendshipUpItemSelectDialog;
    battleRetryConfirmComponent = (Il2CppObject *)this->fields.battleRetryConfirmComponent;
    v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v6, battleRetryConfirmComponent, Method_BattleRetryConfirmComponent_BaseDialogOpen__, 0);
    if ( !v4 )
      sub_1C32E7C(v7);
    FriendshipUpItemSelectDialog__Open(v4, v6, 0);
  }
}


void BattleResultComponent___OpenRetryQuest_b__65_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3B1CB & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleResultComponent__OpenRetryQuest_b__65_1__);
    sub_1C32C20(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C3B1CB = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C32E6C(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenRetryQuest_b__65_1__,
    0);
  if ( !battleRetryConfirmComponent )
    sub_1C32E7C(v5);
  BattleRetryConfirmComponent__Open(battleRetryConfirmComponent, v4, 0);
}


void BattleResultComponent___OpenRetryQuest_b__65_1(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C3B1CC & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_13060/*"StartQuestClearReward"*/);
    byte_4C3B1CC = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13060/*"StartQuestClearReward"*/, 0.3, 0);
}


void BattleResultComponent___ScrollBarMotionCompleteValue_b__50_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3B1CA & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5455/*"END_PROC"*/);
    byte_4C3B1CA = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5455/*"END_PROC"*/, 0);
}


void BattleResultComponent__checkNew(BattleResultComponent_o *this, int32_t resultType, const MethodInfo *method)
{
  __int64 v5; // x20
  BattleResultItemComponent_o *itemResult; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BattleResultComponent_c *v9; // x0
  const MethodInfo **v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  BattleDropItem_o *NewDrop; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v18; // w0
  Il2CppObject *Instance; // x21
  System_Action_o *v20; // x22
  __int64 *v21; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C3B1B7 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C32C20(&Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__);
    sub_1C32C20(&BattleResultComponent___c__DisplayClass58_0_TypeInfo);
    sub_1C32C20(&StringLiteral_9627/*"OPEN"*/);
    sub_1C32C20(&StringLiteral_9263/*"NEXT"*/);
    byte_4C3B1B7 = 1;
  }
  v5 = sub_1C32E6C(BattleResultComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8);
  v9 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v9);
  *(_QWORD *)(v5 + 16) = 0;
  v10 = (const MethodInfo **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), 0, v11, v12);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_35;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, 0);
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
      v18 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0);
      v13 = 0;
      if ( !v18 )
        goto LABEL_19;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_35;
LABEL_17:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, v13);
LABEL_18:
      v13 = (const MethodInfo *)NewDrop;
LABEL_19:
      *v10 = v13;
      sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v13, v15, v16);
LABEL_20:
      if ( !*v10 )
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
          UnityEngine_Object__DestroyImmediate_71223828(gameObject, 0);
          *p_ServantRewardActionComp = 0;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v25, v26);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_35;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0, 0);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v21 = &StringLiteral_9263/*"NEXT"*/;
          goto LABEL_34;
        }
LABEL_35:
        sub_1C32E7C(itemResult);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v20 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)v5,
        Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__,
        0);
      if ( !Instance )
        goto LABEL_35;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v20, 0);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_35;
      v21 = &StringLiteral_9627/*"OPEN"*/;
LABEL_34:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v21, 0);
      return;
    default:
      goto LABEL_20;
  }
}


void BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3B1A7 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_12311/*"START_Begin"*/);
    byte_4C3B1A7 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12311/*"START_Begin"*/, 0);
}


void BattleResultComponent__endCloseEndEventMessage(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3B1AC & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B1AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C3B1B8 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_5455/*"END_PROC"*/);
    byte_4C3B1B8 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C32E7C(0);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5455/*"END_PROC"*/, 0);
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
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C3B1BB & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4C3B1BB = 1;
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
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v11, v12);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0),
        *p_ServantRewardActionComp = Prefab,
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, (int32_t)Prefab, v15, v16),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0)
    || (ServantRewardAction__SetupCommandCode_37095316(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0) )
  {
LABEL_14:
    sub_1C32E7C(transform);
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
  Il2CppObject *Entity; // x0
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  Il2CppObject *v15; // x23
  UnityEngine_Object_o *gameObject; // x25
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x25
  ServantRewardAction_o *Prefab; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  ServantRewardAction_o *v23; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v26; // w25
  Il2CppObject v27; // q1
  int64_t v28; // x22
  Il2CppObject v29; // q1
  int64_t v30; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16

  if ( (byte_4C3B1BA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C32C20(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C32C20(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4C3B1BA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3398D94 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v15 = Entity;
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
    UnityEngine_Object__Destroy_71223640(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v17, v18);
  }
  v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v19 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v19,
             (UnityEngine_Transform_o *)Instance,
             1,
             0);
  *p_ServantRewardActionComp = Prefab;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, (int32_t)Prefab, v21, v22);
  if ( !v15 )
    goto LABEL_27;
  v23 = *p_ServantRewardActionComp;
  klass = v15[5].klass;
  monitor = v15[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = klass;
  *(_QWORD *)&v34.fields.fakeValue = monitor;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(v34, 0);
  if ( isDoEffect )
  {
    v27 = v15[2];
    *(Il2CppObject *)&v33.fields.currentCryptoKey = v15[1];
    *(Il2CppObject *)&v33.fields.fakeValue = v27;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v32 = v33;
    v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v32, 0);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v15[6],
                                  0);
    if ( v23 )
    {
      ServantRewardAction__Setup(v23, v26, v28, (int32_t)Instance, 1, isNew, 1, 10, 0);
      goto LABEL_25;
    }
LABEL_27:
    sub_1C32E7C(Instance);
  }
  v29 = v15[2];
  *(Il2CppObject *)&v33.fields.currentCryptoKey = v15[1];
  *(Il2CppObject *)&v33.fields.fakeValue = v29;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v31 = v33;
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48891308(&v31, 0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48887784(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v15[6],
                                0);
  if ( !v23 )
    goto LABEL_27;
  ServantRewardAction__Setup(v23, v26, v30, (int32_t)Instance, 1, 1, 1, 2, 0);
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
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0);
}


void BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0);
}


void BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1C32E7C(0);
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
  UnityEngine_Component_o *Instance; // x0
  __int64 *v11; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C3B1B9 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_BattleResultComponent_endNewView__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&StringLiteral_9627/*"OPEN"*/);
    sub_1C32C20(&StringLiteral_9263/*"NEXT"*/);
    byte_4C3B1B9 = 1;
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
      UnityEngine_Object__DestroyImmediate_71223828(gameObject, 0);
      *p_ServantRewardActionComp = 0;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v15, v16);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v11 = &StringLiteral_9263/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C32E7C(Instance);
  }
  v7 = Gift__IsEventSvtGet(type, 0);
  v8 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0);
  BattleResultComponent__openNewServantView(this, userSvtId, v7, v7, v8, v9);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v11 = &StringLiteral_9627/*"OPEN"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v11, 0);
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
  const MethodInfo *v6; // x3
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4C3B1D3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C32C20(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3B1D3 = 1;
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
      sub_1C32E7C(_4__this);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, method);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForSeconds_o *)sub_1C32E6C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v4, 0.1, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
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
  const MethodInfo *v3; // x3

  if ( (byte_4C3B1D0 & 1) == 0 )
  {
    sub_1C32C20(&BattleResultComponent___c_TypeInfo);
    byte_4C3B1D0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleResultComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C3B1D1 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    this = (BattleResultComponent___c__DisplayClass58_0_o *)sub_1C32C20(&Method_BattleResultComponent_endNewView__);
    byte_4C3B1D1 = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsCommandCode_40328188(newDrop->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.newDrop;
    if ( v4 )
    {
      userSvtId = v4->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v7 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(v7, _4__this, Method_BattleResultComponent_endNewView__, 0);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v7, v8);
        return;
      }
    }
LABEL_12:
    sub_1C32E7C(this);
  }
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsEventSvtGet_40327844(v9->fields.type, 0);
  v10 = v2->fields.newDrop;
  if ( !v10 )
    goto LABEL_12;
  v11 = v10->fields.userSvtId;
  v12 = (Il2CppObject *)v2->fields.__4__this;
  v13 = (char)this;
  v14 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
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
  const MethodInfo *v3; // x3
  void *_4__this; // x0
  const MethodInfo *v7; // x4
  struct BattleResultComponent_o *v8; // x8
  UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x20
  AssetData_o *cashedFriendshipUpItemAssetData; // x21
  struct BattleResultComponent_o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct BattleResultComponent_o *v14; // x8
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  struct BattleResultComponent_o *v16; // x8
  struct System_Action_o *callback; // x8
  UnityEngine_GameObject_o *prefabObject; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3B1D2 & 1) == 0 )
  {
    sub_1C32C20(&BattleResultComponent_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_6878/*"FriendshipUpItemSelectDialog"*/);
    byte_4C3B1D2 = 1;
  }
  prefabObject = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  *((_QWORD *)_4__this + 26) = assetData;
  sub_1C32BC4((CGThumbnailListItem_o *)((char *)_4__this + 208), (int32_t)assetData, (int32_t)method, v3);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_18;
  cashedFriendshipUpItemAssetData = v8->fields.cashedFriendshipUpItemAssetData;
  friendshipUpItemDialogRoot = v8->fields.friendshipUpItemDialogRoot;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
    &prefabObject,
    (System_String_o *)StringLiteral_6878/*"FriendshipUpItemSelectDialog"*/,
    cashedFriendshipUpItemAssetData,
    friendshipUpItemDialogRoot,
    v7);
  _4__this = prefabObject;
  if ( !prefabObject )
    goto LABEL_18;
  v11 = this->fields.__4__this;
  _4__this = UnityEngine_GameObject__GetComponent_object_(
               prefabObject,
               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
  if ( !v11 )
    goto LABEL_18;
  v11->fields.friendshipUpItemSelectDialog = (struct FriendshipUpItemSelectDialog_o *)_4__this;
  sub_1C32BC4((CGThumbnailListItem_o *)&v11->fields.friendshipUpItemSelectDialog, (int32_t)_4__this, v12, v13);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_18;
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)v14->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = (void *)UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0, 0);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
  {
    v16 = this->fields.__4__this;
    if ( v16 )
    {
      _4__this = v16->fields.friendshipUpItemSelectDialog;
      if ( _4__this )
      {
        FriendshipUpItemSelectDialog__Init((FriendshipUpItemSelectDialog_o *)_4__this, 0);
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_1C32E7C(_4__this);
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
      sub_1C32E84(this);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1C32E7C(this);
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