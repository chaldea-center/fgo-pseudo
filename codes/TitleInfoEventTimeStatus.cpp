void __fastcall TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A4CEF4 & 1) == 0 )
  {
    sub_1B863B8(&TitleInfoEventTimeStatus_TypeInfo, v1);
    byte_4A4CEF4 = 1;
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
  __int64 v6; // x1

  if ( (byte_4A4CEF3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventStatusMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A4CEF3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0LL )
  {
    sub_1B86614(Instance, v6);
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
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4A4CEF2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A4CEF2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    byte_4A48C25 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
LABEL_12:
    sub_1B86614(Instance, v7);
  return UserEventMaster__GetEntity(
           (UserEventMaster_o *)MasterData_object,
           *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
           eventId,
           0LL);
}


bool __fastcall TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8

  iconList = this->fields.iconList;
  if ( !iconList )
    sub_1B86614(this, method);
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
  if ( (byte_4A4CEF0 & 1) == 0 )
  {
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B863B8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__, v3);
    sub_1B863B8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__, v4);
    sub_1B863B8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__, v5);
    this = (TitleInfoEventTimeStatus_o *)sub_1B863B8(&TitleInfoEventTimeStatus_TypeInfo, v6);
    byte_4A4CEF0 = 1;
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
  v9 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v9,
    (Il2CppObject *)v2,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0LL);
  if ( !dayCountTween )
    goto LABEL_24;
  UITweener__SetOnFinished(dayCountTween, v9, 0LL);
  if ( v2->fields.currentDay == 1 )
  {
    this = (TitleInfoEventTimeStatus_o *)v2->fields.loopCountLabel;
    if ( !this )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12 = (UITweener_o *)TweenAlpha__Begin(gameObject, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0LL);
    v13 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v13,
      (Il2CppObject *)v2,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0LL);
    if ( !v12 )
      goto LABEL_24;
    UITweener__SetOnFinished(v12, v13, 0LL);
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
              v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v15 = (UITweener_o *)TweenAlpha__Begin(v14, v2->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0LL);
              v16 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo);
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
LABEL_24:
      sub_1B86614(this, method);
    }
  }
LABEL_20:
  v17 = TitleInfoEventTimeStatus_TypeInfo;
  if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v17 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(v2, v17->static_fields->TIME_STATUS_DAY_MAX - v2->fields.currentDay, v10);
}


void __fastcall TitleInfoEventTimeStatus__PlayIconScrollAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  TitleInfoEventTimeImgListComponent_o *iconList; // x20
  System_Action_o *v6; // x21
  TerminalPramsManager_c *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  TerminalPramsManager_c *v10; // x0
  struct TitleInfoEventTimeImgListComponent_o *v11; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_4A4CEEF & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v3);
    sub_1B863B8(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, v4);
    byte_4A4CEEF = 1;
  }
  iconList = this->fields.iconList;
  v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0LL);
  if ( !iconList )
    goto LABEL_21;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(iconList, v6, v9);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4CF53 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
    byte_4A4CF53 = 1;
  }
  v10 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v10 = TerminalPramsManager_TypeInfo;
  }
  if ( v10->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    if ( !byte_4A4CF53 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v8);
      byte_4A4CF53 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v11 = this->fields.iconList;
    if ( v11 )
    {
      timeStatusRecord_k__BackingField = v7->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = v11->fields.endState;
        return;
      }
    }
LABEL_21:
    sub_1B86614(v7, v8);
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
    sub_1B86614(v4, v5);
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
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopCountLabel; // x19
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  v11 = loop;
  if ( (byte_4A4CEED & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&loop);
    sub_1B863B8(&StringLiteral_1/*""*/, v5);
    sub_1B863B8(&StringLiteral_23778/*"time_status_icon_loop"*/, v6);
    byte_4A4CEED = 1;
  }
  loopTitleSprite = this->fields.loopTitleSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(loopTitleSprite, (System_String_o *)StringLiteral_23778/*"time_status_icon_loop"*/, 0LL);
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
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v11, 0LL);
      if ( loopCountLabel )
      {
        UILabel__set_text(loopCountLabel, (System_String_o *)gameObject, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B86614(gameObject, v8);
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
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  int32_t v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4CEEE & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, *(_QWORD *)&restDay);
    sub_1B863B8(&int_TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_23775/*"time_status_fes01"*/, v7);
    sub_1B863B8(&StringLiteral_23776/*"time_status_fes02"*/, v8);
    sub_1B863B8(&StringLiteral_1/*""*/, v9);
    sub_1B863B8(&StringLiteral_13175/*"TIME_REST2_DAYS"*/, v10);
    byte_4A4CEEE = 1;
  }
  restDayTextSprite = this->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( restDay >= 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23775/*"time_status_fes01"*/, 0LL);
    restDayCountLabel = this->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_13175/*"TIME_REST2_DAYS"*/, 0LL);
    v20 = restDay;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v14, v15, v16);
    v18 = System_String__Format(v13, v17, 0LL);
    if ( restDayCountLabel )
    {
      UILabel__set_text(restDayCountLabel, v18, 0LL);
      return;
    }
