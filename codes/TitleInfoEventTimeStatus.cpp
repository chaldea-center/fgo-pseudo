void __fastcall TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4186396 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventTimeStatus_TypeInfo, v1);
    byte_4186396 = 1;
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4186395 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventStatusMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186395 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v6);
  }
  return EventStatusMaster__getNowEntity((EventStatusMaster_o *)Instance, eventId, 0LL);
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
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_4186394 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4186394 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B2C434(Instance, v7);
  return UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0LL);
}


bool __fastcall TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_B2C434(this, method);
  return (bgSprite->fields.updateAnchors | 1) == 3 && *(&bgSprite->fields.updateAnchors + 1) < 2u;
}


void __fastcall TitleInfoEventTimeStatus__PlayChangeDayAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTimeStatus_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct UISprite_o *bgSprite; // x8
  UITweener_o *v8; // x20
  EventDelegate_Callback_o *v9; // x21
  const MethodInfo *v10; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v12; // x20
  EventDelegate_Callback_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x0
  UITweener_o *v15; // x20
  EventDelegate_Callback_o *v16; // x21
  TitleInfoEventTimeStatus_c *v17; // x0

  v2 = this;
  if ( (byte_4186392 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__, v3);
    sub_B2C35C(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__, v4);
    sub_B2C35C(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__, v5);
    this = (TitleInfoEventTimeStatus_o *)sub_B2C35C(&TitleInfoEventTimeStatus_TypeInfo, v6);
    byte_4186392 = 1;
  }
  bgSprite = v2->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_25;
  if ( *(&bgSprite->fields.updateAnchors + 1) > 1u || (bgSprite->fields.updateAnchors | 1) != 3 )
    return;
  this = *(TitleInfoEventTimeStatus_o **)&v2->fields.currentDay;
  if ( !this )
    goto LABEL_25;
  UITweener__PlayForward((UITweener_o *)this, 0LL);
  v8 = *(UITweener_o **)&v2->fields.currentDay;
  v9 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)v2,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0LL);
  if ( !v8 )
    goto LABEL_25;
  UITweener__SetOnFinished(v8, v9, 0LL);
  if ( LODWORD(v2[1].klass) == 1 )
  {
    this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12 = (UITweener_o *)TweenAlpha__Begin(gameObject, v2->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL);
    v13 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v13,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0LL);
    if ( !v12 )
      goto LABEL_25;
    UITweener__SetOnFinished(v12, v13, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v2->fields.dayCountTween;
    if ( !this )
      goto LABEL_25;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (TitleInfoEventTimeStatus_o *)v2->fields.dayCountTween;
      if ( this )
      {
        this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (TitleInfoEventTimeStatus_o *)v2->fields.dayCountTween;
          if ( this )
          {
            ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
              this,
              this->klass[1]._1.declaringType,
              0.0);
            this = (TitleInfoEventTimeStatus_o *)v2->fields.dayCountTween;
            if ( this )
            {
              v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v15 = (UITweener_o *)TweenAlpha__Begin(v14, v2->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL);
              v16 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
              EventDelegate_Callback___ctor(
                v16,
                (Il2CppObject *)v2,
                Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__,
                0LL);
              if ( v15 )
              {
                UITweener__SetOnFinished(v15, v16, 0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
LABEL_25:
      sub_B2C434(this, method);
    }
  }
LABEL_20:
  v17 = TitleInfoEventTimeStatus_TypeInfo;
  if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v17 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(v2, v17->static_fields->TIME_STATUS_DAY_MAX - LODWORD(v2[1].klass), v10);
}


void __fastcall TitleInfoEventTimeStatus__PlayIconScrollAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TitleInfoEventTimeImgListComponent_o *bgSprite; // x20
  System_Action_o *v6; // x21
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  TerminalPramsManager_c *v10; // x0
  struct UISprite_o *v11; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_4186391 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, v4);
    byte_4186391 = 1;
  }
  bgSprite = (TitleInfoEventTimeImgListComponent_o *)this->fields.bgSprite;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0LL);
  if ( !bgSprite )
    goto LABEL_25;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(bgSprite, v6, v9);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4186464 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_4186464 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( v10->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    if ( !byte_4186464 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
      byte_4186464 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v11 = this->fields.bgSprite;
    if ( v11 )
    {
      timeStatusRecord_k__BackingField = v7->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = *(&v11->fields.updateAnchors + 1);
        return;
      }
    }
LABEL_25:
    sub_B2C434(v7, v8);
  }
}


