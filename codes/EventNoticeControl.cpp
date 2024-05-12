void __fastcall EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438B527 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
    byte_438B527 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventInfoList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsMultiple; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int v7; // w1

  if ( (byte_438B523 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_438B523 = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_B7769C(IsMultiple, v4);
    v7 = (this->fields.eventInfoIndex + 1) % eventInfoList->fields._size;
    this->fields.eventInfoIndex = v7;
    EventNoticeControl__SetLabelAndSprite(this, v7, v5);
  }
}


void __fastcall EventNoticeControl__CheckCombineCampaignData(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v6; // x8
  int size; // w8
  EventNoticeControl_o *v8; // x0
  int32_t eventInfoIndex; // w1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438B526 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_438B526 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventInfoList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v10.fields.current )
      sub_B7769C(0LL, v4);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v10.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v6 = this->fields.eventInfoList;
  if ( !v6 )
LABEL_16:
    sub_B7769C(eventInfoList, method);
  size = v6->fields._size;
  if ( size == 1 )
  {
    v8 = this;
    eventInfoIndex = 0;
  }
  else
  {
    if ( size < 2 )
      return;
    eventInfoIndex = this->fields.eventInfoIndex;
    v8 = this;
  }
  EventNoticeControl__SetLabelAndSprite(v8, eventInfoIndex, v5);
}


