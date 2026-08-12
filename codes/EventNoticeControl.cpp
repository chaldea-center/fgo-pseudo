void EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5974AEA & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
    byte_5974AEA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventInfoList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsMultiple; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t v7; // w1

  if ( (byte_5974AE6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_5974AE6 = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_2213CDC(IsMultiple, v4);
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
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5974AE9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_5974AE9 = 1;
  }
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  memset(&v9, 0, sizeof(v9));
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_2213CDC(0, v4);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v9.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v6 = this->fields.eventInfoList;
  if ( !v6 )
LABEL_16:
    sub_2213CDC(eventInfoList, method);
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

  if ( (byte_5974AE4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    this = (EventNoticeControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    byte_5974AE4 = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_15:
    sub_2213CDC(this, eventInfolist);
  size = eventInfolist->fields._size;
  if ( size < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    this = (EventNoticeControl_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)eventInfolist,
                                     v10,
                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
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

  if ( (byte_5974AE3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974AE3 = 1;
  }
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_11;
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_11;
  v4.fields.r = 1.0;
  v4.fields.g = 1.0;
  v4.fields.b = 1.0;
  v4.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventDetailLabel, v4, 0);
  eventDetailLabel = (UILabel_o *)this->fields.eventDetailSprite;
  if ( !eventDetailLabel )
    goto LABEL_11;
  UISprite__set_spriteName((UISprite_o *)eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  eventDetailLabel = this->fields.eventRemainLabel;
  if ( !eventDetailLabel
    || (UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (eventDetailLabel = this->fields.eventDetailLabel) == 0)
    || (((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))eventDetailLabel->klass->vtable._8_set_alpha.methodPtr)(
          eventDetailLabel,
          eventDetailLabel->klass->vtable._8_set_alpha.method,
          1.0),
        (eventDetailLabel = (UILabel_o *)this->fields.eventDetailSprite) == 0)
    || (((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))eventDetailLabel->klass->vtable._8_set_alpha.methodPtr)(
          eventDetailLabel,
          eventDetailLabel->klass->vtable._8_set_alpha.method,
          1.0),
        (eventDetailLabel = this->fields.eventRemainLabel) == 0) )
  {
LABEL_11:
    sub_2213CDC(eventDetailLabel, method);
  }
  ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float))eventDetailLabel->klass->vtable._8_set_alpha.methodPtr)(
    eventDetailLabel,
    eventDetailLabel->klass->vtable._8_set_alpha.method,
    1.0);
}


void EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_5974AE0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
    byte_5974AE0 = 1;
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


