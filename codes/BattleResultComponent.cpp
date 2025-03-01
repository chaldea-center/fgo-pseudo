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

  if ( (byte_4C00BC4 & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultComponent_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_10760/*"PartyOrganization/FriendshipUpItem"*/, v8);
    byte_4C00BC4 = 1;
  }
  BattleResultComponent_TypeInfo->static_fields->FriendshipUpItemLoadAssetPath = (struct System_String_o *)StringLiteral_10760/*"PartyOrganization/FriendshipUpItem"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BattleResultComponent_TypeInfo->static_fields,
    StringLiteral_10760/*"PartyOrganization/FriendshipUpItem"*/,
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

  if ( (byte_4C00BB0 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_3620/*"CLOSE"*/, method);
    sub_1C2E12C(&StringLiteral_9426/*"NEXT"*/, v3);
    byte_4C00BB0 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                method),
        (fsm = this->fields.fsm) == 0LL) )
  {
    sub_1C2E388(eventItemResult, method);
  }
  v6 = &StringLiteral_9426/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v6 = &StringLiteral_3620/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C00BAD & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C00BAD = 1;
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
    sub_1C2E388(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
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

  if ( (byte_4C00BB7 & 1) == 0 )
  {
    sub_1C2E12C(&AndroidBackKeyManager_TypeInfo, method);
    sub_1C2E12C(&BattleResultComponent_TypeInfo, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v6);
    sub_1C2E12C(&StringLiteral_23544/*"sendFsmEvent"*/, v7);
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, v8);
    byte_4C00BB7 = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  v9 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v9);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1C2E388(Instance, v11);
  UnityEngine_GameObject__SendMessage_70971092(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23544/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5595/*"END_PROC"*/,
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

  if ( (byte_4C00BBA & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultComponent_TypeInfo, isDecide);
    sub_1C2E12C(&StringLiteral_9426/*"NEXT"*/, v7);
    byte_4C00BBA = 1;
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
      sub_1C2E388(0LL, v9);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9426/*"NEXT"*/, 0LL);
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
  const MethodInfo *v10; // x2
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v14; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4C00BA0 & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___,
      releasePerformanceObject);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    byte_4C00BA0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v8 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4BF7D91 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1C2E12C(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4BF7D91 = 1;
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
  BattleResultBondsComponent__Init((BattleResultBondsComponent_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.expResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultExpComponent__Init((BattleResultExpComponent_o *)gameObject, v7);
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultItemComponent__Init((BattleResultItemComponent_o *)gameObject, v7);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v7);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventDamageItemResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v7);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventFortificationItemResult;
    if ( !gameObject )
      goto LABEL_36;
    BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v7);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.friendResult;
  if ( !gameObject )
    goto LABEL_36;
  BattleResultFriendComponent__Init((BattleResultFriendComponent_o *)gameObject, releasePerformanceObject, v10);
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
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70989720(v14, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v15, v16, v17, v18, v19, v20);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)p_screenTouch,
          (int64_t)Component_object,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 14)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_36:
    sub_1C2E388(gameObject, v7);
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

  if ( (byte_4C00BBF & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, method);
    sub_1C2E12C(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v3);
    sub_1C2E12C(&DataManager_TypeInfo, v4);
    sub_1C2E12C(&NetworkManager_TypeInfo, v5);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_12401/*"SKIP"*/, v7);
    sub_1C2E12C(&StringLiteral_9426/*"NEXT"*/, v8);
    byte_4C00BBF = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA281 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v9);
    byte_4BFA281 = 1;
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
  v15 = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v9);
    byte_4BF81D5 = 1;
  }
  fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    fsm = (PlayMakerFSM_o *)NetworkManager_TypeInfo;
  }
  if ( !v15 )
LABEL_30:
    sub_1C2E388(fsm, v9);
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
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9426/*"NEXT"*/, 0LL);
    }
  }
LABEL_28:
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_30;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12401/*"SKIP"*/, 0LL);
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

  if ( (byte_4C00BC2 & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, callback);
    sub_1C2E12C(&BattleResultComponent_TypeInfo, v5);
    sub_1C2E12C(&AssetLoader_LoadEndDataHandler_TypeInfo, v6);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v7);
    sub_1C2E12C(&Method_BattleResultComponent___c__DisplayClass75_0__LoadFriendshipUpItemAsset_b__1__, v8);
    sub_1C2E12C(&BattleResultComponent___c__DisplayClass75_0_TypeInfo, v9);
    byte_4C00BC2 = 1;
  }
  v10 = sub_1C2E378(BattleResultComponent___c__DisplayClass75_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_21;
  *(_QWORD *)(v10 + 16) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 16), (int64_t)this, v13, v14, v15, v16, v17, v18);
  *(_QWORD *)(v10 + 24) = callback;
  v19 = v10 + 24;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)callback, v20, v21, v22, v23, v24, v25);
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
    sub_1C2E388(isExistAssetStorage, v12);
  }
  v29 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
    v29 = BattleResultComponent_TypeInfo;
  }
  v30 = v29->static_fields->FriendshipUpItemLoadAssetPath;
  v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2E378(AssetLoader_LoadEndDataHandler_TypeInfo);
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
    sub_1C2E388(obj_fronttouch, method);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, 0LL);
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
  if ( (byte_4C00BC0 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__, v3);
    sub_1C2E12C(&DataLostResetManager_TypeInfo, v4);
    this = (BattleResultComponent_o *)sub_1C2E12C(&TerminalPramsManager_TypeInfo, v5);
    byte_4C00BC0 = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_1C2E388(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA281 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BFA281 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v10, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__73_0__, 0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v10, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0

  if ( (byte_4C00BB1 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C2E12C(&StringLiteral_12401/*"SKIP"*/, v3);
    byte_4C00BB1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.resultSprite;
  if ( !Instance )
    goto LABEL_19;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.eventItemResult;
  if ( !Instance )
    goto LABEL_19;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_fronttouch;
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_basebg;
  if ( !Instance )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  eventDamageItemResult = this->fields.eventDamageItemResult;
  if ( !eventDamageItemResult )
    goto LABEL_19;
  usrEvent = eventDamageItemResult->fields.usrEvent;
  if ( usrEvent
    && UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventDamageItemResult->fields.currentEventId, 0LL) >= 1 )
  {
    Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
    if ( !Instance )
      goto LABEL_19;
    if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v5) )
    {
      Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v5);
        return;
      }
LABEL_19:
      sub_1C2E388(Instance, v5);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12401/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_4C00BBE & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C2E12C(&StringLiteral_12401/*"SKIP"*/, v4);
    byte_4C00BBE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
           v6) )
    {
      Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__OpenEventFortification((BattleResultEventItemComponent_o *)Instance, v6);
        return;
      }
LABEL_21:
      sub_1C2E388(Instance, v6);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12401/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4C00BAF & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1C2E12C(&StringLiteral_12401/*"SKIP"*/, v3);
    byte_4C00BAF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v5) )
  {
    Instance = (CommonUI_o *)this->fields.eventItemResult;
    if ( Instance )
    {
      BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v5);
      return;
    }
