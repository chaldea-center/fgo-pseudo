void __fastcall TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B14C93 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTimeStatus_TypeInfo, v1, v2);
    byte_4B14C93 = 1;
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
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B14C92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventStatusMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B14C92 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  DataManager_o *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *MasterData_object; // x20

  if ( (byte_4B14C91 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventMaster___, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B14C91 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  return UserEventMaster__GetEntity((UserEventMaster_o *)MasterData_object, (int64_t)Instance, eventId, 0LL);
}


bool __fastcall TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8

  iconList = this->fields.iconList;
  if ( !iconList )
    sub_1BCAA3C(this, method);
  return (iconList->fields.startState & 0xFFFFFFFE) == 2 && iconList->fields.endState < 2u;
}


void __fastcall TitleInfoEventTimeStatus__PlayChangeDayAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TitleInfoEventTimeStatus_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  UITweener_o *dayCountTween; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  EventDelegate_Callback_o *v17; // x21
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  EventDelegate_Callback_o *v24; // x21
  UnityEngine_GameObject_o *v25; // x0
  UITweener_o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  EventDelegate_Callback_o *v30; // x21
  TitleInfoEventTimeStatus_c *v31; // x0

  v3 = this;
  if ( (byte_4B14C8F & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__, v4, v5);
    sub_1BCA7E0(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__, v8, v9);
    this = (TitleInfoEventTimeStatus_o *)sub_1BCA7E0(&TitleInfoEventTimeStatus_TypeInfo, v10, v11);
    byte_4B14C8F = 1;
  }
  iconList = v3->fields.iconList;
  if ( !iconList )
    goto LABEL_24;
  if ( (iconList->fields.startState & 0xFFFFFFFE) != 2 || iconList->fields.endState > 1u )
    return;
  this = (TitleInfoEventTimeStatus_o *)v3->fields.dayCountTween;
  if ( !this )
    goto LABEL_24;
  UITweener__PlayForward((UITweener_o *)this, 0LL);
  dayCountTween = (UITweener_o *)v3->fields.dayCountTween;
  v17 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v14, v15, v16);
  EventDelegate_Callback___ctor(
    v17,
    (Il2CppObject *)v3,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0LL);
  if ( !dayCountTween )
    goto LABEL_24;
  UITweener__SetOnFinished(dayCountTween, v17, 0LL);
  if ( v3->fields.currentDay == 1 )
  {
    this = (TitleInfoEventTimeStatus_o *)v3->fields.loopCountLabel;
    if ( !this )
      goto LABEL_24;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v20 = (UITweener_o *)TweenAlpha__Begin(gameObject, v3->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0LL);
    v24 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v21, v22, v23);
    EventDelegate_Callback___ctor(
      v24,
      (Il2CppObject *)v3,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0LL);
    if ( !v20 )
      goto LABEL_24;
    UITweener__SetOnFinished(v20, v24, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v3->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_24;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_24;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (TitleInfoEventTimeStatus_o *)v3->fields.loopTitleSprite;
      if ( this )
      {
        this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (TitleInfoEventTimeStatus_o *)v3->fields.loopTitleSprite;
          if ( this )
          {
            ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
              this,
              this->klass[1]._1.declaringType,
              0.0);
            this = (TitleInfoEventTimeStatus_o *)v3->fields.loopTitleSprite;
            if ( this )
            {
              v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v26 = (UITweener_o *)TweenAlpha__Begin(v25, v3->fields.TIME_STATUS_DAY_ANIME_TIME, 0.0, 0LL);
              v30 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v27, v28, v29);
              EventDelegate_Callback___ctor(
                v30,
                (Il2CppObject *)v3,
                Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__,
                0LL);
              if ( v26 )
              {
                UITweener__SetOnFinished(v26, v30, 0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
LABEL_24:
      sub_1BCAA3C(this, method);
    }
  }
LABEL_20:
  v31 = TitleInfoEventTimeStatus_TypeInfo;
  if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo, method);
    v31 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(v3, v31->static_fields->TIME_STATUS_DAY_MAX - v3->fields.currentDay, v18);
}


