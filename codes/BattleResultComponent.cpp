void __fastcall BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultEventItemComponent_o *eventItemResult; // x0
  __int64 *v4; // x9

  if ( (byte_42B0255 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_3121/*"CLOSE"*/);
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B0255 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                method),
        !this->fields.fsm) )
  {
    sub_B52A5C(eventItemResult, method);
  }
  if ( ((unsigned __int8)eventItemResult & 1) != 0 )
    v4 = &StringLiteral_9355/*"NEXT"*/;
  else
    v4 = &StringLiteral_3121/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(this->fields.fsm, (System_String_o *)*v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UIWidget_o *nextButtonSpr; // x20
  int v5; // s0

  if ( (byte_42B0252 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B0252 = 1;
  }
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard
    || (UnityEngine_GameObject__SetActive(touchGuard, 0, 0LL),
        nextButtonSpr = (UIWidget_o *)this->fields.nextButtonSpr,
        *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL),
        !nextButtonSpr)
    || (UIWidget__set_color(nextButtonSpr, *(UnityEngine_Color_o *)&v5, 0LL),
        (touchGuard = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B52A5C(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  AndroidBackKeyManager_c *v3; // x0
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  if ( (byte_42B025C & 1) == 0 )
  {
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&StringLiteral_22150/*"sendFsmEvent"*/);
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B025C = 1;
  }
  v3 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v3 = AndroidBackKeyManager_TypeInfo;
  }
  v3->static_fields->ToastEnabled = 0;
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v3);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  ServantAssetLoadManager__EndRetryTransition(Instance, 0LL);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0LL, 0LL) )
  {
    Instance = (ServantAssetLoadManager_o *)this->fields.battleRetryConfirmComponent;
    if ( !Instance )
      goto LABEL_18;
    BattleRetryConfirmComponent__Close((BattleRetryConfirmComponent_o *)Instance, 0LL);
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  Instance = (ServantAssetLoadManager_o *)this->fields.endtargetObject;
  if ( !Instance )
LABEL_18:
    sub_B52A5C(Instance, v5);
  UnityEngine_GameObject__SendMessage_41490956(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_22150/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5538/*"END_PROC"*/,
    0LL);
}


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
  if ( (byte_42B025F & 1) == 0 )
  {
    this = (BattleResultComponent_o *)sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B025F = 1;
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
      sub_B52A5C(0LL, v7);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9355/*"NEXT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *transform; // x21
  int v8; // s0
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  const MethodInfo *v12; // x2
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct ScreenTouchInformationComponent_o *Component_srcLineSprite; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_42B0246 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0246 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v8, 0LL);
  gameObject = this->fields.obj_basebg;
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.bondsResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultBondsComponent__Init((BattleResultBondsComponent_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.expResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultExpComponent__Init((BattleResultExpComponent_o *)gameObject, v6);
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultItemComponent__Init((BattleResultItemComponent_o *)gameObject, v6);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v6);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventDamageItemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v6);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.eventFortificationItemResult;
    if ( !gameObject )
      goto LABEL_38;
    BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v6);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.friendResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultFriendComponent__Init((BattleResultFriendComponent_o *)gameObject, releasePerformanceObject, v12);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.battleRetryConfirmComponent;
    if ( !gameObject )
      goto LABEL_38;
    BattleRetryConfirmComponent__Init((BattleRetryConfirmComponent_o *)gameObject, 0LL);
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_38;
    v16 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(v16, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v17, v18, v19, v20, v21, v22);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_srcLineSprite = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                gameObject,
                                                                                (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = Component_srcLineSprite,
        p_screenTouch = &this->fields.screenTouch,
        sub_B52920(
          (BattleServantConfConponent_o *)p_screenTouch,
          (System_Int32_array **)Component_srcLineSprite,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 11)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_38:
    sub_B52A5C(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v8; // w20
  WarQuestSelectionMaster_o *v9; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42B0264 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_B52984(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_12346/*"SKIP"*/);
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B0264 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  UserId = (int64_t)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    UserId = (int64_t)TerminalPramsManager_TypeInfo;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult || !Master_WarQuestSelectionMaster )
    goto LABEL_31;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            Master_WarQuestSelectionMaster,
                            *(_DWORD *)(*(_QWORD *)(UserId + 184) + 4LL),
                            battleResult->fields.eventId,
                            0LL);
  if ( EventDataLostBattleId == -1 )
    goto LABEL_29;
  v8 = EventDataLostBattleId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v9 )
LABEL_31:
    sub_B52A5C(UserId, v3);
  if ( UserEventDataLostMaster__TryGetEntity((UserEventDataLostMaster_o *)v9, &entity, UserId, v8, 0LL) )
  {
    UserId = (int64_t)entity;
    if ( !entity )
      goto LABEL_31;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0LL) )
    {
      UserId = (int64_t)this->fields.fsm;
      if ( !UserId )
        goto LABEL_31;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)UserId, (System_String_o *)StringLiteral_9355/*"NEXT"*/, 0LL);
    }
  }
LABEL_29:
  UserId = (int64_t)this->fields.fsm;
  if ( !UserId )
    goto LABEL_31;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)UserId, (System_String_o *)StringLiteral_12346/*"SKIP"*/, 0LL);
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
    sub_B52A5C(obj_fronttouch, method);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, 0LL);
}


void __fastcall BattleResultComponent__OpenDataLostBattleResetDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  _DWORD *monitor; // x8
  int32_t v4; // w20
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v7; // x22

  v2 = (Il2CppObject *)this;
  if ( (byte_42B0265 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__);
    sub_B52984(&DataLostResetManager_TypeInfo);
    this = (BattleResultComponent_o *)sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B0265 = 1;
  }
  monitor = v2[9].monitor;
  if ( !monitor )
    sub_B52A5C(this, method);
  v4 = monitor[5];
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v7, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, 0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__OpenBattleResultResetDialog(v4, WarId_k__BackingField, v7, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0

  if ( (byte_42B0256 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_12346/*"SKIP"*/);
    byte_42B0256 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v4) )
    {
      Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v4);
        return;
      }
LABEL_19:
      sub_B52A5C(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12346/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_42B0263 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_12346/*"SKIP"*/);
    byte_42B0263 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  Instance = (CommonUI_o *)this->fields.resultSprite;
  if ( !Instance )
    goto LABEL_22;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.eventItemResult;
  if ( !Instance )
    goto LABEL_22;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
  if ( !Instance )
    goto LABEL_22;
  Instance = (CommonUI_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_fronttouch;
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
  Instance = (CommonUI_o *)this->fields.obj_basebg;
  if ( !Instance )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 1, 0LL);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL) )
  {
    Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
    if ( !Instance )
      goto LABEL_22;
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
LABEL_22:
      sub_B52A5C(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_22;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12346/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_42B0254 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_12346/*"SKIP"*/);
    byte_42B0254 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v4) )
  {
    Instance = (CommonUI_o *)this->fields.eventItemResult;
    if ( Instance )
    {
      BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v4);
      return;
    }
