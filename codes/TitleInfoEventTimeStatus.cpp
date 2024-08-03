void __fastcall TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FAF22 & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventTimeStatus_TypeInfo, v1);
    byte_49FAF22 = 1;
  }
  TitleInfoEventTimeStatus_TypeInfo->static_fields->TIME_STATUS_DAY_MAX = 7;
}


void __fastcall TitleInfoEventTimeStatus___ctor(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  this->fields.TIME_STATUS_DAY_EFFECT_SIZE = 1.5;
  *(_QWORD *)&this->fields.TIME_STATUS_DAY_ANIME_TIME = 0x3E99999A3F000000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventStatusEntity_o *__fastcall TitleInfoEventTimeStatus__GetEventStatusEntity(
        TitleInfoEventTimeStatus_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FAF21 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventStatusMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FAF21 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  Il2CppObject *MasterData_object; // x20

  if ( (byte_49FAF20 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_1B640C8(&NetworkManager_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FAF20 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1B64324(Instance);
  return UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0LL);
}


bool __fastcall TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8

  iconList = this->fields.iconList;
  if ( !iconList )
    sub_1B64324(this);
  return (iconList->fields.startState & 0xFFFFFFFE) == 2 && iconList->fields.endState < 2u;
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
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  UITweener_o *dayCountTween; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  EventDelegate_Callback_o *v11; // x21
  const MethodInfo *v12; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v14; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  EventDelegate_Callback_o *v17; // x21
  UnityEngine_GameObject_o *v18; // x0
  UITweener_o *v19; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  EventDelegate_Callback_o *v22; // x21
  TitleInfoEventTimeStatus_c *v23; // x0

  v2 = this;
  if ( (byte_49FAF1E & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__, v3);
    sub_1B640C8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__, v4);
    sub_1B640C8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__, v5);
    this = (TitleInfoEventTimeStatus_o *)sub_1B640C8(&TitleInfoEventTimeStatus_TypeInfo, v6);
    byte_49FAF1E = 1;
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
  v11 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v9, v10);
  EventDelegate_Callback___ctor(
    v11,
    (Il2CppObject *)v2,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0LL);
  if ( !dayCountTween )
    goto LABEL_24;
  UITweener__SetOnFinished(dayCountTween, v11, 0LL);
  if ( v2->fields.currentDay == 1 )
  {
    this = (TitleInfoEventTimeStatus_o *)v2->fields.loopCountLabel;
    if ( !this )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v14 = (UITweener_o *)TweenAlpha__Begin(gameObject, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0LL);
    v17 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v15, v16);
    EventDelegate_Callback___ctor(
      v17,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0LL);
    if ( !v14 )
      goto LABEL_24;
    UITweener__SetOnFinished(v14, v17, 0LL);
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
              v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v19 = (UITweener_o *)TweenAlpha__Begin(v18, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0LL);
              v22 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v20, v21);
              EventDelegate_Callback___ctor(
                v22,
                (Il2CppObject *)v2,
                Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__,
                0LL);
              if ( v19 )
              {
                UITweener__SetOnFinished(v19, v22, 0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
LABEL_24:
      sub_1B64324(this);
    }
  }
LABEL_20:
  v23 = TitleInfoEventTimeStatus_TypeInfo;
  if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v23 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(v2, v23->static_fields->TIME_STATUS_DAY_MAX - v2->fields.currentDay, v12);
}


void __fastcall TitleInfoEventTimeStatus__PlayIconScrollAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  TitleInfoEventTimeImgListComponent_o *iconList; // x20
  System_Action_o *v7; // x21
  TerminalPramsManager_c *v8; // x0
  const MethodInfo *v9; // x2
  __int64 v10; // x1
  TerminalPramsManager_c *v11; // x0
  struct TitleInfoEventTimeImgListComponent_o *v12; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_49FAF1D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v4);
    sub_1B640C8(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, v5);
    byte_49FAF1D = 1;
  }
  iconList = this->fields.iconList;
  v7 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0LL);
  if ( !iconList )
    goto LABEL_21;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(iconList, v7, v9);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FAFB1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
    byte_49FAFB1 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  if ( v11->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( !v11->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v11);
    if ( !byte_49FAFB1 )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v10);
      byte_49FAFB1 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v12 = this->fields.iconList;
    if ( v12 )
    {
      timeStatusRecord_k__BackingField = v8->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = v12->fields.endState;
        return;
      }
    }
