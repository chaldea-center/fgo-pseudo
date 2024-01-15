void __fastcall BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleResultEventItemComponent_o *eventItemResult; // x0
  bool Items; // w0
  __int64 *v6; // x9

  if ( (byte_40FA35B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3080/*"CLOSE"*/, method);
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, v3);
    byte_40FA35B = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (Items = BattleResultEventItemComponent__isGetItems(eventItemResult, method), !this->fields.fsm) )
  {
    sub_B170D4();
  }
  if ( Items )
    v6 = &StringLiteral_9268/*"NEXT"*/;
  else
    v6 = &StringLiteral_3080/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(this->fields.fsm, (System_String_o *)*v6, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UIWidget_o *nextButtonSpr; // x20
  int v5; // s0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FA358 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA358 = 1;
  }
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard
    || (UnityEngine_GameObject__SetActive(touchGuard, 0, 0LL),
        nextButtonSpr = (UIWidget_o *)this->fields.nextButtonSpr,
        *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL),
        !nextButtonSpr)
    || (UIWidget__set_color(nextButtonSpr, *(UnityEngine_Color_o *)&v5, 0LL), (fsm = this->fields.fsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AndroidBackKeyManager_c *v8; // x0
  ServantAssetLoadManager_o *Instance; // x0
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  BattleRetryConfirmComponent_o *v11; // x0
  UnityEngine_GameObject_o *endtargetObject; // x0

  if ( (byte_40FA362 & 1) == 0 )
  {
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_21873/*"sendFsmEvent"*/, v6);
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, v7);
    byte_40FA362 = 1;
  }
  v8 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v8 = AndroidBackKeyManager_TypeInfo;
  }
  v8->static_fields->ToastEnabled = 0;
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v8);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v11 = this->fields.battleRetryConfirmComponent;
    if ( !v11 )
      goto LABEL_18;
    BattleRetryConfirmComponent__Close(v11, 0LL);
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  endtargetObject = this->fields.endtargetObject;
  if ( !endtargetObject )
LABEL_18:
    sub_B170D4();
  UnityEngine_GameObject__SendMessage_40693300(
    endtargetObject,
    (System_String_o *)StringLiteral_21873/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5481/*"END_PROC"*/,
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
  if ( (byte_40FA365 & 1) == 0 )
  {
    this = (BattleResultComponent_o *)sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, isDecide);
    byte_40FA365 = 1;
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
      sub_B170D4();
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9268/*"NEXT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x21
  int v8; // s0
  UnityEngine_GameObject_o *obj_basebg; // x0
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  BattleResultBondsComponent_o *bondsResult; // x0
  const MethodInfo *v14; // x1
  BattleResultExpComponent_o *expResult; // x0
  const MethodInfo *v16; // x1
  BattleResultItemComponent_o *itemResult; // x0
  const MethodInfo *v18; // x1
  BattleResultEventItemComponent_o *eventItemResult; // x0
  const MethodInfo *v20; // x1
  BattleResultEventItemComponent_o *eventDamageItemResult; // x0
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  BattleResultEventItemComponent_o *v25; // x0
  BattleResultFriendComponent_o *friendResult; // x0
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  BattleRetryConfirmComponent_o *v28; // x0
  UnityEngine_Component_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_GameObject_o *v38; // x0
  struct ScreenTouchInformationComponent_o *Component_srcLineSprite; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0

  if ( (byte_40FA34C & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, releasePerformanceObject);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA34C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v8, 0LL);
  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(obj_basebg, 0, 0LL);
  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL);
  bondsResult = this->fields.bondsResult;
  if ( !bondsResult )
    goto LABEL_38;
  BattleResultBondsComponent__Init(bondsResult, 0LL);
  expResult = this->fields.expResult;
  if ( !expResult )
    goto LABEL_38;
  BattleResultExpComponent__Init(expResult, v14);
  itemResult = this->fields.itemResult;
  if ( !itemResult )
    goto LABEL_38;
  BattleResultItemComponent__Init(itemResult, v16);
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult )
    goto LABEL_38;
  BattleResultEventItemComponent__Init(eventItemResult, v18);
  eventDamageItemResult = (BattleResultEventItemComponent_o *)this->fields.eventDamageItemResult;
  if ( !eventDamageItemResult )
    goto LABEL_38;
  BattleResultEventItemComponent__Init(eventDamageItemResult, v20);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL) )
  {
    v25 = (BattleResultEventItemComponent_o *)this->fields.eventFortificationItemResult;
    if ( !v25 )
      goto LABEL_38;
    BattleResultEventItemComponent__Init(v25, v23);
  }
  friendResult = this->fields.friendResult;
  if ( !friendResult )
    goto LABEL_38;
  BattleResultFriendComponent__Init(friendResult, releasePerformanceObject, v24);
  battleRetryConfirmComponent = (UnityEngine_Object_o *)this->fields.battleRetryConfirmComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(battleRetryConfirmComponent, 0LL, 0LL) )
  {
    v28 = this->fields.battleRetryConfirmComponent;
    if ( !v28 )
      goto LABEL_38;
    BattleRetryConfirmComponent__Init(v28, 0LL);
  }
  p_ServantRewardActionComp = (UnityEngine_Component_o **)&this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    if ( !*p_ServantRewardActionComp )
      goto LABEL_38;
    v31 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_ServantRewardActionComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(v31, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v32, v33, v34, v35, v36, v37);
  }
  v38 = this->fields.obj_fronttouch;
  if ( !v38
    || (Component_srcLineSprite = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                v38,
                                                                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = Component_srcLineSprite,
        p_screenTouch = &this->fields.screenTouch,
        sub_B16F98(
          (BattleServantConfConponent_o *)p_screenTouch,
          (System_Int32_array **)Component_srcLineSprite,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46),
        (v47 = (UnityEngine_Component_o *)*(p_screenTouch - 11)) == 0LL)
    || (v48 = UnityEngine_Component__get_gameObject(v47, 0LL)) == 0LL )
  {
LABEL_38:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(v48, 1, 0LL);
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
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x20
  TerminalPramsManager_c *v11; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v14; // w20
  WarQuestSelectionMaster_o *v15; // x21
  int64_t UserId; // x0
  PlayMakerFSM_o *fsm; // x0
  PlayMakerFSM_o *v18; // x0
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FA36A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v3);
    sub_B16FFC(&DataManager_TypeInfo, v4);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_12204/*"SKIP"*/, v7);
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, v8);
    byte_40FA36A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    byte_40F6044 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult || !Master_WarQuestSelectionMaster )
    goto LABEL_31;
  EventDataLostBattleId = EventDataLostBattleMaster__GetEventDataLostBattleId(
                            Master_WarQuestSelectionMaster,
                            v11->static_fields->_WarId_k__BackingField,
                            battleResult->fields.eventId,
                            0LL);
  if ( EventDataLostBattleId == -1 )
    goto LABEL_29;
  v14 = EventDataLostBattleId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v15 )
LABEL_31:
    sub_B170D4();
  if ( UserEventDataLostMaster__TryGetEntity((UserEventDataLostMaster_o *)v15, &entity, UserId, v14, 0LL) )
  {
    if ( !entity )
      goto LABEL_31;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0LL) )
    {
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_31;
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9268/*"NEXT"*/, 0LL);
    }
  }
LABEL_29:
  v18 = this->fields.fsm;
  if ( !v18 )
    goto LABEL_31;
  PlayMakerFSM__SendEvent(v18, (System_String_o *)StringLiteral_12204/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenBonds(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  UnityEngine_GameObject_o *obj_basebg; // x0
  BattleResultBondsComponent_o *bondsResult; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL), (obj_basebg = this->fields.obj_basebg) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_basebg, 1, 0LL), (bondsResult = this->fields.bondsResult) == 0LL) )
  {
    sub_B170D4();
  }
  BattleResultBondsComponent__Open(bondsResult, 0LL);
}


