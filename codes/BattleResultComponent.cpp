void BattleResultComponent___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_593C22D & 1) == 0 )
  {
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_10989/*"PartyOrganization/FriendshipUpItem"*/);
    byte_593C22D = 1;
  }
  v7 = StringLiteral_10989/*"PartyOrganization/FriendshipUpItem"*/;
  BattleResultComponent_TypeInfo->static_fields->FriendshipUpItemLoadAssetPath = (struct System_String_o *)StringLiteral_10989/*"PartyOrganization/FriendshipUpItem"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleResultComponent_TypeInfo->static_fields,
    v7,
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
  bool Items; // w8
  __int64 *v5; // x8

  if ( (byte_593C218 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3634/*"CLOSE"*/);
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    byte_593C218 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult )
    goto LABEL_10;
  Items = BattleResultEventItemComponent__isGetItems(eventItemResult, method);
  eventItemResult = (BattleResultEventItemComponent_o *)this->fields.fsm;
  if ( !Items )
  {
    if ( eventItemResult )
    {
      v5 = &StringLiteral_3634/*"CLOSE"*/;
      goto LABEL_9;
    }
LABEL_10:
    sub_21FFECC(eventItemResult, method);
  }
  if ( !eventItemResult )
    goto LABEL_10;
  v5 = &StringLiteral_9636/*"NEXT"*/;
LABEL_9:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventItemResult, (System_String_o *)*v5, 0);
}


void BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593C215 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C215 = 1;
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
    sub_21FFECC(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
}


void BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_c *v3; // x0
  int v4; // w9
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  __int64 v9; // x1
  OtherUserServantLimitCountManager_c *v10; // x0

  if ( (byte_593C21F & 1) == 0 )
  {
    sub_21FFC50(&AndroidBackKeyManager_TypeInfo);
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&StringLiteral_24460/*"sendFsmEvent"*/);
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C21F = 1;
  }
  v3 = BattleResultComponent_TypeInfo;
  v4 = *(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  ServantAssetLoadManager__EndRetryTransition(Instance, 0);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0, 0) )
  {
    Instance = (ServantAssetLoadManager_o *)this->fields.battleRetryConfirmComponent;
    if ( !Instance )
      goto LABEL_21;
    BattleRetryConfirmComponent__Close((BattleRetryConfirmComponent_o *)Instance, 0);
  }
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v6);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v9);
  if ( !byte_5932E91 )
  {
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5932E91 = 1;
  }
  v10 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v9);
    v10 = OtherUserServantLimitCountManager_TypeInfo;
  }
  v10->static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 0;
  OtherUserServantLimitCountManager__Clear(0);
  Instance = (ServantAssetLoadManager_o *)this->fields.endtargetObject;
  if ( !Instance )
LABEL_21:
    sub_21FFECC(Instance, v6);
  UnityEngine_GameObject__SendMessage_83224784(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_24460/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5645/*"END_PROC"*/,
    0);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_593C223 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    byte_593C223 = 1;
  }
  v7 = BattleResultComponent_TypeInfo;
  if ( !*(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo, isDecide);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v7);
  if ( isDecide )
  {
    BattleResultComponent__OpenFollowerSceneForRetry(this, boostId, v9);
  }
  else
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_21FFECC(0, v8);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9636/*"NEXT"*/, 0);
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
  __int64 v8; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  __int64 v15; // x1
  UnityEngine_Object_o *v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_593C208 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C208 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  v7 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_5931940 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
  BattleResultFriendComponent__Init((BattleResultFriendComponent_o *)gameObject, releasePerformanceObject, v10);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.battleRetryConfirmComponent;
    if ( !gameObject )
      goto LABEL_36;
    BattleRetryConfirmComponent__Init((BattleRetryConfirmComponent_o *)gameObject, 0);
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_36;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    UnityEngine_Object__Destroy_83246496(v16, 0);
    *p_ServantRewardActionComp = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.ServantRewardActionComp,
      0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)p_screenTouch,
          (int32_t)Component_object,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 14)) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0 )
  {
LABEL_36:
    sub_21FFECC(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v3; // w8
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  PlayMakerFSM_o *fsm; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v9; // w20
  Il2CppObject *v10; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593C228 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_12728/*"SKIP"*/);
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    byte_593C228 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  fsm = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
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
  v9 = EventDataLostBattleId;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  }
  if ( !v10 )
LABEL_30:
    sub_21FFECC(fsm, v4);
  if ( UserEventDataLostMaster__TryGetEntity(
         (UserEventDataLostMaster_o *)v10,
         &entity,
         fsm[2].fields.addEventHandlers->fields.method_code,
         v9,
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
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9636/*"NEXT"*/, 0);
    }
  }
LABEL_28:
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_30;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12728/*"SKIP"*/, 0);
}


void BattleResultComponent__LoadFriendshipUpItemAsset(
        BattleResultComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  FriendshipUpItemSelectDialog_o *isExistAssetStorage; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x22
  BattleResultComponent_c *v23; // x0
  System_String_o *FriendshipUpItemLoadAssetPath; // x20
  BattleResultComponent_c *v25; // x0
  System_String_o *v26; // x20
  AssetLoader_LoadEndDataHandler_o *v27; // x21
  __int64 v28; // x1

  if ( (byte_593C22B & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent___c__DisplayClass76_0__LoadFriendshipUpItemAsset_b__1__);
    sub_21FFC50(&BattleResultComponent___c__DisplayClass76_0_TypeInfo);
    byte_593C22B = 1;
  }
  v5 = sub_21FFEBC(BattleResultComponent___c__DisplayClass76_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)callback, v15, v16, v17, v18, v19, v20);
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0, 0) )
  {
    isExistAssetStorage = this->fields.friendshipUpItemSelectDialog;
    if ( !isExistAssetStorage )
      goto LABEL_21;
    FriendshipUpItemSelectDialog__Init(isExistAssetStorage, 0);
    goto LABEL_19;
  }
  v23 = BattleResultComponent_TypeInfo;
  if ( !*(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo, v7);
    v23 = BattleResultComponent_TypeInfo;
  }
  FriendshipUpItemLoadAssetPath = v23->static_fields->FriendshipUpItemLoadAssetPath;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7);
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
    sub_21FFECC(isExistAssetStorage, v7);
  }
  v25 = BattleResultComponent_TypeInfo;
  if ( !*(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo, v7);
    v25 = BattleResultComponent_TypeInfo;
  }
  v26 = v25->static_fields->FriendshipUpItemLoadAssetPath;
  v27 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v27,
    (Il2CppObject *)v5,
    Method_BattleResultComponent___c__DisplayClass76_0__LoadFriendshipUpItemAsset_b__1__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v28);
  AssetManager__loadAssetStorage(v26, v27, 1, 0, 0);
}


void BattleResultComponent__OnDestroy(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_593C207 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    byte_593C207 = 1;
  }
  BattleResultComponent__ReleaseFriendshipUpItemAsset(this, method);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v3);
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
    sub_21FFECC(obj_fronttouch, method);
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
  __int64 v8; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_593C229 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__74_0__);
    sub_21FFC50(&DataLostResetManager_TypeInfo);
    this = (BattleResultComponent_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593C229 = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_21FFECC(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v7, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__74_0__, 0);
  if ( !*(&DataLostResetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v8);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v7, 0);
}


void BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0

  if ( (byte_593C219 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_12728/*"SKIP"*/);
    byte_593C219 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_21FFECC(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12728/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenEventFortificationItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_593C227 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_12728/*"SKIP"*/);
    byte_593C227 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
      sub_21FFECC(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12728/*"SKIP"*/, 0);
}


void BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_593C217 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_12728/*"SKIP"*/);
    byte_593C217 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_21FFECC(Instance, v4);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12728/*"SKIP"*/, 0);
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
    sub_21FFECC(obj_fronttouch, method);
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
  __int64 v10; // x1
  int32_t questId; // w23
  bool IsQuestClear_47254560; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v15; // w9
  const MethodInfo_476EDF8 *v16; // x8
  int32_t v17; // w22
  Il2CppObject *v18; // x21
  __int64 v19; // x1
  TerminalPramsManager_c *v20; // x0
  const MethodInfo *v21; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593C224 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_21FFC50(&MapControl_QuestInfo_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593C224 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_3EDD388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v9 = (MapControl_QuestInfo_o *)sub_21FFEBC(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v9, 0);
  questId = v9->fields.questId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v10);
  IsQuestClear_47254560 = CondType__IsQuestClear_47254560(questId, -1, 0, 0);
  fixedVal = -1;
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932720 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Entity )
    goto LABEL_36;
  CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                            (QuestEntity_o *)Entity,
                            QuestId_k__BackingField,
                            *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL),
                            !IsQuestClear_47254560,
                            &fixedVal,
                            0);
  v9->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0);
  v15 = fixedVal;
  v16 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__;
  v9->fields.costCalcVal = CampaignCostCalcValue;
  if ( v15 >= 0 )
    v17 = v15;
  else
    v17 = ActConsume;
  v18 = SingletonTemplate_object___get_Instance(v16);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
  if ( !byte_5934F8E )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934F8E = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v5);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v18 )
    goto LABEL_36;
  if ( !clsQuestCheck__CheckQuestPlayable(
          (clsQuestCheck_o *)v18,
          v9,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 128LL),
          boostId,
          0) )
    return;
  v20 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    v20 = TerminalPramsManager_TypeInfo;
  }
  v20->static_fields->lastPlayQuestConsumeAp = v17;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_21FFECC(Instance, v5);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v21);
}


void BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  struct BattleResultComponent_resultData_o *battleResult; // x8
  __int64 v4; // x1
  OtherUserServantLimitCountManager_c *v5; // x0
  struct OtherUserServantLimitCountManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v7; // x0
  __int64 v8; // x1
  BattleResultComponent_c *v9; // x0

  v2 = this;
  if ( (byte_593C216 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleResultComponent_o *)sub_21FFC50(&StringLiteral_13580/*"StartQuestClearReward"*/);
    byte_593C216 = 1;
  }
  battleResult = v2->fields.battleResult;
  if ( !battleResult )
    goto LABEL_20;
  if ( (battleResult->fields.resultDispFlag & 0x800) != 0 )
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)v2, (System_String_o *)StringLiteral_13580/*"StartQuestClearReward"*/, 0.3, 0);
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, method);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v4);
  if ( !byte_5932E91 )
  {
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    byte_5932E91 = 1;
  }
  v5 = OtherUserServantLimitCountManager_TypeInfo;
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v4);
    v5 = OtherUserServantLimitCountManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  v7 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__;
  static_fields->_IsEnableAdjustSupportLimitCount_k__BackingField = 0;
  this = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance(v7);
  if ( !this
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0),
        (this = (BattleResultComponent_o *)v2->fields.obj_fronttouch) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0),
        (this = (BattleResultComponent_o *)v2->fields.friendResult) == 0) )
  {
LABEL_20:
    sub_21FFECC(this, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)this, method);
  v9 = BattleResultComponent_TypeInfo;
  if ( !*(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo, v8);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v9);
}


void BattleResultComponent__OpenFriendshipUpItemSelectDialog(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_593C22A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__75_0__);
    byte_593C22A = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__75_0__,
    0);
  if ( !battleRetryConfirmComponent )
    sub_21FFECC(v5, v6);
  BattleRetryConfirmComponent__BaseDialogClose(battleRetryConfirmComponent, v4, 0);
}


void BattleResultComponent__OpenItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *eventEndTitle; // x8
  Il2CppObject *Instance; // x22
  System_String_o *v5; // x20
  System_String_o *eventEndMessage; // x21
  NotificationDialog_ClickDelegate_o *v7; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_593C20E & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultComponent_endCloseEndEventMessage__);
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C20E = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v7 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v7,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0);
    if ( !Instance )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_37294692(
      (CommonUI_o *)Instance,
      v5,
      eventEndMessage,
      v7,
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
    sub_21FFECC(resultSprite, method);
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
  System_Action_o *v8; // x20
  BattleResultComponent_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_593C220 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent__OpenRetryQuest_b__65_0__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593C220 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v3);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(battleRetryConfirmComponent->fields.doubleContentsPrefab->fields.m_CachedPtr);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
  }
  if ( !HIDWORD(battleRetryConfirmComponent->fields.tripleContentsNoneUseItemPrefab) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent, v3);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CancellationTokenSource = (int32_t)battleRetryConfirmComponent->fields.doubleContentsPrefab->fields.m_CancellationTokenSource;
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_5932644 = 1;
  }
  if ( !HIDWORD(battleRetryConfirmComponent->fields.tripleContentsNoneUseItemPrefab) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent, v3);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_29;
  PartyOrganizationUtility__SetQuestCache(
    (PartyOrganizationUtility_o *)Instance,
    m_CachedPtr_high,
    m_CancellationTokenSource,
    HIDWORD(battleRetryConfirmComponent->fields.doubleContentsPrefab->klass),
    0);
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_29;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0) )
  {
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent__OpenRetryQuest_b__65_0__, 0);
    BattleResultComponent__ShowJobLevelNoticeDialog(v9, v8, v10);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
    goto LABEL_29;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
LABEL_29:
    sub_21FFECC(battleRetryConfirmComponent, v3);
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

  if ( (byte_593C20D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent_OpenTutorial__);
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C20D = 1;
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
    v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0);
    if ( v4 )
    {
      BattleEventTutorial__callResult(v4, v5, 0);
      return;
    }
LABEL_23:
    sub_21FFECC(eventTutorial, method);
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
      v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
    v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleResultComponent__PushFollowerScene(BattleResultComponent_o *this, int32_t boostId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  BattleResultComponent_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v15; // x23
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x20

  if ( (byte_593C225 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    sub_21FFC50(&BattleSetupInfo_TypeInfo);
    sub_21FFC50(&OtherUserServantLimitCountManager_TypeInfo);
    sub_21FFC50(&RandomLimitCountManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593C225 = 1;
  }
  if ( !*(&RandomLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, *(_QWORD *)&boostId);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0);
  if ( !*(&OtherUserServantLimitCountManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OtherUserServantLimitCountManager_TypeInfo, v4);
  OtherUserServantLimitCountManager__Clear(0);
  v6 = BattleResultComponent_TypeInfo;
  if ( !*(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo, v5);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v6);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v7);
  SoundManager__stopVoiceAll(0.8, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
  if ( !byte_5932644 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932644 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v9->static_fields->_WarId_k__BackingField;
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_593205C = 1;
  }
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v9->static_fields->_QuestId_k__BackingField;
  TerminalPramsManager__SaveJobLevelSnapshot(QuestId_k__BackingField, 0);
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932720 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v13 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v13->static_fields->_PhaseCnt_k__BackingField;
  v15 = (BattleSetupInfo_o *)sub_21FFEBC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v15, 0);
  if ( !v15 )
    goto LABEL_31;
  Instance = (Il2CppObject *)BattleSetupInfo__ConvertBattleSetupInfo(
                               v15,
                               WarId_k__BackingField,
                               QuestId_k__BackingField,
                               PhaseCnt_k__BackingField,
                               0,
                               0,
                               0,
                               0);
  v18 = Instance;
  if ( boostId )
  {
    if ( !Instance )
      goto LABEL_31;
    HIDWORD(Instance[3].monitor) = boostId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_31:
    sub_21FFECC(Instance, v17);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v18, 0);
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
    sub_21FFECC(this, method);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0);
}


void BattleResultComponent__ReleaseFriendshipUpItemAsset(BattleResultComponent_o *this, const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_cashedFriendshipUpItemAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *cashedFriendshipUpItemAssetData; // t1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593C22C & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_593C22C = 1;
  }
  cashedFriendshipUpItemAssetData = this->fields.cashedFriendshipUpItemAssetData;
  p_cashedFriendshipUpItemAssetData = (MissionNaviTransitionBoardItem_o *)&this->fields.cashedFriendshipUpItemAssetData;
  v4 = cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData )
  {
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    AssetManager__releaseAsset_47465556(v4, 0);
    p_cashedFriendshipUpItemAssetData->klass = 0;
    sub_21FFBF4(p_cashedFriendshipUpItemAssetData, 0, v6, v7, v8, v9, v10, v11);
  }
}


void BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_593C20B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C20B = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0, 0) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0), (v5 = this->fields.screenTouch) == 0) )
      sub_21FFECC(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0);
  }
}


void BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_593C226 & 1) == 0 )
  {
    sub_21FFC50(&BattlePerformance_TypeInfo);
    byte_593C226 = 1;
  }
  UnityEngine_Time__set_timeScale(1.0, 0);
  if ( !*(&BattlePerformance_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, v1);
  BattlePerformance__AdjustSmoothnessByCurrentSpeed(0);
}


