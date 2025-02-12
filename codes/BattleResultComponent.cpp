void __fastcall BattleResultComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1

  if ( (byte_4BCAE64 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_10756/*"PartyOrganization/FriendshipUpItem"*/, v8);
    byte_4BCAE64 = 1;
  }
  BattleResultComponent_TypeInfo->static_fields->FriendshipUpItemLoadAssetPath = (struct System_String_o *)StringLiteral_10756/*"PartyOrganization/FriendshipUpItem"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattleResultComponent_TypeInfo->static_fields,
    StringLiteral_10756/*"PartyOrganization/FriendshipUpItem"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleResultEventItemComponent_o *eventItemResult; // x0
  PlayMakerFSM_o *fsm; // x8
  __int64 *v6; // x9

  if ( (byte_4BCAE50 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_3623/*"CLOSE"*/, method);
    sub_1C1ABD4(&StringLiteral_9422/*"NEXT"*/, v3);
    byte_4BCAE50 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
    sub_1C1AE30(eventItemResult, method);
  }
  v6 = &StringLiteral_9422/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v6 = &StringLiteral_3623/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BCAE4D & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_5594/*"END_PROC"*/, method);
    byte_4BCAE4D = 1;
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
    sub_1C1AE30(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5594/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleResultComponent_c *v9; // x0
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  if ( (byte_4BCAE57 & 1) == 0 )
  {
    sub_1C1ABD4(&AndroidBackKeyManager_TypeInfo, method);
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    sub_1C1ABD4(&RandomLimitCountManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1C1ABD4(&StringLiteral_23503/*"sendFsmEvent"*/, v7);
    sub_1C1ABD4(&StringLiteral_5594/*"END_PROC"*/, v8);
    byte_4BCAE57 = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v9 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v9);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1C1AE30(Instance, v11);
  UnityEngine_GameObject__SendMessage_70775784(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23503/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5594/*"END_PROC"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__EndRetryConfirmDialog(
        BattleResultComponent_o *this,
        bool isDecide,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  BattleResultComponent_c *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BCAE5A & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, isDecide);
    sub_1C1ABD4(&StringLiteral_9422/*"NEXT"*/, v7);
    byte_4BCAE5A = 1;
  }
  v8 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v8);
  if ( isDecide )
  {
    BattleResultComponent__OpenFollowerSceneForRetry(this, boostId, v10);
  }
  else
  {
    fsm = this->fields.fsm;
    if ( !fsm )
      sub_1C1AE30(0LL, v9);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9422/*"NEXT"*/, 0LL);
  }
}


void __fastcall BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *v8; // x21
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v13; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4BCAE40 & 1) == 0 )
  {
    sub_1C1ABD4(
      &Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___,
      releasePerformanceObject);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    byte_4BCAE40 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v8 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BC2141 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C1ABD4(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4BC2141 = 1;
  }
  if ( !v8 )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition(v8, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  BattleResultBondsComponent__Init((BattleResultBondsComponent_o *)gameObject, v7);
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
    v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70794412(v13, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v14, v15, v16, v17, v18, v19);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)p_screenTouch,
          (int64_t)Component_object,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 14)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_36:
    sub_1C1AE30(gameObject, v7);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x20
  PlayMakerFSM_o *fsm; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v14; // w20
  Il2CppObject *v15; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BCAE5F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, method);
    sub_1C1ABD4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v3);
    sub_1C1ABD4(&DataManager_TypeInfo, v4);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v5);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v6);
    sub_1C1ABD4(&StringLiteral_12382/*"SKIP"*/, v7);
    sub_1C1ABD4(&StringLiteral_9422/*"NEXT"*/, v8);
    byte_4BCAE5F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC460A )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v9);
    byte_4BC460A = 1;
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
  v14 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BC2585 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, v9);
    byte_4BC2585 = 1;
  }
  fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  }
  if ( !v15 )
LABEL_30:
    sub_1C1AE30(fsm, v9);
  if ( UserEventDataLostMaster__TryGetEntity(
         (UserEventDataLostMaster_o *)v15,
         &entity,
         (int64_t)fsm[2].fields.addEventHandlers->fields.original_method_info,
         v14,
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
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9422/*"NEXT"*/, 0LL);
    }
  }
LABEL_28:
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_30;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12382/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__LoadFriendshipUpItemAsset(
        BattleResultComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  FriendshipUpItemSelectDialog_o *isExistAssetStorage; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  __int64 v19; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x22
  BattleResultComponent_c *v27; // x0
  System_String_o *FriendshipUpItemLoadAssetPath; // x20
  BattleResultComponent_c *v29; // x0
  System_String_o *v30; // x20
  AssetLoader_LoadEndDataHandler_o *v31; // x21

  if ( (byte_4BCAE62 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, callback);
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, v5);
    sub_1C1ABD4(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v7);
    sub_1C1ABD4(&Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__, v8);
    sub_1C1ABD4(&BattleResultComponent___c__DisplayClass75_0_TypeInfo, v9);
    byte_4BCAE62 = 1;
  }
  v10 = sub_1C1AE20(BattleResultComponent___c__DisplayClass75_0_TypeInfo);
  BattleResultComponent___c__DisplayClass75_0___ctor((BattleResultComponent___c__DisplayClass75_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callback;
  v19 = v10 + 24;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callback, v20, v21, v22, v23, v24, v25);
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
  v27 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v27 = BattleResultComponent_TypeInfo;
  }
  FriendshipUpItemLoadAssetPath = v27->static_fields->FriendshipUpItemLoadAssetPath;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  isExistAssetStorage = (FriendshipUpItemSelectDialog_o *)AssetManager__isExistAssetStorage(
                                                            FriendshipUpItemLoadAssetPath,
                                                            0LL);
  if ( ((unsigned __int8)isExistAssetStorage & 1) == 0 )
  {
LABEL_19:
    if ( *(_QWORD *)v19 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v19 + 64LL),
        *(_QWORD *)(*(_QWORD *)v19 + 40LL));
      return;
    }
LABEL_21:
    sub_1C1AE30(isExistAssetStorage, v12);
  }
  v29 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v29 = BattleResultComponent_TypeInfo;
  }
  v30 = v29->static_fields->FriendshipUpItemLoadAssetPath;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C1AE20(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v31,
    (Il2CppObject *)v10,
    Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v30, v31, 1, 0LL);
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
    sub_1C1AE30(obj_fronttouch, method);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, method);
}


