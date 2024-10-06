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

  if ( (byte_4A72FE8 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_3581/*"CLOSE"*/, method);
    sub_1B90010(&StringLiteral_9243/*"NEXT"*/, v3);
    byte_4A72FE8 = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
    sub_1B9026C(eventItemResult, method);
  }
  v6 = &StringLiteral_9243/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v6 = &StringLiteral_3581/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v6, 0LL);
}


void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A72FE5 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_5490/*"END_PROC"*/, method);
    byte_4A72FE5 = 1;
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
    sub_1B9026C(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5490/*"END_PROC"*/, 0LL);
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
  __int64 v9; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  v2 = this;
  if ( (byte_4A72FEF & 1) == 0 )
  {
    sub_1B90010(&AndroidBackKeyManager_TypeInfo, method);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v3);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v5);
    sub_1B90010(&StringLiteral_23135/*"sendFsmEvent"*/, v6);
    this = (BattleResultComponent_o *)sub_1B90010(&StringLiteral_5490/*"END_PROC"*/, v7);
    byte_4A72FEF = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1B9026C(Instance, v9);
  UnityEngine_GameObject__SendMessage_69520812(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23135/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5490/*"END_PROC"*/,
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
  if ( (byte_4A72FF2 & 1) == 0 )
  {
    this = (BattleResultComponent_o *)sub_1B90010(&StringLiteral_9243/*"NEXT"*/, isDecide);
    byte_4A72FF2 = 1;
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
      sub_1B9026C(0LL, v7);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9243/*"NEXT"*/, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A72FD9 & 1) == 0 )
  {
    sub_1B90010(
      &Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___,
      releasePerformanceObject);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A72FD9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v8 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A6A9C1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, v7);
    byte_4A6A9C1 = 1;
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
    UnityEngine_Object__Destroy_69539440(v13, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v14, v15);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)p_screenTouch, (int32_t)Component_object, v18, v19),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 11)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_36:
    sub_1B9026C(gameObject, v7);
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

  if ( (byte_4A72FF7 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, method);
    sub_1B90010(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&NetworkManager_TypeInfo, v5);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v6);
    sub_1B90010(&StringLiteral_12179/*"SKIP"*/, v7);
    sub_1B90010(&StringLiteral_9243/*"NEXT"*/, v8);
    byte_4A72FF7 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A6CB0F )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v9);
    byte_4A6CB0F = 1;
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
  v15 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (PlayMakerFSM_o *)NetworkManager__get_UserId(0LL);
  if ( !v15 )
LABEL_26:
    sub_1B9026C(UserId, v9);
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
      PlayMakerFSM__SendEvent(UserId, (System_String_o *)StringLiteral_9243/*"NEXT"*/, 0LL);
    }
  }