LABEL_21:
    sub_1B64324(v8);
  }
}


void __fastcall TitleInfoEventTimeStatus__SetDay(
        TitleInfoEventTimeStatus_o *this,
        int32_t day,
        const MethodInfo *method)
{
  UILabel_o *dayCountLabel; // x19
  System_String_o *v4; // x0
  int32_t v5; // [xsp+Ch] [xbp-14h] BYREF

  v5 = day;
  dayCountLabel = this->fields.dayCountLabel;
  v4 = System_Int32__ToString((int32_t)&v5, 0LL);
  if ( !dayCountLabel )
    sub_1B64324(v4);
  UILabel__set_text(dayCountLabel, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeStatus__SetLoop(
        TitleInfoEventTimeStatus_o *this,
        int32_t loop,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UISprite_o *loopTitleSprite; // x21
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopCountLabel; // x19
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = loop;
  if ( (byte_49FAF1B & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&loop);
    sub_1B640C8(&StringLiteral_1/*""*/, v5);
    sub_1B640C8(&StringLiteral_23839/*"time_status_icon_loop"*/, v6);
    byte_49FAF1B = 1;
  }
  loopTitleSprite = this->fields.loopTitleSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(loopTitleSprite, (System_String_o *)StringLiteral_23839/*"time_status_icon_loop"*/, 0LL);
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
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v10, 0LL);
      if ( loopCountLabel )
      {
        UILabel__set_text(loopCountLabel, (System_String_o *)gameObject, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (UnityEngine_Component_o *)this->fields.loopCountLabel;
  if ( !gameObject )
    goto LABEL_13;
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
  UISprite_o *restDayTextSprite; // x21
  UILabel_o *restDayCountLabel; // x20
  System_String_o *v13; // x21
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FAF1C & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, *(_QWORD *)&restDay);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_23836/*"time_status_fes01"*/, v7);
    sub_1B640C8(&StringLiteral_23837/*"time_status_fes02"*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    sub_1B640C8(&StringLiteral_13244/*"TIME_REST2_DAYS"*/, v10);
    byte_49FAF1C = 1;
  }
  restDayTextSprite = this->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( restDay >= 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23836/*"time_status_fes01"*/, 0LL);
    restDayCountLabel = this->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13244/*"TIME_REST2_DAYS"*/, 0LL);
    v16 = restDay;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v15 = System_String__Format(v13, v14, 0LL);
    if ( restDayCountLabel )
    {
      UILabel__set_text(restDayCountLabel, v15, 0LL);
      return;
    }
