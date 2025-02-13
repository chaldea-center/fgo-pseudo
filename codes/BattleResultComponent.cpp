void __fastcall BattleResultComponent___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7

  if ( (byte_4BDF925 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_10766/*"PartyOrganization/FriendshipUpItem"*/);
    byte_4BDF925 = 1;
  }
  BattleResultComponent_TypeInfo->static_fields->FriendshipUpItemLoadAssetPath = (struct System_String_o *)StringLiteral_10766/*"PartyOrganization/FriendshipUpItem"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleResultComponent_TypeInfo->static_fields,
    StringLiteral_10766/*"PartyOrganization/FriendshipUpItem"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void __fastcall BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultEventItemComponent_o *eventItemResult; // x0
  PlayMakerFSM_o *fsm; // x8
  __int64 *v5; // x9

  if ( (byte_4BDF911 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_3632/*"CLOSE"*/);
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    byte_4BDF911 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
    sub_1C22094(eventItemResult, method);
  }
  v5 = &StringLiteral_9432/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v5 = &StringLiteral_3632/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0LL);
}


void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDF90E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF90E = 1;
  }
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchGuard, 0, 0LL);
  touchGuard = (UnityEngine_GameObject_o *)this->fields.nextButtonSpr;
  if ( !touchGuard
    || (v4.fields.r = 1.0,
        v4.fields.g = 1.0,
        v4.fields.b = 1.0,
        v4.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)touchGuard, v4, 0LL),
        (touchGuard = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_1C22094(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_c *v3; // x0
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  if ( (byte_4BDF918 & 1) == 0 )
  {
    sub_1C21E38(&AndroidBackKeyManager_TypeInfo);
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&StringLiteral_23523/*"sendFsmEvent"*/);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF918 = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  ServantAssetLoadManager__EndRetryTransition(Instance, 0LL);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0LL, 0LL) )
  {
    Instance = (ServantAssetLoadManager_o *)this->fields.battleRetryConfirmComponent;
    if ( !Instance )
      goto LABEL_15;
    BattleRetryConfirmComponent__Close((BattleRetryConfirmComponent_o *)Instance, 0LL);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  Instance = (ServantAssetLoadManager_o *)this->fields.endtargetObject;
  if ( !Instance )
LABEL_15:
    sub_1C22094(Instance, v5);
  UnityEngine_GameObject__SendMessage_70850984(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23523/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5604/*"END_PROC"*/,
    0LL);
}


void __fastcall BattleResultComponent__EndRetryConfirmDialog(
        BattleResultComponent_o *this,
        bool isDecide,
        int32_t boostId,
        const MethodInfo *method)
{
  BattleResultComponent_c *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BDF91B & 1) == 0 )
  {
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    byte_4BDF91B = 1;
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
      sub_1C22094(0LL, v8);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9432/*"NEXT"*/, 0LL);
  }
}


void __fastcall BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *v7; // x21
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BDF901 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF901 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v7 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BD6BB1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v7 )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition(v7, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  gameObject = this->fields.obj_basebg;
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bondsResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultBondsComponent__Init((BattleResultBondsComponent_o *)gameObject, v6);
  gameObject = (UnityEngine_GameObject_o *)this->fields.expResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultExpComponent__Init((BattleResultExpComponent_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultItemComponent__Init((BattleResultItemComponent_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventDamageItemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, 0LL);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventFortificationItemResult;
    if ( !gameObject )
      goto LABEL_36;
    BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, 0LL);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.friendResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultFriendComponent__Init((BattleResultFriendComponent_o *)gameObject, releasePerformanceObject, 0LL);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.battleRetryConfirmComponent;
    if ( !gameObject )
      goto LABEL_36;
    BattleRetryConfirmComponent__Init((BattleRetryConfirmComponent_o *)gameObject, 0LL);
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_36;
    v12 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v12, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v13, v14, v15, v16, v17, v18);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)p_screenTouch,
          (int64_t)Component_object,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 14)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_36:
    sub_1C22094(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  PlayMakerFSM_o *fsm; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v8; // w20
  Il2CppObject *v9; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BDF920 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_12392/*"SKIP"*/);
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    byte_4BDF920 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
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
                            0LL);
  if ( EventDataLostBattleId == -1 )
    goto LABEL_28;
  v8 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 )
LABEL_30:
    sub_1C22094(fsm, v3);
  if ( UserEventDataLostMaster__TryGetEntity(
         (UserEventDataLostMaster_o *)v9,
         &entity,
         (int64_t)fsm[2].fields.addEventHandlers->fields.original_method_info,
         v8,
         0LL) )
  {
    fsm = (PlayMakerFSM_o *)entity;
    if ( !entity )
      goto LABEL_30;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0LL) )
    {
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_30;
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9432/*"NEXT"*/, 0LL);
    }
  }
LABEL_28:
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_30;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12392/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__LoadFriendshipUpItemAsset(
        BattleResultComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x19
  FriendshipUpItemSelectDialog_o *isExistAssetStorage; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x22
  BattleResultComponent_c *v22; // x0
  System_String_o *FriendshipUpItemLoadAssetPath; // x20
  BattleResultComponent_c *v24; // x0
  System_String_o *v25; // x20
  AssetLoader_LoadEndDataHandler_o *v26; // x21

  if ( (byte_4BDF923 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__);
    sub_1C21E38(&BattleResultComponent___c__DisplayClass75_0_TypeInfo);
    byte_4BDF923 = 1;
  }
  v5 = sub_1C22084(BattleResultComponent___c__DisplayClass75_0_TypeInfo);
  BattleResultComponent___c__DisplayClass75_0___ctor((BattleResultComponent___c__DisplayClass75_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_21;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = callback;
  v14 = v5 + 24;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)callback, v15, v16, v17, v18, v19, v20);
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0LL, 0LL) )
  {
    isExistAssetStorage = this->fields.friendshipUpItemSelectDialog;
    if ( !isExistAssetStorage )
      goto LABEL_21;
    FriendshipUpItemSelectDialog__Init(isExistAssetStorage, 0LL);
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
                                                            0LL);
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
    sub_1C22094(isExistAssetStorage, v7);
  }
  v24 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v24 = BattleResultComponent_TypeInfo;
  }
  v25 = v24->static_fields->FriendshipUpItemLoadAssetPath;
  v26 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v25, v26, 1, 0LL);
}


// attributes: thunk
void __fastcall BattleResultComponent__OnDestroy(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent__ReleaseFriendshipUpItemAsset(this, method);
}


void __fastcall BattleResultComponent__OpenBonds(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL), (obj_fronttouch = this->fields.obj_basebg) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL),
        (obj_fronttouch = (UnityEngine_GameObject_o *)this->fields.bondsResult) == 0LL) )
  {
    sub_1C22094(obj_fronttouch, method);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, method);
}


void __fastcall BattleResultComponent__OpenDataLostBattleResetDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v7; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4BDF921 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__);
    sub_1C21E38(&DataLostResetManager_TypeInfo);
    this = (BattleResultComponent_o *)sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDF921 = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_1C22094(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v7, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__, 0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v7, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDF912 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_12392/*"SKIP"*/);
    byte_4BDF912 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.resultSprite;
  if ( !Instance )
    goto LABEL_18;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.eventItemResult;
  if ( !Instance )
    goto LABEL_18;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_fronttouch;
  if ( !Instance )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_basebg;
  if ( !Instance )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
  if ( !Instance )
    goto LABEL_18;
  if ( BattleResultEventDamageItemComponent__isDraw((BattleResultEventDamageItemComponent_o *)Instance, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
    if ( !Instance )
      goto LABEL_18;
    if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, 0LL) )
    {
      Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, 0LL);
        return;
      }
LABEL_18:
      sub_1C22094(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12392/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_4BDF91F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_12392/*"SKIP"*/);
    byte_4BDF91F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.resultSprite;
  if ( !Instance )
    goto LABEL_21;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.eventItemResult;
  if ( !Instance )
    goto LABEL_21;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
  if ( !Instance )
    goto LABEL_21;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_fronttouch;
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_basebg;
  if ( !Instance )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
    if ( !Instance )
      goto LABEL_21;
    if ( BattleResultEventFortificationItemComponent__IsFortificationInfos(
           (BattleResultEventFortificationItemComponent_o *)Instance,
           0LL) )
    {
      Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__OpenEventFortification((BattleResultEventItemComponent_o *)Instance, 0LL);
        return;
      }