LABEL_24:
  UserId = this->fields.fsm;
  if ( !UserId )
    goto LABEL_26;
  PlayMakerFSM__SendEvent(UserId, (System_String_o *)StringLiteral_12179/*"SKIP"*/, 0LL);
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
    sub_1B9026C(obj_fronttouch, method);
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
  if ( (byte_4A72FF8 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, v3);
    sub_1B90010(&DataLostResetManager_TypeInfo, v4);
    this = (BattleResultComponent_o *)sub_1B90010(&TerminalPramsManager_TypeInfo, v5);
    byte_4A72FF8 = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_1B9026C(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A6CB0F )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, method);
    byte_4A6CB0F = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v8->static_fields->_WarId_k__BackingField;
  v10 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v10, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, 0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v10, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A72FE9 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B90010(&StringLiteral_12179/*"SKIP"*/, v3);
    byte_4A72FE9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B9026C(Instance, v5);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12179/*"SKIP"*/, 0LL);
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

  if ( (byte_4A72FF6 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B90010(&StringLiteral_12179/*"SKIP"*/, v4);
    byte_4A72FF6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B9026C(Instance, v6);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12179/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A72FE7 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    sub_1B90010(&StringLiteral_12179/*"SKIP"*/, v3);
    byte_4A72FE7 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B9026C(Instance, v5);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12179/*"SKIP"*/, 0LL);
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
    sub_1B9026C(obj_fronttouch, method);
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
  bool IsQuestClear_37648724; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v21; // w22
  Il2CppObject *v22; // x21
  TerminalPramsManager_c *v23; // x0
  const MethodInfo *v24; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A72FF3 & 1) == 0 )
  {
    sub_1B90010(&CondType_TypeInfo, *(_QWORD *)&boostId);
    sub_1B90010(&Method_DataManager_GetMasterData_QuestMaster___, v4);
    sub_1B90010(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v5);
    sub_1B90010(&MapControl_QuestInfo_TypeInfo, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_1B90010(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v9);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v10);
    byte_4A72FF3 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A6CB0C )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v12);
    byte_4A6CB0C = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v13->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_312C5A8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v16 = (MapControl_QuestInfo_o *)sub_1B9025C(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v16, 0LL);
  questId = v16->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37648724 = CondType__IsQuestClear_37648724(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_4A6CB17 )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v12);
    byte_4A6CB17 = 1;
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
                            !IsQuestClear_37648724,
                            &fixedVal,
                            0LL);
  v16->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0LL);
  v16->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v21 = fixedVal;
  else
    v21 = ActConsume;
  v22 = SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A6CCEF )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v12);
    byte_4A6CCEF = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1B9026C(Instance, v12);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v24);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleResultComponent_resultData_o *battleResult; // x0
  const MethodInfo *v6; // x0

  if ( (byte_4A72FE6 & 1) == 0 )
  {
    sub_1B90010(&RandomLimitCountManager_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B90010(&StringLiteral_12988/*"StartQuestClearReward"*/, v4);
    byte_4A72FE6 = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_12;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12988/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleResult = (BattleResultComponent_resultData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResult
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)battleResult, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleResult, 0, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.friendResult) == 0LL) )
  {
LABEL_12:
    sub_1B9026C(battleResult, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)battleResult, 0LL);
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
  NotificationDialog_ClickDelegate_o *v10; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_4A72FDF & 1) == 0 )
  {
    sub_1B90010(&Method_BattleResultComponent_endCloseEndEventMessage__, method);
    sub_1B90010(&NotificationDialog_ClickDelegate_TypeInfo, v3);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A72FDF = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v9 = (CommonUI_o *)Instance;
    v10 = (NotificationDialog_ClickDelegate_o *)sub_1B9025C(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v9 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_30527836(
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
    sub_1B9026C(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, 0LL);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  BattleRetryConfirmComponent_o *v7; // x20
  BattleWindowComponent_EndCall_o *v8; // x21
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4A72FF0 & 1) == 0 )
  {
    sub_1B90010(&Method_BattleResultComponent__OpenRetryQuest_b__60_0__, method);
    sub_1B90010(&BattleWindowComponent_EndCall_TypeInfo, v3);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___, v4);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A72FF0 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_15;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v7 = this->fields.battleRetryConfirmComponent;
    v8 = (BattleWindowComponent_EndCall_o *)sub_1B9025C(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultComponent__OpenRetryQuest_b__60_0__,
      0LL);
    if ( !v7 )
      goto LABEL_15;
    BattleRetryConfirmComponent__Open(v7, v8, 0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
LABEL_15:
    sub_1B9026C(battleRetryConfirmComponent, method);
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
  BattleEventTutorial_o *v6; // x20
  System_Action_o *v7; // x21
  BattleEventTutorial_o *v8; // x20
  System_Action_o *v9; // x21
  BattleEventTutorial_o *v10; // x20
  System_Action_o *v11; // x21

  if ( (byte_4A72FDE & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_BattleResultComponent_OpenTutorial__, v3);
    sub_1B90010(&StringLiteral_5490/*"END_PROC"*/, v4);
    byte_4A72FDE = 1;
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
    v7 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v6 )
    {
      BattleEventTutorial__callResult(v6, v7, 0LL);
      return;
    }
LABEL_23:
    sub_1B9026C(eventTutorial, method);
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
      v9 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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
    v11 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5490/*"END_PROC"*/, 0LL);
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
  TerminalPramsManager_c *v10; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v14; // x23
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *v17; // x20

  if ( (byte_4A72FF4 & 1) == 0 )
  {
    sub_1B90010(&BattleSetupInfo_TypeInfo, *(_QWORD *)&boostId);
    sub_1B90010(&RandomLimitCountManager_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1B90010(&SoundManager_TypeInfo, v6);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v7);
    byte_4A72FF4 = 1;
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
  if ( !byte_4A6CB0F )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v9);
    byte_4A6CB0F = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v10->static_fields->_WarId_k__BackingField;
  if ( !byte_4A6CB0C )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v9);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A6CB0C = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v10->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A6CB17 )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v9);
    v10 = TerminalPramsManager_TypeInfo;
    byte_4A6CB17 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v10->static_fields->_PhaseCnt_k__BackingField;
  v14 = (BattleSetupInfo_o *)sub_1B9025C(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v14, 0LL);
  if ( !v14 )
    goto LABEL_27;
  Instance = (Il2CppObject *)BattleSetupInfo__ConvertBattleSetupInfo(
                               v14,
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1B9026C(Instance, v16);
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
    sub_1B9026C(this, method);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_4A72FDC & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A72FDC = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0LL), (v5 = this->fields.screenTouch) == 0LL) )
      sub_1B9026C(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A72FF5 & 1) == 0 )
  {
    sub_1B90010(&BattlePerformance_TypeInfo, v1);
    byte_4A72FF5 = 1;
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
  int32_t v19; // w2
  int32_t v20; // w3
  System_Object_array *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  int32_t v27; // w2
  int32_t v28; // w3
  Il2CppObject *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  int32_t v51; // w2
  int32_t v52; // w3
  Il2CppObject *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  int32_t v59; // w2
  int32_t v60; // w3
  Il2CppObject *v61; // x21
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  int32_t v67; // w2
  int32_t v68; // w3
  Il2CppObject *v69; // x21
  System_Collections_Hashtable_o *v70; // x0
  __int64 v71; // x0
  int v72; // [xsp+Ch] [xbp-44h] BYREF
  int v73; // [xsp+10h] [xbp-40h] BYREF
  int v74; // [xsp+14h] [xbp-3Ch] BYREF
  int v75; // [xsp+18h] [xbp-38h] BYREF
  int v76; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A72FE2 & 1) == 0 )
  {
    sub_1B90010(&iTween_EaseType_TypeInfo, method);
    sub_1B90010(&object___TypeInfo, v3);
    sub_1B90010(&float_TypeInfo, v4);
    sub_1B90010(&StringLiteral_19683/*"from"*/, v5);
    sub_1B90010(&StringLiteral_12570/*"ScrollBarMotionCompleteValue"*/, v6);
    sub_1B90010(&StringLiteral_23966/*"time"*/, v7);
    sub_1B90010(&StringLiteral_22314/*"onupdate"*/, v8);
    sub_1B90010(&StringLiteral_18576/*"delay"*/, v9);
    sub_1B90010(&StringLiteral_12571/*"ScrollBarMotionUpdateValue"*/, v10);
    sub_1B90010(&StringLiteral_24008/*"to"*/, v11);
    sub_1B90010(&StringLiteral_18779/*"easeType"*/, v12);
    sub_1B90010(&StringLiteral_22306/*"oncomplete"*/, v13);
    sub_1B90010(&iTween_TypeInfo, v14);
    byte_4A72FE2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60435764(gameObject, 0LL);
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v17 = sub_1B900B8(object___TypeInfo, 14LL);
  if ( !v17 )
    sub_1B9026C(0LL, v18);
  v21 = (System_Object_array *)v17;
  v22 = StringLiteral_19683/*"from"*/;
  if ( StringLiteral_19683/*"from"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_19683/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_19683/*"from"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( !v21->max_length )
    goto LABEL_67;
  v21->m_Items[0] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v21->m_Items, v23, v19, v20);
  v76 = 0;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v76, v24, v25, v26);
  v29 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B9014C(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_67;
  v21->m_Items[1] = v29;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[1], (int32_t)v29, v27, v28);
  v22 = StringLiteral_24008/*"to"*/;
  if ( StringLiteral_24008/*"to"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_24008/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_24008/*"to"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_67;
  v21->m_Items[2] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[2], v23, v30, v31);
  v75 = 1065353216;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v75, v32, v33, v34);
  v37 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B9014C(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
  }
  if ( v21->max_length <= 3 )
    goto LABEL_67;
  v21->m_Items[3] = v37;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[3], (int32_t)v37, v35, v36);
  v22 = StringLiteral_22314/*"onupdate"*/;
  if ( StringLiteral_22314/*"onupdate"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_22314/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_22314/*"onupdate"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 4 )
    goto LABEL_67;
  v21->m_Items[4] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[4], v23, v38, v39);
  v22 = StringLiteral_12571/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12571/*"ScrollBarMotionUpdateValue"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_12571/*"ScrollBarMotionUpdateValue"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_12571/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 5 )
    goto LABEL_67;
  v21->m_Items[5] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[5], v23, v40, v41);
  v22 = StringLiteral_22306/*"oncomplete"*/;
  if ( StringLiteral_22306/*"oncomplete"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_22306/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_22306/*"oncomplete"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 6 )
    goto LABEL_67;
  v21->m_Items[6] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[6], v23, v42, v43);
  v22 = StringLiteral_12570/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12570/*"ScrollBarMotionCompleteValue"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_12570/*"ScrollBarMotionCompleteValue"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_12570/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 7 )
    goto LABEL_67;
  v21->m_Items[7] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[7], v23, v44, v45);
  v22 = StringLiteral_18779/*"easeType"*/;
  if ( StringLiteral_18779/*"easeType"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_18779/*"easeType"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_18779/*"easeType"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 8 )
    goto LABEL_67;
  v21->m_Items[8] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[8], v23, v46, v47);
  v74 = 17;
  v22 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v74, v48, v49, v50);
  v53 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B9014C(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
  }
  if ( v21->max_length <= 9 )
    goto LABEL_67;
  v21->m_Items[9] = v53;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[9], (int32_t)v53, v51, v52);
  v22 = StringLiteral_23966/*"time"*/;
  if ( StringLiteral_23966/*"time"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_23966/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_23966/*"time"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 0xA )
    goto LABEL_67;
  v21->m_Items[10] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[10], v23, v54, v55);
  v73 = 1065353216;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v73, v56, v57, v58);
  v61 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B9014C(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
  }
  if ( v21->max_length <= 0xB )
    goto LABEL_67;
  v21->m_Items[11] = v61;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[11], (int32_t)v61, v59, v60);
  v22 = StringLiteral_18576/*"delay"*/;
  if ( StringLiteral_18576/*"delay"*/ )
  {
    v22 = sub_1B9014C(StringLiteral_18576/*"delay"*/, v21->obj.klass->_1.element_class);
    if ( !v22 )
      goto LABEL_68;
    v23 = StringLiteral_18576/*"delay"*/;
  }
  else
  {
    v23 = 0LL;
  }
  if ( v21->max_length <= 0xC )
    goto LABEL_67;
  v21->m_Items[12] = (Il2CppObject *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[12], v23, v62, v63);
  v72 = 0;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v72, v64, v65, v66);
  v69 = (Il2CppObject *)v22;
  if ( v22 )
  {
    v22 = sub_1B9014C(v22, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
LABEL_68:
      v71 = sub_1B90290(v22);
      sub_1B90138(v71, 0LL);
    }
  }
  if ( v21->max_length <= 0xD )
LABEL_67:
    sub_1B90274(v22, v23);
  v21->m_Items[13] = v69;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v21->m_Items[13], (int32_t)v69, v67, v68);
  v70 = iTween__Hash(v21, 0LL);
  iTween__ValueTo(v16, v70, 0LL);
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
  if ( (byte_4A72FE4 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__, v3);
    this = (BattleResultComponent_o *)sub_1B90010(&Method_System_Collections_Generic_List_GameObject__get_Count__, v4);
    byte_4A72FE4 = 1;
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
  v8 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)v2,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_1B9026C(this, method);
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

  if ( (byte_4A72FE3 & 1) == 0 )
  {
    sub_1B90010(&iTween_TypeInfo, method);
    byte_4A72FE3 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1B9026C(0LL, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60435764(gameObject, 0LL);
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
  TerminalPramsManager_c *v37; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  __int64 v39; // x1
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v41; // x0
  int32_t v42; // w19
  BalanceConfig_c *v43; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v45; // x0
  BattleResultComponent_o *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FriendIconPrefab; // x0
  BattleResultComponent___c_c *v48; // x8
  BattleResultComponent_o *v49; // x26
  System_Converter_TInput__TOutput__o *_9__34_0; // x19
  Il2CppObject *v51; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_array *v55; // x0
  System_String_o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *resultSprite; // x0
  BattleResultComponent___c_c *v58; // x8
  BattleResultComponent_o *v59; // x26
  System_Converter_TInput__TOutput__o *_9__34_1; // x19
  Il2CppObject *v61; // x23
  struct BattleResultComponent___c_StaticFields *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_array *v65; // x0
  System_String_o *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_String_o *m_CancellationTokenSource; // x1
  int32_t v70; // w2
  int32_t v71; // w3
  struct BattleResultComponent_resultData_o *v72; // x8
  BattleData_o *v73; // x28
  struct System_String_o *eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v75; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v77; // x26
  BattleResultComponent_resultData_o *battleResult; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x8
  Il2CppObject *Master_object; // x19
  int32_t v81; // w23
  int32_t QuestId; // w24
  const MethodInfo *v83; // x7
  bool v84; // w27
  BattleResultComponent_resultData_o *v85; // x19
  struct BattleInfoData_o *battle_info; // x8
  BattleResultBondsComponent_o *v87; // x23
  UserServantCollectionEntity_array *oldUserSvtCollection; // x28
  DeckData_o *myDeck; // x24
  int32_t followerType; // w29
  BattleUserServantData_array *userSvt; // x25
  UserServantCollectionEntity_array *v92; // x2
  struct BattleResultEventItemComponent_o *eventItemResult; // x9
  struct System_Threading_CancellationTokenSource_o *v94; // x8
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v96; // x11
  struct BattleResultEventItemComponent_o *v97; // x9
  struct System_Threading_CancellationTokenSource_o *v98; // x8
  QuestEntity_o *quest_ent; // x8
  UserGameEntity_o *parentComp; // x29
  BattleResultItemComponent_o *v101; // x25
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  struct BattleResultExpComponent_o *expResult; // x20
  int32_t eventItemResult_high; // w19
  struct BattleResultEventDamageItemComponent_o *dropupinfos; // x23
  struct System_String_o *v107; // x24
  int32_t firstClearRewardQp; // w26
  int32_t v109; // w2
  int32_t v110; // w3
  BattleResultComponent_o *v111; // x8
  struct BattleResultItemComponent_o *v112; // x9
  struct UILabel_o *getQpLabel; // x9
  struct ScreenTouchInformationComponent_o *mText; // x1
  int32_t v115; // w2
  int32_t v116; // w3
  struct BattleResultItemComponent_o *v117; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v119; // x9
  struct System_String_o *v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  struct BattleResultEventFortificationItemComponent_o *eventFortificationItemResult; // x8
  Il2CppObject *v125; // x0
  struct BattleResultItemComponent_o *v126; // x8
  Il2CppObject *v127; // x23
  UILabel_o *v128; // x19
  System_String_o *v129; // x0
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  struct BattleResultItemComponent_o *v133; // x8
  struct BattleResultEventFortificationItemComponent_o *v134; // x9
  UILabel_o *v135; // x19
  Il2CppObject *v136; // x0
  BattleResultFriendComponent_o *v137; // x19
  int32_t obj_basebg; // w23
  int32_t obj_basebg_high; // w24
  int64_t v140; // x25
  int32_t obj_fronttouch; // w26
  int32_t obj_fronttouch_high; // w27
  struct BattleResultComponent_resultData_o *v143; // x8
  struct BattleResultComponent_resultData_o *v144; // x8
  UnityEngine_Object_o *v145; // x19
  struct BattleResultComponent_resultData_o *v146; // x8
  struct BattleResultComponent_resultData_o *v147; // x8
  struct BattleInfoData_o *v148; // x8
  struct DeckData_o *v149; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v152; // x20
  char v153; // w22
  BattleResultComponent_o *v154; // x19
  int32_t v155; // w23
  int32_t EventProgressValueSaveData_42202232; // w0
  int v157; // w8
  TerminalPramsManager_c *v158; // x0
  _QWORD *monitor; // x8
  bool isWin; // w19
  const MethodInfo *boostRate; // [xsp+10h] [xbp-F0h]
  struct UnityEngine_GameObject_o *v162; // [xsp+50h] [xbp-B0h]
  struct BattleResultFriendComponent_o *friendResult; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  System_Int32_array *v165; // [xsp+68h] [xbp-98h]
  AssetData_o *resultAssetb; // [xsp+70h] [xbp-90h]
  BattleResultComponent_resultData_array *result; // [xsp+78h] [xbp-88h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+80h] [xbp-80h]
  BattleData_o *battleData; // [xsp+88h] [xbp-78h]
  int myFsm_high; // [xsp+90h] [xbp-70h] BYREF
  int v172; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v174; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = this;
  if ( (byte_4A72FDD & 1) == 0 )
  {
    sub_1B90010(&BalanceConfig_TypeInfo, resultList);
    sub_1B90010(&System_Converter_int__string__TypeInfo, v12);
    sub_1B90010(&Method_DataManager_GetMaster_EventBuddyPointMaster___, v13);
    sub_1B90010(&Method_DataManager_GetMaster_EventProgressValueMaster___, v14);
    sub_1B90010(&DataManager_TypeInfo, v15);
    sub_1B90010(&Method_System_Linq_Enumerable_ToList_int___, v16);
    sub_1B90010(&EventInfoUIProgressControl_TypeInfo, v17);
    sub_1B90010(&int_TypeInfo, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_string__ToArray__, v20);
    sub_1B90010(&LocalizationManager_TypeInfo, v21);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v22);
    sub_1B90010(&QuestKnockdownResult_TypeInfo, v23);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v24);
    sub_1B90010(&Method_BattleResultComponent___c__Set_b__34_0__, v25);
    sub_1B90010(&Method_BattleResultComponent___c__Set_b__34_1__, v26);
    sub_1B90010(&BattleResultComponent___c_TypeInfo, v27);
    sub_1B90010(&StringLiteral_19654/*"freeShopIds"*/, v28);
    sub_1B90010(&StringLiteral_11110/*"RESULT_QP_PLUS"*/, v29);
    sub_1B90010(&StringLiteral_24973/*"{0:#,0}"*/, v30);
    sub_1B90010(&StringLiteral_22953/*"returnRarePriShopIds"*/, v31);
    this = (BattleResultComponent_o *)sub_1B90010(&StringLiteral_868/*","*/, v32);
    byte_4A72FDD = 1;
  }
  entity = 0LL;
  if ( !resultList )
    goto LABEL_204;
  if ( !resultList->max_length )
    goto LABEL_205;
  v33 = resultList->m_Items[0];
  result = resultList;
  v11->fields.battleResult = v33;
  p_battleResult = (BattleResultComponent_o **)&v11->fields.battleResult;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&v11->fields.battleResult,
    (int32_t)v33,
    (int32_t)tutorial,
    (int32_t)resultAsset);
  v11->fields.eventTutorial = tutorial;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v11->fields.eventTutorial, (int32_t)tutorial, v35, v36);
  this = (BattleResultComponent_o *)v11->fields.battleResult;
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
      if ( !byte_4A6D5E1 )
      {
        sub_1B90010(&TerminalPramsManager_TypeInfo, resultList);
        byte_4A6D5E1 = 1;
      }
      v37 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v37 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v37->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0LL);
      if ( !byte_4A6D5D1 )
      {
        sub_1B90010(&TerminalPramsManager_TypeInfo, v39);
        byte_4A6D5D1 = 1;
      }
      v41 = TerminalPramsManager_TypeInfo;
      v42 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v41 = TerminalPramsManager_TypeInfo;
      }
      v41->static_fields->_BeforeEventActivityPoint_k__BackingField = v42;
      v43 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v43 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v43->static_fields->UserEventActivityPointMax;
      if ( !byte_4A6D5E1 )
      {
        sub_1B90010(&TerminalPramsManager_TypeInfo, v39);
        byte_4A6D5E1 = 1;
      }
      v45 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v45 = TerminalPramsManager_TypeInfo;
      }
      if ( v45->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v45->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v45);
        if ( !byte_4A6D5D1 )
        {
          sub_1B90010(&TerminalPramsManager_TypeInfo, v39);
          byte_4A6D5D1 = 1;
        }
        v45 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v45 = TerminalPramsManager_TypeInfo;
        }
        v45->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v45->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v45);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v46 = *p_battleResult;
  v165 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v11->fields.eventTutorial;
  battleData = bData;
  if ( !*p_battleResult )
    goto LABEL_204;
  FriendIconPrefab = (System_Collections_Generic_IEnumerable_TSource__o *)v46[1].fields.FriendIconPrefab;
  if ( FriendIconPrefab )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        FriendIconPrefab,
                                        (const MethodInfo_2ECA640 *)Method_System_Linq_Enumerable_ToList_int___);
    v48 = BattleResultComponent___c_TypeInfo;
    v49 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v48 = BattleResultComponent___c_TypeInfo;
    }
    _9__34_0 = (System_Converter_TInput__TOutput__o *)v48->static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        v48 = BattleResultComponent___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v48->static_fields->__9;
      _9__34_0 = (System_Converter_TInput__TOutput__o *)sub_1B9025C(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__34_0, v51, Method_BattleResultComponent___c__Set_b__34_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = (struct System_Converter_int__string__o *)_9__34_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v53, v54);
    }
    if ( !v49 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v49,
                                        (System_Converter_T__TOutput__o *)_9__34_0,
                                        (const MethodInfo_2DC0DD8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v55 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_string__ToArray__);
    v56 = System_String__Join((System_String_o *)StringLiteral_868/*","*/, v55, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19654/*"freeShopIds"*/, v56, 0LL);
    v46 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  resultSprite = (System_Collections_Generic_IEnumerable_TSource__o *)v46[1].fields.resultSprite;
  if ( resultSprite )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        resultSprite,
                                        (const MethodInfo_2ECA640 *)Method_System_Linq_Enumerable_ToList_int___);
    v58 = BattleResultComponent___c_TypeInfo;
    v59 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v58 = BattleResultComponent___c_TypeInfo;
    }
    _9__34_1 = (System_Converter_TInput__TOutput__o *)v58->static_fields->__9__34_1;
    if ( !_9__34_1 )
    {
      if ( !v58->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v58);
        v58 = BattleResultComponent___c_TypeInfo;
      }
      v61 = (Il2CppObject *)v58->static_fields->__9;
      _9__34_1 = (System_Converter_TInput__TOutput__o *)sub_1B9025C(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__34_1, v61, Method_BattleResultComponent___c__Set_b__34_1__, 0LL);
      v62 = BattleResultComponent___c_TypeInfo->static_fields;
      v62->__9__34_1 = (struct System_Converter_int__string__o *)_9__34_1;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v62->__9__34_1, (int32_t)_9__34_1, v63, v64);
    }
    if ( !v59 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v59,
                                        (System_Converter_T__TOutput__o *)_9__34_1,
                                        (const MethodInfo_2DC0DD8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v65 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_string__ToArray__);
    v66 = System_String__Join((System_String_o *)StringLiteral_868/*","*/, v65, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22953/*"returnRarePriShopIds"*/, v66, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_204;
  m_CancellationTokenSource = (struct System_String_o *)(*p_battleResult)->fields.m_CancellationTokenSource;
  v11->fields.eventEndTitle = m_CancellationTokenSource;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&v11->fields.eventEndTitle,
    (int32_t)m_CancellationTokenSource,
    v67,
    v68);
  v72 = v11->fields.battleResult;
  v73 = bData;
  if ( !v72 )
    goto LABEL_204;
  eventEndMessage = v72->fields.eventEndMessage;
  v11->fields.eventEndMessage = eventEndMessage;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v11->fields.eventEndMessage, (int32_t)eventEndMessage, v70, v71);
  v75 = v11->fields.battleResult;
  if ( !v75 )
    goto LABEL_204;
  isTrialQuestNewRecord = v75->fields.isTrialQuestNewRecord;
  v77 = (QuestKnockdownResult_o *)sub_1B9025C(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v77, isTrialQuestNewRecord, bData, 0LL);
  if ( !bData )
    goto LABEL_204;
  this = (BattleResultComponent_o *)bData->fields.battle_info;
  if ( !this )
    goto LABEL_204;
  this = (BattleResultComponent_o *)BattleInfoData__IsWaveMyDecks((BattleInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    battleResult = v11->fields.battleResult;
    if ( !battleResult )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v11->fields.bondsResult;
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v81 = BattleData__get_eventId(bData, 0LL);
      QuestId = BattleData__getQuestId(bData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(bData, 0LL);
      if ( !Master_object )
        goto LABEL_204;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v81,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_204;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v84 = (unsigned __int8)this & 1;
      }
      else
      {
        v84 = 0;
      }
      v85 = v11->fields.battleResult;
      if ( !v85 )
        goto LABEL_204;
      battle_info = bData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_204;
      v87 = v11->fields.bondsResult;
      if ( !v87 )
        goto LABEL_204;
      oldUserSvtCollection = v85->fields.oldUserSvtCollection;
      myDeck = v85->fields.myDeck;
      followerType = v85->fields.followerType;
      userSvt = battle_info->fields.userSvt;
      BattleResultBondsComponent__InitResultData(
        v11->fields.bondsResult,
        oldUserSvtCollection,
        v85->fields.friendshipRewardInfos,
        resultAsset,
        v85->fields.friendshipExpBase,
        v85->fields.getJoinSvts,
        0,
        v83);
      v92 = oldUserSvtCollection;
      v73 = battleData;
      BattleResultBondsComponent__SetResultDataLocal(
        v87,
        myDeck,
        v92,
        followerType,
        userSvt,
        v85,
        v84,
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
    && (v94 = eventItemResult->fields.m_CancellationTokenSource) != 0LL
    && (itemResult = this->fields.itemResult) != 0LL
    && (v96 = itemResult->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v94 || !(_DWORD)v96 )
      goto LABEL_205;
    if ( !v11->fields.expResult )
      goto LABEL_204;
    BattleResultExpComponent__setResultData(
      v11->fields.expResult,
      (UserGameEntity_o *)eventItemResult->fields.parentComp,
      (UserEquipEntity_o *)itemResult->fields.parentComp,
      (MasterLvRewardInfo_array *)this->fields.eventEndTitle,
      resultAsset,
      v73->fields.maxTurnDamageInBattle,
      v73->fields.maxTurnDamageRecord,
      v77,
      0LL);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  v97 = this->fields.eventItemResult;
  if ( v97 && (v98 = v97->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v98 )
      goto LABEL_205;
    quest_ent = v73->fields.quest_ent;
    if ( !quest_ent )
      goto LABEL_204;
    parentComp = (UserGameEntity_o *)v97->fields.parentComp;
    v101 = v11->fields.itemResult;
    resultAssetb = (AssetData_o *)this->fields.eventEndMessage;
    eventId = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
    fsm = (int32_t)this->fields.fsm;
    fsm_high = HIDWORD(this->fields.fsm);
    expResult = this[1].fields.expResult;
    eventItemResult_high = HIDWORD(this[1].fields.eventItemResult);
    dropupinfos = this[1].fields.eventDamageItemResult;
    v107 = this[1].fields.eventEndMessage;
    firstClearRewardQp = (int32_t)this->fields.obj_basebg;
    v162 = this->fields.FriendIconPrefab;
    friendResult = this->fields.friendResult;
    this = (BattleResultComponent_o *)QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
    if ( !*p_battleResult || !v101 )
      goto LABEL_204;
    BattleResultItemComponent__setResultData(
      v101,
      (BattleDropItem_array *)resultAssetb,
      fsm,
      fsm_high,
      parentComp,
      eventId,
      (UserEventEntity_array *)friendResult,
      (UserEventPointEntity_array *)v162,
      (int64_t)expResult,
      v165,
      eventItemResult_high,
      (DropUpInfo_array *)dropupinfos,
      (EventConquestInfo_array *)v107,
      firstClearRewardQp,
      (unsigned __int8)this & 1,
      (BattleResultAddRewardBonus_o *)(*p_battleResult)[1].fields.eventFortificationItemResult,
      0LL);
    v73 = battleData;
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
  }
  v111 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( v111[1].fields.eventFortificationItemResult )
  {
    v112 = v11->fields.itemResult;
    if ( !v112 )
      goto LABEL_204;
    getQpLabel = v112->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_204;
    mText = (struct ScreenTouchInformationComponent_o *)getQpLabel->fields.mText;
    v111[1].fields.screenTouch = mText;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v111[1].fields.screenTouch, (int32_t)mText, v109, v110);
    v117 = v11->fields.itemResult;
    if ( !v117 )
      goto LABEL_204;
    nowQpLabel = v117->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_204;
    v119 = v11->fields.battleResult;
    if ( !v119 )
      goto LABEL_204;
    v120 = nowQpLabel->fields.mText;
    v119->fields.ultimateNowQpText = v120;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v119->fields.ultimateNowQpText, (int32_t)v120, v115, v116);
    if ( !*p_battleResult )
      goto LABEL_204;
    eventFortificationItemResult = (*p_battleResult)[1].fields.eventFortificationItemResult;
    if ( !eventFortificationItemResult )
      goto LABEL_204;
    v172 = (__int64)eventFortificationItemResult->fields.myFsm & ~(SLODWORD(eventFortificationItemResult->fields.myFsm) >> 31);
    v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v172, v121, v122, v123);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_24973/*"{0:#,0}"*/, v125, 0LL);
    v126 = v11->fields.itemResult;
    if ( !v126 )
      goto LABEL_204;
    v127 = (Il2CppObject *)this;
    v128 = v126->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v129 = LocalizationManager__Get((System_String_o *)StringLiteral_11110/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v129, v127, 0LL);
    if ( !v128 )
      goto LABEL_204;
    UILabel__set_text(v128, (System_String_o *)this, 0LL);
    v133 = v11->fields.itemResult;
    if ( !v133 )
      goto LABEL_204;
    if ( !*p_battleResult )
      goto LABEL_204;
    v134 = (*p_battleResult)[1].fields.eventFortificationItemResult;
    if ( !v134 )
      goto LABEL_204;
    v135 = v133->fields.nowQpLabel;
    myFsm_high = HIDWORD(v134->fields.myFsm);
    v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &myFsm_high, v130, v131, v132);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_24973/*"{0:#,0}"*/, v136, 0LL);
    if ( !v135 )
      goto LABEL_204;
    UILabel__set_text(v135, (System_String_o *)this, 0LL);
    this = (BattleResultComponent_o *)v11->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_204;
    v174.fields.r = 0.29804;
    v174.fields.a = 1.0;
    v174.fields.g = 0.29804;
    v174.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v174, 0LL);
    v111 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  this = (BattleResultComponent_o *)v73->fields.quest_ent;
  if ( !this )
    goto LABEL_204;
  v137 = v11->fields.friendResult;
  obj_basebg = (int32_t)v111[1].fields.obj_basebg;
  obj_basebg_high = HIDWORD(v111[1].fields.obj_basebg);
  v140 = (int64_t)v111[1].fields.fsm;
  obj_fronttouch = (int32_t)v111[1].fields.obj_fronttouch;
  obj_fronttouch_high = HIDWORD(v111[1].fields.obj_fronttouch);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v137 )
    goto LABEL_204;
  BattleResultFriendComponent__setResultData(
    v137,
    obj_basebg,
    obj_basebg_high,
    v140,
    obj_fronttouch,
    obj_fronttouch_high,
    (unsigned __int8)this & 1,
    0LL);
  v143 = v11->fields.battleResult;
  if ( !v143 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v11->fields.eventItemResult;
  if ( !this )
    goto LABEL_204;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v143->fields.resultEventRewardInfos,
                                      (unsigned int)v143->fields.eventId,
                                      v143->fields.resultBoostItemRewardInfos,
                                      v143->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v144 = v11->fields.battleResult;
  if ( !v144 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v11->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_204;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v144->fields.resultDamageRewardInfos,
    (unsigned int)v144->fields.eventId,
    v144->fields.resultBoostItemRewardInfos,
    v144->fields.rewardInfos,
    this->klass[1]._1.name);
  v145 = (UnityEngine_Object_o *)v11->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(v145, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v146 = v11->fields.battleResult;
    if ( !v146 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v11->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v146->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v146->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v147 = v11->fields.battleResult;
    if ( !v147 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v11->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v147->fields.fortificationInfos,
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
  v148 = v73->fields.battle_info;
  if ( !v148 )
    goto LABEL_204;
  v149 = v148->fields.myDeck;
  if ( v149 )
  {
    svts = v149->fields.svts;
    if ( svts )
    {
      max_length = svts->max_length;
      if ( max_length >= 1 )
      {
        v152 = 0LL;
        while ( (unsigned int)v152 < max_length )
        {
          this = (BattleResultComponent_o *)svts->m_Items[v152];
          if ( !this )
            goto LABEL_204;
          this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin(
                                              (BattleDeckServantData_o *)this,
                                              0LL);
          v153 = (char)this;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            max_length = svts->max_length;
            if ( (int)++v152 < max_length )
              continue;
          }
          goto LABEL_156;
        }
LABEL_205:
        sub_1B90274(this, resultList);
      }
    }
  }
  v153 = 0;
LABEL_156:
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1),
                                        0LL);
    v154 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_204;
      v155 = *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      EventProgressValueSaveData_42202232 = EventInfoUIProgressControl__GetEventProgressValueSaveData_42202232(
                                              v155,
                                              0,
                                              0LL);
      v157 = (int)v154->fields.obj_basebg;
      LODWORD(v154) = 0;
      if ( EventProgressValueSaveData_42202232 != v157 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A6CB15 )
        {
          sub_1B90010(&TerminalPramsManager_TypeInfo, resultList);
          byte_4A6CB15 = 1;
        }
        v158 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v158 = TerminalPramsManager_TypeInfo;
        }
        v158->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v154) = 1;
      }
    }
  }
  else
  {
    LODWORD(v154) = 0;
  }
  if ( v153 & 1 | !v73->fields.isRetryable )
    goto LABEL_178;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( (((unsigned int)v154 | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
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
    sub_1B9026C(this, resultList);
  }
  monitor = this[2].monitor;
  if ( monitor && monitor[3] )
    BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 4096, 0LL);
  if ( (BattleData__isBattleResultLoseQuestClear(v73, 0LL) || BattleData__isBattleRetreatQuestClear(v73, 0LL))
    && v73->fields.isItemResultSkip )
  {
    if ( !BattleData__IsWarBoard(v73, 0LL) )
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
  __int64 v3; // x1
  UnityEngine_GameObject_o *touchGuard; // x0
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *started; // x1

  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard )
    sub_1B9026C(0LL, v3);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_69524712((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A72FE1 & 1) == 0 )
  {
    sub_1B90010(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, method);
    byte_4A72FE1 = 1;
  }
  v3 = sub_1B9025C(BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__42___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B9026C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
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
  TerminalPramsManager_c *v9; // x8
  CommonUI_o *v10; // x19
  BattleResultComponent___c_c *v11; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x20
  System_Action_o *_9__61_0; // x21
  Il2CppObject *v14; // x22
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A72FF1 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v2);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v3);
    sub_1B90010(&Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, v4);
    sub_1B90010(&BattleResultComponent___c_TypeInfo, v5);
    byte_4A72FF1 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A6CB0C )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, method);
    byte_4A6CB0C = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v6->static_fields->_QuestId_k__BackingField, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v9 = TerminalPramsManager_TypeInfo;
    v10 = (CommonUI_o *)Instance;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v11 = BattleResultComponent___c_TypeInfo;
    mQuestRewardInfos = v9->static_fields->mQuestRewardInfos;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v11 = BattleResultComponent___c_TypeInfo;
    }
    _9__61_0 = v11->static_fields->__9__61_0;
    if ( !_9__61_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleResultComponent___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v11->static_fields->__9;
      _9__61_0 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(_9__61_0, v14, Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__61_0 = _9__61_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v16, v17);
    }
    if ( !v10 )
      sub_1B9026C(v11, v8);
    CommonUI__OpenQuestClearReward(v10, mQuestRewardInfos, _9__61_0, 0LL);
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

  if ( (byte_4A72FDA & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_10007/*"OpenResult"*/, target);
    sub_1B90010(&StringLiteral_10607/*"Performance"*/, v7);
    byte_4A72FDA = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10607/*"Performance"*/,
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
    sub_1B9026C(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10007/*"OpenResult"*/, 0LL);
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

  if ( (byte_4A72FFB & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_1B90010(&TerminalPramsManager_TypeInfo, v3);
    sub_1B90010(&StringLiteral_5490/*"END_PROC"*/, v4);
    byte_4A72FFB = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A6CB15 )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, method);
    byte_4A6CB15 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_4A6D248 )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v6);
    byte_4A6D248 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_374D460 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !byte_4A6D5D8 )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, v9);
    byte_4A6D5D8 = 1;
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
    sub_1B9026C(Instance, v9);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5490/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__60_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A72FFA & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_12988/*"StartQuestClearReward"*/, method);
    byte_4A72FFA = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12988/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__45_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A72FF9 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_5490/*"END_PROC"*/, method);
    byte_4A72FF9 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B9026C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5490/*"END_PROC"*/, 0LL);
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
  BattleDropItem_o *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x0
  BattleDropItem_o **v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  BattleDropItem_o *NewDrop; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v25; // w0
  Il2CppObject *Instance; // x21
  System_Action_o *v27; // x22
  __int64 *v28; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v32; // w2
  int32_t v33; // w3

  if ( (byte_4A72FEA & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, *(_QWORD *)&resultType);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B90010(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7);
    sub_1B90010(&Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__, v8);
    sub_1B90010(&BattleResultComponent___c__DisplayClass53_0_TypeInfo, v9);
    sub_1B90010(&StringLiteral_9627/*"OPEN"*/, v10);
    sub_1B90010(&StringLiteral_9243/*"NEXT"*/, v11);
    byte_4A72FEA = 1;
  }
  v12 = sub_1B9025C(BattleResultComponent___c__DisplayClass53_0_TypeInfo);
  BattleResultComponent___c__DisplayClass53_0___ctor((BattleResultComponent___c__DisplayClass53_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_33;
  *(_QWORD *)(v12 + 24) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)this, v15, v16);
  BattleResultComponent__ResetTimeScale(v17);
  *(_QWORD *)(v12 + 16) = 0LL;
  v18 = (BattleDropItem_o **)(v12 + 16);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v12 + 16), 0, v19, v20);
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
      v25 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v14 = 0LL;
      if ( !v25 )
        goto LABEL_17;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_33;