LABEL_12:
    sub_1B86614(v18, v19);
  }
  AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23776/*"time_status_fes02"*/, 0LL);
  v18 = (System_String_o *)this->fields.restDayCountLabel;
  if ( !v18 )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
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

  if ( (byte_4A4CEF1 & 1) == 0 )
  {
    sub_1B863B8(&TitleInfoEventTimeStatus_TypeInfo, method);
    byte_4A4CEF1 = 1;
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
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  Il2CppObject *v35; // x0
  TitleInfoEventTimeStatus_o *v36; // x1
  TitleInfoEventTimeStatus_o *v37; // x0
  const MethodInfo *v38; // x2
  const MethodInfo *v39; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v41; // x0
  TimeStatusRecord_o *v42; // x23
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  TerminalPramsManager_c *v46; // x0
  CGThumbnailListItem_o *p_timeStatusRecord_k__BackingField; // x0
  struct UIDrawCall_o *drawCall; // x8
  struct UIDrawCall_o *v49; // x8
  struct UIDrawCall_o *v50; // x8
  struct UIDrawCall_o *v51; // x8
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  int v53; // [xsp+8h] [xbp-48h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4A4CEEC & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, eventDetailEntity);
    sub_1B863B8(&int_TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&TerminalPramsManager_TypeInfo, v7);
    sub_1B863B8(&TimeStatusRecord_TypeInfo, v8);
    sub_1B863B8(&TitleInfoEventTimeStatus_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_23786/*"time_status_top"*/, v10);
    sub_1B863B8(&StringLiteral_23775/*"time_status_fes01"*/, v11);
    sub_1B863B8(&StringLiteral_23776/*"time_status_fes02"*/, v12);
    sub_1B863B8(&StringLiteral_1/*""*/, v13);
    sub_1B863B8(&StringLiteral_13175/*"TIME_REST2_DAYS"*/, v14);
    sub_1B863B8(&StringLiteral_23778/*"time_status_icon_loop"*/, v15);
    this = (TitleInfoEventTimeStatus_o *)sub_1B863B8(&StringLiteral_1139/*"0"*/, v16);
    byte_4A4CEEC = 1;
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
  UILabel__set_text(v4->fields.dayCountLabel, (System_String_o *)StringLiteral_1139/*"0"*/, 0LL);
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
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_23786/*"time_status_top"*/, 0LL);
  v23 = AtlasManager__SetEventUI(v4->fields.loopTitleSprite, (System_String_o *)StringLiteral_23778/*"time_status_icon_loop"*/, 0LL);
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
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23776/*"time_status_fes02"*/, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !this )
      goto LABEL_81;
    v36 = (TitleInfoEventTimeStatus_o *)StringLiteral_1/*""*/;
  }
  else
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_23775/*"time_status_fes01"*/, 0LL);
    restDayCountLabel = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v31 = LocalizationManager__Get((System_String_o *)StringLiteral_13175/*"TIME_REST2_DAYS"*/, 0LL);
    v53 = v21;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v32, v33, v34);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v31, v35, 0LL);
    if ( !restDayCountLabel )
      goto LABEL_81;
    v36 = this;
    this = restDayCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v36, 0LL);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v37, (EventStatusEntity_o *)v17, v38);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A4CF53 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, eventDetailEntity);
    byte_4A4CF53 = 1;
  }
  v41 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v41 = TerminalPramsManager_TypeInfo;
  }
  if ( !v41->static_fields->_timeStatusRecord_k__BackingField )
  {
    v42 = (TimeStatusRecord_o *)sub_1B86604(TimeStatusRecord_TypeInfo);
    TimeStatusRecord___ctor(v42, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4A4B988 )
    {
      sub_1B863B8(&TerminalPramsManager_TypeInfo, v43);
      byte_4A4B988 = 1;
    }
    v46 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v46 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (CGThumbnailListItem_o *)&v46->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (CGThumbnailListItem_c *)v42;
    sub_1B8635C(p_timeStatusRecord_k__BackingField, (int32_t)v42, v44, v45);
    v41 = TerminalPramsManager_TypeInfo;
  }
  if ( !v41->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v41);
  if ( !byte_4A4CF53 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, eventDetailEntity);
    byte_4A4CF53 = 1;
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
  if ( !byte_4A4CF53 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, eventDetailEntity);
    byte_4A4CF53 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v49 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v49 )
    goto LABEL_81;
  v49->fields.m_CachedPtr = eventDetailEntity->fields.eventId;
  if ( !byte_4A4CF53 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, eventDetailEntity);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    byte_4A4CF53 = 1;
  }
  if ( !LODWORD(this[1].fields.dayCountTween) )
  {
    j_il2cpp_runtime_class_init_0(this);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v50 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v50 )