LABEL_14:
    sub_1C2E388(Instance, v5);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12401/*"SKIP"*/, 0LL);
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
    sub_1C2E388(obj_fronttouch, method);
  }
  BattleResultExpComponent__Open((BattleResultExpComponent_o *)obj_fronttouch, method);
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
  bool IsQuestClear_38902436; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v21; // w22
  Il2CppObject *v22; // x21
  TerminalPramsManager_c *v23; // x0
  const MethodInfo *v24; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C00BBB & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, *(_QWORD *)&boostId);
    sub_1C2E12C(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1C2E12C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1C2E12C(&MapControl_QuestInfo_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_1C2E12C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    byte_4C00BBB = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
    byte_4BF8444 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_327B180 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v16 = (MapControl_QuestInfo_o *)sub_1C2E378(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v16, 0LL);
  questId = v16->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_38902436 = CondType__IsQuestClear_38902436(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_4BF8443 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
    byte_4BF8443 = 1;
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
                            !IsQuestClear_38902436,
                            &fixedVal,
                            0LL);
  v16->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0LL);
  v16->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v21 = fixedVal;
  else
    v21 = ActConsume;
  v22 = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA462 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v12);
    byte_4BFA462 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1C2E388(Instance, v12);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v24);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleResultComponent_c *v7; // x0

  v2 = this;
  if ( (byte_4C00BAE & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultComponent_TypeInfo, method);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    this = (BattleResultComponent_o *)sub_1C2E12C(&StringLiteral_13225/*"StartQuestClearReward"*/, v5);
    byte_4C00BAE = 1;
  }
  battleResult = v2->fields.battleResult;
  if ( !battleResult )
    goto LABEL_14;
  if ( (battleResult->fields.resultDispFlag & 0x800) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_13225/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  this = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0LL),
        (this = (BattleResultComponent_o *)v2->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (BattleResultComponent_o *)v2->fields.friendResult) == 0LL) )
  {
LABEL_14:
    sub_1C2E388(this, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)this, method);
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

  if ( (byte_4C00BC1 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__, v3);
    byte_4C00BC1 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v5 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenFriendshipUpItemSelectDialog_b__74_0__,
    0LL);
  if ( !battleRetryConfirmComponent )
    sub_1C2E388(v6, v7);
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

  if ( (byte_4C00BA6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultComponent_endCloseEndEventMessage__, method);
    sub_1C2E12C(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4C00BA6 = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v9 = (CommonUI_o *)Instance;
    v10 = (NotificationDialog_ClickDelegate_o *)sub_1C2E378(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v9 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_31179448(
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
    sub_1C2E388(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, method);
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

  if ( (byte_4C00BB8 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_BattleResultComponent__OpenRetryQuest_b__65_0__, v3);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___, v4);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v6);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v7);
    byte_4C00BB8 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v8);
    byte_4BF8444 = 1;
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  v11 = *((_DWORD *)&battleRetryConfirmComponent->fields.singleItem->fields.UnityEngine_Behaviour_Fields + 1);
  if ( !byte_4BF8443 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v8);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4BF8443 = 1;
  }
  if ( !LODWORD(battleRetryConfirmComponent->fields.friendshipUpItemUseButton) )
  {
    j_il2cpp_runtime_class_init_0(battleRetryConfirmComponent);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
  }
  m_CancellationTokenSource = (int32_t)battleRetryConfirmComponent->fields.singleItem->fields.m_CancellationTokenSource;
  if ( !byte_4BFA281 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v8);
    battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)TerminalPramsManager_TypeInfo;
    byte_4BFA281 = 1;
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
    v13 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent__OpenRetryQuest_b__65_0__, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4BF8444 )
    {
      sub_1C2E12C(&TerminalPramsManager_TypeInfo, v14);
      byte_4BF8444 = 1;
    }
    v15 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v15 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
    if ( !byte_4BF8443 )
    {
      sub_1C2E12C(&TerminalPramsManager_TypeInfo, v14);
      v15 = TerminalPramsManager_TypeInfo;
      byte_4BF8443 = 1;
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
                                               (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
    sub_1C2E388(battleRetryConfirmComponent, v8);
  }
}


void __fastcall BattleResultComponent__OpenTutorial(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleEventTutorial_o *eventTutorial; // x0
  BattleEventTutorial_o *v6; // x20
  System_Action_o *v7; // x21
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleEventTutorial_o *v9; // x20
  System_Action_o *v10; // x21
  struct BattleResultComponent_resultData_o *v11; // x8
  BattleEventTutorial_o *v12; // x20
  System_Action_o *v13; // x21

  if ( (byte_4C00BA5 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_BattleResultComponent_OpenTutorial__, v3);
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, v4);
    byte_4C00BA5 = 1;
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
    v7 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v6 )
    {
      BattleEventTutorial__callResult(v6, v7, 0LL);
      return;
    }