LABEL_21:
      sub_1C22094(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12392/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDF910 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_12392/*"SKIP"*/);
    byte_4BDF910 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.resultSprite;
  if ( !Instance )
    goto LABEL_14;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_fronttouch;
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_basebg;
  if ( !Instance )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  Instance = (CommonUI_o *)this->fields.eventItemResult;
  if ( !Instance )
    goto LABEL_14;
  if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.eventItemResult;
    if ( Instance )
    {
      BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, 0LL);
      return;
    }
LABEL_14:
    sub_1C22094(Instance, v4);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12392/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenExp(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL), (obj_fronttouch = this->fields.obj_basebg) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL),
        (obj_fronttouch = (UnityEngine_GameObject_o *)this->fields.expResult) == 0LL) )
  {
    sub_1C22094(obj_fronttouch, method);
  }
  BattleResultExpComponent__Open((BattleResultExpComponent_o *)obj_fronttouch, 0LL);
}


void __fastcall BattleResultComponent__OpenFollowerSceneForRetry(
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
  bool IsQuestClear_38834244; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v14; // w22
  Il2CppObject *v15; // x21
  TerminalPramsManager_c *v16; // x0
  const MethodInfo *v17; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BDF91C & 1) == 0 )
  {
    sub_1C21E38(&CondType_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C21E38(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C21E38(&MapControl_QuestInfo_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDF91C = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v9 = (MapControl_QuestInfo_o *)sub_1C22084(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v9, 0LL);
  questId = v9->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_38834244 = CondType__IsQuestClear_38834244(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7263 = 1;
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
                            !IsQuestClear_38834244,
                            &fixedVal,
                            0LL);
  v9->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0LL);
  v9->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v14 = fixedVal;
  else
    v14 = ActConsume;
  v15 = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD927A )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD927A = 1;
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
          0LL) )
    return;
  v16 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->lastPlayQuestConsumeAp = v14;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C22094(Instance, v5);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v17);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_resultData_o *battleResult; // x0
  BattleResultComponent_c *v4; // x0

  if ( (byte_4BDF90F & 1) == 0 )
  {
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_13215/*"StartQuestClearReward"*/);
    byte_4BDF90F = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_14;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13215/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleResult = (BattleResultComponent_resultData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResult
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)battleResult, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleResult, 0, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.friendResult) == 0LL) )
  {
LABEL_14:
    sub_1C22094(battleResult, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)battleResult, 0LL);
  v4 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v4);
}


void __fastcall BattleResultComponent__OpenFriendshipUpItemSelectDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDF922 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__);
    byte_4BDF922 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__,
    0LL);
  if ( !battleRetryConfirmComponent )
    sub_1C22094(v5, v6);
  BattleRetryConfirmComponent__BaseDialogClose(battleRetryConfirmComponent, v4, 0LL);
}


void __fastcall BattleResultComponent__OpenItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *eventEndTitle; // x8
  Il2CppObject *Instance; // x0
  System_String_o *v5; // x20
  System_String_o *eventEndMessage; // x21
  CommonUI_o *v7; // x22
  NotificationDialog_ClickDelegate_o *v8; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_4BDF907 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultComponent_endCloseEndEventMessage__);
    sub_1C21E38(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF907 = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v7 = (CommonUI_o *)Instance;
    v8 = (NotificationDialog_ClickDelegate_o *)sub_1C22084(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_31130684(
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
      0LL,
      0LL,
      0,
      0,
      0LL,
      1,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  resultSprite = (UnityEngine_Component_o *)this->fields.resultSprite;
  if ( !resultSprite
    || (resultSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(resultSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSprite, 0, 0LL),
        (resultSprite = (UnityEngine_Component_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSprite, 0, 0LL),
        (resultSprite = (UnityEngine_Component_o *)this->fields.obj_basebg) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resultSprite, 1, 0LL),
        (resultSprite = (UnityEngine_Component_o *)this->fields.itemResult) == 0LL) )
  {
LABEL_13:
    sub_1C22094(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, 0LL);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x21
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  int32_t v6; // w22
  int32_t m_CancellationTokenSource; // w23
  System_Action_o *v8; // x21
  TerminalPramsManager_c *v9; // x0
  int32_t QuestId_k__BackingField; // w22
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4BDF919 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultComponent__OpenRetryQuest_b__65_0__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDF919 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  v6 = *((_DWORD *)&battleRetryConfirmComponent->fields.singleItem->fields.UnityEngine_Behaviour_Fields + 1);
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !LODWORD(battleRetryConfirmComponent->fields.friendshipUpItemUseButton) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CancellationTokenSource = (int32_t)battleRetryConfirmComponent->fields.singleItem->fields.m_CancellationTokenSource;
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4BD9099 = 1;
  }
  if ( !LODWORD(battleRetryConfirmComponent->fields.friendshipUpItemUseButton) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_39;
  PartyOrganizationUtility__SetQuestCache(
    (PartyOrganizationUtility_o *)Instance,
    v6,
    m_CancellationTokenSource,
    HIDWORD(battleRetryConfirmComponent->fields.singleItem->klass),
    0LL);
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_39;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent__OpenRetryQuest_b__65_0__, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BD7264 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      byte_4BD7264 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v9->static_fields->_QuestId_k__BackingField;
    if ( !byte_4BD7263 )
    {
      sub_1C21E38(&TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
      byte_4BD7263 = 1;
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
      0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
    goto LABEL_39;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)UnityEngine_Object__op_Inequality(
                                                                   Component_object,
                                                                   0LL,
                                                                   0LL);
  if ( ((unsigned __int8)battleRetryConfirmComponent & 1) != 0 )
  {
    if ( Component_object )
    {
      battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)Component_object[2].monitor;
      if ( battleRetryConfirmComponent )
      {
        BattlePerformance__ClearObjForceDestroy((BattlePerformance_o *)battleRetryConfirmComponent, 0LL);
        return;
      }
    }
LABEL_39:
    sub_1C22094(battleRetryConfirmComponent, v3);
  }
}


void __fastcall BattleResultComponent__OpenTutorial(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleEventTutorial_o *eventTutorial; // x0
  BattleEventTutorial_o *v4; // x20
  System_Action_o *v5; // x21
  BattleEventTutorial_o *v6; // x20
  System_Action_o *v7; // x21
  BattleEventTutorial_o *v8; // x20
  System_Action_o *v9; // x21

  if ( (byte_4BDF906 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultComponent_OpenTutorial__);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF906 = 1;
  }
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  if ( !BattleEventTutorial__isResultPhase(eventTutorial, 0LL) )
    goto LABEL_19;
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  eventTutorial = (BattleEventTutorial_o *)BattleEventTutorial__isResult(eventTutorial, 0LL);
  v4 = this->fields.eventTutorial;
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    v5 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v4 )
    {
      BattleEventTutorial__callResult(v4, v5, 0LL);
      return;
    }
LABEL_23:
    sub_1C22094(eventTutorial, method);
  }
  if ( !v4 )
    goto LABEL_23;
  if ( BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0LL) )
  {
    eventTutorial = (BattleEventTutorial_o *)this->fields.battleResult;
    if ( !eventTutorial )
      goto LABEL_23;
    if ( BattleResultComponent_resultData__isWin((BattleResultComponent_resultData_o *)eventTutorial, 0LL) )
    {
      v6 = this->fields.eventTutorial;
      v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
      if ( !v6 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v6, v7, 0LL);
      return;
    }
  }
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  if ( !BattleEventTutorial__isResultLose(eventTutorial, 0LL) )
    goto LABEL_19;
  eventTutorial = (BattleEventTutorial_o *)this->fields.battleResult;
  if ( !eventTutorial )
    goto LABEL_23;
  if ( !BattleResultComponent_resultData__isWin((BattleResultComponent_resultData_o *)eventTutorial, 0LL) )
  {
    v8 = this->fields.eventTutorial;
    v9 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( !v8 )
      goto LABEL_23;
    BattleEventTutorial__callResultLose(v8, v9, 0LL);
  }
  else
  {
LABEL_19:
    eventTutorial = (BattleEventTutorial_o *)this->fields.fsm;
    if ( !eventTutorial )
      goto LABEL_23;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
  }
}