void __fastcall BattleResultComponent__OpenDataLostBattleResetDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t eventId; // w20
  TerminalPramsManager_c *v11; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v13; // x22

  if ( (byte_40FA36B & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, v6);
    sub_B16FFC(&DataLostResetManager_TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40FA36B = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    sub_B170D4();
  eventId = battleResult->fields.eventId;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6044 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v11->static_fields->_WarId_k__BackingField;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__,
    0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__OpenBattleResultResetDialog(eventId, WarId_k__BackingField, v13, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  UnityEngine_Component_o *resultSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *eventItemResult; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  UnityEngine_GameObject_o *obj_basebg; // x0
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0
  const MethodInfo *v13; // x1
  BattleResultEventItemComponent_o *v14; // x0
  const MethodInfo *v15; // x1
  BattleResultEventItemComponent_o *v16; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FA35C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&StringLiteral_12204/*"SKIP"*/, v3);
    byte_40FA35C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  resultSprite = (UnityEngine_Component_o *)this->fields.resultSprite;
  if ( !resultSprite )
    goto LABEL_19;
  gameObject = UnityEngine_Component__get_gameObject(resultSprite, 0LL);
  if ( !gameObject )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  eventItemResult = (UnityEngine_Component_o *)this->fields.eventItemResult;
  if ( !eventItemResult )
    goto LABEL_19;
  v8 = UnityEngine_Component__get_gameObject(eventItemResult, 0LL);
  if ( !v8 )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(v8, 0, 0LL);
  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL);
  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive(obj_basebg, 1, 0LL);
  eventDamageItemResult = this->fields.eventDamageItemResult;
  if ( !eventDamageItemResult )
    goto LABEL_19;
  usrEvent = eventDamageItemResult->fields.usrEvent;
  if ( usrEvent
    && UserEventRaidMaster__getTotalDamagePoint(usrEvent, eventDamageItemResult->fields.currentEventId, 0LL) >= 1 )
  {
    v14 = (BattleResultEventItemComponent_o *)this->fields.eventDamageItemResult;
    if ( !v14 )
      goto LABEL_19;
    if ( BattleResultEventItemComponent__isGetItems(v14, v13) )
    {
      v16 = (BattleResultEventItemComponent_o *)this->fields.eventDamageItemResult;
      if ( v16 )
      {
        BattleResultEventItemComponent__Open(v16, v15);
        return;
      }
LABEL_19:
      sub_B170D4();
    }
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12204/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  UnityEngine_Component_o *resultSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *eventItemResult; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Component_o *eventDamageItemResult; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  UnityEngine_GameObject_o *obj_basebg; // x0
  UnityEngine_Object_o *eventFortificationItemResult; // x20
  const MethodInfo *v15; // x1
  BattleResultEventFortificationItemComponent_o *v16; // x0
  const MethodInfo *v17; // x1
  BattleResultEventItemComponent_o *v18; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FA369 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12204/*"SKIP"*/, v4);
    byte_40FA369 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  resultSprite = (UnityEngine_Component_o *)this->fields.resultSprite;
  if ( !resultSprite )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject(resultSprite, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  eventItemResult = (UnityEngine_Component_o *)this->fields.eventItemResult;
  if ( !eventItemResult )
    goto LABEL_22;
  v9 = UnityEngine_Component__get_gameObject(eventItemResult, 0LL);
  if ( !v9 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v9, 0, 0LL);
  eventDamageItemResult = (UnityEngine_Component_o *)this->fields.eventDamageItemResult;
  if ( !eventDamageItemResult )
    goto LABEL_22;
  v11 = UnityEngine_Component__get_gameObject(eventDamageItemResult, 0LL);
  if ( !v11 )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(v11, 0, 0LL);
  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL);
  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(obj_basebg, 1, 0LL);
  eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL) )
  {
    v16 = this->fields.eventFortificationItemResult;
    if ( !v16 )
      goto LABEL_22;
    if ( BattleResultEventFortificationItemComponent__IsFortificationInfos(v16, v15) )
    {
      v18 = (BattleResultEventItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( v18 )
      {
        BattleResultEventItemComponent__OpenEventFortification(v18, v17);
        return;
      }
LABEL_22:
      sub_B170D4();
    }
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_22;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12204/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  UnityEngine_Component_o *resultSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  UnityEngine_GameObject_o *obj_basebg; // x0
  const MethodInfo *v9; // x1
  BattleResultEventItemComponent_o *eventItemResult; // x0
  const MethodInfo *v11; // x1
  BattleResultEventItemComponent_o *v12; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FA35A & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B16FFC(&StringLiteral_12204/*"SKIP"*/, v3);
    byte_40FA35A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  CommonUI__CloseNotificationDialog(Instance, 0LL);
  resultSprite = (UnityEngine_Component_o *)this->fields.resultSprite;
  if ( !resultSprite )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(resultSprite, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL);
  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive(obj_basebg, 1, 0LL);
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult )
    goto LABEL_14;
  if ( BattleResultEventItemComponent__isGetItems(eventItemResult, v9) )
  {
    v12 = this->fields.eventItemResult;
    if ( v12 )
    {
      BattleResultEventItemComponent__Open(v12, v11);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_14;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12204/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenExp(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  UnityEngine_GameObject_o *obj_basebg; // x0
  const MethodInfo *v5; // x1
  BattleResultExpComponent_o *expResult; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL), (obj_basebg = this->fields.obj_basebg) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_basebg, 1, 0LL), (expResult = this->fields.expResult) == 0LL) )
  {
    sub_B170D4();
  }
  BattleResultExpComponent__Open(expResult, v5);
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
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w21
  WebViewManager_o *v16; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  QuestEntity_o *Entity; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  MapControl_QuestInfo_o *v23; // x20
  int32_t questId; // w23
  __int64 v25; // x1
  bool IsQuestClear_25438860; // w23
  TerminalPramsManager_c *v27; // x0
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v30; // w22
  __int64 v31; // x1
  clsQuestCheck_o *v32; // x21
  TerminalPramsManager_c *v33; // x0
  TerminalPramsManager_c *v34; // x0
  WebViewManager_o *v35; // x0
  const MethodInfo *v36; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FA366 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&boostId);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_B16FFC(&MapControl_QuestInfo_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    byte_40FA366 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  BYTE4(Instance[1].fields.baseWindow) = 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    byte_40F6057 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v16 )
    goto LABEL_46;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)v16,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_46;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              MasterData_WarQuestSelectionMaster,
                              QuestId_k__BackingField,
                              (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v23 = (MapControl_QuestInfo_o *)sub_B170CC(MapControl_QuestInfo_TypeInfo, v19, v20, v21, v22);
  MapControl_QuestInfo___ctor(v23, 0LL);
  if ( !v23 )
    goto LABEL_46;
  MapControl_QuestInfo__SetTerminalParamsValue(v23, 0LL);
  questId = v23->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25438860 = CondType__IsQuestClear_25438860(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v25);
    byte_40F6058 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( !Entity )
    goto LABEL_46;
  CampaignCostCalcValue = QuestEntity__GetCampaignCostCalcValue(
                            Entity,
                            QuestId_k__BackingField,
                            v27->static_fields->_PhaseCnt_k__BackingField,
                            !IsQuestClear_25438860,
                            &fixedVal,
                            0LL);
  v23->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume(Entity, CampaignCostCalcValue, 0LL);
  v23->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v30 = fixedVal;
  else
    v30 = ActConsume;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v32 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6974 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v31);
    byte_40F6974 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  if ( !v32 )
    goto LABEL_46;
  if ( !clsQuestCheck__CheckQuestPlayable(v32, v23, v33->static_fields->_EndTime_k__BackingField, boostId, 0LL) )
    return;
  v34 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v34 = TerminalPramsManager_TypeInfo;
  }
  v34->static_fields->lastPlayQuestConsumeAp = v30;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  v35 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !v35 )
LABEL_46:
    sub_B170D4();
  LODWORD(v35[1].fields.webViewBase) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)v35, boostId, v36);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleResultComponent_resultData_o *battleResult; // x0
  CommonUI_o *Instance; // x0
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  const MethodInfo *v8; // x1
  BattleResultFriendComponent_o *friendResult; // x0
  const MethodInfo *v10; // x0

  if ( (byte_40FA359 & 1) == 0 )
  {
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&StringLiteral_12992/*"StartQuestClearReward"*/, v4);
    byte_40FA359 = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_13;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12992/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (obj_fronttouch = this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL), (friendResult = this->fields.friendResult) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  BattleResultFriendComponent__Open(friendResult, v8);
  BattleResultComponent__ResetTimeScale(v10);
}


void __fastcall BattleResultComponent__OpenItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_String_o *eventEndTitle; // x8
  WebViewManager_o *Instance; // x0
  System_String_o *v7; // x20
  System_String_o *eventEndMessage; // x21
  CommonUI_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  NotificationDialog_ClickDelegate_o *v14; // x23
  UnityEngine_Component_o *resultSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  UnityEngine_GameObject_o *obj_basebg; // x0
  const MethodInfo *v19; // x1
  BattleResultItemComponent_o *itemResult; // x0

  if ( (byte_40FA352 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultComponent_endCloseEndEventMessage__, method);
    sub_B16FFC(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_40FA352 = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields.m_stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v9 = (CommonUI_o *)Instance;
    v14 = (NotificationDialog_ClickDelegate_o *)sub_B170CC(
                                                  NotificationDialog_ClickDelegate_TypeInfo,
                                                  v10,
                                                  v11,
                                                  v12,
                                                  v13);
    NotificationDialog_ClickDelegate___ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v9 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_18239760(
      v9,
      v7,
      eventEndMessage,
      v14,
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
    || (gameObject = UnityEngine_Component__get_gameObject(resultSprite, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL), (obj_fronttouch = this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL), (obj_basebg = this->fields.obj_basebg) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_basebg, 1, 0LL), (itemResult = this->fields.itemResult) == 0LL) )
  {
LABEL_13:
    sub_B170D4();
  }
  BattleResultItemComponent__Open(itemResult, v19);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  BattleRetryConfirmComponent_o *v11; // x20
  BattleWindowComponent_EndCall_o *v12; // x21
  UnityEngine_GameObject_o *endtargetObject; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  BattlePerformance_o *klass; // x0

  if ( (byte_40FA363 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleResultComponent__OpenRetryQuest_b__60_0__, method);
    sub_B16FFC(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FA363 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_16;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v11 = this->fields.battleRetryConfirmComponent;
    v12 = (BattleWindowComponent_EndCall_o *)sub_B170CC(BattleWindowComponent_EndCall_TypeInfo, v7, v8, v9, v10);
    BattleWindowComponent_EndCall___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleResultComponent__OpenRetryQuest_b__60_0__,
      0LL);
    if ( !v11 )
      goto LABEL_16;
    BattleRetryConfirmComponent__Open(v11, v12, 0LL);
  }
  endtargetObject = this->fields.endtargetObject;
  if ( !endtargetObject )
LABEL_16:
    sub_B170D4();
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      endtargetObject,
                                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      klass = (BattlePerformance_o *)Component_srcLineSprite[2].klass;
      if ( klass )
      {
        BattlePerformance__ClearObjForceDestroy(klass, 0LL);
        return;
      }
    }
    goto LABEL_16;
  }
}