void EventNoticeControl__SetAlpha(EventNoticeControl_o *this, float alpha, const MethodInfo *method)
{
  __int64 v5; // x1
  void *eventDetailLabel; // x0

  if ( EventNoticeControl__get_IsMultiple(this, method) )
  {
    eventDetailLabel = this->fields.eventDetailLabel;
    if ( !eventDetailLabel
      || ((*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)eventDetailLabel + 440LL))(
            eventDetailLabel,
            *(_QWORD *)(*(_QWORD *)eventDetailLabel + 448LL),
            alpha),
          (eventDetailLabel = this->fields.eventDetailSprite) == 0)
      || ((*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)eventDetailLabel + 440LL))(
            eventDetailLabel,
            *(_QWORD *)(*(_QWORD *)eventDetailLabel + 448LL),
            alpha),
          (eventDetailLabel = this->fields.eventRemainLabel) == 0) )
    {
      sub_2213CDC(eventDetailLabel, v5);
    }
    (*(void (__fastcall **)(void *, _QWORD, float))(*(_QWORD *)eventDetailLabel + 440LL))(
      eventDetailLabel,
      *(_QWORD *)(*(_QWORD *)eventDetailLabel + 448LL),
      alpha);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_5974AE1 & 1) == 0 )
  {
    sub_2213A60(&EventNoticeControl_EventInfo_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
    byte_5974AE1 = 1;
  }
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  v6 = (EventNoticeControl_EventInfo_o *)sub_2213CCC(EventNoticeControl_EventInfo_TypeInfo);
  EventNoticeControl_EventInfo___ctor(v6, data, v7);
  if ( !eventInfoList
    || (items = eventInfoList->fields._items,
        v17 = Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__,
        ++eventInfoList->fields._version,
        !items) )
  {
    sub_2213CDC(v8, v9);
  }
  size = eventInfoList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    eventInfoList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v6, v10, v11, v12, v13, v14, v15);
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
  __int64 v16; // x1
  __int64 v17; // x20
  int64_t Time; // x0
  const MethodInfo *v19; // x2
  struct UISprite_o *v20; // x8
  float v21; // s0
  int32_t v22; // w1
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5974AE7 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_26484/*"{0}"*/);
    sub_2213A60(&StringLiteral_13974/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/);
    byte_5974AE7 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_48;
  eventInfoList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventInfoList,
                    index,
                    (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
  if ( !eventInfoList )
    goto LABEL_48;
  v6 = eventInfoList;
  if ( *((_BYTE *)eventInfoList + 48) )
  {
    eventDetailSprite = this->fields.eventDetailSprite;
    v8 = (System_String_o *)*((_QWORD *)eventInfoList + 3);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&index);
    v9 = AtlasManager__SetEventUI(eventDetailSprite, v8, 0);
  }
  else
  {
    v9 = 0;
  }
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_48;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
  if ( !eventInfoList )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, v9, 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_48;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
  if ( !eventInfoList )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, !v9, 0);
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_48;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)eventInfoList + 840LL))(
    eventInfoList,
    *(_QWORD *)(*(_QWORD *)eventInfoList + 848LL));
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_48;
  UILabel__set_text((UILabel_o *)eventInfoList, *((System_String_o **)v6 + 2), 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_48;
  v23.fields.r = 1.0;
  v23.fields.g = 1.0;
  v23.fields.b = 1.0;
  v23.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventInfoList, v23, 0);
  if ( !*((_BYTE *)v6 + 50) )
  {
    eventInfoList = this->fields.eventRemainLabel;
    if ( eventInfoList )
    {
      eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
      if ( eventInfoList )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, 1, 0);
        v17 = *((_QWORD *)v6 + 4);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
        Time = NetworkManager__getTime(0);
        EventNoticeControl__SetRemainTime(v17 - Time, this->fields.eventRemainLabel, v19);
        eventInfoList = this->fields.eventDetailLabel;
        if ( eventInfoList )
        {
          UILabel__set_applyGradient((UILabel_o *)eventInfoList, 1, 0);
          eventInfoList = this->fields.eventDetailLabel;
          if ( eventInfoList )
          {
            UILabel__set_fontSize((UILabel_o *)eventInfoList, 20, 0);
            eventInfoList = this->fields.eventDetailLabel;
            if ( eventInfoList )
            {
              UILabel__SetCondensedScale((UILabel_o *)eventInfoList, 300, 0, 0);
              v20 = this->fields.eventDetailSprite;
              if ( v20 )
              {
                eventInfoList = this->fields.eventRemainLabel;
                if ( v20->fields.mWidth <= 319 )
                {
                  if ( !eventInfoList )
                    goto LABEL_48;
                  v22 = *((_DWORD *)eventInfoList + 42);
                }
                else
                {
                  if ( !eventInfoList )
                    goto LABEL_48;
                  v21 = (float)*((int *)eventInfoList + 42) * 0.8;
                  if ( v21 == INFINITY )
                    v22 = 0x80000000;
                  else
                    v22 = (int)v21;
                }
                UILabel__SetCondensedScale((UILabel_o *)eventInfoList, v22, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_48:
    sub_2213CDC(eventInfoList, *(_QWORD *)&index);
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&index);
  eventInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_13974/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, 0);
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_48;
  v11 = System_String__Format_75697880(
          (System_String_o *)eventInfoList,
          (Il2CppObject *)eventDetailLabel->fields.mText,
          (Il2CppObject *)StringLiteral_26484/*"{0}"*/,
          0);
  v12 = this->fields.eventDetailLabel;
  v13 = v11;
  RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(*((_QWORD *)v6 + 4), -1, 0);
  eventInfoList = System_String__Format(v13, RestTime2, 0);
  if ( !v12 )
    goto LABEL_48;
  UILabel__set_text(v12, (System_String_o *)eventInfoList, 0);
  eventInfoList = this->fields.eventRemainLabel;
  if ( !eventInfoList )
    goto LABEL_48;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
  if ( !eventInfoList )
    goto LABEL_48;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, 0, 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_48;
  UILabel__set_applyGradient((UILabel_o *)eventInfoList, *((_BYTE *)v6 + 51), 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_48;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, -290.0, 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_48;
  UILabel__set_fontSize((UILabel_o *)eventInfoList, 18, 0);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_48;
  UILabel__SetCondensedScale((UILabel_o *)eventInfoList, 430, 0, 0);
  if ( !*((_BYTE *)v6 + 51) )
  {
    eventInfoList = this->fields.eventDetailLabel;
    if ( eventInfoList )
    {
      v24.fields.r = 0.0;
      v24.fields.g = 1.0;
      v24.fields.b = 1.0;
      v24.fields.a = 1.0;
      UIWidget__set_color((UIWidget_o *)eventInfoList, v24, 0);
      return;
    }
    goto LABEL_48;
  }
}


void EventNoticeControl__SetRemainTime(int64_t remainTime, UILabel_o *label, const MethodInfo *method)
{
  unsigned __int64 v4; // x20
  __int64 v5; // x1
  System_String_o *v6; // x21
  Il2CppObject *v7; // x0
  System_String_o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x21
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x21
  System_String_o *v14; // x0
  unsigned __int64 v15; // x21
  System_String_o *v16; // x20
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF
  int v19; // [xsp+18h] [xbp-38h] BYREF
  int v20; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = remainTime;
  if ( (byte_5974AE5 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_5798/*"EVENT_DAY_TXT"*/);
    sub_2213A60(&StringLiteral_5963/*"EVENT_TIMEOVER_TXT"*/);
    sub_2213A60(&StringLiteral_5964/*"EVENT_TIME_TXT"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    remainTime = sub_2213A60(&StringLiteral_5866/*"EVENT_MIN_TXT"*/);
    byte_5974AE5 = 1;
  }
  if ( !label )
    sub_2213CDC(remainTime, label);
  v21.fields.r = 0.0;
  v21.fields.g = 0.0;
  v21.fields.b = 0.0;
  v21.fields.a = 1.0;
  UILabel__set_effectColor(label, v21, 0);
  if ( (__int64)v4 < 1 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_5963/*"EVENT_TIMEOVER_TXT"*/, 0);
    goto LABEL_15;
  }
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v5);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_5798/*"EVENT_DAY_TXT"*/, 0);
  v20 = v4 / 0x15180;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v20);
  v8 = System_String__Format(v6, v7, 0);
  if ( (int)(v4 / 0x15180) <= 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_5964/*"EVENT_TIME_TXT"*/, 0);
    v19 = v4 / 0xE10;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v19);
    v8 = System_String__Format(v10, v11, 0);
    if ( (int)(v4 / 0xE10) <= 0 )
    {
      v15 = v4 / 0x3C;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v12);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5866/*"EVENT_MIN_TXT"*/, 0);
      v18 = v15;
      v17 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v18);
      v14 = System_String__Format(v16, v17, 0);
