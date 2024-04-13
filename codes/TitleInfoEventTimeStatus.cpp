void __fastcall TitleInfoEventTimeStatus___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E6C1E & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTimeStatus_TypeInfo, v1, v2, v3);
    byte_42E6C1E = 1;
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E6C1D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventStatusMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E6C1D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventStatusMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  UserEventMaster_o *MasterData_WarQuestSelectionMaster; // x20

  if ( (byte_42E6C1C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventMaster___, eventId, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E6C1C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (UserEventMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                              Instance,
                                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_9:
    sub_B5D69C(Instance, v12);
  return UserEventMaster__GetEntity(MasterData_WarQuestSelectionMaster, (int64_t)Instance, eventId, 0LL);
}


bool __fastcall TitleInfoEventTimeStatus__IsChangedDay(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  struct UISprite_o *bgSprite; // x8

  bgSprite = this->fields.bgSprite;
  if ( !bgSprite )
    sub_B5D69C(this, method);
  return (bgSprite->fields.updateAnchors | 1) == 3 && *(&bgSprite->fields.updateAnchors + 1) < 2u;
}


void __fastcall TitleInfoEventTimeStatus__PlayChangeDayAnime(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoEventTimeStatus_o *v4; // x19
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
  struct UISprite_o *bgSprite; // x8
  UITweener_o *v18; // x20
  EventDelegate_Callback_o *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  UITweener_o *v22; // x20
  EventDelegate_Callback_o *v23; // x21
  UnityEngine_GameObject_o *v24; // x0
  UITweener_o *v25; // x20
  EventDelegate_Callback_o *v26; // x21
  TitleInfoEventTimeStatus_c *v27; // x0

  v4 = this;
  if ( (byte_42E6C1A & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__, v5, v6, v7);
    sub_B5D5C4(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__, v8, v9, v10);
    sub_B5D5C4(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__, v11, v12, v13);
    this = (TitleInfoEventTimeStatus_o *)sub_B5D5C4(&TitleInfoEventTimeStatus_TypeInfo, v14, v15, v16);
    byte_42E6C1A = 1;
  }
  bgSprite = v4->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_25;
  if ( *(&bgSprite->fields.updateAnchors + 1) > 1u || (bgSprite->fields.updateAnchors | 1) != 3 )
    return;
  this = *(TitleInfoEventTimeStatus_o **)&v4->fields.currentDay;
  if ( !this )
    goto LABEL_25;
  UITweener__PlayForward((UITweener_o *)this, 0LL);
  v18 = *(UITweener_o **)&v4->fields.currentDay;
  v19 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v19,
    (Il2CppObject *)v4,
    Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_0__,
    0LL);
  if ( !v18 )
    goto LABEL_25;
  UITweener__SetOnFinished(v18, v19, 0LL);
  if ( LODWORD(v4[1].klass) == 1 )
  {
    this = (TitleInfoEventTimeStatus_o *)v4->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_25;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v22 = (UITweener_o *)TweenAlpha__Begin(gameObject, v4->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL);
    v23 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
    EventDelegate_Callback___ctor(
      v23,
      (Il2CppObject *)v4,
      Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_3__,
      0LL);
    if ( !v22 )
      goto LABEL_25;
    UITweener__SetOnFinished(v22, v23, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v4->fields.dayCountTween;
    if ( !this )
      goto LABEL_25;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_25;
    if ( !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
    {
      this = (TitleInfoEventTimeStatus_o *)v4->fields.dayCountTween;
      if ( this )
      {
        this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
          this = (TitleInfoEventTimeStatus_o *)v4->fields.dayCountTween;
          if ( this )
          {
            ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
              this,
              this->klass[1]._1.declaringType,
              0.0);
            this = (TitleInfoEventTimeStatus_o *)v4->fields.dayCountTween;
            if ( this )
            {
              v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              v25 = (UITweener_o *)TweenAlpha__Begin(v24, v4->fields.TIME_STATUS_DAY_EFFECT_TIME, 0.0, 0LL);
              v26 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
              EventDelegate_Callback___ctor(
                v26,
                (Il2CppObject *)v4,
                Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_4__,
                0LL);
              if ( v25 )
              {
                UITweener__SetOnFinished(v25, v26, 0LL);
                goto LABEL_20;
              }
            }
          }
        }
      }
LABEL_25:
      sub_B5D69C(this, method);
    }
  }
LABEL_20:
  v27 = TitleInfoEventTimeStatus_TypeInfo;
  if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v27 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(v4, v27->static_fields->TIME_STATUS_DAY_MAX - LODWORD(v4[1].klass), v20);
}


void __fastcall TitleInfoEventTimeStatus__PlayIconScrollAnime(
        TitleInfoEventTimeStatus_o *this,
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
  TitleInfoEventTimeImgListComponent_o *bgSprite; // x20
  System_Action_o *v12; // x21
  TerminalPramsManager_c *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  int v16; // w2
  __int64 v17; // x3
  TerminalPramsManager_c *v18; // x0
  struct UISprite_o *v19; // x8
  struct TimeStatusRecord_o *timeStatusRecord_k__BackingField; // x9

  if ( (byte_42E6C19 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, v8, v9, v10);
    byte_42E6C19 = 1;
  }
  bgSprite = (TitleInfoEventTimeImgListComponent_o *)this->fields.bgSprite;
  v12 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_TitleInfoEventTimeStatus_PlayChangeDayAnime__, 0LL);
  if ( !bgSprite )
    goto LABEL_25;
  TitleInfoEventTimeImgListComponent__SetupTimeAnime(bgSprite, v12, v15);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E6CEF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v16, v17);
    byte_42E6CEF = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  if ( v18->static_fields->_timeStatusRecord_k__BackingField )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v18);
    if ( !byte_42E6CEF )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v16, v17);
      byte_42E6CEF = 1;
    }
    v13 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v13 = TerminalPramsManager_TypeInfo;
    }
    v19 = this->fields.bgSprite;
    if ( v19 )
    {
      timeStatusRecord_k__BackingField = v13->static_fields->_timeStatusRecord_k__BackingField;
      if ( timeStatusRecord_k__BackingField )
      {
        timeStatusRecord_k__BackingField->fields.state = *(&v19->fields.updateAnchors + 1);
        return;
      }
    }
