void __fastcall BattleResultComponent___ctor(BattleResultComponent_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleResultComponent__CheckRestItem(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleResultEventItemComponent_o *eventItemResult; // x0
  __int64 *v9; // x9

  if ( (byte_42E88BE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3154/*"CLOSE"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, v5, v6, v7);
    byte_42E88BE = 1;
  }
  eventItemResult = this->fields.eventItemResult;
  if ( !eventItemResult
    || (eventItemResult = (BattleResultEventItemComponent_o *)BattleResultEventItemComponent__isGetItems(
                                                                eventItemResult,
                                                                method),
        !this->fields.fsm) )
  {
    sub_B5D69C(eventItemResult, method);
  }
  if ( ((unsigned __int8)eventItemResult & 1) != 0 )
    v9 = &StringLiteral_9393/*"NEXT"*/;
  else
    v9 = &StringLiteral_3154/*"CLOSE"*/;
  PlayMakerFSM__SendEvent(this->fields.fsm, (System_String_o *)*v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__EndAddRewardAnimation(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *touchGuard; // x0
  UIWidget_o *nextButtonSpr; // x20
  int v7; // s0

  if ( (byte_42E88BB & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E88BB = 1;
  }
  touchGuard = this->fields.touchGuard;
  if ( !touchGuard
    || (UnityEngine_GameObject__SetActive(touchGuard, 0, 0LL),
        nextButtonSpr = (UIWidget_o *)this->fields.nextButtonSpr,
        *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL),
        !nextButtonSpr)
    || (UIWidget__set_color(nextButtonSpr, *(UnityEngine_Color_o *)&v7, 0LL),
        (touchGuard = (UnityEngine_GameObject_o *)this->fields.fsm) == 0LL) )
  {
    sub_B5D69C(touchGuard, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)touchGuard, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__EndResult(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  AndroidBackKeyManager_c *v20; // x0
  ServantAssetLoadManager_o *Instance; // x0
  __int64 v22; // x1
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20

  if ( (byte_42E88C5 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_22264/*"sendFsmEvent"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v17, v18, v19);
    byte_42E88C5 = 1;
  }
  v20 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v20 = AndroidBackKeyManager_TypeInfo;
  }
  v20->static_fields->ToastEnabled = 0;
  BattleResultComponent__ResetTimeScale((const MethodInfo *)v20);
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_B5D69C(Instance, v22);
  UnityEngine_GameObject__SendMessage_41595104(
    (UnityEngine_GameObject_o *)Instance,
    (System_String_o *)StringLiteral_22264/*"sendFsmEvent"*/,
    (Il2CppObject *)StringLiteral_5573/*"END_PROC"*/,
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
  if ( (byte_42E88C8 & 1) == 0 )
  {
    this = (BattleResultComponent_o *)sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, isDecide, boostId, method);
    byte_42E88C8 = 1;
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
      sub_B5D69C(0LL, v7);
    PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleResultComponent__Init(
        BattleResultComponent_o *this,
        System_Action_o *releasePerformanceObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *transform; // x21
  int v12; // s0
  UnityEngine_Object_o *eventFortificationItemResult; // x21
  const MethodInfo *v16; // x2
  UnityEngine_Object_o *battleRetryConfirmComponent; // x20
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct ScreenTouchInformationComponent_o *Component_srcLineSprite; // x0
  struct ScreenTouchInformationComponent_o **p_screenTouch; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E88AF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___,
      (_DWORD)releasePerformanceObject,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E88AF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_38;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_38;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v12, 0LL);
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
  BattleResultExpComponent__Init((BattleResultExpComponent_o *)gameObject, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.itemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultItemComponent__Init((BattleResultItemComponent_o *)gameObject, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventItemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v10);
  gameObject = (UnityEngine_GameObject_o *)this->fields.eventDamageItemResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v10);
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
    BattleResultEventItemComponent__Init((BattleResultEventItemComponent_o *)gameObject, v10);
  }
  gameObject = (UnityEngine_GameObject_o *)this->fields.friendResult;
  if ( !gameObject )
    goto LABEL_38;
  BattleResultFriendComponent__Init((BattleResultFriendComponent_o *)gameObject, releasePerformanceObject, v16);
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
    v20 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v20, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v21, v22, v23, v24, v25, v26);
  }
  gameObject = this->fields.obj_fronttouch;
  if ( !gameObject
    || (Component_srcLineSprite = (struct ScreenTouchInformationComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                gameObject,
                                                                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ScreenTouchInformationComponent___),
        this->fields.screenTouch = Component_srcLineSprite,
        p_screenTouch = &this->fields.screenTouch,
        sub_B5D560(
          (BattleServantConfConponent_o *)p_screenTouch,
          (System_Int32_array **)Component_srcLineSprite,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34),
        (gameObject = (UnityEngine_GameObject_o *)*(p_screenTouch - 11)) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL )
  {
LABEL_38:
    sub_B5D69C(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleResultComponent__IsDataLostBattle(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x1
  int v24; // w2
  __int64 v25; // x3
  EventDataLostBattleMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct BattleResultComponent_resultData_o *battleResult; // x8
  int32_t EventDataLostBattleId; // w0
  int32_t v30; // w20
  WarQuestSelectionMaster_o *v31; // x21
  UserEventDataLostEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E88CD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_EventDataLostBattleMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventDataLostMaster___, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&NetworkManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12404/*"SKIP"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, v20, v21, v22);
    byte_42E88CD = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (EventDataLostBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventDataLostBattleMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v23, v24, v25);
    byte_42E4B20 = 1;
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
  v30 = EventDataLostBattleId;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v31 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventDataLostMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v31 )
LABEL_31:
    sub_B5D69C(UserId, v23);
  if ( UserEventDataLostMaster__TryGetEntity((UserEventDataLostMaster_o *)v31, &entity, UserId, v30, 0LL) )
  {
    UserId = (int64_t)entity;
    if ( !entity )
      goto LABEL_31;
    if ( UserEventDataLostEntity__IsAllServantDataLost(entity, 0LL) )
    {
      UserId = (int64_t)this->fields.fsm;
      if ( !UserId )
        goto LABEL_31;
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)UserId, (System_String_o *)StringLiteral_9393/*"NEXT"*/, 0LL);
    }
  }
LABEL_29:
  UserId = (int64_t)this->fields.fsm;
  if ( !UserId )
    goto LABEL_31;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)UserId, (System_String_o *)StringLiteral_12404/*"SKIP"*/, 0LL);
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
    sub_B5D69C(obj_fronttouch, method);
  }
  BattleResultBondsComponent__Open((BattleResultBondsComponent_o *)obj_fronttouch, 0LL);
}


void __fastcall BattleResultComponent__OpenDataLostBattleResetDialog(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _DWORD *monitor; // x8
  int32_t v15; // w20
  TerminalPramsManager_c *v16; // x0
  int32_t WarId_k__BackingField; // w21
  System_Action_o *v18; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_42E88CE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, v5, v6, v7);
    sub_B5D5C4(&DataLostResetManager_TypeInfo, v8, v9, v10);
    this = (BattleResultComponent_o *)sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E88CE = 1;
  }
  monitor = v4[9].monitor;
  if ( !monitor )
    sub_B5D69C(this, method);
  v15 = monitor[5];
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B20 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v18, v4, Method_BattleResultComponent__OpenDataLostBattleResetDialog_b__68_0__, 0LL);
  if ( (BYTE3(DataLostResetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !DataLostResetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataLostResetManager_TypeInfo);
  }
  DataLostResetManager__OpenBattleResultResetDialog(v15, WarId_k__BackingField, v18, 0LL);
}


void __fastcall BattleResultComponent__OpenEventDamageItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  const MethodInfo *v9; // x1
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x8
  UserEventRaidMaster_o *usrEvent; // x0

  if ( (byte_42E88BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12404/*"SKIP"*/, v5, v6, v7);
    byte_42E88BF = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v9) )
    {
      Instance = (CommonUI_o *)this->fields.eventDamageItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v9);
        return;
      }
LABEL_19:
      sub_B5D69C(Instance, v9);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12404/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventFortificationItems(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  CommonUI_o *Instance; // x0
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *eventFortificationItemResult; // x20

  if ( (byte_42E88CC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_12404/*"SKIP"*/, v8, v9, v10);
    byte_42E88CC = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
           v12) )
    {
      Instance = (CommonUI_o *)this->fields.eventFortificationItemResult;
      if ( Instance )
      {
        BattleResultEventItemComponent__OpenEventFortification((BattleResultEventItemComponent_o *)Instance, v12);
        return;
      }
LABEL_22:
      sub_B5D69C(Instance, v12);
    }
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_22;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12404/*"SKIP"*/, 0LL);
}


void __fastcall BattleResultComponent__OpenEventItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  const MethodInfo *v9; // x1

  if ( (byte_42E88BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_12404/*"SKIP"*/, v5, v6, v7);
    byte_42E88BD = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
  if ( BattleResultEventItemComponent__isGetItems((BattleResultEventItemComponent_o *)Instance, v9) )
  {
    Instance = (CommonUI_o *)this->fields.eventItemResult;
    if ( Instance )
    {
      BattleResultEventItemComponent__Open((BattleResultEventItemComponent_o *)Instance, v9);
      return;
    }
LABEL_14:
    sub_B5D69C(Instance, v9);
  }
  Instance = (CommonUI_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_14;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_12404/*"SKIP"*/, 0LL);
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
    sub_B5D69C(obj_fronttouch, method);
  }
  BattleResultExpComponent__Open((BattleResultExpComponent_o *)obj_fronttouch, method);
}


