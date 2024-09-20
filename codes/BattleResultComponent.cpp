void __fastcall BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultEventItemComponent_o *eventItemResult; // x0
  PlayMakerFSM_o *fsm; // x8
  __int64 *v5; // x9

  if ( (byte_4A5E2CF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3580/*"CLOSE"*/);
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    byte_4A5E2CF = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                0LL),
        (fsm = this->fields.fsm) == 0LL) )
  {
    sub_1B8880C(eventItemResult, method);
  }
  v5 = &StringLiteral_9239/*"NEXT"*/;
  if ( ((unsigned __int8)eventItemResult & 1) == 0 )
    v5 = &StringLiteral_3580/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)*v5, 0LL);
}


void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *touchGuard; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E2CC & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E2CC = 1;
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
    sub_1B8880C(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_o *v2; // x19
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  v2 = this;
  if ( (byte_4A5E2D6 & 1) == 0 )
  {
    sub_1B885B0(&AndroidBackKeyManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&StringLiteral_23100/*"sendFsmEvent"*/);
    this = (BattleResultComponent_o *)sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E2D6 = 1;
  }
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 0;
  BattleResultComponent__ResetTimeScale((const MethodInfo *)this);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1B8880C(Instance, v4);
  UnityEngine_GameObject__SendMessage_69440752(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_23100/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5489/*"END_PROC"*/,
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
  if ( (byte_4A5E2D9 & 1) == 0 )
  {
    this = (BattleResultComponent_o *)sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    byte_4A5E2D9 = 1;
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
      sub_1B8880C(0LL, v7);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9239/*"NEXT"*/, 0LL);
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
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *Component_object; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5E2C0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E2C0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_36;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  v7 = (UnityEngine_Transform_o *)gameObject;
  if ( !byte_4A55CE1 )
  {
    gameObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
    UnityEngine_Object__Destroy_69459380(v12, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v13, v14);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             gameObject,
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = (struct ScreenTouchInformationComponent_o *)Component_object,
        p_screenTouch = &this->fields.screenTouch,
        sub_1B88554((ServantStatusBattleListViewItem_o *)p_screenTouch, (int32_t)Component_object, v17, v18),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 11)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_36:
    sub_1B8880C(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  PlayMakerFSM_o *UserId; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v8; // w20
  Il2CppObject *v9; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E2DE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_EventDataLostBattleMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventDataLostMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_12154/*"SKIP"*/);
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    byte_4A5E2DE = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
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
  v8 = EventDataLostBattleId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = (PlayMakerFSM_o *)NetworkManager__get_UserId(0LL);
  if ( !v9 )
LABEL_26:
    sub_1B8880C(UserId, v3);
  if ( UserEventDataLostMaster__TryGetEntity((UserEventDataLostMaster_o *)v9, &entity, (int64_t)UserId, v8, 0LL) )
  {
    UserId = (PlayMakerFSM_o *)entity;
    if ( !entity )
      goto LABEL_26;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0LL) )
    {
      UserId = this->fields.fsm;
      if ( !UserId )
        goto LABEL_26;
      PlayMakerFSM__SendEvent(UserId, (System_String_o *)StringLiteral_9239/*"NEXT"*/, 0LL);
    }
  }