LABEL_15:
      v22.fields.r = 1.0;
      v22.fields.g = 1.0;
      v13 = v14;
      v22.fields.b = 1.0;
      v22.fields.a = 1.0;
      UILabel__set_effectColor(label, v22, 0);
      goto LABEL_16;
    }
  }
  v13 = v8;
LABEL_16:
  UILabel__set_text(label, v13, 0);
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

  if ( (byte_5974AE2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5974AE2 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
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
      sub_2213CDC(IsNeedToInfoUpdate, v7);
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
  if ( (byte_5974AE8 & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_2213A60(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_5974AE8 = 1;
  }
  eventInfoList = v2->fields.eventInfoList;
  if ( !eventInfoList )
    sub_2213CDC(this, method);
  return eventInfoList->fields._size > 1;
}


void EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w1
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct System_String_o *name; // x25
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  int8x16_t v47; // q0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  int32_t v54; // w1
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  int32_t v61; // w1
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x24
  il2cpp_array_size_t max_length; // x8
  __int64 v77; // x25
  System_String_o **v78; // x29
  System_String_o *v79; // x23
  struct System_String_o *v80; // x23
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_String_o *v93; // x23
  struct System_String_o *v94; // x0
  System_String_o *v95; // x2
  System_String_o *v96; // x3
  int32_t v97; // w4
  int32_t v98; // w5
  bool v99; // w6
  bool v100; // w7
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  struct System_String_o *v107; // x1
  int32_t v108; // w1

  if ( (byte_5974AEB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25176/*"synthesis_notice_"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_5974AEB = 1;
  }
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.spriteName,
    v10,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventName, v11, v12, v13, v14, v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSpriteName, v18, v19, v20, v21, v22, v23, v24);
  v25 = (int)StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteText, v25, v26, v27, v28, v29, v30, v31);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.eventName, (int32_t)name, v34, v35, v36, v37, v38, v39);
  this->fields._EventName_k__BackingField = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)name, v41, v42, v43, v44, v45, v46);
  v47 = *(int8x16_t *)&eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  this->fields._IsCampaignOpen_k__BackingField = 0;
  *(int8x16_t *)&this->fields._EndAt_k__BackingField = vextq_s8(v47, v47, 8u);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.infoData,
    (int32_t)eventInfoData,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = (int)StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSpriteName, v54, v55, v56, v57, v58, v59, v60);
  v61 = (int)StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.overwriteText, v61, v62, v63, v64, v65, v66, v67);
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
          sub_2213CE4(IsNullOrEmpty);
        v78 = (System_String_o **)script->m_Items[v77];
        if ( !v78 )
          break;
        v79 = v78[7];
        if ( !System_String__IsNullOrEmpty(v79, 0) )
        {
          v80 = System_String__Concat_75651716((System_String_o *)StringLiteral_25176/*"synthesis_notice_"*/, v79, 0);
          this->fields.spriteName = v80;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.spriteName,
            (int32_t)v80,
            v81,
            v82,
            v83,
            v84,
            v85,
            v86);
          this->fields._SpriteName_k__BackingField = v80;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields._SpriteName_k__BackingField,
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
          v94 = System_String__Concat_75651716((System_String_o *)StringLiteral_25176/*"synthesis_notice_"*/, v93, 0);
          this->fields.overwriteSpriteName = v94;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteSpriteName,
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
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteText,
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
      sub_2213CDC(IsNullOrEmpty, v33);
    }
  }
  else
  {
    v108 = (int)StringLiteral_1/*""*/;
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields._SpriteName_k__BackingField,
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
  EventCampaignReleaseEntity_o *v8; // x8
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_String_o *spriteName; // x1
  struct EventInfoData_o *v16; // x8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  char v23; // w8
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  char v30; // w8
  struct System_String_o *v31; // x1
  struct System_String_o *eventName; // x1
  EventNoticeControl_EventInfo_Fields *p_fields; // x19
  struct System_String_o *overwriteSpriteName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_5974AEC & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    this = (EventNoticeControl_EventInfo_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5974AEC = 1;
  }
  infoData = v2->fields.infoData;
  entity = 0;
  if ( !infoData )
    goto LABEL_36;
  eventEntity = infoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_36;
  if ( eventEntity->fields.type != 5 )
    return;
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
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
      v8 = entity;
      v2->fields._IsCampaignOpen_k__BackingField = (unsigned __int8)this & 1;
      if ( !v8 )
        goto LABEL_36;
      if ( v8->fields.condType == 1 )
      {
        v2->fields._IsCondTypeQuestClear_k__BackingField = 1;
        v2->fields._IsSprite_k__BackingField = 0;
      }
      if ( ((unsigned __int8)this & 1) == 0 && !System_String__IsNullOrEmpty(v7->fields.spriteName, 0) )
      {
        spriteName = v7->fields.spriteName;
        v2->fields._EventName_k__BackingField = spriteName;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields, (int32_t)spriteName, v9, v10, v11, v12, v13, v14);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0)
    && System_String__IsNullOrEmpty(v2->fields.overwriteText, 0) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v16 = v2->fields.infoData) == 0)
    || !this )
  {
LABEL_36:
    sub_2213CDC(this, method);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v16->fields.targetIds, 0) )
  {
    if ( System_String__IsNullOrEmpty(v2->fields.spriteName, 0) )
    {
      v23 = 0;
    }
    else
    {
      v31 = v2->fields.spriteName;
      v2->fields._SpriteName_k__BackingField = v31;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v2->fields._SpriteName_k__BackingField,
        (int32_t)v31,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = 1;
    }
    eventName = v2->fields.eventName;
    v2->fields._EventName_k__BackingField = eventName;
    p_fields = &v2->fields;
    p_fields->_IsSprite_k__BackingField = v23;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0) )
  {
    v30 = 0;
  }
  else
  {
    overwriteSpriteName = v2->fields.overwriteSpriteName;
    v2->fields._SpriteName_k__BackingField = overwriteSpriteName;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields._SpriteName_k__BackingField,
      (int32_t)overwriteSpriteName,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    v30 = 1;
  }
  overwriteText = v2->fields.overwriteText;
  v2->fields._IsSprite_k__BackingField = v30;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0) )
  {
    eventName = v2->fields.overwriteText;
    v2->fields._EventName_k__BackingField = eventName;
    p_fields = &v2->fields;
LABEL_34:
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_fields, (int32_t)eventName, v17, v18, v19, v20, v21, v22);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._EventName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._SpriteName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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