LABEL_12:
    sub_1B64324(v15);
  }
  AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23837/*"time_status_fes02"*/, 0LL);
  v15 = (System_String_o *)this->fields.restDayCountLabel;
  if ( !v15 )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)v15, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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

  if ( (byte_49FAF1F & 1) == 0 )
  {
    sub_1B640C8(&TitleInfoEventTimeStatus_TypeInfo, method);
    byte_49FAF1F = 1;
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
  UILabel_o *dayCountLabel; // x22
  TitleInfoEventTimeStatus_c *v20; // x0
  int v21; // w24
  UISprite_o *bgSprite; // x22
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x2
  UserEventEntity_o *UserEventEntity; // x0
  int32_t *p_value; // x22
  UILabel_o *loopCountLabel; // x23
  int32_t v28; // w8
  UISprite_o *restDayTextSprite; // x22
  TitleInfoEventTimeStatus_o *restDayCountLabel; // x22
  System_String_o *v31; // x23
  Il2CppObject *v32; // x0
  TitleInfoEventTimeStatus_o *v33; // x1
  TitleInfoEventTimeStatus_o *v34; // x0
  const MethodInfo *v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  const MethodInfo *v38; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v40; // x0
  TimeStatusRecord_o *v41; // x23
  __int64 v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  TerminalPramsManager_c *v45; // x0
  ServantStatusBattleListViewItem_o *p_timeStatusRecord_k__BackingField; // x0
  struct UIDrawCall_o *drawCall; // x8
  struct UIDrawCall_o *v48; // x8
  struct UIDrawCall_o *v49; // x8
  struct UIDrawCall_o *v50; // x8
  const MethodInfo *v51; // x1
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  int v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_49FAF1A & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, eventDetailEntity);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&LocalizationManager_TypeInfo, v6);
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B640C8(&TimeStatusRecord_TypeInfo, v8);
    sub_1B640C8(&TitleInfoEventTimeStatus_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_23847/*"time_status_top"*/, v10);
    sub_1B640C8(&StringLiteral_23836/*"time_status_fes01"*/, v11);
    sub_1B640C8(&StringLiteral_23837/*"time_status_fes02"*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    sub_1B640C8(&StringLiteral_13244/*"TIME_REST2_DAYS"*/, v14);
    sub_1B640C8(&StringLiteral_23839/*"time_status_icon_loop"*/, v15);
    this = (TitleInfoEventTimeStatus_o *)sub_1B640C8(&StringLiteral_1213/*"0"*/, v16);
    byte_49FAF1A = 1;
  }
  v54 = 0;
  if ( !eventDetailEntity )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)TitleInfoEventTimeStatus__GetEventStatusEntity(
                                         this,
                                         eventDetailEntity->fields.eventId,
                                         method);
  if ( !v4->fields.dayCountLabel )
    goto LABEL_81;
  v17 = this;
  UILabel__set_text(v4->fields.dayCountLabel, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL);
  if ( v17 )
  {
    Day = EventStatusEntity__GetDay((EventStatusEntity_o *)v17, 0LL);
    v4->fields.currentDay = Day;
    v54 = Day;
    dayCountLabel = v4->fields.dayCountLabel;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)&v54, 0LL);
    if ( !dayCountLabel )
      goto LABEL_81;
    UILabel__set_text(dayCountLabel, (System_String_o *)this, 0LL);
    v20 = TitleInfoEventTimeStatus_TypeInfo;
    if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v20 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v21 = v20->static_fields->TIME_STATUS_DAY_MAX - v54;
  }
  else
  {
    v21 = 0;
  }
  bgSprite = v4->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_23847/*"time_status_top"*/, 0LL);
  v23 = AtlasManager__SetEventUI(v4->fields.loopTitleSprite, (System_String_o *)StringLiteral_23839/*"time_status_icon_loop"*/, 0LL);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v23,
                      eventDetailEntity->fields.eventId,
                      v24);
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
    v28 = *p_value;
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
    v28 = 0;
  }
  v4->fields.currentLoop = v28;
  restDayTextSprite = v4->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( v21 < 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23837/*"time_status_fes02"*/, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !this )
      goto LABEL_81;
    v33 = (TitleInfoEventTimeStatus_o *)StringLiteral_1/*""*/;
  }
  else
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23836/*"time_status_fes01"*/, 0LL);
    restDayCountLabel = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13244/*"TIME_REST2_DAYS"*/, 0LL);
    v53 = v21;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v31, v32, 0LL);
    if ( !restDayCountLabel )
      goto LABEL_81;
    v33 = this;
    this = restDayCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v33, 0LL);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v34, (EventStatusEntity_o *)v17, v35);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49FAFB1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v36);
    byte_49FAFB1 = 1;
  }
  v40 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v40 = TerminalPramsManager_TypeInfo;
  }
  if ( !v40->static_fields->_timeStatusRecord_k__BackingField )
  {
    v41 = (TimeStatusRecord_o *)sub_1B64314(TimeStatusRecord_TypeInfo, v36, v37);
    TimeStatusRecord___ctor(v41, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49F9ABA )
    {
      sub_1B640C8(&TerminalPramsManager_TypeInfo, v42);
      byte_49F9ABA = 1;
    }
    v45 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v45 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (ServantStatusBattleListViewItem_o *)&v45->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (ServantStatusBattleListViewItem_c *)v41;
    sub_1B6406C(p_timeStatusRecord_k__BackingField, (int32_t)v41, v43, v44);
    v40 = TerminalPramsManager_TypeInfo;
  }
  if ( !v40->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v40);
  if ( !byte_49FAFB1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v36);
    byte_49FAFB1 = 1;
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
  if ( !byte_49FAFB1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v36);
    byte_49FAFB1 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v48 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v48 )
    goto LABEL_81;
  v48->fields.m_CachedPtr = eventDetailEntity->fields.eventId;
  if ( !byte_49FAFB1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v36);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    byte_49FAFB1 = 1;
  }
  if ( !LODWORD(this[1].fields.dayCountTween) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v49 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v49 )
LABEL_81:
    sub_1B64324(this);
  *((_DWORD *)&v49->fields.UnityEngine_Behaviour_Fields + 1) = NowTimeState;
