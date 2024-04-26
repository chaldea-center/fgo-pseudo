void __fastcall TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  if ( (byte_43502C8 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventTimeStatus_TypeInfo);
    byte_43502C8 = 1;
  }
  TitleInfoEventTimeStatus_TypeInfo->static_fields->TIME_STATUS_DAY_MAX = 7;
}


void __fastcall TitleInfoEventTimeStatus___ctor(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  LODWORD(this->fields.iconList) = 1069547520;
  *(_QWORD *)&this->fields.TIME_STATUS_DAY_EFFECT_TIME = 0x3E99999A3F000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


EventStatusEntity_o *__fastcall TitleInfoEventTimeStatus__GetEventStatusEntity(
        TitleInfoEventTimeStatus_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_43502C7 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43502C7 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0LL )
  {
    sub_B7076C(Instance, v5);
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


UserEventEntity_o *__fastcall TitleInfoEventTimeStatus__GetUserEventEntity(
        TitleInfoEventTimeStatus_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_43502C6 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43502C6 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B7076C(Instance, v5);
  return UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0LL);
}


bool __fastcall TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_B7076C(this, method);
  return (bgSprite->fields.updateAnchors | 1) == 3 && *(&bgSprite->fields.updateAnchors + 1) < 2u;
}


void __fastcall TitleInfoEventTimeStatus__PlayChangeDayAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTimeStatus_o *v2; // x19
  struct UISprite_o *bgSprite; // x8
  UITweener_o *v4; // x20
  EventDelegate_Callback_o *v5; // x21
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v8; // x20
  EventDelegate_Callback_o *v9; // x21
  UnityEngine_GameObject_o *v10; // x0
  UITweener_o *v11; // x20
  EventDelegate_Callback_o *v12; // x21
  TitleInfoEventTimeStatus_c *v13; // x0

  v2 = this;
  if ( (byte_43502C4 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__);
    sub_B70694(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__);
    sub_B70694(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__);
    this = (TitleInfoEventTimeStatus_o *)sub_B70694(&TitleInfoEventTimeStatus_TypeInfo);
    byte_43502C4 = 1;
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
  v4 = *(UITweener_o **)&v2->fields.currentDay;
  v5 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)v2,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0LL);
  if ( !v4 )
    goto LABEL_25;
  UITweener__SetOnFinished(v4, v5, 0LL);
  if ( LODWORD(v2[1].klass) == 1 )
  {
    this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v8 = (UITweener_o *)TweenAlpha__Begin(gameObject, v2->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL);
    v9 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0LL);
    if ( !v8 )
      goto LABEL_25;
    UITweener__SetOnFinished(v8, v9, 0LL);
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
              v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v11 = (UITweener_o *)TweenAlpha__Begin(v10, v2->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL);
              v12 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
              EventDelegate_Callback___ctor(
                v12,
                (Il2CppObject *)v2,
                Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__,
                0LL);
              if ( v11 )
              {
                UITweener__SetOnFinished(v11, v12, 0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
LABEL_25:
      sub_B7076C(this, method);
    }
  }
LABEL_20:
  v13 = TitleInfoEventTimeStatus_TypeInfo;
  if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v13 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(v2, v13->static_fields->TIME_STATUS_DAY_MAX - LODWORD(v2[1].klass), v6);
}


void __fastcall TitleInfoEventTimeStatus__PlayIconScrollAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTimeImgListComponent_o *bgSprite; // x20
  System_Action_o *v4; // x21
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  TerminalPramsManager_c *v8; // x0
  struct UISprite_o *v9; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_43502C3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__);
    byte_43502C3 = 1;
  }
  bgSprite = (TitleInfoEventTimeImgListComponent_o *)this->fields.bgSprite;
  v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0LL);
  if ( !bgSprite )
    goto LABEL_25;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(bgSprite, v4, v7);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4350399 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4350399 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_4350399 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_4350399 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v9 = this->fields.bgSprite;
    if ( v9 )
    {
      timeStatusRecord_k__BackingField = v5->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = *(&v9->fields.updateAnchors + 1);
        return;
      }
    }
