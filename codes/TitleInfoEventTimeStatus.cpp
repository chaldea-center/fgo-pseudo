void __fastcall TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40F83E7 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventTimeStatus_TypeInfo, v1);
    byte_40F83E7 = 1;
  }
  TitleInfoEventTimeStatus_TypeInfo->static_fields->TIME_STATUS_DAY_MAX = 7;
}


void __fastcall TitleInfoEventTimeStatus___ctor(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.iconList) = 1069547520;
  *(_QWORD *)&this->fields.TIME_STATUS_DAY_EFFECT_TIME = 0x3E99999A3F000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall TitleInfoEventTimeStatus__GetEventStatusEntity(
        TitleInfoEventTimeStatus_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  EventStatusMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40F83E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventStatusMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F83E6 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventStatusMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventStatusMaster__getNowEntity(MasterData_WarQuestSelectionMaster, eventId, 0LL);
}


int32_t __fastcall TitleInfoEventTimeStatus__GetNowTimeState(
        TitleInfoEventTimeStatus_o *this,
        EventStatusEntity_o *entity,
        const MethodInfo *method)
{
  bool IsScenario; // w20
  int v5; // w0

  if ( !entity )
    return 0;
  IsScenario = EventStatusEntity__IsScenario(entity, 0LL);
  if ( EventStatusEntity__IsNight(entity, 0LL) )
    v5 = 2;
  else
    v5 = 0;
  return v5 & 0xFFFFFFFE | IsScenario;
}


// local variable allocation has failed, the output may be wrong!
UserEventEntity_o *__fastcall TitleInfoEventTimeStatus__GetUserEventEntity(
        TitleInfoEventTimeStatus_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0

  if ( (byte_40F83E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F83E5 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              (DataManager_o *)Instance,
                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B170D4();
  return UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, UserId, eventId, 0LL);
}


bool __fastcall TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_B170D4();
  return (bgSprite->fields.updateAnchors | 1) == 3 && *(&bgSprite->fields.updateAnchors + 1) < 2u;
}