void __fastcall BattleResultComponent__OpenTutorial(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleEventTutorial_o *eventTutorial; // x0
  BattleEventTutorial_o *v6; // x0
  bool isResult; // w0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  BattleEventTutorial_o *v12; // x20
  System_Action_o *v13; // x21
  BattleResultComponent_resultData_o *battleResult; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  BattleEventTutorial_o *v19; // x20
  System_Action_o *v20; // x21
  BattleEventTutorial_o *v21; // x0
  BattleResultComponent_resultData_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  PlayMakerFSM_o *fsm; // x0
  BattleEventTutorial_o *v28; // x20
  System_Action_o *v29; // x21

  if ( (byte_40FA351 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleResultComponent_OpenTutorial__, v3);
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, v4);
    byte_40FA351 = 1;
  }
  eventTutorial = this->fields.eventTutorial;
  if ( !eventTutorial )
    goto LABEL_23;
  if ( !BattleEventTutorial__isResultPhase(eventTutorial, 0LL) )
    goto LABEL_19;
  v6 = this->fields.eventTutorial;
  if ( !v6 )
    goto LABEL_23;
  isResult = BattleEventTutorial__isResult(v6, 0LL);
  v12 = this->fields.eventTutorial;
  if ( isResult )
  {
    v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v12 )
    {
      BattleEventTutorial__callResult(v12, v13, 0LL);
      return;
    }