void __fastcall BattleResultComponent__PushFollowerScene(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
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

  if ( (byte_4BDF91D & 1) == 0 )
  {
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    sub_1C21E38(&BattleSetupInfo_TypeInfo);
    sub_1C21E38(&RandomLimitCountManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDF91D = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  v4 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v4);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.8, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD9099 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9099 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4BD7264 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BD7263 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4BD7263 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v5->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BattleSetupInfo_o *)sub_1C22084(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v9, 0LL);
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
                               0LL);
  v12 = Instance;
  if ( boostId )
  {
    if ( !Instance )
      goto LABEL_29;
    LODWORD(Instance[3].monitor) = boostId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C22094(Instance, v11);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v12, 0LL);
}


void __fastcall BattleResultComponent__QpFix(BattleResultComponent_o *this, const MethodInfo *method)
{
  struct BattleResultItemComponent_o *itemResult; // x9
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleResultComponent_o *v4; // x19
  struct BattleResultItemComponent_o *v5; // x9
  struct BattleResultComponent_resultData_o *v6; // x8

  itemResult = this->fields.itemResult;
  if ( !itemResult
    || (battleResult = this->fields.battleResult, v4 = this, !battleResult)
    || (this = (BattleResultComponent_o *)itemResult->fields.getQpLabel) == 0LL
    || (UILabel__set_text((UILabel_o *)this, battleResult->fields.ultimateGetQpText, 0LL),
        (v5 = v4->fields.itemResult) == 0LL)
    || (v6 = v4->fields.battleResult) == 0LL
    || (this = (BattleResultComponent_o *)v5->fields.nowQpLabel) == 0LL )
  {
    sub_1C22094(this, method);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ReleaseFriendshipUpItemAsset(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_cashedFriendshipUpItemAssetData; // x19
  AssetData_o *v4; // x20
  struct AssetData_o *cashedFriendshipUpItemAssetData; // t1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF924 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDF924 = 1;
  }
  cashedFriendshipUpItemAssetData = this->fields.cashedFriendshipUpItemAssetData;
  p_cashedFriendshipUpItemAssetData = (PartyOrganizationUtility_o *)&this->fields.cashedFriendshipUpItemAssetData;
  v4 = cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39034872(v4, 0LL);
    p_cashedFriendshipUpItemAssetData->klass = 0LL;
    sub_1C21DDC(p_cashedFriendshipUpItemAssetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_4BDF904 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF904 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0LL), (v5 = this->fields.screenTouch) == 0LL) )
      sub_1C22094(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  if ( (byte_4BDF91E & 1) == 0 )
  {
    sub_1C21E38(&BattlePerformance_TypeInfo);
    byte_4BDF91E = 1;
  }
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
  BattlePerformance__AdjustSmoothnessByCurrentSpeed(0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotion(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Object_array *v13; // x20
  __int64 v14; // x0
  int64_t v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x21
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x21
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int64_t v81; // x21
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x21
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x21
  System_Collections_Hashtable_o *v114; // x0
  __int64 v115; // x0
  int v116; // [xsp+Ch] [xbp-44h] BYREF
  int v117; // [xsp+10h] [xbp-40h] BYREF
  int v118; // [xsp+14h] [xbp-3Ch] BYREF
  int v119; // [xsp+18h] [xbp-38h] BYREF
  int v120; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BDF90B & 1) == 0 )
  {
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_12792/*"ScrollBarMotionCompleteValue"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_12793/*"ScrollBarMotionUpdateValue"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_19077/*"easeType"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF90B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61763404(gameObject, 0LL);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = sub_1C21EE0(object___TypeInfo, 14LL);
  if ( !v5 )
    sub_1C22094(0LL, v6);
  v13 = (System_Object_array *)v5;
  v14 = StringLiteral_19990/*"from"*/;
  if ( StringLiteral_19990/*"from"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_19990/*"from"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_19990/*"from"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v13->max_length )
    goto LABEL_67;
  v13->m_Items[0] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)v13->m_Items, v15, v7, v8, v9, v10, v11, v12);
  v120 = 0;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v120, v16, v17, v18);
  v25 = v14;
  if ( v14 )
  {
    v14 = sub_1C21F74(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_67;
  v13->m_Items[1] = (Il2CppObject *)v25;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v14 = StringLiteral_24401/*"to"*/;
  if ( StringLiteral_24401/*"to"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_24401/*"to"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_24401/*"to"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_67;
  v13->m_Items[2] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[2], v15, v26, v27, v28, v29, v30, v31);
  v119 = 1065353216;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v119, v32, v33, v34);
  v41 = v14;
  if ( v14 )
  {
    v14 = sub_1C21F74(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_67;
  v13->m_Items[3] = (Il2CppObject *)v41;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[3], v41, v35, v36, v37, v38, v39, v40);
  v14 = StringLiteral_22688/*"onupdate"*/;
  if ( StringLiteral_22688/*"onupdate"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_22688/*"onupdate"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13->max_length <= 4 )
    goto LABEL_67;
  v13->m_Items[4] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[4], v15, v42, v43, v44, v45, v46, v47);
  v14 = StringLiteral_12793/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12793/*"ScrollBarMotionUpdateValue"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_12793/*"ScrollBarMotionUpdateValue"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_12793/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13->max_length <= 5 )
    goto LABEL_67;
  v13->m_Items[5] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[5], v15, v48, v49, v50, v51, v52, v53);
  v14 = StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13->max_length <= 6 )
    goto LABEL_67;
  v13->m_Items[6] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[6], v15, v54, v55, v56, v57, v58, v59);
  v14 = StringLiteral_12792/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12792/*"ScrollBarMotionCompleteValue"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_12792/*"ScrollBarMotionCompleteValue"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_12792/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13->max_length <= 7 )
    goto LABEL_67;
  v13->m_Items[7] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[7], v15, v60, v61, v62, v63, v64, v65);
  v14 = StringLiteral_19077/*"easeType"*/;
  if ( StringLiteral_19077/*"easeType"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_19077/*"easeType"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_19077/*"easeType"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13->max_length <= 8 )
    goto LABEL_67;
  v13->m_Items[8] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[8], v15, v66, v67, v68, v69, v70, v71);
  v118 = 17;
  v14 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v118, v72, v73, v74);
  v81 = v14;
  if ( v14 )
  {
    v14 = sub_1C21F74(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
  }
  if ( v13->max_length <= 9 )
    goto LABEL_67;
  v13->m_Items[9] = (Il2CppObject *)v81;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[9], v81, v75, v76, v77, v78, v79, v80);
  v14 = StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_24360/*"time"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13->max_length <= 0xA )
    goto LABEL_67;
  v13->m_Items[10] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[10], v15, v82, v83, v84, v85, v86, v87);
  v117 = 1065353216;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v117, v88, v89, v90);
  v97 = v14;
  if ( v14 )
  {
    v14 = sub_1C21F74(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
  }
  if ( v13->max_length <= 0xB )
    goto LABEL_67;
  v13->m_Items[11] = (Il2CppObject *)v97;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[11], v97, v91, v92, v93, v94, v95, v96);
  v14 = StringLiteral_18865/*"delay"*/;
  if ( StringLiteral_18865/*"delay"*/ )
  {
    v14 = sub_1C21F74(StringLiteral_18865/*"delay"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_68;
    v15 = StringLiteral_18865/*"delay"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v13->max_length <= 0xC )
    goto LABEL_67;
  v13->m_Items[12] = (Il2CppObject *)v15;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[12], v15, v98, v99, v100, v101, v102, v103);
  v116 = 0;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v116, v104, v105, v106);
  v113 = v14;
  if ( v14 )
  {
    v14 = sub_1C21F74(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_68:
      v115 = sub_1C220B8(v14);
      sub_1C21F60(v115, 0LL);
    }
  }
  if ( v13->max_length <= 0xD )
LABEL_67:
    sub_1C2209C(v14, v15);
  v13->m_Items[13] = (Il2CppObject *)v113;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v13->m_Items[13], v113, v107, v108, v109, v110, v111, v112);
  v114 = iTween__Hash(v13, 0LL);
  iTween__ValueTo(v4, v114, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionCompleteValue(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  BattleResultItemComponent_o *itemResult; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  System_Action_o *v6; // x21

  v2 = this;
  if ( (byte_4BDF90D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__);
    this = (BattleResultComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4BDF90D = 1;
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
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    itemResult = v2->fields.itemResult;
  }
  v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)v2,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_1C22094(this, method);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v6, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4BDF90C & 1) == 0 )
  {
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF90C = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1C22094(0LL, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_61763404(gameObject, 0LL);
    BattleResultComponent__ScrollBarMotionCompleteValue(this, v7);
  }
}


void __fastcall BattleResultComponent__Set(
        BattleResultComponent_o *this,
        BattleResultComponent_resultData_array *resultList,
        BattleEventTutorial_o *tutorial,
        AssetData_o *resultAsset,
        System_Int32_array *viewGroupIds,
        BattleData_o *bData,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  BattleResultComponent_o *v12; // x22
  BattleResultComponent_resultData_o *v13; // x1
  BattleResultComponent_o **p_battleResult; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  TerminalPramsManager_c *v21; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v24; // x0
  int32_t v25; // w19
  BalanceConfig_c *v26; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v28; // x0
  BattleResultComponent_o *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *friendResult; // x0
  BattleResultComponent___c_c *v31; // x8
  BattleResultComponent_o *v32; // x26
  System_Converter_TInput__TOutput__o *_9__39_0; // x19
  Il2CppObject *v34; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  System_String_array *v42; // x0
  System_String_o *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventItemResult; // x0
  BattleResultComponent___c_c *v45; // x8
  BattleResultComponent_o *v46; // x26
  System_Converter_TInput__TOutput__o *_9__39_1; // x19
  Il2CppObject *v48; // x23
  struct BattleResultComponent___c_StaticFields *v49; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_String_array *v56; // x0
  System_String_o *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  int64_t m_CancellationTokenSource; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct BattleResultComponent_resultData_o *v71; // x8
  BattleData_o *v72; // x28
  int64_t eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v74; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v76; // x26
  BattleResultComponent_resultData_o *battleResult; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x8
  Il2CppObject *Master_object; // x19
  int32_t v80; // w23
  int32_t QuestId; // w24
  const MethodInfo *v82; // x7
  bool v83; // w27
  BattleResultComponent_resultData_o *v84; // x19
  struct BattleInfoData_o *battle_info; // x8
  BattleResultBondsComponent_o *v86; // x23
  UserServantCollectionEntity_array *oldUserSvtCollection; // x28
  DeckData_o *myDeck; // x24
  int32_t followerType; // w29
  BattleUserServantData_array *userSvt; // x25
  UserServantCollectionEntity_array *v91; // x2
  struct BattleResultEventItemComponent_o *v92; // x9
  struct System_Threading_CancellationTokenSource_o *v93; // x8
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v95; // x11
  struct BattleResultEventItemComponent_o *v96; // x9
  struct System_Threading_CancellationTokenSource_o *v97; // x8
  QuestEntity_o *quest_ent; // x8
  UserGameEntity_o *parentComp; // x29
  BattleResultItemComponent_o *v100; // x25
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  struct UnityEngine_GameObject_o *obj_basebg; // x20
  int32_t expResult_high; // w19
  struct BattleResultItemComponent_o *dropupinfos; // x23
  struct BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x24
  int32_t firstClearRewardQp; // w26
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  BattleResultComponent_o *v114; // x8
  struct BattleResultItemComponent_o *v115; // x9
  struct UILabel_o *getQpLabel; // x9
  int64_t mText; // x1
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  struct BattleResultItemComponent_o *v124; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v126; // x9
  int64_t v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  struct UISprite_o *nextButtonSpr; // x8
  Il2CppObject *v132; // x0
  struct BattleResultItemComponent_o *v133; // x8
  Il2CppObject *v134; // x23
  UILabel_o *v135; // x19
  System_String_o *v136; // x0
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  struct BattleResultItemComponent_o *v140; // x8
  struct UISprite_o *v141; // x9
  UILabel_o *v142; // x19
  Il2CppObject *v143; // x0
  BattleResultFriendComponent_o *v144; // x19
  int32_t v145; // w23
  int32_t m_CancellationTokenSource_high; // w24
  int64_t v147; // x25
  int32_t endtargetObject; // w26
  int32_t endtargetObject_high; // w27
  struct BattleResultComponent_resultData_o *v150; // x8
  struct BattleResultComponent_resultData_o *v151; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v153; // x8
  struct BattleResultComponent_resultData_o *v154; // x8
  struct BattleInfoData_o *v155; // x8
  struct DeckData_o *v156; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v159; // x20
  char v160; // w22
  BattleResultComponent_o *v161; // x19
  int32_t v162; // w23
  int32_t EventProgressValueSaveData_43358256; // w0
  int v164; // w8
  TerminalPramsManager_c *v165; // x0
  struct AssetData_o *cashedFriendshipUpItemAssetData; // x8
  bool isWin; // w19
  const MethodInfo *boostRate; // [xsp+10h] [xbp-F0h]
  struct UnityEngine_GameObject_o *FriendIconPrefab; // [xsp+50h] [xbp-B0h]
  struct BattleResultFriendComponent_o *v170; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  System_Int32_array *v172; // [xsp+68h] [xbp-98h]
  AssetData_o *resultAssetb; // [xsp+70h] [xbp-90h]
  BattleResultComponent_resultData_array *result; // [xsp+78h] [xbp-88h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+80h] [xbp-80h]
  BattleData_o *battleData; // [xsp+88h] [xbp-78h]
  int rightAnchor_high; // [xsp+90h] [xbp-70h] BYREF
  int v179; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v181; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = this;
  if ( (byte_4BDF905 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&System_Converter_int__string__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&EventInfoUIProgressControl_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&QuestKnockdownResult_TypeInfo);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&Method_BattleResultComponent___c__Set_b__39_0__);
    sub_1C21E38(&Method_BattleResultComponent___c__Set_b__39_1__);
    sub_1C21E38(&BattleResultComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_19961/*"freeShopIds"*/);
    sub_1C21E38(&StringLiteral_11318/*"RESULT_QP_PLUS"*/);
    sub_1C21E38(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C21E38(&StringLiteral_23337/*"returnRarePriShopIds"*/);
    this = (BattleResultComponent_o *)sub_1C21E38(&StringLiteral_866/*","*/);
    byte_4BDF905 = 1;
  }
  entity = 0LL;
  if ( !resultList )
    goto LABEL_204;
  if ( !resultList->max_length )
    goto LABEL_205;
  v13 = resultList->m_Items[0];
  result = resultList;
  v12->fields.battleResult = v13;
  p_battleResult = (BattleResultComponent_o **)&v12->fields.battleResult;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v12->fields.battleResult,
    (int64_t)v13,
    (int64_t)tutorial,
    (int32_t)resultAsset,
    (System_String_o *)viewGroupIds,
    (BattleSetupInfo_o *)bData,
    (FollowerInfo_o *)method,
    v7);
  v12->fields.eventTutorial = tutorial;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->fields.eventTutorial, (int64_t)tutorial, v15, v16, v17, v18, v19, v20);
  this = (BattleResultComponent_o *)v12->fields.battleResult;
  if ( !this )
    goto LABEL_204;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__isWin(
                                      (BattleResultComponent_resultData_o *)this,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !bData )
      goto LABEL_204;
    if ( !BattleData__IsNotResetResultDispFlag(bData, 0LL) )
    {
      this = *p_battleResult;
      if ( !*p_battleResult )
        goto LABEL_204;
      BattleResultComponent_resultData__setDefaultDispFlag((BattleResultComponent_resultData_o *)this, 0LL);
    }
    this = (BattleResultComponent_o *)BattleData__isEventActivityPoint(bData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BD9AF4 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AF4 = 1;
      }
      v21 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v21 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v21->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0LL);
      if ( !byte_4BD9AE4 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AE4 = 1;
      }
      v24 = TerminalPramsManager_TypeInfo;
      v25 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v24 = TerminalPramsManager_TypeInfo;
      }
      v24->static_fields->_BeforeEventActivityPoint_k__BackingField = v25;
      v26 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v26 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v26->static_fields->UserEventActivityPointMax;
      if ( !byte_4BD9AF4 )
      {
        sub_1C21E38(&TerminalPramsManager_TypeInfo);
        byte_4BD9AF4 = 1;
      }
      v28 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v28 = TerminalPramsManager_TypeInfo;
      }
      if ( v28->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v28->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v28);
        if ( !byte_4BD9AE4 )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD9AE4 = 1;
        }
        v28 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v28 = TerminalPramsManager_TypeInfo;
        }
        v28->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v28->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v28);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v29 = *p_battleResult;
  v172 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v12->fields.eventTutorial;
  battleData = bData;
  if ( !*p_battleResult )
    goto LABEL_204;
  friendResult = (System_Collections_Generic_IEnumerable_TSource__o *)v29[1].fields.friendResult;
  if ( friendResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        friendResult,
                                        (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
    v31 = BattleResultComponent___c_TypeInfo;
    v32 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v31 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_0 = (System_Converter_TInput__TOutput__o *)v31->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = BattleResultComponent___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v31->static_fields->__9;
      _9__39_0 = (System_Converter_TInput__TOutput__o *)sub_1C22084(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_0, v34, Method_BattleResultComponent___c__Set_b__39_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = (struct System_Converter_int__string__o *)_9__39_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__39_0,
        (int64_t)_9__39_0,
        v36,
        v37,
        v38,
        v39,
        v40,
        v41);
    }
    if ( !v32 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v32,
                                        (System_Converter_T__TOutput__o *)_9__39_0,
                                        (const MethodInfo_2EDFAC8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v42 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
    v43 = System_String__Join((System_String_o *)StringLiteral_866/*","*/, v42, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19961/*"freeShopIds"*/, v43, 0LL);
    v29 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  eventItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v29[1].fields.eventItemResult;
  if ( eventItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventItemResult,
                                        (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
    v45 = BattleResultComponent___c_TypeInfo;
    v46 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v45 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_1 = (System_Converter_TInput__TOutput__o *)v45->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = BattleResultComponent___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_1C22084(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_1, v48, Method_BattleResultComponent___c__Set_b__39_1__, 0LL);
      v49 = BattleResultComponent___c_TypeInfo->static_fields;
      v49->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v49->__9__39_1, (int64_t)_9__39_1, v50, v51, v52, v53, v54, v55);
    }
    if ( !v46 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v46,
                                        (System_Converter_T__TOutput__o *)_9__39_1,
                                        (const MethodInfo_2EDFAC8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v56 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
    v57 = System_String__Join((System_String_o *)StringLiteral_866/*","*/, v56, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23337/*"returnRarePriShopIds"*/, v57, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_204;
  m_CancellationTokenSource = (int64_t)(*p_battleResult)->fields.m_CancellationTokenSource;
  v12->fields.eventEndTitle = (struct System_String_o *)m_CancellationTokenSource;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v12->fields.eventEndTitle,
    m_CancellationTokenSource,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  v71 = v12->fields.battleResult;
  v72 = bData;
  if ( !v71 )
    goto LABEL_204;
  eventEndMessage = (int64_t)v71->fields.eventEndMessage;
  v12->fields.eventEndMessage = (struct System_String_o *)eventEndMessage;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v12->fields.eventEndMessage, eventEndMessage, v65, v66, v67, v68, v69, v70);
  v74 = v12->fields.battleResult;
  if ( !v74 )
    goto LABEL_204;
  isTrialQuestNewRecord = v74->fields.isTrialQuestNewRecord;
  v76 = (QuestKnockdownResult_o *)sub_1C22084(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v76, isTrialQuestNewRecord, bData, 0LL);
  if ( !bData )
    goto LABEL_204;
  this = (BattleResultComponent_o *)bData->fields.battle_info;
  if ( !this )
    goto LABEL_204;
  this = (BattleResultComponent_o *)BattleInfoData__IsWaveMyDecks((BattleInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    battleResult = v12->fields.battleResult;
    if ( !battleResult )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v12->fields.bondsResult;
    if ( !this )
      goto LABEL_204;
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
      1,
      boostRate);
  }
  else
  {
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
    bondsResult = this->fields.bondsResult;
    if ( bondsResult && *(_QWORD *)&bondsResult->fields.m_CachedPtr )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v80 = BattleData__get_eventId(bData, 0LL);
      QuestId = BattleData__getQuestId(bData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(bData, 0LL);
      if ( !Master_object )
        goto LABEL_204;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v80,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_204;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v83 = (unsigned __int8)this & 1;
      }
      else
      {
        v83 = 0;
      }
      v84 = v12->fields.battleResult;
      if ( !v84 )
        goto LABEL_204;
      battle_info = bData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_204;
      v86 = v12->fields.bondsResult;
      if ( !v86 )
        goto LABEL_204;
      oldUserSvtCollection = v84->fields.oldUserSvtCollection;
      myDeck = v84->fields.myDeck;
      followerType = v84->fields.followerType;
      userSvt = battle_info->fields.userSvt;
      BattleResultBondsComponent__InitResultData(
        v12->fields.bondsResult,
        oldUserSvtCollection,
        v84->fields.friendshipRewardInfos,
        resultAsset,
        v84->fields.friendshipExpBase,
        v84->fields.getJoinSvts,
        0,
        v82);
      v91 = oldUserSvtCollection;
      v72 = battleData;
      BattleResultBondsComponent__SetResultDataLocal(
        v86,
        myDeck,
        v91,
        followerType,
        userSvt,
        v84,
        v83,
        battleData,
        -1,
        -1,
        boostRate);
    }
    else
    {
      BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 1, 0LL);
    }
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  v92 = this->fields.eventItemResult;
  if ( v92
    && (v93 = v92->fields.m_CancellationTokenSource) != 0LL
    && (itemResult = this->fields.itemResult) != 0LL
    && (v95 = itemResult->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v93 || !(_DWORD)v95 )
      goto LABEL_205;
    if ( !v12->fields.expResult )
      goto LABEL_204;
    BattleResultExpComponent__setResultData(
      v12->fields.expResult,
      (UserGameEntity_o *)v92->fields.parentComp,
      (UserEquipEntity_o *)itemResult->fields.parentComp,
      (MasterLvRewardInfo_array *)this->fields.eventEndTitle,
      resultAsset,
      v72->fields.maxTurnDamageInBattle,
      v72->fields.maxTurnDamageRecord,
      v76,
      0LL);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  v96 = this->fields.eventItemResult;
  if ( v96 && (v97 = v96->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v97 )
      goto LABEL_205;
    quest_ent = v72->fields.quest_ent;
    if ( !quest_ent )
      goto LABEL_204;
    parentComp = (UserGameEntity_o *)v96->fields.parentComp;
    v100 = v12->fields.itemResult;
    resultAssetb = (AssetData_o *)this->fields.eventEndMessage;
    eventId = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
    fsm = (int32_t)this->fields.fsm;
    fsm_high = HIDWORD(this->fields.fsm);
    obj_basebg = this[1].fields.obj_basebg;
    expResult_high = HIDWORD(this[1].fields.expResult);
    dropupinfos = this[1].fields.itemResult;
    battleRetryConfirmComponent = this[1].fields.battleRetryConfirmComponent;
    firstClearRewardQp = (int32_t)this->fields.obj_basebg;
    FriendIconPrefab = this->fields.FriendIconPrefab;
    v170 = this->fields.friendResult;
    this = (BattleResultComponent_o *)QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
    if ( !*p_battleResult || !v100 )
      goto LABEL_204;
    BattleResultItemComponent__setResultData(
      v100,
      (BattleDropItem_array *)resultAssetb,
      fsm,
      fsm_high,
      parentComp,
      eventId,
      (UserEventEntity_array *)v170,
      (UserEventPointEntity_array *)FriendIconPrefab,
      (int64_t)obj_basebg,
      v172,
      expResult_high,
      (DropUpInfo_array *)dropupinfos,
      (EventConquestInfo_array *)battleRetryConfirmComponent,
      firstClearRewardQp,
      (unsigned __int8)this & 1,
      (BattleResultAddRewardBonus_o *)(*p_battleResult)[1].fields.nextButtonSpr,
      0LL);
    v72 = battleData;
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
  }
  v114 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( v114[1].fields.nextButtonSpr )
  {
    v115 = v12->fields.itemResult;
    if ( !v115 )
      goto LABEL_204;
    getQpLabel = v115->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_204;
    mText = (int64_t)getQpLabel->fields.mText;
    v114[1].fields.resultItemScrollBar = (struct UIScrollBar_o *)mText;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v114[1].fields.resultItemScrollBar,
      mText,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    v124 = v12->fields.itemResult;
    if ( !v124 )
      goto LABEL_204;
    nowQpLabel = v124->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_204;
    v126 = v12->fields.battleResult;
    if ( !v126 )
      goto LABEL_204;
    v127 = (int64_t)nowQpLabel->fields.mText;
    v126->fields.ultimateNowQpText = (struct System_String_o *)v127;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v126->fields.ultimateNowQpText, v127, v118, v119, v120, v121, v122, v123);
    if ( !*p_battleResult )
      goto LABEL_204;
    nextButtonSpr = (*p_battleResult)[1].fields.nextButtonSpr;
    if ( !nextButtonSpr )
      goto LABEL_204;
    v179 = (__int64)nextButtonSpr->fields.rightAnchor & ~(SLODWORD(nextButtonSpr->fields.rightAnchor) >> 31);
    v132 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v179, v128, v129, v130);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v132, 0LL);
    v133 = v12->fields.itemResult;
    if ( !v133 )
      goto LABEL_204;
    v134 = (Il2CppObject *)this;
    v135 = v133->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v136 = LocalizationManager__Get((System_String_o *)StringLiteral_11318/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v136, v134, 0LL);
    if ( !v135 )
      goto LABEL_204;
    UILabel__set_text(v135, (System_String_o *)this, 0LL);
    v140 = v12->fields.itemResult;
    if ( !v140 )
      goto LABEL_204;
    if ( !*p_battleResult )
      goto LABEL_204;
    v141 = (*p_battleResult)[1].fields.nextButtonSpr;
    if ( !v141 )
      goto LABEL_204;
    v142 = v140->fields.nowQpLabel;
    rightAnchor_high = HIDWORD(v141->fields.rightAnchor);
    v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &rightAnchor_high, v137, v138, v139);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25376/*"{0:#,0}"*/, v143, 0LL);
    if ( !v142 )
      goto LABEL_204;
    UILabel__set_text(v142, (System_String_o *)this, 0LL);
    this = (BattleResultComponent_o *)v12->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_204;
    v181.fields.r = 0.29804;
    v181.fields.a = 1.0;
    v181.fields.g = 0.29804;
    v181.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v181, 0LL);
    v114 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  this = (BattleResultComponent_o *)v72->fields.quest_ent;
  if ( !this )
    goto LABEL_204;
  v144 = v12->fields.friendResult;
  v145 = (int32_t)v114[1].fields.m_CancellationTokenSource;
  m_CancellationTokenSource_high = HIDWORD(v114[1].fields.m_CancellationTokenSource);
  v147 = *(_QWORD *)&v114[1].fields.m_CachedPtr;
  endtargetObject = (int32_t)v114[1].fields.endtargetObject;
  endtargetObject_high = HIDWORD(v114[1].fields.endtargetObject);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v144 )
    goto LABEL_204;
  BattleResultFriendComponent__setResultData(
    v144,
    v145,
    m_CancellationTokenSource_high,
    v147,
    endtargetObject,
    endtargetObject_high,
    (unsigned __int8)this & 1,
    0LL);
  v150 = v12->fields.battleResult;
  if ( !v150 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v12->fields.eventItemResult;
  if ( !this )
    goto LABEL_204;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v150->fields.resultEventRewardInfos,
                                      (unsigned int)v150->fields.eventId,
                                      v150->fields.resultBoostItemRewardInfos,
                                      v150->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v151 = v12->fields.battleResult;
  if ( !v151 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v12->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_204;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v151->fields.resultDamageRewardInfos,
    (unsigned int)v151->fields.eventId,
    v151->fields.resultBoostItemRewardInfos,
    v151->fields.rewardInfos,
    this->klass[1]._1.name);
  eventFortificationItemResult = (UnityEngine_Object_o *)v12->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v153 = v12->fields.battleResult;
    if ( !v153 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v12->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v153->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v153->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v154 = v12->fields.battleResult;
    if ( !v154 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v12->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v154->fields.fortificationInfos,
      0LL);
  }
  this = *p_eventTutorial;
  if ( !*p_eventTutorial )
    goto LABEL_204;
  this = (BattleResultComponent_o *)BattleEventTutorial__CheckHasResultPhaseTutorial((BattleEventTutorial_o *)this, 0LL);
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( ((unsigned __int8)this & 1) != 0 )
    BattleResultComponent_resultData__enableResultDispFlag(
      (BattleResultComponent_resultData_o *)*p_battleResult,
      64,
      0LL);
  else
    BattleResultComponent_resultData__disableResultDispFlag(
      (BattleResultComponent_resultData_o *)*p_battleResult,
      64,
      0LL);
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__checkResultDispFlag(
                                      (BattleResultComponent_resultData_o *)this,
                                      512,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 16, 0LL);
  }
  v155 = v72->fields.battle_info;
  if ( !v155 )
    goto LABEL_204;
  v156 = v155->fields.myDeck;
  if ( v156 )
  {
    svts = v156->fields.svts;
    if ( svts )
    {
      max_length = svts->max_length;
      if ( max_length >= 1 )
      {
        v159 = 0LL;
        while ( (unsigned int)v159 < max_length )
        {
          this = (BattleResultComponent_o *)svts->m_Items[v159];
          if ( !this )
            goto LABEL_204;
          this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin(
                                              (BattleDeckServantData_o *)this,
                                              0LL);
          v160 = (char)this;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            max_length = svts->max_length;
            if ( (int)++v159 < max_length )
              continue;
          }
          goto LABEL_156;
        }
LABEL_205:
        sub_1C2209C(this, resultList);
      }
    }
  }
  v160 = 0;
