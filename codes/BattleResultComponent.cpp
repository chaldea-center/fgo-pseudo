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

  if ( (byte_49FF4FE & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3558/*"CLOSE"*/, method);
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, v3);
    byte_49FF4FE = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
    sub_1B64324(eventItemResult);
  }
  v6 = &StringLiteral_9197/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v6 = &StringLiteral_3558/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49FF4FB & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF4FB = 1;
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
    sub_1B64324(touchGuard);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x0
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  v2 = this;
  if ( (byte_49FF505 & 1) == 0 )
  {
    sub_1B640C8(&AndroidBackKeyManager_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_1B640C8(&StringLiteral_23004/*"sendFsmEvent"*/, v6);
    this = (BattleResultComponent_o *)sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v7);
    byte_49FF505 = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  ServantAssetLoadManager__EndRetryTransition((ServantAssetLoadManager_o *)Instance, 0LL);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)v2->fields.battleRetryConfirmComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0LL, 0LL) )
  {
    Instance = (Il2CppObject *)v2->fields.battleRetryConfirmComponent;
    if ( !Instance )
      goto LABEL_13;
    BattleRetryConfirmComponent__Close((BattleRetryConfirmComponent_o *)Instance, 0LL);
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  Instance = (Il2CppObject *)v2->fields.endtargetObject;
  if ( !Instance )
LABEL_13:
    sub_1B64324(Instance);
  UnityEngine_GameObject__SendMessage_69109108(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23004/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5463/*"END_PROC"*/,
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
  const MethodInfo *v7; // x2
  PlayMakerFSM_o *fsm; // x0

  v6 = this;
  if ( (byte_49FF508 & 1) == 0 )
  {
    this = (BattleResultComponent_o *)sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, isDecide);
    byte_49FF508 = 1;
  }
  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  if ( isDecide )
  {
    BattleResultComponent__OpenFollowerSceneForRetry(v6, boostId, v7);
  }
  else
  {
    fsm = v6->fields.fsm;
    if ( !fsm )
      sub_1B64324(0LL);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
  }
}


void __fastcall BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *v8; // x21
  const MethodInfo *v9; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FF4EF & 1) == 0 )
  {
    sub_1B640C8(
      &Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___,
      releasePerformanceObject);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF4EF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v8 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_49F7111 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v7);
    byte_49F7111 = 1;
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
  BattleResultBondsComponent__Init((BattleResultBondsComponent_o *)gameObject, v9);
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
    v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(v14, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v15, v16);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p_screenTouch, (int32_t)Component_object, v19, v20),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 11)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_36:
    sub_1B64324(gameObject);
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
  PlayMakerFSM_o *UserId; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v14; // w20
  Il2CppObject *v15; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FF50D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_12099/*"SKIP"*/, v7);
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, v8);
    byte_49FF50D = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    byte_49F9048 = 1;
  }
  UserId = (PlayMakerFSM_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
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
  v14 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (PlayMakerFSM_o *)NetworkManager__get_UserId(0LL);
  if ( !v15 )
LABEL_26:
    sub_1B64324(UserId);
  if ( UserEventDataLostMaster__TryGetEntity((UserEventDataLostMaster_o *)v15, &entity, (int64_t)UserId, v14, 0LL) )
  {
    UserId = (PlayMakerFSM_o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0LL) )
    {
      UserId = this->fields.fsm;
      if ( !UserId )
        goto LABEL_26;
      PlayMakerFSM__SendEvent(UserId, (System_String_o *)StringLiteral_9197/*"NEXT"*/, 0LL);
    }
  }
LABEL_24:
  UserId = this->fields.fsm;
  if ( !UserId )
    goto LABEL_26;
  PlayMakerFSM__SendEvent(UserId, (System_String_o *)StringLiteral_12099/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenBonds(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  const MethodInfo *v4; // x1

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL), (obj_fronttouch = this->fields.obj_basebg) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL),
        (obj_fronttouch = (UnityEngine_GameObject_o *)this->fields.bondsResult) == 0LL) )
  {
    sub_1B64324(obj_fronttouch);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, v4);
}


void __fastcall BattleResultComponent__OpenDataLostBattleResetDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppClass *klass; // x8
  int32_t name_high; // w20
  TerminalPramsManager_c *v9; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v11; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_49FF50E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, v4);
    sub_1B640C8(&DataLostResetManager_TypeInfo, v5);
    this = (BattleResultComponent_o *)sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49FF50E = 1;
  }
  klass = v3[10].klass;
  if ( !klass )
    sub_1B64324(this);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9048 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v9->static_fields->_WarId_k__BackingField;
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v11, v3, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, 0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v11, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0

  if ( (byte_49FF4FF & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&StringLiteral_12099/*"SKIP"*/, v3);
    byte_49FF4FF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, 0LL) )
    {
      Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, 0LL);
        return;
      }
LABEL_19:
      sub_1B64324(Instance);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12099/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_49FF50C & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B640C8(&StringLiteral_12099/*"SKIP"*/, v4);
    byte_49FF50C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B64324(Instance);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12099/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_49FF4FD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B640C8(&StringLiteral_12099/*"SKIP"*/, v3);
    byte_49FF4FD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B64324(Instance);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12099/*"SKIP"*/, 0LL);
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
    sub_1B64324(obj_fronttouch);
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
  __int64 v16; // x1
  __int64 v17; // x2
  MapControl_QuestInfo_o *v18; // x20
  int32_t questId; // w23
  __int64 v20; // x1
  bool IsQuestClear_37285996; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v24; // w22
  __int64 v25; // x1
  Il2CppObject *v26; // x21
  TerminalPramsManager_c *v27; // x0
  const MethodInfo *v28; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_49FF509 & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&boostId);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1B640C8(&MapControl_QuestInfo_TypeInfo, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49FF509 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v12);
    byte_49F9045 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_30D3EA4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v18 = (MapControl_QuestInfo_o *)sub_1B64314(MapControl_QuestInfo_TypeInfo, v16, v17);
  MapControl_QuestInfo___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v18, 0LL);
  questId = v18->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37285996 = CondType__IsQuestClear_37285996(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v20);
    byte_49F9050 = 1;
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
                            *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                            !IsQuestClear_37285996,
                            &fixedVal,
                            0LL);
  v18->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0LL);
  v18->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v24 = fixedVal;
  else
    v24 = ActConsume;
  v26 = SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F925C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v25);
    byte_49F925C = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v26 )
    goto LABEL_36;
  if ( !clsQuestCheck__CheckQuestPlayable(
          (clsQuestCheck_o *)v26,
          v18,
          *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 128LL),
          boostId,
          0LL) )
    return;
  v27 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  v27->static_fields->lastPlayQuestConsumeAp = v24;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1B64324(Instance);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v28);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleResultComponent_resultData_o *battleResult; // x8
  const MethodInfo *v6; // x0

  v2 = this;
  if ( (byte_49FF4FC & 1) == 0 )
  {
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    this = (BattleResultComponent_o *)sub_1B640C8(&StringLiteral_12899/*"StartQuestClearReward"*/, v4);
    byte_49FF4FC = 1;
  }
  battleResult = v2->fields.battleResult;
  if ( !battleResult )
    goto LABEL_12;
  if ( (battleResult->fields.resultDispFlag & 0x800) != 0 )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_12899/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  this = (BattleResultComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)this, 0LL),
        (this = (BattleResultComponent_o *)v2->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL),
        (this = (BattleResultComponent_o *)v2->fields.friendResult) == 0LL) )
  {
LABEL_12:
    sub_1B64324(this);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)this, 0LL);
  BattleResultComponent__ResetTimeScale(v6);
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
  __int64 v10; // x1
  __int64 v11; // x2
  NotificationDialog_ClickDelegate_o *v12; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_49FF4F5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultComponent_endCloseEndEventMessage__, method);
    sub_1B640C8(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FF4F5 = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v9 = (CommonUI_o *)Instance;
    v12 = (NotificationDialog_ClickDelegate_o *)sub_1B64314(NotificationDialog_ClickDelegate_TypeInfo, v10, v11);
    NotificationDialog_ClickDelegate___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v9 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_30347532(
      v9,
      v7,
      eventEndMessage,
      v12,
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
    sub_1B64324(resultSprite);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, 0LL);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  BattleRetryConfirmComponent_o *v9; // x20
  BattleWindowComponent_EndCall_o *v10; // x21
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_49FF506 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleResultComponent__OpenRetryQuest_b__60_0__, method);
    sub_1B640C8(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FF506 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_15;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v9 = this->fields.battleRetryConfirmComponent;
    v10 = (BattleWindowComponent_EndCall_o *)sub_1B64314(BattleWindowComponent_EndCall_TypeInfo, v7, v8);
    BattleWindowComponent_EndCall___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultComponent__OpenRetryQuest_b__60_0__,
      0LL);
    if ( !v9 )
      goto LABEL_15;
    BattleRetryConfirmComponent__Open(v9, v10, 0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
LABEL_15:
    sub_1B64324(battleRetryConfirmComponent);
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
    goto LABEL_15;
  }
}


