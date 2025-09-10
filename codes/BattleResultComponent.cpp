void BattleResultComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2AAAA & 1) == 0 )
  {
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_10558/*"PartyOrganization/FriendshipUpItem"*/);
    byte_4C2AAAA = 1;
  }
  BattleResultComponent_TypeInfo->static_fields->FriendshipUpItemLoadAssetPath = (struct System_String_o *)StringLiteral_10558/*"PartyOrganization/FriendshipUpItem"*/;
  sub_1C2D434((CGThumbnailListItem_o *)BattleResultComponent_TypeInfo->static_fields, StringLiteral_10558/*"PartyOrganization/FriendshipUpItem"*/, v1, v2);
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

  if ( (byte_4C2AA96 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3490/*"CLOSE"*/);
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    byte_4C2AA96 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                method),
        (fsm = this->fields.fsm) == 0) )
  {
    sub_1C2D6EC(eventItemResult, method);
  }
  v5 = &StringLiteral_9257/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v5 = &StringLiteral_3490/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0);
}


void BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2AA93 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AA93 = 1;
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
    sub_1C2D6EC(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_c *v3; // x0
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  if ( (byte_4C2AA9D & 1) == 0 )
  {
    sub_1C2D490(&AndroidBackKeyManager_TypeInfo);
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&StringLiteral_23248/*"sendFsmEvent"*/);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AA9D = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1C2D6EC(Instance, v5);
  UnityEngine_GameObject__SendMessage_71145492(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23248/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5447/*"END_PROC"*/,
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

  if ( (byte_4C2AAA0 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    byte_4C2AAA0 = 1;
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
      sub_1C2D6EC(0, v8);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9257/*"NEXT"*/, 0);
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
  const MethodInfo *v15; // x3
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_4C2AA86 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA86 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v7 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4C20DA1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
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
    UnityEngine_Object__Destroy_71163704(v13, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v14, v15);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1C2D434((CGThumbnailListItem_o *)p_screenTouch, (int32_t)Component_object, v18, v19),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 14)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_36:
    sub_1C2D6EC(gameObject, v6);
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

  if ( (byte_4C2AAA5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12231/*"SKIP"*/);
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    byte_4C2AAA5 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
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
  v9 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 )
LABEL_30:
    sub_1C2D6EC(fsm, v3);
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
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9257/*"NEXT"*/, 0);
    }
  }
LABEL_28:
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_30;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12231/*"SKIP"*/, 0);
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
  const MethodInfo *v9; // x3
  __int64 v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x22
  BattleResultComponent_c *v14; // x0
  System_String_o *FriendshipUpItemLoadAssetPath; // x20
  BattleResultComponent_c *v16; // x0
  System_String_o *v17; // x20
  AssetLoader_LoadEndDataHandler_o *v18; // x21

  if ( (byte_4C2AAA8 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__);
    sub_1C2D490(&BattleResultComponent___c__DisplayClass75_0_TypeInfo);
    byte_4C2AAA8 = 1;
  }
  v5 = sub_1C2D6DC(BattleResultComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = callback;
  v10 = v5 + 24;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callback, v11, v12);
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
  v14 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v14 = BattleResultComponent_TypeInfo;
  }
  FriendshipUpItemLoadAssetPath = v14->static_fields->FriendshipUpItemLoadAssetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  isExistAssetStorage = (FriendshipUpItemSelectDialog_o *)AssetManager__isExistAssetStorage(
                                                            FriendshipUpItemLoadAssetPath,
                                                            0);
  if ( ((unsigned __int8)isExistAssetStorage & 1) == 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v10 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v10 + 64LL),
        *(_QWORD *)(*(_QWORD *)v10 + 40LL));
      return;
    }
LABEL_21:
    sub_1C2D6EC(isExistAssetStorage, v7);
  }
  v16 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v16 = BattleResultComponent_TypeInfo;
  }
  v17 = v16->static_fields->FriendshipUpItemLoadAssetPath;
  v18 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v18,
    (Il2CppObject *)v5,
    Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v17, v18, 1, 0);
}


void BattleResultComponent__OnDestroy(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AA85 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    byte_4C2AA85 = 1;
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
    sub_1C2D6EC(obj_fronttouch, method);
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
  if ( (byte_4C2AAA6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__);
    sub_1C2D490(&DataLostResetManager_TypeInfo);
    this = (BattleResultComponent_o *)sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AAA6 = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_1C2D6EC(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  if ( (byte_4C2AA97 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_12231/*"SKIP"*/);
    byte_4C2AA97 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C2D6EC(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12231/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenEventFortificationItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_4C2AAA4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_12231/*"SKIP"*/);
    byte_4C2AAA4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C2D6EC(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12231/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_4C2AA95 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_12231/*"SKIP"*/);
    byte_4C2AA95 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C2D6EC(Instance, v4);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12231/*"SKIP"*/, 0);
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
    sub_1C2D6EC(obj_fronttouch, method);
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
  bool IsQuestClear_40102980; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v14; // w22
  Il2CppObject *v15; // x21
  TerminalPramsManager_c *v16; // x0
  const MethodInfo *v17; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C2AAA1 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C2D490(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C2D490(&MapControl_QuestInfo_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AAA1 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v9 = (MapControl_QuestInfo_o *)sub_1C2D6DC(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v9, 0);
  questId = v9->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40102980 = CondType__IsQuestClear_40102980(questId, -1, 0, 0);
  fixedVal = -1;
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21463 = 1;
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
                            !IsQuestClear_40102980,
                            &fixedVal,
                            0);
  v9->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0);
  v9->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v14 = fixedVal;
  else
    v14 = ActConsume;
  v15 = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23DE1 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23DE1 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C2D6EC(Instance, v5);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v17);
}


void BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleResultComponent_c *v4; // x0

  v2 = this;
  if ( (byte_4C2AA94 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleResultComponent_o *)sub_1C2D490(&StringLiteral_13057/*"StartQuestClearReward"*/);
    byte_4C2AA94 = 1;
  }
  battleResult = v2->fields.battleResult;
  if ( !battleResult )
    goto LABEL_14;
  if ( (battleResult->fields.resultDispFlag & 0x800) != 0 )
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_13057/*"StartQuestClearReward"*/, 0.3, 0);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  this = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0),
        (this = (BattleResultComponent_o *)v2->fields.obj_fronttouch) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (BattleResultComponent_o *)v2->fields.friendResult) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2AAA7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__);
    byte_4C2AAA7 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__,
    0);
  if ( !battleRetryConfirmComponent )
    sub_1C2D6EC(v5, v6);
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

  if ( (byte_4C2AA8C & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultComponent_endCloseEndEventMessage__);
    sub_1C2D490(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AA8C = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v7 = (CommonUI_o *)Instance;
    v8 = (NotificationDialog_ClickDelegate_o *)sub_1C2D6DC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_31170012(
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
    sub_1C2D6EC(resultSprite, method);
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

  if ( (byte_4C2AA9E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultComponent__OpenRetryQuest_b__65_0__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AA9E = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(battleRetryConfirmComponent->fields.doubleContentsPrefab->fields.m_CachedPtr);
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
  }
  if ( !LODWORD(battleRetryConfirmComponent->fields.tripleContentsNoneUseItemPrefab) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CancellationTokenSource = (int32_t)battleRetryConfirmComponent->fields.doubleContentsPrefab->fields.m_CancellationTokenSource;
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4C216DE = 1;
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
    v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent__OpenRetryQuest_b__65_0__, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C21464 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      byte_4C21464 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v9->static_fields->_QuestId_k__BackingField;
    if ( !byte_4C21463 )
    {
      sub_1C2D490(&TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
      byte_4C21463 = 1;
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
                                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
    sub_1C2D6EC(battleRetryConfirmComponent, v3);
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

  if ( (byte_4C2AA8B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultComponent_OpenTutorial__);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AA8B = 1;
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
    v5 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0);
    if ( v4 )
    {
      BattleEventTutorial__callResult(v4, v5, 0);
      return;
    }
LABEL_23:
    sub_1C2D6EC(eventTutorial, method);
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
      v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
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

  if ( (byte_4C2AAA2 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    sub_1C2D490(&BattleSetupInfo_TypeInfo);
    sub_1C2D490(&RandomLimitCountManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AAA2 = 1;
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
  if ( !byte_4C216DE )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C216DE = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C21464 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_4C21463 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4C21463 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v5->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BattleSetupInfo_o *)sub_1C2D6DC(BattleSetupInfo_TypeInfo);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C2D6EC(Instance, v11);
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
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2AAA9 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    byte_4C2AAA9 = 1;
  }
  cashedFriendshipUpItemAssetData = this->fields.cashedFriendshipUpItemAssetData;
  p_cashedFriendshipUpItemAssetData = (CGThumbnailListItem_o *)&this->fields.cashedFriendshipUpItemAssetData;
  v4 = cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40313100(v4, 0);
    p_cashedFriendshipUpItemAssetData->klass = 0;
    sub_1C2D434(p_cashedFriendshipUpItemAssetData, 0, v6, v7);
  }
}


void BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_4C2AA89 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AA89 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0, 0) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0), (v5 = this->fields.screenTouch) == 0) )
      sub_1C2D6EC(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0);
  }
}


void BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  if ( (byte_4C2AAA3 & 1) == 0 )
  {
    sub_1C2D490(&BattlePerformance_TypeInfo);
    byte_4C2AAA3 = 1;
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
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  System_Object_array *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x21
  const MethodInfo *v17; // x3
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x21
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x21
  const MethodInfo *v33; // x3
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x21
  const MethodInfo *v39; // x3
  __int64 v40; // x2
  __int64 v41; // x3
  __int64 v42; // x4
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x21
  System_Collections_Hashtable_o *v45; // x0
  __int64 v46; // x0
  int v47; // [xsp+Ch] [xbp-44h] BYREF
  int v48; // [xsp+10h] [xbp-40h] BYREF
  int v49; // [xsp+14h] [xbp-3Ch] BYREF
  int v50; // [xsp+18h] [xbp-38h] BYREF
  int v51; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C2AA90 & 1) == 0 )
  {
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_12640/*"ScrollBarMotionCompleteValue"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_18545/*"delay"*/);
    sub_1C2D490(&StringLiteral_12641/*"ScrollBarMotionUpdateValue"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_18741/*"easeType"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AA90 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63205768(gameObject, 0);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v5 = sub_1C2D538(object___TypeInfo, 14);
  if ( !v5 )
    sub_1C2D6EC(0, v6);
  v9 = (System_Object_array *)v5;
  v10 = StringLiteral_19677/*"from"*/;
  if ( StringLiteral_19677/*"from"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_19677/*"from"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_19677/*"from"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( !LODWORD(v9->max_length) )
    goto LABEL_67;
  v9->m_Items[0] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)v9->m_Items, v11, v7, v8);
  v51 = 0;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v51, v12, v13, v14);
  v16 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C2D5CC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
  }
  if ( LODWORD(v9->max_length) <= 1 )
    goto LABEL_67;
  v9->m_Items[1] = v16;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[1], (int32_t)v16, v7, v15);
  v10 = StringLiteral_24088/*"to"*/;
  if ( StringLiteral_24088/*"to"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_24088/*"to"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_24088/*"to"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v9->max_length) <= 2 )
    goto LABEL_67;
  v9->m_Items[2] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[2], v11, v7, v17);
  v50 = 1065353216;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v50, v18, v19, v20);
  v22 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C2D5CC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
  }
  if ( LODWORD(v9->max_length) <= 3 )
    goto LABEL_67;
  v9->m_Items[3] = v22;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[3], (int32_t)v22, v7, v21);
  v10 = StringLiteral_22418/*"onupdate"*/;
  if ( StringLiteral_22418/*"onupdate"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_22418/*"onupdate"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v9->max_length) <= 4 )
    goto LABEL_67;
  v9->m_Items[4] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[4], v11, v7, v23);
  v10 = StringLiteral_12641/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12641/*"ScrollBarMotionUpdateValue"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_12641/*"ScrollBarMotionUpdateValue"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_12641/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v9->max_length) <= 5 )
    goto LABEL_67;
  v9->m_Items[5] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[5], v11, v7, v24);
  v10 = StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v9->max_length) <= 6 )
    goto LABEL_67;
  v9->m_Items[6] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[6], v11, v7, v25);
  v10 = StringLiteral_12640/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12640/*"ScrollBarMotionCompleteValue"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_12640/*"ScrollBarMotionCompleteValue"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_12640/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v9->max_length) <= 7 )
    goto LABEL_67;
  v9->m_Items[7] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[7], v11, v7, v26);
  v10 = StringLiteral_18741/*"easeType"*/;
  if ( StringLiteral_18741/*"easeType"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_18741/*"easeType"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_18741/*"easeType"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v9->max_length) <= 8 )
    goto LABEL_67;
  v9->m_Items[8] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[8], v11, v7, v27);
  v49 = 17;
  v10 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v49, v28, v29, v30);
  v32 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C2D5CC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
  }
  if ( LODWORD(v9->max_length) <= 9 )
    goto LABEL_67;
  v9->m_Items[9] = v32;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[9], (int32_t)v32, v7, v31);
  v10 = StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_24049/*"time"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v9->max_length) <= 0xA )
    goto LABEL_67;
  v9->m_Items[10] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[10], v11, v7, v33);
  v48 = 1065353216;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v48, v34, v35, v36);
  v38 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C2D5CC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
  }
  if ( LODWORD(v9->max_length) <= 0xB )
    goto LABEL_67;
  v9->m_Items[11] = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[11], (int32_t)v38, v7, v37);
  v10 = StringLiteral_18545/*"delay"*/;
  if ( StringLiteral_18545/*"delay"*/ )
  {
    v10 = sub_1C2D5CC(StringLiteral_18545/*"delay"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_18545/*"delay"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v9->max_length) <= 0xC )
    goto LABEL_67;
  v9->m_Items[12] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[12], v11, v7, v39);
  v47 = 0;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v47, v40, v41, v42);
  v44 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1C2D5CC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_68:
      v46 = sub_1C2D710(v10);
      sub_1C2D5B8(v46, 0);
    }
  }
  if ( LODWORD(v9->max_length) <= 0xD )
LABEL_67:
    sub_1C2D6F4(v10, v11, v7);
  v9->m_Items[13] = v44;
  sub_1C2D434((CGThumbnailListItem_o *)&v9->m_Items[13], (int32_t)v44, v7, v43);
  v45 = iTween__Hash(v9, 0);
  iTween__ValueTo(v4, v45, 0);
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
  if ( (byte_4C2AA92 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__);
    this = (BattleResultComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4C2AA92 = 1;
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
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)v2, Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__, 0);
  if ( !itemResult )
LABEL_11:
    sub_1C2D6EC(this, method);
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

  if ( (byte_4C2AA91 & 1) == 0 )
  {
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2AA91 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1C2D6EC(0, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_63205768(gameObject, 0);
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
  AssetData_o *v9; // x23
  BattleResultComponent_resultData_array *v11; // x21
  BattleResultComponent_o *v12; // x22
  struct BattleResultComponent_resultData_o *v13; // x1
  BattleResultComponent_o **p_battleResult; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  TerminalPramsManager_c *v17; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v20; // x0
  int32_t v21; // w19
  BalanceConfig_c *v22; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v24; // x0
  BattleResultComponent_o *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *eventItemResult; // x0
  BattleResultComponent___c_c *v27; // x8
  BattleResultComponent_o *v28; // x26
  System_Converter_TInput__TOutput__o *_9__39_0; // x19
  BattleResultComponent_resultData_array *v30; // x24
  AssetData_o *v31; // x21
  Il2CppObject *v32; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_array *v36; // x0
  System_String_o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventDamageItemResult; // x0
  BattleResultComponent___c_c *v39; // x8
  BattleResultComponent_o *v40; // x26
  System_Converter_TInput__TOutput__o *_9__39_1; // x19
  BattleResultComponent_resultData_array *v42; // x24
  AssetData_o *v43; // x21
  Il2CppObject *v44; // x23
  struct BattleResultComponent___c_StaticFields *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  System_String_array *v48; // x0
  System_String_o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_String_o *m_CancellationTokenSource; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct BattleResultComponent_resultData_o *v55; // x8
  BattleData_o *v56; // x29
  struct System_String_o *eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v58; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v60; // x26
  const MethodInfo *v61; // x3
  BattleResultComponent_resultData_o *v62; // x8
  BattleResultComponent_o *v63; // x8
  struct BattleResultEventItemComponent_o *v64; // x9
  struct System_Threading_CancellationTokenSource_o *v65; // x11
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v67; // x12
  AssetData_o *v68; // x21
  BattleResultExpComponent_o *expResult; // x24
  UserGameEntity_o *parentComp; // x27
  UserEquipEntity_o *v71; // x28
  MasterLvRewardInfo_array *eventEndTitle; // x29
  int64_t maxTurnDamageInBattle; // x19
  int64_t maxTurnDamageRecord; // x23
  int32_t v75; // w25
  struct BattleResultEventItemComponent_o *v76; // x9
  struct System_Threading_CancellationTokenSource_o *v77; // x10
  UserGameEntity_o *v78; // x29
  BattleResultItemComponent_o *v79; // x25
  BattleDropItem_array *v80; // x26
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  int64_t obj_fronttouch; // x20
  int32_t itemResult_high; // w21
  DropUpInfo_array *dropupinfos; // x19
  EventConquestInfo_array *ServantRewardActionComp; // x23
  int32_t firstClearRewardQp; // w24
  struct BattleResultItemComponent_o *v88; // x9
  struct UILabel_o *getQpLabel; // x9
  struct UnityEngine_GameObject_o *mText; // x1
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct BattleResultItemComponent_o *v93; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v95; // x9
  struct System_String_o *v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  __int64 v99; // x4
  struct UIScrollBar_o *resultItemScrollBar; // x8
  Il2CppObject *v101; // x0
  struct BattleResultItemComponent_o *v102; // x8
  Il2CppObject *v103; // x23
  UILabel_o *v104; // x19
  System_String_o *v105; // x0
  __int64 v106; // x2
  __int64 v107; // x3
  __int64 v108; // x4
  struct BattleResultItemComponent_o *v109; // x8
  struct BattleResultAddRewardBonus_o *rewardBonus; // x9
  UILabel_o *v111; // x19
  Il2CppObject *v112; // x0
  BattleResultFriendComponent_o *v113; // x19
  int32_t v114; // w23
  int32_t m_CancellationTokenSource_high; // w24
  int64_t m_CachedPtr; // x25
  int32_t endtargetObject; // w26
  int32_t endtargetObject_high; // w27
  int32_t v119; // w28
  struct BattleResultComponent_resultData_o *v120; // x8
  struct BattleResultComponent_resultData_o *v121; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v123; // x8
  const MethodInfo *v124; // x2
  struct BattleResultComponent_resultData_o *v125; // x8
  BattleResultComponent_o *v126; // x8
  int v127; // w9
  int v128; // w10
  unsigned int v129; // w10
  unsigned int v130; // w9
  struct BattleInfoData_o *v131; // x9
  struct DeckData_o *myDeck; // x9
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w9
  __int64 v135; // x20
  char v136; // w22
  BattleResultComponent_o *v137; // x19
  int32_t m_CachedPtr_high; // w23
  int obj_basebg; // w8
  TerminalPramsManager_c *v140; // x0
  BattleResultComponent_o *v141; // x8
  unsigned int v142; // w9
  BattleResultComponent_o *v143; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x9
  BattleResultComponent_resultData_array *v145; // x25
  AssetData_o *v146; // x21
  Il2CppObject *Master_object; // x19
  int32_t v148; // w23
  int32_t QuestId; // w24
  bool v150; // w8
  struct UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x10
  BattleResultComponent_o *v152; // x8
  int v153; // w9
  unsigned int v154; // w9
  int v155; // w19
  BattleResultComponent_resultData_o *v156; // x9
  struct BattleInfoData_o *battle_info; // x10
  BattleResultComponent_resultData_o *battleResult; // [xsp+0h] [xbp-100h]
  MethodInfo *methoda; // [xsp+10h] [xbp-F0h]
  const MethodInfo *v160; // [xsp+40h] [xbp-C0h]
  UserEventPointEntity_array *FriendIconPrefab; // [xsp+50h] [xbp-B0h]
  UserEventEntity_array *friendResult; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  BattleResultComponent_resultData_array *v164; // [xsp+68h] [xbp-98h]
  BattleResultComponent_resultData_array *v165; // [xsp+68h] [xbp-98h]
  System_Int32_array *v166; // [xsp+70h] [xbp-90h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+78h] [xbp-88h]
  BattleData_o *v168; // [xsp+80h] [xbp-80h]
  struct BattleResultComponent_resultData_o **v169; // [xsp+88h] [xbp-78h]
  int32_t befUserGameQp; // [xsp+90h] [xbp-70h] BYREF
  int v171; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v173; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v9 = resultAsset;
  v11 = resultList;
  v12 = this;
  if ( (byte_4C2AA8A & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&System_Converter_int__string__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C2D490(&EventInfoUIProgressControl_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&QuestKnockdownResult_TypeInfo);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&Method_BattleResultComponent___c__Set_b__39_0__);
    sub_1C2D490(&Method_BattleResultComponent___c__Set_b__39_1__);
    sub_1C2D490(&BattleResultComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_19649/*"freeShopIds"*/);
    sub_1C2D490(&StringLiteral_11124/*"RESULT_QP_PLUS"*/);
    sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    sub_1C2D490(&StringLiteral_23070/*"returnRarePriShopIds"*/);
    this = (BattleResultComponent_o *)sub_1C2D490(&StringLiteral_811/*","*/);
    byte_4C2AA8A = 1;
  }
  entity = 0;
  if ( !v11 )
    goto LABEL_200;
  if ( !LODWORD(v11->max_length) )
    goto LABEL_201;
  v13 = v11->m_Items[0];
  v12->fields.battleResult = v13;
  p_battleResult = (BattleResultComponent_o **)&v12->fields.battleResult;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&v12->fields.battleResult,
    (int32_t)v13,
    (int32_t)tutorial,
    (const MethodInfo *)resultAsset);
  v12->fields.eventTutorial = tutorial;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.eventTutorial, (int32_t)tutorial, v15, v16);
  if ( !v12->fields.battleResult )
    goto LABEL_200;
  v169 = &v12->fields.battleResult;
  if ( v12->fields.battleResult->fields.battleResult == 1 )
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
      if ( !byte_4C24732 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24732 = 1;
      }
      v17 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v17 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v17->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0);
      if ( !byte_4C24722 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24722 = 1;
      }
      v20 = TerminalPramsManager_TypeInfo;
      v21 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v20 = TerminalPramsManager_TypeInfo;
      }
      p_battleResult = (BattleResultComponent_o **)&v12->fields.battleResult;
      v20->static_fields->_BeforeEventActivityPoint_k__BackingField = v21;
      v22 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v22->static_fields->UserEventActivityPointMax;
      if ( !byte_4C24732 )
      {
        sub_1C2D490(&TerminalPramsManager_TypeInfo);
        byte_4C24732 = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      if ( v24->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v24->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v24);
        if ( !byte_4C24722 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C24722 = 1;
        }
        v24 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v24 = TerminalPramsManager_TypeInfo;
        }
        v24->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v24->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v24);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
    }
  }
  v25 = *p_battleResult;
  v166 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v12->fields.eventTutorial;
  v168 = bData;
  if ( !*p_battleResult )
    goto LABEL_200;
  eventItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v25[1].fields.eventItemResult;
  if ( eventItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventItemResult,
                                        (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
    v27 = BattleResultComponent___c_TypeInfo;
    v28 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v27 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_0 = (System_Converter_TInput__TOutput__o *)v27->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      v30 = v11;
      v31 = v9;
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = BattleResultComponent___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v27->static_fields->__9;
      _9__39_0 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_0, v32, Method_BattleResultComponent___c__Set_b__39_0__, 0);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = (struct System_Converter_int__string__o *)_9__39_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v34, v35);
      v9 = v31;
      v11 = v30;
    }
    if ( !v28 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v28,
                                        (System_Converter_T__TOutput__o *)_9__39_0,
                                        (const MethodInfo_2FF5D50 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_200;
    v36 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
    v37 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, v36, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19649/*"freeShopIds"*/, v37, 0);
    v25 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
  }
  eventDamageItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v25[1].fields.eventDamageItemResult;
  if ( eventDamageItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventDamageItemResult,
                                        (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
    v39 = BattleResultComponent___c_TypeInfo;
    v40 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v39 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_1 = (System_Converter_TInput__TOutput__o *)v39->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      v42 = v11;
      v43 = v9;
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = BattleResultComponent___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v39->static_fields->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_1C2D6DC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_1, v44, Method_BattleResultComponent___c__Set_b__39_1__, 0);
      v45 = BattleResultComponent___c_TypeInfo->static_fields;
      v45->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_1C2D434((CGThumbnailListItem_o *)&v45->__9__39_1, (int32_t)_9__39_1, v46, v47);
      v9 = v43;
      v11 = v42;
    }
    if ( !v40 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v40,
                                        (System_Converter_T__TOutput__o *)_9__39_1,
                                        (const MethodInfo_2FF5D50 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_200;
    v48 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
    v49 = System_String__Join((System_String_o *)StringLiteral_811/*","*/, v48, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23070/*"returnRarePriShopIds"*/, v49, 0);
  }
  UnityEngine_PlayerPrefs__Save(0);
  if ( !*p_battleResult )
    goto LABEL_200;
  m_CancellationTokenSource = (struct System_String_o *)(*p_battleResult)->fields.m_CancellationTokenSource;
  v12->fields.eventEndTitle = m_CancellationTokenSource;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.eventEndTitle, (int32_t)m_CancellationTokenSource, v50, v51);
  v55 = v12->fields.battleResult;
  v56 = bData;
  if ( !v55 )
    goto LABEL_200;
  eventEndMessage = v55->fields.eventEndMessage;
  v12->fields.eventEndMessage = eventEndMessage;
  sub_1C2D434((CGThumbnailListItem_o *)&v12->fields.eventEndMessage, (int32_t)eventEndMessage, v53, v54);
  v58 = v12->fields.battleResult;
  if ( !v58 )
    goto LABEL_200;
  isTrialQuestNewRecord = v58->fields.isTrialQuestNewRecord;
  v60 = (QuestKnockdownResult_o *)sub_1C2D6DC(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v60, isTrialQuestNewRecord, bData, 0);
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
    v62 = v12->fields.battleResult;
    if ( !v62 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v12->fields.bondsResult;
    if ( !this )
      goto LABEL_200;
    BattleResultBondsComponent__SetMultiBondsResultData(
      (BattleResultBondsComponent_o *)this,
      bData,
      v62->fields.oldUserSvtCollection,
      v62->fields.friendshipRewardInfos,
      v62->fields.followerType,
      v9,
      v62->fields.friendshipExpBase,
      v62->fields.getJoinSvts,
      v62,
      (bool)&dword_0 + 1,
      0);
  }
  else
  {
    v143 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
    bondsResult = v143->fields.bondsResult;
    if ( bondsResult && bondsResult->fields.m_CachedPtr )
    {
      v145 = v11;
      v146 = v9;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v148 = BattleData__get_eventId(v168, 0);
      QuestId = BattleData__getQuestId(v168, 0);
      this = (BattleResultComponent_o *)BattleData__getPhase(v168, 0);
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
        v9 = v146;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0);
        v150 = (unsigned __int8)this & 1;
      }
      else
      {
        v150 = 0;
        v9 = v146;
      }
      v156 = v12->fields.battleResult;
      v11 = v145;
      if ( !v156 )
        goto LABEL_200;
      battle_info = v168->fields.battle_info;
      if ( !battle_info )
        goto LABEL_200;
      this = (BattleResultComponent_o *)v12->fields.bondsResult;
      if ( !this )
        goto LABEL_200;
      BattleResultBondsComponent__setResultData(
        (BattleResultBondsComponent_o *)this,
        v156->fields.myDeck,
        v156->fields.oldUserSvtCollection,
        v156->fields.friendshipRewardInfos,
        v156->fields.followerType,
        v9,
        battle_info->fields.userSvt,
        v156->fields.friendshipExpBase,
        v156->fields.getJoinSvts,
        v156,
        v150,
        v168,
        0);
    }
    else
    {
      LODWORD(v143[1].fields.bondsResult) &= ~1u;
    }
  }
  v63 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_200;
  v64 = v63->fields.eventItemResult;
  if ( v64
    && (v65 = v64->fields.m_CancellationTokenSource) != 0
    && (itemResult = v63->fields.itemResult) != 0
    && (v67 = itemResult->fields.m_CancellationTokenSource) != 0 )
  {
    v164 = v11;
    if ( !(_DWORD)v65 || !(_DWORD)v67 )
      goto LABEL_201;
    v68 = v9;
    expResult = v12->fields.expResult;
    parentComp = (UserGameEntity_o *)v64->fields.parentComp;
    v71 = (UserEquipEntity_o *)itemResult->fields.parentComp;
    eventEndTitle = (MasterLvRewardInfo_array *)v63->fields.eventEndTitle;
    maxTurnDamageRecord = v168->fields.maxTurnDamageRecord;
    maxTurnDamageInBattle = v168->fields.maxTurnDamageInBattle;
    v75 = BattleData__getQuestId(v168, 0);
    this = (BattleResultComponent_o *)BattleData__getPhase(v168, 0);
    if ( !expResult )
      goto LABEL_200;
    BattleResultExpComponent__SetResultData(
      expResult,
      parentComp,
      v71,
      eventEndTitle,
      v68,
      maxTurnDamageInBattle,
      maxTurnDamageRecord,
      v60,
      v75,
      (int32_t)this,
      methoda);
    v56 = v168;
    p_battleResult = (BattleResultComponent_o **)&v12->fields.battleResult;
    v11 = v164;
    v63 = (BattleResultComponent_o *)*v169;
    if ( !*v169 )
      goto LABEL_200;
  }
  else
  {
    LODWORD(v63[1].fields.bondsResult) &= ~2u;
  }
  v76 = v63->fields.eventItemResult;
  if ( !v76 || (v77 = v76->fields.m_CancellationTokenSource) == 0 )
  {
    LODWORD(v63[1].fields.bondsResult) &= ~4u;
    goto LABEL_91;
  }
  if ( !(_DWORD)v77 )
