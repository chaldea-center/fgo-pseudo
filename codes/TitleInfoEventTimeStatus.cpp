void TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  if ( (byte_4CECFFF & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventTimeStatus_TypeInfo);
    byte_4CECFFF = 1;
  }
  TitleInfoEventTimeStatus_TypeInfo->static_fields->TIME_STATUS_DAY_MAX = 7;
}


void TitleInfoEventTimeStatus___ctor(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  this->fields.TIME_STATUS_DAY_EFFECT_SIZE = 1.5;
  *(_QWORD *)&this->fields.TIME_STATUS_DAY_ANIME_TIME = 0x3E99999A3F000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EventStatusEntity_o *TitleInfoEventTimeStatus__GetEventStatusEntity(
        TitleInfoEventTimeStatus_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CECFFE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CECFFE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0 )
  {
    sub_1C7BD40(Instance, v5);
  }
  return EventStatusMaster__getNowEntity((EventStatusMaster_o *)Instance, eventId, 0);
}


int32_t TitleInfoEventTimeStatus__GetNowTimeState(
        TitleInfoEventTimeStatus_o *this,
        EventStatusEntity_o *entity,
        const MethodInfo *method)
{
  bool IsScenario; // w20
  int v5; // w0

  if ( !entity )
    return 0;
  IsScenario = EventStatusEntity__IsScenario(entity, 0);
  if ( EventStatusEntity__IsNight(entity, 0) )
    v5 = 2;
  else
    v5 = 0;
  return v5 & 0xFFFFFFFE | IsScenario;
}


UserEventEntity_o *TitleInfoEventTimeStatus__GetUserEventEntity(
        TitleInfoEventTimeStatus_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4CECFFD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CECFFD = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1C7BD40(Instance, v5);
  return UserEventMaster__GetEntity(
           (UserEventMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventId,
           0);
}


bool TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8

  iconList = this->fields.iconList;
  if ( !iconList )
    sub_1C7BD40(this, method);
  return (iconList->fields.startState & 0xFFFFFFFE) == 2 && iconList->fields.endState < 2u;
}


void TitleInfoEventTimeStatus__PlayChangeDayAnime(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
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
  if ( (byte_4CECFFB & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_Callback_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__);
    sub_1C7BAE8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__);
    sub_1C7BAE8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__);
    this = (TitleInfoEventTimeStatus_o *)sub_1C7BAE8(&TitleInfoEventTimeStatus_TypeInfo);
    byte_4CECFFB = 1;
  }
  iconList = v2->fields.iconList;
  if ( !iconList )
    goto LABEL_24;
  if ( (iconList->fields.startState & 0xFFFFFFFE) != 2 || iconList->fields.endState > 1u )
    return;
  this = (TitleInfoEventTimeStatus_o *)v2->fields.dayCountTween;
  if ( !this )
    goto LABEL_24;
  UITweener__PlayForward((UITweener_o *)this, 0);
  dayCountTween = (UITweener_o *)v2->fields.dayCountTween;
  v5 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v5,
    (Il2CppObject *)v2,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0);
  if ( !dayCountTween )
    goto LABEL_24;
  UITweener__SetOnFinished(dayCountTween, v5, 0);
  if ( v2->fields.currentDay == 1 )
  {
    this = (TitleInfoEventTimeStatus_o *)v2->fields.loopCountLabel;
    if ( !this )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v8 = (UITweener_o *)TweenAlpha__Begin(gameObject, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0);
    v9 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v9,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0);
    if ( !v8 )
      goto LABEL_24;
    UITweener__SetOnFinished(v8, v9, 0);
    this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_24;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_24;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
    {
      this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
      if ( this )
      {
        this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
          this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
          if ( this )
          {
            ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
              this,
              this->klass[1]._1.castClass,
              0.0);
            this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
            if ( this )
            {
              v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              v11 = (UITweener_o *)TweenAlpha__Begin(v10, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0);
              v12 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo);
              EventDelegate_Callback___ctor(
                v12,
                (Il2CppObject *)v2,
                Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__,
                0);
              if ( v11 )
              {
                UITweener__SetOnFinished(v11, v12, 0);
                goto LABEL_20;
              }
            }
          }
        }
      }