void __fastcall TitleInfoEventTimeStatus__PlayIconScrollAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  TitleInfoEventTimeImgListComponent_o *iconList; // x20
  System_Action_o *v10; // x21
  TerminalPramsManager_c *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  __int64 v14; // x2
  TerminalPramsManager_c *v15; // x0
  struct TitleInfoEventTimeImgListComponent_o *v16; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_4B14C8E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, v7, v8);
    byte_4B14C8E = 1;
  }
  iconList = this->fields.iconList;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0LL);
  if ( !iconList )
    goto LABEL_21;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(iconList, v10, v13);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  if ( !byte_4B14D24 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v14);
    byte_4B14D24 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v15 = TerminalPramsManager_TypeInfo;
  }
  if ( v15->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( !v15->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v15, v12);
    if ( !byte_4B14D24 )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v14);
      byte_4B14D24 = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v16 = this->fields.iconList;
    if ( v16 )
    {
      timeStatusRecord_k__BackingField = v11->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = v16->fields.endState;
        return;
      }
    }
LABEL_21:
    sub_1BCAA3C(v11, v12);
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
    sub_1BCAA3C(v4, v5);
  UILabel__set_text(dayCountLabel, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeStatus__SetLoop(
        TitleInfoEventTimeStatus_o *this,
        int32_t loop,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UISprite_o *loopTitleSprite; // x21
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopCountLabel; // x19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = loop;
  if ( (byte_4B14C8C & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&loop, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_24187/*"time_status_icon_loop"*/, v7, v8);
    byte_4B14C8C = 1;
  }
  loopTitleSprite = this->fields.loopTitleSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&loop);
  AtlasManager__SetEventUI(loopTitleSprite, (System_String_o *)StringLiteral_24187/*"time_status_icon_loop"*/, 0LL);
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
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v13, 0LL);
      if ( loopCountLabel )
      {
        UILabel__set_text(loopCountLabel, (System_String_o *)gameObject, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCAA3C(gameObject, v10);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UISprite_o *restDayTextSprite; // x21
  __int64 v18; // x1
  UILabel_o *restDayCountLabel; // x20
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B14C8D & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&restDay, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_24184/*"time_status_fes01"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_24185/*"time_status_fes02"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13471/*"TIME_REST2_DAYS"*/, v15, v16);
    byte_4B14C8D = 1;
  }
  restDayTextSprite = this->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&restDay);
  if ( restDay >= 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_24184/*"time_status_fes01"*/, 0LL);
    restDayCountLabel = this->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_13471/*"TIME_REST2_DAYS"*/, 0LL);
    v24 = restDay;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v22 = System_String__Format(v20, v21, 0LL);
    if ( restDayCountLabel )
    {
      UILabel__set_text(restDayCountLabel, v22, 0LL);
      return;
    }
LABEL_12:
    sub_1BCAA3C(v22, v23);
  }
  AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_24185/*"time_status_fes02"*/, 0LL);
  v22 = (System_String_o *)this->fields.restDayCountLabel;
  if ( !v22 )
    goto LABEL_12;
  UILabel__set_text((UILabel_o *)v22, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetYesterday(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
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

  if ( (byte_4B14C90 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventTimeStatus_TypeInfo, method, v2);
    byte_4B14C90 = 1;
  }
  currentDay = this->fields.currentDay;
  currentLoop = this->fields.currentLoop;
  TIME_STATUS_DAY_MAX = currentDay - 1;
  if ( currentDay == 1 )
  {
    v7 = TitleInfoEventTimeStatus_TypeInfo;
    if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo, method);
      v7 = TitleInfoEventTimeStatus_TypeInfo;
      currentLoop = this->fields.currentLoop;
    }
    --currentLoop;
    TIME_STATUS_DAY_MAX = v7->static_fields->TIME_STATUS_DAY_MAX;
  }
  TitleInfoEventTimeStatus__SetDay(this, TIME_STATUS_DAY_MAX, v2);
  TitleInfoEventTimeStatus__SetLoop(this, currentLoop, v8);
  v11 = TitleInfoEventTimeStatus_TypeInfo;
  if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo, v9);
    v11 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(this, v11->static_fields->TIME_STATUS_DAY_MAX - TIME_STATUS_DAY_MAX, v10);
}