void __fastcall BattleResultComponent__OpenTutorial(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleEventTutorial_o *eventTutorial; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BattleEventTutorial_o *v8; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  struct BattleResultComponent_resultData_o *battleResult; // x8
  BattleEventTutorial_o *v13; // x20
  System_Action_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  struct BattleResultComponent_resultData_o *v17; // x8
  BattleEventTutorial_o *v18; // x20
  System_Action_o *v19; // x21

  if ( (byte_49FF4F4 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleResultComponent_OpenTutorial__, v3);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v4);
    byte_49FF4F4 = 1;
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
  v8 = this->fields.eventTutorial;
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v8 )
    {
      BattleEventTutorial__callResult(v8, v9, 0LL);
      return;
    }
LABEL_23:
    sub_1B64324(eventTutorial);
  }
  if ( !v8 )
    goto LABEL_23;
  eventTutorial = (BattleEventTutorial_o *)BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0LL);
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    battleResult = this->fields.battleResult;
    if ( !battleResult )
      goto LABEL_23;
    if ( battleResult->fields.battleResult == 1 )
    {
      v13 = this->fields.eventTutorial;
      v14 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
      if ( !v13 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v13, v14, 0LL);
      return;
    }
  }
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  eventTutorial = (BattleEventTutorial_o *)BattleEventTutorial__isResultLose(eventTutorial, 0LL);
  if ( ((unsigned __int8)eventTutorial & 1) == 0 )
    goto LABEL_19;
  v17 = this->fields.battleResult;
  if ( !v17 )
    goto LABEL_23;
  if ( v17->fields.battleResult != 1 )
  {
    v18 = this->fields.eventTutorial;
    v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( !v18 )
      goto LABEL_23;
    BattleEventTutorial__callResultLose(v18, v19, 0LL);
  }
  else
  {
LABEL_19:
    eventTutorial = (BattleEventTutorial_o *)this->fields.fsm;
    if ( !eventTutorial )
      goto LABEL_23;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
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
  const MethodInfo *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  TerminalPramsManager_c *v11; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v15; // x23
  Il2CppObject *Instance; // x0
  Il2CppObject *v17; // x20

  if ( (byte_49FF50A & 1) == 0 )
  {
    sub_1B640C8(&BattleSetupInfo_TypeInfo, *(_QWORD *)&boostId);
    sub_1B640C8(&RandomLimitCountManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B640C8(&SoundManager_TypeInfo, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    byte_49FF50A = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  BattleResultComponent__ResetTimeScale(v8);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.8, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9048 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    byte_49F9048 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v11->static_fields->_WarId_k__BackingField;
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9045 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_49F9050 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
    byte_49F9050 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v11->static_fields->_PhaseCnt_k__BackingField;
  v15 = (BattleSetupInfo_o *)sub_1B64314(BattleSetupInfo_TypeInfo, v9, v10);
  BattleSetupInfo___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_27;
  Instance = (Il2CppObject *)BattleSetupInfo__ConvertBattleSetupInfo(
                               v15,
                               WarId_k__BackingField,
                               QuestId_k__BackingField,
                               PhaseCnt_k__BackingField,
                               0,
                               0,
                               0,
                               0LL);
  v17 = Instance;
  if ( boostId )
  {
    if ( !Instance )
      goto LABEL_27;
    LODWORD(Instance[3].monitor) = boostId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1B64324(Instance);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v17, 0LL);
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
    sub_1B64324(this);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  ScreenTouchInformationComponent_o *v4; // x0

  if ( (byte_49FF4F2 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF4F2 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v4 = this->fields.screenTouch;
    if ( !v4 || (ScreenTouchInformationComponent__ResetPlayScale(v4, 0LL), (v4 = this->fields.screenTouch) == 0LL) )
      sub_1B64324(v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v4, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF50B & 1) == 0 )
  {
    sub_1B640C8(&BattlePerformance_TypeInfo, v1);
    byte_49FF50B = 1;
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
  int32_t v18; // w2
  int32_t v19; // w3
  System_Object_array *v20; // x20
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  Il2CppObject *v48; // x21
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x21
  System_Collections_Hashtable_o *v54; // x0
  __int64 v55; // x0
  int v56; // [xsp+Ch] [xbp-44h] BYREF
  int v57; // [xsp+10h] [xbp-40h] BYREF
  int v58; // [xsp+14h] [xbp-3Ch] BYREF
  int v59; // [xsp+18h] [xbp-38h] BYREF
  int v60; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_49FF4F8 & 1) == 0 )
  {
    sub_1B640C8(&iTween_EaseType_TypeInfo, method);
    sub_1B640C8(&object___TypeInfo, v3);
    sub_1B640C8(&float_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_19577/*"from"*/, v5);
    sub_1B640C8(&StringLiteral_12489/*"ScrollBarMotionCompleteValue"*/, v6);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v7);
    sub_1B640C8(&StringLiteral_22193/*"onupdate"*/, v8);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v9);
    sub_1B640C8(&StringLiteral_12490/*"ScrollBarMotionUpdateValue"*/, v10);
    sub_1B640C8(&StringLiteral_23870/*"to"*/, v11);
    sub_1B640C8(&StringLiteral_18681/*"easeType"*/, v12);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v13);
    sub_1B640C8(&iTween_TypeInfo, v14);
    byte_49FF4F8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60023324(gameObject, 0LL);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_1B64170(object___TypeInfo, 14LL);
  if ( !v17 )
    sub_1B64324(0LL);
  v20 = (System_Object_array *)v17;
  v21 = StringLiteral_19577/*"from"*/;
  if ( StringLiteral_19577/*"from"*/ )
  {
    v21 = sub_1B64204(StringLiteral_19577/*"from"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_19577/*"from"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v20->max_length )
    goto LABEL_67;
  v20->m_Items[0] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v20->m_Items, v22, v18, v19);
  v60 = 0;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v60);
  v25 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
  }
  if ( v20->max_length <= 1 )
    goto LABEL_67;
  v20->m_Items[1] = v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[1], (int32_t)v25, v23, v24);
  v21 = StringLiteral_23870/*"to"*/;
  if ( StringLiteral_23870/*"to"*/ )
  {
    v21 = sub_1B64204(StringLiteral_23870/*"to"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_23870/*"to"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 2 )
    goto LABEL_67;
  v20->m_Items[2] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[2], v22, v26, v27);
  v59 = 1065353216;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v59);
  v30 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
  }
  if ( v20->max_length <= 3 )
    goto LABEL_67;
  v20->m_Items[3] = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[3], (int32_t)v30, v28, v29);
  v21 = StringLiteral_22193/*"onupdate"*/;
  if ( StringLiteral_22193/*"onupdate"*/ )
  {
    v21 = sub_1B64204(StringLiteral_22193/*"onupdate"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_22193/*"onupdate"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 4 )
    goto LABEL_67;
  v20->m_Items[4] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[4], v22, v31, v32);
  v21 = StringLiteral_12490/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12490/*"ScrollBarMotionUpdateValue"*/ )
  {
    v21 = sub_1B64204(StringLiteral_12490/*"ScrollBarMotionUpdateValue"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_12490/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 5 )
    goto LABEL_67;
  v20->m_Items[5] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[5], v22, v33, v34);
  v21 = StringLiteral_22185/*"oncomplete"*/;
  if ( StringLiteral_22185/*"oncomplete"*/ )
  {
    v21 = sub_1B64204(StringLiteral_22185/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_22185/*"oncomplete"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 6 )
    goto LABEL_67;
  v20->m_Items[6] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[6], v22, v35, v36);
  v21 = StringLiteral_12489/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12489/*"ScrollBarMotionCompleteValue"*/ )
  {
    v21 = sub_1B64204(StringLiteral_12489/*"ScrollBarMotionCompleteValue"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_12489/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 7 )
    goto LABEL_67;
  v20->m_Items[7] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[7], v22, v37, v38);
  v21 = StringLiteral_18681/*"easeType"*/;
  if ( StringLiteral_18681/*"easeType"*/ )
  {
    v21 = sub_1B64204(StringLiteral_18681/*"easeType"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_18681/*"easeType"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 8 )
    goto LABEL_67;
  v20->m_Items[8] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[8], v22, v39, v40);
  v58 = 17;
  v21 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v58);
  v43 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
  }
  if ( v20->max_length <= 9 )
    goto LABEL_67;
  v20->m_Items[9] = v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[9], (int32_t)v43, v41, v42);
  v21 = StringLiteral_23830/*"time"*/;
  if ( StringLiteral_23830/*"time"*/ )
  {
    v21 = sub_1B64204(StringLiteral_23830/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_23830/*"time"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 0xA )
    goto LABEL_67;
  v20->m_Items[10] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[10], v22, v44, v45);
  v57 = 1065353216;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v57);
  v48 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
  }
  if ( v20->max_length <= 0xB )
    goto LABEL_67;
  v20->m_Items[11] = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[11], (int32_t)v48, v46, v47);
  v21 = StringLiteral_18479/*"delay"*/;
  if ( StringLiteral_18479/*"delay"*/ )
  {
    v21 = sub_1B64204(StringLiteral_18479/*"delay"*/, v20->obj.klass->_1.element_class);
    if ( !v21 )
      goto LABEL_68;
    v22 = StringLiteral_18479/*"delay"*/;
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20->max_length <= 0xC )
    goto LABEL_67;
  v20->m_Items[12] = (Il2CppObject *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[12], v22, v49, v50);
  v56 = 0;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v56);
  v53 = (Il2CppObject *)v21;
  if ( v21 )
  {
    v21 = sub_1B64204(v21, v20->obj.klass->_1.element_class);
    if ( !v21 )
    {
LABEL_68:
      v55 = sub_1B64348(v21);
      sub_1B641F0(v55, 0LL);
    }
  }
  if ( v20->max_length <= 0xD )
LABEL_67:
    sub_1B6432C(v21, v22);
  v20->m_Items[13] = v53;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v20->m_Items[13], (int32_t)v53, v51, v52);
  v54 = iTween__Hash(v20, 0LL);
  iTween__ValueTo(v16, v54, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionCompleteValue(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  BattleResultItemComponent_o *itemResult; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  System_Action_o *v9; // x21

  v3 = this;
  if ( (byte_49FF4FA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__, v4);
    this = (BattleResultComponent_o *)sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    byte_49FF4FA = 1;
  }
  itemResult = v3->fields.itemResult;
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
    this = (BattleResultComponent_o *)v3->fields.resultItemScrollBar;
    if ( !this )
      goto LABEL_11;
    UIProgressBar__set_value((UIProgressBar_o *)this, 1.0, 0LL);
    itemResult = v3->fields.itemResult;
  }
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(
    v9,
    (Il2CppObject *)v3,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_1B64324(this);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v9, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_49FF4F9 & 1) == 0 )
  {
    sub_1B640C8(&iTween_TypeInfo, method);
    byte_49FF4F9 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1B64324(0LL);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60023324(gameObject, 0LL);
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
  BattleResultComponent_o *v11; // x22
  __int64 v12; // x1
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
  BattleResultComponent_resultData_o *v33; // x1
  BattleResultComponent_o **p_battleResult; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x1
  TerminalPramsManager_c *v38; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  __int64 v40; // x1
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v42; // x0
  int32_t v43; // w19
  BalanceConfig_c *v44; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v46; // x0
  BattleResultComponent_o *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FriendIconPrefab; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  BattleResultComponent___c_c *v51; // x8
  BattleResultComponent_o *v52; // x26
  System_Converter_TInput__TOutput__o *_9__34_0; // x19
  Il2CppObject *v54; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_array *v58; // x0
  System_String_o *v59; // x0
  System_Collections_Generic_IEnumerable_TSource__o *resultSprite; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  BattleResultComponent___c_c *v63; // x8
  BattleResultComponent_o *v64; // x26
  System_Converter_TInput__TOutput__o *_9__34_1; // x19
  Il2CppObject *v66; // x23
  struct BattleResultComponent___c_StaticFields *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_array *v70; // x0
  System_String_o *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  struct System_String_o *m_CancellationTokenSource; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  struct BattleResultComponent_resultData_o *v77; // x8
  BattleData_o *v78; // x28
  struct System_String_o *eventEndMessage; // x1
  __int64 v80; // x1
  __int64 v81; // x2
  struct BattleResultComponent_resultData_o *v82; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v84; // x26
  int32_t v85; // w2
  int32_t v86; // w3
  BattleResultComponent_resultData_o *battleResult; // x8
  BattleResultComponent_o *v88; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x9
  Il2CppObject *Master_object; // x19
  int32_t v91; // w23
  int32_t QuestId; // w24
  const MethodInfo *v93; // x7
  bool v94; // w27
  BattleResultComponent_resultData_o *v95; // x19
  struct BattleInfoData_o *battle_info; // x8
  BattleResultBondsComponent_o *v97; // x23
  UserServantCollectionEntity_array *oldUserSvtCollection; // x28
  DeckData_o *myDeck; // x24
  int32_t followerType; // w29
  BattleUserServantData_array *userSvt; // x25
  UserServantCollectionEntity_array *v102; // x2
  BattleResultComponent_o *v103; // x8
  struct BattleResultEventItemComponent_o *eventItemResult; // x9
  struct System_Threading_CancellationTokenSource_o *v105; // x11
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v107; // x12
  struct BattleResultEventItemComponent_o *v108; // x9
  struct System_Threading_CancellationTokenSource_o *v109; // x10
  UserGameEntity_o *parentComp; // x29
  BattleResultItemComponent_o *v111; // x25
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  int64_t expResult; // x20
  int32_t eventItemResult_high; // w19
  DropUpInfo_array *dropupinfos; // x23
  EventConquestInfo_array *v117; // x24
  int32_t firstClearRewardQp; // w26
  struct BattleResultItemComponent_o *v119; // x9
  struct UILabel_o *getQpLabel; // x9
  struct ScreenTouchInformationComponent_o *mText; // x1
  int32_t v122; // w2
  int32_t v123; // w3
  struct BattleResultItemComponent_o *v124; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v126; // x9
  struct System_String_o *v127; // x1
  struct BattleResultEventFortificationItemComponent_o *eventFortificationItemResult; // x8
  Il2CppObject *v129; // x0
  struct BattleResultItemComponent_o *v130; // x8
  Il2CppObject *v131; // x23
  UILabel_o *v132; // x19
  System_String_o *v133; // x0
  struct BattleResultItemComponent_o *v134; // x8
  struct BattleResultEventFortificationItemComponent_o *v135; // x9
  UILabel_o *v136; // x19
  Il2CppObject *v137; // x0
  BattleResultFriendComponent_o *v138; // x19
  int32_t obj_basebg; // w23
  int32_t obj_basebg_high; // w24
  int64_t v141; // x25
  int32_t obj_fronttouch; // w26
  int32_t obj_fronttouch_high; // w27
  struct BattleResultComponent_resultData_o *v144; // x8
  struct BattleResultComponent_resultData_o *v145; // x8
  UnityEngine_Object_o *v146; // x19
  struct BattleResultComponent_resultData_o *v147; // x8
  struct BattleResultComponent_resultData_o *v148; // x8
  BattleResultComponent_o *v149; // x8
  int v150; // w9
  int v151; // w10
  unsigned int v152; // w10
  unsigned int v153; // w9
  struct BattleInfoData_o *v154; // x9
  struct DeckData_o *v155; // x9
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w9
  __int64 v158; // x20
  char v159; // w22
  BattleResultComponent_o *v160; // x19
  int32_t v161; // w23
  int v162; // w8
  TerminalPramsManager_c *v163; // x0
  BattleResultComponent_o *v164; // x8
  unsigned int v165; // w9
  _QWORD *monitor; // x10
  BattleResultComponent_o *v167; // x8
  int v168; // w9
  unsigned int v169; // w9
  int v170; // w19
  const MethodInfo *boostRate; // [xsp+10h] [xbp-F0h]
  UserEventPointEntity_array *v172; // [xsp+50h] [xbp-B0h]
  UserEventEntity_array *friendResult; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  System_Int32_array *v175; // [xsp+68h] [xbp-98h]
  AssetData_o *resultAssetb; // [xsp+70h] [xbp-90h]
  BattleResultComponent_resultData_array *result; // [xsp+78h] [xbp-88h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+80h] [xbp-80h]
  BattleData_o *battleData; // [xsp+88h] [xbp-78h]
  int myFsm_high; // [xsp+90h] [xbp-70h] BYREF
  int v182; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v184; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = this;
  if ( (byte_49FF4F3 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, resultList);
    sub_1B640C8(&System_Converter_int__string__TypeInfo, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_EventBuddyPointMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_EventProgressValueMaster___, v14);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int___, v16);
    sub_1B640C8(&EventInfoUIProgressControl_TypeInfo, v17);
    sub_1B640C8(&int_TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v20);
    sub_1B640C8(&LocalizationManager_TypeInfo, v21);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v22);
    sub_1B640C8(&QuestKnockdownResult_TypeInfo, v23);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v24);
    sub_1B640C8(&Method_BattleResultComponent___c__Set_b__34_0__, v25);
    sub_1B640C8(&Method_BattleResultComponent___c__Set_b__34_1__, v26);
    sub_1B640C8(&BattleResultComponent___c_TypeInfo, v27);
    sub_1B640C8(&StringLiteral_19548/*"freeShopIds"*/, v28);
    sub_1B640C8(&StringLiteral_11049/*"RESULT_QP_PLUS"*/, v29);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v30);
    sub_1B640C8(&StringLiteral_22823/*"returnRarePriShopIds"*/, v31);
    this = (BattleResultComponent_o *)sub_1B640C8(&StringLiteral_869/*","*/, v32);
    byte_49FF4F3 = 1;
  }
  entity = 0LL;
  if ( !resultList )
    goto LABEL_198;
  if ( !resultList->max_length )
    goto LABEL_199;
  v33 = resultList->m_Items[0];
  result = resultList;
  v11->fields.battleResult = v33;
  p_battleResult = (BattleResultComponent_o **)&v11->fields.battleResult;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v11->fields.battleResult,
    (int32_t)v33,
    (int32_t)tutorial,
    (int32_t)resultAsset);
  v11->fields.eventTutorial = tutorial;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->fields.eventTutorial, (int32_t)tutorial, v35, v36);
  if ( !v11->fields.battleResult )
    goto LABEL_198;
  if ( v11->fields.battleResult->fields.battleResult == 1 )
  {
    if ( !bData )
      goto LABEL_198;
    this = (BattleResultComponent_o *)BattleData__IsNotResetResultDispFlag(bData, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p_battleResult )
        goto LABEL_198;
      LODWORD((*p_battleResult)[1].fields.itemResult) |= 0x3Fu;
    }
    this = (BattleResultComponent_o *)BattleData__isEventActivityPoint(bData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_49F9ACD )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v37);
        byte_49F9ACD = 1;
      }
      v38 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v38 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v38->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0LL);
      if ( !byte_49F9ABD )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v40);
        byte_49F9ABD = 1;
      }
      v42 = TerminalPramsManager_TypeInfo;
      v43 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v42 = TerminalPramsManager_TypeInfo;
      }
      v42->static_fields->_BeforeEventActivityPoint_k__BackingField = v43;
      v44 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v44 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v44->static_fields->UserEventActivityPointMax;
      if ( !byte_49F9ACD )
      {
        sub_1B640C8(&TerminalPramsManager_TypeInfo, v40);
        byte_49F9ACD = 1;
      }
      v46 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v46 = TerminalPramsManager_TypeInfo;
      }
      if ( v46->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v46->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v46);
        if ( !byte_49F9ABD )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, v40);
          byte_49F9ABD = 1;
        }
        v46 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v46 = TerminalPramsManager_TypeInfo;
        }
        v46->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v46->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v46);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v47 = *p_battleResult;
  v175 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v11->fields.eventTutorial;
  battleData = bData;
  if ( !*p_battleResult )
    goto LABEL_198;
  FriendIconPrefab = (System_Collections_Generic_IEnumerable_TSource__o *)v47[1].fields.FriendIconPrefab;
  if ( FriendIconPrefab )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        FriendIconPrefab,
                                        (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
    v51 = BattleResultComponent___c_TypeInfo;
    v52 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v51 = BattleResultComponent___c_TypeInfo;
    }
    _9__34_0 = (System_Converter_TInput__TOutput__o *)v51->static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51);
        v51 = BattleResultComponent___c_TypeInfo;
      }
      v54 = (Il2CppObject *)v51->static_fields->__9;
      _9__34_0 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_int__string__TypeInfo, v49, v50);
      System_Converter_int__object____ctor(_9__34_0, v54, Method_BattleResultComponent___c__Set_b__34_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = (struct System_Converter_int__string__o *)_9__34_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v56, v57);
    }
    if ( !v52 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v52,
                                        (System_Converter_T__TOutput__o *)_9__34_0,
                                        (const MethodInfo_2D6F084 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_198;
    v58 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    v59 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v58, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19548/*"freeShopIds"*/, v59, 0LL);
    v47 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
  }
  resultSprite = (System_Collections_Generic_IEnumerable_TSource__o *)v47[1].fields.resultSprite;
  if ( resultSprite )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        resultSprite,
                                        (const MethodInfo_2E74DB0 *)Method_System_Linq_Enumerable_ToList_int___);
    v63 = BattleResultComponent___c_TypeInfo;
    v64 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v63 = BattleResultComponent___c_TypeInfo;
    }
    _9__34_1 = (System_Converter_TInput__TOutput__o *)v63->static_fields->__9__34_1;
    if ( !_9__34_1 )
    {
      if ( !v63->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v63);
        v63 = BattleResultComponent___c_TypeInfo;
      }
      v66 = (Il2CppObject *)v63->static_fields->__9;
      _9__34_1 = (System_Converter_TInput__TOutput__o *)sub_1B64314(System_Converter_int__string__TypeInfo, v61, v62);
      System_Converter_int__object____ctor(_9__34_1, v66, Method_BattleResultComponent___c__Set_b__34_1__, 0LL);
      v67 = BattleResultComponent___c_TypeInfo->static_fields;
      v67->__9__34_1 = (struct System_Converter_int__string__o *)_9__34_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v67->__9__34_1, (int32_t)_9__34_1, v68, v69);
    }
    if ( !v64 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v64,
                                        (System_Converter_T__TOutput__o *)_9__34_1,
                                        (const MethodInfo_2D6F084 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_198;
    v70 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
    v71 = System_String__Join((System_String_o *)StringLiteral_869/*","*/, v70, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22823/*"returnRarePriShopIds"*/, v71, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_198;
  m_CancellationTokenSource = (struct System_String_o *)(*p_battleResult)->fields.m_CancellationTokenSource;
  v11->fields.eventEndTitle = m_CancellationTokenSource;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&v11->fields.eventEndTitle,
    (int32_t)m_CancellationTokenSource,
    v72,
    v73);
  v77 = v11->fields.battleResult;
  v78 = bData;
  if ( !v77 )
    goto LABEL_198;
  eventEndMessage = v77->fields.eventEndMessage;
  v11->fields.eventEndMessage = eventEndMessage;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v11->fields.eventEndMessage, (int32_t)eventEndMessage, v75, v76);
  v82 = v11->fields.battleResult;
  if ( !v82 )
    goto LABEL_198;
  isTrialQuestNewRecord = v82->fields.isTrialQuestNewRecord;
  v84 = (QuestKnockdownResult_o *)sub_1B64314(QuestKnockdownResult_TypeInfo, v80, v81);
  QuestKnockdownResult___ctor(v84, isTrialQuestNewRecord, bData, 0LL);
  if ( !bData )
    goto LABEL_198;
  this = (BattleResultComponent_o *)bData->fields.battle_info;
  if ( !this )
    goto LABEL_198;
  this = (BattleResultComponent_o *)BattleInfoData__IsWaveMyDecks((BattleInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    battleResult = v11->fields.battleResult;
    if ( !battleResult )
      goto LABEL_198;
    this = (BattleResultComponent_o *)v11->fields.bondsResult;
    if ( !this )
      goto LABEL_198;
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
    v88 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
    bondsResult = v88->fields.bondsResult;
    if ( bondsResult && *(_QWORD *)&bondsResult->fields.m_CachedPtr )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v91 = BattleData__get_eventId(bData, 0LL);
      QuestId = BattleData__getQuestId(bData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(bData, 0LL);
      if ( !Master_object )
        goto LABEL_198;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v91,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_198;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v94 = (unsigned __int8)this & 1;
      }
      else
      {
        v94 = 0;
      }
      v95 = v11->fields.battleResult;
      if ( !v95 )
        goto LABEL_198;
      battle_info = bData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_198;
      v97 = v11->fields.bondsResult;
      if ( !v97 )
        goto LABEL_198;
      oldUserSvtCollection = v95->fields.oldUserSvtCollection;
      myDeck = v95->fields.myDeck;
      followerType = v95->fields.followerType;
      userSvt = battle_info->fields.userSvt;
      BattleResultBondsComponent__InitResultData(
        v11->fields.bondsResult,
        oldUserSvtCollection,
        v95->fields.friendshipRewardInfos,
        resultAsset,
        v95->fields.friendshipExpBase,
        v95->fields.getJoinSvts,
        0,
        v93);
      v102 = oldUserSvtCollection;
      v78 = battleData;
      BattleResultBondsComponent__SetResultDataLocal(
        v97,
        myDeck,
        v102,
        followerType,
        userSvt,
        v95,
        v94,
        battleData,
        -1,
        -1,
        boostRate);
    }
    else
    {
      LODWORD(v88[1].fields.itemResult) &= ~1u;
    }
  }
  v103 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_198;
  eventItemResult = v103->fields.eventItemResult;
  if ( eventItemResult
    && (v105 = eventItemResult->fields.m_CancellationTokenSource) != 0LL
    && (itemResult = v103->fields.itemResult) != 0LL
    && (v107 = itemResult->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v105 || !(_DWORD)v107 )
      goto LABEL_199;
    this = (BattleResultComponent_o *)v11->fields.expResult;
    if ( !this )
      goto LABEL_198;
    BattleResultExpComponent__setResultData(
      (BattleResultExpComponent_o *)this,
      (UserGameEntity_o *)eventItemResult->fields.parentComp,
      (UserEquipEntity_o *)itemResult->fields.parentComp,
      (MasterLvRewardInfo_array *)v103->fields.eventEndTitle,
      resultAsset,
      v78->fields.maxTurnDamageInBattle,
      v78->fields.maxTurnDamageRecord,
      v84,
      0LL);
    v103 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
  }
  else
  {
    LODWORD(v103[1].fields.itemResult) &= ~2u;
  }
  v108 = v103->fields.eventItemResult;
  if ( !v108 || (v109 = v108->fields.m_CancellationTokenSource) == 0LL )
  {
    LODWORD(v103[1].fields.itemResult) &= ~4u;
    goto LABEL_104;
  }
  if ( !(_DWORD)v109 )
LABEL_199:
    sub_1B6432C(this, resultList);
  this = (BattleResultComponent_o *)v78->fields.quest_ent;
  if ( !this )
    goto LABEL_198;
  parentComp = (UserGameEntity_o *)v108->fields.parentComp;
  v111 = v11->fields.itemResult;
  resultAssetb = (AssetData_o *)v103->fields.eventEndMessage;
  eventId = *((_DWORD *)&v103->fields.UnityEngine_Behaviour_Fields + 1);
  fsm = (int32_t)v103->fields.fsm;
  fsm_high = HIDWORD(v103->fields.fsm);
  expResult = (int64_t)v103[1].fields.expResult;
  eventItemResult_high = HIDWORD(v103[1].fields.eventItemResult);
  dropupinfos = (DropUpInfo_array *)v103[1].fields.eventDamageItemResult;
  v117 = (EventConquestInfo_array *)v103[1].fields.eventEndMessage;
  firstClearRewardQp = (int32_t)v103->fields.obj_basebg;
  v172 = (UserEventPointEntity_array *)v103->fields.FriendIconPrefab;
  friendResult = (UserEventEntity_array *)v103->fields.friendResult;
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x2000000000000LL, 0LL);
  if ( !*p_battleResult )
    goto LABEL_198;
  if ( !v111 )
    goto LABEL_198;
  BattleResultItemComponent__setResultData(
    v111,
    (BattleDropItem_array *)resultAssetb,
    fsm,
    fsm_high,
    parentComp,
    eventId,
    friendResult,
    v172,
    expResult,
    v175,
    eventItemResult_high,
    dropupinfos,
    v117,
    firstClearRewardQp,
    (unsigned __int8)this & 1,
    (BattleResultAddRewardBonus_o *)(*p_battleResult)[1].fields.eventFortificationItemResult,
    0LL);
  v103 = *p_battleResult;
  v78 = battleData;
  if ( !*p_battleResult )
    goto LABEL_198;