void __fastcall TitleInfoEventTimeStatus__PlayChangeDayAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UISprite_o *bgSprite; // x8
  UITweener_o *v8; // x0
  UITweener_o *v9; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  EventDelegate_Callback_o *v14; // x21
  const MethodInfo *v15; // x2
  UnityEngine_Component_o *loopTitleSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  EventDelegate_Callback_o *v23; // x21
  UnityEngine_Component_o *dayCountTween; // x0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_Component_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  struct TweenScale_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UITweener_o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  EventDelegate_Callback_o *v36; // x21
  TitleInfoEventTimeStatus_c *v37; // x0

  if ( (byte_40F83E3 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__, v3);
    sub_B16FFC(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__, v4);
    sub_B16FFC(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__, v5);
    sub_B16FFC(&TitleInfoEventTimeStatus_TypeInfo, v6);
    byte_40F83E3 = 1;
  }
  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_25;
  if ( *(&bgSprite->fields.updateAnchors + 1) > 1u || (bgSprite->fields.updateAnchors | 1) != 3 )
    return;
  v8 = *(UITweener_o **)&this->fields.currentDay;
  if ( !v8 )
    goto LABEL_25;
  UITweener__PlayForward(v8, 0LL);
  v9 = *(UITweener_o **)&this->fields.currentDay;
  v14 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v10, v11, v12, v13);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)this,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0LL);
  if ( !v9 )
    goto LABEL_25;
  UITweener__SetOnFinished(v9, v14, 0LL);
  if ( LODWORD(this[1].klass) == 1 )
  {
    loopTitleSprite = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
    if ( !loopTitleSprite )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject(loopTitleSprite, 0LL);
    v18 = (UITweener_o *)TweenAlpha__Begin(gameObject, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL);
    v23 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v19, v20, v21, v22);
    EventDelegate_Callback___ctor(
      v23,
      (Il2CppObject *)this,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0LL);
    if ( !v18 )
      goto LABEL_25;
    UITweener__SetOnFinished(v18, v23, 0LL);
    dayCountTween = (UnityEngine_Component_o *)this->fields.dayCountTween;
    if ( !dayCountTween )
      goto LABEL_25;
    v25 = UnityEngine_Component__get_gameObject(dayCountTween, 0LL);
    if ( !v25 )
      goto LABEL_25;
    if ( !UnityEngine_GameObject__get_activeSelf(v25, 0LL) )
    {
      v26 = (UnityEngine_Component_o *)this->fields.dayCountTween;
      if ( v26 )
      {
        v27 = UnityEngine_Component__get_gameObject(v26, 0LL);
        if ( v27 )
        {
          UnityEngine_GameObject__SetActive(v27, 1, 0LL);
          v28 = this->fields.dayCountTween;
          if ( v28 )
          {
            ((void (__fastcall *)(struct TweenScale_o *, void *, float))v28->klass->vtable._8_SynchronizeTween.method)(
              v28,
              v28->klass[1]._1.image,
              0.0);
            v29 = (UnityEngine_Component_o *)this->fields.dayCountTween;
            if ( v29 )
            {
              v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
              v31 = (UITweener_o *)TweenAlpha__Begin(v30, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL);
              v36 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v32, v33, v34, v35);
              EventDelegate_Callback___ctor(
                v36,
                (Il2CppObject *)this,
                Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__,
                0LL);
              if ( v31 )
              {
                UITweener__SetOnFinished(v31, v36, 0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
LABEL_25:
      sub_B170D4();
    }
  }
LABEL_20:
  v37 = TitleInfoEventTimeStatus_TypeInfo;
  if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v37 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(this, v37->static_fields->TIME_STATUS_DAY_MAX - LODWORD(this[1].klass), v15);
}


void __fastcall TitleInfoEventTimeStatus__PlayIconScrollAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  TitleInfoEventTimeImgListComponent_o *bgSprite; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  TerminalPramsManager_c *v13; // x0
  struct UISprite_o *v14; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_40F83E2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    sub_B16FFC(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, v7);
    byte_40F83E2 = 1;
  }
  bgSprite = (TitleInfoEventTimeImgListComponent_o *)this->fields.bgSprite;
  v9 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0LL);
  if ( !bgSprite )
    goto LABEL_25;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(bgSprite, v9, v10);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F84B5 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    byte_40F84B5 = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v12 = TerminalPramsManager_TypeInfo;
  }
  if ( v12->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    if ( !byte_40F84B5 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
      byte_40F84B5 = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v14 = this->fields.bgSprite;
    if ( v14 )
    {
      timeStatusRecord_k__BackingField = v13->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = *(&v14->fields.updateAnchors + 1);
        return;
      }
    }
LABEL_25:
    sub_B170D4();
  }
}