LABEL_23:
    sub_B170D4();
  }
  if ( !v12 )
    goto LABEL_23;
  if ( BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0LL) )
  {
    battleResult = this->fields.battleResult;
    if ( !battleResult )
      goto LABEL_23;
    if ( BattleResultComponent_resultData__isWin(battleResult, 0LL) )
    {
      v19 = this->fields.eventTutorial;
      v20 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
      if ( !v19 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v19, v20, 0LL);
      return;
    }
  }
  v21 = this->fields.eventTutorial;
  if ( !v21 )
    goto LABEL_23;
  if ( !BattleEventTutorial__isResultLose(v21, 0LL) )
    goto LABEL_19;
  v22 = this->fields.battleResult;
  if ( !v22 )
    goto LABEL_23;
  if ( !BattleResultComponent_resultData__isWin(v22, 0LL) )
  {
    v28 = this->fields.eventTutorial;
    v29 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v23, v24, v25, v26);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( !v28 )
      goto LABEL_23;
    BattleEventTutorial__callResultLose(v28, v29, 0LL);
  }
  else
  {
LABEL_19:
    fsm = this->fields.fsm;
    if ( !fsm )
      goto LABEL_23;
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  TerminalPramsManager_c *v13; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v17; // x23
  BattleSetupInfo_o *v18; // x0
  Il2CppObject *v19; // x20
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40FA367 & 1) == 0 )
  {
    sub_B16FFC(&BattleSetupInfo_TypeInfo, *(_QWORD *)&boostId);
    sub_B16FFC(&RandomLimitCountManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B16FFC(&SoundManager_TypeInfo, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    byte_40FA367 = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  BattleResultComponent__ResetTimeScale(v8);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.8, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    byte_40F6044 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v13->static_fields->_WarId_k__BackingField;
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6057 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v9);
    v13 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v13->static_fields->_PhaseCnt_k__BackingField;
  v17 = (BattleSetupInfo_o *)sub_B170CC(BattleSetupInfo_TypeInfo, v9, v10, v11, v12);
  BattleSetupInfo___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_33;
  v18 = BattleSetupInfo__ConvertBattleSetupInfo(
          v17,
          WarId_k__BackingField,
          QuestId_k__BackingField,
          PhaseCnt_k__BackingField,
          0,
          0,
          0,
          0LL);
  v19 = (Il2CppObject *)v18;
  if ( boostId )
  {
    if ( !v18 )
      goto LABEL_33;
    v18->fields.boostId = boostId;
  }
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_33:
    sub_B170D4();
  AvalonSceneManager__pushScene(Instance, 35, 1, v19, 0LL);
}


void __fastcall BattleResultComponent__QpFix(BattleResultComponent_o *this, const MethodInfo *method)
{
  struct BattleResultItemComponent_o *itemResult; // x9
  struct BattleResultComponent_resultData_o *battleResult; // x8
  UILabel_o *getQpLabel; // x0
  struct BattleResultItemComponent_o *v6; // x9
  struct BattleResultComponent_resultData_o *v7; // x8
  UILabel_o *nowQpLabel; // x0

  itemResult = this->fields.itemResult;
  if ( !itemResult
    || (battleResult = this->fields.battleResult) == 0LL
    || (getQpLabel = itemResult->fields.getQpLabel) == 0LL
    || (UILabel__set_text(getQpLabel, battleResult->fields.ultimateGetQpText, 0LL), (v6 = this->fields.itemResult) == 0LL)
    || (v7 = this->fields.battleResult) == 0LL
    || (nowQpLabel = v6->fields.nowQpLabel) == 0LL )
  {
    sub_B170D4();
  }
  UILabel__set_text(nowQpLabel, v7->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  ScreenTouchInformationComponent_o *v4; // x0
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_40FA34F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FA34F = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v4 = this->fields.screenTouch;
    if ( !v4 || (ScreenTouchInformationComponent__ResetPlayScale(v4, 0LL), (v5 = this->fields.screenTouch) == 0LL) )
      sub_B170D4();
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA368 & 1) == 0 )
  {
    sub_B16FFC(&BattlePerformance_TypeInfo, v1);
    byte_40FA368 = 1;
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
  __int64 v17; // x2
  __int64 v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Object_array *v25; // x20
  __int64 v26; // x0
  System_Int32_array **v27; // x1
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Int32_array **v44; // x21
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x21
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x21
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x21
  System_Collections_Hashtable_o *v98; // x0
  int v99; // [xsp+Ch] [xbp-34h] BYREF
  int v100; // [xsp+10h] [xbp-30h] BYREF
  int v101; // [xsp+14h] [xbp-2Ch] BYREF
  int v102; // [xsp+18h] [xbp-28h] BYREF
  int v103; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40FA355 & 1) == 0 )
  {
    sub_B16FFC(&iTween_EaseType_TypeInfo, method);
    sub_B16FFC(&object___TypeInfo, v3);
    sub_B16FFC(&float_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v5);
    sub_B16FFC(&StringLiteral_12574/*"ScrollBarMotionCompleteValue"*/, v6);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v7);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v8);
    sub_B16FFC(&StringLiteral_17881/*"delay"*/, v9);
    sub_B16FFC(&StringLiteral_12575/*"ScrollBarMotionUpdateValue"*/, v10);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v11);
    sub_B16FFC(&StringLiteral_18045/*"easeType"*/, v12);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v13);
    sub_B16FFC(&iTween_TypeInfo, v14);
    byte_40FA355 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v18 = sub_B17014(object___TypeInfo, 14LL, v17);
  if ( !v18 )
    sub_B170D4();
  v25 = (System_Object_array *)v18;
  v26 = StringLiteral_18842/*"from"*/;
  if ( StringLiteral_18842/*"from"*/ )
  {
    v26 = sub_B170BC(StringLiteral_18842/*"from"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_18842/*"from"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( !v25->max_length )
    goto LABEL_68;
  v25->m_Items[0] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)v25->m_Items, v27, v19, v20, v21, v22, v23, v24);
  v103 = 0;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v103);
  v33 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
  }
  if ( v25->max_length <= 1 )
    goto LABEL_68;
  v25->m_Items[1] = (Il2CppObject *)v33;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[1], v33, v19, v28, v29, v30, v31, v32);
  v26 = StringLiteral_22621/*"to"*/;
  if ( StringLiteral_22621/*"to"*/ )
  {
    v26 = sub_B170BC(StringLiteral_22621/*"to"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_22621/*"to"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 2 )
    goto LABEL_68;
  v25->m_Items[2] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[2], v27, v19, v34, v35, v36, v37, v38);
  v102 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v102);
  v44 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
  }
  if ( v25->max_length <= 3 )
    goto LABEL_68;
  v25->m_Items[3] = (Il2CppObject *)v44;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[3], v44, v19, v39, v40, v41, v42, v43);
  v26 = StringLiteral_21182/*"onupdate"*/;
  if ( StringLiteral_21182/*"onupdate"*/ )
  {
    v26 = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_21182/*"onupdate"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 4 )
    goto LABEL_68;
  v25->m_Items[4] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[4], v27, v19, v45, v46, v47, v48, v49);
  v26 = StringLiteral_12575/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12575/*"ScrollBarMotionUpdateValue"*/ )
  {
    v26 = sub_B170BC(StringLiteral_12575/*"ScrollBarMotionUpdateValue"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_12575/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 5 )
    goto LABEL_68;
  v25->m_Items[5] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[5], v27, v19, v50, v51, v52, v53, v54);
  v26 = StringLiteral_21173/*"oncomplete"*/;
  if ( StringLiteral_21173/*"oncomplete"*/ )
  {
    v26 = sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 6 )
    goto LABEL_68;
  v25->m_Items[6] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[6], v27, v19, v55, v56, v57, v58, v59);
  v26 = StringLiteral_12574/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12574/*"ScrollBarMotionCompleteValue"*/ )
  {
    v26 = sub_B170BC(StringLiteral_12574/*"ScrollBarMotionCompleteValue"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_12574/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 7 )
    goto LABEL_68;
  v25->m_Items[7] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[7], v27, v19, v60, v61, v62, v63, v64);
  v26 = StringLiteral_18045/*"easeType"*/;
  if ( StringLiteral_18045/*"easeType"*/ )
  {
    v26 = sub_B170BC(StringLiteral_18045/*"easeType"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_18045/*"easeType"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 8 )
    goto LABEL_68;
  v25->m_Items[8] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[8], v27, v19, v65, v66, v67, v68, v69);
  v101 = 17;
  v26 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v101);
  v75 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
  }
  if ( v25->max_length <= 9 )
    goto LABEL_68;
  v25->m_Items[9] = (Il2CppObject *)v75;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[9], v75, v19, v70, v71, v72, v73, v74);
  v26 = StringLiteral_22584/*"time"*/;
  if ( StringLiteral_22584/*"time"*/ )
  {
    v26 = sub_B170BC(StringLiteral_22584/*"time"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xA )
    goto LABEL_68;
  v25->m_Items[10] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[10], v27, v19, v76, v77, v78, v79, v80);
  v100 = 1065353216;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v100);
  v86 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
  }
  if ( v25->max_length <= 0xB )
    goto LABEL_68;
  v25->m_Items[11] = (Il2CppObject *)v86;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[11], v86, v19, v81, v82, v83, v84, v85);
  v26 = StringLiteral_17881/*"delay"*/;
  if ( StringLiteral_17881/*"delay"*/ )
  {
    v26 = sub_B170BC(StringLiteral_17881/*"delay"*/, v25->obj.klass->_1.element_class);
    if ( !v26 )
      goto LABEL_69;
    v27 = (System_Int32_array **)StringLiteral_17881/*"delay"*/;
  }
  else
  {
    v27 = 0LL;
  }
  if ( v25->max_length <= 0xC )
    goto LABEL_68;
  v25->m_Items[12] = (Il2CppObject *)v27;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[12], v27, v19, v87, v88, v89, v90, v91);
  v99 = 0;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v99);
  v97 = (System_Int32_array **)v26;
  if ( v26 )
  {
    v26 = sub_B170BC(v26, v25->obj.klass->_1.element_class);
    if ( !v26 )
    {
LABEL_69:
      sub_B170F4(v26);
      sub_B170A0();
    }
  }
  if ( v25->max_length <= 0xD )
  {
LABEL_68:
    sub_B17100(v26, v27, v19);
    sub_B170A0();
  }
  v25->m_Items[13] = (Il2CppObject *)v97;
  sub_B16F98((BattleServantConfConponent_o *)&v25->m_Items[13], v97, v19, v92, v93, v94, v95, v96);
  v98 = iTween__Hash(v25, 0LL);
  iTween__ValueTo(v16, v98, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionCompleteValue(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleResultItemComponent_o *itemResult; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  UIProgressBar_o *resultItemScrollBar; // x0
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2

  if ( (byte_40FA357 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v7);
    byte_40FA357 = 1;
  }
  itemResult = this->fields.itemResult;
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
    resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
    if ( !resultItemScrollBar )
      goto LABEL_11;
    UIProgressBar__set_value(resultItemScrollBar, 1.0, 0LL);
    itemResult = this->fields.itemResult;
  }
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(
    v12,
    (Il2CppObject *)this,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_B170D4();
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v12, v13);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_40FA356 & 1) == 0 )
  {
    sub_B16FFC(&iTween_TypeInfo, method);
    byte_40FA356 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_B170D4();
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_18552136(gameObject, 0LL);
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
  __int64 v35; // x1
  System_Int32_array **v36; // x1
  BattleResultComponent_resultData_o **p_battleResult; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BattleResultComponent_resultData_o *v44; // x0
  __int64 v45; // x1
  TerminalPramsManager_c *v46; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w26
  __int64 v48; // x1
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v50; // x0
  int32_t v51; // w19
  BalanceConfig_c *v52; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v54; // x0
  BattleResultComponent_resultData_o *v55; // x8
  System_Collections_Generic_IEnumerable_TSource__o *freeShopIds; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  System_Collections_Generic_List_int__o *v61; // x26
  BattleResultComponent___c_c *v62; // x8
  struct BattleResultComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__34_0; // x19
  Il2CppObject *v65; // x20
  struct BattleResultComponent___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v73; // x0
  System_String_array *v74; // x0
  System_String_o *v75; // x0
  System_Collections_Generic_IEnumerable_TSource__o *returnRarePriShopIds; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  System_Collections_Generic_List_int__o *v81; // x26
  BattleResultComponent___c_c *v82; // x8
  struct BattleResultComponent___c_StaticFields *v83; // x9
  System_Converter_int__string__o *_9__34_1; // x19
  Il2CppObject *v85; // x20
  struct BattleResultComponent___c_StaticFields *v86; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v93; // x0
  System_String_array *v94; // x0
  System_String_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **eventEndTitle; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct BattleResultComponent_resultData_o *v109; // x8
  System_Int32_array **eventEndMessage; // x1
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x3
  __int64 v114; // x4
  struct BattleResultComponent_resultData_o *v115; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v117; // x26
  BattleInfoData_o *battle_info; // x0
  BattleResultComponent_resultData_o *v119; // x8
  BattleResultBondsComponent_o *bondsResult; // x0
  BattleResultComponent_resultData_o *v121; // x0
  struct DeckData_o *myDeck; // x8
  EventBuddyPointMaster_o *Master_WarQuestSelectionMaster; // x19
  int32_t v124; // w20
  int32_t QuestId; // w23
  int32_t Phase; // w0
  bool IsHideBuddyPointResult; // w8
  BattleResultComponent_resultData_o *v128; // x9
  struct BattleInfoData_o *v129; // x10
  BattleResultBondsComponent_o *v130; // x0
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x9
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultFriendComponent_o *friendResult; // x10
  struct BattleResultComponent_o *v134; // x11
  struct BattleResultEventDamageItemComponent_o *v135; // x9
  struct BattleResultComponent_o *v136; // x8
  QuestEntity_o *quest_ent; // x8
  BattleResultItemComponent_o *itemResult; // x25
  int32_t obj_basebg; // w27
  int32_t obj_basebg_high; // w28
  struct BattleResultFriendComponent_o *v141; // x19
  int32_t FriendIconPrefab_high; // w20
  struct UISprite_o *resultSprite; // x23
  struct BattleEventTutorial_o *eventTutorial; // x24
  int32_t firstClearRewardQp; // w26
  bool HasFlag; // w0
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  BattleResultComponent_resultData_o *v153; // x8
  struct BattleResultItemComponent_o *v154; // x9
  struct UILabel_o *getQpLabel; // x9
  System_Int32_array **mText; // x1
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  struct BattleResultItemComponent_o *v163; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v165; // x9
  System_Int32_array **v166; // x1
  struct BattleResultAddRewardBonus_o *rewardBonus; // x8
  Il2CppObject *v168; // x0
  System_String_o *v169; // x0
  struct BattleResultItemComponent_o *v170; // x8
  Il2CppObject *v171; // x20
  UILabel_o *v172; // x19
  System_String_o *v173; // x0
  System_String_o *v174; // x0
  struct BattleResultItemComponent_o *v175; // x8
  struct BattleResultAddRewardBonus_o *v176; // x9
  UILabel_o *v177; // x19
  Il2CppObject *v178; // x0
  System_String_o *v179; // x0
  UIWidget_o *nextButtonSpr; // x19
  int v181; // s0
  QuestEntity_o *v185; // x0
  BattleResultFriendComponent_o *v186; // x19
  int32_t followerType; // w20
  int32_t followerStatus; // w23
  int64_t followerId; // x24
  int32_t followerClassId; // w25
  int32_t followerSupportDeckId; // w26
  bool v192; // w0
  const MethodInfo *v193; // x7
  struct BattleResultComponent_resultData_o *v194; // x8
  struct BattleResultEventItemComponent_o *v195; // x0
  struct BattleResultComponent_resultData_o *v196; // x8
  struct BattleResultEventDamageItemComponent_o *v197; // x0
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v199; // x8
  struct BattleResultEventFortificationItemComponent_o *v200; // x0
  const MethodInfo *v201; // x2
  struct BattleResultComponent_resultData_o *v202; // x8
  BattleResultEventFortificationItemComponent_o *v203; // x0
  bool v204; // w0
  struct BattleInfoData_o *v205; // x8
  struct DeckData_o *v206; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v209; // x20
  BattleDeckServantData_o *v210; // x0
  char v211; // w22
  EventProgressValueMaster_o *v212; // x0
  EventProgressValueEntity_o *CurrentEventProgressValueEntity; // x19
  int32_t v214; // w20
  int32_t EventProgressValueSaveData_22463440; // w0
  __int64 v216; // x1
  int32_t progressValue; // w8
  TerminalPramsManager_c *v218; // x0
  BattleResultComponent_resultData_o *v219; // x0
  struct BattleFortificationInfo_array *fortificationInfos; // x8
  bool isWin; // w19
  BattleResultComponent_resultData_o *battleResult; // [xsp+0h] [xbp-100h]
  const MethodInfo *v223; // [xsp+40h] [xbp-C0h]
  struct UISprite_o *v224; // [xsp+48h] [xbp-B8h]
  struct BattleResultEventItemComponent_o *eventItemResult; // [xsp+50h] [xbp-B0h]
  int32_t eventId; // [xsp+5Ch] [xbp-A4h]
  UserGameEntity_o *oldGame; // [xsp+60h] [xbp-A0h]
  struct BattleResultComponent_resultData_o *v228; // [xsp+68h] [xbp-98h]
  System_Int32_array *v229; // [xsp+70h] [xbp-90h]
  BattleData_o *v230; // [xsp+78h] [xbp-88h]
  BattleResultComponent_resultData_array *v231; // [xsp+80h] [xbp-80h]
  BattleEventTutorial_o **p_eventTutorial; // [xsp+88h] [xbp-78h]
  unsigned int v233; // [xsp+90h] [xbp-70h] BYREF
  int32_t befUserGameQp; // [xsp+98h] [xbp-68h] BYREF
  int v235; // [xsp+9Ch] [xbp-64h] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF
  UnityEngine_Color32_o v237; // 0:x0.8
  UnityEngine_Color32_o v238; // 0:x0.8

  battleData = bData;
  v12 = resultList;
  v13 = this;
  if ( (byte_40FA350 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, resultList);
    sub_B16FFC(&Method_System_Converter_int__string___ctor__, v14);
    sub_B16FFC(&System_Converter_int__string__TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_EventBuddyPointMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_EventProgressValueMaster___, v17);
    sub_B16FFC(&DataManager_TypeInfo, v18);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v19);
    sub_B16FFC(&EventInfoUIProgressControl_TypeInfo, v20);
    sub_B16FFC(&int_TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v23);
    sub_B16FFC(&LocalizationManager_TypeInfo, v24);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v25);
    sub_B16FFC(&QuestKnockdownResult_TypeInfo, v26);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v27);
    sub_B16FFC(&Method_BattleResultComponent___c__Set_b__34_0__, v28);
    sub_B16FFC(&Method_BattleResultComponent___c__Set_b__34_1__, v29);
    sub_B16FFC(&BattleResultComponent___c_TypeInfo, v30);
    sub_B16FFC(&StringLiteral_18817/*"freeShopIds"*/, v31);
    sub_B16FFC(&StringLiteral_11086/*"RESULT_QP_PLUS"*/, v32);
    sub_B16FFC(&StringLiteral_23395/*"{0:#,0}"*/, v33);
    sub_B16FFC(&StringLiteral_21719/*"returnRarePriShopIds"*/, v34);
    this = (BattleResultComponent_o *)sub_B16FFC(&StringLiteral_698/*","*/, v35);
    byte_40FA350 = 1;
  }
  entity = 0LL;
  if ( !v12 )
    goto LABEL_224;
  if ( !v12->max_length )
    goto LABEL_225;
  v36 = (System_Int32_array **)v12->m_Items[0];
  v13->fields.battleResult = (struct BattleResultComponent_resultData_o *)v36;
  p_battleResult = &v13->fields.battleResult;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v13->fields.battleResult,
    v36,
    (System_String_array **)tutorial,
    (System_String_array **)resultAsset,
    (System_Boolean_array **)viewGroupIds,
    (System_Int32_array **)bData,
    (System_Int32_array *)method,
    v7);
  v13->fields.eventTutorial = tutorial;
  p_eventTutorial = &v13->fields.eventTutorial;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v13->fields.eventTutorial,
    (System_Int32_array **)tutorial,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = v13->fields.battleResult;
  if ( !v44 )
    goto LABEL_224;
  if ( BattleResultComponent_resultData__isWin(v44, 0LL) )
  {
    if ( !battleData )
      goto LABEL_224;
    if ( !BattleData__IsNotResetResultDispFlag(battleData, 0LL) )
    {
      if ( !*p_battleResult )
        goto LABEL_224;
      BattleResultComponent_resultData__setDefaultDispFlag(*p_battleResult, 0LL);
    }
    if ( BattleData__isEventActivityPoint(battleData, 0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E35 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v45);
        byte_40F6E35 = 1;
      }
      v46 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v46 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v46->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(battleData, 0LL);
      if ( !byte_40F6E16 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v48);
        byte_40F6E16 = 1;
      }
      v50 = TerminalPramsManager_TypeInfo;
      v51 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v50 = TerminalPramsManager_TypeInfo;
      }
      v50->static_fields->_BeforeEventActivityPoint_k__BackingField = v51;
      v52 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v52 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v52->static_fields->UserEventActivityPointMax;
      if ( !byte_40F6E35 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v48);
        byte_40F6E35 = 1;
      }
      v54 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v54 = TerminalPramsManager_TypeInfo;
      }
      if ( v54->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v54);
        if ( !byte_40F6E16 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v48);
          byte_40F6E16 = 1;
        }
        v54 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v54 = TerminalPramsManager_TypeInfo;
        }
        v54->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( (BYTE3(v54->vtable._0_Equals.methodPtr) & 4) != 0 && !v54->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v54);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v55 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  freeShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)v55->fields.freeShopIds;
  if ( freeShopIds )
  {
    v61 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      freeShopIds,
                                                      (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
    v62 = BattleResultComponent___c_TypeInfo;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v62 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v62->static_fields;
    _9__34_0 = static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v62);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v65 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Converter_int__string__o *)sub_B170CC(
                                                      System_Converter_int__string__TypeInfo,
                                                      v57,
                                                      v58,
                                                      v59,
                                                      v60);
      System_Converter_int__string____ctor(
        _9__34_0,
        v65,
        Method_BattleResultComponent___c__Set_b__34_0__,
        (const MethodInfo_266AF4C *)Method_System_Converter_int__string___ctor__);
      v66 = BattleResultComponent___c_TypeInfo->static_fields;
      v66->__9__34_0 = _9__34_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v66->__9__34_0,
        (System_Int32_array **)_9__34_0,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    if ( !v61 )
      goto LABEL_224;
    v73 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                                                          v61,
                                                                          (System_Converter_T__TOutput__o *)_9__34_0,
                                                                          (const MethodInfo_18FDBA8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !v73 )
      goto LABEL_224;
    v74 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   v73,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
    v75 = System_String__Join((System_String_o *)StringLiteral_698/*","*/, v74, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_18817/*"freeShopIds"*/, v75, 0LL);
    v55 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
  }
  returnRarePriShopIds = (System_Collections_Generic_IEnumerable_TSource__o *)v55->fields.returnRarePriShopIds;
  if ( returnRarePriShopIds )
  {
    v81 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                      returnRarePriShopIds,
                                                      (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
    v82 = BattleResultComponent___c_TypeInfo;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v82 = BattleResultComponent___c_TypeInfo;
    }
    v83 = v82->static_fields;
    _9__34_1 = v83->__9__34_1;
    if ( !_9__34_1 )
    {
      if ( (BYTE3(v82->vtable._0_Equals.methodPtr) & 4) != 0 && !v82->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v82);
        v83 = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v85 = (Il2CppObject *)v83->__9;
      _9__34_1 = (System_Converter_int__string__o *)sub_B170CC(
                                                      System_Converter_int__string__TypeInfo,
                                                      v77,
                                                      v78,
                                                      v79,
                                                      v80);
      System_Converter_int__string____ctor(
        _9__34_1,
        v85,
        Method_BattleResultComponent___c__Set_b__34_1__,
        (const MethodInfo_266AF4C *)Method_System_Converter_int__string___ctor__);
      v86 = BattleResultComponent___c_TypeInfo->static_fields;
      v86->__9__34_1 = _9__34_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v86->__9__34_1,
        (System_Int32_array **)_9__34_1,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
    }
    if ( !v81 )
      goto LABEL_224;
    v93 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                                                          v81,
                                                                          (System_Converter_T__TOutput__o *)_9__34_1,
                                                                          (const MethodInfo_18FDBA8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !v93 )
      goto LABEL_224;
    v94 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   v93,
                                   (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
    v95 = System_String__Join((System_String_o *)StringLiteral_698/*","*/, v94, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_21719/*"returnRarePriShopIds"*/, v95, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_224;
  eventEndTitle = (System_Int32_array **)(*p_battleResult)->fields.eventEndTitle;
  v13->fields.eventEndTitle = (struct System_String_o *)eventEndTitle;
  sub_B16F98((BattleServantConfConponent_o *)&v13->fields.eventEndTitle, eventEndTitle, v96, v97, v98, v99, v100, v101);
  v109 = v13->fields.battleResult;
  if ( !v109 )
    goto LABEL_224;
  eventEndMessage = (System_Int32_array **)v109->fields.eventEndMessage;
  v13->fields.eventEndMessage = (struct System_String_o *)eventEndMessage;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v13->fields.eventEndMessage,
    eventEndMessage,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v115 = v13->fields.battleResult;
  if ( !v115 )
    goto LABEL_224;
  isTrialQuestNewRecord = v115->fields.isTrialQuestNewRecord;
  v117 = (QuestKnockdownResult_o *)sub_B170CC(QuestKnockdownResult_TypeInfo, v111, v112, v113, v114);
  QuestKnockdownResult___ctor(v117, isTrialQuestNewRecord, battleData, 0LL);
  if ( !battleData )
    goto LABEL_224;
  battle_info = battleData->fields.battle_info;
  if ( !battle_info )
    goto LABEL_224;
  if ( BattleInfoData__IsWaveMyDecks(battle_info, 0LL) )
  {
    v119 = v13->fields.battleResult;
    if ( !v119 )
      goto LABEL_224;
    bondsResult = v13->fields.bondsResult;
    if ( !bondsResult )
      goto LABEL_224;
    BattleResultBondsComponent__SetMultiBondsResultData(
      bondsResult,
      battleData,
      v119->fields.oldUserSvtCollection,
      v119->fields.friendshipRewardInfos,
      v119->fields.followerType,
      resultAsset,
      v119->fields.friendshipExpBase,
      v119->fields.getJoinSvts,
      v119,
      1,
      0LL);
  }
  else
  {
    v121 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
    myDeck = v121->fields.myDeck;
    if ( myDeck && myDeck->fields.svts )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (EventBuddyPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v124 = BattleData__get_eventId(battleData, 0LL);
      QuestId = BattleData__getQuestId(battleData, 0LL);
      Phase = BattleData__getPhase(battleData, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_224;
      if ( EventBuddyPointMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, v124, QuestId, Phase, 0LL) )
      {
        if ( !entity )
          goto LABEL_224;
        IsHideBuddyPointResult = EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
      }
      else
      {
        IsHideBuddyPointResult = 0;
      }
      v128 = v13->fields.battleResult;
      if ( !v128 )
        goto LABEL_224;
      v129 = battleData->fields.battle_info;
      if ( !v129 )
        goto LABEL_224;
      v130 = v13->fields.bondsResult;
      if ( !v130 )
        goto LABEL_224;
      BattleResultBondsComponent__setResultData(
        v130,
        v128->fields.myDeck,
        v128->fields.oldUserSvtCollection,
        v128->fields.friendshipRewardInfos,
        v128->fields.followerType,
        resultAsset,
        v129->fields.userSvt,
        v128->fields.friendshipExpBase,
        v128->fields.getJoinSvts,
        v128,
        IsHideBuddyPointResult,
        battleData,
        0LL);
    }
    else
    {
      BattleResultComponent_resultData__disableResultDispFlag(v121, 1, 0LL);
    }
  }
  this = (BattleResultComponent_o *)*p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  eventDamageItemResult = this->fields.eventDamageItemResult;
  if ( eventDamageItemResult
    && (parentComp = eventDamageItemResult->fields.parentComp) != 0LL
    && (friendResult = this->fields.friendResult) != 0LL
    && (v134 = friendResult->fields.parentComp) != 0LL )
  {
    if ( !(_DWORD)parentComp || !(_DWORD)v134 )
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
      v117,
      (const MethodInfo *)battleResult);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = (BattleResultComponent_o *)*p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  v135 = this->fields.eventDamageItemResult;
  if ( v135 )
  {
    v136 = v135->fields.parentComp;
    if ( v136 )
    {
      if ( (_DWORD)v136 )
      {
        v229 = viewGroupIds;
        v230 = battleData;
        quest_ent = battleData->fields.quest_ent;
        v231 = v12;
        if ( !quest_ent )
          goto LABEL_224;
        itemResult = v13->fields.itemResult;
        obj_basebg = (int32_t)this->fields.obj_basebg;
        obj_basebg_high = HIDWORD(this->fields.obj_basebg);
        oldGame = (UserGameEntity_o *)v135->fields.myFsm;
        v228 = this->fields.battleResult;
        v141 = this[1].fields.friendResult;
        FriendIconPrefab_high = HIDWORD(this[1].fields.FriendIconPrefab);
        resultSprite = this[1].fields.resultSprite;
        eventId = *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1);
        eventTutorial = this[1].fields.eventTutorial;
        firstClearRewardQp = (int32_t)this->fields.obj_fronttouch;
        eventItemResult = this->fields.eventItemResult;
        v224 = this->fields.resultSprite;
        HasFlag = QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
        if ( !*p_battleResult || !itemResult )
          goto LABEL_224;
        BattleResultItemComponent__setResultData(
          itemResult,
          (BattleDropItem_array *)v228,
          obj_basebg,
          obj_basebg_high,
          oldGame,
          eventId,
          (UserEventEntity_array *)eventItemResult,
          (UserEventPointEntity_array *)v224,
          (int64_t)v141,
          v229,
          FriendIconPrefab_high,
          (DropUpInfo_array *)resultSprite,
          (EventConquestInfo_array *)eventTutorial,
          firstClearRewardQp,
          HasFlag,
          (*p_battleResult)->fields.rewardBonus,
          v223);
        battleData = v230;
        v12 = v231;
        goto LABEL_116;
      }
LABEL_225:
      sub_B17100(this, resultList, tutorial);
      sub_B170A0();
    }
  }
  BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
LABEL_116:
  v153 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( v153->fields.rewardBonus )
  {
    v154 = v13->fields.itemResult;
    if ( !v154 )
      goto LABEL_224;
    getQpLabel = v154->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_224;
    mText = (System_Int32_array **)getQpLabel->fields.mText;
    v153->fields.ultimateGetQpText = (struct System_String_o *)mText;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v153->fields.ultimateGetQpText,
      mText,
      v147,
      v148,
      v149,
      v150,
      v151,
      v152);
    v163 = v13->fields.itemResult;
    if ( !v163 )
      goto LABEL_224;
    nowQpLabel = v163->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_224;
    v165 = v13->fields.battleResult;
    if ( !v165 )
      goto LABEL_224;
    v166 = (System_Int32_array **)nowQpLabel->fields.mText;
    v165->fields.ultimateNowQpText = (struct System_String_o *)v166;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v165->fields.ultimateNowQpText,
      v166,
      v157,
      v158,
      v159,
      v160,
      v161,
      v162);
    if ( !*p_battleResult )
      goto LABEL_224;
    rewardBonus = (*p_battleResult)->fields.rewardBonus;
    if ( !rewardBonus )
      goto LABEL_224;
    v235 = rewardBonus->fields.befPhaseClearQp & ~(rewardBonus->fields.befPhaseClearQp >> 31);
    v168 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v235);
    v169 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v168, 0LL);
    v170 = v13->fields.itemResult;
    if ( !v170 )
      goto LABEL_224;
    v171 = (Il2CppObject *)v169;
    v172 = v170->fields.getQpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v173 = LocalizationManager__Get((System_String_o *)StringLiteral_11086/*"RESULT_QP_PLUS"*/, 0LL);
    v174 = System_String__Format(v173, v171, 0LL);
    if ( !v172 )
      goto LABEL_224;
    UILabel__set_text(v172, v174, 0LL);
    v175 = v13->fields.itemResult;
    if ( !v175 )
      goto LABEL_224;
    if ( !*p_battleResult )
      goto LABEL_224;
    v176 = (*p_battleResult)->fields.rewardBonus;
    if ( !v176 )
      goto LABEL_224;
    v177 = v175->fields.nowQpLabel;
    befUserGameQp = v176->fields.befUserGameQp;
    v178 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &befUserGameQp);
    v179 = System_String__Format((System_String_o *)StringLiteral_23395/*"{0:#,0}"*/, v178, 0LL);
    if ( !v177 )
      goto LABEL_224;
    UILabel__set_text(v177, v179, 0LL);
    nextButtonSpr = (UIWidget_o *)v13->fields.nextButtonSpr;
    v237 = (UnityEngine_Color32_o)&v233;
    v233 = 0;
    UnityEngine_Color32___ctor(v237, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
    v238 = (UnityEngine_Color32_o)v233;
    *(UnityEngine_Color_o *)&v181 = UnityEngine_Color32__op_Implicit_40668984(v238, 0LL);
    if ( !nextButtonSpr )
      goto LABEL_224;
    UIWidget__set_color(nextButtonSpr, *(UnityEngine_Color_o *)&v181, 0LL);
    v153 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
  }
  v185 = battleData->fields.quest_ent;
  if ( !v185 )
    goto LABEL_224;
  v186 = v13->fields.friendResult;
  followerType = v153->fields.followerType;
  followerStatus = v153->fields.followerStatus;
  followerId = v153->fields.followerId;
  followerClassId = v153->fields.followerClassId;
  followerSupportDeckId = v153->fields.followerSupportDeckId;
  v192 = QuestEntity__HasFlag(v185, 0x8000000LL, 0LL);
  if ( !v186 )
    goto LABEL_224;
  BattleResultFriendComponent__setResultData(
    v186,
    followerType,
    followerStatus,
    followerId,
    followerClassId,
    followerSupportDeckId,
    v192,
    v193);
  v194 = v13->fields.battleResult;
  if ( !v194 )
    goto LABEL_224;
  v195 = v13->fields.eventItemResult;
  if ( !v195 )
    goto LABEL_224;
  ((void (__fastcall *)(struct BattleResultEventItemComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, Il2CppMethodPointer))v195->klass->vtable._4_setResultData.method)(
    v195,
    v194->fields.resultEventRewardInfos,
    (unsigned int)v194->fields.eventId,
    v194->fields.resultBoostItemRewardInfos,
    v194->fields.rewardInfos,
    v195->klass->vtable._5_SetBgSprite.methodPtr);
  v196 = v13->fields.battleResult;
  if ( !v196 )
    goto LABEL_224;
  v197 = v13->fields.eventDamageItemResult;
  if ( !v197 )
    goto LABEL_224;
  ((void (__fastcall *)(struct BattleResultEventDamageItemComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, Il2CppMethodPointer))v197->klass->vtable._4_setResultData.method)(
    v197,
    v196->fields.resultDamageRewardInfos,
    (unsigned int)v196->fields.eventId,
    v196->fields.resultBoostItemRewardInfos,
    v196->fields.rewardInfos,
    v197->klass->vtable._5_SetBgSprite.methodPtr);
  eventFortificationItemResult = (UnityEngine_Object_o *)v13->fields.eventFortificationItemResult;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL) )
  {
    v199 = v13->fields.battleResult;
    if ( !v199 )
      goto LABEL_224;
    v200 = v13->fields.eventFortificationItemResult;
    if ( !v200 )
      goto LABEL_224;
    ((void (__fastcall *)(struct BattleResultEventFortificationItemComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, Il2CppMethodPointer))v200->klass->vtable._4_setResultData.method)(
      v200,
      v199->fields.resultEventFortificationRewardInfos,
      (unsigned int)v199->fields.eventId,
      0LL,
      0LL,
      v200->klass->vtable._5_SetBgSprite.methodPtr);
    v202 = v13->fields.battleResult;
    if ( !v202 )
      goto LABEL_224;
    v203 = v13->fields.eventFortificationItemResult;
    if ( !v203 )
      goto LABEL_224;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(v203, v202->fields.fortificationInfos, v201);
  }
  if ( !*p_eventTutorial )
    goto LABEL_224;
  v204 = BattleEventTutorial__CheckHasResultPhaseTutorial(*p_eventTutorial, 0LL);
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( v204 )
    BattleResultComponent_resultData__enableResultDispFlag(*p_battleResult, 64, 0LL);
  else
    BattleResultComponent_resultData__disableResultDispFlag(*p_battleResult, 64, 0LL);
  if ( !*p_battleResult )
    goto LABEL_224;
  this = (BattleResultComponent_o *)BattleResultComponent_resultData__checkResultDispFlag(*p_battleResult, 512, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !*p_battleResult )
      goto LABEL_224;
    BattleResultComponent_resultData__disableResultDispFlag(*p_battleResult, 16, 0LL);
  }
  v205 = battleData->fields.battle_info;
  if ( !v205 )
    goto LABEL_224;
  v206 = v205->fields.myDeck;
  if ( v206 && (svts = v206->fields.svts) != 0LL && (max_length = svts->max_length, max_length >= 1) )
  {
    v209 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v209 >= max_length )
        goto LABEL_225;
      v210 = svts->m_Items[v209];
      if ( !v210 )
        goto LABEL_224;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin(v210, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      if ( (int)++v209 >= max_length )
        goto LABEL_169;
    }
    v211 = 1;
  }
  else
  {
LABEL_169:
    v211 = 0;
  }
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( (*p_battleResult)->fields.eventId )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v212 = (EventProgressValueMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !v212 )
      goto LABEL_224;
    CurrentEventProgressValueEntity = EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        v212,
                                        (*p_battleResult)->fields.eventId,
                                        0LL);
    if ( CurrentEventProgressValueEntity )
    {
      if ( !*p_battleResult )
        goto LABEL_224;
      v214 = (*p_battleResult)->fields.eventId;
      if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      }
      EventProgressValueSaveData_22463440 = EventInfoUIProgressControl__GetEventProgressValueSaveData_22463440(
                                              v214,
                                              0,
                                              0LL);
      progressValue = CurrentEventProgressValueEntity->fields.progressValue;
      LODWORD(CurrentEventProgressValueEntity) = 0;
      if ( EventProgressValueSaveData_22463440 != progressValue )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6079 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v216);
          byte_40F6079 = 1;
        }
        v218 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v218 = TerminalPramsManager_TypeInfo;
        }
        v218->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(CurrentEventProgressValueEntity) = 1;
      }
    }
  }
  else
  {
    LODWORD(CurrentEventProgressValueEntity) = 0;
  }
  if ( v211 & 1 | !battleData->fields.isRetryable )
    goto LABEL_228;
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( (((unsigned int)CurrentEventProgressValueEntity | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
                                                           *p_battleResult,
                                                           0LL)) & 1) != 0 )
  {
LABEL_228:
    if ( !*p_battleResult )
      goto LABEL_224;
    BattleResultComponent_resultData__disableResultDispFlag(*p_battleResult, 2048, 0LL);
  }
  else
  {
    if ( !*p_battleResult )
      goto LABEL_224;
    BattleResultComponent_resultData__enableResultDispFlag(*p_battleResult, 2048, 0LL);
  }
  if ( !*p_battleResult
    || (BattleResultComponent_resultData__disableResultDispFlag(*p_battleResult, 4096, 0LL),
        (v219 = *p_battleResult) == 0LL) )
  {
LABEL_224:
    sub_B170D4();
  }
  fortificationInfos = v219->fields.fortificationInfos;
  if ( fortificationInfos && *(_QWORD *)&fortificationInfos->max_length )
    BattleResultComponent_resultData__enableResultDispFlag(v219, 4096, 0LL);
  if ( (BattleData__isBattleResultLoseQuestClear(battleData, 0LL)
     || BattleData__isBattleRetreatQuestClear(battleData, 0LL))
    && battleData->fields.isItemResultSkip )
  {
    if ( !BattleData__IsWarBoard(battleData, 0LL) )
      goto LABEL_213;
    if ( !*p_battleResult )
      goto LABEL_224;
    if ( BattleResultComponent_resultData__checkResultDispFlag(*p_battleResult, 4, 0LL) )
    {
      if ( !*p_battleResult )
        goto LABEL_224;
      BattleResultComponent_resultData__enableResultDispFlag(*p_battleResult, 4, 0LL);
    }
    else
    {
LABEL_213:
      if ( !*p_battleResult )
        goto LABEL_224;
      BattleResultComponent_resultData__disableResultDispFlag(*p_battleResult, 4, 0LL);
    }
    if ( *p_battleResult )
    {
      BattleResultComponent_resultData__disableResultDispFlag(*p_battleResult, 8, 0LL);
      if ( *p_battleResult )
      {
        BattleResultComponent_resultData__disableResultDispFlag(*p_battleResult, 16, 0LL);
        goto LABEL_218;
      }
    }
    goto LABEL_224;
  }