void __fastcall BattleResultComponent__OpenFollowerSceneForRetry(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  int v31; // w2
  __int64 v32; // x3
  TerminalPramsManager_c *v33; // x0
  int32_t QuestId_k__BackingField; // w21
  QuestEntity_o *Entity; // x22
  MapControl_QuestInfo_o *v36; // x20
  int32_t questId; // w23
  int v38; // w2
  __int64 v39; // x3
  bool IsQuestClear_25877652; // w23
  int32_t CampaignCostCalcValue; // w21
  int32_t ActConsume; // w0
  int32_t v43; // w22
  int v44; // w2
  __int64 v45; // x3
  clsQuestCheck_o *v46; // x21
  TerminalPramsManager_c *v47; // x0
  const MethodInfo *v48; // x2
  int32_t fixedVal; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E88C9 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, boostId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v8, v9, v10);
    sub_B5D5C4(&MapControl_QuestInfo_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v26, v27, v28);
    byte_42E88C9 = 1;
  }
  fixedVal = 0;
  SkillLvMaster__ResetBaseTime(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  BYTE4(Instance[1].klass) = 1;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v30, v31, v32);
    byte_42E4B33 = 1;
  }
  v33 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v33 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v33->static_fields->_QuestId_k__BackingField;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Instance )
    goto LABEL_46;
  Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                              (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                              QuestId_k__BackingField,
                              (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  v36 = (MapControl_QuestInfo_o *)sub_B5D694(MapControl_QuestInfo_TypeInfo);
  MapControl_QuestInfo___ctor(v36, 0LL);
  if ( !v36 )
    goto LABEL_46;
  MapControl_QuestInfo__SetTerminalParamsValue(v36, 0LL);
  questId = v36->fields.questId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25877652 = CondType__IsQuestClear_25877652(questId, -1, 0, 0LL);
  fixedVal = -1;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v30, v38, v39);
    byte_42E4B34 = 1;
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
                            !IsQuestClear_25877652,
                            &fixedVal,
                            0LL);
  v36->fields._fixedCostVal_k__BackingField = fixedVal;
  ActConsume = QuestEntity__getActConsume(Entity, CampaignCostCalcValue, 0LL);
  v36->fields.costCalcVal = CampaignCostCalcValue;
  if ( fixedVal >= 0 )
    v43 = fixedVal;
  else
    v43 = ActConsume;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v46 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E5CCF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v30, v44, v45);
    byte_42E5CCF = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v46 )
    goto LABEL_46;
  if ( !clsQuestCheck__CheckQuestPlayable(v46, v36, (int64_t)Instance[1].fields.saveNameList[3].monitor, boostId, 0LL) )
    return;
  v47 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v47 = TerminalPramsManager_TypeInfo;
  }
  v47->static_fields->lastPlayQuestConsumeAp = v43;
  TerminalPramsManager__LastPlayQuestConsumeApSave_SaveData(0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
LABEL_46:
    sub_B5D69C(Instance, v30);
  LODWORD(Instance[1].monitor) = 1;
  BattleResultComponent__PushFollowerScene((BattleResultComponent_o *)Instance, boostId, v48);
}


void __fastcall BattleResultComponent__OpenFriend(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleResultComponent_resultData_o *battleResult; // x0
  const MethodInfo *v12; // x0

  if ( (byte_42E88BC & 1) == 0 )
  {
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_13204/*"StartQuestClearReward"*/, v8, v9, v10);
    byte_42E88BC = 1;
  }
  battleResult = this->fields.battleResult;
  if ( !battleResult )
    goto LABEL_13;
  if ( BattleResultComponent_resultData__checkResultDispFlag(battleResult, 2048, 0LL) )
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_13204/*"StartQuestClearReward"*/,
      0.3,
      0LL);
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(1, 0LL);
  battleResult = (BattleResultComponent_resultData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !battleResult
    || (CommonUI__CloseNotificationDialog((CommonUI_o *)battleResult, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.obj_fronttouch) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)battleResult, 0, 0LL),
        (battleResult = (BattleResultComponent_resultData_o *)this->fields.friendResult) == 0LL) )
  {
LABEL_13:
    sub_B5D69C(battleResult, method);
  }
  BattleResultFriendComponent__Open((BattleResultFriendComponent_o *)battleResult, method);
  BattleResultComponent__ResetTimeScale(v12);
}


void __fastcall BattleResultComponent__OpenItems(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_String_o *eventEndTitle; // x8
  WebViewManager_o *Instance; // x0
  System_String_o *v13; // x20
  System_String_o *eventEndMessage; // x21
  CommonUI_o *v15; // x22
  NotificationDialog_ClickDelegate_o *v16; // x23
  UnityEngine_Component_o *resultSprite; // x0

  if ( (byte_42E88B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultComponent_endCloseEndEventMessage__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9, v10);
    byte_42E88B5 = 1;
  }
  eventEndTitle = this->fields.eventEndTitle;
  if ( eventEndTitle && eventEndTitle->fields.m_stringLength >= 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = this->fields.eventEndTitle;
    eventEndMessage = this->fields.eventEndMessage;
    v15 = (CommonUI_o *)Instance;
    v16 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
    NotificationDialog_ClickDelegate___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattleResultComponent_endCloseEndEventMessage__,
      0LL);
    if ( !v15 )
      goto LABEL_13;
    CommonUI__OpenNotificationDialog_18204284(
      v15,
      v13,
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
    sub_B5D69C(resultSprite, method);
  }
  BattleResultItemComponent__Open((BattleResultItemComponent_o *)resultSprite, method);
}


void __fastcall BattleResultComponent__OpenRetryQuest(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleRetryConfirmComponent_o *battleRetryConfirmComponent; // x0
  BattleRetryConfirmComponent_o *v15; // x20
  BattleWindowComponent_EndCall_o *v16; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x19

  if ( (byte_42E88C6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleResultComponent__OpenRetryQuest_b__60_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattleWindowComponent_EndCall_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleLogic___, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E88C6 = 1;
  }
  battleRetryConfirmComponent = this->fields.battleRetryConfirmComponent;
  if ( !battleRetryConfirmComponent )
    goto LABEL_16;
  if ( BattleRetryConfirmComponent__SetValues(battleRetryConfirmComponent, 0LL) )
  {
    v15 = this->fields.battleRetryConfirmComponent;
    v16 = (BattleWindowComponent_EndCall_o *)sub_B5D694(BattleWindowComponent_EndCall_TypeInfo);
    BattleWindowComponent_EndCall___ctor(
      v16,
      (Il2CppObject *)this,
      Method_BattleResultComponent__OpenRetryQuest_b__60_0__,
      0LL);
    if ( !v15 )
      goto LABEL_16;
    BattleRetryConfirmComponent__Open(v15, v16, 0LL);
  }
  battleRetryConfirmComponent = (BattleRetryConfirmComponent_o *)this->fields.endtargetObject;
  if ( !battleRetryConfirmComponent )
LABEL_16:
    sub_B5D69C(battleRetryConfirmComponent, method);
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      (UnityEngine_GameObject_o *)battleRetryConfirmComponent,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleLogic___);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleEventTutorial_o *eventTutorial; // x0
  BattleEventTutorial_o *v12; // x20
  System_Action_o *v13; // x21
  BattleEventTutorial_o *v14; // x20
  System_Action_o *v15; // x21
  BattleEventTutorial_o *v16; // x20
  System_Action_o *v17; // x21

  if ( (byte_42E88B4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleResultComponent_OpenTutorial__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v8, v9, v10);
    byte_42E88B4 = 1;
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
  v12 = this->fields.eventTutorial;
  if ( ((unsigned __int8)eventTutorial & 1) != 0 )
  {
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
    if ( v12 )
    {
      BattleEventTutorial__callResult(v12, v13, 0LL);
      return;
    }
LABEL_23:
    sub_B5D69C(eventTutorial, method);
  }
  if ( !v12 )
    goto LABEL_23;
  if ( BattleEventTutorial__isResultWin(this->fields.eventTutorial, 0LL) )
  {
    eventTutorial = (BattleEventTutorial_o *)this->fields.battleResult;
    if ( !eventTutorial )
      goto LABEL_23;
    if ( BattleResultComponent_resultData__isWin((BattleResultComponent_resultData_o *)eventTutorial, 0LL) )
    {
      v14 = this->fields.eventTutorial;
      v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleResultComponent_OpenTutorial__, 0LL);
      if ( !v14 )
        goto LABEL_23;
      BattleEventTutorial__callResultWin(v14, v15, 0LL);
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
    v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)eventTutorial, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
  }
}