void __fastcall TitleInfoEventTimeStatus__SetDay(
        TitleInfoEventTimeStatus_o *this,
        int32_t day,
        const MethodInfo *method)
{
  UILabel_o *restDayTextSprite; // x19
  System_String_o *v4; // x0
  int32_t v5; // [xsp+Ch] [xbp-4h] BYREF

  v5 = day;
  restDayTextSprite = (UILabel_o *)this->fields.restDayTextSprite;
  v4 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !restDayTextSprite )
    sub_B170D4();
  UILabel__set_text(restDayTextSprite, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeStatus__SetLoop(
        TitleInfoEventTimeStatus_o *this,
        int32_t loop,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UISprite_o *dayCountTween; // x21
  UnityEngine_Component_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenScale_o *v10; // x0
  UILabel_o *loopTitleSprite; // x19
  System_String_o *v12; // x0
  UILabel_o *v13; // x0
  int32_t v14; // [xsp+Ch] [xbp-14h] BYREF

  v14 = loop;
  if ( (byte_40F83E0 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&loop);
    sub_B16FFC(&StringLiteral_1, v5);
    sub_B16FFC(&StringLiteral_22593, v6);
    byte_40F83E0 = 1;
  }
  dayCountTween = (UISprite_o *)this->fields.dayCountTween;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(dayCountTween, (System_String_o *)StringLiteral_22593, 0LL);
  v8 = (UnityEngine_Component_o *)this->fields.dayCountTween;
  if ( !v8 )
    goto LABEL_14;
  gameObject = UnityEngine_Component__get_gameObject(v8, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  if ( loop >= 1 )
  {
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v10 = this->fields.dayCountTween;
    if ( v10 )
    {
      ((void (__fastcall *)(struct TweenScale_o *, Il2CppMethodPointer))v10->klass[1].vtable._5_OnUpdate.method)(
        v10,
        v10->klass[1].vtable._6_SetStartToCurrentValue.methodPtr);
      loopTitleSprite = (UILabel_o *)this->fields.loopTitleSprite;
      v12 = System_Int32__ToString((int32_t)&v14, 0LL);
      if ( loopTitleSprite )
      {
        UILabel__set_text(loopTitleSprite, v12, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  v13 = (UILabel_o *)this->fields.loopTitleSprite;
  if ( !v13 )
    goto LABEL_14;
  UILabel__set_text(v13, (System_String_o *)StringLiteral_1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeStatus__SetRestDay(
        TitleInfoEventTimeStatus_o *this,
        int32_t restDay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct UILabel_o *restDayCountLabel; // x21
  UILabel_o *loopCountLabel; // x20
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  UILabel_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F83E1 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&restDay);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22590, v7);
    sub_B16FFC(&StringLiteral_22591, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    sub_B16FFC(&StringLiteral_13319, v10);
    byte_40F83E1 = 1;
  }
  restDayCountLabel = this->fields.restDayCountLabel;
  if ( restDay >= 1 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI((UISprite_o *)restDayCountLabel, (System_String_o *)StringLiteral_22590, 0LL);
    loopCountLabel = this->fields.loopCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13319, 0LL);
    v17 = restDay;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v15 = System_String__Format(v13, v14, 0LL);
    if ( loopCountLabel )
    {
      UILabel__set_text(loopCountLabel, v15, 0LL);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  AtlasManager__SetEventUI((UISprite_o *)restDayCountLabel, (System_String_o *)StringLiteral_22591, 0LL);
  v16 = this->fields.loopCountLabel;
  if ( !v16 )
    goto LABEL_17;
  UILabel__set_text(v16, (System_String_o *)StringLiteral_1, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetYesterday(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int klass; // w8
  int32_t klass_high; // w21
  int32_t TIME_STATUS_DAY_MAX; // w20
  TitleInfoEventTimeStatus_c *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  TitleInfoEventTimeStatus_c *v10; // x0

  if ( (byte_40F83E4 & 1) == 0 )
  {
    sub_B16FFC(&TitleInfoEventTimeStatus_TypeInfo, method);
    byte_40F83E4 = 1;
  }
  klass = (int)this[1].klass;
  klass_high = HIDWORD(this[1].klass);
  TIME_STATUS_DAY_MAX = klass - 1;
  if ( klass == 1 )
  {
    v7 = TitleInfoEventTimeStatus_TypeInfo;
    if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v7 = TitleInfoEventTimeStatus_TypeInfo;
      klass_high = HIDWORD(this[1].klass);
    }
    --klass_high;
    TIME_STATUS_DAY_MAX = v7->static_fields->TIME_STATUS_DAY_MAX;
  }
  TitleInfoEventTimeStatus__SetDay(this, TIME_STATUS_DAY_MAX, v2);
  TitleInfoEventTimeStatus__SetLoop(this, klass_high, v8);
  v10 = TitleInfoEventTimeStatus_TypeInfo;
  if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v10 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(this, v10->static_fields->TIME_STATUS_DAY_MAX - TIME_STATUS_DAY_MAX, v9);
}


void __fastcall TitleInfoEventTimeStatus__Setup(
        TitleInfoEventTimeStatus_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  TitleInfoEventTimeStatus_o *v4; // x19
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
  __int64 v15; // x1
  __int64 v16; // x1
  EventStatusEntity_o *EventStatusEntity; // x0
  EventStatusEntity_o *v18; // x21
  int32_t Day; // w0
  UILabel_o *restDayTextSprite; // x22
  System_String_o *v21; // x0
  TitleInfoEventTimeStatus_c *v22; // x0
  int v23; // w24
  UISprite_o *dayCountLabel; // x22
  _BOOL8 v25; // x0
  const MethodInfo *v26; // x2
  UserEventEntity_o *UserEventEntity; // x0
  int32_t *p_value; // x22
  UnityEngine_Component_o *dayCountTween; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct TweenScale_o *v31; // x0
  UILabel_o *loopTitleSprite; // x23
  System_String_o *v33; // x0
  int32_t v34; // w8
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UILabel_o *v37; // x0
  UISprite_o *restDayCountLabel; // x22
  UILabel_o *v39; // x22
  System_String_o *v40; // x23
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x1
  UILabel_o *loopCountLabel; // x0
  TitleInfoEventTimeStatus_o *v45; // x0
  const MethodInfo *v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  const MethodInfo *v49; // x3
  __int64 v50; // x4
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v52; // x0
  TimeStatusRecord_o *v53; // x23
  __int64 v54; // x1
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  TerminalPramsManager_c *v61; // x0
  BattleServantConfConponent_o *p_timeStatusRecord_k__BackingField; // x0
  TerminalPramsManager_c *v63; // x0
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x8
  struct TimeStatusRecord_o *v65; // x8
  struct TimeStatusRecord_o *v66; // x8
  TerminalPramsManager_c *v67; // x0
  struct TimeStatusRecord_o *v68; // x8
  TitleInfoEventTimeImgListComponent_o *bgSprite; // x0
  const MethodInfo *v70; // x1
  struct UISprite_o *v71; // x8
  int v72; // [xsp+8h] [xbp-38h] BYREF
  int32_t v73; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_40F83DF & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, eventDetailEntity);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    sub_B16FFC(&TimeStatusRecord_TypeInfo, v8);
    sub_B16FFC(&TitleInfoEventTimeStatus_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_22601, v10);
    sub_B16FFC(&StringLiteral_22590, v11);
    sub_B16FFC(&StringLiteral_22591, v12);
    sub_B16FFC(&StringLiteral_1, v13);
    sub_B16FFC(&StringLiteral_13319, v14);
    sub_B16FFC(&StringLiteral_22593, v15);
    this = (TitleInfoEventTimeStatus_o *)sub_B16FFC(&StringLiteral_951, v16);
    byte_40F83DF = 1;
  }
  v73 = 0;
  if ( !eventDetailEntity )
    goto LABEL_99;
  EventStatusEntity = TitleInfoEventTimeStatus__GetEventStatusEntity(this, eventDetailEntity->fields.eventId, method);
  if ( !v4->fields.restDayTextSprite )
    goto LABEL_99;
  v18 = EventStatusEntity;
  UILabel__set_text((UILabel_o *)v4->fields.restDayTextSprite, (System_String_o *)StringLiteral_951, 0LL);
  if ( v18 )
  {
    Day = EventStatusEntity__GetDay(v18, 0LL);
    LODWORD(v4[1].klass) = Day;
    v73 = Day;
    restDayTextSprite = (UILabel_o *)v4->fields.restDayTextSprite;
    v21 = System_Int32__ToString((int32_t)&v73, 0LL);
    if ( !restDayTextSprite )
      goto LABEL_99;
    UILabel__set_text(restDayTextSprite, v21, 0LL);
    v22 = TitleInfoEventTimeStatus_TypeInfo;
    if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v22 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v23 = v22->static_fields->TIME_STATUS_DAY_MAX - v73;
  }
  else
  {
    v23 = 0;
  }
  dayCountLabel = (UISprite_o *)v4->fields.dayCountLabel;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(dayCountLabel, (System_String_o *)StringLiteral_22601, 0LL);
  v25 = AtlasManager__SetEventUI((UISprite_o *)v4->fields.dayCountTween, (System_String_o *)StringLiteral_22593, 0LL);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v25,
                      eventDetailEntity->fields.eventId,
                      v26);
  if ( UserEventEntity && (p_value = &UserEventEntity->fields.value, UserEventEntity->fields.value >= 1) )
  {
    dayCountTween = (UnityEngine_Component_o *)v4->fields.dayCountTween;
    if ( !dayCountTween )
      goto LABEL_99;
    gameObject = UnityEngine_Component__get_gameObject(dayCountTween, 0LL);
    if ( !gameObject )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v31 = v4->fields.dayCountTween;
    if ( !v31 )
      goto LABEL_99;
    ((void (__fastcall *)(struct TweenScale_o *, Il2CppMethodPointer))v31->klass[1].vtable._5_OnUpdate.method)(
      v31,
      v31->klass[1].vtable._6_SetStartToCurrentValue.methodPtr);
    loopTitleSprite = (UILabel_o *)v4->fields.loopTitleSprite;
    v33 = System_Int32__ToString((int32_t)p_value, 0LL);
    if ( !loopTitleSprite )
      goto LABEL_99;
    UILabel__set_text(loopTitleSprite, v33, 0LL);
    v34 = *p_value;
  }
  else
  {
    v35 = (UnityEngine_Component_o *)v4->fields.dayCountTween;
    if ( !v35 )
      goto LABEL_99;
    v36 = UnityEngine_Component__get_gameObject(v35, 0LL);
    if ( !v36 )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive(v36, 0, 0LL);
    v37 = (UILabel_o *)v4->fields.loopTitleSprite;
    if ( !v37 )
      goto LABEL_99;
    UILabel__set_text(v37, (System_String_o *)StringLiteral_1, 0LL);
    v34 = 0;
  }
  HIDWORD(v4[1].klass) = v34;
  restDayCountLabel = (UISprite_o *)v4->fields.restDayCountLabel;
  if ( v23 < 1 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(restDayCountLabel, (System_String_o *)StringLiteral_22591, 0LL);
    loopCountLabel = v4->fields.loopCountLabel;
    if ( !loopCountLabel )
      goto LABEL_99;
    v43 = (System_String_o *)StringLiteral_1;
  }
  else
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(restDayCountLabel, (System_String_o *)StringLiteral_22590, 0LL);
    v39 = v4->fields.loopCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_13319, 0LL);
    v72 = v23;
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v72);
    v42 = System_String__Format(v40, v41, 0LL);
    if ( !v39 )
      goto LABEL_99;
    v43 = v42;
    loopCountLabel = v39;
  }
  UILabel__set_text(loopCountLabel, v43, 0LL);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v45, v18, v46);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F84B5 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v47);
    byte_40F84B5 = 1;
  }
  v52 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v52 = TerminalPramsManager_TypeInfo;
  }
  if ( !v52->static_fields->_timeStatusRecord_k__BackingField )
  {
    v53 = (TimeStatusRecord_o *)sub_B170CC(TimeStatusRecord_TypeInfo, v47, v48, v49, v50);
    TimeStatusRecord___ctor(v53, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6E13 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v54);
      byte_40F6E13 = 1;
    }
    v61 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v61 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (BattleServantConfConponent_o *)&v61->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (BattleServantConfConponent_c *)v53;
    sub_B16F98(p_timeStatusRecord_k__BackingField, (System_Int32_array **)v53, v55, v56, v57, v58, v59, v60);
    v52 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v52);
  if ( !byte_40F84B5 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v47);
    byte_40F84B5 = 1;
  }
  v63 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v63 = TerminalPramsManager_TypeInfo;
  }
  timeStatusRecord_k__BackingField = v63->static_fields->_timeStatusRecord_k__BackingField;
  if ( !timeStatusRecord_k__BackingField )
    goto LABEL_99;
  if ( timeStatusRecord_k__BackingField->fields.eventId != eventDetailEntity->fields.eventId )
  {
    if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v63);
    if ( !byte_40F84B5 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v47);
      byte_40F84B5 = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v63 = TerminalPramsManager_TypeInfo;
    }
    v65 = v63->static_fields->_timeStatusRecord_k__BackingField;
    if ( v65 )
    {
      v65->fields.eventId = eventDetailEntity->fields.eventId;
      if ( !byte_40F84B5 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v47);
        v63 = TerminalPramsManager_TypeInfo;
        byte_40F84B5 = 1;
      }
      if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v63);
        v63 = TerminalPramsManager_TypeInfo;
      }
      v66 = v63->static_fields->_timeStatusRecord_k__BackingField;
      if ( v66 )
      {
        v66->fields.state = NowTimeState;
        goto LABEL_84;
      }
    }