LABEL_156:
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1),
                                        0LL);
    v161 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_204;
      v162 = *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      EventProgressValueSaveData_43358256 = EventInfoUIProgressControl__GetEventProgressValueSaveData_43358256(
                                              v162,
                                              0,
                                              0LL);
      v164 = (int)v161->fields.obj_basebg;
      LODWORD(v161) = 0;
      if ( EventProgressValueSaveData_43358256 != v164 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BD909F )
        {
          sub_1C21E38(&TerminalPramsManager_TypeInfo);
          byte_4BD909F = 1;
        }
        v165 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v165 = TerminalPramsManager_TypeInfo;
        }
        v165->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v161) = 1;
      }
    }
  }
  else
  {
    LODWORD(v161) = 0;
  }
  if ( v160 & 1 | !v72->fields.isRetryable )
    goto LABEL_178;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( (((unsigned int)v161 | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                                (BattleResultComponent_resultData_o *)this,
                                0LL)) & 1) != 0 )
  {
LABEL_178:
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2048, 0LL);
  }
  else
  {
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
    BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 2048, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult
    || (BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4096, 0LL),
        (this = *p_battleResult) == 0LL) )
  {
LABEL_204:
    sub_1C22094(this, resultList);
  }
  cashedFriendshipUpItemAssetData = this[1].fields.cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData && cashedFriendshipUpItemAssetData->fields.name )
    BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 4096, 0LL);
  if ( (BattleData__isBattleResultLoseQuestClear(v72, 0LL) || BattleData__isBattleRetreatQuestClear(v72, 0LL))
    && v72->fields.isItemResultSkip )
  {
    if ( !BattleData__IsWarBoard(v72, 0LL) )
      goto LABEL_195;
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
    if ( BattleResultComponent_resultData__checkResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL) )
    {
      this = *p_battleResult;
      if ( !*p_battleResult )
        goto LABEL_204;
      BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
    }
    else
    {
LABEL_195:
      this = *p_battleResult;
      if ( !*p_battleResult )
        goto LABEL_204;
      BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
    }
    this = *p_battleResult;
    if ( *p_battleResult )
    {
      BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 8, 0LL);
      this = *p_battleResult;
      if ( *p_battleResult )
      {
        BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 16, 0LL);
        goto LABEL_200;
      }
    }
    goto LABEL_204;
  }