void __fastcall BattleResultComponent__PushFollowerScene(
        BattleResultComponent_o *this,
        int32_t boostId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  const MethodInfo *v17; // x0
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  TerminalPramsManager_c *v21; // x0
  int32_t WarId_k__BackingField; // w21
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w20
  BattleSetupInfo_o *v25; // x23
  Il2CppObject *Instance; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x20

  if ( (byte_42E88CA & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, boostId, (_DWORD)method, v3);
    sub_B5D5C4(&RandomLimitCountManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SoundManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    byte_42E88CA = 1;
  }
  if ( (BYTE3(RandomLimitCountManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !RandomLimitCountManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RandomLimitCountManager_TypeInfo);
  }
  RandomLimitCountManager__set_EnableRandomLimitCount(0, 0LL);
  BattleResultComponent__ResetTimeScale(v17);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopVoiceAll(0.8, 0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    byte_42E4B20 = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v21->static_fields->_WarId_k__BackingField;
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    v21 = TerminalPramsManager_TypeInfo;
    byte_42E4B33 = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v21->static_fields->_QuestId_k__BackingField;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v18, v19, v20);
    v21 = TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v21->static_fields->_PhaseCnt_k__BackingField;
  v25 = (BattleSetupInfo_o *)sub_B5D694(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_33;
  Instance = (Il2CppObject *)BattleSetupInfo__ConvertBattleSetupInfo(
                               v25,
                               WarId_k__BackingField,
                               QuestId_k__BackingField,
                               PhaseCnt_k__BackingField,
                               0,
                               0,
                               0,
                               0LL);
  v28 = Instance;
  if ( boostId )
  {
    if ( !Instance )
      goto LABEL_33;
    LODWORD(Instance[3].monitor) = boostId;
  }
  Instance = (Il2CppObject *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
LABEL_33:
    sub_B5D69C(Instance, v27);
  AvalonSceneManager__pushScene((AvalonSceneManager_o *)Instance, 35, 1, v28, 0LL);
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
    sub_B5D69C(this, method);
  }
  UILabel__set_text((UILabel_o *)this, v6->fields.ultimateNowQpText, 0LL);
}


void __fastcall BattleResultComponent__ResetPlayScreenTouch(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *screenTouch; // x20
  __int64 v6; // x1
  ScreenTouchInformationComponent_o *v7; // x0

  if ( (byte_42E88B2 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88B2 = 1;
  }
  screenTouch = (UnityEngine_Object_o *)this->fields.screenTouch;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(screenTouch, 0LL, 0LL) )
  {
    v7 = this->fields.screenTouch;
    if ( !v7 || (ScreenTouchInformationComponent__ResetPlayScale(v7, 0LL), (v7 = this->fields.screenTouch) == 0LL) )
      sub_B5D69C(v7, v6);
    ScreenTouchInformationComponent__ResetPlayAlpha(v7, 0LL);
  }
}


void __fastcall BattleResultComponent__ResetTimeScale(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E88CB & 1) == 0 )
  {
    sub_B5D5C4(&BattlePerformance_TypeInfo, v1, v2, v3);
    byte_42E88CB = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  UnityEngine_GameObject_o *gameObject; // x20
  UnityEngine_GameObject_o *v42; // x19
  __int64 v43; // x0
  __int64 v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Object_array *v51; // x20
  __int64 v52; // x0
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x21
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Int32_array **v74; // x21
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x1
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **v109; // x1
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x21
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_Int32_array **v123; // x1
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_Int32_array **v130; // x21
  System_String_array **v131; // x2
  System_String_array **v132; // x3
  System_Boolean_array **v133; // x4
  System_Int32_array **v134; // x5
  System_Int32_array *v135; // x6
  System_Int32_array *v136; // x7
  System_Int32_array **v137; // x1
  System_String_array **v138; // x2
  System_String_array **v139; // x3
  System_Boolean_array **v140; // x4
  System_Int32_array **v141; // x5
  System_Int32_array *v142; // x6
  System_Int32_array *v143; // x7
  System_Int32_array **v144; // x21
  System_Collections_Hashtable_o *v145; // x0
  __int64 v146; // x0
  __int64 v147; // x0
  int v148; // [xsp+Ch] [xbp-34h] BYREF
  int v149; // [xsp+10h] [xbp-30h] BYREF
  int v150; // [xsp+14h] [xbp-2Ch] BYREF
  int v151; // [xsp+18h] [xbp-28h] BYREF
  int v152; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_42E88B8 & 1) == 0 )
  {
    sub_B5D5C4(&iTween_EaseType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&object___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&float_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_12780/*"ScrollBarMotionCompleteValue"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_12781/*"ScrollBarMotionUpdateValue"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_18340/*"easeType"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v35, v36, v37);
    sub_B5D5C4(&iTween_TypeInfo, v38, v39, v40);
    byte_42E88B8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v43 = sub_B5D5DC(object___TypeInfo, 14LL);
  if ( !v43 )
    sub_B5D69C(0LL, v44);
  v51 = (System_Object_array *)v43;
  v52 = StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    v52 = sub_B5D684(StringLiteral_19153/*"from"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v53 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( !v51->max_length )
    goto LABEL_68;
  v51->m_Items[0] = (Il2CppObject *)v53;
  sub_B5D560((BattleServantConfConponent_o *)v51->m_Items, v53, v45, v46, v47, v48, v49, v50);
  v152 = 0;
  v52 = j_il2cpp_value_box_0(float_TypeInfo, &v152);
  v60 = (System_Int32_array **)v52;
  if ( v52 )
  {
    v52 = sub_B5D684(v52, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
  }
  if ( v51->max_length <= 1 )
    goto LABEL_68;
  v51->m_Items[1] = (Il2CppObject *)v60;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[1], v60, v54, v55, v56, v57, v58, v59);
  v52 = StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    v52 = sub_B5D684(StringLiteral_23019/*"to"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v67 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
  }
  else
  {
    v67 = 0LL;
  }
  if ( v51->max_length <= 2 )
    goto LABEL_68;
  v51->m_Items[2] = (Il2CppObject *)v67;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[2], v67, v61, v62, v63, v64, v65, v66);
  v151 = 1065353216;
  v52 = j_il2cpp_value_box_0(float_TypeInfo, &v151);
  v74 = (System_Int32_array **)v52;
  if ( v52 )
  {
    v52 = sub_B5D684(v52, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
  }
  if ( v51->max_length <= 3 )
    goto LABEL_68;
  v51->m_Items[3] = (Il2CppObject *)v74;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[3], v74, v68, v69, v70, v71, v72, v73);
  v52 = StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    v52 = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v81 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v81 = 0LL;
  }
  if ( v51->max_length <= 4 )
    goto LABEL_68;
  v51->m_Items[4] = (Il2CppObject *)v81;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[4], v81, v75, v76, v77, v78, v79, v80);
  v52 = StringLiteral_12781/*"ScrollBarMotionUpdateValue"*/;
  if ( StringLiteral_12781/*"ScrollBarMotionUpdateValue"*/ )
  {
    v52 = sub_B5D684(StringLiteral_12781/*"ScrollBarMotionUpdateValue"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v88 = (System_Int32_array **)StringLiteral_12781/*"ScrollBarMotionUpdateValue"*/;
  }
  else
  {
    v88 = 0LL;
  }
  if ( v51->max_length <= 5 )
    goto LABEL_68;
  v51->m_Items[5] = (Il2CppObject *)v88;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[5], v88, v82, v83, v84, v85, v86, v87);
  v52 = StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    v52 = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v95 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v95 = 0LL;
  }
  if ( v51->max_length <= 6 )
    goto LABEL_68;
  v51->m_Items[6] = (Il2CppObject *)v95;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[6], v95, v89, v90, v91, v92, v93, v94);
  v52 = StringLiteral_12780/*"ScrollBarMotionCompleteValue"*/;
  if ( StringLiteral_12780/*"ScrollBarMotionCompleteValue"*/ )
  {
    v52 = sub_B5D684(StringLiteral_12780/*"ScrollBarMotionCompleteValue"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v102 = (System_Int32_array **)StringLiteral_12780/*"ScrollBarMotionCompleteValue"*/;
  }
  else
  {
    v102 = 0LL;
  }
  if ( v51->max_length <= 7 )
    goto LABEL_68;
  v51->m_Items[7] = (Il2CppObject *)v102;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[7], v102, v96, v97, v98, v99, v100, v101);
  v52 = StringLiteral_18340/*"easeType"*/;
  if ( StringLiteral_18340/*"easeType"*/ )
  {
    v52 = sub_B5D684(StringLiteral_18340/*"easeType"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v109 = (System_Int32_array **)StringLiteral_18340/*"easeType"*/;
  }
  else
  {
    v109 = 0LL;
  }
  if ( v51->max_length <= 8 )
    goto LABEL_68;
  v51->m_Items[8] = (Il2CppObject *)v109;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[8], v109, v103, v104, v105, v106, v107, v108);
  v150 = 17;
  v52 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v150);
  v116 = (System_Int32_array **)v52;
  if ( v52 )
  {
    v52 = sub_B5D684(v52, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
  }
  if ( v51->max_length <= 9 )
    goto LABEL_68;
  v51->m_Items[9] = (Il2CppObject *)v116;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[9], v116, v110, v111, v112, v113, v114, v115);
  v52 = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    v52 = sub_B5D684(StringLiteral_22982/*"time"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v123 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v123 = 0LL;
  }
  if ( v51->max_length <= 0xA )
    goto LABEL_68;
  v51->m_Items[10] = (Il2CppObject *)v123;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[10], v123, v117, v118, v119, v120, v121, v122);
  v149 = 1065353216;
  v52 = j_il2cpp_value_box_0(float_TypeInfo, &v149);
  v130 = (System_Int32_array **)v52;
  if ( v52 )
  {
    v52 = sub_B5D684(v52, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
  }
  if ( v51->max_length <= 0xB )
    goto LABEL_68;
  v51->m_Items[11] = (Il2CppObject *)v130;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[11], v130, v124, v125, v126, v127, v128, v129);
  v52 = StringLiteral_18173/*"delay"*/;
  if ( StringLiteral_18173/*"delay"*/ )
  {
    v52 = sub_B5D684(StringLiteral_18173/*"delay"*/, v51->obj.klass->_1.element_class);
    if ( !v52 )
      goto LABEL_69;
    v137 = (System_Int32_array **)StringLiteral_18173/*"delay"*/;
  }
  else
  {
    v137 = 0LL;
  }
  if ( v51->max_length <= 0xC )
    goto LABEL_68;
  v51->m_Items[12] = (Il2CppObject *)v137;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[12], v137, v131, v132, v133, v134, v135, v136);
  v148 = 0;
  v52 = j_il2cpp_value_box_0(float_TypeInfo, &v148);
  v144 = (System_Int32_array **)v52;
  if ( v52 )
  {
    v52 = sub_B5D684(v52, v51->obj.klass->_1.element_class);
    if ( !v52 )
    {
LABEL_69:
      v147 = sub_B5D6BC(v52);
      sub_B5D668(v147, 0LL);
    }
  }
  if ( v51->max_length <= 0xD )
  {
LABEL_68:
    v146 = sub_B5D6C8(v52);
    sub_B5D668(v146, 0LL);
  }
  v51->m_Items[13] = (Il2CppObject *)v144;
  sub_B5D560((BattleServantConfConponent_o *)&v51->m_Items[13], v144, v138, v139, v140, v141, v142, v143);
  v145 = iTween__Hash(v51, 0LL);
  iTween__ValueTo(v42, v145, 0LL);
}


void __fastcall BattleResultComponent__ScrollBarMotionCompleteValue(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleResultItemComponent_o *itemResult; // x20
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2

  v4 = this;
  if ( (byte_42E88BA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__, v5, v6, v7);
    this = (BattleResultComponent_o *)sub_B5D5C4(
                                        &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                        v8,
                                        v9,
                                        v10);
    byte_42E88BA = 1;
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
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v4,
    Method_BattleResultComponent__ScrollBarMotionCompleteValue_b__45_0__,
    0LL);
  if ( !itemResult )
LABEL_11:
    sub_B5D69C(this, method);
  BattleResultItemComponent__StartPresenterAnimation(itemResult, v14, v15);
}