void BattleResultComponent__ScrollBarMotion(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Object_array *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  Il2CppObject *v38; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  int32_t v52; // w1
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t v59; // w1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int32_t v66; // w1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  int32_t v73; // w1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  Il2CppObject *v80; // x21
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  int32_t v87; // w1
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  Il2CppObject *v94; // x21
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  int32_t v101; // w1
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  Il2CppObject *v108; // x21
  System_Collections_Hashtable_o *v109; // x0
  __int64 v110; // x0
  int v111; // [xsp+Ch] [xbp-44h] BYREF
  int v112; // [xsp+10h] [xbp-40h] BYREF
  int v113; // [xsp+14h] [xbp-3Ch] BYREF
  int v114; // [xsp+18h] [xbp-38h] BYREF
  int v115; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_593C212 & 1) == 0 )
  {
    sub_21FFC50(&iTween_EaseType_TypeInfo);
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20581/*"from"*/);
    sub_21FFC50(&StringLiteral_13151/*"ScrollBarMotionCompleteValue"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23526/*"onupdate"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_13152/*"ScrollBarMotionUpdateValue"*/);
    sub_21FFC50(&StringLiteral_25358/*"to"*/);
    sub_21FFC50(&StringLiteral_19566/*"easeType"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_593C212 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v3);
  iTween__Stop_75189608(gameObject, 0);
  v5 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v6 = sub_21FFD10(object___TypeInfo, 14);
  if ( !v6 )
    sub_21FFECC(0, v7);
  v14 = (System_Object_array *)v6;
  v15 = StringLiteral_20581/*"from"*/;
  if ( StringLiteral_20581/*"from"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_20581/*"from"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( !LODWORD(v14->max_length) )
    goto LABEL_49;
  v17 = StringLiteral_20581/*"from"*/;
  v14->m_Items[0] = (Il2CppObject *)StringLiteral_20581/*"from"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v14->m_Items, v17, v8, v9, v10, v11, v12, v13);
  v115 = 0;
  v15 = j_il2cpp_value_box_0(qword_594C0A0, &v115);
  v24 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( (v14->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_49;
  v14->m_Items[1] = v24;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[1], (int32_t)v24, v18, v19, v20, v21, v22, v23);
  v15 = StringLiteral_25358/*"to"*/;
  if ( StringLiteral_25358/*"to"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_25358/*"to"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 2 )
    goto LABEL_49;
  v31 = StringLiteral_25358/*"to"*/;
  v14->m_Items[2] = (Il2CppObject *)StringLiteral_25358/*"to"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[2], v31, v25, v26, v27, v28, v29, v30);
  v114 = 1065353216;
  v15 = j_il2cpp_value_box_0(qword_594C0A0, &v114);
  v38 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( (v14->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_49;
  v14->m_Items[3] = v38;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[3], (int32_t)v38, v32, v33, v34, v35, v36, v37);
  v15 = StringLiteral_23526/*"onupdate"*/;
  if ( StringLiteral_23526/*"onupdate"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_23526/*"onupdate"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 4 )
    goto LABEL_49;
  v45 = StringLiteral_23526/*"onupdate"*/;
  v14->m_Items[4] = (Il2CppObject *)StringLiteral_23526/*"onupdate"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[4], v45, v39, v40, v41, v42, v43, v44);
  v15 = StringLiteral_13152/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_13152/*"ScrollBarMotionUpdateValue"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_13152/*"ScrollBarMotionUpdateValue"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 5 )
    goto LABEL_49;
  v52 = StringLiteral_13152/*"ScrollBarMotionUpdateValue"*/;
  v14->m_Items[5] = (Il2CppObject *)StringLiteral_13152/*"ScrollBarMotionUpdateValue"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[5], v52, v46, v47, v48, v49, v50, v51);
  v15 = StringLiteral_23518/*"oncomplete"*/;
  if ( StringLiteral_23518/*"oncomplete"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_23518/*"oncomplete"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 6 )
    goto LABEL_49;
  v59 = StringLiteral_23518/*"oncomplete"*/;
  v14->m_Items[6] = (Il2CppObject *)StringLiteral_23518/*"oncomplete"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[6], v59, v53, v54, v55, v56, v57, v58);
  v15 = StringLiteral_13151/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_13151/*"ScrollBarMotionCompleteValue"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_13151/*"ScrollBarMotionCompleteValue"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( (v14->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_49;
  v66 = StringLiteral_13151/*"ScrollBarMotionCompleteValue"*/;
  v14->m_Items[7] = (Il2CppObject *)StringLiteral_13151/*"ScrollBarMotionCompleteValue"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[7], v66, v60, v61, v62, v63, v64, v65);
  v15 = StringLiteral_19566/*"easeType"*/;
  if ( StringLiteral_19566/*"easeType"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_19566/*"easeType"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 8 )
    goto LABEL_49;
  v73 = StringLiteral_19566/*"easeType"*/;
  v14->m_Items[8] = (Il2CppObject *)StringLiteral_19566/*"easeType"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[8], v73, v67, v68, v69, v70, v71, v72);
  v113 = 17;
  v15 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v113);
  v80 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 9 )
    goto LABEL_49;
  v14->m_Items[9] = v80;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[9], (int32_t)v80, v74, v75, v76, v77, v78, v79);
  v15 = StringLiteral_25318/*"time"*/;
  if ( StringLiteral_25318/*"time"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_25318/*"time"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 0xA )
    goto LABEL_49;
  v87 = StringLiteral_25318/*"time"*/;
  v14->m_Items[10] = (Il2CppObject *)StringLiteral_25318/*"time"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[10], v87, v81, v82, v83, v84, v85, v86);
  v112 = 1065353216;
  v15 = j_il2cpp_value_box_0(qword_594C0A0, &v112);
  v94 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 0xB )
    goto LABEL_49;
  v14->m_Items[11] = v94;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[11], (int32_t)v94, v88, v89, v90, v91, v92, v93);
  v15 = StringLiteral_19348/*"delay"*/;
  if ( StringLiteral_19348/*"delay"*/ )
  {
    v15 = sub_21FFDA4(StringLiteral_19348/*"delay"*/, v14->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_50;
  }
  if ( LODWORD(v14->max_length) <= 0xC )
    goto LABEL_49;
  v101 = StringLiteral_19348/*"delay"*/;
  v14->m_Items[12] = (Il2CppObject *)StringLiteral_19348/*"delay"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[12], v101, v95, v96, v97, v98, v99, v100);
  v111 = 0;
  v15 = j_il2cpp_value_box_0(qword_594C0A0, &v111);
  v108 = (Il2CppObject *)v15;
  if ( v15 )
  {
    v15 = sub_21FFDA4(v15, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_50:
      v110 = sub_21FFEF0(v15, v16);
      sub_21FFD90(v110, 0);
    }
  }
  if ( LODWORD(v14->max_length) <= 0xD )
LABEL_49:
    sub_21FFED4(v15);
  v14->m_Items[13] = v108;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->m_Items[13], (int32_t)v108, v102, v103, v104, v105, v106, v107);
  v109 = iTween__Hash(v14, 0);
  iTween__ValueTo(v5, v109, 0);
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
  if ( (byte_593C214 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__);
    this = (BattleResultComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_593C214 = 1;
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
  v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)v2, Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__, 0);
  if ( !itemResult )
LABEL_11:
    sub_21FFECC(this, method);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v6, v7);
}


void BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v8; // x1

  if ( (byte_593C213 & 1) == 0 )
  {
    sub_21FFC50(&iTween_TypeInfo);
    byte_593C213 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_21FFECC(0, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v6);
    iTween__Stop_75189608(gameObject, 0);
    BattleResultComponent__ScrollBarMotionCompleteValue(this, v8);
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
  bool v7; // w7
  AssetData_o *v10; // x23
  BattleResultComponent_resultData_array *v12; // x21
  BattleResultComponent_o *v13; // x22
  struct BattleResultComponent_resultData_o *v14; // x1
  BattleResultComponent_o **p_battleResult; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  TerminalPramsManager_c *v22; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  __int64 v24; // x1
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v26; // x0
  int32_t v27; // w19
  BalanceConfig_c *v28; // x8
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v30; // x0
  BattleResultComponent_o *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *eventItemResult; // x0
  BattleResultComponent___c_c *v33; // x8
  BattleResultComponent_o *v34; // x26
  struct BattleResultComponent___c_StaticFields *static_fields; // x9
  System_Converter_TInput__TOutput__o *_9__39_0; // x19
  BattleResultComponent_resultData_array *v37; // x24
  AssetData_o *v38; // x21
  Il2CppObject *v39; // x23
  struct BattleResultComponent___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_array *v47; // x0
  System_String_o *v48; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventDamageItemResult; // x0
  BattleResultComponent___c_c *v50; // x8
  BattleResultComponent_o *v51; // x26
  struct BattleResultComponent___c_StaticFields *v52; // x9
  System_Converter_TInput__TOutput__o *_9__39_1; // x19
  BattleResultComponent_resultData_array *v54; // x24
  AssetData_o *v55; // x21
  Il2CppObject *v56; // x23
  struct BattleResultComponent___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_String_array *v64; // x0
  System_String_o *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_String_o *m_CancellationTokenSource; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct BattleResultComponent_resultData_o *v79; // x8
  BattleData_o *v80; // x29
  struct System_String_o *eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v82; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v84; // x26
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  BattleResultComponent_resultData_o *v91; // x8
  BattleResultComponent_o *v92; // x8
  struct BattleResultEventItemComponent_o *v93; // x9
  struct System_Threading_CancellationTokenSource_o *v94; // x11
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v96; // x12
  AssetData_o *v97; // x21
  BattleResultExpComponent_o *expResult; // x24
  UserGameEntity_o *parentComp; // x27
  UserEquipEntity_o *v100; // x28
  int64_t maxTurnDamageInBattle; // x19
  int64_t maxTurnDamageRecord; // x23
  MasterLvRewardInfo_array *eventEndTitle; // x29
  int32_t v104; // w25
  struct BattleResultEventItemComponent_o *v105; // x9
  struct System_Threading_CancellationTokenSource_o *v106; // x10
  UserGameEntity_o *v107; // x29
  BattleResultItemComponent_o *v108; // x25
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  BattleDropItem_array *v111; // x26
  int32_t m_CachedPtr_high; // w24
  int32_t itemResult_high; // w21
  DropUpInfo_array *dropupinfos; // x20
  EventConquestInfo_array *ServantRewardActionComp; // x19
  int32_t firstClearRewardQp; // w23
  struct BattleResultItemComponent_o *v117; // x9
  struct UILabel_o *getQpLabel; // x9
  struct UnityEngine_GameObject_o *mText; // x1
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  struct BattleResultItemComponent_o *v126; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v128; // x9
  struct System_String_o *v129; // x1
  struct UIScrollBar_o *resultItemScrollBar; // x8
  Il2CppObject *v131; // x0
  struct BattleResultItemComponent_o *v132; // x8
  Il2CppObject *v133; // x19
  UILabel_o *v134; // x23
  System_String_o *v135; // x0
  struct BattleResultItemComponent_o *v136; // x8
  struct BattleResultAddRewardBonus_o *rewardBonus; // x9
  UILabel_o *v138; // x19
  Il2CppObject *v139; // x0
  BattleResultFriendComponent_o *v140; // x19
  int32_t v141; // w23
  int32_t m_CancellationTokenSource_high; // w24
  int64_t m_CachedPtr; // x25
  int32_t endtargetObject; // w26
  int32_t endtargetObject_high; // w27
  int32_t v146; // w28
  struct BattleResultComponent_resultData_o *v147; // x8
  struct BattleResultComponent_resultData_o *v148; // x8
  __int64 v149; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v151; // x8
  const MethodInfo *v152; // x2
  struct BattleResultComponent_resultData_o *v153; // x8
  BattleResultComponent_o *v154; // x8
  unsigned int v155; // w9
  struct BattleInfoData_o *v156; // x9
  struct DeckData_o *myDeck; // x9
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w9
  __int64 v160; // x20
  char v161; // w22
  BattleResultComponent_o *v162; // x19
  int32_t v163; // w23
  int32_t EventProgressValueSaveData_52551696; // w0
  int obj_basebg; // w8
  TerminalPramsManager_c *v166; // x0
  _BOOL4 JoinSvtsEffect; // w8
  unsigned int v168; // w8
  BattleResultComponent_o *v169; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x9
  BattleResultComponent_resultData_array *v171; // x25
  AssetData_o *v172; // x21
  Il2CppObject *Master_object; // x19
  int32_t eventId; // w23
  int32_t QuestId; // w24
  struct UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x9
  BattleResultComponent_o *v177; // x8
  unsigned int v178; // w9
  int v179; // w19
  BattleResultComponent_resultData_o *v180; // x9
  struct BattleInfoData_o *battle_info; // x10
  BattleResultComponent_resultData_o *battleResult; // [xsp+0h] [xbp-100h]
  MethodInfo *methoda; // [xsp+10h] [xbp-F0h]
  const MethodInfo *v184; // [xsp+40h] [xbp-C0h]
  int64_t addDamagePoint; // [xsp+50h] [xbp-B0h]
  UserEventPointEntity_array *FriendIconPrefab; // [xsp+58h] [xbp-A8h]
  UserEventEntity_array *friendResult; // [xsp+60h] [xbp-A0h]
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
  if ( (byte_593C20C & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&System_Converter_int__string__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int___);
    sub_21FFC50(&EventInfoUIProgressControl_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&QuestKnockdownResult_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent___c__Set_b__39_0__);
    sub_21FFC50(&Method_BattleResultComponent___c__Set_b__39_1__);
    sub_21FFC50(&BattleResultComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_20552/*"freeShopIds"*/);
    sub_21FFC50(&StringLiteral_11593/*"RESULT_QP_PLUS"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    sub_21FFC50(&StringLiteral_24251/*"returnRarePriShopIds"*/);
    this = (BattleResultComponent_o *)sub_21FFC50(&StringLiteral_869/*","*/);
    byte_593C20C = 1;
  }
  entity = 0;
  if ( !v12 )
    goto LABEL_200;
  if ( !LODWORD(v12->max_length) )
    goto LABEL_201;
  v14 = v12->m_Items[0];
  v13->fields.battleResult = v14;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.battleResult,
    (int32_t)v14,
    (System_String_o *)tutorial,
    (System_String_o *)resultAsset,
    (int32_t)viewGroupIds,
    (int32_t)bData,
    (bool)method,
    v7);
  v13->fields.eventTutorial = tutorial;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.eventTutorial,
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
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
      if ( !byte_5935A0C )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5935A0C = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
        v22 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v22->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0);
      if ( !byte_59359FA )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59359FA = 1;
      }
      v26 = TerminalPramsManager_TypeInfo;
      v27 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
        v26 = TerminalPramsManager_TypeInfo;
      }
      v28 = BalanceConfig_TypeInfo;
      v26->static_fields->_BeforeEventActivityPoint_k__BackingField = v27;
      if ( !*(&v28->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v28, v24);
        v28 = BalanceConfig_TypeInfo;
      }
      p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
      UserEventActivityPointMax = v28->static_fields->UserEventActivityPointMax;
      if ( !byte_5935A0C )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_5935A0C = 1;
      }
      v30 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
        v30 = TerminalPramsManager_TypeInfo;
      }
      if ( v30->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !*(&v30->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v30, v24);
        if ( !byte_59359FA )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_59359FA = 1;
        }
        v30 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v24);
          v30 = TerminalPramsManager_TypeInfo;
        }
        v30->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !*(&v30->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v30, v24);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0);
    }
  }
  v31 = *p_battleResult;
  v190 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v13->fields.eventTutorial;
  v192 = bData;
  if ( !*p_battleResult )
    goto LABEL_200;
  eventItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v31[1].fields.eventItemResult;
  if ( eventItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventItemResult,
                                        (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
    v33 = BattleResultComponent___c_TypeInfo;
    v34 = this;
    if ( !*(&BattleResultComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo, resultList);
      v33 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__39_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      v37 = v12;
      v38 = v10;
      if ( !*(&v33->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v33, resultList);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v39 = (Il2CppObject *)static_fields->__9;
      _9__39_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_0, v39, Method_BattleResultComponent___c__Set_b__39_0__, 0);
      v40 = BattleResultComponent___c_TypeInfo->static_fields;
      v40->__9__39_0 = (struct System_Converter_int__string__o *)_9__39_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->__9__39_0, (int32_t)_9__39_0, v41, v42, v43, v44, v45, v46);
      v10 = v38;
      v12 = v37;
    }
    if ( !v34 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v34,
                                        (System_Converter_T__TOutput__o *)_9__39_0,
                                        (const MethodInfo_36A562C *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_200;
    v47 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
    v48 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v47, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_20552/*"freeShopIds"*/, v48, 0);
    v31 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
  }
  eventDamageItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v31[1].fields.eventDamageItemResult;
  if ( eventDamageItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventDamageItemResult,
                                        (const MethodInfo_386D6A8 *)Method_System_Linq_Enumerable_ToList_int___);
    v50 = BattleResultComponent___c_TypeInfo;
    v51 = this;
    if ( !*(&BattleResultComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo, resultList);
      v50 = BattleResultComponent___c_TypeInfo;
    }
    v52 = v50->static_fields;
    _9__39_1 = (System_Converter_TInput__TOutput__o *)v52->__9__39_1;
    if ( !_9__39_1 )
    {
      v54 = v12;
      v55 = v10;
      if ( !*(&v50->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v50, resultList);
        v52 = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)v52->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_1, v56, Method_BattleResultComponent___c__Set_b__39_1__, 0);
      v57 = BattleResultComponent___c_TypeInfo->static_fields;
      v57->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v57->__9__39_1, (int32_t)_9__39_1, v58, v59, v60, v61, v62, v63);
      v10 = v55;
      v12 = v54;
    }
    if ( !v51 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v51,
                                        (System_Converter_T__TOutput__o *)_9__39_1,
                                        (const MethodInfo_36A562C *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_200;
    v64 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
    v65 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v64, 0);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_24251/*"returnRarePriShopIds"*/, v65, 0);
  }
  UnityEngine_PlayerPrefs__Save(0);
  if ( !*p_battleResult )
    goto LABEL_200;
  m_CancellationTokenSource = (struct System_String_o *)(*p_battleResult)->fields.m_CancellationTokenSource;
  v13->fields.eventEndTitle = m_CancellationTokenSource;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.eventEndTitle,
    (int32_t)m_CancellationTokenSource,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  v79 = v13->fields.battleResult;
  v80 = bData;
  if ( !v79 )
    goto LABEL_200;
  eventEndMessage = v79->fields.eventEndMessage;
  v13->fields.eventEndMessage = eventEndMessage;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v13->fields.eventEndMessage,
    (int32_t)eventEndMessage,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v82 = v13->fields.battleResult;
  if ( !v82 )
    goto LABEL_200;
  isTrialQuestNewRecord = v82->fields.isTrialQuestNewRecord;
  v84 = (QuestKnockdownResult_o *)sub_21FFEBC(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v84, isTrialQuestNewRecord, bData, 0);
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
    v91 = v13->fields.battleResult;
    if ( !v91 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v13->fields.bondsResult;
    if ( !this )
      goto LABEL_200;
    BattleResultBondsComponent__SetMultiBondsResultData(
      (BattleResultBondsComponent_o *)this,
      bData,
      v91->fields.oldUserSvtCollection,
      v91->fields.friendshipRewardInfos,
      v91->fields.followerType,
      v10,
      v91->fields.friendshipExpBase,
      v91->fields.getJoinSvts,
      v91,
      (bool)&dword_0 + 1,
      0);
  }
  else
  {
    v169 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_200;
    bondsResult = v169->fields.bondsResult;
    if ( bondsResult && bondsResult->fields.m_CachedPtr )
    {
      v171 = v12;
      v172 = v10;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resultList);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      eventId = BattleData__get_eventId(v192, 0);
      QuestId = BattleData__getQuestId(v192, 0);
      this = (BattleResultComponent_o *)BattleData__getPhase(v192, 0);
      if ( !Master_object )
        goto LABEL_200;
      if ( EventBuddyPointMaster__TryGetEntity(
             (EventBuddyPointMaster_o *)Master_object,
             &entity,
             eventId,
             QuestId,
             (int32_t)this,
             0) )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_200;
        v10 = v172;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0);
      }
      else
      {
        this = 0;
        v10 = v172;
      }
      v180 = v13->fields.battleResult;
      v12 = v171;
      if ( !v180 )
        goto LABEL_200;
      battle_info = v192->fields.battle_info;
      if ( !battle_info || !v13->fields.bondsResult )
        goto LABEL_200;
      BattleResultBondsComponent__setResultData(
        v13->fields.bondsResult,
        v180->fields.myDeck,
        v180->fields.oldUserSvtCollection,
        v180->fields.friendshipRewardInfos,
        v180->fields.followerType,
        v10,
        battle_info->fields.userSvt,
        v180->fields.friendshipExpBase,
        v180->fields.getJoinSvts,
        v180,
        (unsigned __int8)this & 1,
        v192,
        0);
    }
    else
    {
      LODWORD(v169[1].fields.bondsResult) &= ~1u;
    }
  }
  v92 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_200;
  v93 = v92->fields.eventItemResult;
  if ( v93
    && (v94 = v93->fields.m_CancellationTokenSource) != 0
    && (itemResult = v92->fields.itemResult) != 0
    && (v96 = itemResult->fields.m_CancellationTokenSource) != 0 )
  {
    v188 = v12;
    if ( !(_DWORD)v94 || !(_DWORD)v96 )
      goto LABEL_201;
    v97 = v10;
    expResult = v13->fields.expResult;
    parentComp = (UserGameEntity_o *)v93->fields.parentComp;
    v100 = (UserEquipEntity_o *)itemResult->fields.parentComp;
    maxTurnDamageRecord = v192->fields.maxTurnDamageRecord;
    maxTurnDamageInBattle = v192->fields.maxTurnDamageInBattle;
    eventEndTitle = (MasterLvRewardInfo_array *)v92->fields.eventEndTitle;
    v104 = BattleData__getQuestId(v192, 0);
    this = (BattleResultComponent_o *)BattleData__getPhase(v192, 0);
    if ( !expResult )
      goto LABEL_200;
    BattleResultExpComponent__SetResultData(
      expResult,
      parentComp,
      v100,
      eventEndTitle,
      v97,
      maxTurnDamageInBattle,
      maxTurnDamageRecord,
      v84,
      v104,
      (int32_t)this,
      methoda);
    v80 = v192;
    p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
    v12 = v188;
    v92 = (BattleResultComponent_o *)*v193;
    if ( !*v193 )
      goto LABEL_200;
  }
  else
  {
    LODWORD(v92[1].fields.bondsResult) &= ~2u;
  }
  v105 = v92->fields.eventItemResult;
  if ( !v105 || (v106 = v105->fields.m_CancellationTokenSource) == 0 )
  {
    LODWORD(v92[1].fields.bondsResult) &= ~4u;
    goto LABEL_91;
  }
  if ( !(_DWORD)v106 )