LABEL_218:
  if ( !*p_battleResult )
    goto LABEL_224;
  isWin = BattleResultComponent_resultData__isWin(*p_battleResult, 0LL);
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
  UnityEngine_GameObject_o *touchGuard; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FA354 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method);
    byte_40FA354 = 1;
  }
  v6 = sub_B170CC(BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method, v2, v3, v4);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__42___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  WebViewManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  TerminalPramsManager_c *v12; // x8
  CommonUI_o *v13; // x19
  BattleResultComponent___c_c *v14; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x20
  struct BattleResultComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__61_0; // x21
  Il2CppObject *v18; // x22
  struct BattleResultComponent___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FA364 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v3);
    sub_B16FFC(&Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, v4);
    sub_B16FFC(&BattleResultComponent___c_TypeInfo, v5);
    byte_40FA364 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6057 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v6->static_fields->_QuestId_k__BackingField, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v12 = TerminalPramsManager_TypeInfo;
    v13 = (CommonUI_o *)Instance;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v14 = BattleResultComponent___c_TypeInfo;
    mQuestRewardInfos = v12->static_fields->mQuestRewardInfos;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v14 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v14->static_fields;
    _9__61_0 = static_fields->__9__61_0;
    if ( !_9__61_0 )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__61_0 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v8, v9, v10, v11);
      System_Action___ctor(_9__61_0, v18, Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, 0LL);
      v19 = BattleResultComponent___c_TypeInfo->static_fields;
      v19->__9__61_0 = _9__61_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v19->__9__61_0,
        (System_Int32_array **)_9__61_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( !v13 )
      sub_B170D4();
    CommonUI__OpenQuestClearReward(v13, mQuestRewardInfos, _9__61_0, 0LL);
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
  HutongGames_PlayMaker_Fsm_o *v9; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v11; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  BattleData_o *data; // x0
  BattleResultComponent_resultData_o *battleResult; // x0
  struct BattleData_o *v15; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  PlayMakerFSM_o *v17; // x0

  if ( (byte_40FA34D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_10069/*"OpenResult"*/, target);
    sub_B16FFC(&StringLiteral_10602/*"Performance"*/, v7);
    byte_40FA34D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  v9 = PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !v9 )
    goto LABEL_15;
  FsmGameObject = HutongGames_PlayMaker_Fsm__GetFsmGameObject(v9, (System_String_o *)StringLiteral_10602/*"Performance"*/, 0LL);
  if ( !perf )
    goto LABEL_15;
  v11 = FsmGameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)perf, 0LL);
  if ( !v11 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v11, gameObject, 0LL);
  data = perf->fields.data;
  if ( !data )
    goto LABEL_15;
  if ( BattleData__isNoResult(data, 0LL) )
  {
    battleResult = this->fields.battleResult;
    if ( !battleResult )
      goto LABEL_15;
    BattleResultComponent_resultData__clearAllDispFlag(battleResult, 0LL);
  }
  v15 = perf->fields.data;
  if ( !v15
    || (battleEvent = v15->fields.battleEvent) == 0LL
    || (((void (__fastcall *)(struct BaseBattleEvent_o *, struct BattleResultComponent_resultData_o *, Il2CppMethodPointer))battleEvent->klass->vtable._15_InitStartResult.method)(
          battleEvent,
          this->fields.battleResult,
          battleEvent->klass->vtable._16_GoNextScene.methodPtr),
        (v17 = this->fields.fsm) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(v17, (System_String_o *)StringLiteral_10069/*"OpenResult"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenDataLostBattleResetDialog_b__68_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  MissionNotifyManager_o *v9; // x0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FA36E & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, v5);
    byte_40FA36E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6079 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6079 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_40F6E24 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    byte_40F6E24 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v9 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v9 )
    goto LABEL_27;
  MissionNotifyManager__StartPause(v9, 0LL);
  if ( !byte_40F6E29 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40F6E29 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  fsm = this->fields.fsm;
  if ( !fsm )
LABEL_27:
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__60_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_40FA36D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12992/*"StartQuestClearReward"*/, method);
    byte_40FA36D = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12992/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__45_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FA36C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA36C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__checkNew(
        BattleResultComponent_o *this,
        int32_t resultType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x0
  _QWORD *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x1
  BattleResultItemComponent_o *itemResult; // x0
  BattleDropItem_o *NewDrop; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  BattleResultEventItemComponent_o *eventItemResult; // x0
  System_Int32_array **v39; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v41; // w0
  BattleResultEventItemComponent_o *v42; // x0
  SummonAssetManager_o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Action_o *v48; // x22
  PlayMakerFSM_o *fsm; // x0
  __int64 *v50; // x8
  UnityEngine_Component_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  CommonUI_o *Instance; // x0

  if ( (byte_40FA35D & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&resultType);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__, v10);
    sub_B16FFC(&BattleResultComponent___c__DisplayClass53_0_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_9721/*"OPEN"*/, v12);
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, v13);
    byte_40FA35D = 1;
  }
  v14 = sub_B170CC(BattleResultComponent___c__DisplayClass53_0_TypeInfo, *(_QWORD *)&resultType, method, v3, v4);
  BattleResultComponent___c__DisplayClass53_0___ctor((BattleResultComponent___c__DisplayClass53_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_37;
  *(_QWORD *)(v14 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  BattleResultComponent__ResetTimeScale(v21);
  *(_QWORD *)(v14 + 16) = 0LL;
  v22 = (_QWORD *)(v14 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), 0LL, v23, v24, v25, v26, v27, v28);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_37;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, v29);
      goto LABEL_11;
    case 2:
      eventItemResult = this->fields.eventItemResult;
      if ( !eventItemResult )
        goto LABEL_37;
      goto LABEL_10;
    case 3:
      eventItemResult = (BattleResultEventItemComponent_o *)this->fields.eventDamageItemResult;
      if ( !eventItemResult )
        goto LABEL_37;
LABEL_10:
      NewDrop = BattleResultEventItemComponent__getNewDrop(eventItemResult, v29);
LABEL_11:
      v39 = (System_Int32_array **)NewDrop;
      *v22 = NewDrop;
      goto LABEL_19;
    case 4:
      eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v41 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v39 = 0LL;
      if ( !v41 )
        goto LABEL_18;
      v42 = (BattleResultEventItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !v42 )
        goto LABEL_37;
      v39 = (System_Int32_array **)BattleResultEventItemComponent__getNewDrop(v42, 0LL);
LABEL_18:
      *v22 = v39;
LABEL_19:
      sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), v39, v32, v33, v34, v35, v36, v37);