void __fastcall BattleResultComponent__ScrollBarMotionUpdateValue(
        BattleResultComponent_o *this,
        float value,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  UIProgressBar_o *resultItemScrollBar; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x1

  if ( (byte_42E88B9 & 1) == 0 )
  {
    sub_B5D5C4(&iTween_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E88B9 = 1;
  }
  resultItemScrollBar = (UIProgressBar_o *)this->fields.resultItemScrollBar;
  if ( !resultItemScrollBar )
    sub_B5D69C(0LL, method);
  UIProgressBar__set_value(resultItemScrollBar, value, 0LL);
  if ( this->fields.isAddRewardEffectSkip )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__Stop_43300928(gameObject, 0LL);
    BattleResultComponent__ScrollBarMotionCompleteValue(this, v9);
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  System_Int32_array **v80; // x1
  BattleResultComponent_o **p_battleResult; // x21
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  int v88; // w2
  __int64 v89; // x3
  TerminalPramsManager_c *v90; // x0
  int32_t BeforeEventActivityPoint_k__BackingField; // w26
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int32_t UsedEventMasterSkillEventActivityPoint; // w19
  TerminalPramsManager_c *v96; // x0
  int32_t v97; // w19
  BalanceConfig_c *v98; // x0
  int32_t UserEventActivityPointMax; // w19
  TerminalPramsManager_c *v100; // x0
  BattleResultComponent_o *v101; // x8
  System_Collections_Generic_IEnumerable_TSource__o *battleRetryConfirmComponent; // x0
  BattleResultComponent_o *v103; // x26
  BattleResultComponent___c_c *v104; // x8
  struct BattleResultComponent___c_StaticFields *static_fields; // x9
  System_Converter_int__string__o *_9__34_0; // x19
  Il2CppObject *v107; // x20
  struct BattleResultComponent___c_StaticFields *v108; // x0
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_String_array *v115; // x0
  System_String_o *v116; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ServantRewardActionComp; // x0
  BattleResultComponent_o *v118; // x26
  BattleResultComponent___c_c *v119; // x8
  struct BattleResultComponent___c_StaticFields *v120; // x9
  System_Converter_int__string__o *_9__34_1; // x19
  Il2CppObject *v122; // x20
  struct BattleResultComponent___c_StaticFields *v123; // x0
  System_String_array **v124; // x2
  System_String_array **v125; // x3
  System_Boolean_array **v126; // x4
  System_Int32_array **v127; // x5
  System_Int32_array *v128; // x6
  System_Int32_array *v129; // x7
  System_String_array *v130; // x0
  System_String_o *v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **endtargetObject; // x1
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  struct BattleResultComponent_resultData_o *v145; // x8
  System_Int32_array **eventEndMessage; // x1
  struct BattleResultComponent_resultData_o *v147; // x8
  bool isTrialQuestNewRecord; // w19
  QuestKnockdownResult_o *v149; // x26
  BattleResultComponent_resultData_o *v150; // x8
  struct BattleResultExpComponent_o *expResult; // x8
  EventBuddyPointMaster_o *Master_WarQuestSelectionMaster; // x19
  int32_t v153; // w20
  int32_t QuestId; // w23
  bool v155; // w8
  BattleResultComponent_resultData_o *v156; // x9
  struct BattleInfoData_o *battle_info; // x10
  struct BattleResultEventDamageItemComponent_o *eventDamageItemResult; // x9
  struct BattleResultComponent_o *parentComp; // x8
  struct BattleResultFriendComponent_o *friendResult; // x10
  struct BattleResultComponent_o *v161; // x11
  struct BattleResultEventDamageItemComponent_o *v162; // x9
  struct BattleResultComponent_o *v163; // x8
  QuestEntity_o *quest_ent; // x8
  BattleResultItemComponent_o *itemResult; // x25
  int32_t obj_basebg; // w27
  int32_t obj_basebg_high; // w28
  struct BattleResultFriendComponent_o *v168; // x19
  int32_t FriendIconPrefab_high; // w20
  struct UISprite_o *resultSprite; // x23
  struct BattleEventTutorial_o *eventTutorial; // x24
  int32_t firstClearRewardQp; // w26
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  BattleResultComponent_o *v179; // x8
  struct BattleResultItemComponent_o *v180; // x9
  struct UILabel_o *getQpLabel; // x9
  System_Int32_array **mText; // x1
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  struct BattleResultItemComponent_o *v189; // x8
  struct UILabel_o *nowQpLabel; // x8
  struct BattleResultComponent_resultData_o *v191; // x9
  System_Int32_array **v192; // x1
  __int64 v193; // x8
  Il2CppObject *v194; // x0
  struct BattleResultItemComponent_o *v195; // x8
  Il2CppObject *v196; // x20
  UILabel_o *v197; // x19
  System_String_o *v198; // x0
  struct BattleResultItemComponent_o *v199; // x8
  __int64 v200; // x9
  UILabel_o *v201; // x19
  Il2CppObject *v202; // x0
  UIWidget_o *nextButtonSpr; // x19
  int v204; // s0
  BattleResultFriendComponent_o *v208; // x19
  int32_t bondsResult; // w20
  int32_t bondsResult_high; // w23
  int64_t obj_fronttouch; // x24
  int32_t v212; // w25
  int32_t expResult_high; // w26
  const MethodInfo *v214; // x7
  struct BattleResultComponent_resultData_o *v215; // x8
  struct BattleResultComponent_resultData_o *v216; // x8
  UnityEngine_Object_o *eventFortificationItemResult; // x19
  struct BattleResultComponent_resultData_o *v218; // x8
  const MethodInfo *v219; // x2
  struct BattleResultComponent_resultData_o *v220; // x8
  struct BattleInfoData_o *v221; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x19
  int max_length; // w8
  __int64 v225; // x20
  char v226; // w22
  BattleResultComponent_o *v227; // x19
  int32_t v228; // w20
  int32_t EventProgressValueSaveData_27093960; // w0
  int v230; // w2
  __int64 v231; // x3
  int v232; // w8
  TerminalPramsManager_c *v233; // x0
  struct UnityEngine_GameObject_o *v234; // x8
  bool isWin; // w19
  __int64 v236; // x0
  BattleResultComponent_resultData_o *battleResult; // [xsp+0h] [xbp-100h]
  const MethodInfo *v238; // [xsp+40h] [xbp-C0h]
  struct UISprite_o *v239; // [xsp+48h] [xbp-B8h]
  struct BattleResultEventItemComponent_o *eventItemResult; // [xsp+50h] [xbp-B0h]
  int32_t eventId; // [xsp+5Ch] [xbp-A4h]
  UserGameEntity_o *oldGame; // [xsp+60h] [xbp-A0h]
  struct BattleResultComponent_resultData_o *v243; // [xsp+68h] [xbp-98h]
  System_Int32_array *v244; // [xsp+70h] [xbp-90h]
  BattleData_o *v245; // [xsp+78h] [xbp-88h]
  BattleResultComponent_resultData_array *v246; // [xsp+80h] [xbp-80h]
  BattleResultComponent_o **p_eventTutorial; // [xsp+88h] [xbp-78h]
  unsigned int v248; // [xsp+90h] [xbp-70h] BYREF
  int v249; // [xsp+98h] [xbp-68h] BYREF
  int v250; // [xsp+9Ch] [xbp-64h] BYREF
  EventBuddyPointEntity_o *entity; // [xsp+A0h] [xbp-60h] BYREF
  UnityEngine_Color32_o v252; // 0:x0.8
  UnityEngine_Color32_o v253; // 0:x0.8

  battleData = bData;
  v12 = resultList;
  v13 = this;
  if ( (byte_42E88B3 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)resultList, (_DWORD)tutorial, resultAsset);
    sub_B5D5C4(&Method_System_Converter_int__string___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Converter_int__string__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventBuddyPointMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventProgressValueMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v29, v30, v31);
    sub_B5D5C4(&EventInfoUIProgressControl_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&int_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ConvertAll_string___, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v41, v42, v43);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&QuestKnockdownResult_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v53, v54, v55);
    sub_B5D5C4(&Method_BattleResultComponent___c__Set_b__34_0__, v56, v57, v58);
    sub_B5D5C4(&Method_BattleResultComponent___c__Set_b__34_1__, v59, v60, v61);
    sub_B5D5C4(&BattleResultComponent___c_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_19127/*"freeShopIds"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_11255/*"RESULT_QP_PLUS"*/, v68, v69, v70);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v71, v72, v73);
    sub_B5D5C4(&StringLiteral_22107/*"returnRarePriShopIds"*/, v74, v75, v76);
    this = (BattleResultComponent_o *)sub_B5D5C4(&StringLiteral_707/*","*/, v77, v78, v79);
    byte_42E88B3 = 1;
  }
  entity = 0LL;
  if ( !v12 )
    goto LABEL_224;
  if ( !v12->max_length )
    goto LABEL_225;
  v80 = (System_Int32_array **)v12->m_Items[0];
  v13->fields.battleResult = (struct BattleResultComponent_resultData_o *)v80;
  p_battleResult = (BattleResultComponent_o **)&v13->fields.battleResult;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v13->fields.battleResult,
    v80,
    (System_String_array **)tutorial,
    (System_String_array **)resultAsset,
    (System_Boolean_array **)viewGroupIds,
    (System_Int32_array **)bData,
    (System_Int32_array *)method,
    v7);
  v13->fields.eventTutorial = tutorial;
  p_eventTutorial = (BattleResultComponent_o **)&v13->fields.eventTutorial;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v13->fields.eventTutorial,
    (System_Int32_array **)tutorial,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
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
      if ( !byte_42E5CD2 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)resultList, v88, v89);
        byte_42E5CD2 = 1;
      }
      v90 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v90 = TerminalPramsManager_TypeInfo;
      }
      BeforeEventActivityPoint_k__BackingField = v90->static_fields->_BeforeEventActivityPoint_k__BackingField;
      UsedEventMasterSkillEventActivityPoint = BattleData__getUsedEventMasterSkillEventActivityPoint(battleData, 0LL);
      if ( !byte_42E5CB7 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v92, v93, v94);
        byte_42E5CB7 = 1;
      }
      v96 = TerminalPramsManager_TypeInfo;
      v97 = UsedEventMasterSkillEventActivityPoint + BeforeEventActivityPoint_k__BackingField;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v96 = TerminalPramsManager_TypeInfo;
      }
      v96->static_fields->_BeforeEventActivityPoint_k__BackingField = v97;
      v98 = BalanceConfig_TypeInfo;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v98 = BalanceConfig_TypeInfo;
      }
      UserEventActivityPointMax = v98->static_fields->UserEventActivityPointMax;
      if ( !byte_42E5CD2 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v92, v93, v94);
        byte_42E5CD2 = 1;
      }
      v100 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v100 = TerminalPramsManager_TypeInfo;
      }
      if ( v100->static_fields->_BeforeEventActivityPoint_k__BackingField > UserEventActivityPointMax )
      {
        if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v100);
        if ( !byte_42E5CB7 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v92, v93, v94);
          byte_42E5CB7 = 1;
        }
        v100 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v100 = TerminalPramsManager_TypeInfo;
        }
        v100->static_fields->_BeforeEventActivityPoint_k__BackingField = UserEventActivityPointMax;
      }
      if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v100);
      TerminalPramsManager__TerminalEventActivityPointInfoSave_SaveData(0LL);
    }
  }
  v101 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  battleRetryConfirmComponent = (System_Collections_Generic_IEnumerable_TSource__o *)v101[1].fields.battleRetryConfirmComponent;
  if ( battleRetryConfirmComponent )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        battleRetryConfirmComponent,
                                        (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v103 = this;
    v104 = BattleResultComponent___c_TypeInfo;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v104 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v104->static_fields;
    _9__34_0 = static_fields->__9__34_0;
    if ( !_9__34_0 )
    {
      if ( (BYTE3(v104->vtable._0_Equals.methodPtr) & 4) != 0 && !v104->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v104);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v107 = (Il2CppObject *)static_fields->__9;
      _9__34_0 = (System_Converter_int__string__o *)sub_B5D694(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__34_0,
        v107,
        Method_BattleResultComponent___c__Set_b__34_0__,
        (const MethodInfo_23F69D4 *)Method_System_Converter_int__string___ctor__);
      v108 = BattleResultComponent___c_TypeInfo->static_fields;
      v108->__9__34_0 = _9__34_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v108->__9__34_0,
        (System_Int32_array **)_9__34_0,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114);
    }
    if ( !v103 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                        (System_Collections_Generic_List_int__o *)v103,
                                        (System_Converter_T__TOutput__o *)_9__34_0,
                                        (const MethodInfo_192DF90 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_224;
    v115 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
    v116 = System_String__Join((System_String_o *)StringLiteral_707/*","*/, v115, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_19127/*"freeShopIds"*/, v116, 0LL);
    v101 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
  }
  ServantRewardActionComp = (System_Collections_Generic_IEnumerable_TSource__o *)v101[1].fields.ServantRewardActionComp;
  if ( ServantRewardActionComp )
  {
    this = (BattleResultComponent_o *)System_Linq_Enumerable__ToList_int_(
                                        ServantRewardActionComp,
                                        (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
    v118 = this;
    v119 = BattleResultComponent___c_TypeInfo;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v119 = BattleResultComponent___c_TypeInfo;
    }
    v120 = v119->static_fields;
    _9__34_1 = v120->__9__34_1;
    if ( !_9__34_1 )
    {
      if ( (BYTE3(v119->vtable._0_Equals.methodPtr) & 4) != 0 && !v119->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v119);
        v120 = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v122 = (Il2CppObject *)v120->__9;
      _9__34_1 = (System_Converter_int__string__o *)sub_B5D694(System_Converter_int__string__TypeInfo);
      System_Converter_int__string____ctor(
        _9__34_1,
        v122,
        Method_BattleResultComponent___c__Set_b__34_1__,
        (const MethodInfo_23F69D4 *)Method_System_Converter_int__string___ctor__);
      v123 = BattleResultComponent___c_TypeInfo->static_fields;
      v123->__9__34_1 = _9__34_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v123->__9__34_1,
        (System_Int32_array **)_9__34_1,
        v124,
        v125,
        v126,
        v127,
        v128,
        v129);
    }
    if ( !v118 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)System_Collections_Generic_List_int___ConvertAll_string_(
                                        (System_Collections_Generic_List_int__o *)v118,
                                        (System_Converter_T__TOutput__o *)_9__34_1,
                                        (const MethodInfo_192DF90 *)Method_System_Collections_Generic_List_int__ConvertAll_string___);
    if ( !this )
      goto LABEL_224;
    v130 = (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                    (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
    v131 = System_String__Join((System_String_o *)StringLiteral_707/*","*/, v130, 0LL);
    UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_22107/*"returnRarePriShopIds"*/, v131, 0LL);
  }
  UnityEngine_PlayerPrefs__Save(0LL);
  if ( !*p_battleResult )
    goto LABEL_224;
  endtargetObject = (System_Int32_array **)(*p_battleResult)->fields.endtargetObject;
  v13->fields.eventEndTitle = (struct System_String_o *)endtargetObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v13->fields.eventEndTitle,
    endtargetObject,
    v132,
    v133,
    v134,
    v135,
    v136,
    v137);
  v145 = v13->fields.battleResult;
  if ( !v145 )
    goto LABEL_224;
  eventEndMessage = (System_Int32_array **)v145->fields.eventEndMessage;
  v13->fields.eventEndMessage = (struct System_String_o *)eventEndMessage;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v13->fields.eventEndMessage,
    eventEndMessage,
    v139,
    v140,
    v141,
    v142,
    v143,
    v144);
  v147 = v13->fields.battleResult;
  if ( !v147 )
    goto LABEL_224;
  isTrialQuestNewRecord = v147->fields.isTrialQuestNewRecord;
  v149 = (QuestKnockdownResult_o *)sub_B5D694(QuestKnockdownResult_TypeInfo);
  QuestKnockdownResult___ctor(v149, isTrialQuestNewRecord, battleData, 0LL);
  if ( !battleData )
    goto LABEL_224;
  this = (BattleResultComponent_o *)battleData->fields.battle_info;
  if ( !this )
    goto LABEL_224;
  this = (BattleResultComponent_o *)BattleInfoData__IsWaveMyDecks((BattleInfoData_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v150 = v13->fields.battleResult;
    if ( !v150 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.bondsResult;
    if ( !this )
      goto LABEL_224;
    BattleResultBondsComponent__SetMultiBondsResultData(
      (BattleResultBondsComponent_o *)this,
      battleData,
      v150->fields.oldUserSvtCollection,
      v150->fields.friendshipRewardInfos,
      v150->fields.followerType,
      resultAsset,
      v150->fields.friendshipExpBase,
      v150->fields.getJoinSvts,
      v150,
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
      Master_WarQuestSelectionMaster = (EventBuddyPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventBuddyPointMaster___);
      v153 = BattleData__get_eventId(battleData, 0LL);
      QuestId = BattleData__getQuestId(battleData, 0LL);
      this = (BattleResultComponent_o *)BattleData__getPhase(battleData, 0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_224;
      this = (BattleResultComponent_o *)EventBuddyPointMaster__TryGetEntity(
                                          Master_WarQuestSelectionMaster,
                                          &entity,
                                          v153,
                                          QuestId,
                                          (int32_t)this,
                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleResultComponent_o *)entity;
        if ( !entity )
          goto LABEL_224;
        this = (BattleResultComponent_o *)EventBuddyPointEntity__IsHideBuddyPointResult(entity, 0LL);
        v155 = (unsigned __int8)this & 1;
      }
      else
      {
        v155 = 0;
      }
      v156 = v13->fields.battleResult;
      if ( !v156 )
        goto LABEL_224;
      battle_info = battleData->fields.battle_info;
      if ( !battle_info )
        goto LABEL_224;
      this = (BattleResultComponent_o *)v13->fields.bondsResult;
      if ( !this )
        goto LABEL_224;
      BattleResultBondsComponent__setResultData(
        (BattleResultBondsComponent_o *)this,
        v156->fields.myDeck,
        v156->fields.oldUserSvtCollection,
        v156->fields.friendshipRewardInfos,
        v156->fields.followerType,
        resultAsset,
        battle_info->fields.userSvt,
        v156->fields.friendshipExpBase,
        v156->fields.getJoinSvts,
        v156,
        v155,
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
    && (v161 = friendResult->fields.parentComp) != 0LL )
  {
    if ( !(_DWORD)parentComp || !(_DWORD)v161 )
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
      v149,
      (const MethodInfo *)battleResult);
  }
  else
  {
    BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 2, 0LL);
  }
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  v162 = this->fields.eventDamageItemResult;
  if ( v162 )
  {
    v163 = v162->fields.parentComp;
    if ( v163 )
    {
      if ( (_DWORD)v163 )
      {
        v244 = viewGroupIds;
        v245 = battleData;
        quest_ent = battleData->fields.quest_ent;
        v246 = v12;
        if ( !quest_ent )
          goto LABEL_224;
        itemResult = v13->fields.itemResult;
        obj_basebg = (int32_t)this->fields.obj_basebg;
        obj_basebg_high = HIDWORD(this->fields.obj_basebg);
        oldGame = (UserGameEntity_o *)v162->fields.myFsm;
        v243 = this->fields.battleResult;
        v168 = this[1].fields.friendResult;
        FriendIconPrefab_high = HIDWORD(this[1].fields.FriendIconPrefab);
        resultSprite = this[1].fields.resultSprite;
        eventId = *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1);
        eventTutorial = this[1].fields.eventTutorial;
        firstClearRewardQp = (int32_t)this->fields.obj_fronttouch;
        eventItemResult = this->fields.eventItemResult;
        v239 = this->fields.resultSprite;
        this = (BattleResultComponent_o *)QuestEntity__HasFlag(quest_ent, 0x2000000000000LL, 0LL);
        if ( !*p_battleResult || !itemResult )
          goto LABEL_224;
        BattleResultItemComponent__setResultData(
          itemResult,
          (BattleDropItem_array *)v243,
          obj_basebg,
          obj_basebg_high,
          oldGame,
          eventId,
          (UserEventEntity_array *)eventItemResult,
          (UserEventPointEntity_array *)v239,
          (int64_t)v168,
          v244,
          FriendIconPrefab_high,
          (DropUpInfo_array *)resultSprite,
          (EventConquestInfo_array *)eventTutorial,
          firstClearRewardQp,
          (unsigned __int8)this & 1,
          *(BattleResultAddRewardBonus_o **)&(*p_battleResult)[1].fields.isAddRewardEffectSkip,
          v238);
        battleData = v245;
        v12 = v246;
        goto LABEL_116;
      }
LABEL_225:
      v236 = sub_B5D6C8(this);
      sub_B5D668(v236, 0LL);
    }
  }
  BattleResultComponent_resultData__disableResultDispFlag((BattleResultComponent_resultData_o *)this, 4, 0LL);
LABEL_116:
  v179 = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( *(_QWORD *)&v179[1].fields.isAddRewardEffectSkip )
  {
    v180 = v13->fields.itemResult;
    if ( !v180 )
      goto LABEL_224;
    getQpLabel = v180->fields.getQpLabel;
    if ( !getQpLabel )
      goto LABEL_224;
    mText = (System_Int32_array **)getQpLabel->fields.mText;
    v179[2].klass = (BattleResultComponent_c *)mText;
    sub_B5D560((BattleServantConfConponent_o *)&v179[2], mText, v173, v174, v175, v176, v177, v178);
    v189 = v13->fields.itemResult;
    if ( !v189 )
      goto LABEL_224;
    nowQpLabel = v189->fields.nowQpLabel;
    if ( !nowQpLabel )
      goto LABEL_224;
    v191 = v13->fields.battleResult;
    if ( !v191 )
      goto LABEL_224;
    v192 = (System_Int32_array **)nowQpLabel->fields.mText;
    v191->fields.ultimateNowQpText = (struct System_String_o *)v192;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v191->fields.ultimateNowQpText,
      v192,
      v183,
      v184,
      v185,
      v186,
      v187,
      v188);
    if ( !*p_battleResult )
      goto LABEL_224;
    v193 = *(_QWORD *)&(*p_battleResult)[1].fields.isAddRewardEffectSkip;
    if ( !v193 )
      goto LABEL_224;
    v250 = *(_DWORD *)(v193 + 40) & ~(*(int *)(v193 + 40) >> 31);
    v194 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v250);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v194, 0LL);
    v195 = v13->fields.itemResult;
    if ( !v195 )
      goto LABEL_224;
    v196 = (Il2CppObject *)this;
    v197 = v195->fields.getQpLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v198 = LocalizationManager__Get((System_String_o *)StringLiteral_11255/*"RESULT_QP_PLUS"*/, 0LL);
    this = (BattleResultComponent_o *)System_String__Format(v198, v196, 0LL);
    if ( !v197 )
      goto LABEL_224;
    UILabel__set_text(v197, (System_String_o *)this, 0LL);
    v199 = v13->fields.itemResult;
    if ( !v199 )
      goto LABEL_224;
    if ( !*p_battleResult )
      goto LABEL_224;
    v200 = *(_QWORD *)&(*p_battleResult)[1].fields.isAddRewardEffectSkip;
    if ( !v200 )
      goto LABEL_224;
    v201 = v199->fields.nowQpLabel;
    v249 = *(_DWORD *)(v200 + 44);
    v202 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v249);
    this = (BattleResultComponent_o *)System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v202, 0LL);
    if ( !v201 )
      goto LABEL_224;
    UILabel__set_text(v201, (System_String_o *)this, 0LL);
    nextButtonSpr = (UIWidget_o *)v13->fields.nextButtonSpr;
    v252 = (UnityEngine_Color32_o)&v248;
    v248 = 0;
    UnityEngine_Color32___ctor(v252, 0x4Cu, 0x4Cu, 0x4Cu, 0xFFu, 0LL);
    v253 = (UnityEngine_Color32_o)v248;
    *(UnityEngine_Color_o *)&v204 = UnityEngine_Color32__op_Implicit_41570788(v253, 0LL);
    if ( !nextButtonSpr )
      goto LABEL_224;
    UIWidget__set_color(nextButtonSpr, *(UnityEngine_Color_o *)&v204, 0LL);
    v179 = *p_battleResult;
    if ( !*p_battleResult )
      goto LABEL_224;
  }
  this = (BattleResultComponent_o *)battleData->fields.quest_ent;
  if ( !this )
    goto LABEL_224;
  v208 = v13->fields.friendResult;
  bondsResult = (int32_t)v179[1].fields.bondsResult;
  bondsResult_high = HIDWORD(v179[1].fields.bondsResult);
  obj_fronttouch = (int64_t)v179[1].fields.obj_fronttouch;
  v212 = (int32_t)v179[1].fields.expResult;
  expResult_high = HIDWORD(v179[1].fields.expResult);
  this = (BattleResultComponent_o *)QuestEntity__HasFlag((QuestEntity_o *)this, 0x8000000LL, 0LL);
  if ( !v208 )
    goto LABEL_224;
  BattleResultFriendComponent__setResultData(
    v208,
    bondsResult,
    bondsResult_high,
    obj_fronttouch,
    v212,
    expResult_high,
    (unsigned __int8)this & 1,
    v214);
  v215 = v13->fields.battleResult;
  if ( !v215 )
    goto LABEL_224;
  this = (BattleResultComponent_o *)v13->fields.eventItemResult;
  if ( !this )
    goto LABEL_224;
  this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
                                      this,
                                      v215->fields.resultEventRewardInfos,
                                      (unsigned int)v215->fields.eventId,
                                      v215->fields.resultBoostItemRewardInfos,
                                      v215->fields.rewardInfos,
                                      this->klass[1]._1.name);
  v216 = v13->fields.battleResult;
  if ( !v216 )
    goto LABEL_224;
  this = (BattleResultComponent_o *)v13->fields.eventDamageItemResult;
  if ( !this )
    goto LABEL_224;
  ((void (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, struct QuestRewardInfo_array *, struct QuestRewardInfo_array *, const char *))this->klass[1]._1.gc_desc)(
    this,
    v216->fields.resultDamageRewardInfos,
    (unsigned int)v216->fields.eventId,
    v216->fields.resultBoostItemRewardInfos,
    v216->fields.rewardInfos,
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
    v218 = v13->fields.battleResult;
    if ( !v218 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_224;
    this = (BattleResultComponent_o *)((__int64 (__fastcall *)(BattleResultComponent_o *, struct BattleDropItem_array *, _QWORD, _QWORD, _QWORD, const char *))this->klass[1]._1.gc_desc)(
                                        this,
                                        v218->fields.resultEventFortificationRewardInfos,
                                        (unsigned int)v218->fields.eventId,
                                        0LL,
                                        0LL,
                                        this->klass[1]._1.name);
    v220 = v13->fields.battleResult;
    if ( !v220 )
      goto LABEL_224;
    this = (BattleResultComponent_o *)v13->fields.eventFortificationItemResult;
    if ( !this )
      goto LABEL_224;
    BattleResultEventFortificationItemComponent__SetFortificationInfos(
      (BattleResultEventFortificationItemComponent_o *)this,
      v220->fields.fortificationInfos,
      v219);
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
  v221 = battleData->fields.battle_info;
  if ( !v221 )
    goto LABEL_224;
  myDeck = v221->fields.myDeck;
  if ( myDeck && (svts = myDeck->fields.svts) != 0LL && (max_length = svts->max_length, max_length >= 1) )
  {
    v225 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v225 >= max_length )
        goto LABEL_225;
      this = (BattleResultComponent_o *)svts->m_Items[v225];
      if ( !this )
        goto LABEL_224;
      this = (BattleResultComponent_o *)BattleDeckServantData__IsLeaveEventJoin((BattleDeckServantData_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      max_length = svts->max_length;
      if ( (int)++v225 >= max_length )
        goto LABEL_169;
    }
    v226 = 1;
  }
  else
  {
LABEL_169:
    v226 = 0;
  }
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1) )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleResultComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventProgressValueMaster___);
    if ( !*p_battleResult || !this )
      goto LABEL_224;
    this = (BattleResultComponent_o *)EventProgressValueMaster__GetCurrentEventProgressValueEntity(
                                        (EventProgressValueMaster_o *)this,
                                        *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1),
                                        0LL);
    v227 = this;
    if ( this )
    {
      if ( !*p_battleResult )
        goto LABEL_224;
      v228 = *((_DWORD *)&(*p_battleResult)->fields.BaseMonoBehaviour_Fields + 1);
      if ( (BYTE3(EventInfoUIProgressControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventInfoUIProgressControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventInfoUIProgressControl_TypeInfo);
      }
      EventProgressValueSaveData_27093960 = EventInfoUIProgressControl__GetEventProgressValueSaveData_27093960(
                                              v228,
                                              0,
                                              0LL);
      v232 = (int)v227->fields.obj_fronttouch;
      LODWORD(v227) = 0;
      if ( EventProgressValueSaveData_27093960 != v232 )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B55 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)resultList, v230, v231);
          byte_42E4B55 = 1;
        }
        v233 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v233 = TerminalPramsManager_TypeInfo;
        }
        v233->static_fields->_SpotId_k__BackingField = -1;
        TerminalPramsManager__SpotIdSave_SaveData(0LL);
        LODWORD(v227) = 1;
      }
    }
  }
  else
  {
    LODWORD(v227) = 0;
  }
  if ( v226 & 1 | !battleData->fields.isRetryable )
    goto LABEL_196;
  this = *p_battleResult;
  if ( !*p_battleResult )
    goto LABEL_224;
  if ( (((unsigned int)v227 | BattleResultComponent_resultData__IsGetJoinSvtsEffect(
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
    sub_B5D69C(this, resultList);
  }
  v234 = this[2].fields.endtargetObject;
  if ( v234 && v234[1].klass )
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
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(touchGuard, 1, 0LL);
  this->fields.isAddRewardEffectSkip = 0;
  started = BattleResultComponent__StartAddRewardAnimationCoroutine(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleResultComponent__StartAddRewardAnimationCoroutine(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E88B7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E88B7 = 1;
  }
  v5 = sub_B5D694(BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_TypeInfo);
  BattleResultComponent__StartAddRewardAnimationCoroutine_d__42___ctor(
    (BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleResultComponent__StartQuestClearReward(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  TerminalPramsManager_c *v16; // x0
  WebViewManager_o *Instance; // x0
  __int64 v18; // x1
  TerminalPramsManager_c *v19; // x8
  CommonUI_o *v20; // x19
  BattleResultComponent___c_c *v21; // x0
  QuestRewardInfo_array *mQuestRewardInfos; // x20
  struct BattleResultComponent___c_StaticFields *static_fields; // x8
  System_Action_o *_9__61_0; // x21
  Il2CppObject *v25; // x22
  struct BattleResultComponent___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42E88C7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5, v6);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, v10, v11, v12);
    sub_B5D5C4(&BattleResultComponent___c_TypeInfo, v13, v14, v15);
    byte_42E88C7 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B33 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  if ( TerminalPramsManager__IsFreeQuestOnOrdealCall(v16->static_fields->_QuestId_k__BackingField, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = TerminalPramsManager_TypeInfo;
    v20 = (CommonUI_o *)Instance;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v19 = TerminalPramsManager_TypeInfo;
    }
    v21 = BattleResultComponent___c_TypeInfo;
    mQuestRewardInfos = v19->static_fields->mQuestRewardInfos;
    if ( (BYTE3(BattleResultComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleResultComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleResultComponent___c_TypeInfo);
      v21 = BattleResultComponent___c_TypeInfo;
    }
    static_fields = v21->static_fields;
    _9__61_0 = static_fields->__9__61_0;
    if ( !_9__61_0 )
    {
      if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        static_fields = BattleResultComponent___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)static_fields->__9;
      _9__61_0 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(_9__61_0, v25, Method_BattleResultComponent___c__StartQuestClearReward_b__61_0__, 0LL);
      v26 = BattleResultComponent___c_TypeInfo->static_fields;
      v26->__9__61_0 = _9__61_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v26->__9__61_0,
        (System_Int32_array **)_9__61_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    if ( !v20 )
      sub_B5D69C(v21, v18);
    CommonUI__OpenQuestClearReward(v20, mQuestRewardInfos, _9__61_0, 0LL);
  }
}


void __fastcall BattleResultComponent__StartResult(
        BattleResultComponent_o *this,
        UnityEngine_GameObject_o *target,
        System_String_o *endEvent,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  PlayMakerFSM_o *fsm; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v11; // x21
  struct BattleData_o *data; // x8

  if ( (byte_42E88B0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10207/*"OpenResult"*/, (_DWORD)target, (_DWORD)endEvent, perf);
    sub_B5D5C4(&StringLiteral_10756/*"Performance"*/, v7, v8, v9);
    byte_42E88B0 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(fsm, 0LL);
  if ( !fsm )
    goto LABEL_15;
  fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_Fsm__GetFsmGameObject(
                            (HutongGames_PlayMaker_Fsm_o *)fsm,
                            (System_String_o *)StringLiteral_10756/*"Performance"*/,
                            0LL);
  if ( !perf )
    goto LABEL_15;
  v11 = (HutongGames_PlayMaker_FsmGameObject_o *)fsm;
  fsm = (PlayMakerFSM_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)perf, 0LL);
  if ( !v11 )
    goto LABEL_15;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v11, (UnityEngine_GameObject_o *)fsm, 0LL);
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
    sub_B5D69C(fsm, target);
  }
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_10207/*"OpenResult"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenDataLostBattleResetDialog_b__68_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  TerminalPramsManager_c *v14; // x0
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  TerminalPramsManager_c *v18; // x0
  MissionNotifyManager_o *fsm; // x0
  __int64 v20; // x1
  int v21; // w2
  __int64 v22; // x3
  TerminalPramsManager_c *v23; // x0

  if ( (byte_42E88D1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, v11, v12, v13);
    byte_42E88D1 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B55 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B55 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_SpotId_k__BackingField = -1;
  TerminalPramsManager__SpotIdSave_SaveData(0LL);
  if ( !byte_42E5CC2 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v15, v16, v17);
    byte_42E5CC2 = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  v18->static_fields->_IsDataLostBattleAutoReset_k__BackingField = 1;
  TerminalPramsManager__IsDataLostBattleAutoReset_SaveData(0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  fsm = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !fsm )
    goto LABEL_27;
  MissionNotifyManager__StartPause(fsm, 0LL);
  if ( !byte_42E5CC7 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v20, v21, v22);
    byte_42E5CC7 = 1;
  }
  v23 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v23 = TerminalPramsManager_TypeInfo;
  }
  v23->static_fields->_IsDataLostBattleNoticePause_k__BackingField = 1;
  fsm = (MissionNotifyManager_o *)this->fields.fsm;
  if ( !fsm )
LABEL_27:
    sub_B5D69C(fsm, v20);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)fsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent___OpenRetryQuest_b__60_0(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E88D0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13204/*"StartQuestClearReward"*/, (_DWORD)method, v2, v3);
    byte_42E88D0 = 1;
  }
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_13204/*"StartQuestClearReward"*/,
    0.3,
    0LL);
}