void __fastcall BattleResultComponent__OpenDataLostBattleResetDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  TerminalPramsManager_c *v8; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v10; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_4BCAE60 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__, v3);
    sub_1C1ABD4(&DataLostResetManager_TypeInfo, v4);
    this = (BattleResultComponent_o *)sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v5);
    byte_4BCAE60 = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_1C1AE30(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC460A )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    byte_4BC460A = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v10, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__, 0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v10, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BCAE51 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C1ABD4(&StringLiteral_12382/*"SKIP"*/, v3);
    byte_4BCAE51 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C1AE30(Instance, v5);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12382/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_4BCAE5E & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C1ABD4(&StringLiteral_12382/*"SKIP"*/, v4);
    byte_4BCAE5E = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1C1AE30(Instance, v6);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12382/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4BCAE4F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C1ABD4(&StringLiteral_12382/*"SKIP"*/, v3);
    byte_4BCAE4F = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C1AE30(Instance, v5);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12382/*"SKIP"*/, 0LL);
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
    sub_1C1AE30(obj_fronttouch, method);
  }
  BattleResultExpComponent__Open((BattleResultExpComponent_o *)obj_fronttouch, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__OpenFollowerSceneForRetry(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  TerminalPramsManager_c *v13; // x0
  int32_t QuestId_k__BackingField; // w21
  Il2CppObject *Entity; // x22
  MapControl_QuestInfo_o *v16; // x20
  int32_t questId; // w23
  bool IsQuestClear_38787928; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v21; // w22
  Il2CppObject *v22; // x21
  TerminalPramsManager_c *v23; // x0
  const MethodInfo *v24; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4BCAE5B & 1) == 0 )
  {
    sub_1C1ABD4(&CondType_TypeInfo, *(_QWORD *)&boostId);
    sub_1C1ABD4(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1C1ABD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1C1ABD4(&MapControl_QuestInfo_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_1C1ABD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    byte_4BCAE5B = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC27F4 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_3248678 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v16 = (MapControl_QuestInfo_o *)sub_1C1AE20(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v16, 0LL);
  questId = v16->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_38787928 = CondType__IsQuestClear_38787928(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC27F3 = 1;
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
                            !IsQuestClear_38787928,
                            &fixedVal,
                            0LL);
  v16->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0LL);
  v16->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v21 = fixedVal;
  else
    v21 = ActConsume;
  v22 = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC47EB )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v12);
    byte_4BC47EB = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_36;
  if ( !clsQuestCheck__CheckQuestPlayable(
          (clsQuestCheck_o *)v22,
          v16,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 128LL),
          boostId,
          0LL) )
    return;
  v23 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->lastPlayQuestConsumeAp = v21;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C1AE30(Instance, v12);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v24);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleResultComponent_resultData_o *battleResult; // x0
  BattleResultComponent_c *v7; // x0

  if ( (byte_4BCAE4E & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, method);
    sub_1C1ABD4(&RandomLimitCountManager_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1C1ABD4(&StringLiteral_13205/*"StartQuestClearReward"*/, v5);
    byte_4BCAE4E = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_14;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13205/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleResult = (BattleResultComponent_resultData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResult
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)battleResult, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleResult, 0, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.friendResult) == 0LL) )
  {
LABEL_14:
    sub_1C1AE30(battleResult, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)battleResult, 0LL);
  v7 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v7);
}


void __fastcall BattleResultComponent__OpenFriendshipUpItemSelectDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BCAE61 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__, v3);
    byte_4BCAE61 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v5 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__,
    0LL);
  if ( !battleRetryConfirmComponent )
    sub_1C1AE30(v6, v7);
  BattleRetryConfirmComponent__BaseDialogClose(battleRetryConfirmComponent, v5, 0LL);
}


void __fastcall BattleResultComponent__OpenItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *eventEndTitle; // x8
  Il2CppObject *Instance; // x0
  System_String_o *v7; // x20
  System_String_o *eventEndMessage; // x21
  CommonUI_o *v9; // x22
  NotificationDialog_ClickDelegate_o *v10; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_4BCAE46 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultComponent_endCloseEndEventMessage__, method);
    sub_1C1ABD4(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4BCAE46 = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v9 = (CommonUI_o *)Instance;
    v10 = (NotificationDialog_ClickDelegate_o *)sub_1C1AE20(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v9 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_31101392(
      v9,
      v7,
      eventEndMessage,
      v10,
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
    sub_1C1AE30(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, 0LL);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Instance; // x21
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  int32_t v11; // w22
  int32_t m_CancellationTokenSource; // w23
  System_Action_o *v13; // x21
  __int64 v14; // x1
  TerminalPramsManager_c *v15; // x0
  int32_t QuestId_k__BackingField; // w22
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4BCAE58 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_BattleResultComponent__OpenRetryQuest_b__65_0__, v3);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___, v4);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v7);
    byte_4BCAE58 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v8);
    byte_4BC27F4 = 1;
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  v11 = *((_DWORD *)&battleRetryConfirmComponent->fields.singleItem->fields.UnityEngine_Behaviour_Fields + 1);
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v8);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4BC27F3 = 1;
  }
  if ( !LODWORD(battleRetryConfirmComponent->fields.friendshipUpItemUseButton) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CancellationTokenSource = (int32_t)battleRetryConfirmComponent->fields.singleItem->fields.m_CancellationTokenSource;
  if ( !byte_4BC460A )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v8);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4BC460A = 1;
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
    v11,
    m_CancellationTokenSource,
    HIDWORD(battleRetryConfirmComponent->fields.singleItem->klass),
    0LL);
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_39;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v13 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent__OpenRetryQuest_b__65_0__, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BC27F4 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v14);
      byte_4BC27F4 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
    if ( !byte_4BC27F3 )
    {
      sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v14);
      v15 = TerminalPramsManager_TypeInfo;
      byte_4BC27F3 = 1;
    }
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = TerminalPramsManager_TypeInfo;
    }
    EventTutorialMaster__CheckTutorial(
      0,
      96,
      v13,
      QuestId_k__BackingField,
      v15->static_fields->_PhaseCnt_k__BackingField,
      0,
      0,
      0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
    goto LABEL_39;
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
    sub_1C1AE30(battleRetryConfirmComponent, v8);
  }
}


void __fastcall BattleResultComponent__OpenTutorial(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleEventTutorial_o *eventTutorial; // x0
  BattleEventTutorial_o *v6; // x20
  System_Action_o *v7; // x21
  BattleEventTutorial_o *v8; // x20
  System_Action_o *v9; // x21
  BattleEventTutorial_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4BCAE45 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_BattleResultComponent_OpenTutorial__, v3);
    sub_1C1ABD4(&StringLiteral_5594/*"END_PROC"*/, v4);
    byte_4BCAE45 = 1;
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
  v6 = this->fields.eventTutorial;
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    v7 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v6 )
    {
      BattleEventTutorial__callResult(v6, v7, 0LL);
      return;
    }