LABEL_23:
    sub_1C2E388(eventTutorial, method);
  }
  if ( !v6 )
    goto LABEL_23;
  eventTutorial = (BattleEventTutorial_o *)BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0LL);
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    battleResult = this->fields.battleResult;
    if ( !battleResult )
      goto LABEL_23;
    if ( battleResult->fields.battleResult == 1 )
    {
      v9 = this->fields.eventTutorial;
      v10 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
      if ( !v9 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v9, v10, 0LL);
      return;
    }
  }
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  eventTutorial = (BattleEventTutorial_o *)BattleEventTutorial__isResultLose(eventTutorial, 0LL);
  if ( ((unsigned __int8)eventTutorial & 1) == 0 )
    goto LABEL_19;
  v11 = this->fields.battleResult;
  if ( !v11 )
    goto LABEL_23;
  if ( v11->fields.battleResult != 1 )
  {
    v12 = this->fields.eventTutorial;
    v13 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( !v12 )
      goto LABEL_23;
    BattleEventTutorial__callResultLose(v12, v13, 0LL);
  }
  else
  {
LABEL_19:
    eventTutorial = (BattleEventTutorial_o *)this->fields.fsm;
    if ( !eventTutorial )
      goto LABEL_23;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
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

  if ( (byte_4C00BBC & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultComponent_TypeInfo, *(_QWORD *)&boostId);
    sub_1C2E12C(&BattleSetupInfo_TypeInfo, v4);
    sub_1C2E12C(&RandomLimitCountManager_TypeInfo, v5);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1C2E12C(&SoundManager_TypeInfo, v7);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v8);
    byte_4C00BBC = 1;
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
  if ( !byte_4BFA281 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    byte_4BFA281 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v11->static_fields->_WarId_k__BackingField;
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4BF8444 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_4BF8443 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v10);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4BF8443 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v11->static_fields->_PhaseCnt_k__BackingField;
  v15 = (BattleSetupInfo_o *)sub_1C2E378(BattleSetupInfo_TypeInfo);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_29:
    sub_1C2E388(Instance, v17);
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
    sub_1C2E388(this, method);
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

  if ( (byte_4C00BC3 & 1) == 0 )
  {
    sub_1C2E12C(&AssetManager_TypeInfo, method);
    byte_4C00BC3 = 1;
  }
  cashedFriendshipUpItemAssetData = this->fields.cashedFriendshipUpItemAssetData;
  p_cashedFriendshipUpItemAssetData = (PartyOrganizationUtility_o *)&this->fields.cashedFriendshipUpItemAssetData;
  v4 = cashedFriendshipUpItemAssetData;
  if ( cashedFriendshipUpItemAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_39104116(v4, 0LL);
    p_cashedFriendshipUpItemAssetData->klass = 0LL;
    sub_1C2E0D0(p_cashedFriendshipUpItemAssetData, 0LL, v6, v7, v8, v9, v10, v11);
  }
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_4C00BA3 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4C00BA3 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0LL), (v5 = this->fields.screenTouch) == 0LL) )
      sub_1C2E388(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C00BBD & 1) == 0 )
  {
    sub_1C2E12C(&BattlePerformance_TypeInfo, v1);
    byte_4C00BBD = 1;
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

  if ( (byte_4C00BAA & 1) == 0 )
  {
    sub_1C2E12C(&iTween_EaseType_TypeInfo, method);
    sub_1C2E12C(&object___TypeInfo, v3);
    sub_1C2E12C(&float_TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_20005/*"from"*/, v5);
    sub_1C2E12C(&StringLiteral_12801/*"ScrollBarMotionCompleteValue"*/, v6);
    sub_1C2E12C(&StringLiteral_24383/*"time"*/, v7);
    sub_1C2E12C(&StringLiteral_22700/*"onupdate"*/, v8);
    sub_1C2E12C(&StringLiteral_18875/*"delay"*/, v9);
    sub_1C2E12C(&StringLiteral_12802/*"ScrollBarMotionUpdateValue"*/, v10);
    sub_1C2E12C(&StringLiteral_24425/*"to"*/, v11);
    sub_1C2E12C(&StringLiteral_19087/*"easeType"*/, v12);
    sub_1C2E12C(&StringLiteral_22692/*"oncomplete"*/, v13);
    sub_1C2E12C(&iTween_TypeInfo, v14);
    byte_4C00BAA = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61883512(gameObject, 0LL);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_1C2E1D4(object___TypeInfo, 14LL);
  if ( !v17 )
    sub_1C2E388(0LL, v18);
  v25 = (System_Object_array *)v17;
  v26 = StringLiteral_20005/*"from"*/;
  if ( StringLiteral_20005/*"from"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_20005/*"from"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_20005/*"from"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_67;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v132 = 0;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v132, v28, v29, v30);
  v37 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_67;
  v25->m_Items[1] = (Il2CppObject *)v37;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[1], v37, v31, v32, v33, v34, v35, v36);
  v26 = StringLiteral_24425/*"to"*/;
  if ( StringLiteral_24425/*"to"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_24425/*"to"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_24425/*"to"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_67;
  v25->m_Items[2] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[2], v27, v38, v39, v40, v41, v42, v43);
  v131 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v131, v44, v45, v46);
  v53 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_67;
  v25->m_Items[3] = (Il2CppObject *)v53;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[3], v53, v47, v48, v49, v50, v51, v52);
  v26 = StringLiteral_22700/*"onupdate"*/;
  if ( StringLiteral_22700/*"onupdate"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_22700/*"onupdate"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_22700/*"onupdate"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_67;
  v25->m_Items[4] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[4], v27, v54, v55, v56, v57, v58, v59);
  v26 = StringLiteral_12802/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12802/*"ScrollBarMotionUpdateValue"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_12802/*"ScrollBarMotionUpdateValue"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_12802/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_67;
  v25->m_Items[5] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[5], v27, v60, v61, v62, v63, v64, v65);
  v26 = StringLiteral_22692/*"oncomplete"*/;
  if ( StringLiteral_22692/*"oncomplete"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_22692/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_22692/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_67;
  v25->m_Items[6] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[6], v27, v66, v67, v68, v69, v70, v71);
  v26 = StringLiteral_12801/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12801/*"ScrollBarMotionCompleteValue"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_12801/*"ScrollBarMotionCompleteValue"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_12801/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_67;
  v25->m_Items[7] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[7], v27, v72, v73, v74, v75, v76, v77);
  v26 = StringLiteral_19087/*"easeType"*/;
  if ( StringLiteral_19087/*"easeType"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_19087/*"easeType"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_19087/*"easeType"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_67;
  v25->m_Items[8] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[8], v27, v78, v79, v80, v81, v82, v83);
  v130 = 17;
  v26 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v130, v84, v85, v86);
  v93 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_67;
  v25->m_Items[9] = (Il2CppObject *)v93;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[9], v93, v87, v88, v89, v90, v91, v92);
  v26 = StringLiteral_24383/*"time"*/;
  if ( StringLiteral_24383/*"time"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_24383/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_24383/*"time"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_67;
  v25->m_Items[10] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[10], v27, v94, v95, v96, v97, v98, v99);
  v129 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v129, v100, v101, v102);
  v109 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
  }
  if ( v25->max_length <= 0xB )
    goto LABEL_67;
  v25->m_Items[11] = (Il2CppObject *)v109;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[11], v109, v103, v104, v105, v106, v107, v108);
  v26 = StringLiteral_18875/*"delay"*/;
  if ( StringLiteral_18875/*"delay"*/ )
  {
    v26 = sub_1C2E268(StringLiteral_18875/*"delay"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_68;
    v27 = StringLiteral_18875/*"delay"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xC )
    goto LABEL_67;
  v25->m_Items[12] = (Il2CppObject *)v27;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[12], v27, v110, v111, v112, v113, v114, v115);
  v128 = 0;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v128, v116, v117, v118);
  v125 = v26;
  if ( v26 )
  {
    v26 = sub_1C2E268(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_68:
      v127 = sub_1C2E3AC(v26);
      sub_1C2E254(v127, 0LL);
    }
  }
  if ( v25->max_length <= 0xD )
LABEL_67:
    sub_1C2E390(v26, v27);
  v25->m_Items[13] = (Il2CppObject *)v125;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v25->m_Items[13], v125, v119, v120, v121, v122, v123, v124);
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
  const MethodInfo *v9; // x2

  v2 = this;
  if ( (byte_4C00BAC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__, v3);
    this = (BattleResultComponent_o *)sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4);
    byte_4C00BAC = 1;
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
  v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v2,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__50_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_1C2E388(this, method);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v8, v9);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4C00BAB & 1) == 0 )
  {
    sub_1C2E12C(&iTween_TypeInfo, method);
    byte_4C00BAB = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1C2E388(0LL, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_61883512(gameObject, 0LL);
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
  AssetData_o *v10; // x23
  BattleResultComponent_resultData_array *v12; // x21
  BattleResultComponent_o *v13; // x22
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
  __int64 v34; // x1
  int64_t v35; // x1
  BattleResultComponent_o **p_battleResult; // x20
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  TerminalPramsManager_c *v43; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  __int64 v45; // x1
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v47; // x0
  int32_t v48; // w19
  BalanceConfig_c *v49; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v51; // x0
  BattleResultComponent_o *v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *friendResult; // x0
  BattleResultComponent___c_c *v54; // x8
  BattleResultComponent_o *v55; // x26
  System_Converter_TInput__TOutput__o *_9__39_0; // x19
  BattleResultComponent_resultData_array *v57; // x24
  AssetData_o *v58; // x21
  Il2CppObject *v59; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_String_array *v67; // x0
  System_String_o *v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *eventItemResult; // x0
  BattleResultComponent___c_c *v70; // x8
  BattleResultComponent_o *v71; // x26
  System_Converter_TInput__TOutput__o *_9__39_1; // x19
  BattleResultComponent_resultData_array *v73; // x24
  AssetData_o *v74; // x21
  Il2CppObject *v75; // x23
  struct BattleResultComponent___c_StaticFields *v76; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  System_String_array *v83; // x0
  System_String_o *v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t m_CancellationTokenSource; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  struct BattleResultComponent_resultData_o *v98; // x8
  BattleData_o *v99; // x28
  int64_t eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v101; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v103; // x26
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  BattleResultComponent_resultData_o *v110; // x8
  BattleResultComponent_o *v111; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x9
  AssetData_o *v113; // x25
  Il2CppObject *Master_object; // x19
  int32_t v115; // w23
  int32_t QuestId; // w24
  bool v117; // w8
  BattleResultComponent_resultData_o *v118; // x9
  struct BattleInfoData_o *battle_info; // x10
  BattleResultComponent_o *v120; // x8
  struct BattleResultEventItemComponent_o *v121; // x9
  struct System_Threading_CancellationTokenSource_o *v122; // x11
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v124; // x12
  struct BattleResultEventItemComponent_o *v125; // x9
  struct System_Threading_CancellationTokenSource_o *v126; // x10
  UserGameEntity_o *parentComp; // x29
  BattleResultItemComponent_o *v128; // x25
  BattleDropItem_array *v129; // x26
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  int64_t obj_basebg; // x20
  int32_t expResult_high; // w21
  DropUpInfo_array *v134; // x19
  EventConquestInfo_array *battleRetryConfirmComponent; // x23
  int32_t firstClearRewardQp; // w24
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
  struct BattleResultAddRewardBonus_o *rewardBonus; // x9
  UILabel_o *v164; // x19
  Il2CppObject *v165; // x0
  BattleResultFriendComponent_o *v166; // x19
  int32_t v167; // w23
  int32_t m_CancellationTokenSource_high; // w24
  int64_t v169; // x25
  int32_t endtargetObject; // w26
  int32_t endtargetObject_high; // w27
  const MethodInfo *v172; // x7
  struct BattleResultComponent_resultData_o *v173; // x8
  struct BattleResultComponent_resultData_o *v174; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v176; // x8
  const MethodInfo *v177; // x2
  struct BattleResultComponent_resultData_o *v178; // x8
  BattleResultComponent_o *v179; // x8
  int obj_fronttouch; // w9
  int v181; // w10
  unsigned int v182; // w10
  unsigned int v183; // w9
  struct BattleInfoData_o *v184; // x9
  struct DeckData_o *myDeck; // x9
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w9
  __int64 v188; // x20
  char v189; // w22
  BattleResultComponent_o *v190; // x19
  int32_t v191; // w23
  int v192; // w8
  TerminalPramsManager_c *v193; // x0
  BattleResultComponent_o *v194; // x8
  unsigned int v195; // w9
  struct AssetData_o *cashedFriendshipUpItemAssetData; // x10
  BattleResultComponent_o *v197; // x8
  int v198; // w9
  unsigned int v199; // w9
  int expResult; // w19
  BattleResultComponent_resultData_o *battleResult; // [xsp+0h] [xbp-100h]
  const MethodInfo *v202; // [xsp+40h] [xbp-C0h]
  UserEventPointEntity_array *FriendIconPrefab; // [xsp+50h] [xbp-B0h]
  UserEventEntity_array *v204; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  BattleResultComponent_resultData_array *v206; // [xsp+68h] [xbp-98h]
  System_Int32_array *v207; // [xsp+70h] [xbp-90h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+78h] [xbp-88h]
  BattleData_o *battleData; // [xsp+80h] [xbp-80h]
  struct BattleResultComponent_resultData_o **v210; // [xsp+88h] [xbp-78h]
  int32_t befUserGameQp; // [xsp+90h] [xbp-70h] BYREF
  int v212; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v214; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v10 = resultAsset;
  v12 = resultList;
  v13 = this;
  if ( (byte_4C00BA4 & 1) == 0 )
  {
    sub_1C2E12C(&BalanceConfig_TypeInfo, resultList);
    sub_1C2E12C(&System_Converter_int__string__TypeInfo, v14);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventBuddyPointMaster___, v15);
    sub_1C2E12C(&Method_DataManager_GetMaster_EventProgressValueMaster___, v16);
    sub_1C2E12C(&DataManager_TypeInfo, v17);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_int___, v18);
    sub_1C2E12C(&EventInfoUIProgressControl_TypeInfo, v19);
    sub_1C2E12C(&int_TypeInfo, v20);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v21);
    sub_1C2E12C(&Method_System_Collections_Generic_List_string__ToArray__, v22);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v23);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v24);
    sub_1C2E12C(&QuestKnockdownResult_TypeInfo, v25);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v26);
    sub_1C2E12C(&Method_BattleResultComponent___c__Set_b__39_0__, v27);
    sub_1C2E12C(&Method_BattleResultComponent___c__Set_b__39_1__, v28);
    sub_1C2E12C(&BattleResultComponent___c_TypeInfo, v29);
    sub_1C2E12C(&StringLiteral_19976/*"freeShopIds"*/, v30);
    sub_1C2E12C(&StringLiteral_11312/*"RESULT_QP_PLUS"*/, v31);
    sub_1C2E12C(&StringLiteral_25402/*"{0:#,0}"*/, v32);
    sub_1C2E12C(&StringLiteral_23355/*"returnRarePriShopIds"*/, v33);
    this = (BattleResultComponent_o *)sub_1C2E12C(&StringLiteral_845/*","*/, v34);
    byte_4C00BA4 = 1;
  }
  entity = 0LL;
  if ( !v12 )
    goto LABEL_198;
  if ( !v12->max_length )
    goto LABEL_199;
  v35 = (int64_t)v12->m_Items[0];
  v13->fields.battleResult = (struct BattleResultComponent_resultData_o *)v35;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v13->fields.battleResult,
    v35,
    (int64_t)tutorial,
    (int32_t)resultAsset,
    (System_String_o *)viewGroupIds,
    (BattleSetupInfo_o *)bData,
    (FollowerInfo_o *)method,
    v7);
  v13->fields.eventTutorial = tutorial;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v13->fields.eventTutorial, (int64_t)tutorial, v37, v38, v39, v40, v41, v42);
  if ( !v13->fields.battleResult )
    goto LABEL_198;
  v210 = &v13->fields.battleResult;
  if ( v13->fields.battleResult->fields.battleResult == 1 )
  {
    if ( !bData )
      goto LABEL_198;
    this = (BattleResultComponent_o *)BattleData__IsNotResetResultDispFlag(bData, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p_battleResult )
        goto LABEL_198;
      LODWORD((*p_battleResult)[1].fields.obj_fronttouch) |= 0x3Fu;
    }
    this = (BattleResultComponent_o *)BattleData__isEventActivityPoint(bData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4BFACE3 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, resultList);
        byte_4BFACE3 = 1;
      }
      v43 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v43 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v43->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0LL);
      if ( !byte_4BFACD3 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v45);
        byte_4BFACD3 = 1;
      }
      v47 = TerminalPramsManager_TypeInfo;
      v48 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v47 = TerminalPramsManager_TypeInfo;
      }
      p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
      v47->static_fields->_BeforeEventActivityPoint_k__BackingField = v48;
      v49 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v49 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v49->static_fields->UserEventActivityPointMax;
      if ( !byte_4BFACE3 )
      {
        sub_1C2E12C(&TerminalPramsManager_TypeInfo, v45);
        byte_4BFACE3 = 1;
      }
      v51 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v51 = TerminalPramsManager_TypeInfo;
      }
      if ( v51->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v51->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v51);
        if ( !byte_4BFACD3 )
        {
          sub_1C2E12C(&TerminalPramsManager_TypeInfo, v45);
          byte_4BFACD3 = 1;
        }
        v51 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v51 = TerminalPramsManager_TypeInfo;
        }
        v51->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v51->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v51);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v52 = *p_battleResult;
  v207 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v13->fields.eventTutorial;
  battleData = bData;
  if ( !*p_battleResult )
    goto LABEL_198;
  friendResult = (System_Collections_Generic_IEnumerable_TSource__o *)v52[1].fields.friendResult;
  if ( friendResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        friendResult,
                                        (const MethodInfo_300F934 *)Method_System_Linq_Enumerable_ToList_int___);
    v54 = BattleResultComponent___c_TypeInfo;
    v55 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v54 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_0 = (System_Converter_TInput__TOutput__o *)v54->static_fields->__9__39_0;
    if ( !_9__39_0 )
    {
      v57 = v12;
      v58 = v10;
      if ( !v54->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v54);
        v54 = BattleResultComponent___c_TypeInfo;
      }
      v59 = (Il2CppObject *)v54->static_fields->__9;
      _9__39_0 = (System_Converter_TInput__TOutput__o *)sub_1C2E378(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_0, v59, Method_BattleResultComponent___c__Set_b__39_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__39_0 = (struct System_Converter_int__string__o *)_9__39_0;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&static_fields->__9__39_0,
        (int64_t)_9__39_0,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
      v10 = v58;
      v12 = v57;
    }
    if ( !v55 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v55,
                                        (System_Converter_T__TOutput__o *)_9__39_0,
                                        (const MethodInfo_2F01458 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_198;
    v67 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_string__ToArray__);
    v68 = System_String__Join((System_String_o *)StringLiteral_845/*","*/, v67, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19976/*"freeShopIds"*/, v68, 0LL);
    v52 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
  }
  eventItemResult = (System_Collections_Generic_IEnumerable_TSource__o *)v52[1].fields.eventItemResult;
  if ( eventItemResult )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        eventItemResult,
                                        (const MethodInfo_300F934 *)Method_System_Linq_Enumerable_ToList_int___);
    v70 = BattleResultComponent___c_TypeInfo;
    v71 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v70 = BattleResultComponent___c_TypeInfo;
    }
    _9__39_1 = (System_Converter_TInput__TOutput__o *)v70->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      v73 = v12;
      v74 = v10;
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v70 = BattleResultComponent___c_TypeInfo;
      }
      v75 = (Il2CppObject *)v70->static_fields->__9;
      _9__39_1 = (System_Converter_TInput__TOutput__o *)sub_1C2E378(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__39_1, v75, Method_BattleResultComponent___c__Set_b__39_1__, 0LL);
      v76 = BattleResultComponent___c_TypeInfo->static_fields;
      v76->__9__39_1 = (struct System_Converter_int__string__o *)_9__39_1;
      sub_1C2E0D0((PartyOrganizationUtility_o *)&v76->__9__39_1, (int64_t)_9__39_1, v77, v78, v79, v80, v81, v82);
      v10 = v74;
      v12 = v73;
    }
    if ( !v71 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v71,
                                        (System_Converter_T__TOutput__o *)_9__39_1,
                                        (const MethodInfo_2F01458 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_198;
    v83 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_string__ToArray__);
    v84 = System_String__Join((System_String_o *)StringLiteral_845/*","*/, v83, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23355/*"returnRarePriShopIds"*/, v84, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_198;
  m_CancellationTokenSource = (int64_t)(*p_battleResult)->fields.m_CancellationTokenSource;
  v13->fields.eventEndTitle = (struct System_String_o *)m_CancellationTokenSource;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v13->fields.eventEndTitle,
    m_CancellationTokenSource,
    v85,
    v86,
    v87,
    v88,
    v89,
    v90);
  v98 = v13->fields.battleResult;
  v99 = bData;
  if ( !v98 )
    goto LABEL_198;
  eventEndMessage = (int64_t)v98->fields.eventEndMessage;
  v13->fields.eventEndMessage = (struct System_String_o *)eventEndMessage;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v13->fields.eventEndMessage, eventEndMessage, v92, v93, v94, v95, v96, v97);
  v101 = v13->fields.battleResult;
  if ( !v101 )
    goto LABEL_198;
  isTrialQuestNewRecord = v101->fields.isTrialQuestNewRecord;
  v103 = (QuestKnockdownResult_o *)sub_1C2E378(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v103, isTrialQuestNewRecord, bData, 0LL);
  if ( !bData )
    goto LABEL_198;
  this = (BattleResultComponent_o *)bData->fields.battle_info;
  if ( !this )
    goto LABEL_198;
  this = (BattleResultComponent_o *)BattleInfoData__IsWaveMyDecks((BattleInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v110 = v13->fields.battleResult;
    if ( !v110 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)v13->fields.bondsResult;
    if ( !this )
      goto LABEL_198;
    BattleResultBondsComponent__SetMultiBondsResultData(
      (BattleResultBondsComponent_o *)this,
      bData,
      v110->fields.oldUserSvtCollection,
      v110->fields.friendshipRewardInfos,
      v110->fields.followerType,
      v10,
      v110->fields.friendshipExpBase,
      v110->fields.getJoinSvts,
      v110,
      1,
      0LL);
  }
  else
  {
    v111 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
    bondsResult = v111->fields.bondsResult;
    if ( bondsResult && *(_QWORD *)&bondsResult->fields.m_CachedPtr )
    {
      v113 = v10;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v115 = BattleData__get_eventId(battleData, 0LL);
      QuestId = BattleData__getQuestId(battleData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(battleData, 0LL);
      if ( !Master_object )
        goto LABEL_198;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v115,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_198;
        v10 = v113;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v117 = (unsigned __int8)this & 1;
      }
      else
      {
        v117 = 0;
        v10 = v113;
      }
      v118 = v13->fields.battleResult;
      if ( !v118 )
        goto LABEL_198;
      battle_info = battleData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_198;
      this = (BattleResultComponent_o *)v13->fields.bondsResult;
      if ( !this )
        goto LABEL_198;
      BattleResultBondsComponent__setResultData(
        (BattleResultBondsComponent_o *)this,
        v118->fields.myDeck,
        v118->fields.oldUserSvtCollection,
        v118->fields.friendshipRewardInfos,
        v118->fields.followerType,
        v10,
        battle_info->fields.userSvt,
        v118->fields.friendshipExpBase,
        v118->fields.getJoinSvts,
        v118,
        v117,
        battleData,
        0LL);
    }
    else
    {
      LODWORD(v111[1].fields.obj_fronttouch) &= ~1u;
    }
  }
  v120 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_198;
  v121 = v120->fields.eventItemResult;
  if ( v121
    && (v122 = v121->fields.m_CancellationTokenSource) != 0LL
    && (itemResult = v120->fields.itemResult) != 0LL
    && (v124 = itemResult->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v122 || !(_DWORD)v124 )
      goto LABEL_199;
    this = (BattleResultComponent_o *)v13->fields.expResult;
    if ( !this )
      goto LABEL_198;
    BattleResultExpComponent__setResultData(
      (BattleResultExpComponent_o *)this,
      (UserGameEntity_o *)v121->fields.parentComp,
      (UserEquipEntity_o *)itemResult->fields.parentComp,
      (MasterLvRewardInfo_array *)v120->fields.eventEndTitle,
      v10,
      battleData->fields.maxTurnDamageInBattle,
      battleData->fields.maxTurnDamageRecord,
      v103,
      (const MethodInfo *)battleResult);
    v120 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
  }
  else
  {
    LODWORD(v120[1].fields.obj_fronttouch) &= ~2u;
  }
  v125 = v120->fields.eventItemResult;
  if ( !v125 || (v126 = v125->fields.m_CancellationTokenSource) == 0LL )
  {
    LODWORD(v120[1].fields.obj_fronttouch) &= ~4u;
    goto LABEL_104;
  }
  if ( !(_DWORD)v126 )
LABEL_199:
    sub_1C2E390(this, resultList);
  this = (BattleResultComponent_o *)battleData->fields.quest_ent;
  v206 = v12;
  if ( !this )
    goto LABEL_198;
  parentComp = (UserGameEntity_o *)v125->fields.parentComp;
  v128 = v13->fields.itemResult;
  v129 = (BattleDropItem_array *)v120->fields.eventEndMessage;
  eventId = *((_DWORD *)&v120->fields.UnityEngine_Behaviour_Fields + 1);
  fsm = (int32_t)v120->fields.fsm;
  fsm_high = HIDWORD(v120->fields.fsm);
  obj_basebg = (int64_t)v120[1].fields.obj_basebg;
  expResult_high = HIDWORD(v120[1].fields.expResult);
  v134 = (DropUpInfo_array *)v120[1].fields.itemResult;
  battleRetryConfirmComponent = (EventConquestInfo_array *)v120[1].fields.battleRetryConfirmComponent;
  firstClearRewardQp = (int32_t)v120->fields.obj_basebg;
  FriendIconPrefab = (UserEventPointEntity_array *)v120->fields.FriendIconPrefab;
  v204 = (UserEventEntity_array *)v120->fields.friendResult;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000000000LL, 0LL);
  if ( !*v210 )
    goto LABEL_198;
  if ( !v128 )
    goto LABEL_198;
  BattleResultItemComponent__setResultData(
    v128,
    v129,
    fsm,
    fsm_high,
    parentComp,
    eventId,
    v204,
    FriendIconPrefab,
    obj_basebg,
    v207,
    expResult_high,
    v134,
    battleRetryConfirmComponent,
    firstClearRewardQp,
    (unsigned __int8)this & 1,
    (*v210)->fields.rewardBonus,
    v202);
  v99 = battleData;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  v12 = v206;
  v120 = (BattleResultComponent_o *)*v210;
  if ( !*v210 )
    goto LABEL_198;
