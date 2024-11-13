void __fastcall BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  BattleResultEventItemComponent_o *eventItemResult; // x0
  PlayMakerFSM_o *fsm; // x8
  __int64 *v8; // x9

  if ( (byte_4B194D3 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3608/*"CLOSE"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, v4, v5);
    byte_4B194D3 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
    sub_1BCAA3C(eventItemResult, method);
  }
  v8 = &StringLiteral_9370/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v8 = &StringLiteral_3608/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v8, 0LL);
}


void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B194D0 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B194D0 = 1;
  }
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    goto LABEL_7;
  UnityEngine_GameObject__SetActive(touchGuard, 0, 0LL);
  touchGuard = (UnityEngine_GameObject_o *)this->fields.nextButtonSpr;
  if ( !touchGuard
    || (v5.fields.r = 1.0,
        v5.fields.g = 1.0,
        v5.fields.b = 1.0,
        v5.fields.a = 1.0,
        UIWidget__set_color((UIWidget_o *)touchGuard, v5, 0LL),
        (touchGuard = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
LABEL_7:
    sub_1BCAA3C(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  v3 = this;
  if ( (byte_4B194DA & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidBackKeyManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&StringLiteral_23345/*"sendFsmEvent"*/, v10, v11);
    this = (BattleResultComponent_o *)sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v12, v13);
    byte_4B194DA = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)v3->fields.battleRetryConfirmComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0LL, 0LL) )
  {
    Instance = (Il2CppObject *)v3->fields.battleRetryConfirmComponent;
    if ( !Instance )
      goto LABEL_13;
    BattleRetryConfirmComponent__Close((BattleRetryConfirmComponent_o *)Instance, 0LL);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v15);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  Instance = (Il2CppObject *)v3->fields.endtargetObject;
  if ( !Instance )
LABEL_13:
    sub_1BCAA3C(Instance, v15);
  UnityEngine_GameObject__SendMessage_70135616(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23345/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5565/*"END_PROC"*/,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__EndRetryConfirmDialog(
        BattleResultComponent_o *this,
        bool isDecide,
        int32_t boostId,
        const MethodInfo *method)
{
  BattleResultComponent_o *v6; // x21
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  PlayMakerFSM_o *fsm; // x0

  v6 = this;
  if ( (byte_4B194DD & 1) == 0 )
  {
    this = (BattleResultComponent_o *)sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, isDecide, *(_QWORD *)&boostId);
    byte_4B194DD = 1;
  }
  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  if ( isDecide )
  {
    BattleResultComponent__OpenFollowerSceneForRetry(v6, boostId, v8);
  }
  else
  {
    fsm = v6->fields.fsm;
    if ( !fsm )
      sub_1BCAA3C(0LL, v7);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
  }
}


void __fastcall BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x2
  UnityEngine_Transform_o *v10; // x21
  __int64 v11; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  __int64 v13; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  __int64 v17; // x1
  UnityEngine_Object_o *v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7

  if ( (byte_4B194C4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___,
      releasePerformanceObject,
      method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B194C4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v10 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4B109C1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v8, v9);
    byte_4B109C1 = 1;
  }
  if ( !v10 )
    goto LABEL_36;
  UnityEngine_Transform__set_localPosition(v10, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  BattleResultBondsComponent__Init((BattleResultBondsComponent_o *)gameObject, v8);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_36;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
    UnityEngine_Object__Destroy_70154244(v18, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v19, v20, v21, v22, v23, v24);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)p_screenTouch,
          (int64_t)Component_object,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 11)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_36:
    sub_1BCAA3C(gameObject, v8);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Master_object; // x20
  PlayMakerFSM_o *UserId; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v22; // w20
  __int64 v23; // x1
  Il2CppObject *v24; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B194E2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v4, v5);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_12310/*"SKIP"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, v14, v15);
    byte_4B194E2 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    byte_4B12DC6 = 1;
  }
  UserId = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v16);
    UserId = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult || !Master_object )
    goto LABEL_26;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            (EventDataLostBattleMaster_o *)Master_object,
                            HIDWORD(UserId[2].fields.addEventHandlers->klass),
                            battleResult->fields.eventId,
                            0LL);
  if ( EventDataLostBattleId == -1 )
    goto LABEL_24;
  v22 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v16);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v23);
  UserId = (PlayMakerFSM_o *)NetworkManager__get_UserId(0LL);
  if ( !v24 )
LABEL_26:
    sub_1BCAA3C(UserId, v16);
  if ( UserEventDataLostMaster__TryGetEntity((UserEventDataLostMaster_o *)v24, &entity, (int64_t)UserId, v22, 0LL) )
  {
    UserId = (PlayMakerFSM_o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0LL) )
    {
      UserId = this->fields.fsm;
      if ( !UserId )
        goto LABEL_26;
      PlayMakerFSM__SendEvent(UserId, (System_String_o *)StringLiteral_9370/*"NEXT"*/, 0LL);
    }
  }
LABEL_24:
  UserId = this->fields.fsm;
  if ( !UserId )
    goto LABEL_26;
  PlayMakerFSM__SendEvent(UserId, (System_String_o *)StringLiteral_12310/*"SKIP"*/, 0LL);
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
    sub_1BCAA3C(obj_fronttouch, method);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, method);
}


void __fastcall BattleResultComponent__OpenDataLostBattleResetDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  TerminalPramsManager_c *v13; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v15; // x22
  __int64 v16; // x1

  v4 = (Il2CppObject *)this;
  if ( (byte_4B194E3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, v5, v6);
    sub_1BCA7E0(&DataLostResetManager_TypeInfo, v7, v8);
    this = (BattleResultComponent_o *)sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B194E3 = 1;
  }
  klass = v4[10].klass;
  if ( !klass )
    sub_1BCAA3C(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC6 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v13 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v13->static_fields->_WarId_k__BackingField;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v15, v4, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, 0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo, v16);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v15, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B194D4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_12310/*"SKIP"*/, v4, v5);
    byte_4B194D4 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1BCAA3C(Instance, v7);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12310/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_4B194E1 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_12310/*"SKIP"*/, v6, v7);
    byte_4B194E1 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
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
      sub_1BCAA3C(Instance, v9);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12310/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B194D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    sub_1BCA7E0(&StringLiteral_12310/*"SKIP"*/, v4, v5);
    byte_4B194D2 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1BCAA3C(Instance, v7);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12310/*"SKIP"*/, 0LL);
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
    sub_1BCAA3C(obj_fronttouch, method);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  TerminalPramsManager_c *v21; // x0
  int32_t QuestId_k__BackingField; // w21
  Il2CppObject *Entity; // x22
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  MapControl_QuestInfo_o *v27; // x20
  __int64 v28; // x1
  int32_t questId; // w23
  __int64 v30; // x2
  bool IsQuestClear_38310172; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v34; // w22
  __int64 v35; // x2
  Il2CppObject *v36; // x21
  __int64 v37; // x1
  TerminalPramsManager_c *v38; // x0
  const MethodInfo *v39; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4B194DE & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&boostId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_QuestMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&MapControl_QuestInfo_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v14, v15);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v16, v17);
    byte_4B194DE = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v20);
    byte_4B12DC3 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    v21 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v21->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v27 = (MapControl_QuestInfo_o *)sub_1BCAA2C(MapControl_QuestInfo_TypeInfo, v24, v25, v26);
  MapControl_QuestInfo___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v27, 0LL);
  questId = v27->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v28);
  IsQuestClear_38310172 = CondType__IsQuestClear_38310172(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v30);
    byte_4B12DCE = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Entity )
    goto LABEL_36;
  CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                            (QuestEntity_o *)Entity,
                            QuestId_k__BackingField,
                            *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL),
                            !IsQuestClear_38310172,
                            &fixedVal,
                            0LL);
  v27->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0LL);
  v27->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v34 = fixedVal;
  else
    v34 = ActConsume;
  v36 = SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
  if ( !byte_4B12FA8 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v19, v35);
    byte_4B12FA8 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v19);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v36 )
    goto LABEL_36;
  if ( !clsQuestCheck__CheckQuestPlayable(
          (clsQuestCheck_o *)v36,
          v27,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 128LL),
          boostId,
          0LL) )
    return;
  v38 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37);
    v38 = TerminalPramsManager_TypeInfo;
  }
  v38->static_fields->lastPlayQuestConsumeAp = v34;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1BCAA3C(Instance, v19);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v39);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleResultComponent_resultData_o *battleResult; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x0

  if ( (byte_4B194D1 & 1) == 0 )
  {
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&StringLiteral_13123/*"StartQuestClearReward"*/, v6, v7);
    byte_4B194D1 = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_12;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13123/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, v9);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleResult = (BattleResultComponent_resultData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResult
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)battleResult, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleResult, 0, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.friendResult) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(battleResult, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)battleResult, 0LL);
  BattleResultComponent__ResetTimeScale(v10);
}


