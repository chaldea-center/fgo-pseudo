void __fastcall TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  if ( (byte_4A59C3B & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventTimeStatus_TypeInfo);
    byte_4A59C3B = 1;
  }
  TitleInfoEventTimeStatus_TypeInfo->static_fields->TIME_STATUS_DAY_MAX = 7;
}


void __fastcall TitleInfoEventTimeStatus___ctor(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  this->fields.TIME_STATUS_DAY_EFFECT_SIZE = 1.5;
  *(_QWORD *)&this->fields.TIME_STATUS_DAY_ANIME_TIME = 0x3E99999A3F000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


EventStatusEntity_o *__fastcall TitleInfoEventTimeStatus__GetEventStatusEntity(
        TitleInfoEventTimeStatus_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A59C3A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59C3A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v5);
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
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A59C39 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59C39 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B8880C(Instance, v5);
  return UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0LL);
}


bool __fastcall TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8

  iconList = this->fields.iconList;
  if ( !iconList )
    sub_1B8880C(this, method);
  return (iconList->fields.startState & 0xFFFFFFFE) == 2 && iconList->fields.endState < 2u;
}


void __fastcall TitleInfoEventTimeStatus__PlayChangeDayAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTimeStatus_o *v2; // x19
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  UITweener_o *dayCountTween; // x20
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
  if ( (byte_4A59C37 & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__);
    sub_1B885B0(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__);
    sub_1B885B0(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__);
    this = (TitleInfoEventTimeStatus_o *)sub_1B885B0(&TitleInfoEventTimeStatus_TypeInfo);
    byte_4A59C37 = 1;
  }
  iconList = v2->fields.iconList;
  if ( !iconList )
    goto LABEL_24;
  if ( (iconList->fields.startState & 0xFFFFFFFE) != 2 || iconList->fields.endState > 1u )
    return;
  this = (TitleInfoEventTimeStatus_o *)v2->fields.dayCountTween;
  if ( !this )
    goto LABEL_24;
  UITweener__PlayForward((UITweener_o *)this, 0LL);
  dayCountTween = (UITweener_o *)v2->fields.dayCountTween;
  v5 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)v2,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0LL);
  if ( !dayCountTween )
    goto LABEL_24;
  UITweener__SetOnFinished(dayCountTween, v5, 0LL);
  if ( v2->fields.currentDay == 1 )
  {
    this = (TitleInfoEventTimeStatus_o *)v2->fields.loopCountLabel;
    if ( !this )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v8 = (UITweener_o *)TweenAlpha__Begin(gameObject, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0LL);
    v9 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0LL);
    if ( !v8 )
      goto LABEL_24;
    UITweener__SetOnFinished(v8, v9, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_24;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_24;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
      if ( this )
      {
        this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
          if ( this )
          {
            ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
              this,
              this->klass[1]._1.declaringType,
              0.0);
            this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
            if ( this )
            {
              v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v11 = (UITweener_o *)TweenAlpha__Begin(v10, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0LL);
              v12 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo);
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
LABEL_24:
      sub_1B8880C(this, method);
    }
  }
LABEL_20:
  v13 = TitleInfoEventTimeStatus_TypeInfo;
  if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v13 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(v2, v13->static_fields->TIME_STATUS_DAY_MAX - v2->fields.currentDay, v6);
}


void __fastcall TitleInfoEventTimeStatus__PlayIconScrollAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  TitleInfoEventTimeImgListComponent_o *iconList; // x20
  System_Action_o *v4; // x21
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  TerminalPramsManager_c *v8; // x0
  struct TitleInfoEventTimeImgListComponent_o *v9; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_4A59C36 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__);
    byte_4A59C36 = 1;
  }
  iconList = this->fields.iconList;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0LL);
  if ( !iconList )
    goto LABEL_21;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(iconList, v4, v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A59CCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A59CCA = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  if ( v8->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( !v8->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v8);
    if ( !byte_4A59CCA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A59CCA = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v9 = this->fields.iconList;
    if ( v9 )
    {
      timeStatusRecord_k__BackingField = v5->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = v9->fields.endState;
        return;
      }
    }
LABEL_21:
    sub_1B8880C(v5, v6);
  }
}