void __fastcall TitleInfoEventTimeStatus__SetDay(
        TitleInfoEventTimeStatus_o *this,
        int32_t day,
        const MethodInfo *method)
{
  UILabel_o *restDayTextSprite; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // [xsp+Ch] [xbp-4h] BYREF

  v6 = day;
  restDayTextSprite = (UILabel_o *)this->fields.restDayTextSprite;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( !restDayTextSprite )
    sub_B2C434(v4, v5);
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
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopTitleSprite; // x19
  int32_t v11; // [xsp+Ch] [xbp-14h] BYREF

  v11 = loop;
  if ( (byte_418638F & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&loop);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    sub_B2C35C(&StringLiteral_22686/*"time_status_icon_loop"*/, v6);
    byte_418638F = 1;
  }
  dayCountTween = (UISprite_o *)this->fields.dayCountTween;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(dayCountTween, (System_String_o *)StringLiteral_22686/*"time_status_icon_loop"*/, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.dayCountTween;
  if ( !gameObject )
    goto LABEL_14;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_14;
  if ( loop >= 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.dayCountTween;
    if ( gameObject )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
      loopTitleSprite = (UILabel_o *)this->fields.loopTitleSprite;
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v11, 0LL);
      if ( loopTitleSprite )
      {
        UILabel__set_text(loopTitleSprite, (System_String_o *)gameObject, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B2C434(gameObject, v8);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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
  __int64 v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4186390 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&restDay);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22683/*"time_status_fes01"*/, v7);
    sub_B2C35C(&StringLiteral_22684/*"time_status_fes02"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    sub_B2C35C(&StringLiteral_13375/*"TIME_REST2_DAYS"*/, v10);
    byte_4186390 = 1;
  }
  restDayCountLabel = this->fields.restDayCountLabel;
  if ( restDay >= 1 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI((UISprite_o *)restDayCountLabel, (System_String_o *)StringLiteral_22683/*"time_status_fes01"*/, 0LL);
    loopCountLabel = this->fields.loopCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13375/*"TIME_REST2_DAYS"*/, 0LL);
    v17 = restDay;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
    v15 = System_String__Format(v13, v14, 0LL);
    if ( loopCountLabel )
    {
      UILabel__set_text(loopCountLabel, v15, 0LL);
      return;
    }
LABEL_17:
    sub_B2C434(v15, v16);
  }
  if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  AtlasManager__SetEventUI((UISprite_o *)restDayCountLabel, (System_String_o *)StringLiteral_22684/*"time_status_fes02"*/, 0LL);
  v15 = (System_String_o *)this->fields.loopCountLabel;
  if ( !v15 )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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

  if ( (byte_4186393 & 1) == 0 )
  {
    sub_B2C35C(&TitleInfoEventTimeStatus_TypeInfo, method);
    byte_4186393 = 1;
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
  TitleInfoEventTimeStatus_o *v17; // x21
  int32_t Day; // w0
  UILabel_o *restDayTextSprite; // x22
  TitleInfoEventTimeStatus_c *v20; // x0
  int v21; // w24
  UISprite_o *dayCountLabel; // x22
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  UserEventEntity_o *UserEventEntity; // x0
  int32_t *p_value; // x22
  UILabel_o *loopTitleSprite; // x23
  int32_t v28; // w8
  UISprite_o *restDayCountLabel; // x22
  TitleInfoEventTimeStatus_o *loopCountLabel; // x22
  System_String_o *v31; // x23
  Il2CppObject *v32; // x0
  System_String_o *v33; // x1
  TitleInfoEventTimeStatus_o *v34; // x0
  const MethodInfo *v35; // x2
  const MethodInfo *v36; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v38; // x0
  TimeStatusRecord_o *v39; // x23
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  TerminalPramsManager_c *v47; // x0
  BattleServantConfConponent_o *p_timeStatusRecord_k__BackingField; // x0
  __int64 v49; // x8
  __int64 v50; // x8
  __int64 v51; // x8
  __int64 v52; // x8
  struct UISprite_o *bgSprite; // x8
  int v54; // [xsp+8h] [xbp-38h] BYREF
  int32_t v55; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_418638E & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, eventDetailEntity);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    sub_B2C35C(&TimeStatusRecord_TypeInfo, v8);
    sub_B2C35C(&TitleInfoEventTimeStatus_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_22694/*"time_status_top"*/, v10);
    sub_B2C35C(&StringLiteral_22683/*"time_status_fes01"*/, v11);
    sub_B2C35C(&StringLiteral_22684/*"time_status_fes02"*/, v12);
    sub_B2C35C(&StringLiteral_1/*""*/, v13);
    sub_B2C35C(&StringLiteral_13375/*"TIME_REST2_DAYS"*/, v14);
    sub_B2C35C(&StringLiteral_22686/*"time_status_icon_loop"*/, v15);
    this = (TitleInfoEventTimeStatus_o *)sub_B2C35C(&StringLiteral_953/*"0"*/, v16);
    byte_418638E = 1;
  }
  v55 = 0;
  if ( !eventDetailEntity )
    goto LABEL_99;
  this = (TitleInfoEventTimeStatus_o *)TitleInfoEventTimeStatus__GetEventStatusEntity(
                                         this,
                                         eventDetailEntity->fields.eventId,
                                         method);
  if ( !v4->fields.restDayTextSprite )
    goto LABEL_99;
  v17 = this;
  UILabel__set_text((UILabel_o *)v4->fields.restDayTextSprite, (System_String_o *)StringLiteral_953/*"0"*/, 0LL);
  if ( v17 )
  {
    Day = EventStatusEntity__GetDay((EventStatusEntity_o *)v17, 0LL);
    LODWORD(v4[1].klass) = Day;
    v55 = Day;
    restDayTextSprite = (UILabel_o *)v4->fields.restDayTextSprite;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)&v55, 0LL);
    if ( !restDayTextSprite )
      goto LABEL_99;
    UILabel__set_text(restDayTextSprite, (System_String_o *)this, 0LL);
    v20 = TitleInfoEventTimeStatus_TypeInfo;
    if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v20 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v21 = v20->static_fields->TIME_STATUS_DAY_MAX - v55;
  }
  else
  {
    v21 = 0;
  }
  dayCountLabel = (UISprite_o *)v4->fields.dayCountLabel;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(dayCountLabel, (System_String_o *)StringLiteral_22694/*"time_status_top"*/, 0LL);
  v23 = AtlasManager__SetEventUI((UISprite_o *)v4->fields.dayCountTween, (System_String_o *)StringLiteral_22686/*"time_status_icon_loop"*/, 0LL);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v23,
                      eventDetailEntity->fields.eventId,
                      v24);
  if ( UserEventEntity && (p_value = &UserEventEntity->fields.value, UserEventEntity->fields.value >= 1) )
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.dayCountTween;
    if ( !this )
      goto LABEL_99;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.dayCountTween;
    if ( !this )
      goto LABEL_99;
    ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
    loopTitleSprite = (UILabel_o *)v4->fields.loopTitleSprite;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)p_value, 0LL);
    if ( !loopTitleSprite )
      goto LABEL_99;
    UILabel__set_text(loopTitleSprite, (System_String_o *)this, 0LL);
    v28 = *p_value;
  }
  else
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.dayCountTween;
    if ( !this )
      goto LABEL_99;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_99;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v28 = 0;
  }
  HIDWORD(v4[1].klass) = v28;
  restDayCountLabel = (UISprite_o *)v4->fields.restDayCountLabel;
  if ( v21 < 1 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(restDayCountLabel, (System_String_o *)StringLiteral_22684/*"time_status_fes02"*/, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopCountLabel;
    if ( !this )
      goto LABEL_99;
    v33 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(restDayCountLabel, (System_String_o *)StringLiteral_22683/*"time_status_fes01"*/, 0LL);
    loopCountLabel = (TitleInfoEventTimeStatus_o *)v4->fields.loopCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13375/*"TIME_REST2_DAYS"*/, 0LL);
    v54 = v21;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v31, v32, 0LL);
    if ( !loopCountLabel )
      goto LABEL_99;
    v33 = (System_String_o *)this;
    this = loopCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, v33, 0LL);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v34, (EventStatusEntity_o *)v17, v35);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4186464 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, eventDetailEntity);
    byte_4186464 = 1;
  }
  v38 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v38 = TerminalPramsManager_TypeInfo;
  }
  if ( !v38->static_fields->_timeStatusRecord_k__BackingField )
  {
    v39 = (TimeStatusRecord_o *)sub_B2C42C(TimeStatusRecord_TypeInfo);
    TimeStatusRecord___ctor(v39, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4184702 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v40);
      byte_4184702 = 1;
    }
    v47 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v47 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (BattleServantConfConponent_o *)&v47->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (BattleServantConfConponent_c *)v39;
    sub_B2C2F8(p_timeStatusRecord_k__BackingField, (System_Int32_array **)v39, v41, v42, v43, v44, v45, v46);
    v38 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v38);
  if ( !byte_4186464 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, eventDetailEntity);
    byte_4186464 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v49 = *(_QWORD *)&this[1].fields.loopTitleSprite->fields.mLocalToPanel.fields.m33;
  if ( !v49 )
    goto LABEL_99;
  if ( *(_DWORD *)(v49 + 16) != eventDetailEntity->fields.eventId )
  {
    if ( (this[2].fields.currentDay & 0x4000000) != 0 && !this[2].fields.m_CachedPtr )
      j_il2cpp_runtime_class_init_0(this);
    if ( !byte_4186464 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, eventDetailEntity);
      byte_4186464 = 1;
    }
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    }
    v50 = *(_QWORD *)&this[1].fields.loopTitleSprite->fields.mLocalToPanel.fields.m33;
    if ( v50 )
    {
      *(_DWORD *)(v50 + 16) = eventDetailEntity->fields.eventId;
      if ( !byte_4186464 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, eventDetailEntity);
        this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
        byte_4186464 = 1;
      }
      if ( (this[2].fields.currentDay & 0x4000000) != 0 && !this[2].fields.m_CachedPtr )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
      }
      v51 = *(_QWORD *)&this[1].fields.loopTitleSprite->fields.mLocalToPanel.fields.m33;
      if ( v51 )
      {
        *(_DWORD *)(v51 + 20) = NowTimeState;
        goto LABEL_84;
      }
    }