void __fastcall BattleResultComponent__OpenItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_String_o *eventEndTitle; // x8
  Il2CppObject *Instance; // x0
  System_String_o *v10; // x20
  System_String_o *eventEndMessage; // x21
  CommonUI_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  NotificationDialog_ClickDelegate_o *v16; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_4B194CA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultComponent_endCloseEndEventMessage__, method, v2);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B194CA = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v12 = (CommonUI_o *)Instance;
    v16 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(NotificationDialog_ClickDelegate_TypeInfo, v13, v14, v15);
    NotificationDialog_ClickDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v12 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_30768824(
      v12,
      v10,
      eventEndMessage,
      v16,
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
    sub_1BCAA3C(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, 0LL);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  BattleRetryConfirmComponent_o *v13; // x20
  BattleWindowComponent_EndCall_o *v14; // x21
  __int64 v15; // x1
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4B194DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleResultComponent__OpenRetryQuest_b__60_0__, method, v2);
    sub_1BCA7E0(&BattleWindowComponent_EndCall_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    byte_4B194DB = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_15;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v13 = this->fields.battleRetryConfirmComponent;
    v14 = (BattleWindowComponent_EndCall_o *)sub_1BCAA2C(BattleWindowComponent_EndCall_TypeInfo, method, v11, v12);
    BattleWindowComponent_EndCall___ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattleResultComponent__OpenRetryQuest_b__60_0__,
      0LL);
    if ( !v13 )
      goto LABEL_15;
    BattleRetryConfirmComponent__Open(v13, v14, 0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
LABEL_15:
    sub_1BCAA3C(battleRetryConfirmComponent, method);
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
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
    goto LABEL_15;
  }
}


void __fastcall BattleResultComponent__OpenTutorial(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleEventTutorial_o *eventTutorial; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  BattleEventTutorial_o *v11; // x20
  System_Action_o *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  BattleEventTutorial_o *v15; // x20
  System_Action_o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  BattleEventTutorial_o *v19; // x20
  System_Action_o *v20; // x21

  if ( (byte_4B194C9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleResultComponent_OpenTutorial__, v4, v5);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v6, v7);
    byte_4B194C9 = 1;
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
  v11 = this->fields.eventTutorial;
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v9, v10);
    System_Action___ctor(v12, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v11 )
    {
      BattleEventTutorial__callResult(v11, v12, 0LL);
      return;
    }