LABEL_200:
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  isWin = BattleResultComponent_resultData__isWin((BattleResultComponent_resultData_o *)this, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo(result, isWin, 0LL);
}


void __fastcall BattleResultComponent__SkippAddRewardEffect(BattleResultComponent_o *this, const MethodInfo *method)
{
  this->fields.isAddRewardEffectSkip = 1;
}


void __fastcall BattleResultComponent__StartAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_c *v3; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *touchGuard; // x0
  const MethodInfo *v6; // x1
  System_Collections_IEnumerator_o *started; // x1

  if ( (byte_4BDF909 & 1) == 0 )
  {
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    byte_4BDF909 = 1;
  }
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1C22094(0LL, v4);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF90A & 1) == 0 )
  {
    sub_1C21E38(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
    byte_4BDF90A = 1;
  }
  v3 = sub_1C22084(BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__47___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  bool v3; // w19
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BDF91A & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BDF91A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD7264 )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD7264 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v3 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v2->static_fields->_QuestId_k__BackingField, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v5);
  if ( v3 )
    RewardMiniPopupExecutor__AddTaskOnReBattleOrdealCallFreeQuest((RewardMiniPopupExecutor_o *)Instance, 0LL);
  else
    RewardMiniPopupExecutor__AddTaskOnReBattle((RewardMiniPopupExecutor_o *)Instance, 0LL);
}


