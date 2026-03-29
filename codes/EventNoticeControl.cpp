void EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D34A77 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
    byte_4D34A77 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventInfoList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsMultiple; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t v7; // w1

  if ( (byte_4D34A73 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4D34A73 = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_1C93D2C(IsMultiple, v4);
    v7 = (this->fields.eventInfoIndex + 1) % eventInfoList->fields._size;
    this->fields.eventInfoIndex = v7;
    EventNoticeControl__SetLabelAndSprite(this, v7, v5);
  }
}


void EventNoticeControl__CheckCombineCampaignData(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventInfoList; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v6; // x8
  int size; // w8
  int32_t eventInfoIndex; // w1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D34A76 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4D34A76 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventInfoList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C93D2C(0, v4);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v9.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v6 = this->fields.eventInfoList;
  if ( !v6 )
LABEL_16:
    sub_1C93D2C(eventInfoList, method);
  size = v6->fields._size;
  if ( size == 1 )
  {
    eventInfoIndex = 0;
  }
  else
  {
    if ( size < 2 )
      return;
    eventInfoIndex = this->fields.eventInfoIndex;
  }
  EventNoticeControl__SetLabelAndSprite(this, eventInfoIndex, v5);
}


bool EventNoticeControl__GetIsNeedToInfoUpdate(
        EventNoticeControl_o *this,
        System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfolist,
        int64_t now,
        bool isNeedToUpdate,
        const MethodInfo *method)
{
  int32_t size; // w22
  int32_t v10; // w21

  if ( (byte_4D34A71 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    this = (EventNoticeControl_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    byte_4D34A71 = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_15:
    sub_1C93D2C(this, eventInfolist);
  size = eventInfolist->fields._size;
  if ( size < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    this = (EventNoticeControl_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)eventInfolist,
                                     v10,
                                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    if ( !this )
      goto LABEL_15;
    if ( !BYTE1(this->fields.eventRemainLabel) )
      break;
LABEL_12:
    if ( size == ++v10 )
      return 0;
  }
  if ( (__int64)this->fields.eventDetailLabel >= now )
  {
    if ( (__int64)this->fields.eventDetailSprite <= now )
      return 1;
    goto LABEL_12;
  }
  BYTE1(this->fields.eventRemainLabel) = 1;
  return 1;
}


void EventNoticeControl__InitLabelAndSprite(EventNoticeControl_o *this, const MethodInfo *method)
{
  UILabel_o *eventDetailLabel; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D34A70 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34A70 = 1;
  }
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_8;
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_8;
  v4.fields.r = 1.0;
  v4.fields.g = 1.0;
  v4.fields.b = 1.0;
  v4.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventDetailLabel, v4, 0);
  eventDetailLabel = (UILabel_o *)this->fields.eventDetailSprite;
  if ( !eventDetailLabel
    || (UISprite__set_spriteName((UISprite_o *)eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (eventDetailLabel = this->fields.eventRemainLabel) == 0) )
  {
LABEL_8:
    sub_1C93D2C(eventDetailLabel, method);
  }
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4D34A6D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
    byte_4D34A6D = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( eventInfoList )
  {
    size = eventInfoList->fields._size;
    v5 = eventInfoList->fields._version + 1;
    eventInfoList->fields._size = 0;
    eventInfoList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)eventInfoList->fields._items, 0, size, 0);
    EventNoticeControl__InitLabelAndSprite(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void EventNoticeControl__SetAlpha(EventNoticeControl_o *this, float alpha, const MethodInfo *method)
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
          (eventDetailLabel = this->fields.eventDetailSprite) == 0)
      || ((*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)eventDetailLabel + 440LL))(
            eventDetailLabel,
            *(_QWORD *)(*(_QWORD *)eventDetailLabel + 448LL),
            v3),
          (eventDetailLabel = this->fields.eventRemainLabel) == 0) )
    {
      sub_1C93D2C(eventDetailLabel, v5);
    }
    (*(void (__fastcall **)(void *, _QWORD, long double))(*(_QWORD *)eventDetailLabel + 440LL))(
      eventDetailLabel,
      *(_QWORD *)(*(_QWORD *)eventDetailLabel + 448LL),
      v3);
  }
}