void __fastcall TitleInfoEventTimeStatus__SetDay(
        TitleInfoEventTimeStatus_o *this,
        int32_t day,
        const MethodInfo *method)
{
  UILabel_o *dayCountLabel; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = day;
  dayCountLabel = this->fields.dayCountLabel;
  v4 = System_Int32__ToString((int32_t)&v6, 0LL);
  if ( !dayCountLabel )
    sub_1B8880C(v4, v5);
  UILabel__set_text(dayCountLabel, v4, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetLoop(
        TitleInfoEventTimeStatus_o *this,
        int32_t loop,
        const MethodInfo *method)
{
  UISprite_o *loopTitleSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopCountLabel; // x19
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = loop;
  if ( (byte_4A59C34 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_23938/*"time_status_icon_loop"*/);
    byte_4A59C34 = 1;
  }
  loopTitleSprite = this->fields.loopTitleSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(loopTitleSprite, (System_String_o *)StringLiteral_23938/*"time_status_icon_loop"*/, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !gameObject )
    goto LABEL_13;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_13;
  if ( loop >= 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
    if ( gameObject )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
      loopCountLabel = this->fields.loopCountLabel;
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v9, 0LL);
      if ( loopCountLabel )
      {
        UILabel__set_text(loopCountLabel, (System_String_o *)gameObject, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B8880C(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.loopCountLabel;
  if ( !gameObject )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetRestDay(
        TitleInfoEventTimeStatus_o *this,
        int32_t restDay,
        const MethodInfo *method)
{
  UISprite_o *restDayTextSprite; // x21
  UILabel_o *restDayCountLabel; // x20
  System_String_o *v7; // x21
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A59C35 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_23935/*"time_status_fes01"*/);
    sub_1B885B0(&StringLiteral_23936/*"time_status_fes02"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_13308/*"TIME_REST2_DAYS"*/);
    byte_4A59C35 = 1;
  }
  restDayTextSprite = this->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( restDay >= 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23935/*"time_status_fes01"*/, 0LL);
    restDayCountLabel = this->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13308/*"TIME_REST2_DAYS"*/, 0LL);
    v14 = restDay;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v8, v9, v10);
    v12 = System_String__Format(v7, v11, 0LL);
    if ( restDayCountLabel )
    {
      UILabel__set_text(restDayCountLabel, v12, 0LL);
      return;
    }
LABEL_12:
    sub_1B8880C(v12, v13);
  }
  AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23936/*"time_status_fes02"*/, 0LL);
  v12 = (System_String_o *)this->fields.restDayCountLabel;
  if ( !v12 )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)v12, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetYesterday(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentDay; // w8
  int32_t currentLoop; // w21
  int32_t TIME_STATUS_DAY_MAX; // w20
  TitleInfoEventTimeStatus_c *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  TitleInfoEventTimeStatus_c *v10; // x0

  if ( (byte_4A59C38 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventTimeStatus_TypeInfo);
    byte_4A59C38 = 1;
  }
  currentDay = this->fields.currentDay;
  currentLoop = this->fields.currentLoop;
  TIME_STATUS_DAY_MAX = currentDay - 1;
  if ( currentDay == 1 )
  {
    v7 = TitleInfoEventTimeStatus_TypeInfo;
    if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v7 = TitleInfoEventTimeStatus_TypeInfo;
      currentLoop = this->fields.currentLoop;
    }
    --currentLoop;
    TIME_STATUS_DAY_MAX = v7->static_fields->TIME_STATUS_DAY_MAX;
  }
  TitleInfoEventTimeStatus__SetDay(this, TIME_STATUS_DAY_MAX, v2);
  TitleInfoEventTimeStatus__SetLoop(this, currentLoop, v8);
  v10 = TitleInfoEventTimeStatus_TypeInfo;
  if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
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
  UILabel_o *dayCountLabel; // x22
  TitleInfoEventTimeStatus_c *v8; // x0
  int v9; // w24
  UISprite_o *bgSprite; // x22
  _BOOL8 v11; // x0
  const MethodInfo *v12; // x2
  UserEventEntity_o *UserEventEntity; // x0
  int32_t *p_value; // x22
  UILabel_o *loopCountLabel; // x23
  int32_t v16; // w8
  UISprite_o *restDayTextSprite; // x22
  TitleInfoEventTimeStatus_o *restDayCountLabel; // x22
  System_String_o *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  TitleInfoEventTimeStatus_o *v24; // x1
  TitleInfoEventTimeStatus_o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v29; // x0
  TimeStatusRecord_o *v30; // x23
  int32_t v31; // w2
  int32_t v32; // w3
  TerminalPramsManager_c *v33; // x0
  ServantStatusBattleListViewItem_o *p_timeStatusRecord_k__BackingField; // x0
  struct UIDrawCall_o *drawCall; // x8
  struct UIDrawCall_o *v36; // x8
  struct UIDrawCall_o *v37; // x8
  struct UIDrawCall_o *v38; // x8
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  int v40; // [xsp+8h] [xbp-48h] BYREF
  int32_t v41; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4A59C33 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TimeStatusRecord_TypeInfo);
    sub_1B885B0(&TitleInfoEventTimeStatus_TypeInfo);
    sub_1B885B0(&StringLiteral_23946/*"time_status_top"*/);
    sub_1B885B0(&StringLiteral_23935/*"time_status_fes01"*/);
    sub_1B885B0(&StringLiteral_23936/*"time_status_fes02"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_13308/*"TIME_REST2_DAYS"*/);
    sub_1B885B0(&StringLiteral_23938/*"time_status_icon_loop"*/);
    this = (TitleInfoEventTimeStatus_o *)sub_1B885B0(&StringLiteral_1212/*"0"*/);
    byte_4A59C33 = 1;
  }
  v41 = 0;
  if ( !eventDetailEntity )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)TitleInfoEventTimeStatus__GetEventStatusEntity(
                                         this,
                                         eventDetailEntity->fields.eventId,
                                         method);
  if ( !v4->fields.dayCountLabel )
    goto LABEL_81;
  v5 = this;
  UILabel__set_text(v4->fields.dayCountLabel, (System_String_o *)StringLiteral_1212/*"0"*/, 0LL);
  if ( v5 )
  {
    Day = EventStatusEntity__GetDay((EventStatusEntity_o *)v5, 0LL);
    v4->fields.currentDay = Day;
    v41 = Day;
    dayCountLabel = v4->fields.dayCountLabel;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)&v41, 0LL);
    if ( !dayCountLabel )
      goto LABEL_81;
    UILabel__set_text(dayCountLabel, (System_String_o *)this, 0LL);
    v8 = TitleInfoEventTimeStatus_TypeInfo;
    if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v8 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v9 = v8->static_fields->TIME_STATUS_DAY_MAX - v41;
  }
  else
  {
    v9 = 0;
  }
  bgSprite = v4->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_23946/*"time_status_top"*/, 0LL);
  v11 = AtlasManager__SetEventUI(v4->fields.loopTitleSprite, (System_String_o *)StringLiteral_23938/*"time_status_icon_loop"*/, 0LL);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v11,
                      eventDetailEntity->fields.eventId,
                      v12);
  if ( UserEventEntity && (p_value = &UserEventEntity->fields.value, UserEventEntity->fields.value >= 1) )
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_81;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_81;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_81;
    ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
    loopCountLabel = v4->fields.loopCountLabel;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)p_value, 0LL);
    if ( !loopCountLabel )
      goto LABEL_81;
    UILabel__set_text(loopCountLabel, (System_String_o *)this, 0LL);
    v16 = *p_value;
  }
  else
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_81;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_81;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopCountLabel;
    if ( !this )
      goto LABEL_81;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v16 = 0;
  }
  v4->fields.currentLoop = v16;
  restDayTextSprite = v4->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v9 < 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23936/*"time_status_fes02"*/, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !this )
      goto LABEL_81;
    v24 = (TitleInfoEventTimeStatus_o *)StringLiteral_1/*""*/;
  }
  else
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23935/*"time_status_fes01"*/, 0LL);
    restDayCountLabel = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13308/*"TIME_REST2_DAYS"*/, 0LL);
    v40 = v9;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40, v20, v21, v22);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v19, v23, 0LL);
    if ( !restDayCountLabel )
      goto LABEL_81;
    v24 = this;
    this = restDayCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v24, 0LL);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v25, (EventStatusEntity_o *)v5, v26);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A59CCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A59CCA = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( !v29->static_fields->_timeStatusRecord_k__BackingField )
  {
    v30 = (TimeStatusRecord_o *)sub_1B887FC(TimeStatusRecord_TypeInfo);
    TimeStatusRecord___ctor(v30, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A588CA )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A588CA = 1;
    }
    v33 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v33 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (ServantStatusBattleListViewItem_o *)&v33->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v30;
    sub_1B88554(p_timeStatusRecord_k__BackingField, (int32_t)v30, v31, v32);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( !v29->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v29);
  if ( !byte_4A59CCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A59CCA = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  drawCall = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !drawCall )
    goto LABEL_81;
  if ( drawCall->fields.m_CachedPtr == eventDetailEntity->fields.eventId )
    goto LABEL_68;
  if ( !LODWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4A59CCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A59CCA = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v36 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v36 )
    goto LABEL_81;
  v36->fields.m_CachedPtr = eventDetailEntity->fields.eventId;
  if ( !byte_4A59CCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    byte_4A59CCA = 1;
  }
  if ( !LODWORD(this[1].fields.dayCountTween) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v37 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v37 )