LABEL_23:
    sub_1BCAA3C(eventTutorial, method);
  }
  if ( !v11 )
    goto LABEL_23;
  if ( BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0LL) )
  {
    eventTutorial = (BattleEventTutorial_o *)this->fields.battleResult;
    if ( !eventTutorial )
      goto LABEL_23;
    if ( BattleResultComponent_resultData__isWin((BattleResultComponent_resultData_o *)eventTutorial, 0LL) )
    {
      v15 = this->fields.eventTutorial;
      v16 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v13, v14);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
      if ( !v15 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v15, v16, 0LL);
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
    v19 = this->fields.eventTutorial;
    v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v17, v18);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( !v19 )
      goto LABEL_23;
    BattleEventTutorial__callResultLose(v19, v20, 0LL);
  }
  else
  {
LABEL_19:
    eventTutorial = (BattleEventTutorial_o *)this->fields.fsm;
    if ( !eventTutorial )
      goto LABEL_23;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__PushFollowerScene(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  TerminalPramsManager_c *v17; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v21; // x23
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  Il2CppObject *v24; // x20

  if ( (byte_4B194DF & 1) == 0 )
  {
    sub_1BCA7E0(&BattleSetupInfo_TypeInfo, *(_QWORD *)&boostId, method);
    sub_1BCA7E0(&RandomLimitCountManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6, v7);
    sub_1BCA7E0(&SoundManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B194DF = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo, *(_QWORD *)&boostId);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  BattleResultComponent__ResetTimeScale(v12);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v13);
  SoundManager__stopVoiceAll(0.8, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
  if ( !byte_4B12DC6 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    byte_4B12DC6 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    v17 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v17->static_fields->_WarId_k__BackingField;
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4B12DC3 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v14);
    v17 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v17->static_fields->_QuestId_k__BackingField;
  if ( !byte_4B12DCE )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
    v17 = TerminalPramsManager_TypeInfo;
    byte_4B12DCE = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17, v14);
    v17 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v17->static_fields->_PhaseCnt_k__BackingField;
  v21 = (BattleSetupInfo_o *)sub_1BCAA2C(BattleSetupInfo_TypeInfo, v14, v15, v16);
  BattleSetupInfo___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_27;
  Instance = (Il2CppObject *)BattleSetupInfo__ConvertBattleSetupInfo(
                               v21,
                               WarId_k__BackingField,
                               QuestId_k__BackingField,
                               PhaseCnt_k__BackingField,
                               0,
                               0,
                               0,
                               0LL);
  v24 = Instance;
  if ( boostId )
  {
    if ( !Instance )
      goto LABEL_27;
    LODWORD(Instance[3].monitor) = boostId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1BCAA3C(Instance, v23);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v24, 0LL);
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
    sub_1BCAA3C(this, method);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v5; // x1
  ScreenTouchInformationComponent_o *v6; // x0

  if ( (byte_4B194C7 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B194C7 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v6 = this->fields.screenTouch;
    if ( !v6 || (ScreenTouchInformationComponent__ResetPlayScale(v6, 0LL), (v6 = this->fields.screenTouch) == 0LL) )
      sub_1BCAA3C(v6, v5);
    ScreenTouchInformationComponent__ResetPlayAlpha(v6, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1

  if ( (byte_4B194E0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattlePerformance_TypeInfo, v1, v2);
    byte_4B194E0 = 1;
  }
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, v3);
  BattlePerformance__AdjustSmoothnessByCurrentSpeed(0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotion(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v30; // x19
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Object_array *v39; // x20
  __int64 v40; // x0
  int64_t v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int64_t v48; // x21
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x21
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x21
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  int64_t v111; // x21
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  int64_t v124; // x21
  System_Collections_Hashtable_o *v125; // x0
  __int64 v126; // x0
  int v127; // [xsp+Ch] [xbp-44h] BYREF
  int v128; // [xsp+10h] [xbp-40h] BYREF
  int v129; // [xsp+14h] [xbp-3Ch] BYREF
  int v130; // [xsp+18h] [xbp-38h] BYREF
  int v131; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4B194CD & 1) == 0 )
  {
    sub_1BCA7E0(&iTween_EaseType_TypeInfo, method, v2);
    sub_1BCA7E0(&object___TypeInfo, v4, v5);
    sub_1BCA7E0(&float_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_19858/*"from"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_12703/*"ScrollBarMotionCompleteValue"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_22521/*"onupdate"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_12704/*"ScrollBarMotionUpdateValue"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_24219/*"to"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_18948/*"easeType"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v24, v25);
    sub_1BCA7E0(&iTween_TypeInfo, v26, v27);
    byte_4B194CD = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v28);
  iTween__Stop_61049892(gameObject, 0LL);
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v31 = sub_1BCA888(object___TypeInfo, 14LL);
  if ( !v31 )
    sub_1BCAA3C(0LL, v32);
  v39 = (System_Object_array *)v31;
  v40 = StringLiteral_19858/*"from"*/;
  if ( StringLiteral_19858/*"from"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_19858/*"from"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_19858/*"from"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( !v39->max_length )
    goto LABEL_67;
  v39->m_Items[0] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)v39->m_Items, v41, v33, v34, v35, v36, v37, v38);
  v131 = 0;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &v131);
  v48 = v40;
  if ( v40 )
  {
    v40 = sub_1BCA91C(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_67;
  v39->m_Items[1] = (Il2CppObject *)v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[1], v48, v42, v43, v44, v45, v46, v47);
  v40 = StringLiteral_24219/*"to"*/;
  if ( StringLiteral_24219/*"to"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_24219/*"to"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_24219/*"to"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 2 )
    goto LABEL_67;
  v39->m_Items[2] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[2], v41, v49, v50, v51, v52, v53, v54);
  v130 = 1065353216;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &v130);
  v61 = v40;
  if ( v40 )
  {
    v40 = sub_1BCA91C(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
  }
  if ( v39->max_length <= 3 )
    goto LABEL_67;
  v39->m_Items[3] = (Il2CppObject *)v61;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[3], v61, v55, v56, v57, v58, v59, v60);
  v40 = StringLiteral_22521/*"onupdate"*/;
  if ( StringLiteral_22521/*"onupdate"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_22521/*"onupdate"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_22521/*"onupdate"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 4 )
    goto LABEL_67;
  v39->m_Items[4] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[4], v41, v62, v63, v64, v65, v66, v67);
  v40 = StringLiteral_12704/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12704/*"ScrollBarMotionUpdateValue"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_12704/*"ScrollBarMotionUpdateValue"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_12704/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 5 )
    goto LABEL_67;
  v39->m_Items[5] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[5], v41, v68, v69, v70, v71, v72, v73);
  v40 = StringLiteral_22513/*"oncomplete"*/;
  if ( StringLiteral_22513/*"oncomplete"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_22513/*"oncomplete"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_22513/*"oncomplete"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 6 )
    goto LABEL_67;
  v39->m_Items[6] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[6], v41, v74, v75, v76, v77, v78, v79);
  v40 = StringLiteral_12703/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12703/*"ScrollBarMotionCompleteValue"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_12703/*"ScrollBarMotionCompleteValue"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_12703/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 7 )
    goto LABEL_67;
  v39->m_Items[7] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[7], v41, v80, v81, v82, v83, v84, v85);
  v40 = StringLiteral_18948/*"easeType"*/;
  if ( StringLiteral_18948/*"easeType"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_18948/*"easeType"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_18948/*"easeType"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 8 )
    goto LABEL_67;
  v39->m_Items[8] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[8], v41, v86, v87, v88, v89, v90, v91);
  v129 = 17;
  v40 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v129);
  v98 = v40;
  if ( v40 )
  {
    v40 = sub_1BCA91C(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
  }
  if ( v39->max_length <= 9 )
    goto LABEL_67;
  v39->m_Items[9] = (Il2CppObject *)v98;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[9], v98, v92, v93, v94, v95, v96, v97);
  v40 = StringLiteral_24178/*"time"*/;
  if ( StringLiteral_24178/*"time"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_24178/*"time"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_24178/*"time"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 0xA )
    goto LABEL_67;
  v39->m_Items[10] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[10], v41, v99, v100, v101, v102, v103, v104);
  v128 = 1065353216;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &v128);
  v111 = v40;
  if ( v40 )
  {
    v40 = sub_1BCA91C(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
  }
  if ( v39->max_length <= 0xB )
    goto LABEL_67;
  v39->m_Items[11] = (Il2CppObject *)v111;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[11], v111, v105, v106, v107, v108, v109, v110);
  v40 = StringLiteral_18739/*"delay"*/;
  if ( StringLiteral_18739/*"delay"*/ )
  {
    v40 = sub_1BCA91C(StringLiteral_18739/*"delay"*/, v39->obj.klass->_1.element_class);
    if ( !v40 )
      goto LABEL_68;
    v41 = StringLiteral_18739/*"delay"*/;
  }
  else
  {
    v41 = 0LL;
  }
  if ( v39->max_length <= 0xC )
    goto LABEL_67;
  v39->m_Items[12] = (Il2CppObject *)v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[12], v41, v112, v113, v114, v115, v116, v117);
  v127 = 0;
  v40 = j_il2cpp_value_box_0(float_TypeInfo, &v127);
  v124 = v40;
  if ( v40 )
  {
    v40 = sub_1BCA91C(v40, v39->obj.klass->_1.element_class);
    if ( !v40 )
    {
LABEL_68:
      v126 = sub_1BCAA60(v40);
      sub_1BCA908(v126, 0LL);
    }
  }
  if ( v39->max_length <= 0xD )
LABEL_67:
    sub_1BCAA44(v40, v41);
  v39->m_Items[13] = (Il2CppObject *)v124;
  sub_1BCA784((PartyOrganizationUtility_o *)&v39->m_Items[13], v124, v118, v119, v120, v121, v122, v123);
  v125 = iTween__Hash(v39, 0LL);
  iTween__ValueTo(v30, v125, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionCompleteValue(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleResultComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  BattleResultItemComponent_o *itemResult; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  System_Action_o *v12; // x21

  v4 = this;
  if ( (byte_4B194CF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__, v5, v6);
    this = (BattleResultComponent_o *)sub_1BCA7E0(
                                        &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                        v7,
                                        v8);
    byte_4B194CF = 1;
  }
  itemResult = v4->fields.itemResult;
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
    this = (BattleResultComponent_o *)v4->fields.resultItemScrollBar;
    if ( !this )
      goto LABEL_11;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    itemResult = v4->fields.itemResult;
  }
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v4,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_1BCAA3C(this, method);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v12, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  __int64 v3; // x2
  UIProgressBar_o *resultItemScrollBar; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x1

  if ( (byte_4B194CE & 1) == 0 )
  {
    sub_1BCA7E0(&iTween_TypeInfo, method, v3);
    byte_4B194CE = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1BCAA3C(0LL, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v7);
    iTween__Stop_61049892(gameObject, 0LL);
    BattleResultComponent__ScrollBarMotionCompleteValue(this, v9);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  BattleResultComponent_resultData_o *v55; // x1
  BattleResultComponent_o **p_battleResult; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x2
  TerminalPramsManager_c *v64; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v69; // x0
  int32_t v70; // w19
  BalanceConfig_c *v71; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v73; // x0
  BattleResultComponent_o *v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FriendIconPrefab; // x0
  __int64 v76; // x2
  __int64 v77; // x3
  BattleResultComponent___c_c *v78; // x8
  BattleResultComponent_o *v79; // x26
  System_Converter_TInput__TOutput__o *_9__34_0; // x19
  Il2CppObject *v81; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  System_String_array *v89; // x0
  System_String_o *v90; // x0
  System_Collections_Generic_IEnumerable_TSource__o *resultSprite; // x0
  __int64 v92; // x2
  __int64 v93; // x3
  BattleResultComponent___c_c *v94; // x8
  BattleResultComponent_o *v95; // x26
  System_Converter_TInput__TOutput__o *_9__34_1; // x19
  Il2CppObject *v97; // x23
  struct BattleResultComponent___c_StaticFields *v98; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  System_String_array *v105; // x0
  System_String_o *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t m_CancellationTokenSource; // x1
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct BattleResultComponent_resultData_o *v120; // x8
  BattleData_o *v121; // x28
  int64_t eventEndMessage; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  struct BattleResultComponent_resultData_o *v125; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v127; // x26
  BattleResultComponent_resultData_o *battleResult; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x8
  Il2CppObject *Master_object; // x19
  int32_t v131; // w23
  int32_t QuestId; // w24
  const MethodInfo *v133; // x7
  bool v134; // w27
  BattleResultComponent_resultData_o *v135; // x19
  struct BattleInfoData_o *battle_info; // x8
  BattleResultBondsComponent_o *v137; // x23
  UserServantCollectionEntity_array *oldUserSvtCollection; // x28
  DeckData_o *myDeck; // x24
  int32_t followerType; // w29
  BattleUserServantData_array *userSvt; // x25
  UserServantCollectionEntity_array *v142; // x2
  struct BattleResultEventItemComponent_o *eventItemResult; // x9
  struct System_Threading_CancellationTokenSource_o *v144; // x8
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v146; // x11
  struct BattleResultEventItemComponent_o *v147; // x9
  struct System_Threading_CancellationTokenSource_o *v148; // x8
  QuestEntity_o *quest_ent; // x8
  UserGameEntity_o *parentComp; // x29
  BattleResultItemComponent_o *v151; // x25
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  struct BattleResultExpComponent_o *expResult; // x20
  int32_t eventItemResult_high; // w19
  struct BattleResultEventDamageItemComponent_o *dropupinfos; // x23
  struct System_String_o *v157; // x24
  int32_t firstClearRewardQp; // w26
  int64_t v159; // x2
  int32_t v160; // w3
  System_String_o *v161; // x4
  BattleSetupInfo_o *v162; // x5
  FollowerInfo_o *v163; // x6
  PartyListViewItem_o *v164; // x7
  BattleResultComponent_o *v165; // x8
  struct BattleResultItemComponent_o *v166; // x9
  struct UILabel_o *getQpLabel; // x9
  int64_t mText; // x1
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  struct BattleResultItemComponent_o *v175; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v177; // x9
  int64_t v178; // x1
  struct BattleResultEventFortificationItemComponent_o *eventFortificationItemResult; // x8
  Il2CppObject *v180; // x0
  struct BattleResultItemComponent_o *v181; // x8
  Il2CppObject *v182; // x23
  UILabel_o *v183; // x19
  System_String_o *v184; // x0
  struct BattleResultItemComponent_o *v185; // x8
  struct BattleResultEventFortificationItemComponent_o *v186; // x9
  UILabel_o *v187; // x19
  Il2CppObject *v188; // x0
  BattleResultFriendComponent_o *v189; // x19
  int32_t obj_basebg; // w23
  int32_t obj_basebg_high; // w24
  int64_t v192; // x25
  int32_t obj_fronttouch; // w26
  int32_t obj_fronttouch_high; // w27
  struct BattleResultComponent_resultData_o *v195; // x8
  struct BattleResultComponent_resultData_o *v196; // x8
  __int64 v197; // x1
  UnityEngine_Object_o *v198; // x19
  struct BattleResultComponent_resultData_o *v199; // x8
  struct BattleResultComponent_resultData_o *v200; // x8
  struct BattleInfoData_o *v201; // x8
  struct DeckData_o *v202; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v205; // x20
  char v206; // w22
  BattleResultComponent_o *v207; // x19
  int32_t v208; // w23
  int32_t EventProgressValueSaveData_42790044; // w0
  __int64 v210; // x2
  int v211; // w8
  TerminalPramsManager_c *v212; // x0
  _QWORD *monitor; // x8
  __int64 v214; // x1
  bool isWin; // w19
  const MethodInfo *boostRate; // [xsp+10h] [xbp-F0h]
  struct UnityEngine_GameObject_o *v217; // [xsp+50h] [xbp-B0h]
  struct BattleResultFriendComponent_o *friendResult; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  System_Int32_array *v220; // [xsp+68h] [xbp-98h]
  AssetData_o *resultAssetb; // [xsp+70h] [xbp-90h]
  BattleResultComponent_resultData_array *result; // [xsp+78h] [xbp-88h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+80h] [xbp-80h]
  BattleData_o *battleData; // [xsp+88h] [xbp-78h]
  int myFsm_high; // [xsp+90h] [xbp-70h] BYREF
  int v227; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v229; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12 = this;
  if ( (byte_4B194C8 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, resultList, tutorial);
    sub_1BCA7E0(&System_Converter_int__string__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventBuddyPointMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventProgressValueMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int___, v21, v22);
    sub_1BCA7E0(&EventInfoUIProgressControl_TypeInfo, v23, v24);
    sub_1BCA7E0(&int_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v29, v30);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v33, v34);
    sub_1BCA7E0(&QuestKnockdownResult_TypeInfo, v35, v36);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v37, v38);
    sub_1BCA7E0(&Method_BattleResultComponent___c__Set_b__34_0__, v39, v40);
    sub_1BCA7E0(&Method_BattleResultComponent___c__Set_b__34_1__, v41, v42);
    sub_1BCA7E0(&BattleResultComponent___c_TypeInfo, v43, v44);
    sub_1BCA7E0(&StringLiteral_19829/*"freeShopIds"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_11240/*"RESULT_QP_PLUS"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_23165/*"returnRarePriShopIds"*/, v51, v52);
    this = (BattleResultComponent_o *)sub_1BCA7E0(&StringLiteral_863/*","*/, v53, v54);
    byte_4B194C8 = 1;
  }
  entity = 0LL;
  if ( !resultList )
    goto LABEL_204;
  if ( !resultList->max_length )
    goto LABEL_205;
  v55 = resultList->m_Items[0];
  result = resultList;
  v12->fields.battleResult = v55;
  p_battleResult = (BattleResultComponent_o **)&v12->fields.battleResult;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v12->fields.battleResult,
    (int64_t)v55,
    (int64_t)tutorial,
    (int32_t)resultAsset,
    (System_String_o *)viewGroupIds,
    (BattleSetupInfo_o *)bData,
    (FollowerInfo_o *)method,
    v7);
  v12->fields.eventTutorial = tutorial;
  sub_1BCA784((PartyOrganizationUtility_o *)&v12->fields.eventTutorial, (int64_t)tutorial, v57, v58, v59, v60, v61, v62);
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
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
      if ( !byte_4B1380F )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, resultList, v63);
        byte_4B1380F = 1;
      }
      v64 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
        v64 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v64->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0LL);
      if ( !byte_4B137FF )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v66, v67);
        byte_4B137FF = 1;
      }
      v69 = TerminalPramsManager_TypeInfo;
      v70 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v66);
        v69 = TerminalPramsManager_TypeInfo;
      }
      v69->static_fields->_BeforeEventActivityPoint_k__BackingField = v70;
      v71 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v66);
        v71 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v71->static_fields->UserEventActivityPointMax;
      if ( !byte_4B1380F )
      {
        sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v66, v67);
        byte_4B1380F = 1;
      }
      v73 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v66);
        v73 = TerminalPramsManager_TypeInfo;
      }
      if ( v73->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v73->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v73, v66);
        if ( !byte_4B137FF )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v66, v67);
          byte_4B137FF = 1;
        }
        v73 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v66);
          v73 = TerminalPramsManager_TypeInfo;
        }
        v73->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v73->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v73, v66);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v74 = *p_battleResult;
  v220 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v12->fields.eventTutorial;
  battleData = bData;
  if ( !*p_battleResult )
    goto LABEL_204;
  FriendIconPrefab = (System_Collections_Generic_IEnumerable_TSource__o *)v74[1].fields.FriendIconPrefab;
  if ( FriendIconPrefab )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        FriendIconPrefab,
                                        (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v78 = BattleResultComponent___c_TypeInfo;
    v79 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo, resultList);
      v78 = BattleResultComponent___c_TypeInfo;
    }
    _9__34_0 = (System_Converter_TInput__TOutput__o *)v78->static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78, resultList);
        v78 = BattleResultComponent___c_TypeInfo;
      }
      v81 = (Il2CppObject *)v78->static_fields->__9;
      _9__34_0 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                          System_Converter_int__string__TypeInfo,
                                                          resultList,
                                                          v76,
                                                          v77);
      System_Converter_int__object____ctor(_9__34_0, v81, Method_BattleResultComponent___c__Set_b__34_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = (struct System_Converter_int__string__o *)_9__34_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__34_0,
        (int64_t)_9__34_0,
        v83,
        v84,
        v85,
        v86,
        v87,
        v88);
    }
    if ( !v79 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v79,
                                        (System_Converter_T__TOutput__o *)_9__34_0,
                                        (const MethodInfo_2E42A40 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v89 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    v90 = System_String__Join((System_String_o *)StringLiteral_863/*","*/, v89, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19829/*"freeShopIds"*/, v90, 0LL);
    v74 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  resultSprite = (System_Collections_Generic_IEnumerable_TSource__o *)v74[1].fields.resultSprite;
  if ( resultSprite )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        resultSprite,
                                        (const MethodInfo_2F4F4F8 *)Method_System_Linq_Enumerable_ToList_int___);
    v94 = BattleResultComponent___c_TypeInfo;
    v95 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo, resultList);
      v94 = BattleResultComponent___c_TypeInfo;
    }
    _9__34_1 = (System_Converter_TInput__TOutput__o *)v94->static_fields->__9__34_1;
    if ( !_9__34_1 )
    {
      if ( !v94->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v94, resultList);
        v94 = BattleResultComponent___c_TypeInfo;
      }
      v97 = (Il2CppObject *)v94->static_fields->__9;
      _9__34_1 = (System_Converter_TInput__TOutput__o *)sub_1BCAA2C(
                                                          System_Converter_int__string__TypeInfo,
                                                          resultList,
                                                          v92,
                                                          v93);
      System_Converter_int__object____ctor(_9__34_1, v97, Method_BattleResultComponent___c__Set_b__34_1__, 0LL);
      v98 = BattleResultComponent___c_TypeInfo->static_fields;
      v98->__9__34_1 = (struct System_Converter_int__string__o *)_9__34_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v98->__9__34_1, (int64_t)_9__34_1, v99, v100, v101, v102, v103, v104);
    }
    if ( !v95 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v95,
                                        (System_Converter_T__TOutput__o *)_9__34_1,
                                        (const MethodInfo_2E42A40 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v105 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                    (System_Collections_Generic_List_object__o *)this,
                                    (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
    v106 = System_String__Join((System_String_o *)StringLiteral_863/*","*/, v105, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_23165/*"returnRarePriShopIds"*/, v106, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_204;
  m_CancellationTokenSource = (int64_t)(*p_battleResult)->fields.m_CancellationTokenSource;
  v12->fields.eventEndTitle = (struct System_String_o *)m_CancellationTokenSource;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v12->fields.eventEndTitle,
    m_CancellationTokenSource,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
  v120 = v12->fields.battleResult;
  v121 = bData;
  if ( !v120 )
    goto LABEL_204;
  eventEndMessage = (int64_t)v120->fields.eventEndMessage;
  v12->fields.eventEndMessage = (struct System_String_o *)eventEndMessage;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v12->fields.eventEndMessage,
    eventEndMessage,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v125 = v12->fields.battleResult;
  if ( !v125 )
    goto LABEL_204;
  isTrialQuestNewRecord = v125->fields.isTrialQuestNewRecord;
  v127 = (QuestKnockdownResult_o *)sub_1BCAA2C(QuestKnockdownResult_TypeInfo, resultList, v123, v124);
  QuestKnockdownResult___ctor(v127, isTrialQuestNewRecord, bData, 0LL);
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resultList);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v131 = BattleData__get_eventId(bData, 0LL);
      QuestId = BattleData__getQuestId(bData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(bData, 0LL);
      if ( !Master_object )
        goto LABEL_204;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v131,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_204;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v134 = (unsigned __int8)this & 1;
      }
      else
      {
        v134 = 0;
      }
      v135 = v12->fields.battleResult;
      if ( !v135 )
        goto LABEL_204;
      battle_info = bData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_204;
      v137 = v12->fields.bondsResult;
      if ( !v137 )
        goto LABEL_204;
      oldUserSvtCollection = v135->fields.oldUserSvtCollection;
      myDeck = v135->fields.myDeck;
      followerType = v135->fields.followerType;
      userSvt = battle_info->fields.userSvt;
      BattleResultBondsComponent__InitResultData(
        v12->fields.bondsResult,
        oldUserSvtCollection,
        v135->fields.friendshipRewardInfos,
        resultAsset,
        v135->fields.friendshipExpBase,
        v135->fields.getJoinSvts,
        0,
        v133);
      v142 = oldUserSvtCollection;
      v121 = battleData;
      BattleResultBondsComponent__SetResultDataLocal(
        v137,
        myDeck,
        v142,
        followerType,
        userSvt,
        v135,
        v134,
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
  eventItemResult = this->fields.eventItemResult;
  if ( eventItemResult
    && (v144 = eventItemResult->fields.m_CancellationTokenSource) != 0LL
    && (itemResult = this->fields.itemResult) != 0LL
    && (v146 = itemResult->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v144 || !(_DWORD)v146 )
      goto LABEL_205;
    if ( !v12->fields.expResult )
      goto LABEL_204;
    BattleResultExpComponent__setResultData(
      v12->fields.expResult,
      (UserGameEntity_o *)eventItemResult->fields.parentComp,
      (UserEquipEntity_o *)itemResult->fields.parentComp,
      (MasterLvRewardInfo_array *)this->fields.eventEndTitle,
      resultAsset,
      v121->fields.maxTurnDamageInBattle,
      v121->fields.maxTurnDamageRecord,
      v127,
      0LL);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  v147 = this->fields.eventItemResult;
  if ( v147 && (v148 = v147->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v148 )
      goto LABEL_205;
    quest_ent = v121->fields.quest_ent;
    if ( !quest_ent )
      goto LABEL_204;
    parentComp = (UserGameEntity_o *)v147->fields.parentComp;
    v151 = v12->fields.itemResult;
    resultAssetb = (AssetData_o *)this->fields.eventEndMessage;
    eventId = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
    fsm = (int32_t)this->fields.fsm;
    fsm_high = HIDWORD(this->fields.fsm);
    expResult = this[1].fields.expResult;
    eventItemResult_high = HIDWORD(this[1].fields.eventItemResult);
    dropupinfos = this[1].fields.eventDamageItemResult;
    v157 = this[1].fields.eventEndMessage;
    firstClearRewardQp = (int32_t)this->fields.obj_basebg;
    v217 = this->fields.FriendIconPrefab;
    friendResult = this->fields.friendResult;
    this = (BattleResultComponent_o *)QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
    if ( !*p_battleResult || !v151 )
      goto LABEL_204;
    BattleResultItemComponent__setResultData(
      v151,
      (BattleDropItem_array *)resultAssetb,
      fsm,
      fsm_high,
      parentComp,
      eventId,
      (UserEventEntity_array *)friendResult,
      (UserEventPointEntity_array *)v217,
      (int64_t)expResult,
      v220,
      eventItemResult_high,
      (DropUpInfo_array *)dropupinfos,
      (EventConquestInfo_array *)v157,
      firstClearRewardQp,
      (unsigned __int8)this & 1,
      (BattleResultAddRewardBonus_o *)(*p_battleResult)[1].fields.eventFortificationItemResult,
      0LL);
    v121 = battleData;
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
  }
  v165 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( v165[1].fields.eventFortificationItemResult )
  {
    v166 = v12->fields.itemResult;
    if ( !v166 )
      goto LABEL_204;
    getQpLabel = v166->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_204;
    mText = (int64_t)getQpLabel->fields.mText;
    v165[1].fields.screenTouch = (struct ScreenTouchInformationComponent_o *)mText;
    sub_1BCA784((PartyOrganizationUtility_o *)&v165[1].fields.screenTouch, mText, v159, v160, v161, v162, v163, v164);
    v175 = v12->fields.itemResult;
    if ( !v175 )
      goto LABEL_204;
    nowQpLabel = v175->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_204;
    v177 = v12->fields.battleResult;
    if ( !v177 )
      goto LABEL_204;
    v178 = (int64_t)nowQpLabel->fields.mText;
    v177->fields.ultimateNowQpText = (struct System_String_o *)v178;
    sub_1BCA784((PartyOrganizationUtility_o *)&v177->fields.ultimateNowQpText, v178, v169, v170, v171, v172, v173, v174);
    if ( !*p_battleResult )
      goto LABEL_204;
    eventFortificationItemResult = (*p_battleResult)[1].fields.eventFortificationItemResult;
    if ( !eventFortificationItemResult )
      goto LABEL_204;
    v227 = (__int64)eventFortificationItemResult->fields.myFsm & ~(SLODWORD(eventFortificationItemResult->fields.myFsm) >> 31);
    v180 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v227);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v180, 0LL);
    v181 = v12->fields.itemResult;
    if ( !v181 )
      goto LABEL_204;
    v182 = (Il2CppObject *)this;
    v183 = v181->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, resultList);
    v184 = LocalizationManager__Get((System_String_o *)StringLiteral_11240/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v184, v182, 0LL);
    if ( !v183 )
      goto LABEL_204;
    UILabel__set_text(v183, (System_String_o *)this, 0LL);
    v185 = v12->fields.itemResult;
    if ( !v185 )
      goto LABEL_204;
    if ( !*p_battleResult )
      goto LABEL_204;
    v186 = (*p_battleResult)[1].fields.eventFortificationItemResult;
    if ( !v186 )
      goto LABEL_204;
    v187 = v185->fields.nowQpLabel;
    myFsm_high = HIDWORD(v186->fields.myFsm);
    v188 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &myFsm_high);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_25188/*"{0:#,0}"*/, v188, 0LL);
    if ( !v187 )
      goto LABEL_204;
    UILabel__set_text(v187, (System_String_o *)this, 0LL);
    this = (BattleResultComponent_o *)v12->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_204;
    v229.fields.r = 0.29804;
    v229.fields.a = 1.0;
    v229.fields.g = 0.29804;
    v229.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v229, 0LL);
    v165 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  this = (BattleResultComponent_o *)v121->fields.quest_ent;
  if ( !this )
    goto LABEL_204;
  v189 = v12->fields.friendResult;
  obj_basebg = (int32_t)v165[1].fields.obj_basebg;
  obj_basebg_high = HIDWORD(v165[1].fields.obj_basebg);
  v192 = (int64_t)v165[1].fields.fsm;
  obj_fronttouch = (int32_t)v165[1].fields.obj_fronttouch;
  obj_fronttouch_high = HIDWORD(v165[1].fields.obj_fronttouch);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v189 )
    goto LABEL_204;
  BattleResultFriendComponent__setResultData(
    v189,
    obj_basebg,
    obj_basebg_high,
    v192,
    obj_fronttouch,
    obj_fronttouch_high,
    (unsigned __int8)this & 1,
    0LL);
  v195 = v12->fields.battleResult;
  if ( !v195 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v12->fields.eventItemResult;
  if ( !this )
    goto LABEL_204;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v195->fields.resultEventRewardInfos,
                                      (unsigned int)v195->fields.eventId,
                                      v195->fields.resultBoostItemRewardInfos,
                                      v195->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v196 = v12->fields.battleResult;
  if ( !v196 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v12->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_204;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v196->fields.resultDamageRewardInfos,
    (unsigned int)v196->fields.eventId,
    v196->fields.resultBoostItemRewardInfos,
    v196->fields.rewardInfos,
    this->klass[1]._1.name);
  v198 = (UnityEngine_Object_o *)v12->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v197);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(v198, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v199 = v12->fields.battleResult;
    if ( !v199 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v12->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v199->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v199->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v200 = v12->fields.battleResult;
    if ( !v200 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v12->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v200->fields.fortificationInfos,
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
  v201 = v121->fields.battle_info;
  if ( !v201 )
    goto LABEL_204;
  v202 = v201->fields.myDeck;
  if ( v202 )
  {
    svts = v202->fields.svts;
    if ( svts )
    {
      max_length = svts->max_length;
      if ( max_length >= 1 )
      {
        v205 = 0LL;
        while ( (unsigned int)v205 < max_length )
        {
          this = (BattleResultComponent_o *)svts->m_Items[v205];
          if ( !this )
            goto LABEL_204;
          this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin(
                                              (BattleDeckServantData_o *)this,
                                              0LL);
          v206 = (char)this;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            max_length = svts->max_length;
            if ( (int)++v205 < max_length )
              continue;
          }
          goto LABEL_156;
        }
LABEL_205:
        sub_1BCAA44(this, resultList);
      }
    }
  }
  v206 = 0;
LABEL_156:
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resultList);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1),
                                        0LL);
    v207 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_204;
      v208 = *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo, resultList);
      EventProgressValueSaveData_42790044 = EventInfoUIProgressControl__GetEventProgressValueSaveData_42790044(
                                              v208,
                                              0,
                                              0LL);
      v211 = (int)v207->fields.obj_basebg;
      LODWORD(v207) = 0;
      if ( EventProgressValueSaveData_42790044 != v211 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
        if ( !byte_4B12DCC )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, resultList, v210);
          byte_4B12DCC = 1;
        }
        v212 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, resultList);
          v212 = TerminalPramsManager_TypeInfo;
        }
        v212->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v207) = 1;
      }
    }
  }
  else
  {
    LODWORD(v207) = 0;
  }
  if ( v206 & 1 | !v121->fields.isRetryable )
    goto LABEL_178;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( (((unsigned int)v207 | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
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
    sub_1BCAA3C(this, resultList);
  }
  monitor = this[2].monitor;
  if ( monitor && monitor[3] )
    BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 4096, 0LL);
  if ( (BattleData__isBattleResultLoseQuestClear(v121, 0LL) || BattleData__isBattleRetreatQuestClear(v121, 0LL))
    && v121->fields.isItemResultSkip )
  {
    if ( !BattleData__IsWarBoard(v121, 0LL) )
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
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v214);
  TerminalPramsManager__ReceiveQuestEndResultInfo(result, isWin, 0LL);
}