void EventNoticeControl__SetCombineEventData(
        EventNoticeControl_o *this,
        EventInfoData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventInfoList; // x20
  EventNoticeControl_EventInfo_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_4D34A6E & 1) == 0 )
  {
    sub_1C93AD4(&EventNoticeControl_EventInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
    byte_4D34A6E = 1;
  }
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  v6 = (EventNoticeControl_EventInfo_o *)sub_1C93D20(EventNoticeControl_EventInfo_TypeInfo);
  EventNoticeControl_EventInfo___ctor(v6, data, v7);
  if ( !eventInfoList
    || (items = eventInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__,
        ++eventInfoList->fields._version,
        !items) )
  {
    sub_1C93D2C(v8, v9);
  }
  size = eventInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    eventInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
  }
  this->fields.isNeedToUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void EventNoticeControl__SetLabelAndSprite(EventNoticeControl_o *this, int32_t index, const MethodInfo *method)
{
  void *eventInfoList; // x0
  void *v6; // x20
  UISprite_o *eventDetailSprite; // x21
  System_String_o *v8; // x22
  bool v9; // w21
  struct UILabel_o *eventDetailLabel; // x8
  System_String_o *v11; // x0
  UILabel_o *v12; // x21
  System_String_o *v13; // x22
  Il2CppObject *RestTime2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x20
  int64_t Time; // x0
  const MethodInfo *v18; // x2
  struct UISprite_o *v19; // x8
  int32_t v20; // w1
  float v21; // s0
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D34A74 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    sub_1C93AD4(&StringLiteral_13516/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/);
    byte_4D34A74 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventInfoList,
                    index,
                    (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
  if ( !eventInfoList )
    goto LABEL_46;
  v6 = eventInfoList;
  if ( *((_BYTE *)eventInfoList + 48) )
  {
    eventDetailSprite = this->fields.eventDetailSprite;
    v8 = (System_String_o *)*((_QWORD *)eventInfoList + 3);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v9 = AtlasManager__SetEventUI(eventDetailSprite, v8, 0);
  }
  else
  {
    v9 = 0;
  }
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, v9, 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, !v9, 0);
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_46;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)eventInfoList + 840LL))(
    eventInfoList,
    *(_QWORD *)(*(_QWORD *)eventInfoList + 848LL));
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)eventInfoList, *((System_String_o **)v6 + 2), 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  v22.fields.r = 1.0;
  v22.fields.g = 1.0;
  v22.fields.b = 1.0;
  v22.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventInfoList, v22, 0);
  if ( *((_BYTE *)v6 + 50) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    eventInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_13516/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, 0);
    eventDetailLabel = this->fields.eventDetailLabel;
    if ( eventDetailLabel )
    {
      v11 = System_String__Format_64467032(
              (System_String_o *)eventInfoList,
              (Il2CppObject *)eventDetailLabel->fields.mText,
              (Il2CppObject *)StringLiteral_25426/*"{0}"*/,
              0);
      v12 = this->fields.eventDetailLabel;
      v13 = v11;
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(*((_QWORD *)v6 + 4), -1, 0);
      eventInfoList = System_String__Format(v13, RestTime2, 0);
      if ( v12 )
      {
        UILabel__set_text(v12, (System_String_o *)eventInfoList, 0);
        eventInfoList = this->fields.eventRemainLabel;
        if ( eventInfoList )
        {
          eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
          if ( eventInfoList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, 0, 0);
            eventInfoList = this->fields.eventDetailLabel;
            if ( eventInfoList )
            {
              UILabel__set_applyGradient((UILabel_o *)eventInfoList, *((_BYTE *)v6 + 51), 0);
              eventInfoList = this->fields.eventDetailLabel;
              if ( eventInfoList )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
                GameObjectExtensions__SetLocalPositionX(gameObject, -290.0, 0);
                eventInfoList = this->fields.eventDetailLabel;
                if ( eventInfoList )
                {
                  UILabel__set_fontSize((UILabel_o *)eventInfoList, 18, 0);
                  eventInfoList = this->fields.eventDetailLabel;
                  if ( eventInfoList )
                  {
                    UILabel__SetCondensedScale((UILabel_o *)eventInfoList, 430, 0, 0);
                    if ( *((_BYTE *)v6 + 51) )
                      return;
                    eventInfoList = this->fields.eventDetailLabel;
                    if ( eventInfoList )
                    {
                      v23.fields.r = 0.0;
                      v23.fields.g = 1.0;
                      v23.fields.b = 1.0;
                      v23.fields.a = 1.0;
                      UIWidget__set_color((UIWidget_o *)eventInfoList, v23, 0);
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
LABEL_46:
    sub_1C93D2C(eventInfoList, *(_QWORD *)&index);
  }
  eventInfoList = this->fields.eventRemainLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, 1, 0);
  v16 = *((_QWORD *)v6 + 4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  EventNoticeControl__SetRemainTime(v16 - Time, this->fields.eventRemainLabel, v18);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__set_applyGradient((UILabel_o *)eventInfoList, 1, 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__set_fontSize((UILabel_o *)eventInfoList, 20, 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__SetCondensedScale((UILabel_o *)eventInfoList, 300, 0, 0);
  v19 = this->fields.eventDetailSprite;
  if ( !v19 )
    goto LABEL_46;
  eventInfoList = this->fields.eventRemainLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  v20 = *((_DWORD *)eventInfoList + 42);
  if ( v19->fields.mWidth >= 320 )
  {
    v21 = (float)v20 * 0.8;
    if ( v21 == INFINITY )
      v20 = 0x80000000;
    else
      v20 = (int)v21;
  }
  UILabel__SetCondensedScale((UILabel_o *)eventInfoList, v20, 0, 0);
}


void EventNoticeControl__SetRemainTime(int64_t remainTime, UILabel_o *label, const MethodInfo *method)
{
  unsigned __int64 v4; // x20
  System_String_o *v5; // x21
  Il2CppObject *v6; // x0
  System_String_o *v7; // x0
  System_String_o *v8; // x21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x21
  System_String_o *v11; // x0
  unsigned __int64 v12; // x21
  System_String_o *v13; // x20
  Il2CppObject *v14; // x0
  int v15; // [xsp+Ch] [xbp-44h] BYREF
  int v16; // [xsp+18h] [xbp-38h] BYREF
  int v17; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = remainTime;
  if ( (byte_4D34A72 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_5622/*"EVENT_DAY_TXT"*/);
    sub_1C93AD4(&StringLiteral_5758/*"EVENT_TIMEOVER_TXT"*/);
    sub_1C93AD4(&StringLiteral_5759/*"EVENT_TIME_TXT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    remainTime = sub_1C93AD4(&StringLiteral_5661/*"EVENT_MIN_TXT"*/);
    byte_4D34A72 = 1;
  }
  if ( !label )
    sub_1C93D2C(remainTime, label);
  v18.fields.r = 0.0;
  v18.fields.g = 0.0;
  v18.fields.b = 0.0;
  v18.fields.a = 1.0;
  UILabel__set_effectColor(label, v18, 0);
  if ( (__int64)v4 < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5758/*"EVENT_TIMEOVER_TXT"*/, 0);
    goto LABEL_15;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5622/*"EVENT_DAY_TXT"*/, 0);
  v17 = v4 / 0x15180;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  v7 = System_String__Format(v5, v6, 0);
  if ( (int)(v4 / 0x15180) <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5759/*"EVENT_TIME_TXT"*/, 0);
    v16 = v4 / 0xE10;
    v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v7 = System_String__Format(v8, v9, 0);
    if ( (int)(v4 / 0xE10) <= 0 )
    {
      v12 = v4 / 0x3C;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5661/*"EVENT_MIN_TXT"*/, 0);
      v15 = v12;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
      v11 = System_String__Format(v13, v14, 0);
LABEL_15:
      v10 = v11;
      v19.fields.r = 1.0;
      v19.fields.g = 1.0;
      v19.fields.b = 1.0;
      v19.fields.a = 1.0;
      UILabel__set_effectColor(label, v19, 0);
      goto LABEL_16;
    }
  }
  v10 = v7;
LABEL_16:
  UILabel__set_text(label, v10, 0);
}


void EventNoticeControl__UpdateEventNotice(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x20
  EventNoticeControl_o *Time; // x0
  const MethodInfo *v5; // x4
  _BOOL8 IsNeedToInfoUpdate; // x0
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v8; // x8
  const MethodInfo *v9; // x2

  if ( (byte_4D34A6F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D34A6F = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = (EventNoticeControl_o *)NetworkManager__getTime(0);
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
      sub_1C93D2C(IsNeedToInfoUpdate, v7);
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


bool EventNoticeControl__get_IsMultiple(EventNoticeControl_o *this, const MethodInfo *method)
{
  EventNoticeControl_o *v2; // x19
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8

  v2 = this;
  if ( (byte_4D34A75 & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4D34A75 = 1;
  }
  eventInfoList = v2->fields.eventInfoList;
  if ( !eventInfoList )
    sub_1C93D2C(this, method);
  return eventInfoList->fields._size > 1;
}


void EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_String_o *name; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int8x16_t v47; // q0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w1
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w1
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  il2cpp_array_size_t max_length; // x8
  __int64 v77; // x26
  System_String_o **v78; // x29
  System_String_o *v79; // x24
  struct System_String_o *v80; // x24
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  System_String_o *v93; // x24
  struct System_String_o *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  struct System_String_o *v107; // x1
  int32_t v108; // w1

  if ( (byte_4D34A78 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24203/*"synthesis_notice_"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D34A78 = 1;
  }
  v10 = StringLiteral_1/*""*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.spriteName, v10, (int32_t)method, v3, v4, v5, v6, v7);
  v11 = StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventName, v11, v12, v13, v14, v15, v16, v17);
  v18 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.overwriteSpriteName, v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.overwriteText, v25, v26, v27, v28, v29, v30, v31);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventName, (int32_t)name, v34, v35, v36, v37, v38, v39);
  this->fields._EventName_k__BackingField = name;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)name, v41, v42, v43, v44, v45, v46);
  v47 = *(int8x16_t *)&eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  *(int8x16_t *)&this->fields._EndAt_k__BackingField = vextq_s8(v47, v47, 8u);
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.infoData,
    (int32_t)eventInfoData,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.overwriteSpriteName, v54, v55, v56, v57, v58, v59, v60);
  v61 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.overwriteText, v61, v62, v63, v64, v65, v66, v67);
  eventEntity = eventInfoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_21;
  script = eventEntity->fields.script;
  if ( script && (max_length = script->max_length) != 0 )
  {
    if ( (int)max_length >= 1 )
    {
      v77 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v77 >= (unsigned int)max_length )
          sub_1C93D34(IsNullOrEmpty);
        v78 = (System_String_o **)script->m_Items[v77];
        if ( !v78 )
          break;
        v79 = v78[7];
        if ( !System_String__IsNullOrEmpty(v79, 0) )
        {
          v80 = System_String__Concat_64425724((System_String_o *)StringLiteral_24203/*"synthesis_notice_"*/, v79, 0);
          this->fields.spriteName = v80;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.spriteName,
            (int32_t)v80,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86);
          this->fields._SpriteName_k__BackingField = v80;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields._SpriteName_k__BackingField,
            (int32_t)v80,
            v87,
            v88,
            v89,
            v90,
            v91,
            v92);
          this->fields._IsSprite_k__BackingField = 1;
        }
        v93 = v78[8];
        if ( !System_String__IsNullOrEmpty(v93, 0) )
        {
          v94 = System_String__Concat_64425724((System_String_o *)StringLiteral_24203/*"synthesis_notice_"*/, v93, 0);
          this->fields.overwriteSpriteName = v94;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.overwriteSpriteName,
            (int32_t)v94,
            v95,
            v96,
            v97,
            v98,
            v99,
            v100);
        }
        IsNullOrEmpty = System_String__IsNullOrEmpty(v78[9], 0);
        if ( !IsNullOrEmpty )
        {
          v107 = v78[9];
          this->fields.overwriteText = v107;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&this->fields.overwriteText,
            (int32_t)v107,
            v101,
            v102,
            v103,
            v104,
            v105,
            v106);
        }
        LODWORD(max_length) = script->max_length;
        if ( (int)++v77 >= (int)max_length )
          goto LABEL_20;
      }
LABEL_21:
      sub_1C93D2C(IsNullOrEmpty, v33);
    }
  }
  else
  {
    v108 = StringLiteral_1/*""*/;
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields._SpriteName_k__BackingField,
      v108,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v33);
}