LABEL_104:
  if ( v120[1].fields.nextButtonSpr )
  {
    v137 = v13->fields.itemResult;
    if ( !v137 )
      goto LABEL_198;
    getQpLabel = v137->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_198;
    mText = (int64_t)getQpLabel->fields.mText;
    v120[1].fields.resultItemScrollBar = (struct UIScrollBar_o *)mText;
    sub_1C2E0D0(
      (PartyOrganizationUtility_o *)&v120[1].fields.resultItemScrollBar,
      mText,
      v104,
      v105,
      v106,
      v107,
      v108,
      v109);
    v146 = v13->fields.itemResult;
    if ( !v146 )
      goto LABEL_198;
    nowQpLabel = v146->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_198;
    v148 = v13->fields.battleResult;
    if ( !v148 )
      goto LABEL_198;
    v149 = (int64_t)nowQpLabel->fields.mText;
    v148->fields.ultimateNowQpText = (struct System_String_o *)v149;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v148->fields.ultimateNowQpText, v149, v140, v141, v142, v143, v144, v145);
    if ( !*p_battleResult )
      goto LABEL_198;
    nextButtonSpr = (*p_battleResult)[1].fields.nextButtonSpr;
    if ( !nextButtonSpr )
      goto LABEL_198;
    v212 = (__int64)nextButtonSpr->fields.rightAnchor & ~(SLODWORD(nextButtonSpr->fields.rightAnchor) >> 31);
    v154 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v212, v150, v151, v152);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25402/*"{0:#,0}"*/, v154, 0LL);
    v155 = v13->fields.itemResult;
    if ( !v155 )
      goto LABEL_198;
    v156 = (Il2CppObject *)this;
    v157 = v155->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v158 = LocalizationManager__Get((System_String_o *)StringLiteral_11312/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v158, v156, 0LL);
    if ( !v157 )
      goto LABEL_198;
    UILabel__set_text(v157, (System_String_o *)this, 0LL);
    v162 = v13->fields.itemResult;
    p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
    if ( !v162 )
      goto LABEL_198;
    if ( !*v210 )
      goto LABEL_198;
    rewardBonus = (*v210)->fields.rewardBonus;
    if ( !rewardBonus )
      goto LABEL_198;
    v164 = v162->fields.nowQpLabel;
    befUserGameQp = rewardBonus->fields.befUserGameQp;
    v165 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &befUserGameQp, v159, v160, v161);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25402/*"{0:#,0}"*/, v165, 0LL);
    if ( !v164 )
      goto LABEL_198;
    UILabel__set_text(v164, (System_String_o *)this, 0LL);
    this = (BattleResultComponent_o *)v13->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_198;
    v214.fields.r = 0.29804;
    v214.fields.a = 1.0;
    v214.fields.g = 0.29804;
    v214.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v214, 0LL);
    v120 = (BattleResultComponent_o *)*v210;
    if ( !*v210 )
      goto LABEL_198;
  }
  this = (BattleResultComponent_o *)v99->fields.quest_ent;
  if ( !this )
    goto LABEL_198;
  v166 = v13->fields.friendResult;
  v167 = (int32_t)v120[1].fields.m_CancellationTokenSource;
  m_CancellationTokenSource_high = HIDWORD(v120[1].fields.m_CancellationTokenSource);
  v169 = *(_QWORD *)&v120[1].fields.m_CachedPtr;
  endtargetObject = (int32_t)v120[1].fields.endtargetObject;
  endtargetObject_high = HIDWORD(v120[1].fields.endtargetObject);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v166 )
    goto LABEL_198;
  BattleResultFriendComponent__setResultData(
    v166,
    v167,
    m_CancellationTokenSource_high,
    v169,
    endtargetObject,
    endtargetObject_high,
    (unsigned __int8)this & 1,
    v172);
  v173 = v13->fields.battleResult;
  if ( !v173 )
    goto LABEL_198;
  this = (BattleResultComponent_o *)v13->fields.eventItemResult;
  if ( !this )
    goto LABEL_198;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v173->fields.resultEventRewardInfos,
                                      (unsigned int)v173->fields.eventId,
                                      v173->fields.resultBoostItemRewardInfos,
                                      v173->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v174 = v13->fields.battleResult;
  if ( !v174 )
    goto LABEL_198;
  this = (BattleResultComponent_o *)v13->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_198;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v174->fields.resultDamageRewardInfos,
    (unsigned int)v174->fields.eventId,
    v174->fields.resultBoostItemRewardInfos,
    v174->fields.rewardInfos,
    this->klass[1]._1.name);
  eventFortificationItemResult = (UnityEngine_Object_o *)v13->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v176 = v13->fields.battleResult;
    if ( !v176 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_198;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v176->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v176->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v178 = v13->fields.battleResult;
    if ( !v178 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_198;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v178->fields.fortificationInfos,
      v177);
  }
  this = *p_eventTutorial;
  if ( !*p_eventTutorial )
    goto LABEL_198;
  this = (BattleResultComponent_o *)BattleEventTutorial__CheckHasResultPhaseTutorial((BattleEventTutorial_o *)this, 0LL);
  v179 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_198;
  obj_fronttouch = (int)v179[1].fields.obj_fronttouch;
  v181 = ((unsigned __int8)this & 1) != 0 ? 64 : 0;
  v182 = obj_fronttouch & 0xFFFFFFBF | v181;
  v183 = (obj_fronttouch & 0x200) != 0 ? v182 & 0xFFFFFFEF : v182;
  LODWORD(v179[1].fields.obj_fronttouch) = v183;
  v184 = v99->fields.battle_info;
  if ( !v184 )