void __fastcall BattleResultComponent__SkippAddRewardEffect(BattleResultComponent_o *this, const MethodInfo *method)
{
  this->fields.isAddRewardEffectSkip = 1;
}


void __fastcall BattleResultComponent__StartAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *touchGuard; // x0
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *started; // x1

  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1BCAA3C(0LL, v3);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B194CC & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method, v2);
    byte_4B194CC = 1;
  }
  v5 = sub_1BCAA2C(BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method, v2, v3);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__42___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  TerminalPramsManager_c *v16; // x8
  CommonUI_o *v17; // x19
  BattleResultComponent___c_c *v18; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x20
  System_Action_o *_9__61_0; // x21
  Il2CppObject *v21; // x22
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B194DC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, v7, v8);
    sub_1BCA7E0(&BattleResultComponent___c_TypeInfo, v9, v10);
    byte_4B194DC = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DC3 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DC3 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v11->static_fields->_QuestId_k__BackingField, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = TerminalPramsManager_TypeInfo;
    v17 = (CommonUI_o *)Instance;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
      v16 = TerminalPramsManager_TypeInfo;
    }
    v18 = BattleResultComponent___c_TypeInfo;
    mQuestRewardInfos = v16->static_fields->mQuestRewardInfos;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo, v13);
      v18 = BattleResultComponent___c_TypeInfo;
    }
    _9__61_0 = v18->static_fields->__9__61_0;
    if ( !_9__61_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18, v13);
        v18 = BattleResultComponent___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v18->static_fields->__9;
      _9__61_0 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v13, v14, v15);
      System_Action___ctor(_9__61_0, v21, Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__61_0 = _9__61_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__61_0,
        (int64_t)_9__61_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( !v17 )
      sub_1BCAA3C(v18, v13);
    CommonUI__OpenQuestClearReward(v17, mQuestRewardInfos, _9__61_0, 0LL);
  }
}