LABEL_14:
    sub_B52A5C(Instance, v4);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12346/*"SKIP"*/, 0LL);
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
    sub_B52A5C(obj_fronttouch, method);
  }
  BattleResultExpComponent__Open((BattleResultExpComponent_o *)obj_fronttouch, method);
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
  QuestEntity_o *Entity; // x22
  MapControl_QuestInfo_o *v9; // x20
  int32_t questId; // w23
  bool IsQuestClear_25987760; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v14; // w22
  clsQuestCheck_o *v15; // x21
  TerminalPramsManager_c *v16; // x0
  const MethodInfo *v17; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42B0260 & 1) == 0 )
  {
    sub_B52984(&CondType_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&MapControl_QuestInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B0260 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  BYTE4(Instance[1].klass) = 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              QuestId_k__BackingField,
                              (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v9 = (MapControl_QuestInfo_o *)sub_B52A54(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_46;
  MapControl_QuestInfo__SetTerminalParamsValue(v9, 0LL);
  questId = v9->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25987760 = CondType__IsQuestClear_25987760(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B6 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Entity )
    goto LABEL_46;
  CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                            Entity,
                            QuestId_k__BackingField,
                            HIDWORD(Instance[1].fields.saveNameList->fields._items),
                            !IsQuestClear_25987760,
                            &fixedVal,
                            0LL);
  v9->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume(Entity, CampaignCostCalcValue, 0LL);
  v9->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v14 = fixedVal;
  else
    v14 = ActConsume;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v15 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AD196 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD196 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v15 )
    goto LABEL_46;
  if ( !clsQuestCheck__CheckQuestPlayable(v15, v9, (int64_t)Instance[1].fields.saveNameList[3].monitor, boostId, 0LL) )
    return;
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v16->static_fields->lastPlayQuestConsumeAp = v14;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_46:
    sub_B52A5C(Instance, v5);
  LODWORD(Instance[1].monitor) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v17);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_resultData_o *battleResult; // x0
  const MethodInfo *v4; // x0

  if ( (byte_42B0253 & 1) == 0 )
  {
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_13145/*"StartQuestClearReward"*/);
    byte_42B0253 = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_13;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13145/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleResult = (BattleResultComponent_resultData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResult
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)battleResult, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleResult, 0, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.friendResult) == 0LL) )
  {
LABEL_13:
    sub_B52A5C(battleResult, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)battleResult, method);
  BattleResultComponent__ResetTimeScale(v4);
}