void __fastcall BattleResultComponent__StartResult(
        BattleResultComponent_o *this,
        UnityEngine_GameObject_o *target,
        System_String_o *endEvent,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v8; // x21
  struct BattleData_o *data; // x8

  if ( (byte_4BDF902 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_10198/*"OpenResult"*/);
    sub_1C21E38(&StringLiteral_10806/*"Performance"*/);
    byte_4BDF902 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10806/*"Performance"*/,
                            0LL);
  if ( !perf )
    goto LABEL_15;
  v8 = (HutongGames_PlayMaker_FsmGameObject_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)perf, 0LL);
  if ( !v8 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v8, (UnityEngine_GameObject_o *)fsm, 0LL);
  fsm = (PlayMakerFSM_o *)perf->fields.data;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)BattleData__isNoResult((BattleData_o *)fsm, 0LL);
  if ( ((unsigned __int8)fsm & 1) != 0 )
  {
    fsm = (PlayMakerFSM_o *)this->fields.battleResult;
    if ( !fsm )
      goto LABEL_15;
    BattleResultComponent_resultData__clearAllDispFlag((BattleResultComponent_resultData_o *)fsm, 0LL);
  }
  data = perf->fields.data;
  if ( !data
    || (fsm = (PlayMakerFSM_o *)data->fields.battleEvent) == 0LL
    || (((void (__fastcall *)(PlayMakerFSM_o *, struct BattleResultComponent_resultData_o *, Il2CppClass **))fsm->klass[1]._1.methods)(
          fsm,
          this->fields.battleResult,
          fsm->klass[1]._1.nestedTypes),
        (fsm = this->fields.fsm) == 0LL) )
  {
LABEL_15:
    sub_1C22094(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10198/*"OpenResult"*/, 0LL);
}