LABEL_201:
    sub_21FFED4(this);
  this = (BattleResultComponent_o *)v80->fields.quest_ent;
  v189 = v12;
  if ( !this )
    goto LABEL_200;
  v107 = (UserGameEntity_o *)v105->fields.parentComp;
  v108 = v13->fields.itemResult;
  fsm = (int32_t)v92->fields.fsm;
  fsm_high = HIDWORD(v92->fields.fsm);
  FriendIconPrefab = (UserEventPointEntity_array *)v92->fields.FriendIconPrefab;
  friendResult = (UserEventEntity_array *)v92->fields.friendResult;
  v111 = (BattleDropItem_array *)v92->fields.eventEndMessage;
  m_CachedPtr_high = HIDWORD(v92->fields.m_CachedPtr);
  itemResult_high = HIDWORD(v92[1].fields.itemResult);
  dropupinfos = (DropUpInfo_array *)v92[1].fields.friendResult;
  ServantRewardActionComp = (EventConquestInfo_array *)v92[1].fields.ServantRewardActionComp;
  firstClearRewardQp = (int32_t)v92->fields.obj_basebg;
  addDamagePoint = (int64_t)v92[1].fields.obj_fronttouch;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000000000LL, 0);
  if ( !*v193 )
    goto LABEL_200;
  if ( !v108 )
    goto LABEL_200;
  BattleResultItemComponent__setResultData(
    v108,
    v111,
    fsm,
    fsm_high,
    v107,
    m_CachedPtr_high,
    friendResult,
    FriendIconPrefab,
    addDamagePoint,
    v190,
    itemResult_high,
    dropupinfos,
    ServantRewardActionComp,
    firstClearRewardQp,
    (unsigned __int8)this & 1,
    (*v193)->fields.rewardBonus,
    v184);
  v80 = v192;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  v12 = v189;
  v92 = (BattleResultComponent_o *)*v193;
  if ( !*v193 )
    goto LABEL_200;