void __fastcall BattleResultComponent__OpenItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  struct System_String_o *eventEndTitle; // x8
  WebViewManager_o *Instance; // x0
  System_String_o *v5; // x20
  System_String_o *eventEndMessage; // x21
  CommonUI_o *v7; // x22
  NotificationDialog_ClickDelegate_o *v8; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_42B024C & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultComponent_endCloseEndEventMessage__);
    sub_B52984(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B024C = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields.m_stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v7 = (CommonUI_o *)Instance;
    v8 = (NotificationDialog_ClickDelegate_o *)sub_B52A54(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_18160348(
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
    sub_B52A5C(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, method);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  BattleRetryConfirmComponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42B025D & 1) == 0 )
  {
    sub_B52984(&Method_BattleResultComponent__OpenRetryQuest_b__60_0__);
    sub_B52984(&BattleWindowComponent_EndCall_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B025D = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_16;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v4 = this->fields.battleRetryConfirmComponent;
    v5 = (BattleWindowComponent_EndCall_o *)sub_B52A54(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleResultComponent__OpenRetryQuest_b__60_0__,
      0LL);
    if ( !v4 )
      goto LABEL_16;
    BattleRetryConfirmComponent__Open(v4, v5, 0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
LABEL_16:
    sub_B52A5C(battleRetryConfirmComponent, method);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)UnityEngine_Object__op_Inequality(
                                                                   Component_srcLineSprite,
                                                                   0LL,
                                                                   0LL);
  if ( ((unsigned __int8)battleRetryConfirmComponent & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)Component_srcLineSprite[2].klass;
      if ( battleRetryConfirmComponent )
      {
        BattlePerformance__ClearObjForceDestroy((BattlePerformance_o *)battleRetryConfirmComponent, 0LL);
        return;
      }
    }
    goto LABEL_16;
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

  if ( (byte_42B024B & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultComponent_OpenTutorial__);
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B024B = 1;
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
    v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v4 )
    {
      BattleEventTutorial__callResult(v4, v5, 0LL);
      return;
    }
LABEL_23:
    sub_B52A5C(eventTutorial, method);
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
      v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    v9 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
  }
}


void __fastcall BattleResultComponent__PushFollowerScene(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x0
  TerminalPramsManager_c *v5; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v9; // x23
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x20

  if ( (byte_42B0261 & 1) == 0 )
  {
    sub_B52984(&BattleSetupInfo_TypeInfo);
    sub_B52984(&RandomLimitCountManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42B0261 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  BattleResultComponent__ResetTimeScale(v4);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.8, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_42AC2B5 = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_42AC2B6 = 1;
  }
  if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v5->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BattleSetupInfo_o *)sub_B52A54(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_33;
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
      goto LABEL_33;
    LODWORD(Instance[3].monitor) = boostId;
  }
  Instance = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_33:
    sub_B52A5C(Instance, v11);
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
    sub_B52A5C(this, method);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_42B0249 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B0249 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0LL), (v5 = this->fields.screenTouch) == 0LL) )
      sub_B52A5C(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  if ( (byte_42B0262 & 1) == 0 )
  {
    sub_B52984(&BattlePerformance_TypeInfo);
    byte_42B0262 = 1;
  }
  UnityEngine_Time__set_timeScale(1.0, 0LL);
  if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
  }
  BattlePerformance__AdjustSmoothnessByCurrentSpeed(0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotion(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Object_array *v13; // x20
  __int64 v14; // x0
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x1
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_Int32_array **v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Int32_array **v64; // x1
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x1
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_Int32_array **v78; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x1
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x21
  System_Collections_Hashtable_o *v107; // x0
  __int64 v108; // x0
  __int64 v109; // x0
  int v110; // [xsp+Ch] [xbp-34h] BYREF
  int v111; // [xsp+10h] [xbp-30h] BYREF
  int v112; // [xsp+14h] [xbp-2Ch] BYREF
  int v113; // [xsp+18h] [xbp-28h] BYREF
  int v114; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42B024F & 1) == 0 )
  {
    sub_B52984(&iTween_EaseType_TypeInfo);
    sub_B52984(&object___TypeInfo);
    sub_B52984(&float_TypeInfo);
    sub_B52984(&StringLiteral_19056/*"from"*/);
    sub_B52984(&StringLiteral_12721/*"ScrollBarMotionCompleteValue"*/);
    sub_B52984(&StringLiteral_22867/*"time"*/);
    sub_B52984(&StringLiteral_21442/*"onupdate"*/);
    sub_B52984(&StringLiteral_18079/*"delay"*/);
    sub_B52984(&StringLiteral_12722/*"ScrollBarMotionUpdateValue"*/);
    sub_B52984(&StringLiteral_22904/*"to"*/);
    sub_B52984(&StringLiteral_18246/*"easeType"*/);
    sub_B52984(&StringLiteral_21433/*"oncomplete"*/);
    sub_B52984(&iTween_TypeInfo);
    byte_42B024F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43341232(gameObject, 0LL);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = sub_B5299C(object___TypeInfo, 14LL);
  if ( !v5 )
    sub_B52A5C(0LL, v6);
  v13 = (System_Object_array *)v5;
  v14 = StringLiteral_19056/*"from"*/;
  if ( StringLiteral_19056/*"from"*/ )
  {
    v14 = sub_B52A44(StringLiteral_19056/*"from"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v15 = (System_Int32_array **)StringLiteral_19056/*"from"*/;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v13->max_length )
    goto LABEL_68;
  v13->m_Items[0] = (Il2CppObject *)v15;
  sub_B52920((BattleServantConfConponent_o *)v13->m_Items, v15, v7, v8, v9, v10, v11, v12);
  v114 = 0;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v114);
  v22 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B52A44(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
  }
  if ( v13->max_length <= 1 )
    goto LABEL_68;
  v13->m_Items[1] = (Il2CppObject *)v22;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[1], v22, v16, v17, v18, v19, v20, v21);
  v14 = StringLiteral_22904/*"to"*/;
  if ( StringLiteral_22904/*"to"*/ )
  {
    v14 = sub_B52A44(StringLiteral_22904/*"to"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v29 = (System_Int32_array **)StringLiteral_22904/*"to"*/;
  }
  else
  {
    v29 = 0LL;
  }
  if ( v13->max_length <= 2 )
    goto LABEL_68;
  v13->m_Items[2] = (Il2CppObject *)v29;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[2], v29, v23, v24, v25, v26, v27, v28);
  v113 = 1065353216;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v113);
  v36 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B52A44(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
  }
  if ( v13->max_length <= 3 )
    goto LABEL_68;
  v13->m_Items[3] = (Il2CppObject *)v36;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[3], v36, v30, v31, v32, v33, v34, v35);
  v14 = StringLiteral_21442/*"onupdate"*/;
  if ( StringLiteral_21442/*"onupdate"*/ )
  {
    v14 = sub_B52A44(StringLiteral_21442/*"onupdate"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v43 = (System_Int32_array **)StringLiteral_21442/*"onupdate"*/;
  }
  else
  {
    v43 = 0LL;
  }
  if ( v13->max_length <= 4 )
    goto LABEL_68;
  v13->m_Items[4] = (Il2CppObject *)v43;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[4], v43, v37, v38, v39, v40, v41, v42);
  v14 = StringLiteral_12722/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12722/*"ScrollBarMotionUpdateValue"*/ )
  {
    v14 = sub_B52A44(StringLiteral_12722/*"ScrollBarMotionUpdateValue"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v50 = (System_Int32_array **)StringLiteral_12722/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( v13->max_length <= 5 )
    goto LABEL_68;
  v13->m_Items[5] = (Il2CppObject *)v50;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[5], v50, v44, v45, v46, v47, v48, v49);
  v14 = StringLiteral_21433/*"oncomplete"*/;
  if ( StringLiteral_21433/*"oncomplete"*/ )
  {
    v14 = sub_B52A44(StringLiteral_21433/*"oncomplete"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v57 = (System_Int32_array **)StringLiteral_21433/*"oncomplete"*/;
  }
  else
  {
    v57 = 0LL;
  }
  if ( v13->max_length <= 6 )
    goto LABEL_68;
  v13->m_Items[6] = (Il2CppObject *)v57;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[6], v57, v51, v52, v53, v54, v55, v56);
  v14 = StringLiteral_12721/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12721/*"ScrollBarMotionCompleteValue"*/ )
  {
    v14 = sub_B52A44(StringLiteral_12721/*"ScrollBarMotionCompleteValue"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v64 = (System_Int32_array **)StringLiteral_12721/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v64 = 0LL;
  }
  if ( v13->max_length <= 7 )
    goto LABEL_68;
  v13->m_Items[7] = (Il2CppObject *)v64;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[7], v64, v58, v59, v60, v61, v62, v63);
  v14 = StringLiteral_18246/*"easeType"*/;
  if ( StringLiteral_18246/*"easeType"*/ )
  {
    v14 = sub_B52A44(StringLiteral_18246/*"easeType"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v71 = (System_Int32_array **)StringLiteral_18246/*"easeType"*/;
  }
  else
  {
    v71 = 0LL;
  }
  if ( v13->max_length <= 8 )
    goto LABEL_68;
  v13->m_Items[8] = (Il2CppObject *)v71;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[8], v71, v65, v66, v67, v68, v69, v70);
  v112 = 17;
  v14 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v112);
  v78 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B52A44(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
  }
  if ( v13->max_length <= 9 )
    goto LABEL_68;
  v13->m_Items[9] = (Il2CppObject *)v78;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[9], v78, v72, v73, v74, v75, v76, v77);
  v14 = StringLiteral_22867/*"time"*/;
  if ( StringLiteral_22867/*"time"*/ )
  {
    v14 = sub_B52A44(StringLiteral_22867/*"time"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v85 = (System_Int32_array **)StringLiteral_22867/*"time"*/;
  }
  else
  {
    v85 = 0LL;
  }
  if ( v13->max_length <= 0xA )
    goto LABEL_68;
  v13->m_Items[10] = (Il2CppObject *)v85;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[10], v85, v79, v80, v81, v82, v83, v84);
  v111 = 1065353216;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v111);
  v92 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B52A44(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
  }
  if ( v13->max_length <= 0xB )
    goto LABEL_68;
  v13->m_Items[11] = (Il2CppObject *)v92;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[11], v92, v86, v87, v88, v89, v90, v91);
  v14 = StringLiteral_18079/*"delay"*/;
  if ( StringLiteral_18079/*"delay"*/ )
  {
    v14 = sub_B52A44(StringLiteral_18079/*"delay"*/, v13->obj.klass->_1.element_class);
    if ( !v14 )
      goto LABEL_69;
    v99 = (System_Int32_array **)StringLiteral_18079/*"delay"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v13->max_length <= 0xC )
    goto LABEL_68;
  v13->m_Items[12] = (Il2CppObject *)v99;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[12], v99, v93, v94, v95, v96, v97, v98);
  v110 = 0;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v110);
  v106 = (System_Int32_array **)v14;
  if ( v14 )
  {
    v14 = sub_B52A44(v14, v13->obj.klass->_1.element_class);
    if ( !v14 )
    {
LABEL_69:
      v109 = sub_B52A7C(v14);
      sub_B52A28(v109, 0LL);
    }
  }
  if ( v13->max_length <= 0xD )
  {
LABEL_68:
    v108 = sub_B52A88(v14);
    sub_B52A28(v108, 0LL);
  }
  v13->m_Items[13] = (Il2CppObject *)v106;
  sub_B52920((BattleServantConfConponent_o *)&v13->m_Items[13], v106, v100, v101, v102, v103, v104, v105);
  v107 = iTween__Hash(v13, 0LL);
  iTween__ValueTo(v4, v107, 0LL);
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
  const MethodInfo *v7; // x2

  v2 = this;
  if ( (byte_42B0251 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__);
    this = (BattleResultComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_42B0251 = 1;
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
  v6 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)v2,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_B52A5C(this, method);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v6, v7);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_42B0250 & 1) == 0 )
  {
    sub_B52984(&iTween_TypeInfo);
    byte_42B0250 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_B52A5C(0LL, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43341232(gameObject, 0LL);
    BattleResultComponent__ScrollBarMotionCompleteValue(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__Set(
        BattleResultComponent_o *this,
        BattleResultComponent_resultData_array *resultList,
        BattleEventTutorial_o *tutorial,
        AssetData_o *resultAsset,
        System_Int32_array *viewGroupIds,
        BattleData_o *bData,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  BattleData_o *battleData; // x28
  BattleResultComponent_resultData_array *v12; // x27
  BattleResultComponent_o *v13; // x22
  System_Int32_array **v14; // x1
  BattleResultComponent_o **p_battleResult; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  TerminalPramsManager_c *v22; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w26
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v25; // x0
  int32_t v26; // w19
  BalanceConfig_c *v27; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v29; // x0
  BattleResultComponent_o *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *battleRetryConfirmComponent; // x0
  BattleResultComponent_o *v32; // x26
  BattleResultComponent___c_c *v33; // x8
  struct BattleResultComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__34_0; // x19
  Il2CppObject *v36; // x20
  struct BattleResultComponent___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array *v44; // x0
  System_String_o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ServantRewardActionComp; // x0
  BattleResultComponent_o *v47; // x26
  BattleResultComponent___c_c *v48; // x8
  struct BattleResultComponent___c_StaticFields *v49; // x9
  System_Converter_int__string__o *_9__34_1; // x19
  Il2CppObject *v51; // x20
  struct BattleResultComponent___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array *v59; // x0
  System_String_o *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **endtargetObject; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct BattleResultComponent_resultData_o *v74; // x8
  System_Int32_array **eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v76; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v78; // x26
  BattleResultComponent_resultData_o *v79; // x8
  struct BattleResultExpComponent_o *expResult; // x8
  EventBuddyPointMaster_o *Master_WarQuestSelectionMaster; // x19
  int32_t v82; // w20
  int32_t QuestId; // w23
  bool v84; // w8
  BattleResultComponent_resultData_o *v85; // x9
  struct BattleInfoData_o *battle_info; // x10
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x9
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultFriendComponent_o *friendResult; // x10
  struct BattleResultComponent_o *v90; // x11
  struct BattleResultEventDamageItemComponent_o *v91; // x9
  struct BattleResultComponent_o *v92; // x8
  QuestEntity_o *quest_ent; // x8
  BattleResultItemComponent_o *itemResult; // x25
  int32_t obj_basebg; // w27
  int32_t obj_basebg_high; // w28
  struct BattleResultFriendComponent_o *v97; // x19
  int32_t FriendIconPrefab_high; // w20
  struct UISprite_o *resultSprite; // x23
  struct BattleEventTutorial_o *eventTutorial; // x24
  int32_t firstClearRewardQp; // w26
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  BattleResultComponent_o *v108; // x8
  struct BattleResultItemComponent_o *v109; // x9
  struct UILabel_o *getQpLabel; // x9
  System_Int32_array **mText; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct BattleResultItemComponent_o *v118; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v120; // x9
  System_Int32_array **v121; // x1
  __int64 v122; // x8
  Il2CppObject *v123; // x0
  struct BattleResultItemComponent_o *v124; // x8
  Il2CppObject *v125; // x20
  UILabel_o *v126; // x19
  System_String_o *v127; // x0
  struct BattleResultItemComponent_o *v128; // x8
  __int64 v129; // x9
  UILabel_o *v130; // x19
  Il2CppObject *v131; // x0
  UIWidget_o *nextButtonSpr; // x19
  int v133; // s0
  BattleResultFriendComponent_o *v137; // x19
  int32_t bondsResult; // w20
  int32_t bondsResult_high; // w23
  int64_t obj_fronttouch; // x24
  int32_t v141; // w25
  int32_t expResult_high; // w26
  const MethodInfo *v143; // x7
  struct BattleResultComponent_resultData_o *v144; // x8
  struct BattleResultComponent_resultData_o *v145; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v147; // x8
  const MethodInfo *v148; // x2
  struct BattleResultComponent_resultData_o *v149; // x8
  struct BattleInfoData_o *v150; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v154; // x20
  char v155; // w22
  BattleResultComponent_o *v156; // x19
  int32_t v157; // w20
  int32_t EventProgressValueSaveData_26896616; // w0
  int v159; // w8
  TerminalPramsManager_c *v160; // x0
  struct UnityEngine_GameObject_o *v161; // x8
  bool isWin; // w19
  __int64 v163; // x0
  BattleResultComponent_resultData_o *battleResult; // [xsp+0h] [xbp-100h]
  const MethodInfo *v165; // [xsp+40h] [xbp-C0h]
  struct UISprite_o *v166; // [xsp+48h] [xbp-B8h]
  struct BattleResultEventItemComponent_o *eventItemResult; // [xsp+50h] [xbp-B0h]
  int32_t eventId; // [xsp+5Ch] [xbp-A4h]
  UserGameEntity_o *oldGame; // [xsp+60h] [xbp-A0h]
  struct BattleResultComponent_resultData_o *v170; // [xsp+68h] [xbp-98h]
  System_Int32_array *v171; // [xsp+70h] [xbp-90h]
  BattleData_o *v172; // [xsp+78h] [xbp-88h]
  BattleResultComponent_resultData_array *v173; // [xsp+80h] [xbp-80h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+88h] [xbp-78h]
  unsigned int v175; // [xsp+90h] [xbp-70h] BYREF
  int v176; // [xsp+98h] [xbp-68h] BYREF
  int v177; // [xsp+9Ch] [xbp-64h] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF
  UnityEngine_Color32_o v179; // 0:x0.8
  UnityEngine_Color32_o v180; // 0:x0.8

  battleData = bData;
  v12 = resultList;
  v13 = this;
  if ( (byte_42B024A & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&Method_System_Converter_int__string___ctor__);
    sub_B52984(&System_Converter_int__string__TypeInfo);
    sub_B52984(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B52984(&EventInfoUIProgressControl_TypeInfo);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_B52984(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&QuestKnockdownResult_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_BattleResultComponent___c__Set_b__34_0__);
    sub_B52984(&Method_BattleResultComponent___c__Set_b__34_1__);
    sub_B52984(&BattleResultComponent___c_TypeInfo);
    sub_B52984(&StringLiteral_19030/*"freeShopIds"*/);
    sub_B52984(&StringLiteral_11209/*"RESULT_QP_PLUS"*/);
    sub_B52984(&StringLiteral_23682/*"{0:#,0}"*/);
    sub_B52984(&StringLiteral_21993/*"returnRarePriShopIds"*/);
    this = (BattleResultComponent_o *)sub_B52984(&StringLiteral_709/*","*/);
    byte_42B024A = 1;
  }
  entity = 0LL;
  if ( !v12 )
    goto LABEL_224;
  if ( !v12->max_length )
    goto LABEL_225;
  v14 = (System_Int32_array **)v12->m_Items[0];
  v13->fields.battleResult = (struct BattleResultComponent_resultData_o *)v14;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  sub_B52920(
    (BattleServantConfConponent_o *)&v13->fields.battleResult,
    v14,
    (System_String_array **)tutorial,
    (System_String_array **)resultAsset,
    (System_Boolean_array **)viewGroupIds,
    (System_Int32_array **)bData,
    (System_Int32_array *)method,
    v7);
  v13->fields.eventTutorial = tutorial;
  p_eventTutorial = (BattleResultComponent_o **)&v13->fields.eventTutorial;
  sub_B52920(
    (BattleServantConfConponent_o *)&v13->fields.eventTutorial,
    (System_Int32_array **)tutorial,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this = (BattleResultComponent_o *)v13->fields.battleResult;
  if ( !this )
    goto LABEL_224;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__isWin(
                                      (BattleResultComponent_resultData_o *)this,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !battleData )
      goto LABEL_224;
    if ( !BattleData__IsNotResetResultDispFlag(battleData, 0LL) )
    {
      this = *p_battleResult;
      if ( !*p_battleResult )
        goto LABEL_224;
      BattleResultComponent_resultData__setDefaultDispFlag((BattleResultComponent_resultData_o *)this, 0LL);
    }
    this = (BattleResultComponent_o *)BattleData__isEventActivityPoint(battleData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AD199 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AD199 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v22->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(battleData, 0LL);
      if ( !byte_42AD17E )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AD17E = 1;
      }
      v25 = TerminalPramsManager_TypeInfo;
      v26 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v25 = TerminalPramsManager_TypeInfo;
      }
      v25->static_fields->_BeforeEventActivityPoint_k__BackingField = v26;
      v27 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v27 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v27->static_fields->UserEventActivityPointMax;
      if ( !byte_42AD199 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AD199 = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      if ( v29->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v29);
        if ( !byte_42AD17E )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42AD17E = 1;
        }
        v29 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v29 = TerminalPramsManager_TypeInfo;
        }
        v29->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v29);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v30 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  battleRetryConfirmComponent = (System_Collections_Generic_IEnumerable_TSource__o *)v30[1].fields.battleRetryConfirmComponent;
  if ( battleRetryConfirmComponent )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        battleRetryConfirmComponent,
                                        (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
    v32 = this;
    v33 = BattleResultComponent___c_TypeInfo;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v33 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v33->static_fields;
    _9__34_0 = static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Converter_int__string__o *)sub_B52A54(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__34_0,
        v36,
        Method_BattleResultComponent___c__Set_b__34_0__,
        (const MethodInfo_23DDE9C *)Method_System_Converter_int__string___ctor__);
      v37 = BattleResultComponent___c_TypeInfo->static_fields;
      v37->__9__34_0 = _9__34_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v37->__9__34_0,
        (System_Int32_array **)_9__34_0,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    if ( !v32 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                        (System_Collections_Generic_List_int__o *)v32,
                                        (System_Converter_T__TOutput__o *)_9__34_0,
                                        (const MethodInfo_1913818 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_224;
    v44 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                   (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
    v45 = System_String__Join((System_String_o *)StringLiteral_709/*","*/, v44, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19030/*"freeShopIds"*/, v45, 0LL);
    v30 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
  }
  ServantRewardActionComp = (System_Collections_Generic_IEnumerable_TSource__o *)v30[1].fields.ServantRewardActionComp;
  if ( ServantRewardActionComp )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        ServantRewardActionComp,
                                        (const MethodInfo_1B7131C *)Method_System_Linq_Enumerable_ToList_int___);
    v47 = this;
    v48 = BattleResultComponent___c_TypeInfo;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v48 = BattleResultComponent___c_TypeInfo;
    }
    v49 = v48->static_fields;
    _9__34_1 = v49->__9__34_1;
    if ( !_9__34_1 )
    {
      if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v49 = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)v49->__9;
      _9__34_1 = (System_Converter_int__string__o *)sub_B52A54(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__34_1,
        v51,
        Method_BattleResultComponent___c__Set_b__34_1__,
        (const MethodInfo_23DDE9C *)Method_System_Converter_int__string___ctor__);
      v52 = BattleResultComponent___c_TypeInfo->static_fields;
      v52->__9__34_1 = _9__34_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v52->__9__34_1,
        (System_Int32_array **)_9__34_1,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    if ( !v47 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                        (System_Collections_Generic_List_int__o *)v47,
                                        (System_Converter_T__TOutput__o *)_9__34_1,
                                        (const MethodInfo_1913818 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_224;
    v59 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                   (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_string__ToArray__);
    v60 = System_String__Join((System_String_o *)StringLiteral_709/*","*/, v59, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_21993/*"returnRarePriShopIds"*/, v60, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_224;
  endtargetObject = (System_Int32_array **)(*p_battleResult)->fields.endtargetObject;
  v13->fields.eventEndTitle = (struct System_String_o *)endtargetObject;
  sub_B52920((BattleServantConfConponent_o *)&v13->fields.eventEndTitle, endtargetObject, v61, v62, v63, v64, v65, v66);
  v74 = v13->fields.battleResult;
  if ( !v74 )
    goto LABEL_224;
  eventEndMessage = (System_Int32_array **)v74->fields.eventEndMessage;
  v13->fields.eventEndMessage = (struct System_String_o *)eventEndMessage;
  sub_B52920(
    (BattleServantConfConponent_o *)&v13->fields.eventEndMessage,
    eventEndMessage,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  v76 = v13->fields.battleResult;
  if ( !v76 )
    goto LABEL_224;
  isTrialQuestNewRecord = v76->fields.isTrialQuestNewRecord;
  v78 = (QuestKnockdownResult_o *)sub_B52A54(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v78, isTrialQuestNewRecord, battleData, 0LL);
  if ( !battleData )
    goto LABEL_224;
  this = (BattleResultComponent_o *)battleData->fields.battle_info;
  if ( !this )
    goto LABEL_224;
  this = (BattleResultComponent_o *)BattleInfoData__IsWaveMyDecks((BattleInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v79 = v13->fields.battleResult;
    if ( !v79 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.bondsResult;
    if ( !this )
      goto LABEL_224;
    BattleResultBondsComponent__SetMultiBondsResultData(
      (BattleResultBondsComponent_o *)this,
      battleData,
      v79->fields.oldUserSvtCollection,
      v79->fields.friendshipRewardInfos,
      v79->fields.followerType,
      resultAsset,
      v79->fields.friendshipExpBase,
      v79->fields.getJoinSvts,
      v79,
      1,
      0LL);
  }
  else
  {
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
    expResult = this->fields.expResult;
    if ( expResult && *(_QWORD *)&expResult->fields.m_CachedPtr )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventBuddyPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v82 = BattleData__get_eventId(battleData, 0LL);
      QuestId = BattleData__getQuestId(battleData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(battleData, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_224;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          Master_WarQuestSelectionMaster,
                                          &entity,
                                          v82,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_224;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v84 = (unsigned __int8)this & 1;
      }
      else
      {
        v84 = 0;
      }
      v85 = v13->fields.battleResult;
      if ( !v85 )
        goto LABEL_224;
      battle_info = battleData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_224;
      this = (BattleResultComponent_o *)v13->fields.bondsResult;
      if ( !this )
        goto LABEL_224;
      BattleResultBondsComponent__setResultData(
        (BattleResultBondsComponent_o *)this,
        v85->fields.myDeck,
        v85->fields.oldUserSvtCollection,
        v85->fields.friendshipRewardInfos,
        v85->fields.followerType,
        resultAsset,
        battle_info->fields.userSvt,
        v85->fields.friendshipExpBase,
        v85->fields.getJoinSvts,
        v85,
        v84,
        battleData,
        0LL);
    }
    else
    {
      BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 1, 0LL);
    }
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  eventDamageItemResult = this->fields.eventDamageItemResult;
  if ( eventDamageItemResult
    && (parentComp = eventDamageItemResult->fields.parentComp) != 0LL
    && (friendResult = this->fields.friendResult) != 0LL
    && (v90 = friendResult->fields.parentComp) != 0LL )
  {
    if ( !(_DWORD)parentComp || !(_DWORD)v90 )
      goto LABEL_225;
    if ( !v13->fields.expResult )
      goto LABEL_224;
    BattleResultExpComponent__setResultData(
      v13->fields.expResult,
      (UserGameEntity_o *)eventDamageItemResult->fields.myFsm,
      (UserEquipEntity_o *)friendResult->fields.myFsm,
      (MasterLvRewardInfo_array *)this->fields.eventEndMessage,
      resultAsset,
      battleData->fields.maxTurnDamageInBattle,
      battleData->fields.maxTurnDamageRecord,
      v78,
      (const MethodInfo *)battleResult);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  v91 = this->fields.eventDamageItemResult;
  if ( v91 )
  {
    v92 = v91->fields.parentComp;
    if ( v92 )
    {
      if ( (_DWORD)v92 )
      {
        v171 = viewGroupIds;
        v172 = battleData;
        quest_ent = battleData->fields.quest_ent;
        v173 = v12;
        if ( !quest_ent )
          goto LABEL_224;
        itemResult = v13->fields.itemResult;
        obj_basebg = (int32_t)this->fields.obj_basebg;
        obj_basebg_high = HIDWORD(this->fields.obj_basebg);
        oldGame = (UserGameEntity_o *)v91->fields.myFsm;
        v170 = this->fields.battleResult;
        v97 = this[1].fields.friendResult;
        FriendIconPrefab_high = HIDWORD(this[1].fields.FriendIconPrefab);
        resultSprite = this[1].fields.resultSprite;
        eventId = *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1);
        eventTutorial = this[1].fields.eventTutorial;
        firstClearRewardQp = (int32_t)this->fields.obj_fronttouch;
        eventItemResult = this->fields.eventItemResult;
        v166 = this->fields.resultSprite;
        this = (BattleResultComponent_o *)QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
        if ( !*p_battleResult || !itemResult )
          goto LABEL_224;
        BattleResultItemComponent__setResultData(
          itemResult,
          (BattleDropItem_array *)v170,
          obj_basebg,
          obj_basebg_high,
          oldGame,
          eventId,
          (UserEventEntity_array *)eventItemResult,
          (UserEventPointEntity_array *)v166,
          (int64_t)v97,
          v171,
          FriendIconPrefab_high,
          (DropUpInfo_array *)resultSprite,
          (EventConquestInfo_array *)eventTutorial,
          firstClearRewardQp,
          (unsigned __int8)this & 1,
          *(BattleResultAddRewardBonus_o **)&(*p_battleResult)[1].fields.isAddRewardEffectSkip,
          v165);
        battleData = v172;
        v12 = v173;
        goto LABEL_116;
      }
LABEL_225:
      v163 = sub_B52A88(this);
      sub_B52A28(v163, 0LL);
    }
  }
  BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
LABEL_116:
  v108 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( *(_QWORD *)&v108[1].fields.isAddRewardEffectSkip )
  {
    v109 = v13->fields.itemResult;
    if ( !v109 )
      goto LABEL_224;
    getQpLabel = v109->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_224;
    mText = (System_Int32_array **)getQpLabel->fields.mText;
    v108[2].klass = (BattleResultComponent_c *)mText;
    sub_B52920((BattleServantConfConponent_o *)&v108[2], mText, v102, v103, v104, v105, v106, v107);
    v118 = v13->fields.itemResult;
    if ( !v118 )
      goto LABEL_224;
    nowQpLabel = v118->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_224;
    v120 = v13->fields.battleResult;
    if ( !v120 )
      goto LABEL_224;
    v121 = (System_Int32_array **)nowQpLabel->fields.mText;
    v120->fields.ultimateNowQpText = (struct System_String_o *)v121;
    sub_B52920(
      (BattleServantConfConponent_o *)&v120->fields.ultimateNowQpText,
      v121,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    if ( !*p_battleResult )
      goto LABEL_224;
    v122 = *(_QWORD *)&(*p_battleResult)[1].fields.isAddRewardEffectSkip;
    if ( !v122 )
      goto LABEL_224;
    v177 = *(_DWORD *)(v122 + 40) & ~(*(int *)(v122 + 40) >> 31);
    v123 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v123, 0LL);
    v124 = v13->fields.itemResult;
    if ( !v124 )
      goto LABEL_224;
    v125 = (Il2CppObject *)this;
    v126 = v124->fields.getQpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v127 = LocalizationManager__Get((System_String_o *)StringLiteral_11209/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v127, v125, 0LL);
    if ( !v126 )
      goto LABEL_224;
    UILabel__set_text(v126, (System_String_o *)this, 0LL);
    v128 = v13->fields.itemResult;
    if ( !v128 )
      goto LABEL_224;
    if ( !*p_battleResult )
      goto LABEL_224;
    v129 = *(_QWORD *)&(*p_battleResult)[1].fields.isAddRewardEffectSkip;
    if ( !v129 )
      goto LABEL_224;
    v130 = v128->fields.nowQpLabel;
    v176 = *(_DWORD *)(v129 + 44);
    v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_23682/*"{0:#,0}"*/, v131, 0LL);
    if ( !v130 )
      goto LABEL_224;
    UILabel__set_text(v130, (System_String_o *)this, 0LL);
    nextButtonSpr = (UIWidget_o *)v13->fields.nextButtonSpr;
    v179 = (UnityEngine_Color32_o)&v175;
    v175 = 0;
    UnityEngine_Color32___ctor(v179, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
    v180 = (UnityEngine_Color32_o)v175;
    *(UnityEngine_Color_o *)&v133 = UnityEngine_Color32__op_Implicit_41466640(v180, 0LL);
    if ( !nextButtonSpr )
      goto LABEL_224;
    UIWidget__set_color(nextButtonSpr, *(UnityEngine_Color_o *)&v133, 0LL);
    v108 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
  }
  this = (BattleResultComponent_o *)battleData->fields.quest_ent;
  if ( !this )
    goto LABEL_224;
  v137 = v13->fields.friendResult;
  bondsResult = (int32_t)v108[1].fields.bondsResult;
  bondsResult_high = HIDWORD(v108[1].fields.bondsResult);
  obj_fronttouch = (int64_t)v108[1].fields.obj_fronttouch;
  v141 = (int32_t)v108[1].fields.expResult;
  expResult_high = HIDWORD(v108[1].fields.expResult);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v137 )
    goto LABEL_224;
  BattleResultFriendComponent__setResultData(
    v137,
    bondsResult,
    bondsResult_high,
    obj_fronttouch,
    v141,
    expResult_high,
    (unsigned __int8)this & 1,
    v143);
  v144 = v13->fields.battleResult;
  if ( !v144 )
    goto LABEL_224;
  this = (BattleResultComponent_o *)v13->fields.eventItemResult;
  if ( !this )
    goto LABEL_224;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v144->fields.resultEventRewardInfos,
                                      (unsigned int)v144->fields.eventId,
                                      v144->fields.resultBoostItemRewardInfos,
                                      v144->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v145 = v13->fields.battleResult;
  if ( !v145 )
    goto LABEL_224;
  this = (BattleResultComponent_o *)v13->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_224;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v145->fields.resultDamageRewardInfos,
    (unsigned int)v145->fields.eventId,
    v145->fields.resultBoostItemRewardInfos,
    v145->fields.rewardInfos,
    this->klass[1]._1.name);
  eventFortificationItemResult = (UnityEngine_Object_o *)v13->fields.eventFortificationItemResult;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v147 = v13->fields.battleResult;
    if ( !v147 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_224;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v147->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v147->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v149 = v13->fields.battleResult;
    if ( !v149 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_224;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v149->fields.fortificationInfos,
      v148);
  }
  this = *p_eventTutorial;
  if ( !*p_eventTutorial )
    goto LABEL_224;
  this = (BattleResultComponent_o *)BattleEventTutorial__CheckHasResultPhaseTutorial((BattleEventTutorial_o *)this, 0LL);
  if ( !*p_battleResult )
    goto LABEL_224;
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
    goto LABEL_224;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__checkResultDispFlag(
                                      (BattleResultComponent_resultData_o *)this,
                                      512,
                                      0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 16, 0LL);
  }
  v150 = battleData->fields.battle_info;
  if ( !v150 )
    goto LABEL_224;
  myDeck = v150->fields.myDeck;
  if ( myDeck && (svts = myDeck->fields.svts) != 0LL && (max_length = svts->max_length, max_length >= 1) )
  {
    v154 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v154 >= max_length )
        goto LABEL_225;
      this = (BattleResultComponent_o *)svts->m_Items[v154];
      if ( !this )
        goto LABEL_224;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      if ( (int)++v154 >= max_length )
        goto LABEL_169;
    }
    v155 = 1;
  }
  else
  {
LABEL_169:
    v155 = 0;
  }
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_224;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1),
                                        0LL);
    v156 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_224;
      v157 = *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1);
      if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      }
      EventProgressValueSaveData_26896616 = EventInfoUIProgressControl__GetEventProgressValueSaveData_26896616(
                                              v157,
                                              0,
                                              0LL);
      v159 = (int)v156->fields.obj_fronttouch;
      LODWORD(v156) = 0;
      if ( EventProgressValueSaveData_26896616 != v159 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42AC2D7 )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42AC2D7 = 1;
        }
        v160 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v160 = TerminalPramsManager_TypeInfo;
        }
        v160->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v156) = 1;
      }
    }
  }
  else
  {
    LODWORD(v156) = 0;
  }
  if ( v155 & 1 | !battleData->fields.isRetryable )
    goto LABEL_196;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( (((unsigned int)v156 | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                                (BattleResultComponent_resultData_o *)this,
                                0LL)) & 1) != 0 )
  {
LABEL_196:
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2048, 0LL);
  }
  else
  {
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
    BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 2048, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult
    || (BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4096, 0LL),
        (this = *p_battleResult) == 0LL) )
  {
LABEL_224:
    sub_B52A5C(this, resultList);
  }
  v161 = this[2].fields.endtargetObject;
  if ( v161 && v161[1].klass )
    BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 4096, 0LL);
  if ( (BattleData__isBattleResultLoseQuestClear(battleData, 0LL)
     || BattleData__isBattleRetreatQuestClear(battleData, 0LL))
    && battleData->fields.isItemResultSkip )
  {
    if ( !BattleData__IsWarBoard(battleData, 0LL) )
      goto LABEL_213;
    this = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
    if ( BattleResultComponent_resultData__checkResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL) )
    {
      this = *p_battleResult;
      if ( !*p_battleResult )
        goto LABEL_224;
      BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
    }
    else
    {
LABEL_213:
      this = *p_battleResult;
      if ( !*p_battleResult )
        goto LABEL_224;
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
        goto LABEL_218;
      }
    }
    goto LABEL_224;
  }