LABEL_201:
    sub_1C2D6F4(this, resultList, tutorial);
  this = (BattleResultComponent_o *)v56->fields.quest_ent;
  v165 = v11;
  if ( !this )
    goto LABEL_200;
  v78 = (UserGameEntity_o *)v76->fields.parentComp;
  v79 = v12->fields.itemResult;
  v80 = (BattleDropItem_array *)v63->fields.eventEndMessage;
  eventId = HIDWORD(v63->fields.m_CachedPtr);
  fsm = (int32_t)v63->fields.fsm;
  fsm_high = HIDWORD(v63->fields.fsm);
  obj_fronttouch = (int64_t)v63[1].fields.obj_fronttouch;
  itemResult_high = HIDWORD(v63[1].fields.itemResult);
  dropupinfos = (DropUpInfo_array *)v63[1].fields.friendResult;
  ServantRewardActionComp = (EventConquestInfo_array *)v63[1].fields.ServantRewardActionComp;
  firstClearRewardQp = (int32_t)v63->fields.obj_basebg;
  FriendIconPrefab = (UserEventPointEntity_array *)v63->fields.FriendIconPrefab;
  friendResult = (UserEventEntity_array *)v63->fields.friendResult;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000000000LL, 0);
  if ( !*v169 )
    goto LABEL_200;
  if ( !v79 )
    goto LABEL_200;
  BattleResultItemComponent__setResultData(
    v79,
    v80,
    fsm,
    fsm_high,
    v78,
    eventId,
    friendResult,
    FriendIconPrefab,
    obj_fronttouch,
    v166,
    itemResult_high,
    dropupinfos,
    ServantRewardActionComp,
    firstClearRewardQp,
    (unsigned __int8)this & 1,
    (*v169)->fields.rewardBonus,
    v160);
  v56 = v168;
  p_battleResult = (BattleResultComponent_o **)&v12->fields.battleResult;
  v11 = v165;
  v63 = (BattleResultComponent_o *)*v169;
  if ( !*v169 )
    goto LABEL_200;