LABEL_20:
      if ( !*v22 )
      {
        p_ServantRewardActionComp = (UnityEngine_Component_o **)&this->fields.ServantRewardActionComp;
        ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
        {
          if ( !*p_ServantRewardActionComp )
            goto LABEL_37;
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_ServantRewardActionComp, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
            0LL,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !Instance )
            goto LABEL_37;
          CommonUI__maskFadein(Instance, 0.0, 0LL, 0LL);
        }
        fsm = this->fields.fsm;
        if ( fsm )
        {
          v50 = &StringLiteral_9268/*"NEXT"*/;
          goto LABEL_36;
        }
LABEL_37:
        sub_B170D4();
      }
      v43 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v48 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v44, v45, v46, v47);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v14,
        Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__,
        0LL);
      if ( !v43 )
        goto LABEL_37;
      SummonAssetManager__LoadSummonAssets(v43, v48, 0LL);
      fsm = this->fields.fsm;
      if ( !fsm )
        goto LABEL_37;
      v50 = &StringLiteral_9721/*"OPEN"*/;
LABEL_36:
      PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v50, 0LL);
      return;
    default:
      goto LABEL_20;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FA34E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12284/*"START_Begin"*/, method);
    byte_40FA34E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12284/*"START_Begin"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_40FA353 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_40FA353 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_40FA35E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5481/*"END_PROC"*/, method);
    byte_40FA35E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5481/*"END_PROC"*/, 0LL);
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
  UnityEngine_Component_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x23
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  SummonAssetManager_o *Instance; // x23
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Prefab; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FA361 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, userCommandCodeId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7);
    byte_40FA361 = 1;
  }
  p_ServantRewardActionComp = (UnityEngine_Component_o **)&this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    if ( !*p_ServantRewardActionComp )
      goto LABEL_16;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_ServantRewardActionComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v11, v12, v13, v14, v15, v16);
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(Instance, transform, 1, 0LL),
        *p_ServantRewardActionComp = (UnityEngine_Component_o *)Prefab,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
          Prefab,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        !*p_ServantRewardActionComp)
    || (ServantRewardAction__SetupCommandCode_28281192(
          (ServantRewardAction_o *)*p_ServantRewardActionComp,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        !*p_ServantRewardActionComp) )
  {
LABEL_16:
    sub_B170D4();
  }
  ServantRewardAction__Play((ServantRewardAction_o *)*p_ServantRewardActionComp, action, 0.0, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  UnityEngine_Component_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  UserServantEntity_o *v22; // x22
  UnityEngine_Object_o *gameObject; // x25
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  SummonAssetManager_o *v30; // x25
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **Prefab; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  UnityEngine_Component_o *v39; // x24
  __int64 v40; // x25
  __int64 v41; // x26
  int32_t v42; // w0
  __int128 v43; // q1
  int32_t v44; // w23
  int64_t v45; // x0
  __int64 v46; // x8
  int64_t v47; // x22
  int32_t v48; // w0
  int32_t v49; // w0
  __int128 v50; // q1
  int32_t v51; // w21
  int64_t v52; // x0
  __int64 v53; // x8
  int64_t v54; // x22
  int32_t v55; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // 0:x0.16

  if ( (byte_40FA360 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v16);
    byte_40FA360 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_35;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             userSvtId,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = (UnityEngine_Component_o **)&this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v22 = Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
  {
    if ( !*p_ServantRewardActionComp )
      goto LABEL_35;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_ServantRewardActionComp, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v24, v25, v26, v27, v28, v29);
  }
  v30 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v30 )
    goto LABEL_35;
  Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(v30, transform, 1, 0LL);
  *p_ServantRewardActionComp = (UnityEngine_Component_o *)Prefab;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
    Prefab,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  if ( !v22 )
    goto LABEL_35;
  v39 = *p_ServantRewardActionComp;
  v41 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v40 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( isDoEffect )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v59.fields.currentCryptoKey = v41;
    *(_QWORD *)&v59.fields.fakeValue = v40;
    v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v59, 0LL);
    v43 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
    v44 = v42;
    *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v58.fields.fakeValue = v43;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v57 = v58;
    v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v57, 0LL);
    v46 = *(_QWORD *)&v22->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v60.fields.fakeValue = *(_QWORD *)&v22->fields.limitCount.fields.fakeValue;
    v47 = v45;
    *(_QWORD *)&v60.fields.currentCryptoKey = v46;
    v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v60, 0LL);
    if ( v39 )
    {
      ServantRewardAction__Setup((ServantRewardAction_o *)v39, v44, v47, v48, 1, isNew, 1, 10, 0LL);
      goto LABEL_33;
    }