LABEL_25:
    sub_B5D69C(v13, v14);
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
    sub_B5D69C(v4, v5);
  UILabel__set_text(restDayTextSprite, v4, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetLoop(
        TitleInfoEventTimeStatus_o *this,
        int32_t loop,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UISprite_o *dayCountTween; // x21
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  UILabel_o *loopTitleSprite; // x19
  int32_t v16; // [xsp+Ch] [xbp-14h] BYREF

  v16 = loop;
  if ( (byte_42E6C17 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, loop, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22991/*"time_status_icon_loop"*/, v9, v10, v11);
    byte_42E6C17 = 1;
  }
  dayCountTween = (UISprite_o *)this->fields.dayCountTween;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(dayCountTween, (System_String_o *)StringLiteral_22991/*"time_status_icon_loop"*/, 0LL);
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
      gameObject = (UnityEngine_Component_o *)System_Int32__ToString((int32_t)&v16, 0LL);
      if ( loopTitleSprite )
      {
        UILabel__set_text(loopTitleSprite, (System_String_o *)gameObject, 0LL);
        return;
      }
    }
LABEL_14:
    sub_B5D69C(gameObject, v13);
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
  struct UILabel_o *restDayCountLabel; // x21
  UILabel_o *loopCountLabel; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  __int64 v29; // x1
  int32_t v30; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E6C18 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, restDay, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_22988/*"time_status_fes01"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_22989/*"time_status_fes02"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_13531/*"TIME_REST2_DAYS"*/, v21, v22, v23);
    byte_42E6C18 = 1;
  }
  restDayCountLabel = this->fields.restDayCountLabel;
  if ( restDay >= 1 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI((UISprite_o *)restDayCountLabel, (System_String_o *)StringLiteral_22988/*"time_status_fes01"*/, 0LL);
    loopCountLabel = this->fields.loopCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13531/*"TIME_REST2_DAYS"*/, 0LL);
    v30 = restDay;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    v28 = System_String__Format(v26, v27, 0LL);
    if ( loopCountLabel )
    {
      UILabel__set_text(loopCountLabel, v28, 0LL);
      return;
    }
