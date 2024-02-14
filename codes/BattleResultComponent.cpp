void __fastcall BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleResultEventItemComponent_o *eventItemResult; // x0
  __int64 *v5; // x9

  if ( (byte_421489A & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3101/*"CLOSE"*/, method);
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, v3);
    byte_421489A = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                method),
        !this->fields.fsm) )
  {
    sub_B0D97C(eventItemResult);
  }
  if ( ((unsigned __int8)eventItemResult & 1) != 0 )
    v5 = &StringLiteral_9321/*"NEXT"*/;
  else
    v5 = &StringLiteral_3101/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(this->fields.fsm, (System_String_o *)*v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UIWidget_o *nextButtonSpr; // x20
  int v5; // s0

  if ( (byte_4214897 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_4214897 = 1;
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
    sub_B0D97C(touchGuard);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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

  if ( (byte_42148A1 & 1) == 0 )
  {
    sub_B0D8A4(&AndroidBackKeyManager_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_B0D8A4(&StringLiteral_22038/*"sendFsmEvent"*/, v6);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v7);
    byte_42148A1 = 1;
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
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_B0D97C(Instance);
  UnityEngine_GameObject__SendMessage_40784812(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_22038/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5512/*"END_PROC"*/,
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
  if ( (byte_42148A4 & 1) == 0 )
  {
    this = (BattleResultComponent_o *)sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, isDecide);
    byte_42148A4 = 1;
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
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL);
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
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct ScreenTouchInformationComponent_o *Component_srcLineSprite; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_421488B & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___, releasePerformanceObject);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_421488B = 1;
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
  BattleResultExpComponent__Init((BattleResultExpComponent_o *)gameObject, v11);
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultItemComponent__Init((BattleResultItemComponent_o *)gameObject, v12);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v13);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventDamageItemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v14);
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
    BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v16);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.friendResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultFriendComponent__Init((BattleResultFriendComponent_o *)gameObject, releasePerformanceObject, v17);
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
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34935276(v21, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v22, v23, v24, v25, v26, v27);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_srcLineSprite = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                gameObject,
                                                                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = Component_srcLineSprite,
        p_screenTouch = &this->fields.screenTouch,
        sub_B0D840(
          (BattleServantConfConponent_o *)p_screenTouch,
          (System_Int32_array **)Component_srcLineSprite,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 11)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_38:
    sub_B0D97C(gameObject);
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
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v14; // w20
  WarQuestSelectionMaster_o *v15; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42148A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v3);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&NetworkManager_TypeInfo, v5);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_12295/*"SKIP"*/, v7);
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, v8);
    byte_42148A9 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    byte_421083F = 1;
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
  v14 = EventDataLostBattleId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v15 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v15 )
LABEL_31:
    sub_B0D97C(UserId);
  if ( UserEventDataLostMaster__TryGetEntity((UserEventDataLostMaster_o *)v15, &entity, UserId, v14, 0LL) )
  {
    UserId = (int64_t)entity;
    if ( !entity )
      goto LABEL_31;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0LL) )
    {
      UserId = (int64_t)this->fields.fsm;
      if ( !UserId )
        goto LABEL_31;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)UserId, (System_String_o *)StringLiteral_9321/*"NEXT"*/, 0LL);
    }
  }
LABEL_29:
  UserId = (int64_t)this->fields.fsm;
  if ( !UserId )
    goto LABEL_31;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)UserId, (System_String_o *)StringLiteral_12295/*"SKIP"*/, 0LL);
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
    sub_B0D97C(obj_fronttouch);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, 0LL);
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
  _DWORD *monitor; // x8
  int32_t v8; // w20
  TerminalPramsManager_c *v9; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v11; // x22

  v3 = (Il2CppObject *)this;
  if ( (byte_42148AA & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, v4);
    sub_B0D8A4(&DataLostResetManager_TypeInfo, v5);
    this = (BattleResultComponent_o *)sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    byte_42148AA = 1;
  }
  monitor = v3[9].monitor;
  if ( !monitor )
    sub_B0D97C(this);
  v8 = monitor[5];
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421083F = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v9->static_fields->_WarId_k__BackingField;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v11, v3, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, 0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__OpenBattleResultResetDialog(v8, WarId_k__BackingField, v11, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_421489B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B0D8A4(&StringLiteral_12295/*"SKIP"*/, v3);
    byte_421489B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v7) )
    {
      Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v8);
        return;
      }
LABEL_19:
      sub_B0D97C(Instance);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12295/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  UnityEngine_Object_o *eventFortificationItemResult; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  if ( (byte_42148A8 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_12295/*"SKIP"*/, v4);
    byte_42148A8 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
           v7) )
    {
      Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__OpenEventFortification((BattleResultEventItemComponent_o *)Instance, v8);
        return;
      }
LABEL_22:
      sub_B0D97C(Instance);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_22;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12295/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  if ( (byte_4214899 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_B0D8A4(&StringLiteral_12295/*"SKIP"*/, v3);
    byte_4214899 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v6);
      return;
    }