LABEL_81:
    sub_1B8880C(this, eventDetailEntity);
  *((_DWORD *)&v37->fields.UnityEngine_Behaviour_Fields + 1) = NowTimeState;
LABEL_68:
  if ( !LODWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4A59CCA )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A59CCA = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v38 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v38 )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)v4->fields.iconList;
  if ( !this )
    goto LABEL_81;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    *((_DWORD *)&v38->fields.UnityEngine_Behaviour_Fields + 1),
    NowTimeState,
    v27);
  iconList = v4->fields.iconList;
  if ( !iconList )
    goto LABEL_81;
  if ( (iconList->fields.startState & 0xFFFFFFFE) == 2 && iconList->fields.endState <= 1u )
    TitleInfoEventTimeStatus__SetYesterday(v4, (const MethodInfo *)eventDetailEntity);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_0(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UITweener_o *dayCountTween; // x0
  UITweener_o *v6; // x20
  EventDelegate_Callback_o *v7; // x21

  if ( (byte_4A59C3C & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__);
    byte_4A59C3C = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, this->fields.currentDay, v2);
  dayCountTween = (UITweener_o *)this->fields.dayCountTween;
  if ( !dayCountTween
    || (UITweener__PlayReverse(dayCountTween, 0LL),
        v6 = (UITweener_o *)this->fields.dayCountTween,
        v7 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v7,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0LL),
        !v6) )
  {
    sub_1B8880C(dayCountTween, v4);
  }
  UITweener__SetOnFinished(v6, v7, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *dayCountLabel; // x0
  Il2CppObject *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_GameObject_o **v9; // x21
  UnityEngine_GameObject_o *v10; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v12; // x0
  float TIME_STATUS_DAY_EFFECT_TIME; // s8
  UnityEngine_GameObject_o *v14; // x22
  float TIME_STATUS_DAY_EFFECT_SIZE; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v17; // x0
  UITweener_o *v18; // x19
  EventDelegate_Callback_o *v19; // x21
  UnityEngine_Vector3_o v20; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A59C3D & 1) == 0 )
  {
    sub_1B885B0(&EventDelegate_Callback_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__);
    sub_1B885B0(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
    byte_4A59C3D = 1;
  }
  v3 = sub_1B887FC(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dayCountLabel, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dayCountLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                gameObject,
                                                (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = dayCountLabel;
  v9 = (UnityEngine_GameObject_o **)(v3 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)dayCountLabel, v7, v8);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  v10 = *v9;
  parent = (UnityEngine_Component_o *)UIRect__get_parent((UIRect_o *)dayCountLabel, 0LL);
  GameObjectExtensions__SafeSetParent(v10, parent, 0LL);
  GameObjectExtensions__ResetLocalScale(*v9, 0LL);
  dayCountLabel = *v9;
  if ( !*v9 )
    goto LABEL_14;
  v12 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0LL);
  TIME_STATUS_DAY_EFFECT_TIME = this->fields.TIME_STATUS_DAY_EFFECT_TIME;
  v14 = v12;
  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v20.fields.x = static_fields->oneVector.fields.x * TIME_STATUS_DAY_EFFECT_SIZE;
  v20.fields.y = static_fields->oneVector.fields.y * TIME_STATUS_DAY_EFFECT_SIZE;
  v20.fields.z = static_fields->oneVector.fields.z * TIME_STATUS_DAY_EFFECT_SIZE;
  TweenScale__Begin(v14, TIME_STATUS_DAY_EFFECT_TIME, v20, 0LL);
  dayCountLabel = *v9;
  if ( !*v9
    || (v17 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0LL),
        v18 = (UITweener_o *)TweenAlpha__Begin(v17, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL),
        v19 = (EventDelegate_Callback_o *)sub_1B887FC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v19,
          (Il2CppObject *)v3,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0LL),
        !v18) )
  {
LABEL_14:
    sub_1B8880C(dayCountLabel, v4);
  }
  UITweener__SetOnFinished(v18, v19, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_3(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *loopCountLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  TitleInfoEventTimeStatus__SetLoop(this, this->fields.currentLoop, v2);
  loopCountLabel = (UnityEngine_Component_o *)this->fields.loopCountLabel;
  if ( !loopCountLabel )
    sub_1B8880C(0LL, v4);
  gameObject = UnityEngine_Component__get_gameObject(loopCountLabel, 0LL);
  TweenAlpha__Begin(gameObject, this->fields.TIME_STATUS_DAY_ANIME_TIME, 1.0, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_4(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *loopTitleSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  loopTitleSprite = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !loopTitleSprite )
    sub_1B8880C(0LL, method);
  gameObject = UnityEngine_Component__get_gameObject(loopTitleSprite, 0LL);
  TweenAlpha__Begin(gameObject, this->fields.TIME_STATUS_DAY_ANIME_TIME, 1.0, 0LL);
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

  if ( (byte_4A59C3E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C3E = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_1B8880C(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
}