LABEL_17:
    sub_B5D69C(v28, v29);
  }
  if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !AtlasManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  }
  AtlasManager__SetEventUI((UISprite_o *)restDayCountLabel, (System_String_o *)StringLiteral_22989/*"time_status_fes02"*/, 0LL);
  v28 = (System_String_o *)this->fields.loopCountLabel;
  if ( !v28 )
    goto LABEL_17;
  UILabel__set_text((UILabel_o *)v28, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall TitleInfoEventTimeStatus__SetYesterday(TitleInfoEventTimeStatus_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int klass; // w8
  int32_t klass_high; // w21
  int32_t TIME_STATUS_DAY_MAX; // w20
  TitleInfoEventTimeStatus_c *v8; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2
  TitleInfoEventTimeStatus_c *v11; // x0

  if ( (byte_42E6C1B & 1) == 0 )
  {
    sub_B5D5C4(&TitleInfoEventTimeStatus_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E6C1B = 1;
  }
  klass = (int)this[1].klass;
  klass_high = HIDWORD(this[1].klass);
  TIME_STATUS_DAY_MAX = klass - 1;
  if ( klass == 1 )
  {
    v8 = TitleInfoEventTimeStatus_TypeInfo;
    if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v8 = TitleInfoEventTimeStatus_TypeInfo;
      klass_high = HIDWORD(this[1].klass);
    }
    --klass_high;
    TIME_STATUS_DAY_MAX = v8->static_fields->TIME_STATUS_DAY_MAX;
  }
  TitleInfoEventTimeStatus__SetDay(this, TIME_STATUS_DAY_MAX, v2);
  TitleInfoEventTimeStatus__SetLoop(this, klass_high, v9);
  v11 = TitleInfoEventTimeStatus_TypeInfo;
  if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
    v11 = TitleInfoEventTimeStatus_TypeInfo;
  }
  TitleInfoEventTimeStatus__SetRestDay(this, v11->static_fields->TIME_STATUS_DAY_MAX - TIME_STATUS_DAY_MAX, v10);
}