LABEL_24:
  UserId = this->fields.fsm;
  if ( !UserId )
    goto LABEL_26;
  PlayMakerFSM__SendEvent(UserId, (System_String_o *)StringLiteral_12154/*"SKIP"*/, 0LL);
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
    sub_1B8880C(obj_fronttouch, method);
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
  if ( (byte_4A5E2DF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__);
    sub_1B885B0(&DataLostResetManager_TypeInfo);
    this = (BattleResultComponent_o *)sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5E2DF = 1;
  }
  klass = v2[10].klass;
  if ( !klass )
    sub_1B8880C(this, method);
  name_high = HIDWORD(klass->_1.name);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v7, v2, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, 0LL);
  if ( !DataLostResetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  DataLostResetManager__OpenBattleResultResetDialog(name_high, WarId_k__BackingField, v7, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E2D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12154/*"SKIP"*/);
    byte_4A5E2D0 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B8880C(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12154/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_4A5E2DD & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12154/*"SKIP"*/);
    byte_4A5E2DD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      sub_1B8880C(Instance, v4);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12154/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E2CE & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12154/*"SKIP"*/);
    byte_4A5E2CE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(Instance, v4);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12154/*"SKIP"*/, 0LL);
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
    sub_1B8880C(obj_fronttouch, method);
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
  bool IsQuestClear_37596684; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v14; // w22
  Il2CppObject *v15; // x21
  TerminalPramsManager_c *v16; // x0
  const MethodInfo *v17; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4A5E2DA & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1B885B0(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1B885B0(&MapControl_QuestInfo_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5E2DA = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  BYTE4(Instance->fields.writeMasterDataThreadException) = 1;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_36;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             QuestId_k__BackingField,
             (const MethodInfo_311D934 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v9 = (MapControl_QuestInfo_o *)sub_1B887FC(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_36;
  MapControl_QuestInfo__SetTerminalParamsValue(v9, 0LL);
  questId = v9->fields.questId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_37596684 = CondType__IsQuestClear_37596684(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DCB = 1;
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
                            !IsQuestClear_37596684,
                            &fixedVal,
                            0LL);
  v9->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume((QuestEntity_o *)Entity, CampaignCostCalcValue, 0LL);
  v9->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v14 = fixedVal;
  else
    v14 = ActConsume;
  v15 = SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57FF5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF5 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_36:
    sub_1B8880C(Instance, v5);
  LODWORD(Instance[1].klass) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v17);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleResultComponent_resultData_o *battleResult; // x0
  const MethodInfo *v4; // x0

  if ( (byte_4A5E2CD & 1) == 0 )
  {
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_12963/*"StartQuestClearReward"*/);
    byte_4A5E2CD = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_12;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_12963/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleResult = (BattleResultComponent_resultData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResult
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)battleResult, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleResult, 0, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.friendResult) == 0LL) )
  {
LABEL_12:
    sub_1B8880C(battleResult, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)battleResult, 0LL);
  BattleResultComponent__ResetTimeScale(v4);
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

  if ( (byte_4A5E2C6 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultComponent_endCloseEndEventMessage__);
    sub_1B885B0(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E2C6 = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields._stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v7 = (CommonUI_o *)Instance;
    v8 = (NotificationDialog_ClickDelegate_o *)sub_1B887FC(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v7 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_30496496(
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
    sub_1B8880C(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, 0LL);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  BattleRetryConfirmComponent_o *v4; // x20
  BattleWindowComponent_EndCall_o *v5; // x21
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4A5E2D7 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleResultComponent__OpenRetryQuest_b__60_0__);
    sub_1B885B0(&BattleWindowComponent_EndCall_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E2D7 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_15;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v4 = this->fields.battleRetryConfirmComponent;
    v5 = (BattleWindowComponent_EndCall_o *)sub_1B887FC(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v5,
      (Il2CppObject *)this,
      Method_BattleResultComponent__OpenRetryQuest_b__60_0__,
      0LL);
    if ( !v4 )
      goto LABEL_15;
    BattleRetryConfirmComponent__Open(v4, v5, 0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
LABEL_15:
    sub_1B8880C(battleRetryConfirmComponent, method);
  Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
  BattleEventTutorial_o *eventTutorial; // x0
  BattleEventTutorial_o *v4; // x20
  System_Action_o *v5; // x21
  BattleEventTutorial_o *v6; // x20
  System_Action_o *v7; // x21
  BattleEventTutorial_o *v8; // x20
  System_Action_o *v9; // x21

  if ( (byte_4A5E2C5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleResultComponent_OpenTutorial__);
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E2C5 = 1;
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
    v5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v4 )
    {
      BattleEventTutorial__callResult(v4, v5, 0LL);
      return;
    }
LABEL_23:
    sub_1B8880C(eventTutorial, method);
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
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
    v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
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

  if ( (byte_4A5E2DB & 1) == 0 )
  {
    sub_1B885B0(&BattleSetupInfo_TypeInfo);
    sub_1B885B0(&RandomLimitCountManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&SoundManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5E2DB = 1;
  }
  if ( !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  BattleResultComponent__ResetTimeScale(v4);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.8, 0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC3 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC3 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v5->static_fields->_WarId_k__BackingField;
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A57DC0 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v5->static_fields->_QuestId_k__BackingField;
  if ( !byte_4A57DCB )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
    byte_4A57DCB = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v5->static_fields->_PhaseCnt_k__BackingField;
  v9 = (BattleSetupInfo_o *)sub_1B887FC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_27;
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
      goto LABEL_27;
    LODWORD(Instance[3].monitor) = boostId;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_27:
    sub_1B8880C(Instance, v11);
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
    sub_1B8880C(this, method);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v4; // x1
  ScreenTouchInformationComponent_o *v5; // x0

  if ( (byte_4A5E2C3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E2C3 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v5 = this->fields.screenTouch;
    if ( !v5 || (ScreenTouchInformationComponent__ResetPlayScale(v5, 0LL), (v5 = this->fields.screenTouch) == 0LL) )
      sub_1B8880C(v5, v4);
    ScreenTouchInformationComponent__ResetPlayAlpha(v5, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  if ( (byte_4A5E2DC & 1) == 0 )
  {
    sub_1B885B0(&BattlePerformance_TypeInfo);
    byte_4A5E2DC = 1;
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
  int32_t v7; // w2
  int32_t v8; // w3
  System_Object_array *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *v41; // x21
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *v49; // x21
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x21
  System_Collections_Hashtable_o *v58; // x0
  __int64 v59; // x0
  int v60; // [xsp+Ch] [xbp-44h] BYREF
  int v61; // [xsp+10h] [xbp-40h] BYREF
  int v62; // [xsp+14h] [xbp-3Ch] BYREF
  int v63; // [xsp+18h] [xbp-38h] BYREF
  int v64; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4A5E2C9 & 1) == 0 )
  {
    sub_1B885B0(&iTween_EaseType_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_12545/*"ScrollBarMotionCompleteValue"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_18551/*"delay"*/);
    sub_1B885B0(&StringLiteral_12546/*"ScrollBarMotionUpdateValue"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_18754/*"easeType"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E2C9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
  v4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v5 = sub_1B88658(object___TypeInfo, 14LL);
  if ( !v5 )
    sub_1B8880C(0LL, v6);
  v9 = (System_Object_array *)v5;
  v10 = StringLiteral_19656/*"from"*/;
  if ( StringLiteral_19656/*"from"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_19656/*"from"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_19656/*"from"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v9->max_length )
    goto LABEL_67;
  v9->m_Items[0] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v9->m_Items, v11, v7, v8);
  v64 = 0;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v64, v12, v13, v14);
  v17 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1B886EC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
  }
  if ( v9->max_length <= 1 )
    goto LABEL_67;
  v9->m_Items[1] = v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[1], (int32_t)v17, v15, v16);
  v10 = StringLiteral_23969/*"to"*/;
  if ( StringLiteral_23969/*"to"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_23969/*"to"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_23969/*"to"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 2 )
    goto LABEL_67;
  v9->m_Items[2] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[2], v11, v18, v19);
  v63 = 1065353216;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v63, v20, v21, v22);
  v25 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1B886EC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
  }
  if ( v9->max_length <= 3 )
    goto LABEL_67;
  v9->m_Items[3] = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[3], (int32_t)v25, v23, v24);
  v10 = StringLiteral_22281/*"onupdate"*/;
  if ( StringLiteral_22281/*"onupdate"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_22281/*"onupdate"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 4 )
    goto LABEL_67;
  v9->m_Items[4] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[4], v11, v26, v27);
  v10 = StringLiteral_12546/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12546/*"ScrollBarMotionUpdateValue"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_12546/*"ScrollBarMotionUpdateValue"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_12546/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 5 )
    goto LABEL_67;
  v9->m_Items[5] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[5], v11, v28, v29);
  v10 = StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 6 )
    goto LABEL_67;
  v9->m_Items[6] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[6], v11, v30, v31);
  v10 = StringLiteral_12545/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12545/*"ScrollBarMotionCompleteValue"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_12545/*"ScrollBarMotionCompleteValue"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_12545/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 7 )
    goto LABEL_67;
  v9->m_Items[7] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[7], v11, v32, v33);
  v10 = StringLiteral_18754/*"easeType"*/;
  if ( StringLiteral_18754/*"easeType"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_18754/*"easeType"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_18754/*"easeType"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 8 )
    goto LABEL_67;
  v9->m_Items[8] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[8], v11, v34, v35);
  v62 = 17;
  v10 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v62, v36, v37, v38);
  v41 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1B886EC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
  }
  if ( v9->max_length <= 9 )
    goto LABEL_67;
  v9->m_Items[9] = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[9], (int32_t)v41, v39, v40);
  v10 = StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_23929/*"time"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 0xA )
    goto LABEL_67;
  v9->m_Items[10] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[10], v11, v42, v43);
  v61 = 1065353216;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v61, v44, v45, v46);
  v49 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1B886EC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
  }
  if ( v9->max_length <= 0xB )
    goto LABEL_67;
  v9->m_Items[11] = v49;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[11], (int32_t)v49, v47, v48);
  v10 = StringLiteral_18551/*"delay"*/;
  if ( StringLiteral_18551/*"delay"*/ )
  {
    v10 = sub_1B886EC(StringLiteral_18551/*"delay"*/, v9->obj.klass->_1.element_class);
    if ( !v10 )
      goto LABEL_68;
    v11 = StringLiteral_18551/*"delay"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v9->max_length <= 0xC )
    goto LABEL_67;
  v9->m_Items[12] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[12], v11, v50, v51);
  v60 = 0;
  v10 = j_il2cpp_value_box_0(float_TypeInfo, &v60, v52, v53, v54);
  v57 = (Il2CppObject *)v10;
  if ( v10 )
  {
    v10 = sub_1B886EC(v10, v9->obj.klass->_1.element_class);
    if ( !v10 )
    {
LABEL_68:
      v59 = sub_1B88830(v10);
      sub_1B886D8(v59, 0LL);
    }
  }
  if ( v9->max_length <= 0xD )
LABEL_67:
    sub_1B88814(v10, v11);
  v9->m_Items[13] = v57;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v9->m_Items[13], (int32_t)v57, v55, v56);
  v58 = iTween__Hash(v9, 0LL);
  iTween__ValueTo(v4, v58, 0LL);
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
  if ( (byte_4A5E2CB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__);
    this = (BattleResultComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_4A5E2CB = 1;
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
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v6,
    (Il2CppObject *)v2,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_1B8880C(this, method);
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

  if ( (byte_4A5E2CA & 1) == 0 )
  {
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5E2CA = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_1B8880C(0LL, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_60355704(gameObject, 0LL);
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
  BattleResultComponent_resultData_o *v12; // x1
  BattleResultComponent_o **p_battleResult; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  TerminalPramsManager_c *v16; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w20
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v19; // x0
  int32_t v20; // w19
  BalanceConfig_c *v21; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v23; // x0
  BattleResultComponent_o *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *FriendIconPrefab; // x0
  BattleResultComponent___c_c *v26; // x8
  BattleResultComponent_o *v27; // x26
  System_Converter_TInput__TOutput__o *_9__34_0; // x19
  Il2CppObject *v29; // x23
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_array *v33; // x0
  System_String_o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *resultSprite; // x0
  BattleResultComponent___c_c *v36; // x8
  BattleResultComponent_o *v37; // x26
  System_Converter_TInput__TOutput__o *_9__34_1; // x19
  Il2CppObject *v39; // x23
  struct BattleResultComponent___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_array *v43; // x0
  System_String_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_String_o *m_CancellationTokenSource; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  struct BattleResultComponent_resultData_o *v50; // x8
  BattleData_o *v51; // x28
  struct System_String_o *eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v53; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v55; // x26
  BattleResultComponent_resultData_o *battleResult; // x8
  struct BattleResultBondsComponent_o *bondsResult; // x8
  Il2CppObject *Master_object; // x19
  int32_t v59; // w23
  int32_t QuestId; // w24
  const MethodInfo *v61; // x7
  bool v62; // w27
  BattleResultComponent_resultData_o *v63; // x19
  struct BattleInfoData_o *battle_info; // x8
  BattleResultBondsComponent_o *v65; // x23
  UserServantCollectionEntity_array *oldUserSvtCollection; // x28
  DeckData_o *myDeck; // x24
  int32_t followerType; // w29
  BattleUserServantData_array *userSvt; // x25
  UserServantCollectionEntity_array *v70; // x2
  struct BattleResultEventItemComponent_o *eventItemResult; // x9
  struct System_Threading_CancellationTokenSource_o *v72; // x8
  struct BattleResultItemComponent_o *itemResult; // x10
  struct System_Threading_CancellationTokenSource_o *v74; // x11
  struct BattleResultEventItemComponent_o *v75; // x9
  struct System_Threading_CancellationTokenSource_o *v76; // x8
  QuestEntity_o *quest_ent; // x8
  UserGameEntity_o *parentComp; // x29
  BattleResultItemComponent_o *v79; // x25
  int32_t fsm; // w27
  int32_t fsm_high; // w28
  struct BattleResultExpComponent_o *expResult; // x20
  int32_t eventItemResult_high; // w19
  struct BattleResultEventDamageItemComponent_o *dropupinfos; // x23
  struct System_String_o *v85; // x24
  int32_t firstClearRewardQp; // w26
  int32_t v87; // w2
  int32_t v88; // w3
  BattleResultComponent_o *v89; // x8
  struct BattleResultItemComponent_o *v90; // x9
  struct UILabel_o *getQpLabel; // x9
  struct ScreenTouchInformationComponent_o *mText; // x1
  int32_t v93; // w2
  int32_t v94; // w3
  struct BattleResultItemComponent_o *v95; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v97; // x9
  struct System_String_o *v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x4
  struct BattleResultEventFortificationItemComponent_o *eventFortificationItemResult; // x8
  Il2CppObject *v103; // x0
  struct BattleResultItemComponent_o *v104; // x8
  Il2CppObject *v105; // x23
  UILabel_o *v106; // x19
  System_String_o *v107; // x0
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  struct BattleResultItemComponent_o *v111; // x8
  struct BattleResultEventFortificationItemComponent_o *v112; // x9
  UILabel_o *v113; // x19
  Il2CppObject *v114; // x0
  BattleResultFriendComponent_o *v115; // x19
  int32_t obj_basebg; // w23
  int32_t obj_basebg_high; // w24
  int64_t v118; // x25
  int32_t obj_fronttouch; // w26
  int32_t obj_fronttouch_high; // w27
  struct BattleResultComponent_resultData_o *v121; // x8
  struct BattleResultComponent_resultData_o *v122; // x8
  UnityEngine_Object_o *v123; // x19
  struct BattleResultComponent_resultData_o *v124; // x8
  struct BattleResultComponent_resultData_o *v125; // x8
  struct BattleInfoData_o *v126; // x8
  struct DeckData_o *v127; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v130; // x20
  char v131; // w22
  BattleResultComponent_o *v132; // x19
  int32_t v133; // w23
  int32_t EventProgressValueSaveData_42147484; // w0
  int v135; // w8
  TerminalPramsManager_c *v136; // x0
  _QWORD *monitor; // x8
  bool isWin; // w19
  const MethodInfo *boostRate; // [xsp+10h] [xbp-F0h]
  struct UnityEngine_GameObject_o *v140; // [xsp+50h] [xbp-B0h]
  struct BattleResultFriendComponent_o *friendResult; // [xsp+58h] [xbp-A8h]
  int32_t eventId; // [xsp+64h] [xbp-9Ch]
  System_Int32_array *v143; // [xsp+68h] [xbp-98h]
  AssetData_o *resultAssetb; // [xsp+70h] [xbp-90h]
  BattleResultComponent_resultData_array *result; // [xsp+78h] [xbp-88h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+80h] [xbp-80h]
  BattleData_o *battleData; // [xsp+88h] [xbp-78h]
  int myFsm_high; // [xsp+90h] [xbp-70h] BYREF
  int v150; // [xsp+94h] [xbp-6Ch] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Color_o v152; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v11 = this;
  if ( (byte_4A5E2C4 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&System_Converter_int__string__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_EventBuddyPointMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventProgressValueMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&EventInfoUIProgressControl_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ConvertAll_string___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&QuestKnockdownResult_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_BattleResultComponent___c__Set_b__34_0__);
    sub_1B885B0(&Method_BattleResultComponent___c__Set_b__34_1__);
    sub_1B885B0(&BattleResultComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_19627/*"freeShopIds"*/);
    sub_1B885B0(&StringLiteral_11103/*"RESULT_QP_PLUS"*/);
    sub_1B885B0(&StringLiteral_24933/*"{0:#,0}"*/);
    sub_1B885B0(&StringLiteral_22918/*"returnRarePriShopIds"*/);
    this = (BattleResultComponent_o *)sub_1B885B0(&StringLiteral_868/*","*/);
    byte_4A5E2C4 = 1;
  }
  entity = 0LL;
  if ( !resultList )
    goto LABEL_204;
  if ( !resultList->max_length )
    goto LABEL_205;
  v12 = resultList->m_Items[0];
  result = resultList;
  v11->fields.battleResult = v12;
  p_battleResult = (BattleResultComponent_o **)&v11->fields.battleResult;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v11->fields.battleResult,
    (int32_t)v12,
    (int32_t)tutorial,
    (int32_t)resultAsset);
  v11->fields.eventTutorial = tutorial;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.eventTutorial, (int32_t)tutorial, v14, v15);
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
      if ( !byte_4A588DD )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588DD = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v16->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(bData, 0LL);
      if ( !byte_4A588CD )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588CD = 1;
      }
      v19 = TerminalPramsManager_TypeInfo;
      v20 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v19 = TerminalPramsManager_TypeInfo;
      }
      v19->static_fields->_BeforeEventActivityPoint_k__BackingField = v20;
      v21 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v21 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v21->static_fields->UserEventActivityPointMax;
      if ( !byte_4A588DD )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588DD = 1;
      }
      v23 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v23 = TerminalPramsManager_TypeInfo;
      }
      if ( v23->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( !v23->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v23);
        if ( !byte_4A588CD )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A588CD = 1;
        }
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        v23->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( !v23->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v23);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v24 = *p_battleResult;
  v143 = viewGroupIds;
  p_eventTutorial = (BattleResultComponent_o **)&v11->fields.eventTutorial;
  battleData = bData;
  if ( !*p_battleResult )
    goto LABEL_204;
  FriendIconPrefab = (System_Collections_Generic_IEnumerable_TSource__o *)v24[1].fields.FriendIconPrefab;
  if ( FriendIconPrefab )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        FriendIconPrefab,
                                        (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
    v26 = BattleResultComponent___c_TypeInfo;
    v27 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v26 = BattleResultComponent___c_TypeInfo;
    }
    _9__34_0 = (System_Converter_TInput__TOutput__o *)v26->static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = BattleResultComponent___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v26->static_fields->__9;
      _9__34_0 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__34_0, v29, Method_BattleResultComponent___c__Set_b__34_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__34_0 = (struct System_Converter_int__string__o *)_9__34_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__34_0, (int32_t)_9__34_0, v31, v32);
    }
    if ( !v27 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v27,
                                        (System_Converter_T__TOutput__o *)_9__34_0,
                                        (const MethodInfo_2DB30D8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v33 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
    v34 = System_String__Join((System_String_o *)StringLiteral_868/*","*/, v33, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19627/*"freeShopIds"*/, v34, 0LL);
    v24 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  resultSprite = (System_Collections_Generic_IEnumerable_TSource__o *)v24[1].fields.resultSprite;
  if ( resultSprite )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        resultSprite,
                                        (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
    v36 = BattleResultComponent___c_TypeInfo;
    v37 = this;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v36 = BattleResultComponent___c_TypeInfo;
    }
    _9__34_1 = (System_Converter_TInput__TOutput__o *)v36->static_fields->__9__34_1;
    if ( !_9__34_1 )
    {
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = BattleResultComponent___c_TypeInfo;
      }
      v39 = (Il2CppObject *)v36->static_fields->__9;
      _9__34_1 = (System_Converter_TInput__TOutput__o *)sub_1B887FC(System_Converter_int__string__TypeInfo);
      System_Converter_int__object____ctor(_9__34_1, v39, Method_BattleResultComponent___c__Set_b__34_1__, 0LL);
      v40 = BattleResultComponent___c_TypeInfo->static_fields;
      v40->__9__34_1 = (struct System_Converter_int__string__o *)_9__34_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v40->__9__34_1, (int32_t)_9__34_1, v41, v42);
    }
    if ( !v37 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_object_(
                                        (System_Collections_Generic_List_int__o *)v37,
                                        (System_Converter_T__TOutput__o *)_9__34_1,
                                        (const MethodInfo_2DB30D8 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_204;
    v43 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
    v44 = System_String__Join((System_String_o *)StringLiteral_868/*","*/, v43, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22918/*"returnRarePriShopIds"*/, v44, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_204;
  m_CancellationTokenSource = (struct System_String_o *)(*p_battleResult)->fields.m_CancellationTokenSource;
  v11->fields.eventEndTitle = m_CancellationTokenSource;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v11->fields.eventEndTitle,
    (int32_t)m_CancellationTokenSource,
    v45,
    v46);
  v50 = v11->fields.battleResult;
  v51 = bData;
  if ( !v50 )
    goto LABEL_204;
  eventEndMessage = v50->fields.eventEndMessage;
  v11->fields.eventEndMessage = eventEndMessage;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.eventEndMessage, (int32_t)eventEndMessage, v48, v49);
  v53 = v11->fields.battleResult;
  if ( !v53 )
    goto LABEL_204;
  isTrialQuestNewRecord = v53->fields.isTrialQuestNewRecord;
  v55 = (QuestKnockdownResult_o *)sub_1B887FC(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v55, isTrialQuestNewRecord, bData, 0LL);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v59 = BattleData__get_eventId(bData, 0LL);
      QuestId = BattleData__getQuestId(bData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(bData, 0LL);
      if ( !Master_object )
        goto LABEL_204;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          (EventBuddyPointMaster_o *)Master_object,
                                          &entity,
                                          v59,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_204;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v62 = (unsigned __int8)this & 1;
      }
      else
      {
        v62 = 0;
      }
      v63 = v11->fields.battleResult;
      if ( !v63 )
        goto LABEL_204;
      battle_info = bData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_204;
      v65 = v11->fields.bondsResult;
      if ( !v65 )
        goto LABEL_204;
      oldUserSvtCollection = v63->fields.oldUserSvtCollection;
      myDeck = v63->fields.myDeck;
      followerType = v63->fields.followerType;
      userSvt = battle_info->fields.userSvt;
      BattleResultBondsComponent__InitResultData(
        v11->fields.bondsResult,
        oldUserSvtCollection,
        v63->fields.friendshipRewardInfos,
        resultAsset,
        v63->fields.friendshipExpBase,
        v63->fields.getJoinSvts,
        0,
        v61);
      v70 = oldUserSvtCollection;
      v51 = battleData;
      BattleResultBondsComponent__SetResultDataLocal(
        v65,
        myDeck,
        v70,
        followerType,
        userSvt,
        v63,
        v62,
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
    && (v72 = eventItemResult->fields.m_CancellationTokenSource) != 0LL
    && (itemResult = this->fields.itemResult) != 0LL
    && (v74 = itemResult->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v72 || !(_DWORD)v74 )
      goto LABEL_205;
    if ( !v11->fields.expResult )
      goto LABEL_204;
    BattleResultExpComponent__setResultData(
      v11->fields.expResult,
      (UserGameEntity_o *)eventItemResult->fields.parentComp,
      (UserEquipEntity_o *)itemResult->fields.parentComp,
      (MasterLvRewardInfo_array *)this->fields.eventEndTitle,
      resultAsset,
      v51->fields.maxTurnDamageInBattle,
      v51->fields.maxTurnDamageRecord,
      v55,
      0LL);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  v75 = this->fields.eventItemResult;
  if ( v75 && (v76 = v75->fields.m_CancellationTokenSource) != 0LL )
  {
    if ( !(_DWORD)v76 )
      goto LABEL_205;
    quest_ent = v51->fields.quest_ent;
    if ( !quest_ent )
      goto LABEL_204;
    parentComp = (UserGameEntity_o *)v75->fields.parentComp;
    v79 = v11->fields.itemResult;
    resultAssetb = (AssetData_o *)this->fields.eventEndMessage;
    eventId = *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1);
    fsm = (int32_t)this->fields.fsm;
    fsm_high = HIDWORD(this->fields.fsm);
    expResult = this[1].fields.expResult;
    eventItemResult_high = HIDWORD(this[1].fields.eventItemResult);
    dropupinfos = this[1].fields.eventDamageItemResult;
    v85 = this[1].fields.eventEndMessage;
    firstClearRewardQp = (int32_t)this->fields.obj_basebg;
    v140 = this->fields.FriendIconPrefab;
    friendResult = this->fields.friendResult;
    this = (BattleResultComponent_o *)QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
    if ( !*p_battleResult || !v79 )
      goto LABEL_204;
    BattleResultItemComponent__setResultData(
      v79,
      (BattleDropItem_array *)resultAssetb,
      fsm,
      fsm_high,
      parentComp,
      eventId,
      (UserEventEntity_array *)friendResult,
      (UserEventPointEntity_array *)v140,
      (int64_t)expResult,
      v143,
      eventItemResult_high,
      (DropUpInfo_array *)dropupinfos,
      (EventConquestInfo_array *)v85,
      firstClearRewardQp,
      (unsigned __int8)this & 1,
      (BattleResultAddRewardBonus_o *)(*p_battleResult)[1].fields.eventFortificationItemResult,
      0LL);
    v51 = battleData;
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
  }
  v89 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( v89[1].fields.eventFortificationItemResult )
  {
    v90 = v11->fields.itemResult;
    if ( !v90 )
      goto LABEL_204;
    getQpLabel = v90->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_204;
    mText = (struct ScreenTouchInformationComponent_o *)getQpLabel->fields.mText;
    v89[1].fields.screenTouch = mText;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v89[1].fields.screenTouch, (int32_t)mText, v87, v88);
    v95 = v11->fields.itemResult;
    if ( !v95 )
      goto LABEL_204;
    nowQpLabel = v95->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_204;
    v97 = v11->fields.battleResult;
    if ( !v97 )
      goto LABEL_204;
    v98 = nowQpLabel->fields.mText;
    v97->fields.ultimateNowQpText = v98;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v97->fields.ultimateNowQpText, (int32_t)v98, v93, v94);
    if ( !*p_battleResult )
      goto LABEL_204;
    eventFortificationItemResult = (*p_battleResult)[1].fields.eventFortificationItemResult;
    if ( !eventFortificationItemResult )
      goto LABEL_204;
    v150 = (__int64)eventFortificationItemResult->fields.myFsm & ~(SLODWORD(eventFortificationItemResult->fields.myFsm) >> 31);
    v103 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v150, v99, v100, v101);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v103, 0LL);
    v104 = v11->fields.itemResult;
    if ( !v104 )
      goto LABEL_204;
    v105 = (Il2CppObject *)this;
    v106 = v104->fields.getQpLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v107 = LocalizationManager__Get((System_String_o *)StringLiteral_11103/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v107, v105, 0LL);
    if ( !v106 )
      goto LABEL_204;
    UILabel__set_text(v106, (System_String_o *)this, 0LL);
    v111 = v11->fields.itemResult;
    if ( !v111 )
      goto LABEL_204;
    if ( !*p_battleResult )
      goto LABEL_204;
    v112 = (*p_battleResult)[1].fields.eventFortificationItemResult;
    if ( !v112 )
      goto LABEL_204;
    v113 = v111->fields.nowQpLabel;
    myFsm_high = HIDWORD(v112->fields.myFsm);
    v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &myFsm_high, v108, v109, v110);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_24933/*"{0:#,0}"*/, v114, 0LL);
    if ( !v113 )
      goto LABEL_204;
    UILabel__set_text(v113, (System_String_o *)this, 0LL);
    this = (BattleResultComponent_o *)v11->fields.nextButtonSpr;
    if ( !this )
      goto LABEL_204;
    v152.fields.r = 0.29804;
    v152.fields.a = 1.0;
    v152.fields.g = 0.29804;
    v152.fields.b = 0.29804;
    UIWidget__set_color((UIWidget_o *)this, v152, 0LL);
    v89 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_204;
  }
  this = (BattleResultComponent_o *)v51->fields.quest_ent;
  if ( !this )
    goto LABEL_204;
  v115 = v11->fields.friendResult;
  obj_basebg = (int32_t)v89[1].fields.obj_basebg;
  obj_basebg_high = HIDWORD(v89[1].fields.obj_basebg);
  v118 = (int64_t)v89[1].fields.fsm;
  obj_fronttouch = (int32_t)v89[1].fields.obj_fronttouch;
  obj_fronttouch_high = HIDWORD(v89[1].fields.obj_fronttouch);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v115 )
    goto LABEL_204;
  BattleResultFriendComponent__setResultData(
    v115,
    obj_basebg,
    obj_basebg_high,
    v118,
    obj_fronttouch,
    obj_fronttouch_high,
    (unsigned __int8)this & 1,
    0LL);
  v121 = v11->fields.battleResult;
  if ( !v121 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v11->fields.eventItemResult;
  if ( !this )
    goto LABEL_204;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v121->fields.resultEventRewardInfos,
                                      (unsigned int)v121->fields.eventId,
                                      v121->fields.resultBoostItemRewardInfos,
                                      v121->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v122 = v11->fields.battleResult;
  if ( !v122 )
    goto LABEL_204;
  this = (BattleResultComponent_o *)v11->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_204;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v122->fields.resultDamageRewardInfos,
    (unsigned int)v122->fields.eventId,
    v122->fields.resultBoostItemRewardInfos,
    v122->fields.rewardInfos,
    this->klass[1]._1.name);
  v123 = (UnityEngine_Object_o *)v11->fields.eventFortificationItemResult;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleResultComponent_o *)UnityEngine_Object__op_Inequality(v123, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v124 = v11->fields.battleResult;
    if ( !v124 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v11->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v124->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v124->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v125 = v11->fields.battleResult;
    if ( !v125 )
      goto LABEL_204;
    this = (BattleResultComponent_o *)v11->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_204;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v125->fields.fortificationInfos,
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
  v126 = v51->fields.battle_info;
  if ( !v126 )
    goto LABEL_204;
  v127 = v126->fields.myDeck;
  if ( v127 )
  {
    svts = v127->fields.svts;
    if ( svts )
    {
      max_length = svts->max_length;
      if ( max_length >= 1 )
      {
        v130 = 0LL;
        while ( (unsigned int)v130 < max_length )
        {
          this = (BattleResultComponent_o *)svts->m_Items[v130];
          if ( !this )
            goto LABEL_204;
          this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin(
                                              (BattleDeckServantData_o *)this,
                                              0LL);
          v131 = (char)this;
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            max_length = svts->max_length;
            if ( (int)++v130 < max_length )
              continue;
          }
          goto LABEL_156;
        }
LABEL_205:
        sub_1B88814(this, resultList);
      }
    }
  }
  v131 = 0;
LABEL_156:
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_204;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1),
                                        0LL);
    v132 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_204;
      v133 = *((_DWORD *)&(*p_battleResult)->fields.UnityEngine_Behaviour_Fields + 1);
      if ( !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      EventProgressValueSaveData_42147484 = EventInfoUIProgressControl__GetEventProgressValueSaveData_42147484(
                                              v133,
                                              0,
                                              0LL);
      v135 = (int)v132->fields.obj_basebg;
      LODWORD(v132) = 0;
      if ( EventProgressValueSaveData_42147484 != v135 )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4A57DC9 )
        {
          sub_1B885B0(&TerminalPramsManager_TypeInfo);
          byte_4A57DC9 = 1;
        }
        v136 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v136 = TerminalPramsManager_TypeInfo;
        }
        v136->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v132) = 1;
      }
    }
  }
  else
  {
    LODWORD(v132) = 0;
  }
  if ( v131 & 1 | !v51->fields.isRetryable )
    goto LABEL_178;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_204;
  if ( (((unsigned int)v132 | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
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
    sub_1B8880C(this, resultList);
  }
  monitor = this[2].monitor;
  if ( monitor && monitor[3] )
    BattleResultComponent_resultData__enableResultDispFlag((BattleResultComponent_resultData_o *)this, 4096, 0LL);
  if ( (BattleData__isBattleResultLoseQuestClear(v51, 0LL) || BattleData__isBattleRetreatQuestClear(v51, 0LL))
    && v51->fields.isItemResultSkip )
  {
    if ( !BattleData__IsWarBoard(v51, 0LL) )
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
    sub_1B8880C(0LL, v3);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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

  if ( (byte_4A5E2C8 & 1) == 0 )
  {
    sub_1B885B0(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo);
    byte_4A5E2C8 = 1;
  }
  v3 = sub_1B887FC(BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__42___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x8
  CommonUI_o *v6; // x19
  BattleResultComponent___c_c *v7; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x20
  System_Action_o *_9__61_0; // x21
  Il2CppObject *v10; // x22
  struct BattleResultComponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5E2D8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__);
    sub_1B885B0(&BattleResultComponent___c_TypeInfo);
    byte_4A5E2D8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC0 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v2->static_fields->_QuestId_k__BackingField, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = TerminalPramsManager_TypeInfo;
    v6 = (CommonUI_o *)Instance;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v7 = BattleResultComponent___c_TypeInfo;
    mQuestRewardInfos = v5->static_fields->mQuestRewardInfos;
    if ( !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v7 = BattleResultComponent___c_TypeInfo;
    }
    _9__61_0 = v7->static_fields->__9__61_0;
    if ( !_9__61_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleResultComponent___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__61_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(_9__61_0, v10, Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, 0LL);
      static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      static_fields->__9__61_0 = _9__61_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__61_0, (int32_t)_9__61_0, v12, v13);
    }
    if ( !v6 )
      sub_1B8880C(v7, v4);
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

  if ( (byte_4A5E2C1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_10001/*"OpenResult"*/);
    sub_1B885B0(&StringLiteral_10601/*"Performance"*/);
    byte_4A5E2C1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10601/*"Performance"*/,
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
    sub_1B8880C(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10001/*"OpenResult"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenDataLostBattleResetDialog_b__68_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  TerminalPramsManager_c *v4; // x0
  MissionNotifyManager_o *Instance; // x0
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4A5E2E2 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E2E2 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57DC9 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57DC9 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  v3->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_4A58546 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A58546 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MissionNotifyManager__StartPause(Instance, 0LL);
  if ( !byte_4A588D4 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588D4 = 1;
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
    sub_1B8880C(Instance, v6);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__60_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  if ( (byte_4A5E2E1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12963/*"StartQuestClearReward"*/);
    byte_4A5E2E1 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_12963/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__45_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A5E2E0 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E2E0 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__checkNew(
        BattleResultComponent_o *this,
        int32_t resultType,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleResultItemComponent_o *itemResult; // x0
  BattleDropItem_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x0
  BattleDropItem_o **v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  BattleDropItem_o *NewDrop; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v18; // w0
  Il2CppObject *Instance; // x21
  System_Action_o *v20; // x22
  __int64 *v21; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A5E2D1 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    sub_1B885B0(&Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__);
    sub_1B885B0(&BattleResultComponent___c__DisplayClass53_0_TypeInfo);
    sub_1B885B0(&StringLiteral_9623/*"OPEN"*/);
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    byte_4A5E2D1 = 1;
  }
  v5 = sub_1B887FC(BattleResultComponent___c__DisplayClass53_0_TypeInfo);
  BattleResultComponent___c__DisplayClass53_0___ctor((BattleResultComponent___c__DisplayClass53_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_33;
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v8, v9);
  BattleResultComponent__ResetTimeScale(v10);
  *(_QWORD *)(v5 + 16) = 0LL;
  v11 = (BattleDropItem_o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), 0, v12, v13);
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
      v18 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v7 = 0LL;
      if ( !v18 )
        goto LABEL_17;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_33;
LABEL_15:
      NewDrop = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, 0LL);
LABEL_16:
      v7 = NewDrop;
LABEL_17:
      *v11 = v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v7, v15, v16);
LABEL_18:
      if ( !*v11 )
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
          UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v25, v26);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_33;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v21 = &StringLiteral_9239/*"NEXT"*/;
          goto LABEL_32;
        }