LABEL_104:
  if ( v103[1].fields.eventFortificationItemResult )
  {
    v119 = v11->fields.itemResult;
    if ( !v119 )
      goto LABEL_198;
    getQpLabel = v119->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_198;
    mText = (struct ScreenTouchInformationComponent_o *)getQpLabel->fields.mText;
    v103[1].fields.screenTouch = mText;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v103[1].fields.screenTouch, (int32_t)mText, v85, v86);
    v124 = v11->fields.itemResult;
    if ( !v124 )
      goto LABEL_198;
    nowQpLabel = v124->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_198;
    v126 = v11->fields.battleResult;
    if ( !v126 )
      goto LABEL_198;
    v127 = nowQpLabel->fields.mText;
    v126->fields.ultimateNowQpText = v127;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v126->fields.ultimateNowQpText, (int32_t)v127, v122, v123);
    if ( !*p_battleResult )
      goto LABEL_198;
    eventFortificationItemResult = (*p_battleResult)[1].fields.eventFortificationItemResult;
    if ( !eventFortificationItemResult )
      goto LABEL_198;
    v182 = (__int64)eventFortificationItemResult->fields.myFsm & ~(SLODWORD(eventFortificationItemResult->fields.myFsm) >> 31);
    v129 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v182);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v129, 0LL);
    v130 = v11->fields.itemResult;
    if ( !v130 )
      goto LABEL_198;
    v131 = (Il2CppObject *)this;
    v132 = v130->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v133 = LocalizationManager__Get((System_String_o *)StringLiteral_11049/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v133, v131, 0LL);
    if ( !v132 )
      goto LABEL_198;
    UILabel__set_text(v132, (System_String_o *)this, 0LL);
    v134 = v11->fields.itemResult;
    if ( !v134 )
      goto LABEL_198;
    if ( !*p_battleResult )
      goto LABEL_198;
    v135 = (*p_battleResult)[1].fields.eventFortificationItemResult;
    if ( !v135 )
      goto LABEL_198;
    v136 = v134->fields.nowQpLabel;
    myFsm_high = HIDWORD(v135->fields.myFsm);
    v137 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &myFsm_high);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v137, 0LL);
    if ( !v136 )
      goto LABEL_198;
    UILabel__set_text(v136, (System_String_o *)this, 0LL);
    this = (BattleResultComponent_o *)v11->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_198;
    v184.fields.r = 0.29804;
    v184.fields.a = 1.0;
    v184.fields.g = 0.29804;
    v184.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v184, 0LL);
    v103 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
  }
  this = (BattleResultComponent_o *)v78->fields.quest_ent;
  if ( !this )
    goto LABEL_198;
  v138 = v11->fields.friendResult;
  obj_basebg = (int32_t)v103[1].fields.obj_basebg;
  obj_basebg_high = HIDWORD(v103[1].fields.obj_basebg);
  v141 = (int64_t)v103[1].fields.fsm;
  obj_fronttouch = (int32_t)v103[1].fields.obj_fronttouch;
  obj_fronttouch_high = HIDWORD(v103[1].fields.obj_fronttouch);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v138 )
    goto LABEL_198;
  BattleResultFriendComponent__setResultData(
    v138,
    obj_basebg,
    obj_basebg_high,
    v141,
    obj_fronttouch,
    obj_fronttouch_high,
    (unsigned __int8)this & 1,
    0LL);
  v144 = v11->fields.battleResult;
  if ( !v144 )
    goto LABEL_198;
  this = (BattleResultComponent_o *)v11->fields.eventItemResult;
  if ( !this )
    goto LABEL_198;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v144->fields.resultEventRewardInfos,
                                      (unsigned int)v144->fields.eventId,
                                      v144->fields.resultBoostItemRewardInfos,
                                      v144->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v145 = v11->fields.battleResult;
  if ( !v145 )
    goto LABEL_198;
  this = (BattleResultComponent_o *)v11->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_198;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v145->fields.resultDamageRewardInfos,
    (unsigned int)v145->fields.eventId,
    v145->fields.resultBoostItemRewardInfos,
    v145->fields.rewardInfos,
    this->klass[1]._1.name);
  v146 = (UnityEngine_Object_o *)v11->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(v146, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v147 = v11->fields.battleResult;
    if ( !v147 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)v11->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_198;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v147->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v147->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v148 = v11->fields.battleResult;
    if ( !v148 )
      goto LABEL_198;
    this = (BattleResultComponent_o *)v11->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_198;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v148->fields.fortificationInfos,
      0LL);
  }
  this = *p_eventTutorial;
  if ( !*p_eventTutorial )
    goto LABEL_198;
  this = (BattleResultComponent_o *)BattleEventTutorial__CheckHasResultPhaseTutorial((BattleEventTutorial_o *)this, 0LL);
  v149 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_198;
  v150 = (int)v149[1].fields.itemResult;
  v151 = ((unsigned __int8)this & 1) != 0 ? 64 : 0;
  v152 = v150 & 0xFFFFFFBF | v151;
  v153 = (v150 & 0x200) != 0 ? v152 & 0xFFFFFFEF : v152;
  LODWORD(v149[1].fields.itemResult) = v153;
  v154 = v78->fields.battle_info;
  if ( !v154 )