void __fastcall TitleInfoEventTimeStatus__Setup(
        TitleInfoEventTimeStatus_o *this,
        EventDetailEntity_o *eventDetailEntity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  TitleInfoEventTimeStatus_o *v5; // x19
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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  TitleInfoEventTimeStatus_o *v42; // x21
  int32_t Day; // w0
  UILabel_o *restDayTextSprite; // x22
  TitleInfoEventTimeStatus_c *v45; // x0
  int v46; // w24
  UISprite_o *dayCountLabel; // x22
  _BOOL8 v48; // x0
  const MethodInfo *v49; // x2
  UserEventEntity_o *UserEventEntity; // x0
  int32_t *p_value; // x22
  UILabel_o *loopTitleSprite; // x23
  int32_t v53; // w8
  UISprite_o *restDayCountLabel; // x22
  TitleInfoEventTimeStatus_o *loopCountLabel; // x22
  System_String_o *v56; // x23
  Il2CppObject *v57; // x0
  System_String_o *v58; // x1
  TitleInfoEventTimeStatus_o *v59; // x0
  const MethodInfo *v60; // x2
  int v61; // w2
  const MethodInfo *v62; // x3
  int32_t NowTimeState; // w21
  TerminalPramsManager_c *v64; // x0
  TimeStatusRecord_o *v65; // x23
  int v66; // w1
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  TerminalPramsManager_c *v73; // x0
  BattleServantConfConponent_o *p_timeStatusRecord_k__BackingField; // x0
  struct UIDrawCall_o *drawCall; // x8
  struct UIDrawCall_o *v76; // x8
  struct UIDrawCall_o *v77; // x8
  struct UIDrawCall_o *v78; // x8
  struct UISprite_o *bgSprite; // x8
  int v80; // [xsp+8h] [xbp-38h] BYREF
  int32_t v81; // [xsp+Ch] [xbp-34h] BYREF

  v5 = this;
  if ( (byte_42E6C16 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)eventDetailEntity, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&TimeStatusRecord_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&TitleInfoEventTimeStatus_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_22999/*"time_status_top"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_22988/*"time_status_fes01"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_22989/*"time_status_fes02"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_1/*""*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_13531/*"TIME_REST2_DAYS"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_22991/*"time_status_icon_loop"*/, v36, v37, v38);
    this = (TitleInfoEventTimeStatus_o *)sub_B5D5C4(&StringLiteral_973/*"0"*/, v39, v40, v41);
    byte_42E6C16 = 1;
  }
  v81 = 0;
  if ( !eventDetailEntity )
    goto LABEL_99;
  this = (TitleInfoEventTimeStatus_o *)TitleInfoEventTimeStatus__GetEventStatusEntity(
                                         this,
                                         eventDetailEntity->fields.eventId,
                                         method);
  if ( !v5->fields.restDayTextSprite )
    goto LABEL_99;
  v42 = this;
  UILabel__set_text((UILabel_o *)v5->fields.restDayTextSprite, (System_String_o *)StringLiteral_973/*"0"*/, 0LL);
  if ( v42 )
  {
    Day = EventStatusEntity__GetDay((EventStatusEntity_o *)v42, 0LL);
    LODWORD(v5[1].klass) = Day;
    v81 = Day;
    restDayTextSprite = (UILabel_o *)v5->fields.restDayTextSprite;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)&v81, 0LL);
    if ( !restDayTextSprite )
      goto LABEL_99;
    UILabel__set_text(restDayTextSprite, (System_String_o *)this, 0LL);
    v45 = TitleInfoEventTimeStatus_TypeInfo;
    if ( (BYTE3(TitleInfoEventTimeStatus_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TitleInfoEventTimeStatus_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TitleInfoEventTimeStatus_TypeInfo);
      v45 = TitleInfoEventTimeStatus_TypeInfo;
    }
    v46 = v45->static_fields->TIME_STATUS_DAY_MAX - v81;
  }
  else
  {
    v46 = 0;
  }
  dayCountLabel = (UISprite_o *)v5->fields.dayCountLabel;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(dayCountLabel, (System_String_o *)StringLiteral_22999/*"time_status_top"*/, 0LL);
  v48 = AtlasManager__SetEventUI((UISprite_o *)v5->fields.dayCountTween, (System_String_o *)StringLiteral_22991/*"time_status_icon_loop"*/, 0LL);
  UserEventEntity = TitleInfoEventTimeStatus__GetUserEventEntity(
                      (TitleInfoEventTimeStatus_o *)v48,
                      eventDetailEntity->fields.eventId,
                      v49);
  if ( UserEventEntity && (p_value = &UserEventEntity->fields.value, UserEventEntity->fields.value >= 1) )
  {
    this = (TitleInfoEventTimeStatus_o *)v5->fields.dayCountTween;
    if ( !this )
      goto LABEL_99;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v5->fields.dayCountTween;
    if ( !this )
      goto LABEL_99;
    ((void (__fastcall *)(TitleInfoEventTimeStatus_o *, void *))this->klass[2]._1.typeMetadataHandle)(
      this,
      this->klass[2]._1.interopData);
    loopTitleSprite = (UILabel_o *)v5->fields.loopTitleSprite;
    this = (TitleInfoEventTimeStatus_o *)System_Int32__ToString((int32_t)p_value, 0LL);
    if ( !loopTitleSprite )
      goto LABEL_99;
    UILabel__set_text(loopTitleSprite, (System_String_o *)this, 0LL);
    v53 = *p_value;
  }
  else
  {
    this = (TitleInfoEventTimeStatus_o *)v5->fields.dayCountTween;
    if ( !this )
      goto LABEL_99;
    this = (TitleInfoEventTimeStatus_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v5->fields.loopTitleSprite;
    if ( !this )
      goto LABEL_99;
    UILabel__set_text((UILabel_o *)this, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v53 = 0;
  }
  HIDWORD(v5[1].klass) = v53;
  restDayCountLabel = (UISprite_o *)v5->fields.restDayCountLabel;
  if ( v46 < 1 )
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(restDayCountLabel, (System_String_o *)StringLiteral_22989/*"time_status_fes02"*/, 0LL);
    this = (TitleInfoEventTimeStatus_o *)v5->fields.loopCountLabel;
    if ( !this )
      goto LABEL_99;
    v58 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( (WORD1(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(restDayCountLabel, (System_String_o *)StringLiteral_22988/*"time_status_fes01"*/, 0LL);
    loopCountLabel = (TitleInfoEventTimeStatus_o *)v5->fields.loopCountLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v56 = LocalizationManager__Get((System_String_o *)StringLiteral_13531/*"TIME_REST2_DAYS"*/, 0LL);
    v80 = v46;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v80);
    this = (TitleInfoEventTimeStatus_o *)System_String__Format(v56, v57, 0LL);
    if ( !loopCountLabel )
      goto LABEL_99;
    v58 = (System_String_o *)this;
    this = loopCountLabel;
  }
  UILabel__set_text((UILabel_o *)this, v58, 0LL);
  NowTimeState = TitleInfoEventTimeStatus__GetNowTimeState(v59, (EventStatusEntity_o *)v42, v60);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E6CEF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)eventDetailEntity, v61, v62);
    byte_42E6CEF = 1;
  }
  v64 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v64 = TerminalPramsManager_TypeInfo;
  }
  if ( !v64->static_fields->_timeStatusRecord_k__BackingField )
  {
    v65 = (TimeStatusRecord_o *)sub_B5D694(TimeStatusRecord_TypeInfo);
    TimeStatusRecord___ctor(v65, 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E5CB6 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v66, (_DWORD)v67, v68);
      byte_42E5CB6 = 1;
    }
    v73 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v73 = TerminalPramsManager_TypeInfo;
    }
    p_timeStatusRecord_k__BackingField = (BattleServantConfConponent_o *)&v73->static_fields->_timeStatusRecord_k__BackingField;
    p_timeStatusRecord_k__BackingField->klass = (BattleServantConfConponent_c *)v65;
    sub_B5D560(p_timeStatusRecord_k__BackingField, (System_Int32_array **)v65, v67, v68, v69, v70, v71, v72);
    v64 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v64);
  if ( !byte_42E6CEF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)eventDetailEntity, v61, v62);
    byte_42E6CEF = 1;
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
    if ( !byte_42E6CEF )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)eventDetailEntity, v61, v62);
      byte_42E6CEF = 1;
    }
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
    }
    v76 = this[1].fields.loopTitleSprite->fields.drawCall;
    if ( v76 )
    {
      v76->fields.m_CachedPtr = eventDetailEntity->fields.eventId;
      if ( !byte_42E6CEF )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)eventDetailEntity, v61, v62);
        this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
        byte_42E6CEF = 1;
      }
      if ( (this[2].fields.currentDay & 0x4000000) != 0 && !this[2].fields.m_CachedPtr )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
      }
      v77 = this[1].fields.loopTitleSprite->fields.drawCall;
      if ( v77 )
      {
        v77->fields.widgetCount = NowTimeState;
        goto LABEL_84;
      }
    }