LABEL_23:
    sub_1C1AE30(eventTutorial, method);
  }
  if ( !v6 )
    goto LABEL_23;
  if ( BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0LL) )
  {
    eventTutorial = (BattleEventTutorial_o *)this->fields.battleResult;
    if ( !eventTutorial )
      goto LABEL_23;
    if ( BattleResultComponent_resultData__isWin((BattleResultComponent_resultData_o *)eventTutorial, 0LL) )
    {
      v8 = this->fields.eventTutorial;
      v9 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
      if ( !v8 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v8, v9, 0LL);
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
    v10 = this->fields.eventTutorial;
    v11 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( !v10 )
      goto LABEL_23;
    BattleEventTutorial__callResultLose(v10, v11, 0LL);
  }
  else
  {
LABEL_19:
    eventTutorial = (BattleEventTutorial_o *)this->fields.fsm;
    if ( !eventTutorial )
      goto LABEL_23;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5594/*"END_PROC"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__PushFollowerScene(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleResultComponent_c *v9; // x0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v15; // x23
  Il2CppObject *Instance; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x20

  if ( (byte_4BCAE5C & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, *(_QWORD *)&boostId);
    sub_1C1ABD4(&BattleSetupInfo_TypeInfo, v4);
    sub_1C1ABD4(&RandomLimitCountManager_TypeInfo, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C1ABD4(&SoundManager_TypeInfo, v7);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v8);
    byte_4BCAE5C = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  v9 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v9);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.8, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC460A )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    byte_4BC460A = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v11->static_fields->_WarId_k__BackingField;
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4BC27F4 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BC27F3 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4BC27F3 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v11->static_fields->_PhaseCnt_k__BackingField;
  v15 = (BattleSetupInfo_o *)sub_1C1AE20(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_29;
  Instance = (Il2CppObject *)BattleSetupInfo__ConvertBattleSetupInfo(
                               v15,
                               WarId_k__BackingField,
                               QuestId_k__BackingField,
                               PhaseCnt_k__BackingField,
                               0,
                               0,
                               0,
                               0LL);
  v18 = Instance;
  if ( boostId )
  {
    if ( !Instance )
      goto LABEL_29;
    LODWORD(Instance[3].monitor) = boostId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C1AE30(Instance, v17);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v18, 0LL);
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
    sub_1C1AE30(this, method);
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

  if ( (byte_4BCAE63 & 1) == 0 )
  {
    sub_1C1ABD4(&AssetManager_TypeInfo, method);
    byte_4BCAE63 = 1;
  }
  cashedFriendshipUpItemAssetData = this->fields.cashedFriendshipUpItemAssetData;
  p_cashedFriendshipUpItemAssetData = (PartyOrganizationUtility_o *)&this->fields.cashedFriendshipUpItemAssetData;
  v4 = cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38988476(v4, 0LL);
    p_cashedFriendshipUpItemAssetData->klass = 0LL;
    sub_1C1AB78(p_cashedFriendshipUpItemAssetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_4BCAE43 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, method);
    byte_4BCAE43 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0LL), (v5 = this->fields.screenTouch) == 0LL) )
      sub_1C1AE30(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BCAE5D & 1) == 0 )
  {
    sub_1C1ABD4(&BattlePerformance_TypeInfo, v1);
    byte_4BCAE5D = 1;
  }
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
  BattlePerformance__AdjustSmoothnessByCurrentSpeed(0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotion(BattleResultComponent_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Object_array *v25; // x20
  __int64 v26; // x0
  int64_t v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int64_t v53; // x21
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
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x21
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  int64_t v109; // x21
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  __int64 v116; // x2
  __int64 v117; // x3
  __int64 v118; // x4
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  int64_t v125; // x21
  System_Collections_Hashtable_o *v126; // x0
  __int64 v127; // x0
  int v128; // [xsp+Ch] [xbp-44h] BYREF
  int v129; // [xsp+10h] [xbp-40h] BYREF
  int v130; // [xsp+14h] [xbp-3Ch] BYREF
  int v131; // [xsp+18h] [xbp-38h] BYREF
  int v132; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4BCAE4A & 1) == 0 )
  {
    sub_1C1ABD4(&iTween_EaseType_TypeInfo, method);
    sub_1C1ABD4(&object___TypeInfo, v3);
    sub_1C1ABD4(&float_TypeInfo, v4);
    sub_1C1ABD4(&StringLiteral_19975/*"from"*/, v5);
    sub_1C1ABD4(&StringLiteral_12782/*"ScrollBarMotionCompleteValue"*/, v6);
    sub_1C1ABD4(&StringLiteral_24340/*"time"*/, v7);
    sub_1C1ABD4(&StringLiteral_22669/*"onupdate"*/, v8);
    sub_1C1ABD4(&StringLiteral_18850/*"delay"*/, v9);
    sub_1C1ABD4(&StringLiteral_12783/*"ScrollBarMotionUpdateValue"*/, v10);
    sub_1C1ABD4(&StringLiteral_24381/*"to"*/, v11);
    sub_1C1ABD4(&StringLiteral_19062/*"easeType"*/, v12);
    sub_1C1ABD4(&StringLiteral_22661/*"oncomplete"*/, v13);
    sub_1C1ABD4(&iTween_TypeInfo, v14);
    byte_4BCAE4A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61688296(gameObject, 0LL);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_1C1AC7C(object___TypeInfo, 14LL);
  if ( !v17 )
    sub_1C1AE30(0LL, v18);
  v25 = (System_Object_array *)v17;
  v26 = StringLiteral_19975/*"from"*/;
  if ( StringLiteral_19975/*"from"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_19975/*"from"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_19975/*"from"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_67;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v132 = 0;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v132, v28, v29, v30);
  v37 = v26;
  if ( v26 )
  {
    v26 = sub_1C1AD10(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_67;
  v25->m_Items[1] = (Il2CppObject *)v37;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  v26 = StringLiteral_24381/*"to"*/;
  if ( StringLiteral_24381/*"to"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_24381/*"to"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_24381/*"to"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_67;
  v25->m_Items[2] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[2], v27, v38, v39, v40, v41, v42, v43);
  v131 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v131, v44, v45, v46);
  v53 = v26;
  if ( v26 )
  {
    v26 = sub_1C1AD10(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_67;
  v25->m_Items[3] = (Il2CppObject *)v53;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v26 = StringLiteral_22669/*"onupdate"*/;
  if ( StringLiteral_22669/*"onupdate"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_22669/*"onupdate"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_22669/*"onupdate"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_67;
  v25->m_Items[4] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[4], v27, v54, v55, v56, v57, v58, v59);
  v26 = StringLiteral_12783/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12783/*"ScrollBarMotionUpdateValue"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_12783/*"ScrollBarMotionUpdateValue"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_12783/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_67;
  v25->m_Items[5] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[5], v27, v60, v61, v62, v63, v64, v65);
  v26 = StringLiteral_22661/*"oncomplete"*/;
  if ( StringLiteral_22661/*"oncomplete"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_22661/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_22661/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_67;
  v25->m_Items[6] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[6], v27, v66, v67, v68, v69, v70, v71);
  v26 = StringLiteral_12782/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12782/*"ScrollBarMotionCompleteValue"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_12782/*"ScrollBarMotionCompleteValue"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_12782/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_67;
  v25->m_Items[7] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[7], v27, v72, v73, v74, v75, v76, v77);
  v26 = StringLiteral_19062/*"easeType"*/;
  if ( StringLiteral_19062/*"easeType"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_19062/*"easeType"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_19062/*"easeType"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_67;
  v25->m_Items[8] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[8], v27, v78, v79, v80, v81, v82, v83);
  v130 = 17;
  v26 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v130, v84, v85, v86);
  v93 = v26;
  if ( v26 )
  {
    v26 = sub_1C1AD10(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_67;
  v25->m_Items[9] = (Il2CppObject *)v93;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[9], v93, v87, v88, v89, v90, v91, v92);
  v26 = StringLiteral_24340/*"time"*/;
  if ( StringLiteral_24340/*"time"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_24340/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_24340/*"time"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_67;
  v25->m_Items[10] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[10], v27, v94, v95, v96, v97, v98, v99);
  v129 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v129, v100, v101, v102);
  v109 = v26;
  if ( v26 )
  {
    v26 = sub_1C1AD10(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
  }
  if ( v25->max_length <= 0xB )
    goto LABEL_67;
  v25->m_Items[11] = (Il2CppObject *)v109;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[11], v109, v103, v104, v105, v106, v107, v108);
  v26 = StringLiteral_18850/*"delay"*/;
  if ( StringLiteral_18850/*"delay"*/ )
  {
    v26 = sub_1C1AD10(StringLiteral_18850/*"delay"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_18850/*"delay"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xC )
    goto LABEL_67;
  v25->m_Items[12] = (Il2CppObject *)v27;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[12], v27, v110, v111, v112, v113, v114, v115);
  v128 = 0;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v128, v116, v117, v118);
  v125 = v26;
  if ( v26 )
  {
    v26 = sub_1C1AD10(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_68:
      v127 = sub_1C1AE54(v26);
      sub_1C1ACFC(v127, 0LL);
    }
  }
  if ( v25->max_length <= 0xD )
LABEL_67:
    sub_1C1AE38(v26, v27);
  v25->m_Items[13] = (Il2CppObject *)v125;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v25->m_Items[13], v125, v119, v120, v121, v122, v123, v124);
  v126 = iTween__Hash(v25, 0LL);
  iTween__ValueTo(v16, v126, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionCompleteValue(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  BattleResultItemComponent_o *itemResult; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  System_Action_o *v8; // x21

  v2 = this;
  if ( (byte_4BCAE4C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__, v3);
    this = (BattleResultComponent_o *)sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4);
    byte_4BCAE4C = 1;
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
  v8 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v2,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_1C1AE30(this, method);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v8, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4BCAE4B & 1) == 0 )
  {
    sub_1C1ABD4(&iTween_TypeInfo, method);
    byte_4BCAE4B = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1C1AE30(0LL, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_61688296(gameObject, 0LL);
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  BattleResultComponent_resultData_o *v34; // x1
  BattleResultComponent_o **p_battleResult; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  TerminalPramsManager_c *v42; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  __int64 v44; // x1
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v46; // x0
  int32_t v47; // w19
  BalanceConfig_c *v48; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v50; // x0
  BattleResultComponent_o *v51; // x8
  System_Collections_Generic_IEnumerable_TSource__o *friendResult; // x0
  BattleResultComponent___c_c *v53; // x8
  BattleResultComponent_o *v54; // x26
  System_Converter_TInput__TOutput__o *_9__39_0; // x19
  Il2CppObject *v56; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_String_array *v64; // x0
  System_String_o *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventItemResult; // x0
  BattleResultComponent___c_c *v67; // x8
  BattleResultComponent_o *v68; // x26
  System_Converter_TInput__TOutput__o *_9__39_1; // x19
  Il2CppObject *v70; // x23
  struct BattleResultComponent___c_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_String_array *v78; // x0
  System_String_o *v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t m_CancellationTokenSource; // x1
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  struct BattleResultComponent_resultData_o *v93; // x8
  BattleData_o *v94; // x28
  int64_t eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v96; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v98; // x26
  BattleResultComponent_resultData_o *battleResult; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x8
  Il2CppObject *Master_object; // x19
  int32_t v102; // w23
  int32_t QuestId; // w24
  const MethodInfo *v104; // x7
  bool v105; // w27
  BattleResultComponent_resultData_o *v106; // x19
  struct BattleInfoData_o *battle_info; // x8
  BattleResultBondsComponent_o *v108; // x23
  UserServantCollectionEntity_array *oldUserSvtCollection; // x28
  DeckData_o *myDeck; // x24
  int32_t followerType; // w29
  BattleUserServantData_array *userSvt; // x25
  UserServantCollectionEntity_array *v113; // x2
  struct BattleResultEventItemComponent_o *v114; // x9
  struct System_Threading_CancellationTokenSource_o *v115; // x8
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v117; // x11
  struct BattleResultEventItemComponent_o *v118; // x9
  struct System_Threading_CancellationTokenSource_o *v119; // x8
  QuestEntity_o *quest_ent; // x8
  UserGameEntity_o *parentComp; // x29
  BattleResultItemComponent_o *v122; // x25
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  struct UnityEngine_GameObject_o *obj_basebg; // x20
  int32_t expResult_high; // w19
  struct BattleResultItemComponent_o *dropupinfos; // x23
  struct BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x24
  int32_t firstClearRewardQp; // w26
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  BattleResultComponent_o *v136; // x8
  struct BattleResultItemComponent_o *v137; // x9
  struct UILabel_o *getQpLabel; // x9
  int64_t mText; // x1
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  struct BattleResultItemComponent_o *v146; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v148; // x9
  int64_t v149; // x1
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  struct UISprite_o *nextButtonSpr; // x8
  Il2CppObject *v154; // x0
  struct BattleResultItemComponent_o *v155; // x8
  Il2CppObject *v156; // x23
  UILabel_o *v157; // x19
  System_String_o *v158; // x0
  __int64 v159; // x2
  __int64 v160; // x3
  __int64 v161; // x4
  struct BattleResultItemComponent_o *v162; // x8
  struct UISprite_o *v163; // x9
  UILabel_o *v164; // x19
  Il2CppObject *v165; // x0
  BattleResultFriendComponent_o *v166; // x19
  int32_t v167; // w23
  int32_t m_CancellationTokenSource_high; // w24
  int64_t v169; // x25
  int32_t endtargetObject; // w26
  int32_t endtargetObject_high; // w27
  struct BattleResultComponent_resultData_o *v172; // x8
  struct BattleResultComponent_resultData_o *v173; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v175; // x8
  struct BattleResultComponent_resultData_o *v176; // x8
  struct BattleInfoData_o *v177; // x8
  struct DeckData_o *v178; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v181; // x20
  char v182; // w22
  BattleResultComponent_o *v183; // x19
  int32_t v184; // w23
  int32_t EventProgressValueSaveData_43302904; // w0
  int v186; // w8
  TerminalPramsManager_c *v187; // x0
  struct AssetData_o *cashedFriendshipUpItemAssetData; // x8
  bool isWin; // w19
  const MethodInfo *boostRate; // [xsp+10h] [xbp-F0h]
  struct UnityEngine_GameObject_o *FriendIconPrefab; // [xsp+50h] [xbp-B0h]
  struct BattleResultFriendComponent_o *v192; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  System_Int32_array *v194; // [xsp+68h] [xbp-98h]
  AssetData_o *resultAssetb; // [xsp+70h] [xbp-90h]
  BattleResultComponent_resultData_array *result; // [xsp+78h] [xbp-88h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+80h] [xbp-80h]
  BattleData_o *battleData; // [xsp+88h] [xbp-78h]
  int rightAnchor_high; // [xsp+90h] [xbp-70h] BYREF
  int v201; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v203; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = this;
  if ( (byte_4BCAE44 & 1) == 0 )
  {
    sub_1C1ABD4(&BalanceConfig_TypeInfo, resultList);
    sub_1C1ABD4(&System_Converter_int__string__TypeInfo, v13);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventBuddyPointMaster___, v14);
    sub_1C1ABD4(&Method_DataManager_GetMaster_EventProgressValueMaster___, v15);
    sub_1C1ABD4(&DataManager_TypeInfo, v16);
    sub_1C1ABD4(&Method_System_Linq_Enumerable_ToList_int___, v17);
    sub_1C1ABD4(&EventInfoUIProgressControl_TypeInfo, v18);
    sub_1C1ABD4(&int_TypeInfo, v19);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v20);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__ToArray__, v21);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v22);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v23);
    sub_1C1ABD4(&QuestKnockdownResult_TypeInfo, v24);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v25);
    sub_1C1ABD4(&Method_BattleResultComponent___c__Set_b__39_0__, v26);
    sub_1C1ABD4(&Method_BattleResultComponent___c__Set_b__39_1__, v27);
    sub_1C1ABD4(&BattleResultComponent___c_TypeInfo, v28);
    sub_1C1ABD4(&StringLiteral_19946/*"freeShopIds"*/, v29);
    sub_1C1ABD4(&StringLiteral_11308/*"RESULT_QP_PLUS"*/, v30);
    sub_1C1ABD4(&StringLiteral_25354/*"{0:#,0}"*/, v31);
    sub_1C1ABD4(&StringLiteral_23317/*"returnRarePriShopIds"*/, v32);
    this = (BattleResultComponent_o *)sub_1C1ABD4(&StringLiteral_866/*","*/, v33);
    byte_4BCAE44 = 1;
  }
  entity = 0LL;
  if ( !resultList )
    goto LABEL_204;
  if ( !resultList->max_length )
    goto LABEL_205;
  v34 = resultList->m_Items[0];
  result = resultList;
  v12->fields.battleResult = v34;
  p_battleResult = (BattleResultComponent_o **)&v12->fields.battleResult;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v12->fields.battleResult,
    (int64_t)v34,
    (int64_t)tutorial,
    (int32_t)resultAsset,
    (System_String_o *)viewGroupIds,
    (BattleSetupInfo_o *)bData,
    (FollowerInfo_o *)method,
    v7);
  v12->fields.eventTutorial = tutorial;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v12->fields.eventTutorial, (int64_t)tutorial, v36, v37, v38, v39, v40, v41);
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
      if ( !byte_4BC5065 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, resultList);
        byte_4BC5065 = 1;
      }
      v42 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v42 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v42->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0LL);
      if ( !byte_4BC5055 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v44);
        byte_4BC5055 = 1;
      }
      v46 = TerminalPramsManager_TypeInfo;
      v47 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v46 = TerminalPramsManager_TypeInfo;
      }
      v46->static_fields->_BeforeEventActivityPoint_k__BackingField = v47;
      v48 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v48 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v48->static_fields->UserEventActivityPointMax;
      if ( !byte_4BC5065 )
      {
        sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v44);
        byte_4BC5065 = 1;
      }
      v50 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v50 = TerminalPramsManager_TypeInfo;
      }
      if ( v50->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v50->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v50);
        if ( !byte_4BC5055 )
        {
          sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v44);
          byte_4BC5055 = 1;
        }
        v50 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v50 = TerminalPramsManager_TypeInfo;
        }
        v50->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v50->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v50);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v51 = *p_battleResult;
  v194 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v12->fields.eventTutorial;
  battleData = bData;
  if ( !*p_battleResult )
    goto LABEL_204;
  friendResult = (System_Collections_Generic_IEnumerable_TSource__o *)v51[1].fields.friendResult;
  if ( friendResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        friendResult,
                                        (const MethodInfo_2FDC9E8 *)Method_System_Linq_Enumerable_ToList_int___);
    v53 = BattleResultComponent___c_TypeInfo;
    v54 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v53 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_0 = (System_Converter_TInput__TOutput__o *)v53->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = BattleResultComponent___c_TypeInfo;
      }
      v56 = (Il2CppObject *)v53->static_fields->__9;
      _9__39_0 = (System_Converter_TInput__TOutput__o *)sub_1C1AE20(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_0, v56, Method_BattleResultComponent___c__Set_b__39_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = (struct System_Converter_int__string__o *)_9__39_0;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&static_fields->__9__39_0,
        (int64_t)_9__39_0,
        v58,
        v59,
        v60,
        v61,
        v62,
        v63);
    }
    if ( !v54 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v54,
                                        (System_Converter_T__TOutput__o *)_9__39_0,
                                        (const MethodInfo_2ECF154 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v64 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
    v65 = System_String__Join((System_String_o *)StringLiteral_866/*","*/, v64, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19946/*"freeShopIds"*/, v65, 0LL);
    v51 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  eventItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v51[1].fields.eventItemResult;
  if ( eventItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventItemResult,
                                        (const MethodInfo_2FDC9E8 *)Method_System_Linq_Enumerable_ToList_int___);
    v67 = BattleResultComponent___c_TypeInfo;
    v68 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v67 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_1 = (System_Converter_TInput__TOutput__o *)v67->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !v67->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v67);
        v67 = BattleResultComponent___c_TypeInfo;
      }
      v70 = (Il2CppObject *)v67->static_fields->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_1C1AE20(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_1, v70, Method_BattleResultComponent___c__Set_b__39_1__, 0LL);
      v71 = BattleResultComponent___c_TypeInfo->static_fields;
      v71->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v71->__9__39_1, (int64_t)_9__39_1, v72, v73, v74, v75, v76, v77);
    }
    if ( !v68 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v68,
                                        (System_Converter_T__TOutput__o *)_9__39_1,
                                        (const MethodInfo_2ECF154 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v78 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
    v79 = System_String__Join((System_String_o *)StringLiteral_866/*","*/, v78, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23317/*"returnRarePriShopIds"*/, v79, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_204;
  m_CancellationTokenSource = (int64_t)(*p_battleResult)->fields.m_CancellationTokenSource;
  v12->fields.eventEndTitle = (struct System_String_o *)m_CancellationTokenSource;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v12->fields.eventEndTitle,
    m_CancellationTokenSource,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v93 = v12->fields.battleResult;
  v94 = bData;
  if ( !v93 )
    goto LABEL_204;
  eventEndMessage = (int64_t)v93->fields.eventEndMessage;
  v12->fields.eventEndMessage = (struct System_String_o *)eventEndMessage;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v12->fields.eventEndMessage, eventEndMessage, v87, v88, v89, v90, v91, v92);
  v96 = v12->fields.battleResult;
  if ( !v96 )
    goto LABEL_204;
  isTrialQuestNewRecord = v96->fields.isTrialQuestNewRecord;
  v98 = (QuestKnockdownResult_o *)sub_1C1AE20(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v98, isTrialQuestNewRecord, bData, 0LL);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v102 = BattleData__get_eventId(bData, 0LL);
      QuestId = BattleData__getQuestId(bData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(bData, 0LL);
      if ( !Master_object )
        goto LABEL_204;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v102,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_204;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v105 = (unsigned __int8)this & 1;
      }
      else
      {
        v105 = 0;
      }
      v106 = v12->fields.battleResult;
      if ( !v106 )
        goto LABEL_204;
      battle_info = bData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_204;
      v108 = v12->fields.bondsResult;
      if ( !v108 )
        goto LABEL_204;
      oldUserSvtCollection = v106->fields.oldUserSvtCollection;
      myDeck = v106->fields.myDeck;
      followerType = v106->fields.followerType;
      userSvt = battle_info->fields.userSvt;
      BattleResultBondsComponent__InitResultData(
        v12->fields.bondsResult,
        oldUserSvtCollection,
        v106->fields.friendshipRewardInfos,
        resultAsset,
        v106->fields.friendshipExpBase,
        v106->fields.getJoinSvts,
        0,
        v104);
      v113 = oldUserSvtCollection;
      v94 = battleData;
      BattleResultBondsComponent__SetResultDataLocal(
        v108,
        myDeck,
        v113,
        followerType,
        userSvt,
        v106,
        v105,
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
  v114 = this->fields.eventItemResult;
  if ( v114
    && (v115 = v114->fields.m_CancellationTokenSource) != 0LL
    && (itemResult = this->fields.itemResult) != 0LL
    && (v117 = itemResult->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v115 || !(_DWORD)v117 )
      goto LABEL_205;
    if ( !v12->fields.expResult )
      goto LABEL_204;
    BattleResultExpComponent__setResultData(
      v12->fields.expResult,
      (UserGameEntity_o *)v114->fields.parentComp,
      (UserEquipEntity_o *)itemResult->fields.parentComp,
      (MasterLvRewardInfo_array *)this->fields.eventEndTitle,
      resultAsset,
      v94->fields.maxTurnDamageInBattle,
      v94->fields.maxTurnDamageRecord,
      v98,
      0LL);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  v118 = this->fields.eventItemResult;
  if ( v118 && (v119 = v118->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v119 )
      goto LABEL_205;
    quest_ent = v94->fields.quest_ent;
    if ( !quest_ent )
      goto LABEL_204;
    parentComp = (UserGameEntity_o *)v118->fields.parentComp;
    v122 = v12->fields.itemResult;
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
    v192 = this->fields.friendResult;
    this = (BattleResultComponent_o *)QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
    if ( !*p_battleResult || !v122 )
      goto LABEL_204;
    BattleResultItemComponent__setResultData(
      v122,
      (BattleDropItem_array *)resultAssetb,
      fsm,
      fsm_high,
      parentComp,
      eventId,
      (UserEventEntity_array *)v192,
      (UserEventPointEntity_array *)FriendIconPrefab,
      (int64_t)obj_basebg,
      v194,
      expResult_high,
      (DropUpInfo_array *)dropupinfos,
      (EventConquestInfo_array *)battleRetryConfirmComponent,
      firstClearRewardQp,
      (unsigned __int8)this & 1,
      (BattleResultAddRewardBonus_o *)(*p_battleResult)[1].fields.nextButtonSpr,
      0LL);
    v94 = battleData;
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
  }
  v136 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( v136[1].fields.nextButtonSpr )
  {
    v137 = v12->fields.itemResult;
    if ( !v137 )
      goto LABEL_204;
    getQpLabel = v137->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_204;
    mText = (int64_t)getQpLabel->fields.mText;
    v136[1].fields.resultItemScrollBar = (struct UIScrollBar_o *)mText;
    sub_1C1AB78(
      (PartyOrganizationUtility_o *)&v136[1].fields.resultItemScrollBar,
      mText,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
    v146 = v12->fields.itemResult;
    if ( !v146 )
      goto LABEL_204;
    nowQpLabel = v146->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_204;
    v148 = v12->fields.battleResult;
    if ( !v148 )
      goto LABEL_204;
    v149 = (int64_t)nowQpLabel->fields.mText;
    v148->fields.ultimateNowQpText = (struct System_String_o *)v149;
    sub_1C1AB78((PartyOrganizationUtility_o *)&v148->fields.ultimateNowQpText, v149, v140, v141, v142, v143, v144, v145);
    if ( !*p_battleResult )
      goto LABEL_204;
    nextButtonSpr = (*p_battleResult)[1].fields.nextButtonSpr;
    if ( !nextButtonSpr )
      goto LABEL_204;
    v201 = (__int64)nextButtonSpr->fields.rightAnchor & ~(SLODWORD(nextButtonSpr->fields.rightAnchor) >> 31);
    v154 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v201, v150, v151, v152);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25354/*"{0:#,0}"*/, v154, 0LL);
    v155 = v12->fields.itemResult;
    if ( !v155 )
      goto LABEL_204;
    v156 = (Il2CppObject *)this;
    v157 = v155->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v158 = LocalizationManager__Get((System_String_o *)StringLiteral_11308/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v158, v156, 0LL);
    if ( !v157 )
      goto LABEL_204;
    UILabel__set_text(v157, (System_String_o *)this, 0LL);
    v162 = v12->fields.itemResult;
    if ( !v162 )
      goto LABEL_204;
    if ( !*p_battleResult )
      goto LABEL_204;
    v163 = (*p_battleResult)[1].fields.nextButtonSpr;
    if ( !v163 )
      goto LABEL_204;
    v164 = v162->fields.nowQpLabel;
    rightAnchor_high = HIDWORD(v163->fields.rightAnchor);
    v165 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &rightAnchor_high, v159, v160, v161);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25354/*"{0:#,0}"*/, v165, 0LL);
    if ( !v164 )
      goto LABEL_204;
    UILabel__set_text(v164, (System_String_o *)this, 0LL);
    this = (BattleResultComponent_o *)v12->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_204;
    v203.fields.r = 0.29804;
    v203.fields.a = 1.0;
    v203.fields.g = 0.29804;
    v203.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v203, 0LL);
    v136 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  this = (BattleResultComponent_o *)v94->fields.quest_ent;
  if ( !this )
    goto LABEL_204;
  v166 = v12->fields.friendResult;
  v167 = (int32_t)v136[1].fields.m_CancellationTokenSource;
  m_CancellationTokenSource_high = HIDWORD(v136[1].fields.m_CancellationTokenSource);
  v169 = *(_QWORD *)&v136[1].fields.m_CachedPtr;
  endtargetObject = (int32_t)v136[1].fields.endtargetObject;
  endtargetObject_high = HIDWORD(v136[1].fields.endtargetObject);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v166 )
    goto LABEL_204;
  BattleResultFriendComponent__setResultData(
    v166,
    v167,
    m_CancellationTokenSource_high,
    v169,
    endtargetObject,
    endtargetObject_high,
    (unsigned __int8)this & 1,
    0LL);
  v172 = v12->fields.battleResult;
  if ( !v172 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v12->fields.eventItemResult;
  if ( !this )
    goto LABEL_204;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v172->fields.resultEventRewardInfos,
                                      (unsigned int)v172->fields.eventId,
                                      v172->fields.resultBoostItemRewardInfos,
                                      v172->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v173 = v12->fields.battleResult;
  if ( !v173 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v12->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_204;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v173->fields.resultDamageRewardInfos,
    (unsigned int)v173->fields.eventId,
    v173->fields.resultBoostItemRewardInfos,
    v173->fields.rewardInfos,
    this->klass[1]._1.name);
  eventFortificationItemResult = (UnityEngine_Object_o *)v12->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v175 = v12->fields.battleResult;
    if ( !v175 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v12->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v175->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v175->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v176 = v12->fields.battleResult;
    if ( !v176 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v12->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v176->fields.fortificationInfos,
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
  v177 = v94->fields.battle_info;
  if ( !v177 )
    goto LABEL_204;
  v178 = v177->fields.myDeck;
  if ( v178 )
  {
    svts = v178->fields.svts;
    if ( svts )
    {
      max_length = svts->max_length;
      if ( max_length >= 1 )
      {
        v181 = 0LL;
        while ( (unsigned int)v181 < max_length )
        {
          this = (BattleResultComponent_o *)svts->m_Items[v181];
          if ( !this )
            goto LABEL_204;
          this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin(
                                              (BattleDeckServantData_o *)this,
                                              0LL);
          v182 = (char)this;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            max_length = svts->max_length;
            if ( (int)++v181 < max_length )
              continue;
          }
          goto LABEL_156;
        }
LABEL_205:
        sub_1C1AE38(this, resultList);
      }
    }
  }
  v182 = 0;
LABEL_156:
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F9F43C *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1),
                                        0LL);
    v183 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_204;
      v184 = *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      EventProgressValueSaveData_43302904 = EventInfoUIProgressControl__GetEventProgressValueSaveData_43302904(
                                              v184,
                                              0,
                                              0LL);
      v186 = (int)v183->fields.obj_basebg;
      LODWORD(v183) = 0;
      if ( EventProgressValueSaveData_43302904 != v186 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BC4610 )
        {
          sub_1C1ABD4(&TerminalPramsManager_TypeInfo, resultList);
          byte_4BC4610 = 1;
        }
        v187 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v187 = TerminalPramsManager_TypeInfo;
        }
        v187->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v183) = 1;
      }
    }
  }
  else
  {
    LODWORD(v183) = 0;
  }
  if ( v182 & 1 | !v94->fields.isRetryable )
    goto LABEL_178;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( (((unsigned int)v183 | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
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
    sub_1C1AE30(this, resultList);
  }
  cashedFriendshipUpItemAssetData = this[1].fields.cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData && cashedFriendshipUpItemAssetData->fields.name )
    BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 4096, 0LL);
  if ( (BattleData__isBattleResultLoseQuestClear(v94, 0LL) || BattleData__isBattleRetreatQuestClear(v94, 0LL))
    && v94->fields.isItemResultSkip )
  {
    if ( !BattleData__IsWarBoard(v94, 0LL) )
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

  if ( (byte_4BCAE48 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, method);
    byte_4BCAE48 = 1;
  }
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1C1AE30(0LL, v4);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70779684((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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

  if ( (byte_4BCAE49 & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo, method);
    byte_4BCAE49 = 1;
  }
  v3 = sub_1C1AE20(BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__47___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C1AE30(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  bool v4; // w19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4BCAE59 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__, method);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v2);
    byte_4BCAE59 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC27F4 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    byte_4BC27F4 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v4 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v3->static_fields->_QuestId_k__BackingField, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v6);
  if ( v4 )
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
  __int64 v7; // x1
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v9; // x21
  struct BattleData_o *data; // x8

  if ( (byte_4BCAE41 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_10188/*"OpenResult"*/, target);
    sub_1C1ABD4(&StringLiteral_10796/*"Performance"*/, v7);
    byte_4BCAE41 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10796/*"Performance"*/,
                            0LL);
  if ( !perf )
    goto LABEL_15;
  v9 = (HutongGames_PlayMaker_FsmGameObject_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)perf, 0LL);
  if ( !v9 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v9, (UnityEngine_GameObject_o *)fsm, 0LL);
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
    sub_1C1AE30(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10188/*"OpenResult"*/, 0LL);
}


void __fastcall BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
        UnityEngine_GameObject_o **prefabObject,
        System_String_o *prefabName,
        AssetData_o *assetData,
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Object_object__49812820; // x21
  Il2CppObject *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v8 = (PartyOrganizationUtility_o *)prefabObject;
  if ( (byte_4BCAE6A & 1) == 0 )
  {
    sub_1C1ABD4(&Method_AssetData_GetObject_GameObject____77543640, prefabName);
    sub_1C1ABD4(&Method_UnityEngine_Object_Instantiate_GameObject____77632760, v9);
    prefabObject = (UnityEngine_GameObject_o **)sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v10);
    byte_4BCAE6A = 1;
  }
  if ( !assetData )
    sub_1C1AE30(prefabObject, prefabName);
  Object_object__49812820 = AssetData__GetObject_object__49812820(
                              assetData,
                              prefabName,
                              (const MethodInfo_2F81554 *)Method_AssetData_GetObject_GameObject____77543640);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__50483316(
          Object_object__49812820,
          root,
          (const MethodInfo_3025074 *)Method_UnityEngine_Object_Instantiate_GameObject____77632760);
  v8->klass = (PartyOrganizationUtility_c *)v12;
  sub_1C1AB78(v8, (int64_t)v12, v13, v14, v15, v16, v17, v18);
}