LABEL_14:
    sub_B0D97C(Instance);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12295/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenExp(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0
  const MethodInfo *v4; // x1

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 0, 0LL), (obj_fronttouch = this->fields.obj_basebg) == 0LL)
    || (UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL),
        (obj_fronttouch = (UnityEngine_GameObject_o *)this->fields.expResult) == 0LL) )
  {
    sub_B0D97C(obj_fronttouch);
  }
  BattleResultExpComponent__Open((BattleResultExpComponent_o *)obj_fronttouch, v4);
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
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w21
  QuestEntity_o *Entity; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  MapControl_QuestInfo_o *v19; // x20
  int32_t questId; // w23
  __int64 v21; // x1
  bool IsQuestClear_25410236; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v25; // w22
  __int64 v26; // x1
  clsQuestCheck_o *v27; // x21
  TerminalPramsManager_c *v28; // x0
  const MethodInfo *v29; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42148A5 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&boostId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_B0D8A4(&MapControl_QuestInfo_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v10);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    byte_42148A5 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  BYTE4(Instance[1].klass) = 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    byte_4210852 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              QuestId_k__BackingField,
                              (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v19 = (MapControl_QuestInfo_o *)sub_B0D974(MapControl_QuestInfo_TypeInfo, v17, v18);
  MapControl_QuestInfo___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_46;
  MapControl_QuestInfo__SetTerminalParamsValue(v19, 0LL);
  questId = v19->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25410236 = CondType__IsQuestClear_25410236(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v21);
    byte_4210853 = 1;
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
                            !IsQuestClear_25410236,
                            &fixedVal,
                            0LL);
  v19->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume(Entity, CampaignCostCalcValue, 0LL);
  v19->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v25 = fixedVal;
  else
    v25 = ActConsume;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v27 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4211ACE )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v26);
    byte_4211ACE = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v27 )
    goto LABEL_46;
  if ( !clsQuestCheck__CheckQuestPlayable(
          v27,
          v19,
          (int64_t)Instance[1].fields.saveNameList[2].fields._syncRoot,
          boostId,
          0LL) )
    return;
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->lastPlayQuestConsumeAp = v25;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_46:
    sub_B0D97C(Instance);
  LODWORD(Instance[1].monitor) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v29);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleResultComponent_resultData_o *battleResult; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x0

  if ( (byte_4214898 & 1) == 0 )
  {
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B0D8A4(&StringLiteral_13092/*"StartQuestClearReward"*/, v4);
    byte_4214898 = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_13;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13092/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleResult = (BattleResultComponent_resultData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResult
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)battleResult, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleResult, 0, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.friendResult) == 0LL) )
  {
LABEL_13:
    sub_B0D97C(battleResult);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)battleResult, v6);
  BattleResultComponent__ResetTimeScale(v7);
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
  NotificationDialog_ClickDelegate_o *v12; // x23
  UnityEngine_Component_o *resultSprite; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4214891 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultComponent_endCloseEndEventMessage__, method);
    sub_B0D8A4(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4214891 = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields.m_stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v9 = (CommonUI_o *)Instance;
    v12 = (NotificationDialog_ClickDelegate_o *)sub_B0D974(NotificationDialog_ClickDelegate_TypeInfo, v10, v11);
    NotificationDialog_ClickDelegate___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v9 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_17019096(
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
    sub_B0D97C(resultSprite);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, v14);
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
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42148A2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BattleResultComponent__OpenRetryQuest_b__60_0__, method);
    sub_B0D8A4(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_42148A2 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_16;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v9 = this->fields.battleRetryConfirmComponent;
    v10 = (BattleWindowComponent_EndCall_o *)sub_B0D974(BattleWindowComponent_EndCall_TypeInfo, v7, v8);
    BattleWindowComponent_EndCall___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultComponent__OpenRetryQuest_b__60_0__,
      0LL);
    if ( !v9 )
      goto LABEL_16;
    BattleRetryConfirmComponent__Open(v9, v10, 0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
LABEL_16:
    sub_B0D97C(battleRetryConfirmComponent);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  BattleEventTutorial_o *eventTutorial; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  BattleEventTutorial_o *v8; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  BattleEventTutorial_o *v12; // x20
  System_Action_o *v13; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  BattleEventTutorial_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_4214890 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattleResultComponent_OpenTutorial__, v3);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v4);
    byte_4214890 = 1;
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
    v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v8 )
    {
      BattleEventTutorial__callResult(v8, v9, 0LL);
      return;
    }
