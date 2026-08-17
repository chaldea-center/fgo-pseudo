void TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  if ( (byte_596F103 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventTimeStatus_TypeInfo);
    byte_596F103 = 1;
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

  if ( (byte_596F102 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventStatusMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F102 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v5);
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
  __int64 v6; // x2
  Il2CppObject *MasterData_object; // x20

  if ( (byte_596F101 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserEventMaster___);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F101 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5, v6);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_2213CDC(Instance, v5);
  return UserEventMaster__GetEntity(
           (UserEventMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventId,
           0);
}


bool TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  unsigned int endState; // w8
  int32_t startState; // w9

  iconList = this->fields.iconList;
  if ( !iconList )
    sub_2213CDC(this, method);
  startState = iconList->fields.startState;
  endState = iconList->fields.endState;
  return (startState & 0xFFFFFFFE) == 2 && endState < 2;
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
  if ( (byte_596F0FF & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__);
    sub_2213A60(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__);
    sub_2213A60(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__);
    this = (TitleInfoEventTimeStatus_o *)sub_2213A60(&TitleInfoEventTimeStatus_TypeInfo);
    byte_596F0FF = 1;
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
  v5 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
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
    v9 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
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
            ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
              this,
              this->klass[1]._1.castClass,
              0.0);
            this = (TitleInfoEventTimeStatus_o *)v2->fields.loopTitleSprite;
            if ( this )
            {
              v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              v11 = (UITweener_o *)TweenAlpha__Begin(v10, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0);
              v12 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo);
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
      sub_2213CDC(this, method);
    }
  }
LABEL_20:
  v13 = TitleInfoEventTimeStatus_TypeInfo;
  if ( !*(&TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo, method, v6);
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
  __int64 v8; // x2
  TerminalPramsManager_c *v9; // x0
  struct TitleInfoEventTimeImgListComponent_o *v10; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_596F0FE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__);
    byte_596F0FE = 1;
  }
  iconList = this->fields.iconList;
  v4 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0);
  if ( !iconList )
    goto LABEL_21;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(iconList, v4, v7);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v8);
  if ( !byte_596F129 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F129 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v8);
    v9 = TerminalPramsManager_TypeInfo;
  }
  if ( v9->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v9, v6, v8);
    if ( !byte_596F129 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596F129 = 1;
    }
    v5 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6, v8);
      v5 = TerminalPramsManager_TypeInfo;
    }
    v10 = this->fields.iconList;
    if ( v10 )
    {
      timeStatusRecord_k__BackingField = v5->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = v10->fields.endState;
        return;
      }
    }
LABEL_21:
    sub_2213CDC(v5, v6);
  }
}


void TitleInfoEventTimeStatus__SetDay(TitleInfoEventTimeStatus_o *this, int32_t day, const MethodInfo *method)
{
  UILabel_o *dayCountLabel; // x19
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  dayCountLabel = this->fields.dayCountLabel;
  v6 = day;
  v4 = System_Int32__ToString((int32_t)&v6, 0);
  if ( !dayCountLabel )
    sub_2213CDC(v4, v5);
  UILabel__set_text(dayCountLabel, v4, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventTimeStatus__SetLoop(TitleInfoEventTimeStatus_o *this, int32_t loop, const MethodInfo *method)
{
  UISprite_o *loopTitleSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopCountLabel; // x19
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  v9 = loop;
  if ( (byte_596F0FC & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_25374/*"time_status_icon_loop"*/);
    byte_596F0FC = 1;
  }
  loopTitleSprite = this->fields.loopTitleSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&loop, method);
  AtlasManager__SetEventUI(loopTitleSprite, (System_String_o *)StringLiteral_25374/*"time_status_icon_loop"*/, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( loop >= 1 )
  {
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
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
      }
    }
LABEL_15:
    sub_2213CDC(gameObject, v6);
  }
  if ( !gameObject )
    goto LABEL_15;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (UnityEngine_Component_o *)this->fields.loopCountLabel;
  if ( !gameObject )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void TitleInfoEventTimeStatus__SetRestDay(TitleInfoEventTimeStatus_o *this, int32_t restDay, const MethodInfo *method)
{
  UISprite_o *restDayTextSprite; // x21
  int v6; // w8
  __int64 v7; // x1
  __int64 v8; // x2
  UILabel_o *restDayCountLabel; // x20
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596F0FD & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_25371/*"time_status_fes01"*/);
    sub_2213A60(&StringLiteral_25372/*"time_status_fes02"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13954/*"TIME_REST2_DAYS"*/);
    byte_596F0FD = 1;
  }
  restDayTextSprite = this->fields.restDayTextSprite;
  v6 = *(&AtlasManager_TypeInfo->_2.cctor_finished + 1);
  if ( restDay >= 1 )
  {
    if ( !v6 )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&restDay, method);
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_25371/*"time_status_fes01"*/, 0);
    restDayCountLabel = this->fields.restDayCountLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v7, v8);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_13954/*"TIME_REST2_DAYS"*/, 0);
    v14 = restDay;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v14);
    v12 = System_String__Format(v10, v11, 0);
    if ( restDayCountLabel )
    {
      UILabel__set_text(restDayCountLabel, v12, 0);
      return;
    }