LABEL_198:
    sub_1C2E388(this, resultList);
  myDeck = v184->fields.myDeck;
  if ( myDeck && (svts = myDeck->fields.svts) != 0LL && (max_length = svts->max_length, max_length >= 1) )
  {
    v188 = 0LL;
    do
    {
      if ( (unsigned int)v188 >= max_length )
        goto LABEL_199;
      this = (BattleResultComponent_o *)svts->m_Items[v188];
      if ( !this )
        goto LABEL_198;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0LL);
      v189 = (char)this;
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      ++v188;
    }
    while ( (int)v188 < max_length );
    p_battleResult = (BattleResultComponent_o **)v210;
    v179 = (BattleResultComponent_o *)*v210;
    if ( !*v210 )
      goto LABEL_198;
  }
  else
  {
    v189 = 0;
  }
  if ( *((_DWORD *)&v179->fields.UnityEngine_Behaviour_Fields + 1) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_198;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1),
                                        0LL);
    v190 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_198;
      v191 = *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      this = (BattleResultComponent_o *)EventInfoUIProgressControl__GetEventProgressValueSaveData_43455320(v191, 0, 0LL);
      v192 = (int)v190->fields.obj_basebg;
      LODWORD(v190) = 0;
      if ( (_DWORD)this != v192 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4BFA287 )
        {
          sub_1C2E12C(&TerminalPramsManager_TypeInfo, resultList);
          byte_4BFA287 = 1;
        }
        v193 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v193 = TerminalPramsManager_TypeInfo;
        }
        v193->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v190) = 1;
      }
    }
  }
  else
  {
    LODWORD(v190) = 0;
  }
  if ( v189 & 1 | !v99->fields.isRetryable )
    goto LABEL_177;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_198;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                                      (BattleResultComponent_resultData_o *)this,
                                      (const MethodInfo *)resultList);
  if ( (((unsigned int)v190 | (unsigned int)this) & 1) != 0 )
  {
LABEL_177:
    v194 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
    v195 = (__int64)v194[1].fields.obj_fronttouch & 0xFFFFF7FF;
  }
  else
  {
    v194 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
    v195 = LODWORD(v194[1].fields.obj_fronttouch) | 0x800;
  }
  cashedFriendshipUpItemAssetData = v194[1].fields.cashedFriendshipUpItemAssetData;
  LODWORD(v194[1].fields.obj_fronttouch) = v195;
  LODWORD(v194[1].fields.obj_fronttouch) = v195 & 0xFFFFEFFF;
  if ( cashedFriendshipUpItemAssetData && cashedFriendshipUpItemAssetData->fields.name )
    LODWORD(v194[1].fields.obj_fronttouch) = v195 | 0x1000;
  this = (BattleResultComponent_o *)BattleData__isBattleResultLoseQuestClear(v99, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleResultComponent_o *)BattleData__isBattleRetreatQuestClear(v99, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( v99->fields.isItemResultSkip )
    {
      this = (BattleResultComponent_o *)BattleData__IsWarBoard(v99, 0LL);
      v197 = *p_battleResult;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v197 )
          goto LABEL_198;
        v198 = (int)v197[1].fields.obj_fronttouch;
        if ( (v198 & 4) != 0 )
        {
          v199 = v198 | 4;
LABEL_193:
          LODWORD(v197[1].fields.obj_fronttouch) = v199;
          LODWORD(v197[1].fields.obj_fronttouch) = v199 & 0xFFFFFFE7;
          goto LABEL_194;
        }
      }
      else if ( !v197 )
      {
        goto LABEL_198;
      }
      v199 = (__int64)v197[1].fields.obj_fronttouch & 0xFFFFFFFB;
      goto LABEL_193;
    }
  }