LABEL_91:
  if ( v92[1].fields.resultItemScrollBar )
  {
    v117 = v13->fields.itemResult;
    if ( !v117 )
      goto LABEL_200;
    getQpLabel = v117->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_200;
    mText = (struct UnityEngine_GameObject_o *)getQpLabel->fields.mText;
    v92[1].fields.touchGuard = mText;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v92[1].fields.touchGuard,
      (int32_t)mText,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    v126 = v13->fields.itemResult;
    if ( !v126 )
      goto LABEL_200;
    nowQpLabel = v126->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_200;
    v128 = v13->fields.battleResult;
    if ( !v128 )
      goto LABEL_200;
    v129 = nowQpLabel->fields.mText;
    v128->fields.ultimateNowQpText = v129;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v128->fields.ultimateNowQpText,
      (int32_t)v129,
      v120,
      v121,
      v122,
      v123,
      v124,
      v125);
    if ( !*p_battleResult )
      goto LABEL_200;
    resultItemScrollBar = (*p_battleResult)[1].fields.resultItemScrollBar;
    if ( !resultItemScrollBar )
      goto LABEL_200;
    v195 = (__int64)resultItemScrollBar->fields.thumb & ~(SLODWORD(resultItemScrollBar->fields.thumb) >> 31);
    v131 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v195);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v131, 0);
    v132 = v13->fields.itemResult;
    if ( !v132 )
      goto LABEL_200;
    v133 = (Il2CppObject *)this;
    v134 = v132->fields.getQpLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resultList);
    v135 = LocalizationManager__Get((System_String_o *)StringLiteral_11593/*"RESULT_QP_PLUS"*/, 0);
    this = (BattleResultComponent_o *)System_String__Format(v135, v133, 0);
    if ( !v134 )
      goto LABEL_200;
    UILabel__set_text(v134, (System_String_o *)this, 0);
    v136 = v13->fields.itemResult;
    p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
    if ( !v136 )
      goto LABEL_200;
    if ( !*v193 )
      goto LABEL_200;
    rewardBonus = (*v193)->fields.rewardBonus;
    if ( !rewardBonus )
      goto LABEL_200;
    v138 = v136->fields.nowQpLabel;
    befUserGameQp = rewardBonus->fields.befUserGameQp;
    v139 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &befUserGameQp);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_26381/*"{0:#,0}"*/, v139, 0);
    if ( !v138 )
      goto LABEL_200;
    UILabel__set_text(v138, (System_String_o *)this, 0);
    this = (BattleResultComponent_o *)v13->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_200;
    v197.fields.a = 1.0;
    v197.fields.r = 0.29804;
    v197.fields.g = 0.29804;
    v197.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v197, 0);
    v92 = (BattleResultComponent_o *)*v193;
    if ( !*v193 )
      goto LABEL_200;
  }
  this = (BattleResultComponent_o *)v80->fields.quest_ent;
  if ( !this )
    goto LABEL_200;
  v140 = v13->fields.friendResult;
  v141 = (int32_t)v92[1].fields.m_CancellationTokenSource;
  m_CancellationTokenSource_high = HIDWORD(v92[1].fields.m_CancellationTokenSource);
  m_CachedPtr = v92[1].fields.m_CachedPtr;
  endtargetObject = (int32_t)v92[1].fields.endtargetObject;
  endtargetObject_high = HIDWORD(v92[1].fields.endtargetObject);
  v146 = (int32_t)v92[1].fields.fsm;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000, 0);
  if ( !v140 )
    goto LABEL_200;
  BattleResultFriendComponent__setResultData(
    v140,
    v141,
    m_CancellationTokenSource_high,
    m_CachedPtr,
    endtargetObject,
    endtargetObject_high,
    v146,
    (unsigned __int8)this & 1,
    (const MethodInfo *)battleResult);
  v147 = v13->fields.battleResult;
  if ( !v147 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)v13->fields.eventItemResult;
  if ( !this )
    goto LABEL_200;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, void *))this->klass[1]._1.image)(
                                      this,
                                      v147->fields.resultEventRewardInfos,
                                      (unsigned int)v147->fields.eventId,
                                      v147->fields.resultBoostItemRewardInfos,
                                      v147->fields.rewardInfos,
                                      this->klass[1]._1.gc_desc);
  v148 = v13->fields.battleResult;
  if ( !v148 )
    goto LABEL_200;
  this = (BattleResultComponent_o *)v13->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_200;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, void *))this->klass[1]._1.image)(
    this,
    v148->fields.resultDamageRewardInfos,
    (unsigned int)v148->fields.eventId,
    v148->fields.resultBoostItemRewardInfos,
    v148->fields.rewardInfos,
    this->klass[1]._1.gc_desc);
  eventFortificationItemResult = (UnityEngine_Object_o *)v13->fields.eventFortificationItemResult;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v149);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v151 = v13->fields.battleResult;
    if ( !v151 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_200;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, void *))this->klass[1]._1.image)(
                                        this,
                                        v151->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v151->fields.eventId,
                                        0,
                                        0,
                                        this->klass[1]._1.gc_desc);
    v153 = v13->fields.battleResult;
    if ( !v153 )
      goto LABEL_200;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_200;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v153->fields.fortificationInfos,
      v152);
  }
  this = *p_eventTutorial;
  if ( !*p_eventTutorial )
    goto LABEL_200;
  this = (BattleResultComponent_o *)BattleEventTutorial__CheckHasResultPhaseTutorial((BattleEventTutorial_o *)this, 0);
  v154 = *p_battleResult;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v154 )
      goto LABEL_200;
    v155 = LODWORD(v154[1].fields.bondsResult) | 0x40;
  }
  else
  {
    if ( !v154 )
      goto LABEL_200;
    v155 = (__int64)v154[1].fields.bondsResult & 0xFFFFFFBF;
  }
  LODWORD(v154[1].fields.bondsResult) = v155;
  if ( (v155 & 0x200) != 0 )
    LODWORD(v154[1].fields.bondsResult) = v155 & 0xFFFFFFEF;
  v156 = v80->fields.battle_info;
  if ( !v156 )