LABEL_68:
  if ( !LODWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_49FAFB1 )
  {
    sub_1B640C8(&TerminalPramsManager_TypeInfo, v36);
    byte_49FAFB1 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v50 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v50 )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)v4->fields.iconList;
  if ( !this )
    goto LABEL_81;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    *((_DWORD *)&v50->fields.UnityEngine_Behaviour_Fields + 1),
    NowTimeState,
    v38);
  iconList = v4->fields.iconList;
  if ( !iconList )
    goto LABEL_81;
  if ( (iconList->fields.startState & 0xFFFFFFFE) == 2 && iconList->fields.endState <= 1u )
    TitleInfoEventTimeStatus__SetYesterday(v4, v51);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_0(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UITweener_o *dayCountTween; // x0
  UITweener_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  EventDelegate_Callback_o *v9; // x21

  if ( (byte_49FAF23 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__, v4);
    byte_49FAF23 = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, this->fields.currentDay, v2);
  dayCountTween = (UITweener_o *)this->fields.dayCountTween;
  if ( !dayCountTween
    || (UITweener__PlayReverse(dayCountTween, 0LL),
        v6 = (UITweener_o *)this->fields.dayCountTween,
        v9 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v7, v8),
        EventDelegate_Callback___ctor(
          v9,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0LL),
        !v6) )
  {
    sub_1B64324(dayCountTween);
  }
  UITweener__SetOnFinished(v6, v9, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  UnityEngine_GameObject_o *dayCountLabel; // x0
  Il2CppObject *gameObject; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  UnityEngine_GameObject_o **v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v16; // x0
  __int64 v17; // x1
  float TIME_STATUS_DAY_EFFECT_TIME; // s8
  UnityEngine_GameObject_o *v19; // x22
  float TIME_STATUS_DAY_EFFECT_SIZE; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v22; // x0
  UITweener_o *v23; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  EventDelegate_Callback_o *v26; // x21
  UnityEngine_Vector3_o v27; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_49FAF24 & 1) == 0 )
  {
    sub_1B640C8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__, v6);
    sub_1B640C8(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, v7);
    byte_49FAF24 = 1;
  }
  v8 = sub_1B64314(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dayCountLabel, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dayCountLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                gameObject,
                                                (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = dayCountLabel;
  v13 = (UnityEngine_GameObject_o **)(v8 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)dayCountLabel, v11, v12);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  v14 = *v13;
  parent = (UnityEngine_Component_o *)UIRect__get_parent((UIRect_o *)dayCountLabel, 0LL);
  GameObjectExtensions__SafeSetParent(v14, parent, 0LL);
  GameObjectExtensions__ResetLocalScale(*v13, 0LL);
  dayCountLabel = *v13;
  if ( !*v13 )
    goto LABEL_14;
  v16 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0LL);
  TIME_STATUS_DAY_EFFECT_TIME = this->fields.TIME_STATUS_DAY_EFFECT_TIME;
  v19 = v16;
  if ( !byte_49F7116 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_49F7116 = 1;
  }
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v27.fields.x = static_fields->oneVector.fields.x * TIME_STATUS_DAY_EFFECT_SIZE;
  v27.fields.y = static_fields->oneVector.fields.y * TIME_STATUS_DAY_EFFECT_SIZE;
  v27.fields.z = static_fields->oneVector.fields.z * TIME_STATUS_DAY_EFFECT_SIZE;
  TweenScale__Begin(v19, TIME_STATUS_DAY_EFFECT_TIME, v27, 0LL);
  dayCountLabel = *v13;
  if ( !*v13
    || (v22 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0LL),
        v23 = (UITweener_o *)TweenAlpha__Begin(v22, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL),
        v26 = (EventDelegate_Callback_o *)sub_1B64314(EventDelegate_Callback_TypeInfo, v24, v25),
        EventDelegate_Callback___ctor(
          v26,
          (Il2CppObject *)v8,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0LL),
        !v23) )
  {
LABEL_14:
    sub_1B64324(dayCountLabel);
  }
  UITweener__SetOnFinished(v23, v26, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_3(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Component_o *loopCountLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  TitleInfoEventTimeStatus__SetLoop(this, this->fields.currentLoop, v2);
  loopCountLabel = (UnityEngine_Component_o *)this->fields.loopCountLabel;
  if ( !loopCountLabel )
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
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

  if ( (byte_49FAF25 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FAF25 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_1B64324(0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
}