void __fastcall BattleResultComponent___OpenDataLostBattleResetDialog_b__73_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  MissionNotifyManager_o *Instance; // x0
  __int64 v9; // x1
  TerminalPramsManager_c *v10; // x0

  if ( (byte_4BCAE68 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v3);
    sub_1C1ABD4(&StringLiteral_5594/*"END_PROC"*/, v4);
    byte_4BCAE68 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BC4610 )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, method);
    byte_4BC4610 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_4BC4D8D )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v6);
    byte_4BC4D8D = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_387ACC8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !byte_4BC505C )
  {
    sub_1C1ABD4(&TerminalPramsManager_TypeInfo, v9);
    byte_4BC505C = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  v10->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  Instance = (MissionNotifyManager_o *)this->fields.fsm;
  if ( !Instance )
LABEL_20:
    sub_1C1AE30(Instance, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5594/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenFriendshipUpItemSelectDialog_b__74_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  FriendshipUpItemSelectDialog_o *v6; // x20
  Il2CppObject *battleRetryConfirmComponent; // x21
  System_Action_o *v8; // x19
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4BCAE69 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_BattleRetryConfirmComponent_BaseDialogOpen__, v3);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v4);
    byte_4BCAE69 = 1;
  }
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0LL, 0LL) )
  {
    v6 = this->fields.friendshipUpItemSelectDialog;
    battleRetryConfirmComponent = (Il2CppObject *)this->fields.battleRetryConfirmComponent;
    v8 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
    System_Action___ctor(v8, battleRetryConfirmComponent, Method_BattleRetryConfirmComponent_BaseDialogOpen__, 0LL);
    if ( !v6 )
      sub_1C1AE30(v9, v10);
    FriendshipUpItemSelectDialog__Open(v6, v8, 0LL);
  }
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__65_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4BCAE66 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_BattleResultComponent__OpenRetryQuest_b__65_1__, method);
    sub_1C1ABD4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4BCAE66 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C1AE20(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenRetryQuest_b__65_1__,
    0LL);
  if ( !battleRetryConfirmComponent )
    sub_1C1AE30(v6, v7);
  BattleRetryConfirmComponent__Open(battleRetryConfirmComponent, v5, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__65_1(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4BCAE67 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_13205/*"StartQuestClearReward"*/, method);
    byte_4BCAE67 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13205/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__50_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BCAE65 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_5594/*"END_PROC"*/, method);
    byte_4BCAE65 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5594/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__checkNew(
        BattleResultComponent_o *this,
        int32_t resultType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  BattleResultItemComponent_o *itemResult; // x0
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleResultComponent_c *v22; // x0
  int64_t *v23; // x21
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  BattleDropItem_o *NewDrop; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v38; // w0
  Il2CppObject *Instance; // x21
  System_Action_o *v40; // x22
  __int64 *v41; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7

  if ( (byte_4BCAE52 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&resultType);
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, v5);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v6);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_1C1ABD4(&Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__, v9);
    sub_1C1ABD4(&BattleResultComponent___c__DisplayClass58_0_TypeInfo, v10);
    sub_1C1ABD4(&StringLiteral_9808/*"OPEN"*/, v11);
    sub_1C1ABD4(&StringLiteral_9422/*"NEXT"*/, v12);
    byte_4BCAE52 = 1;
  }
  v13 = sub_1C1AE20(BattleResultComponent___c__DisplayClass58_0_TypeInfo);
  BattleResultComponent___c__DisplayClass58_0___ctor((BattleResultComponent___c__DisplayClass58_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_35;
  *(_QWORD *)(v13 + 24) = this;
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  v22 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v22);
  *(_QWORD *)(v13 + 16) = 0LL;
  v23 = (int64_t *)(v13 + 16);
  sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 16), 0LL, v24, v25, v26, v27, v28, v29);
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
      v38 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v15 = 0LL;
      if ( !v38 )
        goto LABEL_19;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_35;