LABEL_33:
        sub_1B8880C(itemResult, v7);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(
        v20,
        (Il2CppObject *)v5,
        Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_33;
      SummonAssetManager__LoadSummonAssets((SummonAssetManager_o *)Instance, v20, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_33;
      v21 = &StringLiteral_9623/*"OPEN"*/;
LABEL_32:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v21, 0LL);
      return;
    default:
      goto LABEL_18;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A5E2C2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12229/*"START_Begin"*/);
    byte_4A5E2C2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12229/*"START_Begin"*/, 0LL);
}


void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5E2C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E2C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_4A5E2D2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5489/*"END_PROC"*/);
    byte_4A5E2D2 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_1B8880C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5489/*"END_PROC"*/, 0LL);
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
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *Instance; // x23
  ServantRewardAction_o *Prefab; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5E2D5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4A5E2D5 = 1;
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
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v12, v13);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
                   (SummonAssetManager_o *)Instance,
                   (UnityEngine_Transform_o *)transform,
                   1,
                   0LL),
        *p_ServantRewardActionComp = Prefab,
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp,
          (int32_t)Prefab,
          v16,
          v17),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_34606596(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_14:
    sub_1B8880C(transform, v9);
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
  int32_t v18; // w2
  int32_t v19; // w3
  Il2CppObject *v20; // x25
  ServantRewardAction_o *Prefab; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  ServantRewardAction_o *v24; // x24
  void *monitor; // x25
  Il2CppClass *klass; // x26
  int32_t v27; // w25
  Il2CppObject v28; // q1
  int64_t v29; // x22
  Il2CppObject v30; // q1
  int64_t v31; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+50h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4A5E2D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
    byte_4A5E2D4 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_27;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_27;
  Entity = DataMasterBase_object__object__long___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             userSvtId,
             (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
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
    UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v18, v19);
  }
  v20 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v20 )
    goto LABEL_27;
  Prefab = SummonAssetManager__InstantiateSvtGetPrefab(
             (SummonAssetManager_o *)v20,
             (UnityEngine_Transform_o *)Instance,
             1,
             0LL);
  *p_ServantRewardActionComp = Prefab;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, (int32_t)Prefab, v22, v23);
  if ( !v16 )
    goto LABEL_27;
  v24 = *p_ServantRewardActionComp;
  klass = v16[5].klass;
  monitor = v16[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = klass;
  *(_QWORD *)&v35.fields.fakeValue = monitor;
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v35, 0LL);
  if ( isDoEffect )
  {
    v28 = v16[2];
    *(Il2CppObject *)&v34.fields.currentCryptoKey = v16[1];
    *(Il2CppObject *)&v34.fields.fakeValue = v28;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v33 = v34;
    v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v33, 0LL);
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                  (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[6],
                                  0LL);
    if ( v24 )
    {
      ServantRewardAction__Setup(v24, v27, v29, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_25;
    }
LABEL_27:
    sub_1B8880C(Instance, v12);
  }
  v30 = v16[2];
  *(Il2CppObject *)&v34.fields.currentCryptoKey = v16[1];
  *(Il2CppObject *)&v34.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v32 = v34;
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v32, 0LL);
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v16[6],
                                0LL);
  if ( !v24 )
    goto LABEL_27;
  ServantRewardAction__Setup(v24, v27, v31, (int32_t)Instance, 1, 1, 1, 2, 0LL);
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
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_1B8880C(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_1B8880C(0LL, flg);
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
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5E2D3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleResultComponent_endNewView__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_9623/*"OPEN"*/);
    sub_1B885B0(&StringLiteral_9239/*"NEXT"*/);
    byte_4A5E2D3 = 1;
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
      UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ServantRewardActionComp, 0, v16, v17);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_17;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v12 = &StringLiteral_9239/*"NEXT"*/;
      goto LABEL_16;
    }