LABEL_24:
      sub_1C7BD40(this, method);
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


void TitleInfoEventTimeStatus__PlayIconScrollAnime(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  TitleInfoEventTimeImgListComponent_o *iconList; // x20
  System_Action_o *v4; // x21
  TerminalPramsManager_c *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  TerminalPramsManager_c *v8; // x0
  struct TitleInfoEventTimeImgListComponent_o *v9; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_4CECFFA & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__);
    byte_4CECFFA = 1;
  }
  iconList = this->fields.iconList;
  v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0);
  if ( !iconList )
    goto LABEL_21;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(iconList, v4, v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CED029 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CED029 = 1;
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
    if ( !byte_4CED029 )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CED029 = 1;
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
    sub_1C7BD40(v5, v6);
  }
}


void TitleInfoEventTimeStatus__SetDay(TitleInfoEventTimeStatus_o *this, int32_t day, const MethodInfo *method)
{
  UILabel_o *dayCountLabel; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = day;
  dayCountLabel = this->fields.dayCountLabel;
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  if ( !dayCountLabel )
    sub_1C7BD40(v4, v5);
  UILabel__set_text(dayCountLabel, v4, 0);
}


void TitleInfoEventTimeStatus__SetLoop(TitleInfoEventTimeStatus_o *this, int32_t loop, const MethodInfo *method)
{
  UISprite_o *loopTitleSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopCountLabel; // x19
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = loop;
  if ( (byte_4CECFF8 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_24316/*"time_status_icon_loop"*/);
    byte_4CECFF8 = 1;
  }
  loopTitleSprite = this->fields.loopTitleSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(loopTitleSprite, (System_String_o *)StringLiteral_24316/*"time_status_icon_loop"*/, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !gameObject )
    goto LABEL_13;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_13;
  if ( loop >= 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
    if ( gameObject )
    {
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
        gameObject,
        gameObject->klass[2]._1.generic_class);
      loopCountLabel = this->fields.loopCountLabel;
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v9, 0);
      if ( loopCountLabel )
      {
        UILabel__set_text(loopCountLabel, (System_String_o *)gameObject, 0);
        return;
      }
    }
LABEL_13:
    sub_1C7BD40(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.loopCountLabel;
  if ( !gameObject )
    goto LABEL_13;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void TitleInfoEventTimeStatus__SetRestDay(TitleInfoEventTimeStatus_o *this, int32_t restDay, const MethodInfo *method)
{
  UISprite_o *restDayTextSprite; // x21
  UILabel_o *restDayCountLabel; // x20
  System_String_o *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  __int64 v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CECFF9 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24313/*"time_status_fes01"*/);
    sub_1C7BAE8(&StringLiteral_24314/*"time_status_fes02"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_13455/*"TIME_REST2_DAYS"*/);
    byte_4CECFF9 = 1;
  }
  restDayTextSprite = this->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( restDay >= 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_24313/*"time_status_fes01"*/, 0);
    restDayCountLabel = this->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_13455/*"TIME_REST2_DAYS"*/, 0);
    v11 = restDay;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
    v9 = System_String__Format(v7, v8, 0);
    if ( restDayCountLabel )
    {
      UILabel__set_text(restDayCountLabel, v9, 0);
      return;
    }