void __fastcall BattleResultComponent___ScrollBarMotionCompleteValue_b__45_0(
        BattleResultComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42E88CF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E88CF = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
}


void __fastcall BattleResultComponent__checkNew(
        BattleResultComponent_o *this,
        int32_t resultType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  __int64 v27; // x20
  BattleResultItemComponent_o *itemResult; // x0
  BattleDropItem_o *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x0
  BattleDropItem_o **v37; // x21
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BattleDropItem_o *NewDrop; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  UnityEngine_Object_o *eventFortificationItemResult; // x22
  bool v52; // w0
  SummonAssetManager_o *Instance; // x21
  System_Action_o *v54; // x22
  __int64 *v55; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7

  if ( (byte_42E88C0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, resultType, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    sub_B5D5C4(&Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleResultComponent___c__DisplayClass53_0_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_9849/*"OPEN"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, v24, v25, v26);
    byte_42E88C0 = 1;
  }
  v27 = sub_B5D694(BattleResultComponent___c__DisplayClass53_0_TypeInfo);
  BattleResultComponent___c__DisplayClass53_0___ctor((BattleResultComponent___c__DisplayClass53_0_o *)v27, 0LL);
  if ( !v27 )
    goto LABEL_37;
  *(_QWORD *)(v27 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 24), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  BattleResultComponent__ResetTimeScale(v36);
  *(_QWORD *)(v27 + 16) = 0LL;
  v37 = (BattleDropItem_o **)(v27 + 16);
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), 0LL, v38, v39, v40, v41, v42, v43);
  switch ( resultType )
  {
    case 1:
      itemResult = this->fields.itemResult;
      if ( !itemResult )
        goto LABEL_37;
      NewDrop = BattleResultItemComponent__getNewDrop(itemResult, (const MethodInfo *)v29);
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
                  (const MethodInfo *)v29);
LABEL_11:
      v29 = NewDrop;
      *v37 = NewDrop;
      goto LABEL_19;
    case 4:
      eventFortificationItemResult = (UnityEngine_Object_o *)this->fields.eventFortificationItemResult;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v52 = UnityEngine_Object__op_Inequality(eventFortificationItemResult, 0LL, 0LL);
      v29 = 0LL;
      if ( !v52 )
        goto LABEL_18;
      itemResult = (BattleResultItemComponent_o *)this->fields.eventFortificationItemResult;
      if ( !itemResult )
        goto LABEL_37;
      v29 = BattleResultEventItemComponent__getNewDrop((BattleResultEventItemComponent_o *)itemResult, 0LL);
LABEL_18:
      *v37 = v29;
LABEL_19:
      sub_B5D560((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)v29, v45, v46, v47, v48, v49, v50);
LABEL_20:
      if ( !*v37 )
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
          UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
          *p_ServantRewardActionComp = 0LL;
          sub_B5D560(
            (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
            0LL,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64);
          itemResult = (BattleResultItemComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !itemResult )
            goto LABEL_37;
          CommonUI__maskFadein((CommonUI_o *)itemResult, 0.0, 0LL, 0LL);
        }
        itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
        if ( itemResult )
        {
          v55 = &StringLiteral_9393/*"NEXT"*/;
          goto LABEL_36;
        }
LABEL_37:
        sub_B5D69C(itemResult, v29);
      }
      Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
      v54 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v27,
        Method_BattleResultComponent___c__DisplayClass53_0__checkNew_b__0__,
        0LL);
      if ( !Instance )
        goto LABEL_37;
      SummonAssetManager__LoadSummonAssets(Instance, v54, 0LL);
      itemResult = (BattleResultItemComponent_o *)this->fields.fsm;
      if ( !itemResult )
        goto LABEL_37;
      v55 = &StringLiteral_9849/*"OPEN"*/;
LABEL_36:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)itemResult, (System_String_o *)*v55, 0LL);
      return;
    default:
      goto LABEL_20;
  }
}