LABEL_14:
    sub_2213CDC(v12, v13);
  }
  if ( !v6 )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&restDay, method);
  AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_25372/*"time_status_fes02"*/, 0);
  v12 = (System_String_o *)this->fields.restDayCountLabel;
  if ( !v12 )
    goto LABEL_14;
  UILabel__set_text((UILabel_o *)v12, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void TitleInfoEventTimeStatus__SetYesterday(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t currentDay; // w8
  int32_t currentLoop; // w21
  int32_t TIME_STATUS_DAY_MAX; // w20
  TitleInfoEventTimeStatus_c *v7; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  TitleInfoEventTimeStatus_c *v11; // x0

  if ( (byte_596F100 & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventTimeStatus_TypeInfo);
    byte_596F100 = 1;
  }
  currentDay = this->fields.currentDay;
  currentLoop = this->fields.currentLoop;
  TIME_STATUS_DAY_MAX = currentDay - 1;
  if ( currentDay == 1 )
  {
    v7 = TitleInfoEventTimeStatus_TypeInfo;
    if ( !*(&TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo, method, v2);
      v7 = TitleInfoEventTimeStatus_TypeInfo;
      currentLoop = this->fields.currentLoop;
    }
    --currentLoop;
    TIME_STATUS_DAY_MAX = v7->static_fields->TIME_STATUS_DAY_MAX;
  }
  TitleInfoEventTimeStatus__SetDay(this, TIME_STATUS_DAY_MAX, v2);
  TitleInfoEventTimeStatus__SetLoop(this, currentLoop, v8);
  v11 = TitleInfoEventTimeStatus_TypeInfo;
  if ( !*(&TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo, v9, v10);
    v11 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(this, v11->static_fields->TIME_STATUS_DAY_MAX - TIME_STATUS_DAY_MAX, v10);
}


void TitleInfoEventTimeStatus__Setup(
        TitleInfoEventTimeStatus_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  TitleInfoEventTimeStatus_o *v4; // x19
  TitleInfoEventTimeStatus_o *v5; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t Day; // w0
  UILabel_o *dayCountLabel; // x22
  TitleInfoEventTimeStatus_c *v10; // x0
  int v11; // w24
  UISprite_o *bgSprite; // x22
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  UserEventEntity_o *UserEventEntity; // x0
  int32_t *p_value; // x22
  UILabel_o *loopCountLabel; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t v20; // w8
  AtlasManager_c *v21; // x0
  UISprite_o *restDayTextSprite; // x22
  int v23; // w9
  __int64 v24; // x1
  __int64 v25; // x2
  TitleInfoEventTimeStatus_o *restDayCountLabel; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  TitleInfoEventTimeStatus_o *v29; // x1
  TitleInfoEventTimeStatus_o *v30; // x0
  const MethodInfo *v31; // x2
  __int64 v32; // x2
  const MethodInfo *v33; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v35; // x0
  TimeStatusRecord_o *v36; // x23
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  TerminalPramsManager_c *v44; // x0
  MissionNaviTransitionBoardItem_o *p_timeStatusRecord_k__BackingField; // x0
  __int64 v46; // x8
  __int64 v47; // x8
  int v48; // w10
  __int64 v49; // x8
  __int64 v50; // x8
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  int v52; // [xsp+8h] [xbp-58h] BYREF
  int32_t v53; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_596F0FB & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&TimeStatusRecord_TypeInfo);
    sub_2213A60(&TitleInfoEventTimeStatus_TypeInfo);
    sub_2213A60(&StringLiteral_25382/*"time_status_top"*/);
    sub_2213A60(&StringLiteral_25371/*"time_status_fes01"*/);
    sub_2213A60(&StringLiteral_25372/*"time_status_fes02"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_13954/*"TIME_REST2_DAYS"*/);
    sub_2213A60(&StringLiteral_25374/*"time_status_icon_loop"*/);
    this = (TitleInfoEventTimeStatus_o *)sub_2213A60(&StringLiteral_1198/*"0"*/);
    byte_596F0FB = 1;
  }
  v53 = 0;
  if ( !eventDetailEntity )
    goto LABEL_83;
  this = (TitleInfoEventTimeStatus_o *)TitleInfoEventTimeStatus__GetEventStatusEntity(
                                         this,
                                         eventDetailEntity->fields.eventId,
                                         method);
  if ( !v4->fields.dayCountLabel )
    goto LABEL_83;
  v5 = this;
  UILabel__set_text(v4->fields.dayCountLabel, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
  if ( v5 )
  {
    Day = EventStatusEntity__GetDay((EventStatusEntity_o *)v5, 0);
    dayCountLabel = v4->fields.dayCountLabel;
    v4->fields.currentDay = Day;
    v53 = Day;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)&v53, 0);
    if ( !dayCountLabel )
      goto LABEL_83;
    UILabel__set_text(dayCountLabel, (System_String_o *)this, 0);
    v10 = TitleInfoEventTimeStatus_TypeInfo;
    if ( !*(&TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo, v6, v7);
      v10 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v11 = v10->static_fields->TIME_STATUS_DAY_MAX - v53;
  }
  else
  {
    v11 = 0;
  }
  bgSprite = v4->fields.bgSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_25382/*"time_status_top"*/, 0);
  v13 = AtlasManager__SetEventUI(v4->fields.loopTitleSprite, (System_String_o *)StringLiteral_25374/*"time_status_icon_loop"*/, 0);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v13,
                      eventDetailEntity->fields.eventId,
                      v14);
  if ( UserEventEntity && (p_value = &UserEventEntity->fields.value, UserEventEntity->fields.value >= 1) )
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_83;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_83;
    ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, void *))this->klass[2]._1.parent)(
      this,
      this->klass[2]._1.generic_class);
    loopCountLabel = v4->fields.loopCountLabel;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)p_value, 0);
    if ( !loopCountLabel )
      goto LABEL_83;
    UILabel__set_text(loopCountLabel, (System_String_o *)this, 0);
    v20 = *p_value;
  }
  else
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_83;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_83;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopCountLabel;
    if ( !this )
      goto LABEL_83;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0);
    v20 = 0;
  }
  v21 = AtlasManager_TypeInfo;
  restDayTextSprite = v4->fields.restDayTextSprite;
  v4->fields.currentLoop = v20;
  v23 = *(&v21->_2.cctor_finished + 1);
  if ( v11 < 1 )
  {
    if ( !v23 )
      j_il2cpp_runtime_class_init_0(v21, v18, v19);
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_25372/*"time_status_fes02"*/, 0);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !this )
      goto LABEL_83;
    v29 = (TitleInfoEventTimeStatus_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !v23 )
      j_il2cpp_runtime_class_init_0(v21, v18, v19);
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_25371/*"time_status_fes01"*/, 0);
    restDayCountLabel = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_13954/*"TIME_REST2_DAYS"*/, 0);
    v52 = v11;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v52);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v27, v28, 0);
    if ( !restDayCountLabel )
      goto LABEL_83;
    v29 = this;
    this = restDayCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v29, 0);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v30, (EventStatusEntity_o *)v5, v31);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity, v32);
  if ( !byte_596F129 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F129 = 1;
  }
  v35 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity, v32);
    v35 = TerminalPramsManager_TypeInfo;
  }
  if ( !v35->static_fields->_timeStatusRecord_k__BackingField )
  {
    v36 = (TimeStatusRecord_o *)sub_2213CCC(TimeStatusRecord_TypeInfo);
    TimeStatusRecord___ctor(v36, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37, v38);
    if ( !byte_596DB39 )
    {
      sub_2213A60(&TerminalPramsManager_TypeInfo);
      byte_596DB39 = 1;
    }
    v44 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v37, v38);
      v44 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v44->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (MissionNaviTransitionBoardItem_c *)v36;
    sub_2213A04(p_timeStatusRecord_k__BackingField, (int32_t)v36, v38, v39, v40, v41, v42, v43);
    v35 = TerminalPramsManager_TypeInfo;
  }
  if ( !*(&v35->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v35, eventDetailEntity, v32);
  if ( !byte_596F129 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F129 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity, v32);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v46 = *(_QWORD *)&this[1].fields.dayCountLabel->fields.mAlphaFrameID;
  if ( !v46 )
    goto LABEL_83;
  if ( *(_DWORD *)(v46 + 16) == eventDetailEntity->fields.eventId )
    goto LABEL_70;
  if ( !HIDWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this, eventDetailEntity, v32);
  if ( !byte_596F129 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F129 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity, v32);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v47 = *(_QWORD *)&this[1].fields.dayCountLabel->fields.mAlphaFrameID;
  if ( !v47 )
    goto LABEL_83;
  v48 = (unsigned __int8)byte_596F129;
  *(_DWORD *)(v47 + 16) = eventDetailEntity->fields.eventId;
  if ( !v48 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    byte_596F129 = 1;
  }
  if ( !HIDWORD(this[1].fields.dayCountTween) )
  {
    j_il2cpp_runtime_class_init_0(this, eventDetailEntity, v32);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v49 = *(_QWORD *)&this[1].fields.dayCountLabel->fields.mAlphaFrameID;
  if ( !v49 )
LABEL_83:
    sub_2213CDC(this, eventDetailEntity);
  *(_DWORD *)(v49 + 20) = NowTimeState;
LABEL_70:
  if ( !HIDWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this, eventDetailEntity, v32);
  if ( !byte_596F129 )
  {
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    byte_596F129 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity, v32);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v50 = *(_QWORD *)&this[1].fields.dayCountLabel->fields.mAlphaFrameID;
  if ( !v50 )
    goto LABEL_83;
  this = (TitleInfoEventTimeStatus_o *)v4->fields.iconList;
  if ( !this )
    goto LABEL_83;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    *(_DWORD *)(v50 + 20),
    NowTimeState,
    v33);
  iconList = v4->fields.iconList;
  if ( !iconList )
    goto LABEL_83;
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

  if ( (byte_596F104 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__);
    byte_596F104 = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, this->fields.currentDay, v2);
  dayCountTween = (UITweener_o *)this->fields.dayCountTween;
  if ( !dayCountTween
    || (UITweener__PlayReverse(dayCountTween, 0),
        v6 = (UITweener_o *)this->fields.dayCountTween,
        v7 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v7,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0),
        !v6) )
  {
    sub_2213CDC(dayCountTween, v4);
  }
  UITweener__SetOnFinished(v6, v7, 0);
}


void TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *dayCountLabel; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *gameObject; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  UnityEngine_GameObject_o **v15; // x21
  UnityEngine_GameObject_o *v16; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v18; // x0
  float TIME_STATUS_DAY_EFFECT_TIME; // s8
  UnityEngine_GameObject_o *v20; // x22
  float TIME_STATUS_DAY_EFFECT_SIZE; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v23; // x0
  UITweener_o *v24; // x19
  EventDelegate_Callback_o *v25; // x21
  UnityEngine_Vector3_o v26; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_596F105 & 1) == 0 )
  {
    sub_2213A60(&EventDelegate_Callback_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__);
    sub_2213A60(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
    byte_596F105 = 1;
  }
  v3 = sub_2213CCC(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dayCountLabel, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  dayCountLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                gameObject,
                                                (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v3 )
    goto LABEL_14;
  *(_QWORD *)(v3 + 16) = dayCountLabel;
  v15 = (UnityEngine_GameObject_o **)(v3 + 16);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)dayCountLabel, v9, v10, v11, v12, v13, v14);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  v16 = *v15;
  parent = (UnityEngine_Component_o *)UIRect__get_parent((UIRect_o *)dayCountLabel, 0);
  GameObjectExtensions__SafeSetParent(v16, parent, 0);
  GameObjectExtensions__ResetLocalScale(*v15, 0);
  dayCountLabel = *v15;
  if ( !*v15 )
    goto LABEL_14;
  v18 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0);
  TIME_STATUS_DAY_EFFECT_TIME = this->fields.TIME_STATUS_DAY_EFFECT_TIME;
  v20 = v18;
  if ( !byte_5969AE5 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE5 = 1;
  }
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v26.fields.z = static_fields->oneVector.fields.z * TIME_STATUS_DAY_EFFECT_SIZE;
  v26.fields.x = static_fields->oneVector.fields.x * TIME_STATUS_DAY_EFFECT_SIZE;
  v26.fields.y = static_fields->oneVector.fields.y * TIME_STATUS_DAY_EFFECT_SIZE;
  TweenScale__Begin(v20, TIME_STATUS_DAY_EFFECT_TIME, v26, 0);
  dayCountLabel = *v15;
  if ( !*v15
    || (v23 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0),
        v24 = (UITweener_o *)TweenAlpha__Begin(v23, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0),
        v25 = (EventDelegate_Callback_o *)sub_2213CCC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v25,
          (Il2CppObject *)v3,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0),
        !v24) )
  {
LABEL_14:
    sub_2213CDC(dayCountLabel, v4);
  }
  UITweener__SetOnFinished(v24, v25, 0);
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
    sub_2213CDC(0, v4);
  gameObject = UnityEngine_Component__get_gameObject(loopCountLabel, 0);
  TweenAlpha__Begin(gameObject, this->fields.TIME_STATUS_DAY_ANIME_TIME, 1.0, 0);
}


void TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_4(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *loopTitleSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  loopTitleSprite = (UnityEngine_Component_o *)this->fields.loopTitleSprite;
  if ( !loopTitleSprite )
    sub_2213CDC(0, method);
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
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_596F106 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F106 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_2213CDC(0, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}