LABEL_23:
    sub_B0D97C(eventTutorial);
  }
  if ( !v8 )
    goto LABEL_23;
  if ( BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0LL) )
  {
    eventTutorial = (BattleEventTutorial_o *)this->fields.battleResult;
    if ( !eventTutorial )
      goto LABEL_23;
    if ( BattleResultComponent_resultData__isWin((BattleResultComponent_resultData_o *)eventTutorial, 0LL) )
    {
      v12 = this->fields.eventTutorial;
      v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v10, v11);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
      if ( !v12 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v12, v13, 0LL);
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
    v16 = this->fields.eventTutorial;
    v17 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( !v16 )
      goto LABEL_23;
    BattleEventTutorial__callResultLose(v16, v17, 0LL);
  }
  else
  {
LABEL_19:
    eventTutorial = (BattleEventTutorial_o *)this->fields.fsm;
    if ( !eventTutorial )
      goto LABEL_23;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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

  if ( (byte_42148A6 & 1) == 0 )
  {
    sub_B0D8A4(&BattleSetupInfo_TypeInfo, *(_QWORD *)&boostId);
    sub_B0D8A4(&RandomLimitCountManager_TypeInfo, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_B0D8A4(&SoundManager_TypeInfo, v6);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    byte_42148A6 = 1;
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
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    byte_421083F = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v11->static_fields->_WarId_k__BackingField;
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210852 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v11->static_fields->_QuestId_k__BackingField;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v9);
    v11 = TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
  }
  if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v11->static_fields->_PhaseCnt_k__BackingField;
  v15 = (BattleSetupInfo_o *)sub_B0D974(BattleSetupInfo_TypeInfo, v9, v10);
  BattleSetupInfo___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_33;
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
      goto LABEL_33;
    LODWORD(Instance[3].monitor) = boostId;
  }
  Instance = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_33:
    sub_B0D97C(Instance);
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
    sub_B0D97C(this);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  ScreenTouchInformationComponent_o *v4; // x0

  if ( (byte_421488E & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_421488E = 1;
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
    if ( !v4 || (ScreenTouchInformationComponent__ResetPlayScale(v4, 0LL), (v4 = this->fields.screenTouch) == 0LL) )
      sub_B0D97C(v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v4, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42148A7 & 1) == 0 )
  {
    sub_B0D8A4(&BattlePerformance_TypeInfo, v1);
    byte_42148A7 = 1;
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
  __int64 v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Object_array *v24; // x20
  __int64 v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x21
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x1
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x21
  System_Collections_Hashtable_o *v118; // x0
  __int64 v119; // x0
  __int64 v120; // x0
  int v121; // [xsp+Ch] [xbp-34h] BYREF
  int v122; // [xsp+10h] [xbp-30h] BYREF
  int v123; // [xsp+14h] [xbp-2Ch] BYREF
  int v124; // [xsp+18h] [xbp-28h] BYREF
  int v125; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4214894 & 1) == 0 )
  {
    sub_B0D8A4(&iTween_EaseType_TypeInfo, method);
    sub_B0D8A4(&object___TypeInfo, v3);
    sub_B0D8A4(&float_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_18972/*"from"*/, v5);
    sub_B0D8A4(&StringLiteral_12668/*"ScrollBarMotionCompleteValue"*/, v6);
    sub_B0D8A4(&StringLiteral_22753/*"time"*/, v7);
    sub_B0D8A4(&StringLiteral_21341/*"onupdate"*/, v8);
    sub_B0D8A4(&StringLiteral_18005/*"delay"*/, v9);
    sub_B0D8A4(&StringLiteral_12669/*"ScrollBarMotionUpdateValue"*/, v10);
    sub_B0D8A4(&StringLiteral_22790/*"to"*/, v11);
    sub_B0D8A4(&StringLiteral_18169/*"easeType"*/, v12);
    sub_B0D8A4(&StringLiteral_21332/*"oncomplete"*/, v13);
    sub_B0D8A4(&iTween_TypeInfo, v14);
    byte_4214894 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42502584(gameObject, 0LL);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_B0D8BC(object___TypeInfo, 14LL);
  if ( !v17 )
    sub_B0D97C(0LL);
  v24 = (System_Object_array *)v17;
  v25 = StringLiteral_18972/*"from"*/;
  if ( StringLiteral_18972/*"from"*/ )
  {
    v25 = sub_B0D964(StringLiteral_18972/*"from"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v26 = (System_Int32_array **)StringLiteral_18972/*"from"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( !v24->max_length )
    goto LABEL_68;
  v24->m_Items[0] = (Il2CppObject *)v26;
  sub_B0D840((BattleServantConfConponent_o *)v24->m_Items, v26, v18, v19, v20, v21, v22, v23);
  v125 = 0;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v125);
  v33 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
  }
  if ( v24->max_length <= 1 )
    goto LABEL_68;
  v24->m_Items[1] = (Il2CppObject *)v33;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[1], v33, v27, v28, v29, v30, v31, v32);
  v25 = StringLiteral_22790/*"to"*/;
  if ( StringLiteral_22790/*"to"*/ )
  {
    v25 = sub_B0D964(StringLiteral_22790/*"to"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v40 = (System_Int32_array **)StringLiteral_22790/*"to"*/;
  }
  else
  {
    v40 = 0LL;
  }
  if ( v24->max_length <= 2 )
    goto LABEL_68;
  v24->m_Items[2] = (Il2CppObject *)v40;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[2], v40, v34, v35, v36, v37, v38, v39);
  v124 = 1065353216;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v124);
  v47 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
  }
  if ( v24->max_length <= 3 )
    goto LABEL_68;
  v24->m_Items[3] = (Il2CppObject *)v47;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[3], v47, v41, v42, v43, v44, v45, v46);
  v25 = StringLiteral_21341/*"onupdate"*/;
  if ( StringLiteral_21341/*"onupdate"*/ )
  {
    v25 = sub_B0D964(StringLiteral_21341/*"onupdate"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v54 = (System_Int32_array **)StringLiteral_21341/*"onupdate"*/;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v24->max_length <= 4 )
    goto LABEL_68;
  v24->m_Items[4] = (Il2CppObject *)v54;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[4], v54, v48, v49, v50, v51, v52, v53);
  v25 = StringLiteral_12669/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12669/*"ScrollBarMotionUpdateValue"*/ )
  {
    v25 = sub_B0D964(StringLiteral_12669/*"ScrollBarMotionUpdateValue"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v61 = (System_Int32_array **)StringLiteral_12669/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( v24->max_length <= 5 )
    goto LABEL_68;
  v24->m_Items[5] = (Il2CppObject *)v61;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[5], v61, v55, v56, v57, v58, v59, v60);
  v25 = StringLiteral_21332/*"oncomplete"*/;
  if ( StringLiteral_21332/*"oncomplete"*/ )
  {
    v25 = sub_B0D964(StringLiteral_21332/*"oncomplete"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v68 = (System_Int32_array **)StringLiteral_21332/*"oncomplete"*/;
  }
  else
  {
    v68 = 0LL;
  }
  if ( v24->max_length <= 6 )
    goto LABEL_68;
  v24->m_Items[6] = (Il2CppObject *)v68;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[6], v68, v62, v63, v64, v65, v66, v67);
  v25 = StringLiteral_12668/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12668/*"ScrollBarMotionCompleteValue"*/ )
  {
    v25 = sub_B0D964(StringLiteral_12668/*"ScrollBarMotionCompleteValue"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v75 = (System_Int32_array **)StringLiteral_12668/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v75 = 0LL;
  }
  if ( v24->max_length <= 7 )
    goto LABEL_68;
  v24->m_Items[7] = (Il2CppObject *)v75;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[7], v75, v69, v70, v71, v72, v73, v74);
  v25 = StringLiteral_18169/*"easeType"*/;
  if ( StringLiteral_18169/*"easeType"*/ )
  {
    v25 = sub_B0D964(StringLiteral_18169/*"easeType"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v82 = (System_Int32_array **)StringLiteral_18169/*"easeType"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( v24->max_length <= 8 )
    goto LABEL_68;
  v24->m_Items[8] = (Il2CppObject *)v82;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[8], v82, v76, v77, v78, v79, v80, v81);
  v123 = 17;
  v25 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v123);
  v89 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
  }
  if ( v24->max_length <= 9 )
    goto LABEL_68;
  v24->m_Items[9] = (Il2CppObject *)v89;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[9], v89, v83, v84, v85, v86, v87, v88);
  v25 = StringLiteral_22753/*"time"*/;
  if ( StringLiteral_22753/*"time"*/ )
  {
    v25 = sub_B0D964(StringLiteral_22753/*"time"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v96 = (System_Int32_array **)StringLiteral_22753/*"time"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( v24->max_length <= 0xA )
    goto LABEL_68;
  v24->m_Items[10] = (Il2CppObject *)v96;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[10], v96, v90, v91, v92, v93, v94, v95);
  v122 = 1065353216;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v122);
  v103 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
  }
  if ( v24->max_length <= 0xB )
    goto LABEL_68;
  v24->m_Items[11] = (Il2CppObject *)v103;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[11], v103, v97, v98, v99, v100, v101, v102);
  v25 = StringLiteral_18005/*"delay"*/;
  if ( StringLiteral_18005/*"delay"*/ )
  {
    v25 = sub_B0D964(StringLiteral_18005/*"delay"*/, v24->obj.klass->_1.element_class);
    if ( !v25 )
      goto LABEL_69;
    v110 = (System_Int32_array **)StringLiteral_18005/*"delay"*/;
  }
  else
  {
    v110 = 0LL;
  }
  if ( v24->max_length <= 0xC )
    goto LABEL_68;
  v24->m_Items[12] = (Il2CppObject *)v110;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[12], v110, v104, v105, v106, v107, v108, v109);
  v121 = 0;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v121);
  v117 = (System_Int32_array **)v25;
  if ( v25 )
  {
    v25 = sub_B0D964(v25, v24->obj.klass->_1.element_class);
    if ( !v25 )
    {
LABEL_69:
      v120 = sub_B0D99C(v25);
      sub_B0D948(v120, 0LL);
    }
  }
  if ( v24->max_length <= 0xD )
  {
LABEL_68:
    v119 = sub_B0D9A8(v25);
    sub_B0D948(v119, 0LL);
  }
  v24->m_Items[13] = (Il2CppObject *)v117;
  sub_B0D840((BattleServantConfConponent_o *)&v24->m_Items[13], v117, v111, v112, v113, v114, v115, v116);
  v118 = iTween__Hash(v24, 0LL);
  iTween__ValueTo(v16, v118, 0LL);
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
  const MethodInfo *v10; // x2

  v3 = this;
  if ( (byte_4214896 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__, v4);
    this = (BattleResultComponent_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    byte_4214896 = 1;
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
  v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
  System_Action___ctor(
    v9,
    (Il2CppObject *)v3,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_B0D97C(this);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v9, v10);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1

  if ( (byte_4214895 & 1) == 0 )
  {
    sub_B0D8A4(&iTween_TypeInfo, method);
    byte_4214895 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_B0D97C(0LL);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_42502584(gameObject, 0LL);
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
  BattleResultComponent_o **p_battleResult; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  TerminalPramsManager_c *v45; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w26
  __int64 v47; // x1
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v49; // x0
  int32_t v50; // w19
  BalanceConfig_c *v51; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v53; // x0
  BattleResultComponent_o *v54; // x8
  System_Collections_Generic_IEnumerable_TSource__o *battleRetryConfirmComponent; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  BattleResultComponent_o *v58; // x26
  BattleResultComponent___c_c *v59; // x8
  struct BattleResultComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__34_0; // x19
  Il2CppObject *v62; // x20
  struct BattleResultComponent___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array *v70; // x0
  System_String_o *v71; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ServantRewardActionComp; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  BattleResultComponent_o *v75; // x26
  BattleResultComponent___c_c *v76; // x8
  struct BattleResultComponent___c_StaticFields *v77; // x9
  System_Converter_int__string__o *_9__34_1; // x19
  Il2CppObject *v79; // x20
  struct BattleResultComponent___c_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array *v87; // x0
  System_String_o *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **endtargetObject; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct BattleResultComponent_resultData_o *v102; // x8
  System_Int32_array **eventEndMessage; // x1
  __int64 v104; // x1
  __int64 v105; // x2
  struct BattleResultComponent_resultData_o *v106; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v108; // x26
  BattleResultComponent_resultData_o *v109; // x8
  struct BattleResultExpComponent_o *expResult; // x8
  EventBuddyPointMaster_o *Master_WarQuestSelectionMaster; // x19
  int32_t v112; // w20
  int32_t QuestId; // w23
  bool v114; // w8
  BattleResultComponent_resultData_o *v115; // x9
  struct BattleInfoData_o *battle_info; // x10
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x9
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultFriendComponent_o *friendResult; // x10
  struct BattleResultComponent_o *v120; // x11
  struct BattleResultEventDamageItemComponent_o *v121; // x9
  struct BattleResultComponent_o *v122; // x8
  QuestEntity_o *quest_ent; // x8
  BattleResultItemComponent_o *itemResult; // x25
  int32_t obj_basebg; // w27
  int32_t obj_basebg_high; // w28
  struct BattleResultFriendComponent_o *v127; // x19
  int32_t FriendIconPrefab_high; // w20
  struct UISprite_o *resultSprite; // x23
  struct BattleEventTutorial_o *eventTutorial; // x24
  int32_t firstClearRewardQp; // w26
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  BattleResultComponent_o *v138; // x8
  struct BattleResultItemComponent_o *v139; // x9
  struct UILabel_o *getQpLabel; // x9
  System_Int32_array **mText; // x1
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  struct BattleResultItemComponent_o *v148; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v150; // x9
  System_Int32_array **v151; // x1
  __int64 v152; // x8
  Il2CppObject *v153; // x0
  struct BattleResultItemComponent_o *v154; // x8
  Il2CppObject *v155; // x20
  UILabel_o *v156; // x19
  System_String_o *v157; // x0
  struct BattleResultItemComponent_o *v158; // x8
  __int64 v159; // x9
  UILabel_o *v160; // x19
  Il2CppObject *v161; // x0
  UIWidget_o *nextButtonSpr; // x19
  int v163; // s0
  BattleResultFriendComponent_o *v167; // x19
  int32_t bondsResult; // w20
  int32_t bondsResult_high; // w23
  int64_t obj_fronttouch; // x24
  int32_t v171; // w25
  int32_t expResult_high; // w26
  const MethodInfo *v173; // x7
  struct BattleResultComponent_resultData_o *v174; // x8
  struct BattleResultComponent_resultData_o *v175; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v177; // x8
  const MethodInfo *v178; // x2
  struct BattleResultComponent_resultData_o *v179; // x8
  struct BattleInfoData_o *v180; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v184; // x20
  char v185; // w22
  BattleResultComponent_o *v186; // x19
  int32_t v187; // w20
  int32_t EventProgressValueSaveData_26584640; // w0
  __int64 v189; // x1
  int v190; // w8
  TerminalPramsManager_c *v191; // x0
  struct UnityEngine_GameObject_o *v192; // x8
  bool isWin; // w19
  __int64 v194; // x0
  BattleResultComponent_resultData_o *battleResult; // [xsp+0h] [xbp-100h]
  const MethodInfo *v196; // [xsp+40h] [xbp-C0h]
  struct UISprite_o *v197; // [xsp+48h] [xbp-B8h]
  struct BattleResultEventItemComponent_o *eventItemResult; // [xsp+50h] [xbp-B0h]
  int32_t eventId; // [xsp+5Ch] [xbp-A4h]
  UserGameEntity_o *oldGame; // [xsp+60h] [xbp-A0h]
  struct BattleResultComponent_resultData_o *v201; // [xsp+68h] [xbp-98h]
  System_Int32_array *v202; // [xsp+70h] [xbp-90h]
  BattleData_o *v203; // [xsp+78h] [xbp-88h]
  BattleResultComponent_resultData_array *v204; // [xsp+80h] [xbp-80h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+88h] [xbp-78h]
  unsigned int v206; // [xsp+90h] [xbp-70h] BYREF
  int v207; // [xsp+98h] [xbp-68h] BYREF
  int v208; // [xsp+9Ch] [xbp-64h] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF
  UnityEngine_Color32_o v210; // 0:x0.8
  UnityEngine_Color32_o v211; // 0:x0.8

  battleData = bData;
  v12 = resultList;
  v13 = this;
  if ( (byte_421488F & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, resultList);
    sub_B0D8A4(&Method_System_Converter_int__string___ctor__, v14);
    sub_B0D8A4(&System_Converter_int__string__TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventBuddyPointMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventProgressValueMaster___, v17);
    sub_B0D8A4(&DataManager_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v19);
    sub_B0D8A4(&EventInfoUIProgressControl_TypeInfo, v20);
    sub_B0D8A4(&int_TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, v23);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v24);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v25);
    sub_B0D8A4(&QuestKnockdownResult_TypeInfo, v26);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v27);
    sub_B0D8A4(&Method_BattleResultComponent___c__Set_b__34_0__, v28);
    sub_B0D8A4(&Method_BattleResultComponent___c__Set_b__34_1__, v29);
    sub_B0D8A4(&BattleResultComponent___c_TypeInfo, v30);
    sub_B0D8A4(&StringLiteral_18947/*"freeShopIds"*/, v31);
    sub_B0D8A4(&StringLiteral_11149/*"RESULT_QP_PLUS"*/, v32);
    sub_B0D8A4(&StringLiteral_23567/*"{0:#,0}"*/, v33);
    sub_B0D8A4(&StringLiteral_21882/*"returnRarePriShopIds"*/, v34);
    this = (BattleResultComponent_o *)sub_B0D8A4(&StringLiteral_705/*","*/, v35);
    byte_421488F = 1;
  }
  entity = 0LL;
  if ( !v12 )
    goto LABEL_224;
  if ( !v12->max_length )
    goto LABEL_225;
  v36 = (System_Int32_array **)v12->m_Items[0];
  v13->fields.battleResult = (struct BattleResultComponent_resultData_o *)v36;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v13->fields.battleResult,
    v36,
    (System_String_array **)tutorial,
    (System_String_array **)resultAsset,
    (System_Boolean_array **)viewGroupIds,
    (System_Int32_array **)bData,
    (System_Int32_array *)method,
    v7);
  v13->fields.eventTutorial = tutorial;
  p_eventTutorial = (BattleResultComponent_o **)&v13->fields.eventTutorial;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v13->fields.eventTutorial,
    (System_Int32_array **)tutorial,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
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
      if ( !byte_4211AD1 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v44);
        byte_4211AD1 = 1;
      }
      v45 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v45 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v45->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(battleData, 0LL);
      if ( !byte_4211AB5 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v47);
        byte_4211AB5 = 1;
      }
      v49 = TerminalPramsManager_TypeInfo;
      v50 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v49 = TerminalPramsManager_TypeInfo;
      }
      v49->static_fields->_BeforeEventActivityPoint_k__BackingField = v50;
      v51 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v51 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v51->static_fields->UserEventActivityPointMax;
      if ( !byte_4211AD1 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v47);
        byte_4211AD1 = 1;
      }
      v53 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v53 = TerminalPramsManager_TypeInfo;
      }
      if ( v53->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v53);
        if ( !byte_4211AB5 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v47);
          byte_4211AB5 = 1;
        }
        v53 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v53 = TerminalPramsManager_TypeInfo;
        }
        v53->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v53);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v54 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  battleRetryConfirmComponent = (System_Collections_Generic_IEnumerable_TSource__o *)v54[1].fields.battleRetryConfirmComponent;
  if ( battleRetryConfirmComponent )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        battleRetryConfirmComponent,
                                        (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
    v58 = this;
    v59 = BattleResultComponent___c_TypeInfo;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v59 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v59->static_fields;
    _9__34_0 = static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v59);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v62 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Converter_int__string__o *)sub_B0D974(System_Converter_int__string__TypeInfo, v56, v57);
      System_Converter_int__string____ctor(
        _9__34_0,
        v62,
        Method_BattleResultComponent___c__Set_b__34_0__,
        (const MethodInfo_2665798 *)Method_System_Converter_int__string___ctor__);
      v63 = BattleResultComponent___c_TypeInfo->static_fields;
      v63->__9__34_0 = _9__34_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v63->__9__34_0,
        (System_Int32_array **)_9__34_0,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    if ( !v58 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                        (System_Collections_Generic_List_int__o *)v58,
                                        (System_Converter_T__TOutput__o *)_9__34_0,
                                        (const MethodInfo_189F648 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_224;
    v70 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
    v71 = System_String__Join((System_String_o *)StringLiteral_705/*","*/, v70, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_18947/*"freeShopIds"*/, v71, 0LL);
    v54 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
  }
  ServantRewardActionComp = (System_Collections_Generic_IEnumerable_TSource__o *)v54[1].fields.ServantRewardActionComp;
  if ( ServantRewardActionComp )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        ServantRewardActionComp,
                                        (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
    v75 = this;
    v76 = BattleResultComponent___c_TypeInfo;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v76 = BattleResultComponent___c_TypeInfo;
    }
    v77 = v76->static_fields;
    _9__34_1 = v77->__9__34_1;
    if ( !_9__34_1 )
    {
      if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v76);
        v77 = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v79 = (Il2CppObject *)v77->__9;
      _9__34_1 = (System_Converter_int__string__o *)sub_B0D974(System_Converter_int__string__TypeInfo, v73, v74);
      System_Converter_int__string____ctor(
        _9__34_1,
        v79,
        Method_BattleResultComponent___c__Set_b__34_1__,
        (const MethodInfo_2665798 *)Method_System_Converter_int__string___ctor__);
      v80 = BattleResultComponent___c_TypeInfo->static_fields;
      v80->__9__34_1 = _9__34_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v80->__9__34_1,
        (System_Int32_array **)_9__34_1,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86);
    }
    if ( !v75 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                        (System_Collections_Generic_List_int__o *)v75,
                                        (System_Converter_T__TOutput__o *)_9__34_1,
                                        (const MethodInfo_189F648 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_224;
    v87 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                   (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                   (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
    v88 = System_String__Join((System_String_o *)StringLiteral_705/*","*/, v87, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_21882/*"returnRarePriShopIds"*/, v88, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_224;
  endtargetObject = (System_Int32_array **)(*p_battleResult)->fields.endtargetObject;
  v13->fields.eventEndTitle = (struct System_String_o *)endtargetObject;
  sub_B0D840((BattleServantConfConponent_o *)&v13->fields.eventEndTitle, endtargetObject, v89, v90, v91, v92, v93, v94);
  v102 = v13->fields.battleResult;
  if ( !v102 )
    goto LABEL_224;
  eventEndMessage = (System_Int32_array **)v102->fields.eventEndMessage;
  v13->fields.eventEndMessage = (struct System_String_o *)eventEndMessage;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v13->fields.eventEndMessage,
    eventEndMessage,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v106 = v13->fields.battleResult;
  if ( !v106 )
    goto LABEL_224;
  isTrialQuestNewRecord = v106->fields.isTrialQuestNewRecord;
  v108 = (QuestKnockdownResult_o *)sub_B0D974(QuestKnockdownResult_TypeInfo, v104, v105);
  QuestKnockdownResult___ctor(v108, isTrialQuestNewRecord, battleData, 0LL);
  if ( !battleData )
    goto LABEL_224;
  this = (BattleResultComponent_o *)battleData->fields.battle_info;
  if ( !this )
    goto LABEL_224;
  this = (BattleResultComponent_o *)BattleInfoData__IsWaveMyDecks((BattleInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v109 = v13->fields.battleResult;
    if ( !v109 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.bondsResult;
    if ( !this )
      goto LABEL_224;
    BattleResultBondsComponent__SetMultiBondsResultData(
      (BattleResultBondsComponent_o *)this,
      battleData,
      v109->fields.oldUserSvtCollection,
      v109->fields.friendshipRewardInfos,
      v109->fields.followerType,
      resultAsset,
      v109->fields.friendshipExpBase,
      v109->fields.getJoinSvts,
      v109,
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
      Master_WarQuestSelectionMaster = (EventBuddyPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v112 = BattleData__get_eventId(battleData, 0LL);
      QuestId = BattleData__getQuestId(battleData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(battleData, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_224;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          Master_WarQuestSelectionMaster,
                                          &entity,
                                          v112,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_224;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v114 = (unsigned __int8)this & 1;
      }
      else
      {
        v114 = 0;
      }
      v115 = v13->fields.battleResult;
      if ( !v115 )
        goto LABEL_224;
      battle_info = battleData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_224;
      this = (BattleResultComponent_o *)v13->fields.bondsResult;
      if ( !this )
        goto LABEL_224;
      BattleResultBondsComponent__setResultData(
        (BattleResultBondsComponent_o *)this,
        v115->fields.myDeck,
        v115->fields.oldUserSvtCollection,
        v115->fields.friendshipRewardInfos,
        v115->fields.followerType,
        resultAsset,
        battle_info->fields.userSvt,
        v115->fields.friendshipExpBase,
        v115->fields.getJoinSvts,
        v115,
        v114,
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
    && (v120 = friendResult->fields.parentComp) != 0LL )
  {
    if ( !(_DWORD)parentComp || !(_DWORD)v120 )
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
      v108,
      (const MethodInfo *)battleResult);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  v121 = this->fields.eventDamageItemResult;
  if ( v121 )
  {
    v122 = v121->fields.parentComp;
    if ( v122 )
    {
      if ( (_DWORD)v122 )
      {
        v202 = viewGroupIds;
        v203 = battleData;
        quest_ent = battleData->fields.quest_ent;
        v204 = v12;
        if ( !quest_ent )
          goto LABEL_224;
        itemResult = v13->fields.itemResult;
        obj_basebg = (int32_t)this->fields.obj_basebg;
        obj_basebg_high = HIDWORD(this->fields.obj_basebg);
        oldGame = (UserGameEntity_o *)v121->fields.myFsm;
        v201 = this->fields.battleResult;
        v127 = this[1].fields.friendResult;
        FriendIconPrefab_high = HIDWORD(this[1].fields.FriendIconPrefab);
        resultSprite = this[1].fields.resultSprite;
        eventId = *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1);
        eventTutorial = this[1].fields.eventTutorial;
        firstClearRewardQp = (int32_t)this->fields.obj_fronttouch;
        eventItemResult = this->fields.eventItemResult;
        v197 = this->fields.resultSprite;
        this = (BattleResultComponent_o *)QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
        if ( !*p_battleResult || !itemResult )
          goto LABEL_224;
        BattleResultItemComponent__setResultData(
          itemResult,
          (BattleDropItem_array *)v201,
          obj_basebg,
          obj_basebg_high,
          oldGame,
          eventId,
          (UserEventEntity_array *)eventItemResult,
          (UserEventPointEntity_array *)v197,
          (int64_t)v127,
          v202,
          FriendIconPrefab_high,
          (DropUpInfo_array *)resultSprite,
          (EventConquestInfo_array *)eventTutorial,
          firstClearRewardQp,
          (unsigned __int8)this & 1,
          *(BattleResultAddRewardBonus_o **)&(*p_battleResult)[1].fields.isAddRewardEffectSkip,
          v196);
        battleData = v203;
        v12 = v204;
        goto LABEL_116;
      }
LABEL_225:
      v194 = sub_B0D9A8(this);
      sub_B0D948(v194, 0LL);
    }
  }
  BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
LABEL_116:
  v138 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( *(_QWORD *)&v138[1].fields.isAddRewardEffectSkip )
  {
    v139 = v13->fields.itemResult;
    if ( !v139 )
      goto LABEL_224;
    getQpLabel = v139->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_224;
    mText = (System_Int32_array **)getQpLabel->fields.mText;
    v138[2].klass = (BattleResultComponent_c *)mText;
    sub_B0D840((BattleServantConfConponent_o *)&v138[2], mText, v132, v133, v134, v135, v136, v137);
    v148 = v13->fields.itemResult;
    if ( !v148 )
      goto LABEL_224;
    nowQpLabel = v148->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_224;
    v150 = v13->fields.battleResult;
    if ( !v150 )
      goto LABEL_224;
    v151 = (System_Int32_array **)nowQpLabel->fields.mText;
    v150->fields.ultimateNowQpText = (struct System_String_o *)v151;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v150->fields.ultimateNowQpText,
      v151,
      v142,
      v143,
      v144,
      v145,
      v146,
      v147);
    if ( !*p_battleResult )
      goto LABEL_224;
    v152 = *(_QWORD *)&(*p_battleResult)[1].fields.isAddRewardEffectSkip;
    if ( !v152 )
      goto LABEL_224;
    v208 = *(_DWORD *)(v152 + 40) & ~(*(int *)(v152 + 40) >> 31);
    v153 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v208);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v153, 0LL);
    v154 = v13->fields.itemResult;
    if ( !v154 )
      goto LABEL_224;
    v155 = (Il2CppObject *)this;
    v156 = v154->fields.getQpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v157 = LocalizationManager__Get((System_String_o *)StringLiteral_11149/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v157, v155, 0LL);
    if ( !v156 )
      goto LABEL_224;
    UILabel__set_text(v156, (System_String_o *)this, 0LL);
    v158 = v13->fields.itemResult;
    if ( !v158 )
      goto LABEL_224;
    if ( !*p_battleResult )
      goto LABEL_224;
    v159 = *(_QWORD *)&(*p_battleResult)[1].fields.isAddRewardEffectSkip;
    if ( !v159 )
      goto LABEL_224;
    v160 = v158->fields.nowQpLabel;
    v207 = *(_DWORD *)(v159 + 44);
    v161 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_23567/*"{0:#,0}"*/, v161, 0LL);
    if ( !v160 )
      goto LABEL_224;
    UILabel__set_text(v160, (System_String_o *)this, 0LL);
    nextButtonSpr = (UIWidget_o *)v13->fields.nextButtonSpr;
    v210 = (UnityEngine_Color32_o)&v206;
    v206 = 0;
    UnityEngine_Color32___ctor(v210, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
    v211 = (UnityEngine_Color32_o)v206;
    *(UnityEngine_Color_o *)&v163 = UnityEngine_Color32__op_Implicit_40760496(v211, 0LL);
    if ( !nextButtonSpr )
      goto LABEL_224;
    UIWidget__set_color(nextButtonSpr, *(UnityEngine_Color_o *)&v163, 0LL);
    v138 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
  }
  this = (BattleResultComponent_o *)battleData->fields.quest_ent;
  if ( !this )
    goto LABEL_224;
  v167 = v13->fields.friendResult;
  bondsResult = (int32_t)v138[1].fields.bondsResult;
  bondsResult_high = HIDWORD(v138[1].fields.bondsResult);
  obj_fronttouch = (int64_t)v138[1].fields.obj_fronttouch;
  v171 = (int32_t)v138[1].fields.expResult;
  expResult_high = HIDWORD(v138[1].fields.expResult);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v167 )
    goto LABEL_224;
  BattleResultFriendComponent__setResultData(
    v167,
    bondsResult,
    bondsResult_high,
    obj_fronttouch,
    v171,
    expResult_high,
    (unsigned __int8)this & 1,
    v173);
  v174 = v13->fields.battleResult;
  if ( !v174 )
    goto LABEL_224;
  this = (BattleResultComponent_o *)v13->fields.eventItemResult;
  if ( !this )
    goto LABEL_224;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v174->fields.resultEventRewardInfos,
                                      (unsigned int)v174->fields.eventId,
                                      v174->fields.resultBoostItemRewardInfos,
                                      v174->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v175 = v13->fields.battleResult;
  if ( !v175 )
    goto LABEL_224;
  this = (BattleResultComponent_o *)v13->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_224;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v175->fields.resultDamageRewardInfos,
    (unsigned int)v175->fields.eventId,
    v175->fields.resultBoostItemRewardInfos,
    v175->fields.rewardInfos,
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
    v177 = v13->fields.battleResult;
    if ( !v177 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_224;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v177->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v177->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v179 = v13->fields.battleResult;
    if ( !v179 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_224;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v179->fields.fortificationInfos,
      v178);
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
  v180 = battleData->fields.battle_info;
  if ( !v180 )
    goto LABEL_224;
  myDeck = v180->fields.myDeck;
  if ( myDeck && (svts = myDeck->fields.svts) != 0LL && (max_length = svts->max_length, max_length >= 1) )
  {
    v184 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v184 >= max_length )
        goto LABEL_225;
      this = (BattleResultComponent_o *)svts->m_Items[v184];
      if ( !this )
        goto LABEL_224;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      if ( (int)++v184 >= max_length )
        goto LABEL_169;
    }
    v185 = 1;
  }
  else
  {
LABEL_169:
    v185 = 0;
  }
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_224;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1),
                                        0LL);
    v186 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_224;
      v187 = *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1);
      if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      }
      EventProgressValueSaveData_26584640 = EventInfoUIProgressControl__GetEventProgressValueSaveData_26584640(
                                              v187,
                                              0,
                                              0LL);
      v190 = (int)v186->fields.obj_fronttouch;
      LODWORD(v186) = 0;
      if ( EventProgressValueSaveData_26584640 != v190 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4210874 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v189);
          byte_4210874 = 1;
        }
        v191 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v191 = TerminalPramsManager_TypeInfo;
        }
        v191->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v186) = 1;
      }
    }
  }
  else
  {
    LODWORD(v186) = 0;
  }
  if ( v185 & 1 | !battleData->fields.isRetryable )
    goto LABEL_196;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( (((unsigned int)v186 | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
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
    sub_B0D97C(this);
  }
  v192 = this[2].fields.endtargetObject;
  if ( v192 && v192[1].klass )
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
  UnityEngine_GameObject_o *touchGuard; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x1

  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4214893 & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method);
    byte_4214893 = 1;
  }
  v4 = sub_B0D974(BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method, v2);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__42___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *)v4,
    0,
    0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
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
  TerminalPramsManager_c *v10; // x8
  CommonUI_o *v11; // x19
  BattleResultComponent___c_c *v12; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x20
  struct BattleResultComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__61_0; // x21
  Il2CppObject *v16; // x22
  struct BattleResultComponent___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42148A3 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v3);
    sub_B0D8A4(&Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, v4);
    sub_B0D8A4(&BattleResultComponent___c_TypeInfo, v5);
    byte_42148A3 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210852 = 1;
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
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = TerminalPramsManager_TypeInfo;
    v11 = (CommonUI_o *)Instance;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    v12 = BattleResultComponent___c_TypeInfo;
    mQuestRewardInfos = v10->static_fields->mQuestRewardInfos;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v12 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__61_0 = static_fields->__9__61_0;
    if ( !_9__61_0 )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__61_0 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v8, v9);
      System_Action___ctor(_9__61_0, v16, Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, 0LL);
      v17 = BattleResultComponent___c_TypeInfo->static_fields;
      v17->__9__61_0 = _9__61_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v17->__9__61_0,
        (System_Int32_array **)_9__61_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    if ( !v11 )
      sub_B0D97C(v12);
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
  struct BattleData_o *data; // x8

  if ( (byte_421488C & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_10125/*"OpenResult"*/, target);
    sub_B0D8A4(&StringLiteral_10661/*"Performance"*/, v7);
    byte_421488C = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10661/*"Performance"*/,
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
    sub_B0D97C(fsm);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10125/*"OpenResult"*/, 0LL);
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
  MissionNotifyManager_o *fsm; // x0
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0

  if ( (byte_42148AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, v5);
    byte_42148AD = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210874 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4210874 = 1;
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
  if ( !byte_4211AC0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    byte_4211AC0 = 1;
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
  fsm = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !fsm )
    goto LABEL_27;
  MissionNotifyManager__StartPause(fsm, 0LL);
  if ( !byte_4211AC5 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    byte_4211AC5 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  v11->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  fsm = (MissionNotifyManager_o *)this->fields.fsm;
  if ( !fsm )
LABEL_27:
    sub_B0D97C(fsm);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__60_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_42148AC & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_13092/*"StartQuestClearReward"*/, method);
    byte_42148AC = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13092/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__45_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42148AB & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_42148AB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  const MethodInfo *v20; // x0
  _QWORD *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  BattleDropItem_o *NewDrop; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Int32_array **v36; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v38; // w0
  SummonAssetManager_o *Instance; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_o *v42; // x22
  __int64 *v43; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_421489C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, *(_QWORD *)&resultType);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B0D8A4(&Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__, v8);
    sub_B0D8A4(&BattleResultComponent___c__DisplayClass53_0_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_9775/*"OPEN"*/, v10);
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, v11);
    byte_421489C = 1;
  }
  v12 = sub_B0D974(BattleResultComponent___c__DisplayClass53_0_TypeInfo, *(_QWORD *)&resultType, method);
  BattleResultComponent___c__DisplayClass53_0___ctor((BattleResultComponent___c__DisplayClass53_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_37;
  *(_QWORD *)(v12 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 24), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  BattleResultComponent__ResetTimeScale(v20);
  *(_QWORD *)(v12 + 16) = 0LL;
  v21 = (_QWORD *)(v12 + 16);
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), 0LL, v22, v23, v24, v25, v26, v27);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_37;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, v28);
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
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, v28);
LABEL_11:
      v36 = (System_Int32_array **)NewDrop;
      *v21 = NewDrop;
      goto LABEL_19;
    case 4:
      eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v38 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v36 = 0LL;
      if ( !v38 )
        goto LABEL_18;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_37;
      v36 = (System_Int32_array **)BattleResultEventItemComponent__getNewDrop(
                                     (BattleResultEventItemComponent_o *)itemResult,
                                     0LL);