void __fastcall BattleResultComponent__checkStart(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42E88B1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12484/*"START_Begin"*/, (_DWORD)method, v2, v3);
    byte_42E88B1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_12484/*"START_Begin"*/, 0LL);
}


void __fastcall BattleResultComponent__endCloseEndEventMessage(
        BattleResultComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E88B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, flg, (_DWORD)method, v3);
    byte_42E88B6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  CommonUI__CloseNotificationDialog(Instance, 0LL);
}


void __fastcall BattleResultComponent__endNewView(BattleResultComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  PlayMakerFSM_o *fsm; // x0

  if ( (byte_42E88C1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5573/*"END_PROC"*/, (_DWORD)method, v2, v3);
    byte_42E88C1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, method);
  PlayMakerFSM__SendEvent(fsm, (System_String_o *)StringLiteral_5573/*"END_PROC"*/, 0LL);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x21
  UnityEngine_Object_o *ServantRewardActionComp; // x23
  __int64 v12; // x1
  UnityEngine_Component_o *transform; // x0
  UnityEngine_Object_o *gameObject; // x23
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  SummonAssetManager_o *Instance; // x23
  System_Int32_array **Prefab; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E88C4 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, userCommandCodeId, (_DWORD)action, method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v7, v8, v9);
    byte_42E88C4 = 1;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v15, v16, v17, v18, v19, v20);
  }
  Instance = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance
    || (Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(
                                          Instance,
                                          (UnityEngine_Transform_o *)transform,
                                          1,
                                          0LL),
        *p_ServantRewardActionComp = (struct ServantRewardAction_o *)Prefab,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
          Prefab,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL)
    || (ServantRewardAction__SetupCommandCode_29038332(
          (ServantRewardAction_o *)transform,
          userCommandCodeId,
          1,
          1,
          2,
          0LL),
        (transform = (UnityEngine_Component_o *)*p_ServantRewardActionComp) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(transform, v12);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  int v20; // w1
  char v21; // w2
  __int64 v22; // x3
  int v23; // w1
  char v24; // w2
  __int64 v25; // x3
  int v26; // w1
  char v27; // w2
  __int64 v28; // x3
  DataManager_o *Instance; // x0
  __int64 v30; // x1
  UserServantEntity_o *Entity; // x0
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x25
  UserServantEntity_o *v34; // x22
  UnityEngine_Object_o *gameObject; // x25
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  SummonAssetManager_o *v42; // x25
  System_Int32_array **Prefab; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  ServantRewardAction_o *v50; // x24
  __int64 v51; // x25
  __int64 v52; // x26
  int32_t v53; // w0
  __int128 v54; // q1
  int32_t v55; // w23
  int64_t v56; // x0
  __int64 v57; // x8
  int64_t v58; // x22
  int32_t v59; // w0
  __int128 v60; // q1
  int32_t v61; // w21
  int64_t v62; // x0
  __int64 v63; // x8
  int64_t v64; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v67; // [xsp+50h] [xbp-60h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  if ( (byte_42E88C3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId, isNew, isDoEffect);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__, v26, v27, v28);
    byte_42E88C3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
             userSvtId,
             (const MethodInfo_23FB038 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  p_ServantRewardActionComp = &this->fields.ServantRewardActionComp;
  ServantRewardActionComp = (UnityEngine_Object_o *)this->fields.ServantRewardActionComp;
  v34 = Entity;
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_ServantRewardActionComp = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp, 0LL, v36, v37, v38, v39, v40, v41);
  }
  v42 = (SummonAssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SummonAssetManager__get_Instance__);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !v42 )
    goto LABEL_35;
  Prefab = (System_Int32_array **)SummonAssetManager__InstantiateSvtGetPrefab(
                                    v42,
                                    (UnityEngine_Transform_o *)Instance,
                                    1,
                                    0LL);
  *p_ServantRewardActionComp = (struct ServantRewardAction_o *)Prefab;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
    Prefab,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  if ( !v34 )
    goto LABEL_35;
  v50 = *p_ServantRewardActionComp;
  v52 = *(_QWORD *)&v34->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&v34->fields.svtId.fields.fakeValue;
  if ( isDoEffect )
  {
    if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v68.fields.currentCryptoKey = v52;
    *(_QWORD *)&v68.fields.fakeValue = v51;
    v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v68, 0LL);
    v54 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
    v55 = v53;
    *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v67.fields.fakeValue = v54;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v66 = v67;
    v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v66, 0LL);
    v57 = *(_QWORD *)&v34->fields.limitCount.fields.currentCryptoKey;
    *(_QWORD *)&v69.fields.fakeValue = *(_QWORD *)&v34->fields.limitCount.fields.fakeValue;
    v58 = v56;
    *(_QWORD *)&v69.fields.currentCryptoKey = v57;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v69, 0LL);
    if ( v50 )
    {
      ServantRewardAction__Setup(v50, v55, v58, (int32_t)Instance, 1, isNew, 1, 10, 0LL);
      goto LABEL_33;
    }