LABEL_194:
  if ( !*p_battleResult )
    goto LABEL_198;
  expResult = (int)(*p_battleResult)[1].fields.expResult;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo(v12, expResult == 1, 0LL);
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

  if ( (byte_4C00BA8 & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultComponent_TypeInfo, method);
    byte_4C00BA8 = 1;
  }
  v3 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1C2E388(0LL, v4);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v6);
  UnityEngine_MonoBehaviour__StartCoroutine_70974992((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C00BA9 & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo, method);
    byte_4C00BA9 = 1;
  }
  v3 = sub_1C2E378(BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  TerminalPramsManager_c *v3; // x0
  bool v4; // w19
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4C00BB9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__, method);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v2);
    byte_4C00BB9 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BF8444 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BF8444 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v4 = TerminalPramsManager__IsFreeQuestOnOrdealCall(v3->static_fields->_QuestId_k__BackingField, 0LL);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_RewardMiniPopupExecutor__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v6);
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
  struct BattleResultComponent_resultData_o *battleResult; // x8
  struct BattleData_o *data; // x8

  if ( (byte_4C00BA1 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_10192/*"OpenResult"*/, target);
    sub_1C2E12C(&StringLiteral_10800/*"Performance"*/, v7);
    byte_4C00BA1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10800/*"Performance"*/,
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
    battleResult = this->fields.battleResult;
    if ( !battleResult )
      goto LABEL_15;
    battleResult->fields.resultDispFlag = 0;
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
    sub_1C2E388(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10192/*"OpenResult"*/, 0LL);
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
  Il2CppObject *Object_object__50017172; // x21
  Il2CppObject *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  v8 = (PartyOrganizationUtility_o *)prefabObject;
  if ( (byte_4C00BCA & 1) == 0 )
  {
    sub_1C2E12C(&Method_AssetData_GetObject_GameObject____77757312, prefabName);
    sub_1C2E12C(&Method_UnityEngine_Object_Instantiate_GameObject____77847040, v9);
    prefabObject = (UnityEngine_GameObject_o **)sub_1C2E12C(&UnityEngine_Object_TypeInfo, v10);
    byte_4C00BCA = 1;
  }
  if ( !assetData )
    sub_1C2E388(prefabObject, prefabName);
  Object_object__50017172 = AssetData__GetObject_object__50017172(
                              assetData,
                              prefabName,
                              (const MethodInfo_2FB3394 *)Method_AssetData_GetObject_GameObject____77757312);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = UnityEngine_Object__Instantiate_object__50692032(
          Object_object__50017172,
          root,
          (const MethodInfo_3057FC0 *)Method_UnityEngine_Object_Instantiate_GameObject____77847040);
  v8->klass = (PartyOrganizationUtility_c *)v12;
  sub_1C2E0D0(v8, (int64_t)v12, v13, v14, v15, v16, v17, v18);
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

  if ( (byte_4C00BC8 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v3);
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, v4);
    byte_4C00BC8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4BFA287 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, method);
    byte_4BFA287 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_4BFAA08 )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v6);
    byte_4BFAA08 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_38A83B0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !byte_4BFACDA )
  {
    sub_1C2E12C(&TerminalPramsManager_TypeInfo, v9);
    byte_4BFACDA = 1;
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
    sub_1C2E388(Instance, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
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

  if ( (byte_4C00BC9 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    sub_1C2E12C(&Method_BattleRetryConfirmComponent_BaseDialogOpen__, v3);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v4);
    byte_4C00BC9 = 1;
  }
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)this->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0LL, 0LL) )
  {
    v6 = this->fields.friendshipUpItemSelectDialog;
    battleRetryConfirmComponent = (Il2CppObject *)this->fields.battleRetryConfirmComponent;
    v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
    System_Action___ctor(v8, battleRetryConfirmComponent, Method_BattleRetryConfirmComponent_BaseDialogOpen__, 0LL);
    if ( !v6 )
      sub_1C2E388(v9, v10);
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

  if ( (byte_4C00BC6 & 1) == 0 )
  {
    sub_1C2E12C(&Method_BattleResultComponent__OpenRetryQuest_b__65_1__, method);
    sub_1C2E12C(&BattleWindowComponent_EndCall_TypeInfo, v3);
    byte_4C00BC6 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  v5 = (BattleWindowComponent_EndCall_o *)sub_1C2E378(BattleWindowComponent_EndCall_TypeInfo);
  BattleWindowComponent_EndCall___ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenRetryQuest_b__65_1__,
    0LL);
  if ( !battleRetryConfirmComponent )
    sub_1C2E388(v6, v7);
  BattleRetryConfirmComponent__Open(battleRetryConfirmComponent, v5, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__65_1(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C00BC7 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_13225/*"StartQuestClearReward"*/, method);
    byte_4C00BC7 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13225/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__50_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C00BC5 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C00BC5 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
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
  const MethodInfo *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  BattleResultComponent_c *v22; // x0
  const MethodInfo **v23; // x21
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

  if ( (byte_4C00BB2 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, *(_QWORD *)&resultType);
    sub_1C2E12C(&BattleResultComponent_TypeInfo, v5);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v6);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_1C2E12C(&Method_BattleResultComponent___c__DisplayClass58_0__checkNew_b__0__, v9);
    sub_1C2E12C(&BattleResultComponent___c__DisplayClass58_0_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_9812/*"OPEN"*/, v11);
    sub_1C2E12C(&StringLiteral_9426/*"NEXT"*/, v12);
    byte_4C00BB2 = 1;
  }
  v13 = sub_1C2E378(BattleResultComponent___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_35;
  *(_QWORD *)(v13 + 24) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 24), (int64_t)this, v16, v17, v18, v19, v20, v21);
  v22 = BattleResultComponent_TypeInfo;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v22);
  *(_QWORD *)(v13 + 16) = 0LL;
  v23 = (const MethodInfo **)(v13 + 16);
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 16), 0LL, v24, v25, v26, v27, v28, v29);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_35;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, v15);
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
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, v15);
LABEL_18:
      v15 = (const MethodInfo *)NewDrop;