LABEL_35:
    sub_B170D4();
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v61.fields.currentCryptoKey = v41;
  *(_QWORD *)&v61.fields.fakeValue = v40;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v61, 0LL);
  v50 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v51 = v49;
  *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v58.fields.fakeValue = v50;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v56 = v58;
  v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v56, 0LL);
  v53 = *(_QWORD *)&v22->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v62.fields.fakeValue = *(_QWORD *)&v22->fields.limitCount.fields.fakeValue;
  v54 = v52;
  *(_QWORD *)&v62.fields.currentCryptoKey = v53;
  v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v62, 0LL);
  if ( !v39 )
    goto LABEL_35;
  ServantRewardAction__Setup((ServantRewardAction_o *)v39, v51, v54, v55, 1, 1, 1, 2, 0LL);
LABEL_33:
  if ( !*p_ServantRewardActionComp )
    goto LABEL_35;
  ServantRewardAction__Play((ServantRewardAction_o *)*p_ServantRewardActionComp, action, 0.0, 0LL);
}


void __fastcall BattleResultComponent__openTouchWait(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_B170D4();
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
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x22
  const MethodInfo *v18; // x5
  PlayMakerFSM_o *fsm; // x0
  __int64 *v20; // x8
  UnityEngine_Component_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CommonUI_o *Instance; // x0

  if ( (byte_40FA35F & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, userSvtId);
    sub_B16FFC(&Method_BattleResultComponent_endNewView__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_9721/*"OPEN"*/, v10);
    sub_B16FFC(&StringLiteral_9268/*"NEXT"*/, v11);
    byte_40FA35F = 1;
  }
  if ( userSvtId < 1 )
  {
    p_ServantRewardActionComp = (UnityEngine_Component_o **)&this->fields.ServantRewardActionComp;
    ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(ServantRewardActionComp, 0LL, 0LL) )
    {
      if ( !*p_ServantRewardActionComp )
        goto LABEL_19;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_ServantRewardActionComp, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
        0LL,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      CommonUI__maskFadein(Instance, 0.0, 0LL, 0LL);
    }
    fsm = this->fields.fsm;
    if ( fsm )
    {
      v20 = &StringLiteral_9268/*"NEXT"*/;
      goto LABEL_18;
    }
LABEL_19:
    sub_B170D4();
  }
  v12 = Gift__IsEventSvtGet(type, 0LL);
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v12, v12, v17, v18);
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_19;
  v20 = &StringLiteral_9721/*"OPEN"*/;