LABEL_200:
    sub_21FFECC(this, resultList);
  myDeck = v156->fields.myDeck;
  if ( myDeck && (svts = myDeck->fields.svts) != 0 && (max_length = svts->max_length, max_length >= 1) )
  {
    v160 = 0;
    do
    {
      if ( (unsigned int)v160 >= max_length )
        goto LABEL_201;
      this = (BattleResultComponent_o *)svts->m_Items[v160];
      if ( !this )
        goto LABEL_200;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0);
      v161 = (char)this;
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      ++v160;
    }
    while ( (int)v160 < max_length );
    p_battleResult = (BattleResultComponent_o **)v193;
    v154 = (BattleResultComponent_o *)*v193;
    if ( !*v193 )
      goto LABEL_200;
  }
  else
  {
    v161 = 0;
  }
  if ( HIDWORD(v154->fields.m_CachedPtr) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resultList);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_200;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        HIDWORD((*p_battleResult)->fields.m_CachedPtr),
                                        0);
    v162 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_200;
      v163 = HIDWORD((*p_battleResult)->fields.m_CachedPtr);
      if ( !*(&EventInfoUIProgressControl_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo, resultList);
      EventProgressValueSaveData_52551696 = EventInfoUIProgressControl__GetEventProgressValueSaveData_52551696(
                                              v163,
                                              0,
                                              0);
      obj_basebg = (int)v162->fields.obj_basebg;
      LODWORD(v162) = 0;
      if ( EventProgressValueSaveData_52551696 != obj_basebg )
      {
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
        if ( !byte_5931FBA )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_5931FBA = 1;
        }
        v166 = TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
          v166 = TerminalPramsManager_TypeInfo;
        }
        v166->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0);
        LODWORD(v162) = 1;
      }
    }
  }
  else
  {
    LODWORD(v162) = 0;
  }
  this = *p_battleResult;
  if ( v161 & 1 | !v80->fields.isRetryable )
    goto LABEL_164;
  if ( !this )
    goto LABEL_200;
  JoinSvtsEffect = BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                     (BattleResultComponent_resultData_o *)this,
                     (const MethodInfo *)resultList);
  this = *p_battleResult;
  if ( (((unsigned int)v162 | JoinSvtsEffect) & 1) != 0 )
  {
LABEL_164:
    if ( !this )
      goto LABEL_200;
    v168 = (__int64)this[1].fields.bondsResult & 0xFFFFF7FF;
  }
  else
  {
    if ( !this )
      goto LABEL_200;
    v168 = LODWORD(this[1].fields.bondsResult) | 0x800;
  }
  friendshipUpItemDialogRoot = this[1].fields.friendshipUpItemDialogRoot;
  LODWORD(this[1].fields.bondsResult) = v168;
  LODWORD(this[1].fields.bondsResult) = v168 & 0xFFFFEFFF;
  if ( friendshipUpItemDialogRoot && friendshipUpItemDialogRoot[1].klass )
    LODWORD(this[1].fields.bondsResult) = v168 | 0x1000;
  this = (BattleResultComponent_o *)BattleData__isBattleResultLoseQuestClear(v80, 0);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleResultComponent_o *)BattleData__isBattleRetreatQuestClear(v80, 0), ((unsigned __int8)this & 1) != 0) )
  {
    if ( v80->fields.isItemResultSkip )
    {
      this = (BattleResultComponent_o *)BattleData__IsWarBoard(v80, 0);
      v177 = *p_battleResult;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v177 )
          goto LABEL_200;
        v178 = (unsigned int)v177[1].fields.bondsResult;
        if ( (v178 & 4) != 0 )
          goto LABEL_189;
      }
      else if ( !v177 )
      {
        goto LABEL_200;
      }
      v178 = (__int64)v177[1].fields.bondsResult & 0xFFFFFFFB;
LABEL_189:
      LODWORD(v177[1].fields.bondsResult) = v178;
      LODWORD(v177[1].fields.bondsResult) = v178 & 0xFFFFFFE7;
    }
  }
  if ( !*p_battleResult )
    goto LABEL_200;
  v179 = (int)(*p_battleResult)[1].fields.itemResult;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
  TerminalPramsManager__ReceiveQuestEndResultInfo(v12, v179 == 1, 0);
}


void BattleResultComponent__ShowJobLevelNoticeDialog(
        BattleResultComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  int32_t QuestId_k__BackingField; // w20
  EventInfoJobLevelNoticeDialogLoader_o *v6; // x21
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_593C221 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoJobLevelNoticeDialogLoader_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593C221 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, callback);
    v4 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v4->static_fields->_QuestId_k__BackingField;
  v6 = (EventInfoJobLevelNoticeDialogLoader_o *)sub_21FFEBC(EventInfoJobLevelNoticeDialogLoader_TypeInfo);
  EventInfoJobLevelNoticeDialogLoader___ctor(v6, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || !v6 )
    sub_21FFECC(Instance, v8);
  if ( !EventInfoJobLevelNoticeDialogLoader__CheckAndShow(
          v6,
          QuestId_k__BackingField,
          (UnityEngine_Transform_o *)Instance[7].monitor,
          1,
          callback,
          0) )
    ActionExtensions__Call(callback, 0);
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

  if ( (byte_593C210 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    byte_593C210 = 1;
  }
  v3 = BattleResultComponent_TypeInfo;
  if ( !*(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo, method);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


System_Collections_IEnumerator_o *BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593C211 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
    byte_593C211 = 1;
  }
  v3 = sub_21FFEBC(BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  bool IsUsePopupQuestReward; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_593C222 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593C222 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  IsUsePopupQuestReward = TerminalPramsManager__IsUsePopupQuestReward(v2->static_fields->_QuestId_k__BackingField, 0);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( IsUsePopupQuestReward )
  {
    if ( Instance )
    {
      RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest((RewardMiniPopupExecutor_o *)Instance, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(Instance, v5);
  }
  if ( !Instance )
    goto LABEL_14;
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

  if ( (byte_593C209 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_10394/*"OpenResult"*/);
    sub_21FFC50(&StringLiteral_11027/*"Performance"*/);
    byte_593C209 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_11027/*"Performance"*/,
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
    sub_21FFECC(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10394/*"OpenResult"*/, 0);
}


void BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_76_0(
        UnityEngine_GameObject_o **prefabObject,
        System_String_o *prefabName,
        AssetData_o *assetData,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v8; // x19
  __int64 v9; // x1
  Il2CppObject *Object_object__58323140; // x21
  Il2CppObject *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  v8 = (MissionNaviTransitionBoardItem_o *)prefabObject;
  if ( (byte_593C234 & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    prefabObject = (UnityEngine_GameObject_o **)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C234 = 1;
  }
  if ( !assetData )
    sub_21FFECC(prefabObject, prefabName);
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              assetData,
                              prefabName,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  v11 = UnityEngine_Object__Instantiate_object__59506996(
          Object_object__58323140,
          root,
          (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
  v8->klass = (MissionNaviTransitionBoardItem_c *)v11;
  sub_21FFBF4(v8, (int32_t)v11, v12, v13, v14, v15, v16, v17);
}


void BattleResultComponent___OpenDataLostBattleResetDialog_b__74_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  MissionNotifyManager_o *Instance; // x0
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_593C232 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C232 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5931FBA )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5931FBA = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0);
  if ( !byte_5935784 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935784 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0);
  if ( !byte_5935A00 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5935A00 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7);
    v8 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  Instance = (MissionNotifyManager_o *)this->fields.fsm;
  static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  if ( !Instance )
LABEL_20:
    sub_21FFECC(Instance, v7);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
}


void BattleResultComponent___OpenFriendshipUpItemSelectDialog_b__75_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  FriendshipUpItemSelectDialog_o *v4; // x20
  Il2CppObject *battleRetryConfirmComponent; // x21
  System_Action_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_593C233 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleRetryConfirmComponent_BaseDialogOpen__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C233 = 1;
  }
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0, 0) )
  {
    v4 = this->fields.friendshipUpItemSelectDialog;
    battleRetryConfirmComponent = (Il2CppObject *)this->fields.battleRetryConfirmComponent;
    v6 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v6, battleRetryConfirmComponent, Method_BattleRetryConfirmComponent_BaseDialogOpen__, 0);
    if ( !v4 )
      sub_21FFECC(v7, v8);
    FriendshipUpItemSelectDialog__Open(v4, v6, 0);
  }
}