LABEL_91:
  if ( v63[1].fields.resultItemScrollBar )
  {
    v88 = v12->fields.itemResult;
    if ( !v88 )
      goto LABEL_200;
    getQpLabel = v88->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_200;
    mText = (struct UnityEngine_GameObject_o *)getQpLabel->fields.mText;
    v63[1].fields.touchGuard = mText;
    sub_1C2D434((CGThumbnailListItem_o *)&v63[1].fields.touchGuard, (int32_t)mText, (int32_t)tutorial, v61);
    v93 = v12->fields.itemResult;
    if ( !v93 )
      goto LABEL_200;
    nowQpLabel = v93->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_200;
    v95 = v12->fields.battleResult;
    if ( !v95 )
      goto LABEL_200;
    v96 = nowQpLabel->fields.mText;
    v95->fields.ultimateNowQpText = v96;
    sub_1C2D434((CGThumbnailListItem_o *)&v95->fields.ultimateNowQpText, (int32_t)v96, v91, v92);
    if ( !*p_battleResult )
      goto LABEL_200;
    resultItemScrollBar = (*p_battleResult)[1].fields.resultItemScrollBar;
    if ( !resultItemScrollBar )
      goto LABEL_200;
    v171 = (__int64)resultItemScrollBar->fields.thumb & ~(SLODWORD(resultItemScrollBar->fields.thumb) >> 31);
    v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171, v97, v98, v99);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v101, 0);
    v102 = v12->fields.itemResult;
    if ( !v102 )
      goto LABEL_200;
    v103 = (Il2CppObject *)this;
    v104 = v102->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v105 = LocalizationManager__Get((System_String_o *)StringLiteral_11124/*"RESULT_QP_PLUS"*/, 0);
    this = (BattleResultComponent_o *)System_String__Format(v105, v103, 0);
    if ( !v104 )
      goto LABEL_200;
    UILabel__set_text(v104, (System_String_o *)this, 0);
    v109 = v12->fields.itemResult;
    p_battleResult = (BattleResultComponent_o **)&v12->fields.battleResult;
    if ( !v109 )
      goto LABEL_200;
    if ( !*v169 )
      goto LABEL_200;
    rewardBonus = (*v169)->fields.rewardBonus;
    if ( !rewardBonus )
      goto LABEL_200;
    v111 = v109->fields.nowQpLabel;
    befUserGameQp = rewardBonus->fields.befUserGameQp;
    v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &befUserGameQp, v106, v107, v108);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v112, 0);
    if ( !v111 )
      goto LABEL_200;
    UILabel__set_text(v111, (System_String_o *)this, 0);
    this = (BattleResultComponent_o *)v12->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_200;
    v173.fields.r = 0.29804;
    v173.fields.a = 1.0;
    v173.fields.g = 0.29804;
    v173.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v173, 0);
    v63 = (BattleResultComponent_o *)*v169;
    if ( !*v169 )
      goto LABEL_200;
  }
  this = (BattleResultComponent_o *)v56->fields.quest_ent;
  if ( !this )
    goto LABEL_200;
  v113 = v12->fields.friendResult;
  v114 = (int32_t)v63[1].fields.m_CancellationTokenSource;
  m_CancellationTokenSource_high = HIDWORD(v63[1].fields.m_CancellationTokenSource);
  m_CachedPtr = v63[1].fields.m_CachedPtr;
  endtargetObject = (int32_t)v63[1].fields.endtargetObject;
  endtargetObject_high = HIDWORD(v63[1].fields.endtargetObject);
  v119 = (int32_t)v63[1].fields.fsm;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000, 0);
  if ( !v113 )
    goto LABEL_200;
  BattleResultFriendComponent__setResultData(
    v113,
    v114,
    m_CancellationTokenSource_high,
    m_CachedPtr,
    endtargetObject,
    endtargetObject_high,
    v119,
    (unsigned __int8)this & 1,
    (const MethodInfo *)battleResult);
  v120 = v12->fields.battleResult;
  if ( !v120 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)v12->fields.eventItemResult;
  if ( !this )
    goto LABEL_200;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, void *))this->klass[1]._1.image)(
                                      this,
                                      v120->fields.resultEventRewardInfos,
                                      (unsigned int)v120->fields.eventId,
                                      v120->fields.resultBoostItemRewardInfos,
                                      v120->fields.rewardInfos,
                                      this->klass[1]._1.gc_desc);
  v121 = v12->fields.battleResult;
  if ( !v121 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)v12->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_200;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, void *))this->klass[1]._1.image)(
    this,
    v121->fields.resultDamageRewardInfos,
    (unsigned int)v121->fields.eventId,
    v121->fields.resultBoostItemRewardInfos,
    v121->fields.rewardInfos,
    this->klass[1]._1.gc_desc);
  eventFortificationItemResult = (UnityEngine_Object_o *)v12->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v123 = v12->fields.battleResult;
    if ( !v123 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v12->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_200;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, void *))this->klass[1]._1.image)(
                                        this,
                                        v123->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v123->fields.eventId,
                                        0,
                                        0,
                                        this->klass[1]._1.gc_desc);
    v125 = v12->fields.battleResult;
    if ( !v125 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v12->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_200;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v125->fields.fortificationInfos,
      v124);
  }
  this = *p_eventTutorial;
  if ( !*p_eventTutorial )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleEventTutorial__CheckHasResultPhaseTutorial((BattleEventTutorial_o *)this, 0);
  v126 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_200;
  v127 = (int)v126[1].fields.bondsResult;
  v128 = ((unsigned __int8)this & 1) != 0 ? 64 : 0;
  v129 = v127 & 0xFFFFFFBF | v128;
  v130 = (v127 & 0x200) != 0 ? v129 & 0xFFFFFFEF : v129;
  LODWORD(v126[1].fields.bondsResult) = v130;
  v131 = v56->fields.battle_info;
  if ( !v131 )