LABEL_12:
    sub_1C7BD40(v9, v10);
  }
  AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_24314/*"time_status_fes02"*/, 0);
  v9 = (System_String_o *)this->fields.restDayCountLabel;
  if ( !v9 )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)v9, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void TitleInfoEventTimeStatus__SetYesterday(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentDay; // w8
  int32_t currentLoop; // w21
  int32_t TIME_STATUS_DAY_MAX; // w20
  TitleInfoEventTimeStatus_c *v7; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x2
  TitleInfoEventTimeStatus_c *v10; // x0

  if ( (byte_4CECFFC & 1) == 0 )
  {
    sub_1C7BAE8(&TitleInfoEventTimeStatus_TypeInfo);
    byte_4CECFFC = 1;
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


void TitleInfoEventTimeStatus__Setup(
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
  Il2CppObject *v20; // x0
  TitleInfoEventTimeStatus_o *v21; // x1
  TitleInfoEventTimeStatus_o *v22; // x0
  const MethodInfo *v23; // x2
  const MethodInfo *v24; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v26; // x0
  TimeStatusRecord_o *v27; // x23
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  TerminalPramsManager_c *v34; // x0
  GrandQuestFolderBoardItem_o *p_timeStatusRecord_k__BackingField; // x0
  struct UIDrawCall_o *drawCall; // x8
  struct UIDrawCall_o *v37; // x8
  struct UIDrawCall_o *v38; // x8
  struct UIDrawCall_o *v39; // x8
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  int v41; // [xsp+8h] [xbp-48h] BYREF
  int32_t v42; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4CECFF7 & 1) == 0 )
  {
    sub_1C7BAE8(&AtlasManager_TypeInfo);
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    sub_1C7BAE8(&TimeStatusRecord_TypeInfo);
    sub_1C7BAE8(&TitleInfoEventTimeStatus_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24324/*"time_status_top"*/);
    sub_1C7BAE8(&StringLiteral_24313/*"time_status_fes01"*/);
    sub_1C7BAE8(&StringLiteral_24314/*"time_status_fes02"*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    sub_1C7BAE8(&StringLiteral_13455/*"TIME_REST2_DAYS"*/);
    sub_1C7BAE8(&StringLiteral_24316/*"time_status_icon_loop"*/);
    this = (TitleInfoEventTimeStatus_o *)sub_1C7BAE8(&StringLiteral_1116/*"0"*/);
    byte_4CECFF7 = 1;
  }
  v42 = 0;
  if ( !eventDetailEntity )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)TitleInfoEventTimeStatus__GetEventStatusEntity(
                                         this,
                                         eventDetailEntity->fields.eventId,
                                         method);
  if ( !v4->fields.dayCountLabel )
    goto LABEL_81;
  v5 = this;
  UILabel__set_text(v4->fields.dayCountLabel, (System_String_o *)StringLiteral_1116/*"0"*/, 0);
  if ( v5 )
  {
    Day = EventStatusEntity__GetDay((EventStatusEntity_o *)v5, 0);
    v4->fields.currentDay = Day;
    v42 = Day;
    dayCountLabel = v4->fields.dayCountLabel;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)&v42, 0);
    if ( !dayCountLabel )
      goto LABEL_81;
    UILabel__set_text(dayCountLabel, (System_String_o *)this, 0);
    v8 = TitleInfoEventTimeStatus_TypeInfo;
    if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v8 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v9 = v8->static_fields->TIME_STATUS_DAY_MAX - v42;
  }
  else
  {
    v9 = 0;
  }
  bgSprite = v4->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_24324/*"time_status_top"*/, 0);
  v11 = AtlasManager__SetEventUI(v4->fields.loopTitleSprite, (System_String_o *)StringLiteral_24316/*"time_status_icon_loop"*/, 0);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v11,
                      eventDetailEntity->fields.eventId,
                      v12);
  if ( UserEventEntity && (p_value = &UserEventEntity->fields.value, UserEventEntity->fields.value >= 1) )
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_81;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_81;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_81;
    ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, void *))this->klass[2]._1.parent)(
      this,
      this->klass[2]._1.generic_class);
    loopCountLabel = v4->fields.loopCountLabel;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)p_value, 0);
    if ( !loopCountLabel )
      goto LABEL_81;
    UILabel__set_text(loopCountLabel, (System_String_o *)this, 0);
    v16 = *p_value;
  }
  else
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_81;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_81;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopCountLabel;
    if ( !this )
      goto LABEL_81;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    v16 = 0;
  }
  v4->fields.currentLoop = v16;
  restDayTextSprite = v4->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v9 < 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_24314/*"time_status_fes02"*/, 0);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !this )
      goto LABEL_81;
    v21 = (TitleInfoEventTimeStatus_o *)StringLiteral_1/*""*/;
  }
  else
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_24313/*"time_status_fes01"*/, 0);
    restDayCountLabel = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_13455/*"TIME_REST2_DAYS"*/, 0);
    v41 = v9;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v19, v20, 0);
    if ( !restDayCountLabel )
      goto LABEL_81;
    v21 = this;
    this = restDayCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v21, 0);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v22, (EventStatusEntity_o *)v5, v23);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4CED029 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CED029 = 1;
  }
  v26 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v26 = TerminalPramsManager_TypeInfo;
  }
  if ( !v26->static_fields->_timeStatusRecord_k__BackingField )
  {
    v27 = (TimeStatusRecord_o *)sub_1C7BD34(TimeStatusRecord_TypeInfo);
    TimeStatusRecord___ctor(v27, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4CEBA4E )
    {
      sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
      byte_4CEBA4E = 1;
    }
    v34 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v34 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (GrandQuestFolderBoardItem_o *)&v34->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v27;
    sub_1C7BA8C(p_timeStatusRecord_k__BackingField, (int32_t)v27, v28, v29, v30, v31, v32, v33);
    v26 = TerminalPramsManager_TypeInfo;
  }
  if ( !v26->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v26);
  if ( !byte_4CED029 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CED029 = 1;
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
  if ( LODWORD(drawCall->fields.m_CachedPtr) == eventDetailEntity->fields.eventId )
    goto LABEL_68;
  if ( !LODWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4CED029 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CED029 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v37 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v37 )
    goto LABEL_81;
  LODWORD(v37->fields.m_CachedPtr) = eventDetailEntity->fields.eventId;
  if ( !byte_4CED029 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    byte_4CED029 = 1;
  }
  if ( !LODWORD(this[1].fields.dayCountTween) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v38 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v38 )
LABEL_81:
    sub_1C7BD40(this, eventDetailEntity);
  HIDWORD(v38->fields.m_CachedPtr) = NowTimeState;
LABEL_68:
  if ( !LODWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4CED029 )
  {
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CED029 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v39 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v39 )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)v4->fields.iconList;
  if ( !this )
    goto LABEL_81;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    HIDWORD(v39->fields.m_CachedPtr),
    NowTimeState,
    v24);
  iconList = v4->fields.iconList;
  if ( !iconList )
    goto LABEL_81;
  if ( (iconList->fields.startState & 0xFFFFFFFE) == 2 && iconList->fields.endState <= 1u )
    TitleInfoEventTimeStatus__SetYesterday(v4, (const MethodInfo *)eventDetailEntity);
}


void TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_0(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UITweener_o *dayCountTween; // x0
  UITweener_o *v6; // x20
  EventDelegate_Callback_o *v7; // x21

  if ( (byte_4CED000 & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_Callback_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__);
    byte_4CED000 = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, this->fields.currentDay, v2);
  dayCountTween = (UITweener_o *)this->fields.dayCountTween;
  if ( !dayCountTween
    || (UITweener__PlayReverse(dayCountTween, 0),
        v6 = (UITweener_o *)this->fields.dayCountTween,
        v7 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v7,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0),
        !v6) )
  {
    sub_1C7BD40(dayCountTween, v4);
  }
  UITweener__SetOnFinished(v6, v7, 0);
}


void TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *dayCountLabel; // x0
  Il2CppObject *gameObject; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_GameObject_o **v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v16; // x0
  float TIME_STATUS_DAY_EFFECT_TIME; // s8
  UnityEngine_GameObject_o *v18; // x22
  float TIME_STATUS_DAY_EFFECT_SIZE; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v21; // x0
  UITweener_o *v22; // x19
  EventDelegate_Callback_o *v23; // x21
  UnityEngine_Vector3_o v24; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4CED001 & 1) == 0 )
  {
    sub_1C7BAE8(&EventDelegate_Callback_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__);
    sub_1C7BAE8(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
    byte_4CED001 = 1;
  }
  v3 = sub_1C7BD34(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dayCountLabel, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dayCountLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                gameObject,
                                                (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = dayCountLabel;
  v13 = (UnityEngine_GameObject_o **)(v3 + 16);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)dayCountLabel, v7, v8, v9, v10, v11, v12);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  v14 = *v13;
  parent = (UnityEngine_Component_o *)UIRect__get_parent((UIRect_o *)dayCountLabel, 0);
  GameObjectExtensions__SafeSetParent(v14, parent, 0);
  GameObjectExtensions__ResetLocalScale(*v13, 0);
  dayCountLabel = *v13;
  if ( !*v13 )
    goto LABEL_14;
  v16 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0);
  TIME_STATUS_DAY_EFFECT_TIME = this->fields.TIME_STATUS_DAY_EFFECT_TIME;
  v18 = v16;
  if ( !byte_4CE7E5E )
  {
    sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
    byte_4CE7E5E = 1;
  }
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v24.fields.x = static_fields->oneVector.fields.x * TIME_STATUS_DAY_EFFECT_SIZE;
  v24.fields.y = static_fields->oneVector.fields.y * TIME_STATUS_DAY_EFFECT_SIZE;
  v24.fields.z = static_fields->oneVector.fields.z * TIME_STATUS_DAY_EFFECT_SIZE;
  TweenScale__Begin(v18, TIME_STATUS_DAY_EFFECT_TIME, v24, 0);
  dayCountLabel = *v13;
  if ( !*v13
    || (v21 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0),
        v22 = (UITweener_o *)TweenAlpha__Begin(v21, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0),
        v23 = (EventDelegate_Callback_o *)sub_1C7BD34(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v23,
          (Il2CppObject *)v3,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0),
        !v22) )
  {
LABEL_14:
    sub_1C7BD40(dayCountLabel, v4);
  }
  UITweener__SetOnFinished(v22, v23, 0);
}


void TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_3(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Component_o *loopCountLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  TitleInfoEventTimeStatus__SetLoop(this, this->fields.currentLoop, v2);
  loopCountLabel = (UnityEngine_Component_o *)this->fields.loopCountLabel;
  if ( !loopCountLabel )
    sub_1C7BD40(0, v4);
  gameObject = UnityEngine_Component__get_gameObject(loopCountLabel, 0);
  TweenAlpha__Begin(gameObject, this->fields.TIME_STATUS_DAY_ANIME_TIME, 1.0, 0);
}


void TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_4(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *loopTitleSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  loopTitleSprite = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !loopTitleSprite )
    sub_1C7BD40(0, method);
  gameObject = UnityEngine_Component__get_gameObject(loopTitleSprite, 0);
  TweenAlpha__Begin(gameObject, this->fields.TIME_STATUS_DAY_ANIME_TIME, 1.0, 0);
}


void TitleInfoEventTimeStatus_UIActiveQuestData___ctor(
        TitleInfoEventTimeStatus_UIActiveQuestData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTimeStatus___c__DisplayClass20_0___ctor(
        TitleInfoEventTimeStatus___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventTimeStatus___c__DisplayClass20_0___PlayChangeDayAnime_b__2(
        TitleInfoEventTimeStatus___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4CED002 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED002 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_1C7BD40(0, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71870148(gameObject, 0);
}