LABEL_198:
    sub_1B64324(this);
  v155 = v154->fields.myDeck;
  if ( v155 && (svts = v155->fields.svts) != 0LL && (max_length = svts->max_length, max_length >= 1) )
  {
    v158 = 0LL;
    do
    {
      if ( (unsigned int)v158 >= max_length )
        goto LABEL_199;
      this = (BattleResultComponent_o *)svts->m_Items[v158];
      if ( !this )
        goto LABEL_198;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0LL);
      v159 = (char)this;
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      ++v158;
    }
    while ( (int)v158 < max_length );
    v149 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
  }
  else
  {
    v159 = 0;
  }
  if ( *((_DWORD *)&v149->fields.UnityEngine_Behaviour_Fields + 1) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_198;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1),
                                        0LL);
    v160 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_198;
      v161 = *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      this = (BattleResultComponent_o *)EventInfoUIProgressControl__GetEventProgressValueSaveData_41973728(v161, 0, 0LL);
      v162 = (int)v160->fields.obj_basebg;
      LODWORD(v160) = 0;
      if ( (_DWORD)this != v162 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49F904E )
        {
          sub_1B640C8(&TerminalPramsManager_TypeInfo, resultList);
          byte_49F904E = 1;
        }
        v163 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v163 = TerminalPramsManager_TypeInfo;
        }
        v163->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v160) = 1;
      }
    }
  }
  else
  {
    LODWORD(v160) = 0;
  }
  if ( v159 & 1 | !v78->fields.isRetryable )
    goto LABEL_177;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_198;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                                      (BattleResultComponent_resultData_o *)this,
                                      (const MethodInfo *)resultList);
  if ( (((unsigned int)v160 | (unsigned int)this) & 1) != 0 )
  {
LABEL_177:
    v164 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
    v165 = (__int64)v164[1].fields.itemResult & 0xFFFFF7FF;
  }
  else
  {
    v164 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_198;
    v165 = LODWORD(v164[1].fields.itemResult) | 0x800;
  }
  monitor = v164[2].monitor;
  LODWORD(v164[1].fields.itemResult) = v165;
  LODWORD(v164[1].fields.itemResult) = v165 & 0xFFFFEFFF;
  if ( monitor && monitor[3] )
    LODWORD(v164[1].fields.itemResult) = v165 | 0x1000;
  this = (BattleResultComponent_o *)BattleData__isBattleResultLoseQuestClear(v78, 0LL);
  if ( ((unsigned __int8)this & 1) != 0
    || (this = (BattleResultComponent_o *)BattleData__isBattleRetreatQuestClear(v78, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    if ( v78->fields.isItemResultSkip )
    {
      this = (BattleResultComponent_o *)BattleData__IsWarBoard(v78, 0LL);
      v167 = *p_battleResult;
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v167 )
          goto LABEL_198;
        v168 = (int)v167[1].fields.itemResult;
        if ( (v168 & 4) != 0 )
        {
          v169 = v168 | 4;
LABEL_193:
          LODWORD(v167[1].fields.itemResult) = v169;
          LODWORD(v167[1].fields.itemResult) = v169 & 0xFFFFFFE7;
          goto LABEL_194;
        }
      }
      else if ( !v167 )
      {
        goto LABEL_198;
      }
      v169 = (__int64)v167[1].fields.itemResult & 0xFFFFFFFB;
      goto LABEL_193;
    }
  }