LABEL_218:
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  isWin = BattleResultComponent_resultData__isWin((BattleResultComponent_resultData_o *)this, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ReceiveQuestEndResultInfo(v12, isWin, 0LL);
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
    sub_B52A5C(0LL, v3);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42B024E & 1) == 0 )
  {
    sub_B52984(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo);
    byte_42B024E = 1;
  }
  v3 = sub_B52A54(BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__42___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B52A5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x8
  CommonUI_o *v6; // x19
  BattleResultComponent___c_c *v7; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x20
  struct BattleResultComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__61_0; // x21
  Il2CppObject *v11; // x22
  struct BattleResultComponent___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_42B025E & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__);
    sub_B52984(&BattleResultComponent___c_TypeInfo);
    byte_42B025E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v2->static_fields->_QuestId_k__BackingField, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = TerminalPramsManager_TypeInfo;
    v6 = (CommonUI_o *)Instance;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v7 = BattleResultComponent___c_TypeInfo;
    mQuestRewardInfos = v5->static_fields->mQuestRewardInfos;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v7 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__61_0 = static_fields->__9__61_0;
    if ( !_9__61_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v11 = (Il2CppObject *)static_fields->__9;
      _9__61_0 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(_9__61_0, v11, Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, 0LL);
      v12 = BattleResultComponent___c_TypeInfo->static_fields;
      v12->__9__61_0 = _9__61_0;
      sub_B52920(
        (BattleServantConfConponent_o *)&v12->__9__61_0,
        (System_Int32_array **)_9__61_0,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
    }
    if ( !v6 )
      sub_B52A5C(v7, v4);
    CommonUI__OpenQuestClearReward(v6, mQuestRewardInfos, _9__61_0, 0LL);
  }
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

  if ( (byte_42B0247 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_10165/*"OpenResult"*/);
    sub_B52984(&StringLiteral_10710/*"Performance"*/);
    byte_42B0247 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10710/*"Performance"*/,
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
    sub_B52A5C(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10165/*"OpenResult"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenDataLostBattleResetDialog_b__68_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  MissionNotifyManager_o *fsm; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_42B0268 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B0268 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2D7 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2D7 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_42AD189 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD189 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  fsm = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !fsm )
    goto LABEL_27;
  MissionNotifyManager__StartPause(fsm, 0LL);
  if ( !byte_42AD18E )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD18E = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  fsm = (MissionNotifyManager_o *)this->fields.fsm;
  if ( !fsm )
LABEL_27:
    sub_B52A5C(fsm, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__60_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42B0267 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_13145/*"StartQuestClearReward"*/);
    byte_42B0267 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13145/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__45_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42B0266 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B0266 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__checkNew(
        BattleResultComponent_o *this,
        int32_t resultType,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleResultItemComponent_o *itemResult; // x0
  BattleDropItem_o *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x0
  BattleDropItem_o **v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleDropItem_o *NewDrop; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v30; // w0
  SummonAssetManager_o *Instance; // x21
  System_Action_o *v32; // x22
  __int64 *v33; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7

  if ( (byte_42B0257 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__);
    sub_B52984(&BattleResultComponent___c__DisplayClass53_0_TypeInfo);
    sub_B52984(&StringLiteral_9809/*"OPEN"*/);
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B0257 = 1;
  }
  v5 = sub_B52A54(BattleResultComponent___c__DisplayClass53_0_TypeInfo);
  BattleResultComponent___c__DisplayClass53_0___ctor((BattleResultComponent___c__DisplayClass53_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_37;
  *(_QWORD *)(v5 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  BattleResultComponent__ResetTimeScale(v14);
  *(_QWORD *)(v5 + 16) = 0LL;
  v15 = (BattleDropItem_o **)(v5 + 16);
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), 0LL, v16, v17, v18, v19, v20, v21);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_37;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, (const MethodInfo *)v7);
      goto LABEL_11;
    case 2:
      itemResult = (BattleResultItemComponent_o *)this->fields.eventItemResult;
      if ( !itemResult )
        goto LABEL_37;
      goto LABEL_10;
    case 3:
      itemResult = (BattleResultItemComponent_o *)this->fields.eventDamageItemResult;
      if ( !itemResult )
        goto LABEL_37;
LABEL_10:
      NewDrop = BattleResultEventItemComponent__getNewDrop(
                  (BattleResultEventItemComponent_o *)itemResult,
                  (const MethodInfo *)v7);
LABEL_11:
      v7 = NewDrop;
      *v15 = NewDrop;
      goto LABEL_19;
    case 4:
      eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v30 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v7 = 0LL;
      if ( !v30 )
        goto LABEL_18;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_37;
      v7 = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, 0LL);
LABEL_18:
      *v15 = v7;
LABEL_19:
      sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)v7, v23, v24, v25, v26, v27, v28);