LABEL_35:
    sub_B5D69C(Instance, v30);
  }
  if ( (WORD1(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v70.fields.currentCryptoKey = v52;
  *(_QWORD *)&v70.fields.fakeValue = v51;
  v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v70, 0LL);
  v60 = *(_OWORD *)&v34->fields.id.fields.fakeValue;
  v61 = v59;
  *(_OWORD *)&v67.fields.currentCryptoKey = *(_OWORD *)&v34->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v67.fields.fakeValue = v60;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v65 = v67;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v65, 0LL);
  v63 = *(_QWORD *)&v34->fields.limitCount.fields.currentCryptoKey;
  *(_QWORD *)&v71.fields.fakeValue = *(_QWORD *)&v34->fields.limitCount.fields.fakeValue;
  v64 = v62;
  *(_QWORD *)&v71.fields.currentCryptoKey = v63;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v71, 0LL);
  if ( !v50 )
    goto LABEL_35;
  ServantRewardAction__Setup(v50, v61, v64, (int32_t)Instance, 1, 1, 1, 2, 0LL);
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
    sub_B5D69C(0LL, method);
  UnityEngine_GameObject__SetActive(obj_fronttouch, 1, 0LL);
}


void __fastcall BattleResultComponent__setBg(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_basebg; // x0

  obj_basebg = this->fields.obj_basebg;
  if ( !obj_basebg )
    sub_B5D69C(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_basebg, flg, 0LL);
}