void EventNoticeControl_EventInfo__CheckCombineCampaignData(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  EventNoticeControl_EventInfo_o *v2; // x19
  struct EventInfoData_o *infoData; // x8
  struct EventEntity_o *eventEntity; // x8
  Il2CppObject *MasterData_object; // x21
  struct EventInfoData_o *v6; // x8
  EventNoticeControl_EventInfo_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_String_o *spriteName; // x1
  struct EventInfoData_o *v15; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  char v22; // w8
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  char v29; // w8
  struct System_String_o *v30; // x1
  struct System_String_o *eventName; // x1
  EventNoticeControl_EventInfo_Fields *p_fields; // x19
  struct System_String_o *overwriteSpriteName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4D34A79 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    this = (EventNoticeControl_EventInfo_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D34A79 = 1;
  }
  entity = 0;
  infoData = v2->fields.infoData;
  if ( !infoData )
    goto LABEL_36;
  eventEntity = infoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_36;
  if ( eventEntity->fields.type != 5 )
    return;
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v6 = v2->fields.infoData;
  if ( !v6 || !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)EventCampaignMaster__getData(
                                             (EventCampaignMaster_o *)this,
                                             v6->fields.eventId,
                                             0);
  if ( this )
  {
    if ( !MasterData_object )
      goto LABEL_36;
    v7 = this;
    if ( EventCampaignReleaseMaster__TryGetEntity(
           (EventCampaignReleaseMaster_o *)MasterData_object,
           &entity,
           (int32_t)this->fields._EventName_k__BackingField,
           HIDWORD(this->fields._EventName_k__BackingField),
           (int32_t)this->fields._SpriteName_k__BackingField,
           0) )
    {
      this = (EventNoticeControl_EventInfo_o *)EventCampaignReleaseMaster__isRelease(
                                                 (EventCampaignReleaseMaster_o *)MasterData_object,
                                                 (int32_t)v7->fields._EventName_k__BackingField,
                                                 HIDWORD(v7->fields._EventName_k__BackingField),
                                                 0);
      v2->fields._IsCampaignOpen_k__BackingField = (unsigned __int8)this & 1;
      if ( !entity )
        goto LABEL_36;
      if ( entity->fields.condType == 1 )
      {
        v2->fields._IsCondTypeQuestClear_k__BackingField = 1;
        v2->fields._IsSprite_k__BackingField = 0;
      }
      if ( ((unsigned __int8)this & 1) == 0 && !System_String__IsNullOrEmpty(v7->fields.spriteName, 0) )
      {
        spriteName = v7->fields.spriteName;
        v2->fields._EventName_k__BackingField = spriteName;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields, (int32_t)spriteName, v8, v9, v10, v11, v12, v13);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0)
    && System_String__IsNullOrEmpty(v2->fields.overwriteText, 0) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v15 = v2->fields.infoData) == 0)
    || !this )
  {
LABEL_36:
    sub_1C93D2C(this, method);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v15->fields.targetIds, 0) )
  {
    if ( System_String__IsNullOrEmpty(v2->fields.spriteName, 0) )
    {
      v22 = 0;
    }
    else
    {
      v30 = v2->fields.spriteName;
      v2->fields._SpriteName_k__BackingField = v30;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v2->fields._SpriteName_k__BackingField,
        (int32_t)v30,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v22 = 1;
    }
    eventName = v2->fields.eventName;
    v2->fields._EventName_k__BackingField = eventName;
    p_fields = &v2->fields;
    p_fields->_IsSprite_k__BackingField = v22;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0) )
  {
    v29 = 0;
  }
  else
  {
    overwriteSpriteName = v2->fields.overwriteSpriteName;
    v2->fields._SpriteName_k__BackingField = overwriteSpriteName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v2->fields._SpriteName_k__BackingField,
      (int32_t)overwriteSpriteName,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = 1;
  }
  overwriteText = v2->fields.overwriteText;
  v2->fields._IsSprite_k__BackingField = v29;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0) )
  {
    eventName = v2->fields.overwriteText;
    v2->fields._EventName_k__BackingField = eventName;
    p_fields = &v2->fields;
LABEL_34:
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_fields, (int32_t)eventName, v16, v17, v18, v19, v20, v21);
  }
}