LABEL_20:
      if ( !*v15 )
      {
        p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
        ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
        {
          itemResult = (BattleResultItemComponent_o *)*p_ServantRewardActionComp;
          if ( !*p_ServantRewardActionComp )
            goto LABEL_37;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)itemResult,
                                                 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_B52920(
            (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
            0LL,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_37;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v33 = &StringLiteral_9355/*"NEXT"*/;
          goto LABEL_36;
        }
LABEL_37:
        sub_B52A5C(itemResult, v7);
      }
      Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v32 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(
        v32,
        (Il2CppObject *)v5,
        Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_37;
      SummonAssetManager__LoadSummonAssets(Instance, v32, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_37;
      v33 = &StringLiteral_9809/*"OPEN"*/;
LABEL_36:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v33, 0LL);
      return;
    default:
      goto LABEL_20;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42B0248 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_12426/*"START_Begin"*/);
    byte_42B0248 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12426/*"START_Begin"*/, 0LL);
}


void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42B024D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B024D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42B0258 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_5538/*"END_PROC"*/);
    byte_42B0258 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B52A5C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5538/*"END_PROC"*/, 0LL);
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  SummonAssetManager_o *Instance; // x23
  System_Int32_array **Prefab; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42B025B & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_42B025B = 1;
  }
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_16;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(transform, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v12, v13, v14, v15, v16, v17);
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(
                                          Instance,
                                          (UnityEngine_Transform_o *)transform,
                                          1,
                                          0LL),
        *p_ServantRewardActionComp = (struct ServantRewardAction_o *)Prefab,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
          Prefab,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_28961064(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_16:
    sub_B52A5C(transform, v9);
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
  UserServantEntity_o *Entity; // x0
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  UserServantEntity_o *v16; // x22
  UnityEngine_Object_o *gameObject; // x25
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  SummonAssetManager_o *v24; // x25
  System_Int32_array **Prefab; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  ServantRewardAction_o *v32; // x24
  __int64 v33; // x25
  __int64 v34; // x26
  int32_t v35; // w0
  __int128 v36; // q1
  int32_t v37; // w23
  int64_t v38; // x0
  __int64 v39; // x8
  int64_t v40; // x22
  int32_t v41; // w0
  __int128 v42; // q1
  int32_t v43; // w21
  int64_t v44; // x0
  __int64 v45; // x8
  int64_t v46; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_42B025A & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_42B025A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23E2500 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v16 = Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)*p_ServantRewardActionComp;
    if ( !*p_ServantRewardActionComp )
      goto LABEL_35;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v18, v19, v20, v21, v22, v23);
  }
  v24 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v24 )
    goto LABEL_35;
  Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(
                                    v24,
                                    (UnityEngine_Transform_o *)Instance,
                                    1,
                                    0LL);
  *p_ServantRewardActionComp = (struct ServantRewardAction_o *)Prefab;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
    Prefab,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  if ( !v16 )
    goto LABEL_35;
  v32 = *p_ServantRewardActionComp;
  v34 = *(_QWORD *)&v16->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&v16->fields.svtId.fields.fakeValue;
  if ( isDoEffect )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v50.fields.currentCryptoKey = v34;
    *(_QWORD *)&v50.fields.fakeValue = v33;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v50, 0LL);
    v36 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
    v37 = v35;
    *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v49.fields.fakeValue = v36;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v48 = v49;
    v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v48, 0LL);
    v39 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v51.fields.fakeValue = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
    v40 = v38;
    *(_QWORD *)&v51.fields.currentCryptoKey = v39;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v51, 0LL);
    if ( v32 )
    {
      ServantRewardAction__Setup(v32, v37, v40, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_33;
    }
LABEL_35:
    sub_B52A5C(Instance, v12);
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v52.fields.currentCryptoKey = v34;
  *(_QWORD *)&v52.fields.fakeValue = v33;
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v52, 0LL);
  v42 = *(_OWORD *)&v16->fields.id.fields.fakeValue;
  v43 = v41;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v16->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v42;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v47 = v49;
  v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44789576(&v47, 0LL);
  v45 = *(_QWORD *)&v16->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v53.fields.fakeValue = *(_QWORD *)&v16->fields.limitCount.fields.fakeValue;
  v46 = v44;
  *(_QWORD *)&v53.fields.currentCryptoKey = v45;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44786420(v53, 0LL);
  if ( !v32 )
    goto LABEL_35;
  ServantRewardAction__Setup(v32, v43, v46, (int32_t)Instance, 1, 1, 1, 2, 0LL);