LABEL_17:
    sub_1B8880C(Instance, v10);
  }
  v7 = Gift__IsEventSvtGet(type, 0LL);
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v7, v7, v8, v9);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_17;
  v12 = &StringLiteral_9623/*"OPEN"*/;
LABEL_16:
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
  int32_t v5; // w2
  int32_t v6; // w3
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_4A5E2E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5E2E6 = 1;
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
      sub_1B8880C(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v4, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E2E3 & 1) == 0 )
  {
    sub_1B885B0(&BattleResultComponent___c_TypeInfo);
    byte_4A5E2E3 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleResultComponent___c_TypeInfo->static_fields->__9 = (struct BattleResultComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleResultComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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

  if ( (byte_4A5E2E4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5E2E4 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  p_mQuestRewardInfos = (ServantStatusBattleListViewItem_o *)&v4->static_fields->mQuestRewardInfos;
  p_mQuestRewardInfos->klass = 0LL;
  sub_1B88554(p_mQuestRewardInfos, 0, v2, v3);
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
  if ( (byte_4A5E2E5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    this = (BattleResultComponent___c__DisplayClass53_0_o *)sub_1B885B0(&Method_BattleResultComponent_endNewView__);
    byte_4A5E2E5 = 1;
  }
  newDrop = v2->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsCommandCode_37688232(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4 = v2->fields.newDrop;
    if ( v4 )
    {
      userSvtId = v4->fields.userSvtId;
      _4__this = (Il2CppObject *)v2->fields.__4__this;
      v7 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v7, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v7, 0LL);
        return;
      }
    }
LABEL_12:
    sub_1B8880C(this, method);
  }
  v8 = v2->fields.newDrop;
  if ( !v8 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsEventSvtGet_37687888(v8->fields.type, 0LL);
  v9 = v2->fields.newDrop;
  if ( !v9 )
    goto LABEL_12;
  v10 = v9->fields.userSvtId;
  v11 = (Il2CppObject *)v2->fields.__4__this;
  v12 = (char)this;
  v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
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
      sub_1B88814(this, method);
    v6 = m_Items[v4];
    if ( !v6 )
      sub_1B8880C(this, method);
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