bool __fastcall EventNoticeControl__GetIsNeedToInfoUpdate(
        EventNoticeControl_o *this,
        System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfolist,
        int64_t now,
        bool isNeedToUpdate,
        const MethodInfo *method)
{
  int32_t size; // w21
  __int64 v10; // x22
  unsigned int v11; // w8

  if ( (byte_438B521 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    this = (EventNoticeControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    byte_438B521 = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_18:
    sub_B7769C(this, eventInfolist);
  size = eventInfolist->fields._size;
  if ( size >= 1 )
  {
    v10 = 0LL;
    v11 = eventInfolist->fields._size;
    while ( 1 )
    {
      if ( v11 <= (unsigned int)v10 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (EventNoticeControl_o *)eventInfolist->fields._items->m_Items[v10];
      if ( !this )
        goto LABEL_18;
      if ( !BYTE1(this->fields.eventInfoList) )
      {
        if ( (__int64)this->fields.eventDetailSprite < now )
        {
          EventNoticeControl_EventInfo__SetIsTimeOver((EventNoticeControl_EventInfo_o *)this, 0LL);
          return 1;
        }
        if ( (__int64)this->fields.eventRemainLabel <= now )
          return 1;
      }
      if ( (int)v10 + 1 >= size )
        return 0;
      v11 = eventInfolist->fields._size;
      ++v10;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__InitLabelAndSprite(EventNoticeControl_o *this, const MethodInfo *method)
{
  UILabel_o *eventDetailLabel; // x0
  UIWidget_o *v4; // x20
  int v5; // s0

  if ( (byte_438B520 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B520 = 1;
  }
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel
    || (UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        v4 = (UIWidget_o *)this->fields.eventDetailLabel,
        *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL),
        !v4)
    || (UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v5, 0LL),
        (eventDetailLabel = (UILabel_o *)this->fields.eventDetailSprite) == 0LL)
    || (UISprite__set_spriteName((UISprite_o *)eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (eventDetailLabel = this->fields.eventRemainLabel) == 0LL) )
  {
    sub_B7769C(eventDetailLabel, method);
  }
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x0
  const MethodInfo *v4; // x1

  if ( (byte_438B51D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
    byte_438B51D = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( eventInfoList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventInfoList,
      (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
    EventNoticeControl__InitLabelAndSprite(this, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetAlpha(EventNoticeControl_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  __int64 v5; // x1
  void *eventDetailLabel; // x0

  v3 = *(long double *)&alpha;
  if ( EventNoticeControl__get_IsMultiple(this, method) )
  {
    eventDetailLabel = this->fields.eventDetailLabel;
    if ( !eventDetailLabel
      || ((*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)eventDetailLabel + 440LL))(
            eventDetailLabel,
            *(_QWORD *)(*(_QWORD *)eventDetailLabel + 448LL),
            v3),
          (eventDetailLabel = this->fields.eventDetailSprite) == 0LL)
      || ((*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)eventDetailLabel + 440LL))(
            eventDetailLabel,
            *(_QWORD *)(*(_QWORD *)eventDetailLabel + 448LL),
            v3),
          (eventDetailLabel = this->fields.eventRemainLabel) == 0LL) )
    {
      sub_B7769C(eventDetailLabel, v5);
    }
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)eventDetailLabel + 440LL))(
      eventDetailLabel,
      *(_QWORD *)(*(_QWORD *)eventDetailLabel + 448LL),
      v3);
  }
}


void __fastcall EventNoticeControl__SetCombineEventData(
        EventNoticeControl_o *this,
        EventInfoData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x21
  EventNoticeControl_EventInfo_o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438B51E & 1) == 0 )
  {
    sub_B775C4(&EventNoticeControl_EventInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
    byte_438B51E = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  v6 = (EventNoticeControl_EventInfo_o *)sub_B77694(EventNoticeControl_EventInfo_TypeInfo);
  EventNoticeControl_EventInfo___ctor(v6, data, 0LL);
  if ( !eventInfoList )
    sub_B7769C(v7, v8);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v6,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
  this->fields.isNeedToUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetLabelAndSprite(
        EventNoticeControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventNoticeControl_o *v4; // x19
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x21
  EventNoticeControl_EventInfo_o *v6; // x22
  UISprite_o *eventDetailSprite; // x20
  System_String_o *SpriteName_k__BackingField; // x21
  bool v9; // w20
  UIWidget_o *eventDetailLabel; // x20
  int v11; // s0
  struct UILabel_o *v15; // x8
  System_String_o *v16; // x0
  UILabel_o *v17; // x20
  System_String_o *v18; // x21
  Il2CppObject *RestTime2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t EndAt_k__BackingField; // x20
  int64_t Time; // x0
  const MethodInfo *v23; // x2
  struct UISprite_o *v24; // x8
  int32_t v25; // w1
  float v26; // s0
  double v27; // d0
  UIWidget_o *v28; // x19
  int v29; // s0

  v4 = this;
  if ( (byte_438B524 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_24025/*"{0}"*/);
    this = (EventNoticeControl_o *)sub_B775C4(&StringLiteral_13645/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/);
    byte_438B524 = 1;
  }
  eventInfoList = v4->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_52;
  if ( eventInfoList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = eventInfoList->fields._items->m_Items[index];
  if ( !v6 )
    goto LABEL_52;
  if ( v6->fields._IsSprite_k__BackingField )
  {
    eventDetailSprite = v4->fields.eventDetailSprite;
    SpriteName_k__BackingField = v6->fields._SpriteName_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v9 = AtlasManager__SetEventUI(eventDetailSprite, SpriteName_k__BackingField, 0LL);
  }
  else
  {
    v9 = 0;
  }
  this = (EventNoticeControl_o *)v4->fields.eventDetailSprite;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v9, 0LL);
  this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v9, 0LL);
  this = (EventNoticeControl_o *)v4->fields.eventDetailSprite;
  if ( !this )
    goto LABEL_52;
  ((void (__fastcall *)(EventNoticeControl_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__set_text((UILabel_o *)this, v6->fields._EventName_k__BackingField, 0LL);
  eventDetailLabel = (UIWidget_o *)v4->fields.eventDetailLabel;
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
  if ( !eventDetailLabel )
    goto LABEL_52;
  UIWidget__set_color(eventDetailLabel, *(UnityEngine_Color_o *)&v11, 0LL);
  if ( v6->fields._IsCondTypeQuestClear_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventNoticeControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13645/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, 0LL);
    v15 = v4->fields.eventDetailLabel;
    if ( v15 )
    {
      v16 = System_String__Format_44897472(
              (System_String_o *)this,
              (Il2CppObject *)v15->fields.mText,
              (Il2CppObject *)StringLiteral_24025/*"{0}"*/,
              0LL);
      v17 = v4->fields.eventDetailLabel;
      v18 = v16;
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v6->fields._EndAt_k__BackingField, -1LL, 0LL);
      this = (EventNoticeControl_o *)System_String__Format(v18, RestTime2, 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)this, 0LL);
        this = (EventNoticeControl_o *)v4->fields.eventRemainLabel;
        if ( this )
        {
          this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
            if ( this )
            {
              UILabel__set_applyGradient((UILabel_o *)this, v6->fields._IsCampaignOpen_k__BackingField, 0LL);
              this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
              if ( this )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                GameObjectExtensions__SetLocalPositionX(gameObject, -290.0, 0LL);
                this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
                if ( this )
                {
                  UILabel__set_fontSize((UILabel_o *)this, 18, 0LL);
                  this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
                  if ( this )
                  {
                    UILabel__SetCondensedScale((UILabel_o *)this, 430, 0LL);
                    if ( v6->fields._IsCampaignOpen_k__BackingField )
                      return;
                    v28 = (UIWidget_o *)v4->fields.eventDetailLabel;
                    *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_cyan(0LL);
                    if ( v28 )
                    {
                      UIWidget__set_color(v28, *(UnityEngine_Color_o *)&v29, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_52:
    sub_B7769C(this, *(_QWORD *)&index);
  }
  this = (EventNoticeControl_o *)v4->fields.eventRemainLabel;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  EndAt_k__BackingField = v6->fields._EndAt_k__BackingField;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  EventNoticeControl__SetRemainTime(EndAt_k__BackingField - Time, v4->fields.eventRemainLabel, v23);
  this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__set_applyGradient((UILabel_o *)this, 1, 0LL);
  this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__set_fontSize((UILabel_o *)this, 20, 0LL);
  this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__SetCondensedScale((UILabel_o *)this, 300, 0LL);
  v24 = v4->fields.eventDetailSprite;
  if ( !v24 )
    goto LABEL_52;
  this = (EventNoticeControl_o *)v4->fields.eventRemainLabel;
  if ( !this )
    goto LABEL_52;
  v25 = (int32_t)this[2].fields.eventDetailSprite;
  if ( v24->fields.mWidth >= 320 )
  {
    v26 = (float)v25 * 0.8;
    if ( v26 == INFINITY )
      v27 = -v26;
    else
      v27 = v26;
    v25 = (int)v27;
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v25, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetRemainTime(int64_t remainTime, UILabel_o *label, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int v7; // s0
  System_String_o *v11; // x21
  __int64 v12; // x2
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  System_String_o *v15; // x21
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  System_String_o *v18; // x21
  System_String_o *v19; // x0
  unsigned __int64 v20; // x21
  System_String_o *v21; // x20
  __int64 v22; // x2
  Il2CppObject *v23; // x0
  int v24; // [xsp+4h] [xbp-3Ch] BYREF
  int v25; // [xsp+8h] [xbp-38h] BYREF
  int v26; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438B522 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_5766/*"EVENT_DAY_TXT"*/);
    sub_B775C4(&StringLiteral_5878/*"EVENT_TIMEOVER_TXT"*/);
    sub_B775C4(&StringLiteral_5879/*"EVENT_TIME_TXT"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_5791/*"EVENT_MIN_TXT"*/);
    byte_438B522 = 1;
  }
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_black(0LL);
  if ( !label )
    sub_B7769C(v5, v6);
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&v7, 0LL);
  if ( remainTime < 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5878/*"EVENT_TIMEOVER_TXT"*/, 0LL);
    goto LABEL_18;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5766/*"EVENT_DAY_TXT"*/, 0LL);
  v26 = remainTime / 0x15180uLL;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v12);
  v14 = System_String__Format(v11, v13, 0LL);
  if ( (int)(remainTime / 0x15180uLL) <= 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5879/*"EVENT_TIME_TXT"*/, 0LL);
    v25 = remainTime / 0xE10uLL;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v16);
    v14 = System_String__Format(v15, v17, 0LL);
    if ( (int)(remainTime / 0xE10uLL) <= 0 )
    {
      v20 = remainTime / 0x3CuLL;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5791/*"EVENT_MIN_TXT"*/, 0LL);
      v24 = v20;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v22);
      v19 = System_String__Format(v21, v23, 0LL);
LABEL_18:
      v18 = v19;
      white = UnityEngine_Color__get_white(0LL);
      UILabel__set_effectColor(label, white, 0LL);
      goto LABEL_19;
    }
  }
  v18 = v14;
LABEL_19:
  UILabel__set_text(label, v18, 0LL);
}


void __fastcall EventNoticeControl__UpdateEventNotice(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x20
  EventNoticeControl_o *Time; // x0
  const MethodInfo *v5; // x4
  _BOOL8 IsNeedToInfoUpdate; // x0
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v8; // x8
  const MethodInfo *v9; // x2

  if ( (byte_438B51F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438B51F = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (EventNoticeControl_o *)NetworkManager__getTime(0LL);
  IsNeedToInfoUpdate = EventNoticeControl__GetIsNeedToInfoUpdate(
                         Time,
                         eventInfoList,
                         (int64_t)Time,
                         this->fields.isNeedToUpdate,
                         v5);
  if ( IsNeedToInfoUpdate )
  {
    v8 = this->fields.eventInfoList;
    this->fields.isNeedToUpdate = 0;
    if ( !v8 )
      sub_B7769C(IsNeedToInfoUpdate, v7);
    if ( v8->fields._size )
    {
      if ( !EventNoticeControl__get_IsMultiple(this, v7) )
        EventNoticeControl__SetLabelAndSprite(this, 0, v9);
    }
    else
    {
      EventNoticeControl__InitLabelAndSprite(this, v7);
    }
  }
}


bool __fastcall EventNoticeControl__get_IsMultiple(EventNoticeControl_o *this, const MethodInfo *method)
{
  EventNoticeControl_o *v2; // x19
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8

  v2 = this;
  if ( (byte_438B525 & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_438B525 = 1;
  }
  eventInfoList = v2->fields.eventInfoList;
  if ( !eventInfoList )
    sub_B7769C(this, method);
  return eventInfoList->fields._size > 1;
}


void __fastcall EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v6; // x1
  struct System_String_o *name; // x25
  int64_t startAt; // x8
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  __int64 v11; // x8
  __int64 v12; // x26
  System_String_o **v13; // x23
  System_String_o *v14; // x24
  struct System_String_o *v15; // x24
  System_String_o *v16; // x24
  __int64 v17; // x0

  if ( (byte_4387FE2 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22975/*"synthesis_notice_"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4387FE2 = 1;
  }
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(&this->fields.spriteName);
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(&this->fields.eventName);
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(&this->fields.overwriteSpriteName);
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(&this->fields.overwriteText);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_B77560(&this->fields.eventName);
  this->fields._EventName_k__BackingField = name;
  sub_B77560(&this->fields);
  this->fields._EndAt_k__BackingField = eventInfoData->fields.endAt;
  startAt = eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  this->fields._StartAt_k__BackingField = startAt;
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_B77560(&this->fields.infoData);
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(&this->fields.overwriteSpriteName);
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560(&this->fields.overwriteText);
  eventEntity = eventInfoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_21;
  script = eventEntity->fields.script;
  if ( script && (v11 = *(_QWORD *)&script->max_length) != 0 )
  {
    if ( (int)v11 >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= (unsigned int)v11 )
        {
          v17 = sub_B776C8(IsNullOrEmpty);
          sub_B77668(v17, 0LL);
        }
        v13 = (System_String_o **)script->m_Items[v12];
        if ( !v13 )
          break;
        v14 = v13[7];
        if ( !System_String__IsNullOrEmpty(v14, 0LL) )
        {
          v15 = System_String__Concat_44901936((System_String_o *)StringLiteral_22975/*"synthesis_notice_"*/, v14, 0LL);
          this->fields.spriteName = v15;
          sub_B77560(&this->fields.spriteName);
          this->fields._SpriteName_k__BackingField = v15;
          sub_B77560(&this->fields._SpriteName_k__BackingField);
          this->fields._IsSprite_k__BackingField = 1;
        }
        v16 = v13[8];
        if ( !System_String__IsNullOrEmpty(v16, 0LL) )
        {
          this->fields.overwriteSpriteName = System_String__Concat_44901936(
                                               (System_String_o *)StringLiteral_22975/*"synthesis_notice_"*/,
                                               v16,
                                               0LL);
          sub_B77560(&this->fields.overwriteSpriteName);
        }
        IsNullOrEmpty = System_String__IsNullOrEmpty(v13[9], 0LL);
        if ( !IsNullOrEmpty )
        {
          this->fields.overwriteText = v13[9];
          sub_B77560(&this->fields.overwriteText);
        }
        LODWORD(v11) = script->max_length;
        if ( (int)++v12 >= (int)v11 )
          goto LABEL_20;
      }
LABEL_21:
      sub_B7769C(IsNullOrEmpty, v6);
    }
  }
  else
  {
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B77560(&this->fields._SpriteName_k__BackingField);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v6);
}


void __fastcall EventNoticeControl_EventInfo__CheckCombineCampaignData(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  EventNoticeControl_EventInfo_o *v2; // x19
  struct EventInfoData_o *infoData; // x8
  struct EventEntity_o *eventEntity; // x8
  EventCampaignReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct EventInfoData_o *v6; // x8
  EventNoticeControl_EventInfo_o *v7; // x20
  struct EventInfoData_o *v8; // x8
  char v9; // w8
  char v10; // w8
  struct System_String_o *eventName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4387FE3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    this = (EventNoticeControl_EventInfo_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4387FE3 = 1;
  }
  entity = 0LL;
  infoData = v2->fields.infoData;
  if ( !infoData )
    goto LABEL_36;
  eventEntity = infoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_36;
  if ( eventEntity->fields.type != 5 )
    return;
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)this,
                                                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v6 = v2->fields.infoData;
  if ( !v6 || !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)EventCampaignMaster__getData(
                                             (EventCampaignMaster_o *)this,
                                             v6->fields.eventId,
                                             0LL);
  if ( this )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_36;
    v7 = this;
    if ( EventCampaignReleaseMaster__TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           (int32_t)this->fields._EventName_k__BackingField,
           HIDWORD(this->fields._EventName_k__BackingField),
           (int32_t)this->fields._SpriteName_k__BackingField,
           0LL) )
    {
      this = (EventNoticeControl_EventInfo_o *)EventCampaignReleaseMaster__isRelease(
                                                 MasterData_WarQuestSelectionMaster,
                                                 (int32_t)v7->fields._EventName_k__BackingField,
                                                 HIDWORD(v7->fields._EventName_k__BackingField),
                                                 0LL);
      v2->fields._IsCampaignOpen_k__BackingField = (unsigned __int8)this & 1;
      if ( !entity )
        goto LABEL_36;
      if ( entity->fields.condType == 1 )
      {
        v2->fields._IsCondTypeQuestClear_k__BackingField = 1;
        v2->fields._IsSprite_k__BackingField = 0;
      }
      if ( ((unsigned __int8)this & 1) == 0 && !System_String__IsNullOrEmpty(v7->fields.spriteName, 0LL) )
      {
        v2->fields._EventName_k__BackingField = v7->fields.spriteName;
        sub_B77560(&v2->fields);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0LL)
    && System_String__IsNullOrEmpty(v2->fields.overwriteText, 0LL) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v8 = v2->fields.infoData) == 0LL)
    || !this )
  {
LABEL_36:
    sub_B7769C(this, method);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v8->fields.targetIds, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v2->fields.spriteName, 0LL) )
    {
      v9 = 0;
    }
    else
    {
      v2->fields._SpriteName_k__BackingField = v2->fields.spriteName;
      sub_B77560(&v2->fields._SpriteName_k__BackingField);
      v9 = 1;
    }
    eventName = v2->fields.eventName;
    v2->fields._IsSprite_k__BackingField = v9;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0LL) )
  {
    v10 = 0;
  }
  else
  {
    v2->fields._SpriteName_k__BackingField = v2->fields.overwriteSpriteName;
    sub_B77560(&v2->fields._SpriteName_k__BackingField);
    v10 = 1;
  }
  overwriteText = v2->fields.overwriteText;
  v2->fields._IsSprite_k__BackingField = v10;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0LL) )
  {
    eventName = v2->fields.overwriteText;
LABEL_34:
    v2->fields._EventName_k__BackingField = eventName;
    sub_B77560(&v2->fields);
  }
}