LABEL_33:
  Instance = (DataManager_o *)*p_ServantRewardActionComp;
  if ( !*p_ServantRewardActionComp )
    goto LABEL_35;
  ServantRewardAction__Play((ServantRewardAction_o *)Instance, action, 0.0, 0LL);
}


void __fastcall BattleResultComponent__openTouchWait(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_B52A5C(0LL, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_B52A5C(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_B52A5C(0LL, flg);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42B0259 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_BattleResultComponent_endNewView__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&StringLiteral_9809/*"OPEN"*/);
    sub_B52984(&StringLiteral_9355/*"NEXT"*/);
    byte_42B0259 = 1;
  }
  if ( userSvtId < 1 )
  {
    p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
    ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
    {
      Instance = (UnityEngine_Component_o *)*p_ServantRewardActionComp;
      if ( !*p_ServantRewardActionComp )
        goto LABEL_19;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Instance, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_35617168(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_B52920(
        (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
        0LL,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v12 = &StringLiteral_9355/*"NEXT"*/;
      goto LABEL_18;
    }
LABEL_19:
    sub_B52A5C(Instance, v10);
  }
  v7 = Gift__IsEventSvtGet(type, 0LL);
  v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v7, v7, v8, v9);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  v12 = &StringLiteral_9809/*"OPEN"*/;
LABEL_18:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v12, 0LL);
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
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v4; // x20
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_42AD826 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B52984(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_42AD826 = 1;
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
      sub_B52A5C(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForSeconds_o *)sub_B52A54(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v4, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_B52920(&this->fields.__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
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
  Il2CppObject *v1; // x19
  struct BattleResultComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42AD823 & 1) == 0 )
  {
    sub_B52984(&BattleResultComponent___c_TypeInfo);
    byte_42AD823 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BattleResultComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultComponent___c_o *)v1;
  sub_B52920(static_fields);
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
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42AD824 & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AD824 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  static_fields->mQuestRewardInfos = 0LL;
  sub_B52920(&static_fields->mQuestRewardInfos);
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
  if ( (byte_42AD825 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    this = (BattleResultComponent___c__DisplayClass53_0_o *)sub_B52984(&Method_BattleResultComponent_endNewView__);
    byte_42AD825 = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsCommandCode_28236720(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.newDrop;
    if ( v4 )
    {
      userSvtId = v4->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v7 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
      System_Action___ctor(v7, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v7, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B52A5C(this, method);
  }
  v8 = v2->fields.newDrop;
  if ( !v8 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsEventSvtGet_28236364(v8->fields.type, 0LL);
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  v10 = v9->fields.userSvtId;
  v11 = (Il2CppObject *)v2->fields.__4__this;
  v12 = (char)this;
  v13 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v13, v11, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v11 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v11, v10, v12 & 1, v12 & 1, v13, 0LL);
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
  __int64 v8; // x0

  getJoinSvts = this->fields.getJoinSvts;
  if ( !getJoinSvts )
    return 0;
  max_length = getJoinSvts->max_length;
  if ( max_length < 1 )
    return 0;
  v4 = 0LL;
  m_Items = getJoinSvts->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v4 >= max_length )
    {
      v8 = sub_B52A88(this);
      sub_B52A28(v8, 0LL);
    }
    v6 = m_Items[v4];
    if ( !v6 )
      sub_B52A5C(this, method);
    if ( v6->fields.isNew )
      break;
    if ( (int)++v4 >= max_length )
      return 0;
  }
  return 1;
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