void __fastcall TitleInfoEventTimeStatus__Setup(
        TitleInfoEventTimeStatus_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  TitleInfoEventTimeStatus_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  TitleInfoEventTimeStatus_o *v29; // x21
  __int64 v30; // x1
  int32_t Day; // w0
  UILabel_o *dayCountLabel; // x22
  TitleInfoEventTimeStatus_c *v33; // x0
  int v34; // w24
  UISprite_o *bgSprite; // x22
  _BOOL8 v36; // x0
  const MethodInfo *v37; // x2
  UserEventEntity_o *UserEventEntity; // x0
  int32_t *p_value; // x22
  UILabel_o *loopCountLabel; // x23
  __int64 v41; // x1
  int32_t v42; // w8
  UISprite_o *restDayTextSprite; // x22
  __int64 v44; // x1
  TitleInfoEventTimeStatus_o *restDayCountLabel; // x22
  System_String_o *v46; // x23
  Il2CppObject *v47; // x0
  TitleInfoEventTimeStatus_o *v48; // x1
  TitleInfoEventTimeStatus_o *v49; // x0
  const MethodInfo *v50; // x2
  __int64 v51; // x2
  const MethodInfo *v52; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v54; // x0
  TimeStatusRecord_o *v55; // x23
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  TerminalPramsManager_c *v63; // x0
  PartyOrganizationUtility_o *p_timeStatusRecord_k__BackingField; // x0
  struct UIDrawCall_o *drawCall; // x8
  struct UIDrawCall_o *v66; // x8
  struct UIDrawCall_o *v67; // x8
  struct UIDrawCall_o *v68; // x8
  struct TitleInfoEventTimeImgListComponent_o *iconList; // x8
  int v70; // [xsp+8h] [xbp-48h] BYREF
  int32_t v71; // [xsp+Ch] [xbp-44h] BYREF

  v4 = this;
  if ( (byte_4B14C8B & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, eventDetailEntity, method);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&TimeStatusRecord_TypeInfo, v11, v12);
    sub_1BCA7E0(&TitleInfoEventTimeStatus_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_24195/*"time_status_top"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24184/*"time_status_fes01"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_24185/*"time_status_fes02"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_13471/*"TIME_REST2_DAYS"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_24187/*"time_status_icon_loop"*/, v25, v26);
    this = (TitleInfoEventTimeStatus_o *)sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v27, v28);
    byte_4B14C8B = 1;
  }
  v71 = 0;
  if ( !eventDetailEntity )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)TitleInfoEventTimeStatus__GetEventStatusEntity(
                                         this,
                                         eventDetailEntity->fields.eventId,
                                         method);
  if ( !v4->fields.dayCountLabel )
    goto LABEL_81;
  v29 = this;
  UILabel__set_text(v4->fields.dayCountLabel, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
  if ( v29 )
  {
    Day = EventStatusEntity__GetDay((EventStatusEntity_o *)v29, 0LL);
    v4->fields.currentDay = Day;
    v71 = Day;
    dayCountLabel = v4->fields.dayCountLabel;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)&v71, 0LL);
    if ( !dayCountLabel )
      goto LABEL_81;
    UILabel__set_text(dayCountLabel, (System_String_o *)this, 0LL);
    v33 = TitleInfoEventTimeStatus_TypeInfo;
    if ( !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo, v30);
      v33 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v34 = v33->static_fields->TIME_STATUS_DAY_MAX - v71;
  }
  else
  {
    v34 = 0;
  }
  bgSprite = v4->fields.bgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
  AtlasManager__SetEventUI(bgSprite, (System_String_o *)StringLiteral_24195/*"time_status_top"*/, 0LL);
  v36 = AtlasManager__SetEventUI(v4->fields.loopTitleSprite, (System_String_o *)StringLiteral_24187/*"time_status_icon_loop"*/, 0LL);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v36,
                      eventDetailEntity->fields.eventId,
                      v37);
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
    v42 = *p_value;
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
    v42 = 0;
  }
  v4->fields.currentLoop = v42;
  restDayTextSprite = v4->fields.restDayTextSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v41);
  if ( v34 < 1 )
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_24185/*"time_status_fes02"*/, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !this )
      goto LABEL_81;
    v48 = (TitleInfoEventTimeStatus_o *)StringLiteral_1/*""*/;
  }
  else
  {
    AtlasManager__SetEventUI(restDayTextSprite, (System_String_o *)StringLiteral_24184/*"time_status_fes01"*/, 0LL);
    restDayCountLabel = (TitleInfoEventTimeStatus_o *)v4->fields.restDayCountLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v44);
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_13471/*"TIME_REST2_DAYS"*/, 0LL);
    v70 = v34;
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v46, v47, 0LL);
    if ( !restDayCountLabel )
      goto LABEL_81;
    v48 = this;
    this = restDayCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, (System_String_o *)v48, 0LL);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v49, (EventStatusEntity_o *)v29, v50);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity);
  if ( !byte_4B14D24 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, eventDetailEntity, v51);
    byte_4B14D24 = 1;
  }
  v54 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity);
    v54 = TerminalPramsManager_TypeInfo;
  }
  if ( !v54->static_fields->_timeStatusRecord_k__BackingField )
  {
    v55 = (TimeStatusRecord_o *)sub_1BCAA2C(TimeStatusRecord_TypeInfo, eventDetailEntity, v51, v52);
    TimeStatusRecord___ctor(v55, 0LL);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v56);
    if ( !byte_4B137FC )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v56, v57);
      byte_4B137FC = 1;
    }
    v63 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v56);
      v63 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (PartyOrganizationUtility_o *)&v63->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (PartyOrganizationUtility_c *)v55;
    sub_1BCA784(p_timeStatusRecord_k__BackingField, (int64_t)v55, v57, v58, v59, v60, v61, v62);
    v54 = TerminalPramsManager_TypeInfo;
  }
  if ( !v54->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v54, eventDetailEntity);
  if ( !byte_4B14D24 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, eventDetailEntity, v51);
    byte_4B14D24 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  drawCall = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !drawCall )
    goto LABEL_81;
  if ( drawCall->fields.m_CachedPtr == eventDetailEntity->fields.eventId )
    goto LABEL_68;
  if ( !LODWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this, eventDetailEntity);
  if ( !byte_4B14D24 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, eventDetailEntity, v51);
    byte_4B14D24 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v66 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v66 )
    goto LABEL_81;
  v66->fields.m_CachedPtr = eventDetailEntity->fields.eventId;
  if ( !byte_4B14D24 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, eventDetailEntity, v51);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    byte_4B14D24 = 1;
  }
  if ( !LODWORD(this[1].fields.dayCountTween) )
  {
    j_il2cpp_runtime_class_init_0(this, eventDetailEntity);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v67 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v67 )