void __fastcall BattleResultComponent__setTouch(BattleResultComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *obj_fronttouch; // x0

  obj_fronttouch = this->fields.obj_fronttouch;
  if ( !obj_fronttouch )
    sub_B5D69C(0LL, flg);
  UnityEngine_GameObject__SetActive(obj_fronttouch, flg, 0LL);
}


void __fastcall BattleResultComponent__showServantRewardAction(
        BattleResultComponent_o *this,
        int64_t userSvtId,
        int32_t type,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  bool v22; // w21
  System_Action_o *v23; // x22
  const MethodInfo *v24; // x5
  __int64 v25; // x1
  UnityEngine_Component_o *Instance; // x0
  __int64 *v27; // x8
  struct ServantRewardAction_o **p_ServantRewardActionComp; // x20
  UnityEngine_Object_o *ServantRewardActionComp; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_42E88C2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, userSvtId, type, method);
    sub_B5D5C4(&Method_BattleResultComponent_endNewView__, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_9849/*"OPEN"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_9393/*"NEXT"*/, v19, v20, v21);
    byte_42E88C2 = 1;
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
      UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
      *p_ServantRewardActionComp = 0LL;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.ServantRewardActionComp,
        0LL,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      Instance = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !Instance )
        goto LABEL_19;
      CommonUI__maskFadein((CommonUI_o *)Instance, 0.0, 0LL, 0LL);
    }
    Instance = (UnityEngine_Component_o *)this->fields.fsm;
    if ( Instance )
    {
      v27 = &StringLiteral_9393/*"NEXT"*/;
      goto LABEL_18;
    }
LABEL_19:
    sub_B5D69C(Instance, v25);
  }
  v22 = Gift__IsEventSvtGet(type, 0LL);
  v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_BattleResultComponent_endNewView__, 0LL);
  BattleResultComponent__openNewServantView(this, userSvtId, v22, v22, v23, v24);
  Instance = (UnityEngine_Component_o *)this->fields.fsm;
  if ( !Instance )
    goto LABEL_19;
  v27 = &StringLiteral_9849/*"OPEN"*/;
LABEL_18:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)*v27, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  UnityEngine_WaitForSeconds_o *v9; // x20
  bool result; // w0
  struct BattleResultComponent_o *_4__this; // x0
  struct BattleResultItemComponent_o *itemResult; // x8
  struct BattleViewItemlistComponent_o *itemWindow; // x8
  struct System_Collections_Generic_List_GameObject__o *itemObjectList; // x8

  if ( (byte_42E60A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v5, v6, v7);
    byte_42E60A9 = 1;
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
      sub_B5D69C(_4__this, method);
    }
    if ( itemObjectList->fields._size >= 8 )
      BattleResultComponent__ScrollBarMotion(_4__this, 0LL);
    else
      BattleResultComponent__ScrollBarMotionCompleteValue(_4__this, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v9 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v9, 0.1, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_B5D560(&this->fields.__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleResultComponent__StartAddRewardAnimationCoroutine_d__42_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BattleResultComponent___c_StaticFields *static_fields; // x0

  if ( (byte_42E60A6 & 1) == 0 )
  {
    sub_B5D5C4(&BattleResultComponent___c_TypeInfo, v1, v2, v3);
    byte_42E60A6 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleResultComponent___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BattleResultComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BattleResultComponent___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  TerminalPramsManager_c *v4; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8

  if ( (byte_42E60A7 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E60A7 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->mQuestRewardInfos = 0LL;
  sub_B5D560(&static_fields->mQuestRewardInfos);
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
  int v2; // w2
  __int64 v3; // x3
  BattleResultComponent___c__DisplayClass53_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleDropItem_o *newDrop; // x8
  struct BattleDropItem_o *v9; // x8
  int64_t userSvtId; // x20
  Il2CppObject *_4__this; // x19
  System_Action_o *v12; // x21
  struct BattleDropItem_o *v13; // x8
  struct BattleDropItem_o *v14; // x8
  int64_t v15; // x21
  Il2CppObject *v16; // x19
  char v17; // w20
  System_Action_o *v18; // x22

  v4 = this;
  if ( (byte_42E60A8 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleResultComponent___c__DisplayClass53_0_o *)sub_B5D5C4(
                                                              &Method_BattleResultComponent_endNewView__,
                                                              v5,
                                                              v6,
                                                              v7);
    byte_42E60A8 = 1;
  }
  newDrop = v4->fields.newDrop;
  if ( !newDrop )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsCommandCode_28425356(newDrop->fields.type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v9 = v4->fields.newDrop;
    if ( v9 )
    {
      userSvtId = v9->fields.userSvtId;
      _4__this = (Il2CppObject *)v4->fields.__4__this;
      v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v12, _4__this, Method_BattleResultComponent_endNewView__, 0LL);
      if ( _4__this )
      {
        BattleResultComponent__openNewCommandCodeView((BattleResultComponent_o *)_4__this, userSvtId, v12, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(this, method);
  }
  v13 = v4->fields.newDrop;
  if ( !v13 )
    goto LABEL_12;
  this = (BattleResultComponent___c__DisplayClass53_0_o *)Gift__IsEventSvtGet_28425000(v13->fields.type, 0LL);
  v14 = v4->fields.newDrop;
  if ( !v14 )
    goto LABEL_12;
  v15 = v14->fields.userSvtId;
  v16 = (Il2CppObject *)v4->fields.__4__this;
  v17 = (char)this;
  v18 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
      v8 = sub_B5D6C8(this);
      sub_B5D668(v8, 0LL);
    }
    v6 = m_Items[v4];
    if ( !v6 )
      sub_B5D69C(this, method);
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