LABEL_18:
      *v21 = v36;
LABEL_19:
      sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), v36, v30, v31, v32, v33, v34, v35);
LABEL_20:
      if ( !*v21 )
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
          UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_B0D840(
            (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
            0LL,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_37;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v43 = &StringLiteral_9321/*"NEXT"*/;
          goto LABEL_36;
        }
LABEL_37:
        sub_B0D97C(itemResult);
      }
      Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v42 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v40, v41);
      System_Action___ctor(
        v42,
        (Il2CppObject *)v12,
        Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_37;
      SummonAssetManager__LoadSummonAssets(Instance, v42, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_37;
      v43 = &StringLiteral_9775/*"OPEN"*/;
LABEL_36:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v43, 0LL);
      return;
    default:
      goto LABEL_20;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_421488D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_12375/*"START_Begin"*/, method);
    byte_421488D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12375/*"START_Begin"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4214892 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_4214892 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_421489D & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_5512/*"END_PROC"*/, method);
    byte_421489D = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5512/*"END_PROC"*/, 0LL);
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

  if ( (byte_42148A0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, userCommandCodeId);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7);
    byte_42148A0 = 1;
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v12, v13, v14, v15, v16, v17);
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(
                                          Instance,
                                          (UnityEngine_Transform_o *)transform,
                                          1,
                                          0LL),
        *p_ServantRewardActionComp = (struct ServantRewardAction_o *)Prefab,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
          Prefab,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_28240452(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_16:
    sub_B0D97C(transform);
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
  UserServantEntity_o *Entity; // x0
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  UserServantEntity_o *v21; // x22
  UnityEngine_Object_o *gameObject; // x25
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  SummonAssetManager_o *v29; // x25
  System_Int32_array **Prefab; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  ServantRewardAction_o *v37; // x24
  __int64 v38; // x25
  __int64 v39; // x26
  int32_t v40; // w0
  __int128 v41; // q1
  int32_t v42; // w23
  int64_t v43; // x0
  __int64 v44; // x8
  int64_t v45; // x22
  int32_t v46; // w0
  __int128 v47; // q1
  int32_t v48; // w21
  int64_t v49; // x0
  __int64 v50; // x8
  int64_t v51; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v55; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_421489F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v16);
    byte_421489F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_2669DFC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v21 = Entity;
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v23, v24, v25, v26, v27, v28);
  }
  v29 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v29 )
    goto LABEL_35;
  Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(
                                    v29,
                                    (UnityEngine_Transform_o *)Instance,
                                    1,
                                    0LL);
  *p_ServantRewardActionComp = (struct ServantRewardAction_o *)Prefab;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
    Prefab,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( !v21 )
    goto LABEL_35;
  v37 = *p_ServantRewardActionComp;
  v39 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v38 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( isDoEffect )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v55.fields.currentCryptoKey = v39;
    *(_QWORD *)&v55.fields.fakeValue = v38;
    v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v55, 0LL);
    v41 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
    v42 = v40;
    *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v54.fields.fakeValue = v41;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v53 = v54;
    v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v53, 0LL);
    v44 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v56.fields.fakeValue = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
    v45 = v43;
    *(_QWORD *)&v56.fields.currentCryptoKey = v44;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v56, 0LL);
    if ( v37 )
    {
      ServantRewardAction__Setup(v37, v42, v45, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_33;
    }
LABEL_35:
    sub_B0D97C(Instance);
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v57.fields.currentCryptoKey = v39;
  *(_QWORD *)&v57.fields.fakeValue = v38;
  v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v57, 0LL);
  v47 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
  v48 = v46;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v47;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v52 = v54;
  v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v52, 0LL);
  v50 = *(_QWORD *)&v21->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v58.fields.fakeValue = *(_QWORD *)&v21->fields.limitCount.fields.fakeValue;
  v51 = v49;
  *(_QWORD *)&v58.fields.currentCryptoKey = v50;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v58, 0LL);
  if ( !v37 )
    goto LABEL_35;
  ServantRewardAction__Setup(v37, v48, v51, (int32_t)Instance, 1, 1, 1, 2, 0LL);
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
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_B0D97C(0LL);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_B0D97C(0LL);
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_421489E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, userSvtId);
    sub_B0D8A4(&Method_BattleResultComponent_endNewView__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_9775/*"OPEN"*/, v10);
    sub_B0D8A4(&StringLiteral_9321/*"NEXT"*/, v11);
    byte_421489E = 1;
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
      UnityEngine_Object__DestroyImmediate_34935488(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_B0D840(
        (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
        0LL,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v18 = &StringLiteral_9321/*"NEXT"*/;
      goto LABEL_18;
    }
LABEL_19:
    sub_B0D97C(Instance);
  }
  v12 = Gift__IsEventSvtGet(type, 0LL);
  v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v12, v12, v15, v16);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  v18 = &StringLiteral_9775/*"OPEN"*/;