LABEL_25:
    sub_B7076C(v5, v6);
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
    sub_B7076C(v4, v5);
  UILabel__set_text(restDayTextSprite, v4, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetLoop(
        TitleInfoEventTimeStatus_o *this,
        int32_t loop,
        const MethodInfo *method)
{
  UISprite_o *dayCountTween; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopTitleSprite; // x19
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = loop;
  if ( (byte_43502C1 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_23062/*"time_status_icon_loop"*/);
    byte_43502C1 = 1;
  }
  dayCountTween = (UISprite_o *)this->fields.dayCountTween;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(dayCountTween, (System_String_o *)StringLiteral_23062/*"time_status_icon_loop"*/, 0LL);
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
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v9, 0LL);
      if ( loopTitleSprite )
      {
        UILabel__set_text(loopTitleSprite, (System_String_o *)gameObject, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B7076C(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !gameObject )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetRestDay(
        TitleInfoEventTimeStatus_o *this,
        int32_t restDay,
        const MethodInfo *method)
{
  struct UILabel_o *restDayCountLabel; // x21
  UILabel_o *loopCountLabel; // x20
  System_String_o *v7; // x21
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_43502C2 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_23059/*"time_status_fes01"*/);
    sub_B70694(&StringLiteral_23060/*"time_status_fes02"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_13559/*"TIME_REST2_DAYS"*/);
    byte_43502C2 = 1;
  }
  restDayCountLabel = this->fields.restDayCountLabel;
  if ( restDay >= 1 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI((UISprite_o *)restDayCountLabel, (System_String_o *)StringLiteral_23059/*"time_status_fes01"*/, 0LL);
    loopCountLabel = this->fields.loopCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_REST2_DAYS"*/, 0LL);
    v12 = restDay;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v8);
    v10 = System_String__Format(v7, v9, 0LL);
    if ( loopCountLabel )
    {
      UILabel__set_text(loopCountLabel, v10, 0LL);
      return;
    }
LABEL_17:
    sub_B7076C(v10, v11);
  }
  if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  AtlasManager__SetEventUI((UISprite_o *)restDayCountLabel, (System_String_o *)StringLiteral_23060/*"time_status_fes02"*/, 0LL);
  v10 = (System_String_o *)this->fields.loopCountLabel;
  if ( !v10 )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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

  if ( (byte_43502C5 & 1) == 0 )
  {
    sub_B70694(&TitleInfoEventTimeStatus_TypeInfo);
    byte_43502C5 = 1;
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
  TitleInfoEventTimeStatus_o *v5; // x21
  int32_t Day; // w0
  UILabel_o *restDayTextSprite; // x22
  TitleInfoEventTimeStatus_c *v8; // x0
  int v9; // w24
  UISprite_o *dayCountLabel; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  UserEventEntity_o *UserEventEntity; // x0
  int32_t *p_value; // x22
  UILabel_o *loopTitleSprite; // x23
  int32_t v16; // w8
  UISprite_o *restDayCountLabel; // x22
  TitleInfoEventTimeStatus_o *loopCountLabel; // x22
  System_String_o *v19; // x23
  __int64 v20; // x2
  Il2CppObject *v21; // x0
  System_String_o *v22; // x1
  TitleInfoEventTimeStatus_o *v23; // x0
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v27; // x0
  TimeStatusRecord_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  TerminalPramsManager_c *v35; // x0
  BattleServantConfConponent_o *p_timeStatusRecord_k__BackingField; // x0
  struct UIDrawCall_o *drawCall; // x8
  struct UIDrawCall_o *v38; // x8
  struct UIDrawCall_o *v39; // x8
  struct UIDrawCall_o *v40; // x8
  struct UISprite_o *bgSprite; // x8
  int v42; // [xsp+8h] [xbp-38h] BYREF
  int32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_43502C0 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TimeStatusRecord_TypeInfo);
    sub_B70694(&TitleInfoEventTimeStatus_TypeInfo);
    sub_B70694(&StringLiteral_23070/*"time_status_top"*/);
    sub_B70694(&StringLiteral_23059/*"time_status_fes01"*/);
    sub_B70694(&StringLiteral_23060/*"time_status_fes02"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_13559/*"TIME_REST2_DAYS"*/);
    sub_B70694(&StringLiteral_23062/*"time_status_icon_loop"*/);
    this = (TitleInfoEventTimeStatus_o *)sub_B70694(&StringLiteral_978/*"0"*/);
    byte_43502C0 = 1;
  }
  v43 = 0;
  if ( !eventDetailEntity )
    goto LABEL_99;
  this = (TitleInfoEventTimeStatus_o *)TitleInfoEventTimeStatus__GetEventStatusEntity(
                                         this,
                                         eventDetailEntity->fields.eventId,
                                         method);
  if ( !v4->fields.restDayTextSprite )
    goto LABEL_99;
  v5 = this;
  UILabel__set_text((UILabel_o *)v4->fields.restDayTextSprite, (System_String_o *)StringLiteral_978/*"0"*/, 0LL);
  if ( v5 )
  {
    Day = EventStatusEntity__GetDay((EventStatusEntity_o *)v5, 0LL);
    LODWORD(v4[1].klass) = Day;
    v43 = Day;
    restDayTextSprite = (UILabel_o *)v4->fields.restDayTextSprite;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)&v43, 0LL);
    if ( !restDayTextSprite )
      goto LABEL_99;
    UILabel__set_text(restDayTextSprite, (System_String_o *)this, 0LL);
    v8 = TitleInfoEventTimeStatus_TypeInfo;
    if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v8 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v9 = v8->static_fields->TIME_STATUS_DAY_MAX - v43;
  }
  else
  {
    v9 = 0;
  }
  dayCountLabel = (UISprite_o *)v4->fields.dayCountLabel;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(dayCountLabel, (System_String_o *)StringLiteral_23070/*"time_status_top"*/, 0LL);
  v11 = AtlasManager__SetEventUI((UISprite_o *)v4->fields.dayCountTween, (System_String_o *)StringLiteral_23062/*"time_status_icon_loop"*/, 0LL);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v11,
                      eventDetailEntity->fields.eventId,
                      v12);
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
    v16 = *p_value;
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
    v16 = 0;
  }
  HIDWORD(v4[1].klass) = v16;
  restDayCountLabel = (UISprite_o *)v4->fields.restDayCountLabel;
  if ( v9 < 1 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(restDayCountLabel, (System_String_o *)StringLiteral_23060/*"time_status_fes02"*/, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopCountLabel;
    if ( !this )
      goto LABEL_99;
    v22 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(restDayCountLabel, (System_String_o *)StringLiteral_23059/*"time_status_fes01"*/, 0LL);
    loopCountLabel = (TitleInfoEventTimeStatus_o *)v4->fields.loopCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13559/*"TIME_REST2_DAYS"*/, 0LL);
    v42 = v9;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, v20);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v19, v21, 0LL);
    if ( !loopCountLabel )
      goto LABEL_99;
    v22 = (System_String_o *)this;
    this = loopCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, v22, 0LL);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v23, (EventStatusEntity_o *)v5, v24);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4350399 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4350399 = 1;
  }
  v27 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( !v27->static_fields->_timeStatusRecord_k__BackingField )
  {
    v28 = (TimeStatusRecord_o *)sub_B70764(TimeStatusRecord_TypeInfo);
    TimeStatusRecord___ctor(v28, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434EF9E )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434EF9E = 1;
    }
    v35 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v35 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (BattleServantConfConponent_o *)&v35->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (BattleServantConfConponent_c *)v28;
    sub_B70630(p_timeStatusRecord_k__BackingField, (System_Int32_array **)v28, v29, v30, v31, v32, v33, v34);
    v27 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v27);
  if ( !byte_4350399 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4350399 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  drawCall = this[1].fields.loopTitleSprite->fields.drawCall;
  if ( !drawCall )
    goto LABEL_99;
  if ( drawCall->fields.m_CachedPtr != eventDetailEntity->fields.eventId )
  {
    if ( (this[2].fields.currentDay & 0x4000000) != 0 && !this[2].fields.m_CachedPtr )
      j_il2cpp_runtime_class_init_0(this);
    if ( !byte_4350399 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_4350399 = 1;
    }
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    }
    v38 = this[1].fields.loopTitleSprite->fields.drawCall;
    if ( v38 )
    {
      v38->fields.m_CachedPtr = eventDetailEntity->fields.eventId;
      if ( !byte_4350399 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
        byte_4350399 = 1;
      }
      if ( (this[2].fields.currentDay & 0x4000000) != 0 && !this[2].fields.m_CachedPtr )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
      }
      v39 = this[1].fields.loopTitleSprite->fields.drawCall;
      if ( v39 )
      {
        v39->fields.widgetCount = NowTimeState;
        goto LABEL_84;
      }
    }