LABEL_81:
    sub_1B86614(this, eventDetailEntity);
  *((_DWORD *)&v50->fields.UnityEngine_Behaviour_Fields + 1) = NowTimeState;
LABEL_68:
  if ( !LODWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_4A4CF53 )
  {
    sub_1B863B8(&TerminalPramsManager_TypeInfo, eventDetailEntity);
    byte_4A4CF53 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v51 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v51 )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)v4->fields.iconList;
  if ( !this )
    goto LABEL_81;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    *((_DWORD *)&v51->fields.UnityEngine_Behaviour_Fields + 1),
    NowTimeState,
    v39);
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
  __int64 v5; // x1
  UITweener_o *dayCountTween; // x0
  UITweener_o *v7; // x20
  EventDelegate_Callback_o *v8; // x21

  if ( (byte_4A4CEF5 & 1) == 0 )
  {
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B863B8(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__, v4);
    byte_4A4CEF5 = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, this->fields.currentDay, v2);
  dayCountTween = (UITweener_o *)this->fields.dayCountTween;
  if ( !dayCountTween
    || (UITweener__PlayReverse(dayCountTween, 0LL),
        v7 = (UITweener_o *)this->fields.dayCountTween,
        v8 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v8,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0LL),
        !v7) )
  {
    sub_1B86614(dayCountTween, v5);
  }
  UITweener__SetOnFinished(v7, v8, 0LL);
}


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
  UnityEngine_GameObject_o *dayCountLabel; // x0
  Il2CppObject *gameObject; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
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
  EventDelegate_Callback_o *v24; // x21
  UnityEngine_Vector3_o v25; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4A4CEF6 & 1) == 0 )
  {
    sub_1B863B8(&EventDelegate_Callback_TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__, v5);
    sub_1B863B8(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, v6);
    byte_4A4CEF6 = 1;
  }
  v7 = sub_1B86604(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dayCountLabel, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  dayCountLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                gameObject,
                                                (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = dayCountLabel;
  v13 = (UnityEngine_GameObject_o **)(v7 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)dayCountLabel, v11, v12);
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
  if ( !byte_4A487E6 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4A487E6 = 1;
  }
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v25.fields.x = static_fields->oneVector.fields.x * TIME_STATUS_DAY_EFFECT_SIZE;
  v25.fields.y = static_fields->oneVector.fields.y * TIME_STATUS_DAY_EFFECT_SIZE;
  v25.fields.z = static_fields->oneVector.fields.z * TIME_STATUS_DAY_EFFECT_SIZE;
  TweenScale__Begin(v19, TIME_STATUS_DAY_EFFECT_TIME, v25, 0LL);
  dayCountLabel = *v13;
  if ( !*v13
    || (v22 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0LL),
        v23 = (UITweener_o *)TweenAlpha__Begin(v22, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL),
        v24 = (EventDelegate_Callback_o *)sub_1B86604(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v24,
          (Il2CppObject *)v7,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0LL),
        !v23) )
  {
LABEL_14:
    sub_1B86614(dayCountLabel, v8);
  }
  UITweener__SetOnFinished(v23, v24, 0LL);
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
    sub_1B86614(0LL, v4);
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
    sub_1B86614(0LL, method);
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

  if ( (byte_4A4CEF7 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4CEF7 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_1B86614(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
}