LABEL_99:
    sub_B5D69C(this, eventDetailEntity);
  }
LABEL_84:
  if ( (this[2].fields.currentDay & 0x4000000) != 0 && !this[2].fields.m_CachedPtr )
    j_il2cpp_runtime_class_init_0(this);
  if ( !byte_42E6CEF )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)eventDetailEntity, v61, v62);
    byte_42E6CEF = 1;
  }
  this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    this = (TitleInfoEventTimeStatus_o *)TerminalPramsManager_TypeInfo;
  }
  v78 = this[1].fields.loopTitleSprite->fields.drawCall;
  if ( !v78 )
    goto LABEL_99;
  this = (TitleInfoEventTimeStatus_o *)v5->fields.bgSprite;
  if ( !this )
    goto LABEL_99;
  TitleInfoEventTimeImgListComponent__Init(
    (TitleInfoEventTimeImgListComponent_o *)this,
    v78->fields.widgetCount,
    NowTimeState,
    v62);
  bgSprite = v5->fields.bgSprite;
  if ( !bgSprite )
    goto LABEL_99;
  if ( (bgSprite->fields.updateAnchors | 1) == 3 && *(&bgSprite->fields.updateAnchors + 1) <= 1u )
    TitleInfoEventTimeStatus__SetYesterday(v5, (const MethodInfo *)eventDetailEntity);
}