LABEL_99:
    sub_B2C434(this, eventDetailEntity);
  }
LABEL_84:
  if ( (this[2].fields.currentDay & 0x4000000) != 0 && !this[2].fields.m_CachedPtr )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4186464 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, eventDetailEntity);
    byte_4186464 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v52 = *(_QWORD *)&this[1].fields.loopTitleSprite->fields.mLocalToPanel.fields.m33;
  if ( !v52 )
    goto LABEL_99;
  this = (TitleInfoEventTimeStatus_o *)v4->fields.bgSprite;
  if ( !this )
    goto LABEL_99;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    *(_DWORD *)(v52 + 20),
    NowTimeState,
    v36);
  bgSprite = v4->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_99;
  if ( (bgSprite->fields.updateAnchors | 1) == 3 && *(&bgSprite->fields.updateAnchors + 1) <= 1u )
    TitleInfoEventTimeStatus__SetYesterday(v4, (const MethodInfo *)eventDetailEntity);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_0(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  UITweener_o *v6; // x0
  UITweener_o *v7; // x20
  EventDelegate_Callback_o *v8; // x21

  if ( (byte_4186397 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__, v4);
    byte_4186397 = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, (int32_t)this[1].klass, v2);
  v6 = *(UITweener_o **)&this->fields.currentDay;
  if ( !v6
    || (UITweener__PlayReverse(v6, 0LL),
        v7 = *(UITweener_o **)&this->fields.currentDay,
        v8 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v8,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0LL),
        !v7) )
  {
    sub_B2C434(v6, v5);
  }
  UITweener__SetOnFinished(v7, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x1
  UnityEngine_GameObject_o *restDayTextSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_GameObject_o **v17; // x21
  UnityEngine_GameObject_o *v18; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v20; // x0
  float TIME_STATUS_DAY_EFFECT_SIZE; // s8
  UnityEngine_GameObject_o *v22; // x22
  float v23; // s3
  float v24; // s5
  float v25; // s4
  float v26; // s3
  UnityEngine_GameObject_o *v27; // x0
  UITweener_o *v28; // x19
  EventDelegate_Callback_o *v29; // x21
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_4186398 & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__, v5);
    sub_B2C35C(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, v6);
    byte_4186398 = 1;
  }
  v7 = sub_B2C42C(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
  TitleInfoEventTimeStatus___c__DisplayClass20_0___ctor((TitleInfoEventTimeStatus___c__DisplayClass20_0_o *)v7, 0LL);
  restDayTextSprite = (UnityEngine_GameObject_o *)this->fields.restDayTextSprite;
  if ( !restDayTextSprite )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)restDayTextSprite, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  restDayTextSprite = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                    (UnityEngine_UI_Dropdown_DropdownItem_o *)gameObject,
                                                    (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = restDayTextSprite;
  v17 = (UnityEngine_GameObject_o **)(v7 + 16);
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v7 + 16),
    (System_Int32_array **)restDayTextSprite,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  restDayTextSprite = (UnityEngine_GameObject_o *)this->fields.restDayTextSprite;
  if ( !restDayTextSprite )
    goto LABEL_13;
  v18 = *v17;
  parent = (UnityEngine_Component_o *)UIRect__get_parent((UIRect_o *)restDayTextSprite, 0LL);
  GameObjectExtensions__SafeSetParent(v18, parent, 0LL);
  GameObjectExtensions__ResetLocalScale(*v17, 0LL);
  restDayTextSprite = *v17;
  if ( !*v17 )
    goto LABEL_13;
  v20 = UnityEngine_GameObject__get_gameObject(restDayTextSprite, 0LL);
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  v22 = v20;
  one = UnityEngine_Vector3__get_one(0LL);
  v23 = *(float *)&this->fields.iconList;
  v24 = one.fields.x * v23;
  v25 = one.fields.y * v23;
  v26 = one.fields.z * v23;
  one.fields.y = v24;
  one.fields.z = v25;
  TweenScale__Begin(v22, TIME_STATUS_DAY_EFFECT_SIZE, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  restDayTextSprite = *v17;
  if ( !*v17
    || (v27 = UnityEngine_GameObject__get_gameObject(restDayTextSprite, 0LL),
        v28 = (UITweener_o *)TweenAlpha__Begin(v27, this->fields.TIME_STATUS_DAY_EFFECT_SIZE, 0.0, 0LL),
        v29 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v29,
          (Il2CppObject *)v7,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0LL),
        !v28) )
  {
LABEL_13:
    sub_B2C434(restDayTextSprite, v8);
  }
  UITweener__SetOnFinished(v28, v29, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_3(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *loopTitleSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  TitleInfoEventTimeStatus__SetLoop(this, HIDWORD(this[1].klass), v2);
  loopTitleSprite = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !loopTitleSprite )
    sub_B2C434(0LL, v4);
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
    sub_B2C434(0LL, method);
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

  if ( (byte_418533C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418533C = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_B2C434(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
}