LABEL_81:
    sub_1BCAA3C(this, eventDetailEntity);
  *((_DWORD *)&v67->fields.UnityEngine_Behaviour_Fields + 1) = NowTimeState;
LABEL_68:
  if ( !LODWORD(this[1].fields.dayCountTween) )
    j_il2cpp_runtime_class_init_0(this, eventDetailEntity);
  if ( !byte_4B14D24 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, eventDetailEntity, v51);
    byte_4B14D24 = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, eventDetailEntity);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v68 = this[1].fields.dayCountLabel->fields.drawCall;
  if ( !v68 )
    goto LABEL_81;
  this = (TitleInfoEventTimeStatus_o *)v4->fields.iconList;
  if ( !this )
    goto LABEL_81;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    *((_DWORD *)&v68->fields.UnityEngine_Behaviour_Fields + 1),
    NowTimeState,
    v52);
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
  __int64 v5; // x2
  __int64 v6; // x1
  UITweener_o *dayCountTween; // x0
  UITweener_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  EventDelegate_Callback_o *v12; // x21

  if ( (byte_4B14C94 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__, v4, v5);
    byte_4B14C94 = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, this->fields.currentDay, v2);
  dayCountTween = (UITweener_o *)this->fields.dayCountTween;
  if ( !dayCountTween
    || (UITweener__PlayReverse(dayCountTween, 0LL),
        v8 = (UITweener_o *)this->fields.dayCountTween,
        v12 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v9, v10, v11),
        EventDelegate_Callback___ctor(
          v12,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0LL),
        !v8) )
  {
    sub_1BCAA3C(dayCountTween, v6);
  }
  UITweener__SetOnFinished(v8, v12, 0LL);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x1
  UnityEngine_GameObject_o *dayCountLabel; // x0
  __int64 v16; // x1
  Il2CppObject *gameObject; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o **v24; // x21
  UnityEngine_GameObject_o *v25; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  float TIME_STATUS_DAY_EFFECT_TIME; // s8
  UnityEngine_GameObject_o *v31; // x22
  float TIME_STATUS_DAY_EFFECT_SIZE; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v34; // x0
  UITweener_o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  EventDelegate_Callback_o *v39; // x21
  UnityEngine_Vector3_o v40; // 0:s1.4,4:s2.4,8:s3.4

  if ( (byte_4B14C95 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDelegate_Callback_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__, v9, v10);
    sub_1BCA7E0(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, v11, v12);
    byte_4B14C95 = 1;
  }
  v13 = sub_1BCAA2C(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)dayCountLabel, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  dayCountLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_object_(
                                                gameObject,
                                                (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = dayCountLabel;
  v24 = (UnityEngine_GameObject_o **)(v13 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)dayCountLabel, v18, v19, v20, v21, v22, v23);
  dayCountLabel = (UnityEngine_GameObject_o *)this->fields.dayCountLabel;
  if ( !dayCountLabel )
    goto LABEL_14;
  v25 = *v24;
  parent = (UnityEngine_Component_o *)UIRect__get_parent((UIRect_o *)dayCountLabel, 0LL);
  GameObjectExtensions__SafeSetParent(v25, parent, 0LL);
  GameObjectExtensions__ResetLocalScale(*v24, 0LL);
  dayCountLabel = *v24;
  if ( !*v24 )
    goto LABEL_14;
  v27 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0LL);
  TIME_STATUS_DAY_EFFECT_TIME = this->fields.TIME_STATUS_DAY_EFFECT_TIME;
  v31 = v27;
  if ( !byte_4B109C6 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v28, v29);
    byte_4B109C6 = 1;
  }
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v40.fields.x = static_fields->oneVector.fields.x * TIME_STATUS_DAY_EFFECT_SIZE;
  v40.fields.y = static_fields->oneVector.fields.y * TIME_STATUS_DAY_EFFECT_SIZE;
  v40.fields.z = static_fields->oneVector.fields.z * TIME_STATUS_DAY_EFFECT_SIZE;
  TweenScale__Begin(v31, TIME_STATUS_DAY_EFFECT_TIME, v40, 0LL);
  dayCountLabel = *v24;
  if ( !*v24
    || (v34 = UnityEngine_GameObject__get_gameObject(dayCountLabel, 0LL),
        v35 = (UITweener_o *)TweenAlpha__Begin(v34, this->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL),
        v39 = (EventDelegate_Callback_o *)sub_1BCAA2C(EventDelegate_Callback_TypeInfo, v36, v37, v38),
        EventDelegate_Callback___ctor(
          v39,
          (Il2CppObject *)v13,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0LL),
        !v35) )
  {
LABEL_14:
    sub_1BCAA3C(dayCountLabel, v14);
  }
  UITweener__SetOnFinished(v35, v39, 0LL);
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
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  UnityEngine_GameObject_o *effect; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4B14C96 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B14C96 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_1BCAA3C(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
}