void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_0(
        TitleInfoEventTimeStatus_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UITweener_o *v9; // x0
  UITweener_o *v10; // x20
  EventDelegate_Callback_o *v11; // x21

  if ( (byte_42E6C1F & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__, v5, v6, v7);
    byte_42E6C1F = 1;
  }
  TitleInfoEventTimeStatus__SetDay(this, (int32_t)this[1].klass, v2);
  v9 = *(UITweener_o **)&this->fields.currentDay;
  if ( !v9
    || (UITweener__PlayReverse(v9, 0LL),
        v10 = *(UITweener_o **)&this->fields.currentDay,
        v11 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v11,
          (Il2CppObject *)this,
          Method_TitleInfoEventTimeStatus__PlayChangeDayAnime_b__20_1__,
          0LL),
        !v10) )
  {
    sub_B5D69C(v9, v8);
  }
  UITweener__SetOnFinished(v10, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventTimeStatus___PlayChangeDayAnime_b__20_1(
        TitleInfoEventTimeStatus_o *this,
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  __int64 v17; // x20
  __int64 v18; // x1
  UnityEngine_GameObject_o *restDayTextSprite; // x0
  UnityEngine_GameObject_o *gameObject; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o **v27; // x21
  UnityEngine_GameObject_o *v28; // x22
  UnityEngine_Component_o *parent; // x0
  UnityEngine_GameObject_o *v30; // x0
  float TIME_STATUS_DAY_EFFECT_SIZE; // s8
  UnityEngine_GameObject_o *v32; // x22
  float v33; // s3
  float v34; // s5
  float v35; // s4
  float v36; // s3
  UnityEngine_GameObject_o *v37; // x0
  UITweener_o *v38; // x19
  EventDelegate_Callback_o *v39; // x21
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4 OVERLAPPED

  if ( (byte_42E6C20 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__, v11, v12, v13);
    sub_B5D5C4(&TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo, v14, v15, v16);
    byte_42E6C20 = 1;
  }
  v17 = sub_B5D694(TitleInfoEventTimeStatus___c__DisplayClass20_0_TypeInfo);
  TitleInfoEventTimeStatus___c__DisplayClass20_0___ctor((TitleInfoEventTimeStatus___c__DisplayClass20_0_o *)v17, 0LL);
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
                                                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v17 )
    goto LABEL_13;
  *(_QWORD *)(v17 + 16) = restDayTextSprite;
  v27 = (UnityEngine_GameObject_o **)(v17 + 16);
  sub_B5D560(
    (BattleServantConfConponent_o *)(v17 + 16),
    (System_Int32_array **)restDayTextSprite,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  restDayTextSprite = (UnityEngine_GameObject_o *)this->fields.restDayTextSprite;
  if ( !restDayTextSprite )
    goto LABEL_13;
  v28 = *v27;
  parent = (UnityEngine_Component_o *)UIRect__get_parent((UIRect_o *)restDayTextSprite, 0LL);
  GameObjectExtensions__SafeSetParent(v28, parent, 0LL);
  GameObjectExtensions__ResetLocalScale(*v27, 0LL);
  restDayTextSprite = *v27;
  if ( !*v27 )
    goto LABEL_13;
  v30 = UnityEngine_GameObject__get_gameObject(restDayTextSprite, 0LL);
  TIME_STATUS_DAY_EFFECT_SIZE = this->fields.TIME_STATUS_DAY_EFFECT_SIZE;
  v32 = v30;
  one = UnityEngine_Vector3__get_one(0LL);
  v33 = *(float *)&this->fields.iconList;
  v34 = one.fields.x * v33;
  v35 = one.fields.y * v33;
  v36 = one.fields.z * v33;
  one.fields.y = v34;
  one.fields.z = v35;
  TweenScale__Begin(v32, TIME_STATUS_DAY_EFFECT_SIZE, *(UnityEngine_Vector3_o *)&one.fields.y, 0LL);
  restDayTextSprite = *v27;
  if ( !*v27
    || (v37 = UnityEngine_GameObject__get_gameObject(restDayTextSprite, 0LL),
        v38 = (UITweener_o *)TweenAlpha__Begin(v37, this->fields.TIME_STATUS_DAY_EFFECT_SIZE, 0.0, 0LL),
        v39 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v39,
          (Il2CppObject *)v17,
          Method_TitleInfoEventTimeStatus___c__DisplayClass20_0__PlayChangeDayAnime_b__2__,
          0LL),
        !v38) )
  {
LABEL_13:
    sub_B5D69C(restDayTextSprite, v18);
  }
  UITweener__SetOnFinished(v38, v39, 0LL);
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
    sub_B5D69C(0LL, v4);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *effect; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_42E6243 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E6243 = 1;
  }
  effect = this->fields.effect;
  if ( !effect )
    sub_B5D69C(0LL, method);
  gameObject = (UnityEngine_Object_o *)UnityEngine_GameObject__get_gameObject(effect, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
}