LABEL_200:
    sub_1C2D6EC(this, resultList);
  myDeck = v131->fields.myDeck;
  if ( myDeck && (svts = myDeck->fields.svts) != 0 && (max_length = svts->max_length, max_length >= 1) )
  {
    v135 = 0;
    do
    {
      if ( (unsigned int)v135 >= max_length )
        goto LABEL_201;
      this = (BattleResultComponent_o *)svts->m_Items[v135];
      if ( !this )
        goto LABEL_200;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0);
      v136 = (char)this;
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      ++v135;
    }
    while ( (int)v135 < max_length );
    p_battleResult = (BattleResultComponent_o **)v169;
    v126 = (BattleResultComponent_o *)*v169;
    if ( !*v169 )
      goto LABEL_200;
  }
  else
  {
    v136 = 0;
  }
  if ( HIDWORD(v126->fields.m_CachedPtr) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_200;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        HIDWORD((*p_battleResult)->fields.m_CachedPtr),
                                        0);
    v137 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_200;
      m_CachedPtr_high = HIDWORD((*p_battleResult)->fields.m_CachedPtr);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      this = (BattleResultComponent_o *)EventInfoUIProgressControl__GetEventProgressValueSaveData_44493936(
                                          m_CachedPtr_high,
                                          0,
                                          0);
      obj_basebg = (int)v137->fields.obj_basebg;
      LODWORD(v137) = 0;
      if ( (_DWORD)this != obj_basebg )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C23BE6 )
        {
          sub_1C2D490(&TerminalPramsManager_TypeInfo);
          byte_4C23BE6 = 1;
        }
        v140 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v140 = TerminalPramsManager_TypeInfo;
        }
        v140->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0);
        LODWORD(v137) = 1;
      }
    }
  }
  else
  {
    LODWORD(v137) = 0;
  }
  if ( v136 & 1 | !v56->fields.isRetryable )
    goto LABEL_164;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                                      (BattleResultComponent_resultData_o *)this,
                                      (const MethodInfo *)resultList);
  if ( (((unsigned int)v137 | (unsigned int)this) & 1) != 0 )
  {
LABEL_164:
    v141 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
    v142 = (__int64)v141[1].fields.bondsResult & 0xFFFFF7FF;
  }
  else
  {
    v141 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
    v142 = LODWORD(v141[1].fields.bondsResult) | 0x800;
  }
  friendshipUpItemDialogRoot = v141[1].fields.friendshipUpItemDialogRoot;
  LODWORD(v141[1].fields.bondsResult) = v142;
  LODWORD(v141[1].fields.bondsResult) = v142 & 0xFFFFEFFF;
  if ( friendshipUpItemDialogRoot && friendshipUpItemDialogRoot[1].klass )
    LODWORD(v141[1].fields.bondsResult) = v142 | 0x1000;
  this = (BattleResultComponent_o *)BattleData__isBattleResultLoseQuestClear(v56, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleResultComponent_o *)BattleData__isBattleRetreatQuestClear(v56, 0), ((unsigned __int8)this & 1) != 0) )
  {
    if ( v56->fields.isItemResultSkip )
    {
      this = (BattleResultComponent_o *)BattleData__IsWarBoard(v56, 0);
      v152 = *p_battleResult;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v152 )
          goto LABEL_200;
        v153 = (int)v152[1].fields.bondsResult;
        if ( (v153 & 4) != 0 )
        {
          v154 = v153 | 4;
LABEL_189:
          LODWORD(v152[1].fields.bondsResult) = v154;
          LODWORD(v152[1].fields.bondsResult) = v154 & 0xFFFFFFE7;
          goto LABEL_190;
        }
      }
      else if ( !v152 )
      {
        goto LABEL_200;
      }
      v154 = (__int64)v152[1].fields.bondsResult & 0xFFFFFFFB;
      goto LABEL_189;
    }
  }