void EventNoticeControl_EventInfo__SetIsTimeOver(EventNoticeControl_EventInfo_o *this, const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = 1;
}


int64_t EventNoticeControl_EventInfo__get_EndAt(EventNoticeControl_EventInfo_o *this, const MethodInfo *method)
{
  return this->fields._EndAt_k__BackingField;
}


System_String_o *EventNoticeControl_EventInfo__get_EventName(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventName_k__BackingField;
}


bool EventNoticeControl_EventInfo__get_IsCampaignOpen(EventNoticeControl_EventInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsCampaignOpen_k__BackingField;
}


bool EventNoticeControl_EventInfo__get_IsCondTypeQuestClear(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsCondTypeQuestClear_k__BackingField;
}


bool EventNoticeControl_EventInfo__get_IsSprite(EventNoticeControl_EventInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsSprite_k__BackingField;
}


bool EventNoticeControl_EventInfo__get_IsTimeOver(EventNoticeControl_EventInfo_o *this, const MethodInfo *method)
{
  return this->fields._IsTimeOver_k__BackingField;
}


System_String_o *EventNoticeControl_EventInfo__get_SpriteName(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._SpriteName_k__BackingField;
}


int64_t EventNoticeControl_EventInfo__get_StartAt(EventNoticeControl_EventInfo_o *this, const MethodInfo *method)
{
  return this->fields._StartAt_k__BackingField;
}


void EventNoticeControl_EventInfo__set_EndAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._EndAt_k__BackingField = value;
}


void EventNoticeControl_EventInfo__set_EventName(
        EventNoticeControl_EventInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._EventName_k__BackingField = value;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3, v4, v5, v6, v7);
}


void EventNoticeControl_EventInfo__set_IsCampaignOpen(
        EventNoticeControl_EventInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCampaignOpen_k__BackingField = value;
}


void EventNoticeControl_EventInfo__set_IsCondTypeQuestClear(
        EventNoticeControl_EventInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsCondTypeQuestClear_k__BackingField = value;
}


void EventNoticeControl_EventInfo__set_IsSprite(
        EventNoticeControl_EventInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsSprite_k__BackingField = value;
}


void EventNoticeControl_EventInfo__set_IsTimeOver(
        EventNoticeControl_EventInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTimeOver_k__BackingField = value;
}


void EventNoticeControl_EventInfo__set_SpriteName(
        EventNoticeControl_EventInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._SpriteName_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventNoticeControl_EventInfo__set_StartAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._StartAt_k__BackingField = value;
}