LABEL_19:
      *v23 = v15;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)v15, v31, v32, v33, v34, v35, v36);
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
          UnityEngine_Object__DestroyImmediate_70989908(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
            0LL,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_35;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v41 = &StringLiteral_9426/*"NEXT"*/;
          goto LABEL_34;
        }
LABEL_35:
        sub_1C2E388(itemResult, v15);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v40 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
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
      v41 = &StringLiteral_9812/*"OPEN"*/;
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

  if ( (byte_4C00BA2 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_12476/*"START_Begin"*/, method);
    byte_4C00BA2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12476/*"START_Begin"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C00BA7 & 1) == 0 )
  {
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_4C00BA7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2E388(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4C00BB3 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_5595/*"END_PROC"*/, method);
    byte_4C00BB3 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1C2E388(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5595/*"END_PROC"*/, 0LL);
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

  if ( (byte_4C00BB6 & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, userCommandCodeId);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7);
    byte_4C00BB6 = 1;
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
    UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v13, v14, v15, v16, v17, v18);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0LL),
        *p_ServantRewardActionComp = Prefab,
        sub_1C2E0D0(
          (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
          (int64_t)Prefab,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_35850252(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_14:
    sub_1C2E388(transform, v10);
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

  if ( (byte_4C00BB5 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1C2E12C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v12);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1C2E12C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v16);
    byte_4C00BB5 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_327D6DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    UnityEngine_Object__Destroy_70989720(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v24, v25, v26, v27, v28, v29);
  }
  v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v30,
             (UnityEngine_Transform_o *)Instance,
             1,
             0LL);
  *p_ServantRewardActionComp = Prefab;
  sub_1C2E0D0(
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
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(v49, 0LL);
  if ( isDoEffect )
  {
    v42 = v22[2];
    *(Il2CppObject *)&v48.fields.currentCryptoKey = v22[1];
    *(Il2CppObject *)&v48.fields.fakeValue = v42;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v47 = v48;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v47, 0LL);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v22[6],
                                  0LL);
    if ( v38 )
    {
      ServantRewardAction__Setup(v38, v41, v43, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_25;
    }
LABEL_27:
    sub_1C2E388(Instance, v18);
  }
  v44 = v22[2];
  *(Il2CppObject *)&v48.fields.currentCryptoKey = v22[1];
  *(Il2CppObject *)&v48.fields.fakeValue = v44;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v46 = v48;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47762340(&v46, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47758816(
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
    sub_1C2E388(0LL, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1C2E388(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1C2E388(0LL, flg);
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

  if ( (byte_4C00BB4 & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, userSvtId);
    sub_1C2E12C(&Method_BattleResultComponent_endNewView__, v7);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v8);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1C2E12C(&StringLiteral_9812/*"OPEN"*/, v10);
    sub_1C2E12C(&StringLiteral_9426/*"NEXT"*/, v11);
    byte_4C00BB4 = 1;
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
      UnityEngine_Object__DestroyImmediate_70989908(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_1C2E0D0(
        (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
        0LL,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v17 = &StringLiteral_9426/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1C2E388(Instance, v15);
  }
  v12 = Gift__IsEventSvtGet(type, 0LL);
  v13 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v12, v12, v13, v14);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v17 = &StringLiteral_9812/*"OPEN"*/;
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

  if ( (byte_4C00BCE & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1C2E12C(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4C00BCE = 1;
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
      sub_1C2E388(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, method);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1C2E378(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v5, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__47_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
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

  if ( (byte_4C00BCB & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultComponent___c_TypeInfo, v1);
    byte_4C00BCB = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v2;
  sub_1C2E0D0(
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
  const MethodInfo *v9; // x3
  struct BattleDropItem_o *v10; // x8
  struct BattleDropItem_o *v11; // x8
  int64_t v12; // x21
  Il2CppObject *v13; // x19
  char v14; // w20
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x5

  v2 = this;
  if ( (byte_4C00BCC & 1) == 0 )
  {
    sub_1C2E12C(&System_Action_TypeInfo, method);
    this = (BattleResultComponent___c__DisplayClass58_0_o *)sub_1C2E12C(&Method_BattleResultComponent_endNewView__, v3);
    byte_4C00BCC = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsCommandCode_38999992(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.newDrop;
    if ( v5 )
    {
      userSvtId = v5->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v8 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
      System_Action___ctor(v8, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v8, v9);
        return;
      }
    }
LABEL_12:
    sub_1C2E388(this, method);
  }
  v10 = v2->fields.newDrop;
  if ( !v10 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass58_0_o *)Gift__IsEventSvtGet_38999648(v10->fields.type, 0LL);
  v11 = v2->fields.newDrop;
  if ( !v11 )
    goto LABEL_12;
  v12 = v11->fields.userSvtId;
  v13 = (Il2CppObject *)v2->fields.__4__this;
  v14 = (char)this;
  v15 = (System_Action_o *)sub_1C2E378(System_Action_TypeInfo);
  System_Action___ctor(v15, v13, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v13 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v13, v12, v14 & 1, v14 & 1, v15, v16);
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
  const MethodInfo *v14; // x4
  struct BattleResultComponent_o *v15; // x8
  UnityEngine_Transform_o *friendshipUpItemDialogRoot; // x20
  AssetData_o *cashedFriendshipUpItemAssetData; // x21
  struct BattleResultComponent_o *v18; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct BattleResultComponent_o *v25; // x8
  UnityEngine_Object_o *friendshipUpItemSelectDialog; // x20
  struct BattleResultComponent_o *v27; // x8
  struct System_Action_o *callback; // x8
  UnityEngine_GameObject_o *prefabObject; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C00BCD & 1) == 0 )
  {
    sub_1C2E12C(&BattleResultComponent_TypeInfo, assetData);
    sub_1C2E12C(&Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_7015/*"FriendshipUpItemSelectDialog"*/, v12);
    byte_4C00BCD = 1;
  }
  prefabObject = 0LL;
  _4__this = (int64_t)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_18;
  *(_QWORD *)(_4__this + 208) = assetData;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(_4__this + 208), (int64_t)assetData, (int64_t)method, v3, v4, v5, v6, v7);
  v15 = this->fields.__4__this;
  if ( !v15 )
    goto LABEL_18;
  cashedFriendshipUpItemAssetData = v15->fields.cashedFriendshipUpItemAssetData;
  friendshipUpItemDialogRoot = v15->fields.friendshipUpItemDialogRoot;
  if ( !BattleResultComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleResultComponent_TypeInfo);
  BattleResultComponent___LoadFriendshipUpItemAsset_g__SetPrefabAndNullCheck_75_0(
    &prefabObject,
    (System_String_o *)StringLiteral_7015/*"FriendshipUpItemSelectDialog"*/,
    cashedFriendshipUpItemAssetData,
    friendshipUpItemDialogRoot,
    v14);
  _4__this = (int64_t)prefabObject;
  if ( !prefabObject )
    goto LABEL_18;
  v18 = this->fields.__4__this;
  _4__this = (int64_t)UnityEngine_GameObject__GetComponent_object_(
                        prefabObject,
                        (const MethodInfo_3022B0C *)Method_UnityEngine_GameObject_GetComponent_FriendshipUpItemSelectDialog___);
  if ( !v18 )
    goto LABEL_18;
  v18->fields.friendshipUpItemSelectDialog = (struct FriendshipUpItemSelectDialog_o *)_4__this;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v18->fields.friendshipUpItemSelectDialog,
    _4__this,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = this->fields.__4__this;
  if ( !v25 )
    goto LABEL_18;
  friendshipUpItemSelectDialog = (UnityEngine_Object_o *)v25->fields.friendshipUpItemSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  _4__this = UnityEngine_Object__op_Inequality(friendshipUpItemSelectDialog, 0LL, 0LL);
  if ( (_4__this & 1) != 0 )
  {
    v27 = this->fields.__4__this;
    if ( v27 )
    {
      _4__this = (int64_t)v27->fields.friendshipUpItemSelectDialog;
      if ( _4__this )
      {
        FriendshipUpItemSelectDialog__Init((FriendshipUpItemSelectDialog_o *)_4__this, 0LL);
        goto LABEL_16;
      }
    }
LABEL_18:
    sub_1C2E388(_4__this, assetData);
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
      sub_1C2E390(this, method);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1C2E388(this, method);
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