void BattleResultComponent___OpenRetryQuest_b__65_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  int32_t QuestId_k__BackingField; // w21

  if ( (byte_593C22F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent__OpenRetryQuest_b__65_1__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593C22F = 1;
  }
  v3 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BattleResultComponent__OpenRetryQuest_b__65_1__, 0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_593205C )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593205C = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_5932720 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_5932720 = 1;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, v4);
    v5 = TerminalPramsManager_TypeInfo;
  }
  EventTutorialMaster__CheckTutorial(
    0,
    96,
    v3,
    QuestId_k__BackingField,
    v5->static_fields->_PhaseCnt_k__BackingField,
    0,
    0,
    0);
}


void BattleResultComponent___OpenRetryQuest_b__65_1(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_593C230 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleResultComponent__OpenRetryQuest_b__65_2__);
    sub_21FFC50(&BattleWindowComponent_EndCall_TypeInfo);
    byte_593C230 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (BattleWindowComponent_EndCall_o *)sub_21FFEBC(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenRetryQuest_b__65_2__,
    0);
  if ( !battleRetryConfirmComponent )
    sub_21FFECC(v5, v6);
  BattleRetryConfirmComponent__Open(battleRetryConfirmComponent, v4, 0);
}


void BattleResultComponent___OpenRetryQuest_b__65_2(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_593C231 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13580/*"StartQuestClearReward"*/);
    byte_593C231 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_13580/*"StartQuestClearReward"*/, 0.3, 0);
}


void BattleResultComponent___ScrollBarMotionCompleteValue_b__50_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_593C22E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C22E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
}


void BattleResultComponent__checkNew(BattleResultComponent_o *this, int32_t resultType, const MethodInfo *method)
{
  __int64 v5; // x20
  BattleResultItemComponent_o *itemResult; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  BattleResultComponent_c *v15; // x0
  const MethodInfo **v16; // x21
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v24; // w0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  BattleDropItem_o *NewDrop; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v33; // x22
  __int64 *v34; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  __int64 v37; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7

  if ( (byte_593C21A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_21FFC50(&Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__);
    sub_21FFC50(&BattleResultComponent___c__DisplayClass58_0_TypeInfo);
    sub_21FFC50(&StringLiteral_10013/*"OPEN"*/);
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    byte_593C21A = 1;
  }
  v5 = sub_21FFEBC(BattleResultComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_39;
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v15 = BattleResultComponent_TypeInfo;
  if ( !*(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo, v14);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v15);
  *(_QWORD *)(v5 + 16) = 0;
  v16 = (const MethodInfo **)(v5 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), 0, v17, v18, v19, v20, v21, v22);
  if ( resultType <= 2 )
  {
    if ( resultType == 1 )
    {
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_39;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, v7);
      goto LABEL_22;
    }
    if ( resultType != 2 )
      goto LABEL_24;
    itemResult = (BattleResultItemComponent_o *)this->fields.eventItemResult;
    if ( !itemResult )
      goto LABEL_39;
LABEL_21:
    NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, v7);
LABEL_22:
    v7 = (const MethodInfo *)NewDrop;
    goto LABEL_23;
  }
  if ( resultType == 3 )
  {
    itemResult = (BattleResultItemComponent_o *)this->fields.eventDamageItemResult;
    if ( !itemResult )
      goto LABEL_39;
    goto LABEL_21;
  }
  if ( resultType != 4 )
    goto LABEL_24;
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  v24 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0, 0);
  v7 = 0;
  if ( v24 )
  {
    itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
    if ( !itemResult )
      goto LABEL_39;
    goto LABEL_21;
  }
LABEL_23:
  *v16 = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v7, v25, v26, v27, v28, v29, v30);
LABEL_24:
  if ( *v16 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    v33 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v33,
      (Il2CppObject *)v5,
      Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__,
      0);
    if ( Instance )
    {
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v33, 0);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( itemResult )
      {
        v34 = &StringLiteral_10013/*"OPEN"*/;
        goto LABEL_38;
      }
    }
LABEL_39:
    sub_21FFECC(itemResult, v7);
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
  {
    itemResult = (BattleResultItemComponent_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_39;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemResult, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37);
    UnityEngine_Object__DestroyImmediate_83246828(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.ServantRewardActionComp,
      0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !itemResult )
      goto LABEL_39;
    CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0, 0);
  }
  itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
  if ( !itemResult )
    goto LABEL_39;
  v34 = &StringLiteral_9636/*"NEXT"*/;
LABEL_38:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v34, 0);
}


void BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_593C20A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_12807/*"START_Begin"*/);
    byte_593C20A = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12807/*"START_Begin"*/, 0);
}


void BattleResultComponent__endCloseEndEventMessage(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593C20F & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C20F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0);
}


void BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_593C21B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_5645/*"END_PROC"*/);
    byte_593C21B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_21FFECC(0, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5645/*"END_PROC"*/, 0);
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
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_593C21E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_593C21E = 1;
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeId);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
  {
    transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.ServantRewardActionComp,
      0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0),
        *p_ServantRewardActionComp = Prefab,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.ServantRewardActionComp,
          (int32_t)Prefab,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0)
    || (ServantRewardAction__SetupCommandCode_44050708(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0) )
  {
LABEL_14:
    sub_21FFECC(transform, v9);
  }
  ServantRewardAction__Play((ServantRewardAction_o *)transform, action, 0.0, 0);
}


void BattleResultComponent__openNewServantView(
        BattleResultComponent_o *this,
        int64_t userSvtId,
        bool isNew,
        bool isEventSvt,
        System_Action_o *action,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Entity; // x21
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  __int64 v17; // x1
  UnityEngine_Object_o *gameObject; // x25
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x25
  ServantRewardAction_o *Prefab; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppClass *klass; // x23
  void *monitor; // x24
  ServantRewardAction_o *v35; // x22
  __int64 v36; // x1
  int32_t v37; // w23
  Il2CppObject v38; // q1
  int64_t v39; // x0
  Il2CppClass *v40; // x8
  int64_t v41; // x21
  int32_t v42; // w3
  ServantRewardAction_o *v43; // x0
  int32_t v44; // w1
  int64_t v45; // x2
  bool v46; // w5
  int32_t v47; // w7
  ServantEntity_o *BaseServantEntity; // x0
  __int64 v49; // x1
  int v50; // w23
  bool IsStatusUp; // w0
  int v52; // w8
  char v53; // w26
  Il2CppClass *v54; // x24
  void *v55; // x25
  ServantRewardAction_o *v56; // x22
  __int64 v57; // x1
  int32_t v58; // w24
  Il2CppObject v59; // q1
  int64_t v60; // x0
  Il2CppClass *v61; // x8
  int64_t v62; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v67; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16

  if ( (byte_593C21D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_593C21D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_38;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
  {
    Instance = (DataManager_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_38;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
    *p_ServantRewardActionComp = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.ServantRewardActionComp,
      0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !v25 )
    goto LABEL_38;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v25,
             (UnityEngine_Transform_o *)Instance,
             1,
             0);
  *p_ServantRewardActionComp = Prefab;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.ServantRewardActionComp,
    (int32_t)Prefab,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( isEventSvt )
  {
    if ( Entity )
    {
      klass = Entity[5].klass;
      monitor = Entity[5].monitor;
      v35 = *p_ServantRewardActionComp;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
      *(_QWORD *)&v66.fields.currentCryptoKey = klass;
      *(_QWORD *)&v66.fields.fakeValue = monitor;
      v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v66, 0);
      v38 = Entity[2];
      *(Il2CppObject *)&v65.fields.currentCryptoKey = Entity[1];
      *(Il2CppObject *)&v65.fields.fakeValue = v38;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v36);
      v64 = v65;
      v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v64, 0);
      v40 = Entity[6].klass;
      *(_QWORD *)&v67.fields.fakeValue = Entity[6].monitor;
      v41 = v39;
      *(_QWORD *)&v67.fields.currentCryptoKey = v40;
      Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v67, 0);
      if ( v35 )
      {
        v42 = (int)Instance;
        v43 = v35;
        v44 = v37;
        v45 = v41;
        v46 = 1;
        v47 = 10;
        goto LABEL_36;
      }
    }
