void EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C3B8F2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
    byte_4C3B8F2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventInfoList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsMultiple; // x0
  const MethodInfo *v4; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t v6; // w1

  if ( (byte_4C3B8EE & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4C3B8EE = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_1C32E7C(IsMultiple);
    v6 = (this->fields.eventInfoIndex + 1) % eventInfoList->fields._size;
    this->fields.eventInfoIndex = v6;
    EventNoticeControl__SetLabelAndSprite(this, v6, v4);
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

  if ( (byte_4C3B8F1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4C3B8F1 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventInfoList,
    (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C32E7C(0);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v9.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v6 = this->fields.eventInfoList;
  if ( !v6 )
LABEL_16:
    sub_1C32E7C(eventInfoList);
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
  bool result; // w0
  int32_t size; // w22
  int32_t v10; // w21
  EventNoticeControl_o *v11; // x8

  if ( (byte_4C3B8EC & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    this = (EventNoticeControl_o *)sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    byte_4C3B8EC = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_15:
    sub_1C32E7C(this);
  size = eventInfolist->fields._size;
  if ( size < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    this = (EventNoticeControl_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)eventInfolist,
                                     v10,
                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    if ( !this )
      goto LABEL_15;
    v11 = this;
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
  result = 1;
  BYTE1(v11->fields.eventRemainLabel) = 1;
  return result;
}


void EventNoticeControl__InitLabelAndSprite(EventNoticeControl_o *this, const MethodInfo *method)
{
  UILabel_o *eventDetailLabel; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3B8EB & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B8EB = 1;
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
    sub_1C32E7C(eventDetailLabel);
  }
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4C3B8E8 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
    byte_4C3B8E8 = 1;
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
      sub_1C32E7C(eventDetailLabel);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4C3B8E9 & 1) == 0 )
  {
    sub_1C32C20(&EventNoticeControl_EventInfo_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
    byte_4C3B8E9 = 1;
  }
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  v6 = (EventNoticeControl_EventInfo_o *)sub_1C32E6C(EventNoticeControl_EventInfo_TypeInfo);
  EventNoticeControl_EventInfo___ctor(v6, data, v7);
  if ( !eventInfoList
    || (items = eventInfoList->fields._items,
        v12 = Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__,
        ++eventInfoList->fields._version,
        !items) )
  {
    sub_1C32E7C(v8);
  }
  size = eventInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    eventInfoList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v6;
    sub_1C32BC4((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v6, v9, v10);
  }
  this->fields.isNeedToUpdate = 1;
}


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

  if ( (byte_4C3B8EF & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    sub_1C32C20(&StringLiteral_13417/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/);
    byte_4C3B8EF = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventInfoList,
                    index,
                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
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
    eventInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_13417/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, 0);
    eventDetailLabel = this->fields.eventDetailLabel;
    if ( eventDetailLabel )
    {
      v11 = System_String__Format_63559836(
              (System_String_o *)eventInfoList,
              (Il2CppObject *)eventDetailLabel->fields.mText,
              (Il2CppObject *)StringLiteral_25096/*"{0}"*/,
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
    sub_1C32E7C(eventInfoList);
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
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  unsigned __int64 v24; // x21
  System_String_o *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  int v33; // [xsp+Ch] [xbp-44h] BYREF
  int v34; // [xsp+18h] [xbp-38h] BYREF
  int v35; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = remainTime;
  if ( (byte_4C3B8ED & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&StringLiteral_5597/*"EVENT_DAY_TXT"*/);
    sub_1C32C20(&StringLiteral_5731/*"EVENT_TIMEOVER_TXT"*/);
    sub_1C32C20(&StringLiteral_5732/*"EVENT_TIME_TXT"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    remainTime = sub_1C32C20(&StringLiteral_5634/*"EVENT_MIN_TXT"*/);
    byte_4C3B8ED = 1;
  }
  if ( !label )
    sub_1C32E7C(remainTime);
  v36.fields.r = 0.0;
  v36.fields.g = 0.0;
  v36.fields.b = 0.0;
  v36.fields.a = 1.0;
  UILabel__set_effectColor(label, v36, 0);
  if ( (__int64)v4 < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5731/*"EVENT_TIMEOVER_TXT"*/, 0);
    goto LABEL_15;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5597/*"EVENT_DAY_TXT"*/, 0);
  v35 = v4 / 0x15180;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v6, v7, v8, v9, v10, v11);
  v13 = System_String__Format(v5, v12, 0);
  if ( (int)(v4 / 0x15180) <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5732/*"EVENT_TIME_TXT"*/, 0);
    v34 = v4 / 0xE10;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v15, v16, v17, v18, v19, v20);
    v13 = System_String__Format(v14, v21, 0);
    if ( (int)(v4 / 0xE10) <= 0 )
    {
      v24 = v4 / 0x3C;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5634/*"EVENT_MIN_TXT"*/, 0);
      v33 = v24;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v26, v27, v28, v29, v30, v31);
      v23 = System_String__Format(v25, v32, 0);
LABEL_15:
      v22 = v23;
      v37.fields.r = 1.0;
      v37.fields.g = 1.0;
      v37.fields.b = 1.0;
      v37.fields.a = 1.0;
      UILabel__set_effectColor(label, v37, 0);
      goto LABEL_16;
    }
  }
  v22 = v13;
LABEL_16:
  UILabel__set_text(label, v22, 0);
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

  if ( (byte_4C3B8EA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3B8EA = 1;
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
      sub_1C32E7C(IsNeedToInfoUpdate);
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
  if ( (byte_4C3B8F0 & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_1C32C20(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4C3B8F0 = 1;
  }
  eventInfoList = v2->fields.eventInfoList;
  if ( !eventInfoList )
    sub_1C32E7C(this);
  return eventInfoList->fields._size > 1;
}


void EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 IsNullOrEmpty; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_o *name; // x25
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int8x16_t v22; // q0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  il2cpp_array_size_t max_length; // x8
  __int64 v37; // x26
  System_String_o **v38; // x29
  System_String_o *v39; // x24
  struct System_String_o *v40; // x24
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_String_o *v45; // x24
  struct System_String_o *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_String_o *v51; // x1
  int32_t v52; // w1

  if ( (byte_4C3B8F3 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_23899/*"synthesis_notice_"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B8F3 = 1;
  }
  v6 = StringLiteral_1/*""*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.spriteName, v6, (int32_t)method, v3);
  v7 = StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventName, v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.overwriteSpriteName, v10, v11, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.overwriteText, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.eventName, (int32_t)name, v17, v18);
  this->fields._EventName_k__BackingField = name;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)name, v20, v21);
  v22 = *(int8x16_t *)&eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  *(int8x16_t *)&this->fields._EndAt_k__BackingField = vextq_s8(v22, v22, 8u);
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.infoData, (int32_t)eventInfoData, v23, v24);
  v25 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.overwriteSpriteName, v25, v26, v27);
  v28 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.overwriteText, v28, v29, v30);
  eventEntity = eventInfoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_21;
  script = eventEntity->fields.script;
  if ( script && (max_length = script->max_length) != 0 )
  {
    if ( (int)max_length >= 1 )
    {
      v37 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v37 >= (unsigned int)max_length )
          sub_1C32E84(IsNullOrEmpty);
        v38 = (System_String_o **)script->m_Items[v37];
        if ( !v38 )
          break;
        v39 = v38[7];
        if ( !System_String__IsNullOrEmpty(v39, 0) )
        {
          v40 = System_String__Concat_63518544((System_String_o *)StringLiteral_23899/*"synthesis_notice_"*/, v39, 0);
          this->fields.spriteName = v40;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.spriteName, (int32_t)v40, v41, v42);
          this->fields._SpriteName_k__BackingField = v40;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._SpriteName_k__BackingField, (int32_t)v40, v43, v44);
          this->fields._IsSprite_k__BackingField = 1;
        }
        v45 = v38[8];
        if ( !System_String__IsNullOrEmpty(v45, 0) )
        {
          v46 = System_String__Concat_63518544((System_String_o *)StringLiteral_23899/*"synthesis_notice_"*/, v45, 0);
          this->fields.overwriteSpriteName = v46;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.overwriteSpriteName, (int32_t)v46, v47, v48);
        }
        IsNullOrEmpty = System_String__IsNullOrEmpty(v38[9], 0);
        if ( !IsNullOrEmpty )
        {
          v51 = v38[9];
          this->fields.overwriteText = v51;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.overwriteText, (int32_t)v51, v49, v50);
        }
        LODWORD(max_length) = script->max_length;
        if ( (int)++v37 >= (int)max_length )
          goto LABEL_20;
      }