LABEL_194:
  if ( !*p_battleResult )
    goto LABEL_198;
  v170 = (int)(*p_battleResult)[1].fields.eventItemResult;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo(result, v170 == 1, 0LL);
}


void __fastcall BattleResultComponent__SkippAddRewardEffect(BattleResultComponent_o *this, const MethodInfo *method)
{
  this->fields.isAddRewardEffectSkip = 1;
}


void __fastcall BattleResultComponent__StartAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FF4F7 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method);
    byte_49FF4F7 = 1;
  }
  v4 = sub_1B64314(BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  TerminalPramsManager_c *v10; // x8
  CommonUI_o *v11; // x19
  BattleResultComponent___c_c *v12; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x20
  System_Action_o *_9__61_0; // x21
  Il2CppObject *v15; // x22
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_49FF507 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B640C8(&Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, v4);
    sub_1B640C8(&BattleResultComponent___c_TypeInfo, v5);
    byte_49FF507 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F9045 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F9045 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v6->static_fields->_QuestId_k__BackingField, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = TerminalPramsManager_TypeInfo;
    v11 = (CommonUI_o *)Instance;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v12 = BattleResultComponent___c_TypeInfo;
    mQuestRewardInfos = v10->static_fields->mQuestRewardInfos;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v12 = BattleResultComponent___c_TypeInfo;
    }
    _9__61_0 = v12->static_fields->__9__61_0;
    if ( !_9__61_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleResultComponent___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v12->static_fields->__9;
      _9__61_0 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(_9__61_0, v15, Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__61_0 = _9__61_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v17, v18);
    }
    if ( !v11 )
      sub_1B64324(v12);
    CommonUI__OpenQuestClearReward(v11, mQuestRewardInfos, _9__61_0, 0LL);
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
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v9; // x21
  struct BattleResultComponent_resultData_o *battleResult; // x8
  struct BattleData_o *data; // x8

  if ( (byte_49FF4F0 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_9956/*"OpenResult"*/, target);
    sub_1B640C8(&StringLiteral_10551/*"Performance"*/, v7);
    byte_49FF4F0 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10551/*"Performance"*/,
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
    sub_1B64324(fsm);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9956/*"OpenResult"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenDataLostBattleResetDialog_b__68_0(
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

  if ( (byte_49FF511 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, v4);
    byte_49FF511 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49F904E )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49F904E = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_49F980C )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v6);
    byte_49F980C = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !byte_49F9AC4 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v9);
    byte_49F9AC4 = 1;
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
    sub_1B64324(Instance);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__60_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_49FF510 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12899/*"StartQuestClearReward"*/, method);
    byte_49FF510 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12899/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__45_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49FF50F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF50F = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
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
  __int64 v12; // x20
  BattleResultItemComponent_o *itemResult; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x0
  BattleDropItem_o **v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  BattleDropItem_o *NewDrop; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v24; // w0
  BattleDropItem_o *v25; // x1
  Il2CppObject *Instance; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_o *v29; // x22
  __int64 *v30; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v34; // w2
  int32_t v35; // w3

  if ( (byte_49FF500 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&resultType);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7);
    sub_1B640C8(&Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__, v8);
    sub_1B640C8(&BattleResultComponent___c__DisplayClass53_0_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_9580/*"OPEN"*/, v10);
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, v11);
    byte_49FF500 = 1;
  }
  v12 = sub_1B64314(BattleResultComponent___c__DisplayClass53_0_TypeInfo, *(_QWORD *)&resultType, method);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_33;
  *(_QWORD *)(v12 + 24) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v14, v15);
  BattleResultComponent__ResetTimeScale(v16);
  *(_QWORD *)(v12 + 16) = 0LL;
  v17 = (BattleDropItem_o **)(v12 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), 0, v18, v19);
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
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v24 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v25 = 0LL;
      if ( !v24 )
        goto LABEL_17;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_33;