LABEL_190:
  if ( !*p_battleResult )
    goto LABEL_200;
  v155 = (int)(*p_battleResult)[1].fields.itemResult;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo(v11, v155 == 1, 0);
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

  if ( (byte_4C2AA8E & 1) == 0 )
  {
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    byte_4C2AA8E = 1;
  }
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2AA8F & 1) == 0 )
  {
    sub_1C2D490(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
    byte_4C2AA8F = 1;
  }
  v3 = sub_1C2D6DC(BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  bool IsUsePopupQuestReward; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4C2AA9F & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2AA9F = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C21464 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C21464 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  IsUsePopupQuestReward = TerminalPramsManager__IsUsePopupQuestReward(v2->static_fields->_QuestId_k__BackingField, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v5);
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

  if ( (byte_4C2AA87 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_9996/*"OpenResult"*/);
    sub_1C2D490(&StringLiteral_10595/*"Performance"*/);
    byte_4C2AA87 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10595/*"Performance"*/,
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
    sub_1C2D6EC(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9996/*"OpenResult"*/, 0);
}


void BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
        UnityEngine_GameObject_o **prefabObject,
        System_String_o *prefabName,
        AssetData_o *assetData,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *v8; // x19
  Il2CppObject *Object_object__51051712; // x21
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v8 = (CGThumbnailListItem_o *)prefabObject;
  if ( (byte_4C2AAB0 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject____78081576);
    prefabObject = (UnityEngine_GameObject_o **)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AAB0 = 1;
  }
  if ( !assetData )
    sub_1C2D6EC(prefabObject, prefabName);
  Object_object__51051712 = AssetData__GetObject_object__51051712(
                              assetData,
                              prefabName,
                              (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__51752420(
          Object_object__51051712,
          root,
          (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_GameObject____78081576);
  v8->klass = (CGThumbnailListItem_c *)v10;
  sub_1C2D434(v8, (int32_t)v10, v11, v12);
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

  if ( (byte_4C2AAAE & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AAAE = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C23BE6 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C23BE6 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0);
  if ( !byte_4C244FC )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C244FC = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0);
  if ( !byte_4C24728 )
  {
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C24728 = 1;
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
    sub_1C2D6EC(Instance, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
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

  if ( (byte_4C2AAAF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleRetryConfirmComponent_BaseDialogOpen__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AAAF = 1;
  }
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0, 0) )
  {
    v4 = this->fields.friendshipUpItemSelectDialog;
    battleRetryConfirmComponent = (Il2CppObject *)this->fields.battleRetryConfirmComponent;
    v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v6, battleRetryConfirmComponent, Method_BattleRetryConfirmComponent_BaseDialogOpen__, 0);
    if ( !v4 )
      sub_1C2D6EC(v7, v8);
    FriendshipUpItemSelectDialog__Open(v4, v6, 0);
  }
}


void BattleResultComponent___OpenRetryQuest_b__65_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C2AAAC & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleResultComponent__OpenRetryQuest_b__65_1__);
    sub_1C2D490(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4C2AAAC = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C2D6DC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenRetryQuest_b__65_1__,
    0);
  if ( !battleRetryConfirmComponent )
    sub_1C2D6EC(v5, v6);
  BattleRetryConfirmComponent__Open(battleRetryConfirmComponent, v4, 0);
}


void BattleResultComponent___OpenRetryQuest_b__65_1(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AAAD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13057/*"StartQuestClearReward"*/);
    byte_4C2AAAD = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13057/*"StartQuestClearReward"*/, 0.3, 0);
}