LABEL_99:
    sub_B7076C(this, eventDetailEntity);
  }
LABEL_84:
  if ( (this[2].fields.currentDay & 0x4000000) != 0 && !this[2].fields.m_CachedPtr )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4350399 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4350399 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v40 = this[1].fields.loopTitleSprite->fields.drawCall;
  if ( !v40 )
    goto LABEL_99;
  this = (TitleInfoEventTimeStatus_o *)v4->fields.bgSprite;
  if ( !this )
    goto LABEL_99;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    v40->fields.widgetCount,
    NowTimeState,
    v25);
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
  UITweener_o *v5; // x0
  UITweener_o *v6; // x20
  EventDelegate_Callback_o *v7; // x21

  if ( (byte_43502C9 & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__);
    byte_43502C9 = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, (int32_t)this[1].klass, v2);
  v5 = *(UITweener_o **)&this->fields.currentDay;
  if ( !v5
    || (UITweener__PlayReverse(v5, 0LL),
        v6 = *(UITweener_o **)&this->fields.currentDay,
        v7 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v7,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0LL),
        !v6) )
  {
    sub_B7076C(v5, v4);
  }
  UITweener__SetOnFinished(v6, v7, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *restDayTextSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  UnityEngine_GameObject_o **v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v16; // x0
  float TIME_STATUS_DAY_EFFECT_SIZE; // s8
  UnityEngine_GameObject_o *v18; // x22
  float v19; // s3
  float v20; // s5
  float v21; // s4
  float v22; // s3
  UnityEngine_GameObject_o *v23; // x0
  UITweener_o *v24; // x19
  EventDelegate_Callback_o *v25; // x21
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_43502CA & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__);
    sub_B70694(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
    byte_43502CA = 1;
  }
  v3 = sub_B70764(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
  TitleInfoEventTimeStatus___c__DisplayClass20_0___ctor((TitleInfoEventTimeStatus___c__DisplayClass20_0_o *)v3, 0LL);
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
                                                    (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 16) = restDayTextSprite;
  v13 = (UnityEngine_GameObject_o **)(v3 + 16);
  sub_B70630(
    (BattleServantConfConponent_o *)(v3 + 16),
    (System_Int32_array **)restDayTextSprite,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  restDayTextSprite = (UnityEngine_GameObject_o *)this->fields.restDayTextSprite;
  if ( !restDayTextSprite )
    goto LABEL_13;
  v14 = *v13;
  parent = (UnityEngine_Component_o *)UIRect__get_parent((UIRect_o *)restDayTextSprite, 0LL);
  GameObjectExtensions__SafeSetParent(v14, parent, 0LL);
  GameObjectExtensions__ResetLocalScale(*v13, 0LL);
  restDayTextSprite = *v13;
  if ( !*v13 )
    goto LABEL_13;
  v16 = UnityEngine_GameObject__get_gameObject(restDayTextSprite, 0LL);
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  v18 = v16;
  one = UnityEngine_Vector3__get_one(0LL);
  v19 = *(float *)&this->fields.iconList;
  v20 = one.fields.x * v19;
  v21 = one.fields.y * v19;
  v22 = one.fields.z * v19;
  one.fields.y = v20;
  one.fields.z = v21;
  TweenScale__Begin(v18, TIME_STATUS_DAY_EFFECT_SIZE, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  restDayTextSprite = *v13;
  if ( !*v13
    || (v23 = UnityEngine_GameObject__get_gameObject(restDayTextSprite, 0LL),
        v24 = (UITweener_o *)TweenAlpha__Begin(v23, this->fields.TIME_STATUS_DAY_EFFECT_SIZE, 0.0, 0LL),
        v25 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v25,
          (Il2CppObject *)v3,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0LL),
        !v24) )
  {
LABEL_13:
    sub_B7076C(restDayTextSprite, v4);
  }
  UITweener__SetOnFinished(v24, v25, 0LL);
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
    sub_B7076C(0LL, v4);
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
    sub_B7076C(0LL, method);
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

  if ( (byte_434F28B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F28B = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_B7076C(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(gameObject, 0LL);
}