LABEL_15:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, 0LL);
LABEL_16:
      v25 = NewDrop;
LABEL_17:
      *v17 = v25;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v25, v21, v22);
LABEL_18:
      if ( !*v17 )
      {
        p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
        ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
        {
          itemResult = (BattleResultItemComponent_o *)*p_ServantRewardActionComp;
          if ( !*p_ServantRewardActionComp )
            goto LABEL_33;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)itemResult,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v34, v35);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_33;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v30 = &StringLiteral_9197/*"NEXT"*/;
          goto LABEL_32;
        }
LABEL_33:
        sub_1B64324(itemResult);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v29 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v12,
        Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_33;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v29, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_33;
      v30 = &StringLiteral_9580/*"OPEN"*/;
LABEL_32:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v30, 0LL);
      return;
    default:
      goto LABEL_18;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49FF4F1 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_12174/*"START_Begin"*/, method);
    byte_49FF4F1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12174/*"START_Begin"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_49FF4F6 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_49FF4F6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_49FF501 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_5463/*"END_PROC"*/, method);
    byte_49FF501 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B64324(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5463/*"END_PROC"*/, 0LL);
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
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FF504 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, userCommandCodeId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7);
    byte_49FF504 = 1;
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
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v12, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0LL),
        *p_ServantRewardActionComp = Prefab,
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp,
          (int32_t)Prefab,
          v16,
          v17),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_34310396(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_14:
    sub_1B64324(transform);
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
  Il2CppObject *Entity; // x0
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  Il2CppObject *v21; // x23
  UnityEngine_Object_o *gameObject; // x25
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x25
  ServantRewardAction_o *Prefab; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  ServantRewardAction_o *v29; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v32; // w25
  Il2CppObject v33; // q1
  int64_t v34; // x22
  Il2CppObject v35; // q1
  int64_t v36; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16

  if ( (byte_49FF503 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v16);
    byte_49FF503 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v21 = Entity;
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
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v23, v24);
  }
  v25 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v25 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v25,
             (UnityEngine_Transform_o *)Instance,
             1,
             0LL);
  *p_ServantRewardActionComp = Prefab;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, (int32_t)Prefab, v27, v28);
  if ( !v21 )
    goto LABEL_27;
  v29 = *p_ServantRewardActionComp;
  klass = v21[5].klass;
  monitor = v21[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v40.fields.currentCryptoKey = klass;
  *(_QWORD *)&v40.fields.fakeValue = monitor;
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v40, 0LL);
  if ( isDoEffect )
  {
    v33 = v21[2];
    *(Il2CppObject *)&v39.fields.currentCryptoKey = v21[1];
    *(Il2CppObject *)&v39.fields.fakeValue = v33;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v38 = v39;
    v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v38, 0LL);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v21[6],
                                  0LL);
    if ( v29 )
    {
      ServantRewardAction__Setup(v29, v32, v34, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_25;
    }
LABEL_27:
    sub_1B64324(Instance);
  }
  v35 = v21[2];
  *(Il2CppObject *)&v39.fields.currentCryptoKey = v21[1];
  *(Il2CppObject *)&v39.fields.fakeValue = v35;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v37 = v39;
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v37, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v21[6],
                                0LL);
  if ( !v29 )
    goto LABEL_27;
  ServantRewardAction__Setup(v29, v32, v36, (int32_t)Instance, 1, 1, 1, 2, 0LL);
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
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1B64324(0LL);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x22
  const MethodInfo *v16; // x5
  UnityEngine_Component_o *Instance; // x0
  __int64 *v18; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v22; // w2
  int32_t v23; // w3

  if ( (byte_49FF502 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, userSvtId);
    sub_1B640C8(&Method_BattleResultComponent_endNewView__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_9580/*"OPEN"*/, v10);
    sub_1B640C8(&StringLiteral_9197/*"NEXT"*/, v11);
    byte_49FF502 = 1;
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
      UnityEngine_Object__DestroyImmediate_69127924(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v22, v23);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v18 = &StringLiteral_9197/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1B64324(Instance);
  }
  v12 = Gift__IsEventSvtGet(type, 0LL);
  v15 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v12, v12, v15, v16);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v18 = &StringLiteral_9580/*"OPEN"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v18, 0LL);
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
  __int64 v4; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_49FF515 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1B640C8(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_49FF515 = 1;
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
      sub_1B64324(_4__this);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, method);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, method);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_1B64314(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v6, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v6, v7, v8);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF512 & 1) == 0 )
  {
    sub_1B640C8(&BattleResultComponent___c_TypeInfo, v1);
    byte_49FF512 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleResultComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleResultComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  int32_t v2; // w2
  int32_t v3; // w3
  TerminalPramsManager_c *v4; // x0
  ServantStatusBattleListViewItem_o *p_mQuestRewardInfos; // x0

  if ( (byte_49FF513 & 1) == 0 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, method);
    byte_49FF513 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (ServantStatusBattleListViewItem_o *)&v4->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1B6406C(p_mQuestRewardInfos, 0, v2, v3);
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
  BattleResultComponent___c__DisplayClass53_0_o *v2; // x19
  __int64 v3; // x1
  struct BattleDropItem_o *newDrop; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  struct BattleDropItem_o *v7; // x8
  int64_t userSvtId; // x20
  Il2CppObject *_4__this; // x19
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x3
  struct BattleDropItem_o *v12; // x8
  __int64 v13; // x1
  __int64 v14; // x2
  struct BattleDropItem_o *v15; // x8
  int64_t v16; // x21
  Il2CppObject *v17; // x19
  char v18; // w20
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x5

  v2 = this;
  if ( (byte_49FF514 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    this = (BattleResultComponent___c__DisplayClass53_0_o *)sub_1B640C8(&Method_BattleResultComponent_endNewView__, v3);
    byte_49FF514 = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsCommandCode_37376724(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v2->fields.newDrop;
    if ( v7 )
    {
      userSvtId = v7->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v10 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v5, v6);
      System_Action___ctor(v10, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v10, v11);
        return;
      }
    }
LABEL_12:
    sub_1B64324(this);
  }
  v12 = v2->fields.newDrop;
  if ( !v12 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsEventSvtGet_37376380(v12->fields.type, 0LL);
  v15 = v2->fields.newDrop;
  if ( !v15 )
    goto LABEL_12;
  v16 = v15->fields.userSvtId;
  v17 = (Il2CppObject *)v2->fields.__4__this;
  v18 = (char)this;
  v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v19, v17, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v17 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v17, v16, v18 & 1, v18 & 1, v19, v20);
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
      sub_1B6432C(this, method);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1B64324(this);
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