LABEL_15:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, 0LL);
LABEL_16:
      v14 = NewDrop;
LABEL_17:
      *v18 = v14;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v14, v22, v23);
LABEL_18:
      if ( !*v18 )
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
          UnityEngine_Object__DestroyImmediate_69539628(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v32, v33);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_33;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v28 = &StringLiteral_9243/*"NEXT"*/;
          goto LABEL_32;
        }
LABEL_33:
        sub_1B9026C(itemResult, v14);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v27 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(
        v27,
        (Il2CppObject *)v12,
        Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_33;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v27, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_33;
      v28 = &StringLiteral_9627/*"OPEN"*/;
LABEL_32:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v28, 0LL);
      return;
    default:
      goto LABEL_18;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A72FDB & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_12254/*"START_Begin"*/, method);
    byte_4A72FDB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B9026C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12254/*"START_Begin"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A72FE0 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg);
    byte_4A72FE0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B9026C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A72FEB & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_5490/*"END_PROC"*/, method);
    byte_4A72FEB = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B9026C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5490/*"END_PROC"*/, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A72FEE & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, userCommandCodeId);
    sub_1B90010(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7);
    byte_4A72FEE = 1;
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
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v13, v14);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0LL),
        *p_ServantRewardActionComp = Prefab,
        sub_1B8FFB4(
          (ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp,
          (int32_t)Prefab,
          v17,
          v18),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_34741164(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_14:
    sub_1B9026C(transform, v10);
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
  int32_t v24; // w2
  int32_t v25; // w3
  Il2CppObject *v26; // x25
  ServantRewardAction_o *Prefab; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  ServantRewardAction_o *v30; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v33; // w25
  Il2CppObject v34; // q1
  int64_t v35; // x22
  Il2CppObject v36; // q1
  int64_t v37; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v39; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A72FED & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_1B90010(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v12);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B90010(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v16);
    byte_4A72FED = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_312C754 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    UnityEngine_Object__Destroy_69539440(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v24, v25);
  }
  v26 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v26 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v26,
             (UnityEngine_Transform_o *)Instance,
             1,
             0LL);
  *p_ServantRewardActionComp = Prefab;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, (int32_t)Prefab, v28, v29);
  if ( !v22 )
    goto LABEL_27;
  v30 = *p_ServantRewardActionComp;
  klass = v22[5].klass;
  monitor = v22[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = klass;
  *(_QWORD *)&v41.fields.fakeValue = monitor;
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v41, 0LL);
  if ( isDoEffect )
  {
    v34 = v22[2];
    *(Il2CppObject *)&v40.fields.currentCryptoKey = v22[1];
    *(Il2CppObject *)&v40.fields.fakeValue = v34;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v39 = v40;
    v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v39, 0LL);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v22[6],
                                  0LL);
    if ( v30 )
    {
      ServantRewardAction__Setup(v30, v33, v35, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_25;
    }
LABEL_27:
    sub_1B9026C(Instance, v18);
  }
  v36 = v22[2];
  *(Il2CppObject *)&v40.fields.currentCryptoKey = v22[1];
  *(Il2CppObject *)&v40.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v38 = v40;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v38, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v22[6],
                                0LL);
  if ( !v30 )
    goto LABEL_27;
  ServantRewardAction__Setup(v30, v33, v37, (int32_t)Instance, 1, 1, 1, 2, 0LL);
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
    sub_1B9026C(0LL, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1B9026C(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1B9026C(0LL, flg);
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
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_4A72FEC & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, userSvtId);
    sub_1B90010(&Method_BattleResultComponent_endNewView__, v7);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v8);
    sub_1B90010(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9);
    sub_1B90010(&StringLiteral_9627/*"OPEN"*/, v10);
    sub_1B90010(&StringLiteral_9243/*"NEXT"*/, v11);
    byte_4A72FEC = 1;
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
      UnityEngine_Object__DestroyImmediate_69539628(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v21, v22);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v17 = &StringLiteral_9243/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1B9026C(Instance, v15);
  }
  v12 = Gift__IsEventSvtGet(type, 0LL);
  v13 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v12, v12, v13, v14);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v17 = &StringLiteral_9627/*"OPEN"*/;