LABEL_17:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, 0LL);
LABEL_18:
      v15 = (int64_t)NewDrop;
LABEL_19:
      *v23 = v15;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v13 + 16), v15, v31, v32, v33, v34, v35, v36);
LABEL_20:
      if ( !*v23 )
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
          UnityEngine_Object__DestroyImmediate_70794600(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_1C1AB78(
            (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
            0LL,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_35;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v41 = &StringLiteral_9422/*"NEXT"*/;
          goto LABEL_34;
        }
LABEL_35:
        sub_1C1AE30(itemResult, v15);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v40 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(
        v40,
        (Il2CppObject *)v13,
        Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_35;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v40, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_35;
      v41 = &StringLiteral_9808/*"OPEN"*/;
LABEL_34:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v41, 0LL);
      return;
    default:
      goto LABEL_20;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BCAE42 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_12457/*"START_Begin"*/, method);
    byte_4BCAE42 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12457/*"START_Begin"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4BCAE47 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_4BCAE47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4BCAE53 & 1) == 0 )
  {
    sub_1C1ABD4(&StringLiteral_5594/*"END_PROC"*/, method);
    byte_4BCAE53 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C1AE30(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5594/*"END_PROC"*/, 0LL);
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
  __int64 v7; // x1
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BCAE56 & 1) == 0 )
  {
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, userCommandCodeId);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7);
    byte_4BCAE56 = 1;
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
    UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v13, v14, v15, v16, v17, v18);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0LL),
        *p_ServantRewardActionComp = Prefab,
        sub_1C1AB78(
          (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
          (int64_t)Prefab,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_35747476(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_14:
    sub_1C1AE30(transform, v10);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  Il2CppObject *Entity; // x0
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  Il2CppObject *v22; // x23
  UnityEngine_Object_o *gameObject; // x25
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  Il2CppObject *v30; // x25
  ServantRewardAction_o *Prefab; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  ServantRewardAction_o *v38; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v41; // w25
  Il2CppObject v42; // q1
  int64_t v43; // x22
  Il2CppObject v44; // q1
  int64_t v45; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4BCAE55 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1C1ABD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v12);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C1ABD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v16);
    byte_4BCAE55 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F9F490 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_324ABD4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v22 = Entity;
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
    UnityEngine_Object__Destroy_70794412(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v24, v25, v26, v27, v28, v29);
  }
  v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v30,
             (UnityEngine_Transform_o *)Instance,
             1,
             0LL);
  *p_ServantRewardActionComp = Prefab;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
    (int64_t)Prefab,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  if ( !v22 )
    goto LABEL_27;
  v38 = *p_ServantRewardActionComp;
  klass = v22[5].klass;
  monitor = v22[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v49.fields.currentCryptoKey = klass;
  *(_QWORD *)&v49.fields.fakeValue = monitor;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(v49, 0LL);
  if ( isDoEffect )
  {
    v42 = v22[2];
    *(Il2CppObject *)&v48.fields.currentCryptoKey = v22[1];
    *(Il2CppObject *)&v48.fields.fakeValue = v42;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v47 = v48;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v47, 0LL);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v22[6],
                                  0LL);
    if ( v38 )
    {
      ServantRewardAction__Setup(v38, v41, v43, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_25;
    }
LABEL_27:
    sub_1C1AE30(Instance, v18);
  }
  v44 = v22[2];
  *(Il2CppObject *)&v48.fields.currentCryptoKey = v22[1];
  *(Il2CppObject *)&v48.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v48;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47559652(&v46, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47556128(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v22[6],
                                0LL);
  if ( !v38 )
    goto LABEL_27;
  ServantRewardAction__Setup(v38, v41, v45, (int32_t)Instance, 1, 1, 1, 2, 0LL);
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
    sub_1C1AE30(0LL, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1C1AE30(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1C1AE30(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_fronttouch, flg, 0LL);
}


void __fastcall BattleResultComponent__showServantRewardAction(
        BattleResultComponent_o *this,
        int64_t userSvtId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  bool v12; // w21
  System_Action_o *v13; // x22
  const MethodInfo *v14; // x5
  __int64 v15; // x1
  UnityEngine_Component_o *Instance; // x0
  __int64 *v17; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BCAE54 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, userSvtId);
    sub_1C1ABD4(&Method_BattleResultComponent_endNewView__, v7);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v8);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C1ABD4(&StringLiteral_9808/*"OPEN"*/, v10);
    sub_1C1ABD4(&StringLiteral_9422/*"NEXT"*/, v11);
    byte_4BCAE54 = 1;
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
      UnityEngine_Object__DestroyImmediate_70794600(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
        0LL,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v17 = &StringLiteral_9422/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C1AE30(Instance, v15);
  }
  v12 = Gift__IsEventSvtGet(type, 0LL);
  v13 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v12, v12, v13, v14);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v17 = &StringLiteral_9808/*"OPEN"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v17, 0LL);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4BCAE6E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1C1ABD4(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4BCAE6E = 1;
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
      sub_1C1AE30(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C1AE20(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C1AB78((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C1ABE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C1AE20(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C1ABE8(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C1ACFC(v3, v4);
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BCAE6B & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultComponent___c_TypeInfo, v1);
    byte_4BCAE6B = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)BattleResultComponent___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v3; // x1
  struct BattleDropItem_o *newDrop; // x8
  struct BattleDropItem_o *v5; // x8
  int64_t userSvtId; // x20
  Il2CppObject *_4__this; // x19
  System_Action_o *v8; // x21
  struct BattleDropItem_o *v9; // x8
  struct BattleDropItem_o *v10; // x8
  int64_t v11; // x21
  Il2CppObject *v12; // x19
  char v13; // w20
  System_Action_o *v14; // x22

  v2 = this;
  if ( (byte_4BCAE6C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    this = (BattleResultComponent___c__DisplayClass58_0_o *)sub_1C1ABD4(&Method_BattleResultComponent_endNewView__, v3);
    byte_4BCAE6C = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsCommandCode_38884456(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.newDrop;
    if ( v5 )
    {
      userSvtId = v5->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v8 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v8, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v8, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1C1AE30(this, method);
  }
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsEventSvtGet_38884112(v9->fields.type, 0LL);
  v10 = v2->fields.newDrop;
  if ( !v10 )
    goto LABEL_12;
  v11 = v10->fields.userSvtId;
  v12 = (Il2CppObject *)v2->fields.__4__this;
  v13 = (char)this;
  v14 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v14, v12, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v12 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v12, v11, v13 & 1, v13 & 1, v14, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t _4__this; // x0
  struct BattleResultComponent_o *v14; // x8
  UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x20
  AssetData_o *cashedFriendshipUpItemAssetData; // x21
  struct BattleResultComponent_o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct BattleResultComponent_o *v24; // x8
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  struct BattleResultComponent_o *v26; // x8
  struct System_Action_o *callback; // x8
  UnityEngine_GameObject_o *prefabObject; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BCAE6D & 1) == 0 )
  {
    sub_1C1ABD4(&BattleResultComponent_TypeInfo, assetData);
    sub_1C1ABD4(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___, v10);
    sub_1C1ABD4(&UnityEngine_Object_TypeInfo, v11);
    sub_1C1ABD4(&StringLiteral_7014/*"FriendshipUpItemSelectDialog"*/, v12);
    byte_4BCAE6D = 1;
  }
  prefabObject = 0LL;
  _4__this = (int64_t)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  *(_QWORD *)(_4__this + 208) = assetData;
  sub_1C1AB78((PartyOrganizationUtility_o *)(_4__this + 208), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_18;
  cashedFriendshipUpItemAssetData = v14->fields.cashedFriendshipUpItemAssetData;
  friendshipUpItemDialogRoot = v14->fields.friendshipUpItemDialogRoot;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
    &prefabObject,
    (System_String_o *)StringLiteral_7014/*"FriendshipUpItemSelectDialog"*/,
    cashedFriendshipUpItemAssetData,
    friendshipUpItemDialogRoot,
    0LL);
  _4__this = (int64_t)prefabObject;
  if ( !prefabObject )
    goto LABEL_18;
  v17 = this->fields.__4__this;
  _4__this = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        prefabObject,
                        (const MethodInfo_2FEFBC0 *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
  if ( !v17 )
    goto LABEL_18;
  v17->fields.friendshipUpItemSelectDialog = (struct FriendshipUpItemSelectDialog_o *)_4__this;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&v17->fields.friendshipUpItemSelectDialog,
    _4__this,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = this->fields.__4__this;
  if ( !v24 )
    goto LABEL_18;
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)v24->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0LL, 0LL);
  if ( (_4__this & 1) != 0 )
  {
    v26 = this->fields.__4__this;
    if ( v26 )
    {
      _4__this = (int64_t)v26->fields.friendshipUpItemSelectDialog;
      if ( _4__this )
      {
        FriendshipUpItemSelectDialog__Init((FriendshipUpItemSelectDialog_o *)_4__this, 0LL);
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_1C1AE30(_4__this, assetData);
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
      sub_1C1AE38(this, method);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1C1AE30(this, method);
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