void __fastcall EventNoticeControl_EventInfo__SetIsTimeOver(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = 1;
}


int64_t __fastcall EventNoticeControl_EventInfo__get_EndAt(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EndAt_k__BackingField;
}


System_String_o *__fastcall EventNoticeControl_EventInfo__get_EventName(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventName_k__BackingField;
}


bool __fastcall EventNoticeControl_EventInfo__get_IsCampaignOpen(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCampaignOpen_k__BackingField;
}


bool __fastcall EventNoticeControl_EventInfo__get_IsCondTypeQuestClear(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCondTypeQuestClear_k__BackingField;
}


bool __fastcall EventNoticeControl_EventInfo__get_IsSprite(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsSprite_k__BackingField;
}


bool __fastcall EventNoticeControl_EventInfo__get_IsTimeOver(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTimeOver_k__BackingField;
}


System_String_o *__fastcall EventNoticeControl_EventInfo__get_SpriteName(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


int64_t __fastcall EventNoticeControl_EventInfo__get_StartAt(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._StartAt_k__BackingField;
}


void __fastcall EventNoticeControl_EventInfo__set_EndAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._EndAt_k__BackingField = value;
}


void __fastcall EventNoticeControl_EventInfo__set_EventName(
        EventNoticeControl_EventInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._EventName_k__BackingField = value;
  sub_B77560(&this->fields);
}


void __fastcall EventNoticeControl_EventInfo__set_IsCampaignOpen(
        EventNoticeControl_EventInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCampaignOpen_k__BackingField = value;
}


void __fastcall EventNoticeControl_EventInfo__set_IsCondTypeQuestClear(
        EventNoticeControl_EventInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCondTypeQuestClear_k__BackingField = value;
}


void __fastcall EventNoticeControl_EventInfo__set_IsSprite(
        EventNoticeControl_EventInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSprite_k__BackingField = value;
}


void __fastcall EventNoticeControl_EventInfo__set_IsTimeOver(
        EventNoticeControl_EventInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = value;
}


void __fastcall EventNoticeControl_EventInfo__set_SpriteName(
        EventNoticeControl_EventInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._SpriteName_k__BackingField = value;
  sub_B77560(&this->fields._SpriteName_k__BackingField);
}


void __fastcall EventNoticeControl_EventInfo__set_StartAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._StartAt_k__BackingField = value;
}