void __fastcall BattleResultComponent__StartResult(
        BattleResultComponent_o *this,
        UnityEngine_GameObject_o *target,
        System_String_o *endEvent,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v10; // x21
  struct BattleData_o *data; // x8

  if ( (byte_4B194C5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_10134/*"OpenResult"*/, target, endEvent);
    sub_1BCA7E0(&StringLiteral_10734/*"Performance"*/, v7, v8);
    byte_4B194C5 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10734/*"Performance"*/,
                            0LL);
  if ( !perf )
    goto LABEL_15;
  v10 = (HutongGames_PlayMaker_FsmGameObject_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)perf, 0LL);
  if ( !v10 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v10, (UnityEngine_GameObject_o *)fsm, 0LL);
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
    sub_1BCAA3C(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10134/*"OpenResult"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenDataLostBattleResetDialog_b__68_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  TerminalPramsManager_c *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  MissionNotifyManager_o *Instance; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x0

  if ( (byte_4B194E6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, v6, v7);
    byte_4B194E6 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_4B12DCC )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B12DCC = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_4B13539 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    byte_4B13539 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !byte_4B13806 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v13, v14);
    byte_4B13806 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
    v15 = TerminalPramsManager_TypeInfo;
  }
  v15->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  Instance = (MissionNotifyManager_o *)this->fields.fsm;
  if ( !Instance )
LABEL_20:
    sub_1BCAA3C(Instance, v13);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__60_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B194E5 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_13123/*"StartQuestClearReward"*/, method, v2);
    byte_4B194E5 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13123/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__45_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B194E4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B194E4 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__checkNew(
        BattleResultComponent_o *this,
        int32_t resultType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x20
  BattleResultItemComponent_o *itemResult; // x0
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  const MethodInfo *v29; // x0
  int64_t *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  BattleDropItem_o *NewDrop; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v45; // w0
  Il2CppObject *Instance; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Action_o *v50; // x22
  __int64 *v51; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  __int64 v54; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7

  if ( (byte_4B194D5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&resultType, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v10, v11);
    sub_1BCA7E0(&Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__, v12, v13);
    sub_1BCA7E0(&BattleResultComponent___c__DisplayClass53_0_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_9754/*"OPEN"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, v18, v19);
    byte_4B194D5 = 1;
  }
  v20 = sub_1BCAA2C(BattleResultComponent___c__DisplayClass53_0_TypeInfo, *(_QWORD *)&resultType, method, v3);
  BattleResultComponent___c__DisplayClass53_0___ctor((BattleResultComponent___c__DisplayClass53_0_o *)v20, 0LL);
  if ( !v20 )
    goto LABEL_33;
  *(_QWORD *)(v20 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)this, v23, v24, v25, v26, v27, v28);
  BattleResultComponent__ResetTimeScale(v29);
  *(_QWORD *)(v20 + 16) = 0LL;
  v30 = (int64_t *)(v20 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), 0LL, v31, v32, v33, v34, v35, v36);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_33;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, 0LL);
      goto LABEL_16;
    case 2:
      itemResult = (BattleResultItemComponent_o *)this->fields.eventItemResult;
      if ( !itemResult )
        goto LABEL_33;
      goto LABEL_15;
    case 3:
      itemResult = (BattleResultItemComponent_o *)this->fields.eventDamageItemResult;
      if ( !itemResult )
        goto LABEL_33;
      goto LABEL_15;
    case 4:
      eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
      v45 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v22 = 0LL;
      if ( !v45 )
        goto LABEL_17;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_33;
LABEL_15:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, 0LL);
LABEL_16:
      v22 = (int64_t)NewDrop;
LABEL_17:
      *v30 = v22;
      sub_1BCA784((PartyOrganizationUtility_o *)(v20 + 16), v22, v38, v39, v40, v41, v42, v43);
LABEL_18:
      if ( !*v30 )
      {
        p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
        ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
        if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
        {
          itemResult = (BattleResultItemComponent_o *)*p_ServantRewardActionComp;
          if ( !*p_ServantRewardActionComp )
            goto LABEL_33;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)itemResult,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
          UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
            0LL,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_33;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v51 = &StringLiteral_9370/*"NEXT"*/;
          goto LABEL_32;
        }
LABEL_33:
        sub_1BCAA3C(itemResult, v22);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v50 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v47, v48, v49);
      System_Action___ctor(
        v50,
        (Il2CppObject *)v20,
        Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_33;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v50, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_33;
      v51 = &StringLiteral_9754/*"OPEN"*/;
LABEL_32:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v51, 0LL);
      return;
    default:
      goto LABEL_18;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B194C6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12385/*"START_Begin"*/, method, v2);
    byte_4B194C6 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12385/*"START_Begin"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B194CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, method);
    byte_4B194CB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4B194D6 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_5565/*"END_PROC"*/, method, v2);
    byte_4B194D6 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1BCAA3C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5565/*"END_PROC"*/, 0LL);
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
  __int64 v8; // x2
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x23
  __int64 v11; // x1
  UnityEngine_Component_o *transform; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *gameObject; // x23
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B194D9 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, userCommandCodeId, action);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7, v8);
    byte_4B194D9 = 1;
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCommandCodeId);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_14;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v15, v16, v17, v18, v19, v20);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0LL),
        *p_ServantRewardActionComp = Prefab,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
          (int64_t)Prefab,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_35299020(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_14:
    sub_1BCAA3C(transform, v11);
  }
  ServantRewardAction__Play((ServantRewardAction_o *)transform, action, 0.0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__openNewServantView(
        BattleResultComponent_o *this,
        int64_t userSvtId,
        bool isNew,
        bool isDoEffect,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  Il2CppObject *Entity; // x0
  __int64 v26; // x1
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  Il2CppObject *v29; // x23
  __int64 v30; // x1
  UnityEngine_Object_o *gameObject; // x25
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  Il2CppObject *v38; // x25
  ServantRewardAction_o *Prefab; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  ServantRewardAction_o *v46; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  __int64 v49; // x1
  int32_t v50; // w25
  Il2CppObject v51; // q1
  int64_t v52; // x22
  Il2CppObject v53; // q1
  int64_t v54; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4B194D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, isNew);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v21, v22);
    byte_4B194D8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v29 = Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_27;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
    UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp, 0LL, v32, v33, v34, v35, v36, v37);
  }
  v38 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v38 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v38,
             (UnityEngine_Transform_o *)Instance,
             1,
             0LL);
  *p_ServantRewardActionComp = Prefab;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
    (int64_t)Prefab,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !v29 )
    goto LABEL_27;
  v46 = *p_ServantRewardActionComp;
  klass = v29[5].klass;
  monitor = v29[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
  *(_QWORD *)&v58.fields.currentCryptoKey = klass;
  *(_QWORD *)&v58.fields.fakeValue = monitor;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v58, 0LL);
  if ( isDoEffect )
  {
    v51 = v29[2];
    *(Il2CppObject *)&v57.fields.currentCryptoKey = v29[1];
    *(Il2CppObject *)&v57.fields.fakeValue = v51;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v49);
    v56 = v57;
    v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v56, 0LL);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v29[6],
                                  0LL);
    if ( v46 )
    {
      ServantRewardAction__Setup(v46, v50, v52, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_25;
    }
LABEL_27:
    sub_1BCAA3C(Instance, v24);
  }
  v53 = v29[2];
  *(Il2CppObject *)&v57.fields.currentCryptoKey = v29[1];
  *(Il2CppObject *)&v57.fields.fakeValue = v53;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v49);
  v55 = v57;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v55, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v29[6],
                                0LL);
  if ( !v46 )
    goto LABEL_27;
  ServantRewardAction__Setup(v46, v50, v54, (int32_t)Instance, 1, 1, 1, 2, 0LL);
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
    sub_1BCAA3C(0LL, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1BCAA3C(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1BCAA3C(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_fronttouch, flg, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__showServantRewardAction(
        BattleResultComponent_o *this,
        int64_t userSvtId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  bool v17; // w21
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_o *v21; // x22
  const MethodInfo *v22; // x5
  __int64 v23; // x1
  UnityEngine_Component_o *Instance; // x0
  __int64 *v25; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  __int64 v28; // x1
  UnityEngine_Object_o *gameObject; // x21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4B194D7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, userSvtId, *(_QWORD *)&type);
    sub_1BCA7E0(&Method_BattleResultComponent_endNewView__, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12);
    sub_1BCA7E0(&StringLiteral_9754/*"OPEN"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_9370/*"NEXT"*/, v15, v16);
    byte_4B194D7 = 1;
  }
  if ( userSvtId < 1 )
  {
    p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
    ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userSvtId);
    if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
    {
      Instance = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
      if ( !*p_ServantRewardActionComp )
        goto LABEL_17;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      UnityEngine_Object__DestroyImmediate_70154432(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.ServantRewardActionComp,
        0LL,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v25 = &StringLiteral_9370/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1BCAA3C(Instance, v23);
  }
  v17 = Gift__IsEventSvtGet(type, 0LL);
  v21 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v18, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v17, v17, v21, v22);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v25 = &StringLiteral_9754/*"OPEN"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v25, 0LL);
}


void __fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__42___ctor(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__42__MoveNext(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4B194EA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__get_Count__, method, v2);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v5, v6);
    byte_4B194EA = 1;
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
      sub_1BCAA3C(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3);
    UnityEngine_WaitForSeconds___ctor(v8, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v8, v9, v10, v11, v12, v13, v14);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleResultComponent__StartAddRewardAnimationCoroutine_d__42__System_Collections_IEnumerator_Reset(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__42__System_Collections_IEnumerator_get_Current(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleResultComponent__StartAddRewardAnimationCoroutine_d__42__System_IDisposable_Dispose(
        BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleResultComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B194E7 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleResultComponent___c_TypeInfo, v1, v2);
    byte_4B194E7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleResultComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleResultComponent___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleResultComponent___c___ctor(BattleResultComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleResultComponent___c___Set_b__34_0(
        BattleResultComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


System_String_o *__fastcall BattleResultComponent___c___Set_b__34_1(
        BattleResultComponent___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  return System_Int32__ToString((int32_t)&v4, 0LL);
}


void __fastcall BattleResultComponent___c___StartQuestClearReward_b__61_0(
        BattleResultComponent___c_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TerminalPramsManager_c *v8; // x0
  PartyOrganizationUtility_o *p_mQuestRewardInfos; // x0

  if ( (byte_4B194E8 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, method, v2);
    byte_4B194E8 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v8 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (PartyOrganizationUtility_o *)&v8->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1BCA784(p_mQuestRewardInfos, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattleResultComponent___c__DisplayClass53_0___ctor(
        BattleResultComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleResultComponent___c__DisplayClass53_0___checkNew_b__0(
        BattleResultComponent___c__DisplayClass53_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultComponent___c__DisplayClass53_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct BattleDropItem_o *newDrop; // x8
  __int64 v7; // x2
  __int64 v8; // x3
  struct BattleDropItem_o *v9; // x8
  int64_t userSvtId; // x20
  Il2CppObject *_4__this; // x19
  System_Action_o *v12; // x21
  struct BattleDropItem_o *v13; // x8
  __int64 v14; // x2
  __int64 v15; // x3
  struct BattleDropItem_o *v16; // x8
  int64_t v17; // x21
  Il2CppObject *v18; // x19
  char v19; // w20
  System_Action_o *v20; // x22

  v3 = this;
  if ( (byte_4B194E9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    this = (BattleResultComponent___c__DisplayClass53_0_o *)sub_1BCA7E0(
                                                              &Method_BattleResultComponent_endNewView__,
                                                              v4,
                                                              v5);
    byte_4B194E9 = 1;
  }
  newDrop = v3->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsCommandCode_38401920(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v3->fields.newDrop;
    if ( v9 )
    {
      userSvtId = v9->fields.userSvtId;
      _4__this = (Il2CppObject *)v3->fields.__4__this;
      v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v7, v8);
      System_Action___ctor(v12, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v12, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1BCAA3C(this, method);
  }
  v13 = v3->fields.newDrop;
  if ( !v13 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsEventSvtGet_38401576(v13->fields.type, 0LL);
  v16 = v3->fields.newDrop;
  if ( !v16 )
    goto LABEL_12;
  v17 = v16->fields.userSvtId;
  v18 = (Il2CppObject *)v3->fields.__4__this;
  v19 = (char)this;
  v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v14, v15);
  System_Action___ctor(v20, v18, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v18 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v18, v17, v19 & 1, v19 & 1, v20, 0LL);
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
      sub_1BCAA44(this, method);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1BCAA3C(this, method);
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