LABEL_18:
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v20, 0LL);
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
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v8; // x20
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_40F7187 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_40F7187 = 1;
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
      sub_B170D4();
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForSeconds___ctor(v8, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v8;
    sub_B16F98(&this->fields.__2__current, v8);
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(
    &Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_System_Collections_IEnumerator_Reset__,
    v8);
  sub_B170A0();
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
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  struct BattleResultComponent___c_StaticFields *static_fields; // x0

  if ( (byte_40F7184 & 1) == 0 )
  {
    sub_B16FFC(&BattleResultComponent___c_TypeInfo, v1);
    byte_40F7184 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleResultComponent___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = BattleResultComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultComponent___c_o *)v5;
  sub_B16F98(static_fields, v5);
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

  if ( (byte_40F7185 & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F7185 = 1;
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
  sub_B16F98(&static_fields->mQuestRewardInfos, 0LL);
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
  __int64 v3; // x1
  struct BattleDropItem_o *newDrop; // x8
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct BattleDropItem_o *v9; // x8
  int64_t userSvtId; // x20
  Il2CppObject *_4__this; // x19
  System_Action_o *v12; // x21
  struct BattleDropItem_o *v13; // x8
  bool _28854780; // w0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct BattleDropItem_o *v19; // x8
  int64_t v20; // x21
  Il2CppObject *v21; // x19
  bool v22; // w20
  System_Action_o *v23; // x22

  if ( (byte_40F7186 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleResultComponent_endNewView__, v3);
    byte_40F7186 = 1;
  }
  newDrop = this->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  if ( Gift__IsCommandCode_28855136(newDrop->fields.type, 0LL) )
  {
    v9 = this->fields.newDrop;
    if ( v9 )
    {
      userSvtId = v9->fields.userSvtId;
      _4__this = (Il2CppObject *)this->fields.__4__this;
      v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v5, v6, v7, v8);
      System_Action___ctor(v12, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v12, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  v13 = this->fields.newDrop;
  if ( !v13 )
    goto LABEL_12;
  _28854780 = Gift__IsEventSvtGet_28854780(v13->fields.type, 0LL);
  v19 = this->fields.newDrop;
  if ( !v19 )
    goto LABEL_12;
  v20 = v19->fields.userSvtId;
  v21 = (Il2CppObject *)this->fields.__4__this;
  v22 = _28854780;
  v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v15, v16, v17, v18);
  System_Action___ctor(v23, v21, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v21 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v21, v20, v22, v22, v23, 0LL);
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
  __int64 v2; // x2
  struct GetSvts_array *getJoinSvts; // x10
  int max_length; // w8
  __int64 v5; // x9
  GetSvts_o **m_Items; // x10
  GetSvts_o *v7; // x11

  getJoinSvts = this->fields.getJoinSvts;
  if ( !getJoinSvts )
    return 0;
  max_length = getJoinSvts->max_length;
  if ( max_length < 1 )
    return 0;
  v5 = 0LL;
  m_Items = getJoinSvts->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v5 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v7 = m_Items[v5];
    if ( !v7 )
      sub_B170D4();
    if ( v7->fields.isNew )
      break;
    if ( (int)++v5 >= max_length )
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