LABEL_99:
    sub_B170D4();
  }
LABEL_84:
  if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v63);
  if ( !byte_40F84B5 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v47);
    byte_40F84B5 = 1;
  }
  v67 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v67 = TerminalPramsManager_TypeInfo;
  }
  v68 = v67->static_fields->_timeStatusRecord_k__BackingField;
  if ( !v68 )
    goto LABEL_99;
  bgSprite = (TitleInfoEventTimeImgListComponent_o *)v4->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_99;
  TitleInfoEventTimeImgListComponent__Init(bgSprite, v68->fields.state, NowTimeState, v49);
  v71 = v4->fields.bgSprite;
  if ( !v71 )
    goto LABEL_99;
  if ( (v71->fields.updateAnchors | 1) == 3 && *(&v71->fields.updateAnchors + 1) <= 1u )
    TitleInfoEventTimeStatus__SetYesterday(v4, v70);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_0(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UITweener_o *v5; // x0
  UITweener_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  EventDelegate_Callback_o *v11; // x21

  if ( (byte_40F83E8 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__, v4);
    byte_40F83E8 = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, (int32_t)this[1].klass, v2);
  v5 = *(UITweener_o **)&this->fields.currentDay;
  if ( !v5
    || (UITweener__PlayReverse(v5, 0LL),
        v6 = *(UITweener_o **)&this->fields.currentDay,
        v11 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v7, v8, v9, v10),
        EventDelegate_Callback___ctor(
          v11,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0LL),
        !v6) )
  {
    sub_B170D4();
  }
  UITweener__SetOnFinished(v6, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_Component_o *restDayTextSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UnityEngine_GameObject_o **v20; // x21
  UIRect_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v24; // x0
  float TIME_STATUS_DAY_EFFECT_SIZE; // s8
  UnityEngine_GameObject_o *v26; // x22
  float v27; // s3
  float v28; // s5
  float v29; // s4
  float v30; // s3
  UnityEngine_GameObject_o *v31; // x0
  UITweener_o *v32; // x19
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  EventDelegate_Callback_o *v37; // x21
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_40F83E9 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__, v8);
    sub_B16FFC(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, v9);
    byte_40F83E9 = 1;
  }
  v10 = sub_B170CC(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, method, v2, v3, v4);
  TitleInfoEventTimeStatus___c__DisplayClass20_0___ctor((TitleInfoEventTimeStatus___c__DisplayClass20_0_o *)v10, 0LL);
  restDayTextSprite = (UnityEngine_Component_o *)this->fields.restDayTextSprite;
  if ( !restDayTextSprite )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject(restDayTextSprite, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (System_Int32_array **)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                 (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                 (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_13;
  *(_QWORD *)(v10 + 16) = v13;
  v20 = (UnityEngine_GameObject_o **)(v10 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), v13, v14, v15, v16, v17, v18, v19);
  v21 = (UIRect_o *)this->fields.restDayTextSprite;
  if ( !v21 )
    goto LABEL_13;
  v22 = *v20;
  parent = (UnityEngine_Component_o *)UIRect__get_parent(v21, 0LL);
  GameObjectExtensions__SafeSetParent(v22, parent, 0LL);
  GameObjectExtensions__ResetLocalScale(*v20, 0LL);
  if ( !*v20 )
    goto LABEL_13;
  v24 = UnityEngine_GameObject__get_gameObject(*v20, 0LL);
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  v26 = v24;
  one = UnityEngine_Vector3__get_one(0LL);
  v27 = *(float *)&this->fields.iconList;
  v28 = one.fields.x * v27;
  v29 = one.fields.y * v27;
  v30 = one.fields.z * v27;
  one.fields.y = v28;
  one.fields.z = v29;
  TweenScale__Begin(v26, TIME_STATUS_DAY_EFFECT_SIZE, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  if ( !*v20
    || (v31 = UnityEngine_GameObject__get_gameObject(*v20, 0LL),
        v32 = (UITweener_o *)TweenAlpha__Begin(v31, this->fields.TIME_STATUS_DAY_EFFECT_SIZE, 0.0, 0LL),
        v37 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v33, v34, v35, v36),
        EventDelegate_Callback___ctor(
          v37,
          (Il2CppObject *)v10,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0LL),
        !v32) )
  {
LABEL_13:
    sub_B170D4();
  }
  UITweener__SetOnFinished(v32, v37, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_3(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Component_o *loopTitleSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  TitleInfoEventTimeStatus__SetLoop(this, HIDWORD(this[1].klass), v2);
  loopTitleSprite = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !loopTitleSprite )
    sub_B170D4();
  gameObject = UnityEngine_Component__get_gameObject(loopTitleSprite, 0LL);
  TweenAlpha__Begin(gameObject, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 1.0, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_4(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *dayCountTween; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  dayCountTween = (UnityEngine_Component_o *)this->fields.dayCountTween;
  if ( !dayCountTween )
    sub_B170D4();
  gameObject = UnityEngine_Component__get_gameObject(dayCountTween, 0LL);
  TweenAlpha__Begin(gameObject, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 1.0, 0LL);
}


void __fastcall TitleInfoEventTimeStatus_UIActiveQuestData___ctor(
        TitleInfoEventTimeStatus_UIActiveQuestData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___c__DisplayClass20_0___ctor(
        TitleInfoEventTimeStatus___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___c__DisplayClass20_0___PlayChangeDayAnime_b__2(
        TitleInfoEventTimeStatus___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_40F782D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F782D = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_B170D4();
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
}