LABEL_21:
      sub_1C32E7C(IsNullOrEmpty);
    }
  }
  else
  {
    v52 = StringLiteral_1/*""*/;
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._SpriteName_k__BackingField, v52, v32, v33);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v31);
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
  const MethodInfo *v9; // x3
  struct System_String_o *spriteName; // x1
  struct EventInfoData_o *v11; // x8
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  char v14; // w8
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  char v17; // w8
  struct System_String_o *v18; // x1
  struct System_String_o *eventName; // x1
  EventNoticeControl_EventInfo_Fields *p_fields; // x19
  struct System_String_o *overwriteSpriteName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4C3B8F4 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    this = (EventNoticeControl_EventInfo_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3B8F4 = 1;
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
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
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
        sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields, (int32_t)spriteName, v8, v9);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0)
    && System_String__IsNullOrEmpty(v2->fields.overwriteText, 0) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v11 = v2->fields.infoData) == 0)
    || !this )
  {
LABEL_36:
    sub_1C32E7C(this);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v11->fields.targetIds, 0) )
  {
    if ( System_String__IsNullOrEmpty(v2->fields.spriteName, 0) )
    {
      v14 = 0;
    }
    else
    {
      v18 = v2->fields.spriteName;
      v2->fields._SpriteName_k__BackingField = v18;
      sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields._SpriteName_k__BackingField, (int32_t)v18, v12, v13);
      v14 = 1;
    }
    eventName = v2->fields.eventName;
    v2->fields._EventName_k__BackingField = eventName;
    p_fields = &v2->fields;
    p_fields->_IsSprite_k__BackingField = v14;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0) )
  {
    v17 = 0;
  }
  else
  {
    overwriteSpriteName = v2->fields.overwriteSpriteName;
    v2->fields._SpriteName_k__BackingField = overwriteSpriteName;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&v2->fields._SpriteName_k__BackingField,
      (int32_t)overwriteSpriteName,
      v15,
      v16);
    v17 = 1;
  }
  overwriteText = v2->fields.overwriteText;
  v2->fields._IsSprite_k__BackingField = v17;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0) )
  {
    eventName = v2->fields.overwriteText;
    v2->fields._EventName_k__BackingField = eventName;
    p_fields = &v2->fields;
LABEL_34:
    sub_1C32BC4((CGThumbnailListItem_o *)p_fields, (int32_t)eventName, v12, v13);
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
  const MethodInfo *v3; // x3

  this->fields._EventName_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._SpriteName_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._SpriteName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void EventNoticeControl_EventInfo__set_StartAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._StartAt_k__BackingField = value;
}