LABEL_38:
    sub_21FFECC(Instance, v12);
  }
  if ( !Entity )
    goto LABEL_38;
  BaseServantEntity = UserServantEntity__get_BaseServantEntity((UserServantEntity_o *)Entity, 0);
  v50 = 2;
  if ( BaseServantEntity )
  {
    IsStatusUp = ServantEntity__get_IsStatusUp(BaseServantEntity, 0);
    if ( isNew )
      v52 = 2;
    else
      v52 = 6;
    v53 = !IsStatusUp || isNew;
    if ( IsStatusUp )
      v50 = v52;
    else
      v50 = 2;
  }
  else
  {
    v53 = 1;
  }
  v54 = Entity[5].klass;
  v55 = Entity[5].monitor;
  v56 = *p_ServantRewardActionComp;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v49);
  *(_QWORD *)&v68.fields.currentCryptoKey = v54;
  *(_QWORD *)&v68.fields.fakeValue = v55;
  v58 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v68, 0);
  v59 = Entity[2];
  *(Il2CppObject *)&v65.fields.currentCryptoKey = Entity[1];
  *(Il2CppObject *)&v65.fields.fakeValue = v59;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v57);
  v63 = v65;
  v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v63, 0);
  v61 = Entity[6].klass;
  *(_QWORD *)&v69.fields.fakeValue = Entity[6].monitor;
  v62 = v60;
  *(_QWORD *)&v69.fields.currentCryptoKey = v61;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v69, 0);
  if ( !v56 )
    goto LABEL_38;
  v42 = (int)Instance;
  v46 = v53 & 1;
  v43 = v56;
  v44 = v58;
  v45 = v62;
  v47 = v50;
LABEL_36:
  ServantRewardAction__Setup(v43, v44, v45, v42, 1, v46, 1, v47, 0);
  Instance = (DataManager_o *)*p_ServantRewardActionComp;
  if ( !*p_ServantRewardActionComp )
    goto LABEL_38;
  ServantRewardAction__Play((ServantRewardAction_o *)Instance, action, 0.0, 0);
}


void BattleResultComponent__openTouchWait(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_21FFECC(0, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_21FFECC(0, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_21FFECC(0, flg);
  UnityEngine_GameObject__SetActive(obj_fronttouch, flg, 0);
}


void BattleResultComponent__showServantRewardAction(
        BattleResultComponent_o *this,
        int64_t userSvtId,
        int32_t type,
        bool isNew,
        const MethodInfo *method)
{
  bool v9; // w22
  System_Action_o *v10; // x23
  const MethodInfo *v11; // x5
  __int64 v12; // x1
  UnityEngine_Component_o *Instance; // x0
  __int64 *v14; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *gameObject; // x21
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593C21C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleResultComponent_endNewView__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_10013/*"OPEN"*/);
    sub_21FFC50(&StringLiteral_9636/*"NEXT"*/);
    byte_593C21C = 1;
  }
  if ( userSvtId < 1 )
  {
    p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
    ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userSvtId);
    if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0, 0) )
    {
      Instance = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
      if ( !*p_ServantRewardActionComp )
        goto LABEL_17;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      UnityEngine_Object__DestroyImmediate_83246828(gameObject, 0);
      *p_ServantRewardActionComp = 0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.ServantRewardActionComp,
        0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0, 0);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v14 = &StringLiteral_9636/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_21FFECC(Instance, v12);
  }
  v9 = Gift__IsEventSvtGet(type, 0);
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0);
  BattleResultComponent__openNewServantView(this, userSvtId, isNew, v9, v10, v11);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v14 = &StringLiteral_10013/*"OPEN"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v14, 0);
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
  int32_t _1__state; // w21
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  UnityEngine_WaitForSeconds_o *v8; // x20
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_593C238 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_593C238 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _4__this = this->fields.__4__this;
      this->fields.__1__state = -1;
      if ( !_4__this
        || (itemResult = _4__this->fields.itemResult) == 0
        || (itemWindow = itemResult->fields.itemWindow) == 0
        || (itemObjectList = itemWindow->fields.itemObjectList) == 0 )
      {
        sub_21FFECC(_4__this, method);
      }
      if ( itemObjectList->fields._size >= 8 )
        BattleResultComponent__ScrollBarMotion(_4__this, method);
      else
        BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, method);
    }
  }
  else
  {
    this->fields.__1__state = -1;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_21FFEBC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v8, 0.1, 0);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)v8,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    this->fields.__1__state = 1;
  }
  return _1__state == 0;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C235 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultComponent___c_TypeInfo);
    byte_593C235 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleResultComponent___c_TypeInfo->static_fields,
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
  Il2CppObject *_4__this; // x19
  int64_t userSvtId; // x20
  System_Action_o *v7; // x21
  const MethodInfo *v8; // x3
  struct BattleDropItem_o *v9; // x8
  struct BattleDropItem_o *v10; // x8
  char v11; // w20
  Il2CppObject *v12; // x19
  int64_t v13; // x21
  System_Action_o *v14; // x22
  const MethodInfo *v15; // x5

  v2 = this;
  if ( (byte_593C236 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    this = (BattleResultComponent___c__DisplayClass58_0_o *)sub_21FFC50(&Method_BattleResultComponent_endNewView__);
    byte_593C236 = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsCommandCode_47357784(newDrop->fields.type, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.newDrop;
    if ( v4 )
    {
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      userSvtId = v4->fields.userSvtId;
      v7 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v7, _4__this, Method_BattleResultComponent_endNewView__, 0);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v7, v8);
        return;
      }
    }
LABEL_12:
    sub_21FFECC(this, method);
  }
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsEventSvtGet_47357452(v9->fields.type, 0);
  v10 = v2->fields.newDrop;
  if ( !v10 )
    goto LABEL_12;
  v11 = (char)this;
  v12 = (Il2CppObject *)v2->fields.__4__this;
  v13 = v10->fields.userSvtId;
  v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v14, v12, Method_BattleResultComponent_endNewView__, 0);
  if ( !v12 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v12, v13, v11 & 1, v11 & 1, v14, v15);
}


void BattleResultComponent___c__DisplayClass76_0___ctor(
        BattleResultComponent___c__DisplayClass76_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleResultComponent___c__DisplayClass76_0___LoadFriendshipUpItemAsset_b__1(
        BattleResultComponent___c__DisplayClass76_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  void *_4__this; // x0
  const MethodInfo *v11; // x4
  struct BattleResultComponent_o *v12; // x8
  AssetData_o *cashedFriendshipUpItemAssetData; // x20
  UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x21
  struct BattleResultComponent_o *v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct BattleResultComponent_o *v22; // x8
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  struct BattleResultComponent_o *v24; // x8
  struct System_Action_o *callback; // x8
  UnityEngine_GameObject_o *prefabObject; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593C237 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultComponent_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_7157/*"FriendshipUpItemSelectDialog"*/);
    byte_593C237 = 1;
  }
  _4__this = this->fields.__4__this;
  prefabObject = 0;
  if ( !_4__this )
    goto LABEL_18;
  *((_QWORD *)_4__this + 26) = assetData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)((char *)_4__this + 208),
    (int32_t)assetData,
    (System_String_o *)method,
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
  if ( !*(&BattleResultComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo, assetData);
  BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_76_0(
    &prefabObject,
    (System_String_o *)StringLiteral_7157/*"FriendshipUpItemSelectDialog"*/,
    cashedFriendshipUpItemAssetData,
    friendshipUpItemDialogRoot,
    v11);
  _4__this = prefabObject;
  if ( !prefabObject )
    goto LABEL_18;
  v15 = this->fields.__4__this;
  _4__this = UnityEngine_GameObject__GetComponent_object_(
               prefabObject,
               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
  if ( !v15 )
    goto LABEL_18;
  v15->fields.friendshipUpItemSelectDialog = (struct FriendshipUpItemSelectDialog_o *)_4__this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v15->fields.friendshipUpItemSelectDialog,
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, assetData);
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
    sub_21FFECC(_4__this, assetData);
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
  struct GetSvts_array *getJoinSvts; // x8
  int max_length; // w9
  bool v4; // vf
  int v5; // w9
  GetSvts_o **m_Items; // x8
  GetSvts_o *v7; // x11
  int v8; // w10

  getJoinSvts = this->fields.getJoinSvts;
  if ( !getJoinSvts
    || (max_length = getJoinSvts->max_length, v4 = __OFSUB__(max_length, 1), v5 = max_length - 1, (v5 < 0) ^ v4) )
  {
    LOBYTE(this) = 0;
  }
  else
  {
    m_Items = getJoinSvts->m_Items;
    do
    {
      v7 = *m_Items;
      if ( !*m_Items )
        sub_21FFECC(this, method);
      v8 = v5;
      this = (BattleResultComponent_resultData_o *)v7->fields.isNew;
      if ( v7->fields.isNew )
        break;
      --v5;
      ++m_Items;
    }
    while ( v8 );
  }
  return (char)this;
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