LABEL_18:
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
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4211EBD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_B0D8A4(&UnityEngine_WaitForSeconds_TypeInfo, v4);
    byte_4211EBD = 1;
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
      sub_B0D97C(_4__this);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v6 = (UnityEngine_WaitForSeconds_o *)sub_B0D974(UnityEngine_WaitForSeconds_TypeInfo, method, v2);
    UnityEngine_WaitForSeconds___ctor(v6, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v6;
    sub_B0D840(&this->fields.__2__current, v6);
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

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  struct BattleResultComponent___c_StaticFields *static_fields; // x0

  if ( (byte_4211EBA & 1) == 0 )
  {
    sub_B0D8A4(&BattleResultComponent___c_TypeInfo, v1);
    byte_4211EBA = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BattleResultComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BattleResultComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultComponent___c_o *)v3;
  sub_B0D840(static_fields, v3);
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

  if ( (byte_4211EBB & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_4211EBB = 1;
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
  sub_B0D840(&static_fields->mQuestRewardInfos, 0LL);
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
  struct BattleDropItem_o *v11; // x8
  __int64 v12; // x1
  __int64 v13; // x2
  struct BattleDropItem_o *v14; // x8
  int64_t v15; // x21
  Il2CppObject *v16; // x19
  char v17; // w20
  System_Action_o *v18; // x22

  v2 = this;
  if ( (byte_4211EBC & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    this = (BattleResultComponent___c__DisplayClass53_0_o *)sub_B0D8A4(&Method_BattleResultComponent_endNewView__, v3);
    byte_4211EBC = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsCommandCode_26783600(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v7 = v2->fields.newDrop;
    if ( v7 )
    {
      userSvtId = v7->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v5, v6);
      System_Action___ctor(v10, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v10, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(this);
  }
  v11 = v2->fields.newDrop;
  if ( !v11 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsEventSvtGet_26783244(v11->fields.type, 0LL);
  v14 = v2->fields.newDrop;
  if ( !v14 )
    goto LABEL_12;
  v15 = v14->fields.userSvtId;
  v16 = (Il2CppObject *)v2->fields.__4__this;
  v17 = (char)this;
  v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v12, v13);
  System_Action___ctor(v18, v16, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v16 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v16, v15, v17 & 1, v17 & 1, v18, 0LL);
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
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
    }
    v6 = m_Items[v4];
    if ( !v6 )
      sub_B0D97C(this);
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