void __fastcall BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
        UnityEngine_GameObject_o **prefabObject,
        System_String_o *prefabName,
        AssetData_o *assetData,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v8; // x19
  Il2CppObject *Object_object__49880776; // x21
  Il2CppObject *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v8 = (PartyOrganizationUtility_o *)prefabObject;
  if ( (byte_4BDF92B & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    prefabObject = (UnityEngine_GameObject_o **)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF92B = 1;
  }
  if ( !assetData )
    sub_1C22094(prefabObject, prefabName);
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              assetData,
                              prefabName,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v10 = UnityEngine_Object__Instantiate_object__50551272(
          Object_object__49880776,
          root,
          (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
  v8->klass = (PartyOrganizationUtility_c *)v10;
  sub_1C21DDC(v8, (int64_t)v10, v11, v12, v13, v14, v15, v16);
}


void __fastcall BattleResultComponent___OpenDataLostBattleResetDialog_b__73_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  MissionNotifyManager_o *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4BDF929 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF929 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BD909F )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD909F = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_4BD981C )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD981C = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !byte_4BD9AEB )
  {
    sub_1C21E38(&TerminalPramsManager_TypeInfo);
    byte_4BD9AEB = 1;
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
    sub_1C22094(Instance, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenFriendshipUpItemSelectDialog_b__74_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  FriendshipUpItemSelectDialog_o *v4; // x20
  Il2CppObject *battleRetryConfirmComponent; // x21
  System_Action_o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_4BDF92A & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleRetryConfirmComponent_BaseDialogOpen__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF92A = 1;
  }
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0LL, 0LL) )
  {
    v4 = this->fields.friendshipUpItemSelectDialog;
    battleRetryConfirmComponent = (Il2CppObject *)this->fields.battleRetryConfirmComponent;
    v6 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v6, battleRetryConfirmComponent, Method_BattleRetryConfirmComponent_BaseDialogOpen__, 0LL);
    if ( !v4 )
      sub_1C22094(v7, v8);
    FriendshipUpItemSelectDialog__Open(v4, v6, 0LL);
  }
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__65_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  BattleWindowComponent_EndCall_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDF927 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleResultComponent__OpenRetryQuest_b__65_1__);
    sub_1C21E38(&BattleWindowComponent_EndCall_TypeInfo);
    byte_4BDF927 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v4 = (BattleWindowComponent_EndCall_o *)sub_1C22084(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenRetryQuest_b__65_1__,
    0LL);
  if ( !battleRetryConfirmComponent )
    sub_1C22094(v5, v6);
  BattleRetryConfirmComponent__Open(battleRetryConfirmComponent, v4, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__65_1(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BDF928 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13215/*"StartQuestClearReward"*/);
    byte_4BDF928 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13215/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__50_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BDF926 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF926 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__checkNew(
        BattleResultComponent_o *this,
        int32_t resultType,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleResultItemComponent_o *itemResult; // x0
  int64_t v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  BattleResultComponent_c *v14; // x0
  int64_t *v15; // x21
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleDropItem_o *NewDrop; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v30; // w0
  Il2CppObject *Instance; // x21
  System_Action_o *v32; // x22
  __int64 *v33; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4BDF913 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1C21E38(&Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__);
    sub_1C21E38(&BattleResultComponent___c__DisplayClass58_0_TypeInfo);
    sub_1C21E38(&StringLiteral_9818/*"OPEN"*/);
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    byte_4BDF913 = 1;
  }
  v5 = sub_1C22084(BattleResultComponent___c__DisplayClass58_0_TypeInfo);
  BattleResultComponent___c__DisplayClass58_0___ctor((BattleResultComponent___c__DisplayClass58_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_35;
  *(_QWORD *)(v5 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 24), (int64_t)this, v8, v9, v10, v11, v12, v13);
  v14 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v14);
  *(_QWORD *)(v5 + 16) = 0LL;
  v15 = (int64_t *)(v5 + 16);
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), 0LL, v16, v17, v18, v19, v20, v21);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_35;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, 0LL);
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
      v30 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v7 = 0LL;
      if ( !v30 )
        goto LABEL_19;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_35;
LABEL_17:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, 0LL);
LABEL_18:
      v7 = (int64_t)NewDrop;
LABEL_19:
      *v15 = v7;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), v7, v23, v24, v25, v26, v27, v28);
LABEL_20:
      if ( !*v15 )
      {
        p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
        ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
        {
          itemResult = (BattleResultItemComponent_o *)*p_ServantRewardActionComp;
          if ( !*p_ServantRewardActionComp )
            goto LABEL_35;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)itemResult,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_70869800(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
            0LL,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_35;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v33 = &StringLiteral_9432/*"NEXT"*/;
          goto LABEL_34;
        }
LABEL_35:
        sub_1C22094(itemResult, v7);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)v5,
        Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_35;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v32, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_35;
      v33 = &StringLiteral_9818/*"OPEN"*/;
LABEL_34:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v33, 0LL);
      return;
    default:
      goto LABEL_20;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BDF903 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12467/*"START_Begin"*/);
    byte_4BDF903 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12467/*"START_Begin"*/, 0LL);
}


void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BDF908 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDF908 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BDF914 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5604/*"END_PROC"*/);
    byte_4BDF914 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C22094(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5604/*"END_PROC"*/, 0LL);
}


BattleResultComponent_resultData_o *__fastcall BattleResultComponent__getBattleResult(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.battleResult;
}


void __fastcall BattleResultComponent__openNewCommandCodeView(
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BDF917 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4BDF917 = 1;
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v12, v13, v14, v15, v16, v17);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0LL),
        *p_ServantRewardActionComp = Prefab,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
          (int64_t)Prefab,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_35788472(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_14:
    sub_1C22094(transform, v9);
  }
  ServantRewardAction__Play((ServantRewardAction_o *)transform, action, 0.0, 0LL);
}


void __fastcall BattleResultComponent__openNewServantView(
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  Il2CppObject *v24; // x25
  ServantRewardAction_o *Prefab; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
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

  if ( (byte_4BDF916 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4BDF916 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_325E324 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v16 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v18, v19, v20, v21, v22, v23);
  }
  v24 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v24 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v24,
             (UnityEngine_Transform_o *)Instance,
             1,
             0LL);
  *p_ServantRewardActionComp = Prefab;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
    (int64_t)Prefab,
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
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v43, 0LL);
  if ( isDoEffect )
  {
    v36 = v16[2];
    *(Il2CppObject *)&v42.fields.currentCryptoKey = v16[1];
    *(Il2CppObject *)&v42.fields.fakeValue = v36;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v41 = v42;
    v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v41, 0LL);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[6],
                                  0LL);
    if ( v32 )
    {
      ServantRewardAction__Setup(v32, v35, v37, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_25;
    }
LABEL_27:
    sub_1C22094(Instance, v12);
  }
  v38 = v16[2];
  *(Il2CppObject *)&v42.fields.currentCryptoKey = v16[1];
  *(Il2CppObject *)&v42.fields.fakeValue = v38;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v40 = v42;
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47624888(&v40, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[6],
                                0LL);
  if ( !v32 )
    goto LABEL_27;
  ServantRewardAction__Setup(v32, v35, v39, (int32_t)Instance, 1, 1, 1, 2, 0LL);