void BattleResultComponent___ScrollBarMotionCompleteValue_b__50_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C2AAAB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AAAB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
}


void BattleResultComponent__checkNew(BattleResultComponent_o *this, int32_t resultType, const MethodInfo *method)
{
  __int64 v5; // x20
  BattleResultItemComponent_o *itemResult; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleResultComponent_c *v10; // x0
  const MethodInfo **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
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

  if ( (byte_4C2AA98 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C2D490(&Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__);
    sub_1C2D490(&BattleResultComponent___c__DisplayClass58_0_TypeInfo);
    sub_1C2D490(&StringLiteral_9622/*"OPEN"*/);
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    byte_4C2AA98 = 1;
  }
  v5 = sub_1C2D6DC(BattleResultComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  v10 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v10);
  *(_QWORD *)(v5 + 16) = 0;
  v11 = (const MethodInfo **)(v5 + 16);
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), 0, v12, v13);
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
      v18 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0);
      v7 = 0;
      if ( !v18 )
        goto LABEL_19;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_35;
LABEL_17:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, v7);
LABEL_18:
      v7 = (const MethodInfo *)NewDrop;
LABEL_19:
      *v11 = v7;
      sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v7, v15, v16);
LABEL_20:
      if ( !*v11 )
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
          UnityEngine_Object__DestroyImmediate_71163892(gameObject, 0);
          *p_ServantRewardActionComp = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v25, v26);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_35;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0, 0);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v21 = &StringLiteral_9257/*"NEXT"*/;
          goto LABEL_34;
        }
LABEL_35:
        sub_1C2D6EC(itemResult, v7);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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
      v21 = &StringLiteral_9622/*"OPEN"*/;
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

  if ( (byte_4C2AA88 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12308/*"START_Begin"*/);
    byte_4C2AA88 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12308/*"START_Begin"*/, 0);
}