LABEL_16:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v17, 0LL);
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
  __int64 v3; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4A72FFF & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_GameObject__get_Count__, method);
    sub_1B90010(&UnityEngine_WaitForSeconds_TypeInfo, v3);
    byte_4A72FFF = 1;
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
      sub_1B9026C(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v5 = (UnityEngine_WaitForSeconds_o *)sub_1B9025C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v5, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v5;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v5, v6, v7);
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

  v2 = sub_1B90024(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B9025C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B90024(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B90138(v3, v4);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A72FFC & 1) == 0 )
  {
    sub_1B90010(&BattleResultComponent___c_TypeInfo, v1);
    byte_4A72FFC = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v2;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)BattleResultComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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

  if ( (byte_4A72FFD & 1) == 0 )
  {
    sub_1B90010(&TerminalPramsManager_TypeInfo, method);
    byte_4A72FFD = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (ServantStatusBattleListViewItem_o *)&v4->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1B8FFB4(p_mQuestRewardInfos, 0, v2, v3);
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
  if ( (byte_4A72FFE & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, method);
    this = (BattleResultComponent___c__DisplayClass53_0_o *)sub_1B90010(&Method_BattleResultComponent_endNewView__, v3);
    byte_4A72FFE = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsCommandCode_37740312(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.newDrop;
    if ( v5 )
    {
      userSvtId = v5->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v8 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
      System_Action___ctor(v8, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v8, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B9026C(this, method);
  }
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsEventSvtGet_37739968(v9->fields.type, 0LL);
  v10 = v2->fields.newDrop;
  if ( !v10 )
    goto LABEL_12;
  v11 = v10->fields.userSvtId;
  v12 = (Il2CppObject *)v2->fields.__4__this;
  v13 = (char)this;
  v14 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
  System_Action___ctor(v14, v12, Method_BattleResultComponent_endNewView__, 0LL);
  if ( !v12 )
    goto LABEL_12;
  BattleResultComponent__openNewServantView((BattleResultComponent_o *)v12, v11, v13 & 1, v13 & 1, v14, 0LL);
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
      sub_1B90274(this, method);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1B9026C(this, method);
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