LABEL_25:
  Instance = (DataManager_o *)*p_ServantRewardActionComp;
  if ( !*p_ServantRewardActionComp )
    goto LABEL_27;
  ServantRewardAction__Play((ServantRewardAction_o *)Instance, action, 0.0, 0LL);
}


void __fastcall BattleResultComponent__openTouchWait(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1C22094(0LL, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1C22094(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1C22094(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_fronttouch, flg, 0LL);
}


void __fastcall BattleResultComponent__showServantRewardAction(
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BDF915 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleResultComponent_endNewView__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_9818/*"OPEN"*/);
    sub_1C21E38(&StringLiteral_9432/*"NEXT"*/);
    byte_4BDF915 = 1;
  }
  if ( userSvtId < 1 )
  {
    p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
    ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
    {
      Instance = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
      if ( !*p_ServantRewardActionComp )
        goto LABEL_17;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__DestroyImmediate_70869800(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
        0LL,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v12 = &StringLiteral_9432/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C22094(Instance, v10);
  }
  v7 = Gift__IsEventSvtGet(type, 0LL);
  v8 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v7, v7, v8, v9);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v12 = &StringLiteral_9818/*"OPEN"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v12, 0LL);
}


void __fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__47___ctor(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__MoveNext(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4BDF92F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BDF92F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this
      || (itemResult = _4__this->fields.itemResult) == 0LL
      || (itemWindow = itemResult->fields.itemWindow) == 0LL
      || (itemObjectList = itemWindow->fields.itemObjectList) == 0LL )
    {
      sub_1C22094(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v4, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__System_Collections_IEnumerator_Reset(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__System_Collections_IEnumerator_get_Current(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__47__System_IDisposable_Dispose(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleResultComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF92C & 1) == 0 )
  {
    sub_1C21E38(&BattleResultComponent___c_TypeInfo);
    byte_4BDF92C = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleResultComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleResultComponent___c___ctor(BattleResultComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleResultComponent___c___Set_b__39_0(
        BattleResultComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall BattleResultComponent___c___Set_b__39_1(
        BattleResultComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


void __fastcall BattleResultComponent___c__DisplayClass58_0___ctor(
        BattleResultComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultComponent___c__DisplayClass58_0___checkNew_b__0(
        BattleResultComponent___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  BattleResultComponent___c__DisplayClass58_0_o *v2; // x19
  struct BattleDropItem_o *newDrop; // x8
  struct BattleDropItem_o *v4; // x8
  int64_t userSvtId; // x20
  Il2CppObject *_4__this; // x19
  System_Action_o *v7; // x21
  struct BattleDropItem_o *v8; // x8
  struct BattleDropItem_o *v9; // x8
  int64_t v10; // x21
  Il2CppObject *v11; // x19
  char v12; // w20
  System_Action_o *v13; // x22

  v2 = this;
  if ( (byte_4BDF92D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    this = (BattleResultComponent___c__DisplayClass58_0_o *)sub_1C21E38(&Method_BattleResultComponent_endNewView__);
    byte_4BDF92D = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsCommandCode_38930852(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.newDrop;
    if ( v4 )
    {
      userSvtId = v4->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v7 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
      System_Action___ctor(v7, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v7, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C22094(this, method);
  }
  v8 = v2->fields.newDrop;
  if ( !v8 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsEventSvtGet_38930508(v8->fields.type, 0LL);
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  v10 = v9->fields.userSvtId;
  v11 = (Il2CppObject *)v2->fields.__4__this;
  v12 = (char)this;
  v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v13, v11, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v11 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v11, v10, v12 & 1, v12 & 1, v13, 0LL);
}


void __fastcall BattleResultComponent___c__DisplayClass75_0___ctor(
        BattleResultComponent___c__DisplayClass75_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultComponent___c__DisplayClass75_0___LoadFriendshipUpItemAsset_b__1(
        BattleResultComponent___c__DisplayClass75_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t _4__this; // x0
  struct BattleResultComponent_o *v11; // x8
  UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x20
  AssetData_o *cashedFriendshipUpItemAssetData; // x21
  struct BattleResultComponent_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BattleResultComponent_o *v21; // x8
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  struct BattleResultComponent_o *v23; // x8
  struct System_Action_o *callback; // x8
  UnityEngine_GameObject_o *prefabObject; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDF92E & 1) == 0 )
  {
    sub_1C21E38(&BattleResultComponent_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_7024/*"FriendshipUpItemSelectDialog"*/);
    byte_4BDF92E = 1;
  }
  prefabObject = 0LL;
  _4__this = (int64_t)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  *(_QWORD *)(_4__this + 208) = assetData;
  sub_1C21DDC((PartyOrganizationUtility_o *)(_4__this + 208), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  v11 = this->fields.__4__this;
  if ( !v11 )
    goto LABEL_18;
  cashedFriendshipUpItemAssetData = v11->fields.cashedFriendshipUpItemAssetData;
  friendshipUpItemDialogRoot = v11->fields.friendshipUpItemDialogRoot;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
    &prefabObject,
    (System_String_o *)StringLiteral_7024/*"FriendshipUpItemSelectDialog"*/,
    cashedFriendshipUpItemAssetData,
    friendshipUpItemDialogRoot,
    0LL);
  _4__this = (int64_t)prefabObject;
  if ( !prefabObject )
    goto LABEL_18;
  v14 = this->fields.__4__this;
  _4__this = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        prefabObject,
                        (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
  if ( !v14 )
    goto LABEL_18;
  v14->fields.friendshipUpItemSelectDialog = (struct FriendshipUpItemSelectDialog_o *)_4__this;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v14->fields.friendshipUpItemSelectDialog,
    _4__this,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_18;
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)v21->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0LL, 0LL);
  if ( (_4__this & 1) != 0 )
  {
    v23 = this->fields.__4__this;
    if ( v23 )
    {
      _4__this = (int64_t)v23->fields.friendshipUpItemSelectDialog;
      if ( _4__this )
      {
        FriendshipUpItemSelectDialog__Init((FriendshipUpItemSelectDialog_o *)_4__this, 0LL);
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_1C22094(_4__this, assetData);
  }
LABEL_16:
  callback = this->fields.callback;
  if ( !callback )
    goto LABEL_18;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
    callback->fields.original_method_info,
    *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall BattleResultComponent_resultData___ctor(
        BattleResultComponent_resultData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleResultComponent_resultData__IsGetJoinSvtsEffect(
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
  v4 = 0LL;
  m_Items = getJoinSvts->m_Items;
  do
  {
    if ( (unsigned int)v4 >= max_length )
      sub_1C2209C(this, method);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1C22094(this, method);
    isNew = v6->fields.isNew;
    if ( isNew )
      break;
    ++v4;
  }
  while ( (int)v4 < max_length );
  return isNew;
}


bool __fastcall BattleResultComponent_resultData__checkResultDispFlag(
        BattleResultComponent_resultData_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  return (this->fields.resultDispFlag & flag) != 0;
}


void __fastcall BattleResultComponent_resultData__clearAllDispFlag(
        BattleResultComponent_resultData_o *this,
        const MethodInfo *method)
{
  this->fields.resultDispFlag = 0;
}


void __fastcall BattleResultComponent_resultData__disableResultDispFlag(
        BattleResultComponent_resultData_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  this->fields.resultDispFlag &= ~flag;
}


void __fastcall BattleResultComponent_resultData__enableResultDispFlag(
        BattleResultComponent_resultData_o *this,
        int32_t flag,
        const MethodInfo *method)
{
  this->fields.resultDispFlag |= flag;
}


bool __fastcall BattleResultComponent_resultData__isWin(
        BattleResultComponent_resultData_o *this,
        const MethodInfo *method)
{
  return this->fields.battleResult == 1;
}


void __fastcall BattleResultComponent_resultData__setDefaultDispFlag(
        BattleResultComponent_resultData_o *this,
        const MethodInfo *method)
{
  this->fields.resultDispFlag |= 0x3Fu;
}