void BattleResultComponent__endCloseEndEventMessage(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C2AA8D & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AA8D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C2AA99 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5447/*"END_PROC"*/);
    byte_4C2AA99 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C2D6EC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5447/*"END_PROC"*/, 0);
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
  const MethodInfo *v13; // x3
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C2AA9C & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4C2AA9C = 1;
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
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v12, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0),
        *p_ServantRewardActionComp = Prefab,
        sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, (int32_t)Prefab, v16, v17),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0)
    || (ServantRewardAction__SetupCommandCode_36976972(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0) )
  {
LABEL_14:
    sub_1C2D6EC(transform, v9);
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
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x25
  ServantRewardAction_o *Prefab; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  ServantRewardAction_o *v24; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v27; // w25
  Il2CppObject v28; // q1
  int64_t v29; // x22
  Il2CppObject v30; // q1
  int64_t v31; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C2AA9B & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4C2AA9B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    UnityEngine_Object__Destroy_71163704(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v18, v19);
  }
  v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v20 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v20,
             (UnityEngine_Transform_o *)Instance,
             1,
             0);
  *p_ServantRewardActionComp = Prefab;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, (int32_t)Prefab, v22, v23);
  if ( !v16 )
    goto LABEL_27;
  v24 = *p_ServantRewardActionComp;
  klass = v16[5].klass;
  monitor = v16[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = klass;
  *(_QWORD *)&v35.fields.fakeValue = monitor;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v35, 0);
  if ( isDoEffect )
  {
    v28 = v16[2];
    *(Il2CppObject *)&v34.fields.currentCryptoKey = v16[1];
    *(Il2CppObject *)&v34.fields.fakeValue = v28;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v33 = v34;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v33, 0);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[6],
                                  0);
    if ( v24 )
    {
      ServantRewardAction__Setup(v24, v27, v29, (int32_t)Instance, 1, isNew, 1, 10, 0);
      goto LABEL_25;
    }
LABEL_27:
    sub_1C2D6EC(Instance, v12);
  }
  v30 = v16[2];
  *(Il2CppObject *)&v34.fields.currentCryptoKey = v16[1];
  *(Il2CppObject *)&v34.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v34;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v32, 0);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[6],
                                0);
  if ( !v24 )
    goto LABEL_27;
  ServantRewardAction__Setup(v24, v27, v31, (int32_t)Instance, 1, 1, 1, 2, 0);
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
    sub_1C2D6EC(0, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0);
}


void BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1C2D6EC(0, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0);
}


void BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1C2D6EC(0, flg);
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
  const MethodInfo *v17; // x3

  if ( (byte_4C2AA9A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleResultComponent_endNewView__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&StringLiteral_9622/*"OPEN"*/);
    sub_1C2D490(&StringLiteral_9257/*"NEXT"*/);
    byte_4C2AA9A = 1;
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
      UnityEngine_Object__DestroyImmediate_71163892(gameObject, 0);
      *p_ServantRewardActionComp = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.ServantRewardActionComp, 0, v16, v17);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v12 = &StringLiteral_9257/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C2D6EC(Instance, v10);
  }
  v7 = Gift__IsEventSvtGet(type, 0);
  v8 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0);
  BattleResultComponent__openNewServantView(this, userSvtId, v7, v7, v8, v9);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v12 = &StringLiteral_9622/*"OPEN"*/;
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
  const MethodInfo *v6; // x3
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4C2AAB4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C2AAB4 = 1;
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
      sub_1C2D6EC(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, method);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v4, 0.1, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C2AAB1 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultComponent___c_TypeInfo);
    byte_4C2AAB1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleResultComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C2AAB2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    this = (BattleResultComponent___c__DisplayClass58_0_o *)sub_1C2D490(&Method_BattleResultComponent_endNewView__);
    byte_4C2AAB2 = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsCommandCode_40205960(newDrop->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.newDrop;
    if ( v4 )
    {
      userSvtId = v4->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v7 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v7, _4__this, Method_BattleResultComponent_endNewView__, 0);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v7, v8);
        return;
      }
    }
LABEL_12:
    sub_1C2D6EC(this, method);
  }
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsEventSvtGet_40205616(v9->fields.type, 0);
  v10 = v2->fields.newDrop;
  if ( !v10 )
    goto LABEL_12;
  v11 = v10->fields.userSvtId;
  v12 = (Il2CppObject *)v2->fields.__4__this;
  v13 = (char)this;
  v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
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

  if ( (byte_4C2AAB3 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultComponent_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_6873/*"FriendshipUpItemSelectDialog"*/);
    byte_4C2AAB3 = 1;
  }
  prefabObject = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  *((_QWORD *)_4__this + 26) = assetData;
  sub_1C2D434((CGThumbnailListItem_o *)((char *)_4__this + 208), (int32_t)assetData, (int32_t)method, v3);
  v8 = this->fields.__4__this;
  if ( !v8 )
    goto LABEL_18;
  cashedFriendshipUpItemAssetData = v8->fields.cashedFriendshipUpItemAssetData;
  friendshipUpItemDialogRoot = v8->fields.friendshipUpItemDialogRoot;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
    &prefabObject,
    (System_String_o *)StringLiteral_6873/*"FriendshipUpItemSelectDialog"*/,
    cashedFriendshipUpItemAssetData,
    friendshipUpItemDialogRoot,
    v7);
  _4__this = prefabObject;
  if ( !prefabObject )
    goto LABEL_18;
  v11 = this->fields.__4__this;
  _4__this = UnityEngine_GameObject__GetComponent_object_(
               prefabObject,
               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
  if ( !v11 )
    goto LABEL_18;
  v11->fields.friendshipUpItemSelectDialog = (struct FriendshipUpItemSelectDialog_o *)_4__this;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->fields.friendshipUpItemSelectDialog, (int32_t)_4__this, v12, v13);
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
    sub_1C2D6EC(_4__this, assetData);
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
  __int64 v2; // x2
  struct GetSvts_array *getJoinSvts; // x10
  int max_length; // w8
  __int64 v5; // x9
  GetSvts_o **m_Items; // x10
  GetSvts_o *v7; // x11
  _BOOL4 isNew; // w11

  getJoinSvts = this->fields.getJoinSvts;
  if ( !getJoinSvts )
    return 0;
  max_length = getJoinSvts->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0;
  m_Items = getJoinSvts->m_Items;
  do
  {
    if ( (unsigned int)v5 >= max_length )
      sub_1C2D6F4(this, method, v2);
    v7 = m_Items[v5];
    if ( !v7 )
      sub_1C2D6EC(this, method);
    isNew = v7->fields.isNew;
    if ( isNew )
      break;
    ++v5;
  }
  while ( (int)v5 < max_length );
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