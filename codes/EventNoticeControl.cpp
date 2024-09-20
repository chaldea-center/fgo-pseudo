void __fastcall EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5E958 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
    byte_4A5E958 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventInfoList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsMultiple; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int v7; // w1

  if ( (byte_4A5E954 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4A5E954 = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_1B8880C(IsMultiple, v4);
    v7 = (this->fields.eventInfoIndex + 1) % eventInfoList->fields._size;
    this->fields.eventInfoIndex = v7;
    EventNoticeControl__SetLabelAndSprite(this, v7, v5);
  }
}


void __fastcall EventNoticeControl__CheckCombineCampaignData(EventNoticeControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventInfoList; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v6; // x8
  int size; // w8
  int32_t eventInfoIndex; // w1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E957 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4A5E957 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    eventInfoList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B8880C(0LL, v4);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v9.fields._current, v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v6 = this->fields.eventInfoList;
  if ( !v6 )
LABEL_16:
    sub_1B8880C(eventInfoList, method);
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


bool __fastcall EventNoticeControl__GetIsNeedToInfoUpdate(
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

  if ( (byte_4A5E952 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    this = (EventNoticeControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    byte_4A5E952 = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_15:
    sub_1B8880C(this, eventInfolist);
  size = eventInfolist->fields._size;
  if ( size < 1 )
    return 0;
  v10 = 0;
  while ( 1 )
  {
    this = (EventNoticeControl_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)eventInfolist,
                                     v10,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
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


void __fastcall EventNoticeControl__InitLabelAndSprite(EventNoticeControl_o *this, const MethodInfo *method)
{
  UILabel_o *eventDetailLabel; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5E951 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E951 = 1;
  }
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_8;
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_8;
  v4.fields.r = 1.0;
  v4.fields.g = 1.0;
  v4.fields.b = 1.0;
  v4.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventDetailLabel, v4, 0LL);
  eventDetailLabel = (UILabel_o *)this->fields.eventDetailSprite;
  if ( !eventDetailLabel
    || (UISprite__set_spriteName((UISprite_o *)eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (eventDetailLabel = this->fields.eventRemainLabel) == 0LL) )
  {
LABEL_8:
    sub_1B8880C(eventDetailLabel, method);
  }
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4A5E94E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
    byte_4A5E94E = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( eventInfoList )
  {
    size = eventInfoList->fields._size;
    v5 = eventInfoList->fields._version + 1;
    eventInfoList->fields._size = 0;
    eventInfoList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)eventInfoList->fields._items, 0, size, 0LL);
    EventNoticeControl__InitLabelAndSprite(this, method);
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
      sub_1B8880C(eventDetailLabel, v5);
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
  System_Collections_Generic_List_object__o *eventInfoList; // x20
  EventNoticeControl_EventInfo_o *v6; // x21
  const MethodInfo *v7; // x2
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0

  if ( (byte_4A5E94F & 1) == 0 )
  {
    sub_1B885B0(&EventNoticeControl_EventInfo_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
    byte_4A5E94F = 1;
  }
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  v6 = (EventNoticeControl_EventInfo_o *)sub_1B887FC(EventNoticeControl_EventInfo_TypeInfo);
  EventNoticeControl_EventInfo___ctor(v6, data, v7);
  if ( !eventInfoList
    || (items = eventInfoList->fields._items,
        v13 = Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__,
        ++eventInfoList->fields._version,
        !items) )
  {
    sub_1B8880C(v8, v9);
  }
  size = eventInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventInfoList,
      (Il2CppObject *)v6,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    eventInfoList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v10, v11);
  }
  this->fields.isNeedToUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetLabelAndSprite(
        EventNoticeControl_o *this,
        int32_t index,
        const MethodInfo *method)
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

  if ( (byte_4A5E955 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24983/*"{0}"*/);
    sub_1B885B0(&StringLiteral_13328/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/);
    byte_4A5E955 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventInfoList,
                    index,
                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
  if ( !eventInfoList )
    goto LABEL_46;
  v6 = eventInfoList;
  if ( *((_BYTE *)eventInfoList + 48) )
  {
    eventDetailSprite = this->fields.eventDetailSprite;
    v8 = (System_String_o *)*((_QWORD *)eventInfoList + 3);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v9 = AtlasManager__SetEventUI(eventDetailSprite, v8, 0LL);
  }
  else
  {
    v9 = 0;
  }
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, v9, 0LL);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, !v9, 0LL);
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_46;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)eventInfoList + 840LL))(
    eventInfoList,
    *(_QWORD *)(*(_QWORD *)eventInfoList + 848LL));
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)eventInfoList, *((System_String_o **)v6 + 2), 0LL);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  v22.fields.r = 1.0;
  v22.fields.g = 1.0;
  v22.fields.b = 1.0;
  v22.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventInfoList, v22, 0LL);
  if ( *((_BYTE *)v6 + 50) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    eventInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_13328/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, 0LL);
    eventDetailLabel = this->fields.eventDetailLabel;
    if ( eventDetailLabel )
    {
      v11 = System_String__Format_61721404(
              (System_String_o *)eventInfoList,
              (Il2CppObject *)eventDetailLabel->fields.mText,
              (Il2CppObject *)StringLiteral_24983/*"{0}"*/,
              0LL);
      v12 = this->fields.eventDetailLabel;
      v13 = v11;
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(*((_QWORD *)v6 + 4), -1LL, 0LL);
      eventInfoList = System_String__Format(v13, RestTime2, 0LL);
      if ( v12 )
      {
        UILabel__set_text(v12, (System_String_o *)eventInfoList, 0LL);
        eventInfoList = this->fields.eventRemainLabel;
        if ( eventInfoList )
        {
          eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
          if ( eventInfoList )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, 0, 0LL);
            eventInfoList = this->fields.eventDetailLabel;
            if ( eventInfoList )
            {
              UILabel__set_applyGradient((UILabel_o *)eventInfoList, *((_BYTE *)v6 + 51), 0LL);
              eventInfoList = this->fields.eventDetailLabel;
              if ( eventInfoList )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
                GameObjectExtensions__SetLocalPositionX(gameObject, -290.0, 0LL);
                eventInfoList = this->fields.eventDetailLabel;
                if ( eventInfoList )
                {
                  UILabel__set_fontSize((UILabel_o *)eventInfoList, 18, 0LL);
                  eventInfoList = this->fields.eventDetailLabel;
                  if ( eventInfoList )
                  {
                    UILabel__SetCondensedScale((UILabel_o *)eventInfoList, 430, 0LL);
                    if ( *((_BYTE *)v6 + 51) )
                      return;
                    eventInfoList = this->fields.eventDetailLabel;
                    if ( eventInfoList )
                    {
                      v23.fields.r = 0.0;
                      v23.fields.g = 1.0;
                      v23.fields.b = 1.0;
                      v23.fields.a = 1.0;
                      UIWidget__set_color((UIWidget_o *)eventInfoList, v23, 0LL);
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
    sub_1B8880C(eventInfoList, *(_QWORD *)&index);
  }
  eventInfoList = this->fields.eventRemainLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, 1, 0LL);
  v16 = *((_QWORD *)v6 + 4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  EventNoticeControl__SetRemainTime(v16 - Time, this->fields.eventRemainLabel, v18);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__set_applyGradient((UILabel_o *)eventInfoList, 1, 0LL);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__set_fontSize((UILabel_o *)eventInfoList, 20, 0LL);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__SetCondensedScale((UILabel_o *)eventInfoList, 300, 0LL);
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
  UILabel__SetCondensedScale((UILabel_o *)eventInfoList, v20, 0LL);
}


void __fastcall EventNoticeControl__SetRemainTime(int64_t remainTime, UILabel_o *label, const MethodInfo *method)
{
  unsigned __int64 v4; // x20
  System_String_o *v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  System_String_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x21
  System_String_o *v17; // x0
  unsigned __int64 v18; // x21
  System_String_o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int v24; // [xsp+Ch] [xbp-44h] BYREF
  int v25; // [xsp+18h] [xbp-38h] BYREF
  int v26; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = remainTime;
  if ( (byte_4A5E953 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5615/*"EVENT_DAY_TXT"*/);
    sub_1B885B0(&StringLiteral_5727/*"EVENT_TIMEOVER_TXT"*/);
    sub_1B885B0(&StringLiteral_5728/*"EVENT_TIME_TXT"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    remainTime = sub_1B885B0(&StringLiteral_5640/*"EVENT_MIN_TXT"*/);
    byte_4A5E953 = 1;
  }
  if ( !label )
    sub_1B8880C(remainTime, label);
  v27.fields.r = 0.0;
  v27.fields.g = 0.0;
  v27.fields.b = 0.0;
  v27.fields.a = 1.0;
  UILabel__set_effectColor(label, v27, 0LL);
  if ( (__int64)v4 < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5727/*"EVENT_TIMEOVER_TXT"*/, 0LL);
    goto LABEL_15;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_5615/*"EVENT_DAY_TXT"*/, 0LL);
  v26 = v4 / 0x15180;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v6, v7, v8);
  v10 = System_String__Format(v5, v9, 0LL);
  if ( (int)(v4 / 0x15180) <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5728/*"EVENT_TIME_TXT"*/, 0LL);
    v25 = v4 / 0xE10;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25, v12, v13, v14);
    v10 = System_String__Format(v11, v15, 0LL);
    if ( (int)(v4 / 0xE10) <= 0 )
    {
      v18 = v4 / 0x3C;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5640/*"EVENT_MIN_TXT"*/, 0LL);
      v24 = v18;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22);
      v17 = System_String__Format(v19, v23, 0LL);
LABEL_15:
      v16 = v17;
      v28.fields.r = 1.0;
      v28.fields.g = 1.0;
      v28.fields.b = 1.0;
      v28.fields.a = 1.0;
      UILabel__set_effectColor(label, v28, 0LL);
      goto LABEL_16;
    }
  }
  v16 = v10;
LABEL_16:
  UILabel__set_text(label, v16, 0LL);
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

  if ( (byte_4A5E950 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5E950 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
      sub_1B8880C(IsNeedToInfoUpdate, v7);
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
  if ( (byte_4A5E956 & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__);
    byte_4A5E956 = 1;
  }
  eventInfoList = v2->fields.eventInfoList;
  if ( !eventInfoList )
    sub_1B8880C(this, method);
  return eventInfoList->fields._size > 1;
}


void __fastcall EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_String_o *name; // x25
  int32_t v21; // w2
  int32_t v22; // w3
  int8x16_t v23; // q0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  __int64 v36; // x8
  __int64 v37; // x26
  System_String_o **v38; // x29
  System_String_o *v39; // x24
  struct System_String_o *v40; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x24
  struct System_String_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_String_o *v51; // x1
  int32_t v52; // w1

  if ( (byte_4A5E959 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23741/*"synthesis_notice_"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E959 = 1;
  }
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spriteName, v6, (int32_t)method, v3);
  v7 = (int)StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventName, v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteSpriteName, v10, v11, v12);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteText, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventName, (int32_t)name, v18, v19);
  this->fields._EventName_k__BackingField = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)name, v21, v22);
  v23 = *(int8x16_t *)&eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  *(int8x16_t *)&this->fields._EndAt_k__BackingField = vextq_s8(v23, v23, 8uLL);
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.infoData, (int32_t)eventInfoData, v24, v25);
  v26 = (int)StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteSpriteName, v26, v27, v28);
  v29 = (int)StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteText, v29, v30, v31);
  eventEntity = eventInfoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_21;
  script = eventEntity->fields.script;
  if ( script && (v36 = *(_QWORD *)&script->max_length) != 0 )
  {
    if ( (int)v36 >= 1 )
    {
      v37 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v37 >= (unsigned int)v36 )
          sub_1B88814(IsNullOrEmpty, v17);
        v38 = (System_String_o **)script->m_Items[v37];
        if ( !v38 )
          break;
        v39 = v38[7];
        if ( !System_String__IsNullOrEmpty(v39, 0LL) )
        {
          v40 = System_String__Concat_61707032((System_String_o *)StringLiteral_23741/*"synthesis_notice_"*/, v39, 0LL);
          this->fields.spriteName = v40;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spriteName, (int32_t)v40, v41, v42);
          this->fields._SpriteName_k__BackingField = v40;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&this->fields._SpriteName_k__BackingField,
            (int32_t)v40,
            v43,
            v44);
          this->fields._IsSprite_k__BackingField = 1;
        }
        v45 = v38[8];
        if ( !System_String__IsNullOrEmpty(v45, 0LL) )
        {
          v46 = System_String__Concat_61707032((System_String_o *)StringLiteral_23741/*"synthesis_notice_"*/, v45, 0LL);
          this->fields.overwriteSpriteName = v46;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteSpriteName, (int32_t)v46, v47, v48);
        }
        IsNullOrEmpty = System_String__IsNullOrEmpty(v38[9], 0LL);
        if ( !IsNullOrEmpty )
        {
          v51 = v38[9];
          this->fields.overwriteText = v51;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteText, (int32_t)v51, v49, v50);
        }
        LODWORD(v36) = script->max_length;
        if ( (int)++v37 >= (int)v36 )
          goto LABEL_20;
      }
LABEL_21:
      sub_1B8880C(IsNullOrEmpty, v17);
    }
  }
  else
  {
    v52 = (int)StringLiteral_1/*""*/;
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._SpriteName_k__BackingField, v52, v32, v33);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v17);
}


void __fastcall EventNoticeControl_EventInfo__CheckCombineCampaignData(
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
  struct System_String_o *spriteName; // x1
  struct EventInfoData_o *v11; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  char v14; // w8
  int32_t v15; // w2
  int32_t v16; // w3
  char v17; // w8
  struct System_String_o *v18; // x1
  struct System_String_o *eventName; // x1
  EventNoticeControl_EventInfo_Fields *p_fields; // x19
  struct System_String_o *overwriteSpriteName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4A5E95A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    this = (EventNoticeControl_EventInfo_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5E95A = 1;
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
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v6 = v2->fields.infoData;
  if ( !v6 || !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)EventCampaignMaster__getData(
                                             (EventCampaignMaster_o *)this,
                                             v6->fields.eventId,
                                             0LL);
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
           0LL) )
    {
      this = (EventNoticeControl_EventInfo_o *)EventCampaignReleaseMaster__isRelease(
                                                 (EventCampaignReleaseMaster_o *)MasterData_object,
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
        spriteName = v7->fields.spriteName;
        v2->fields._EventName_k__BackingField = spriteName;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields, (int32_t)spriteName, v8, v9);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0LL)
    && System_String__IsNullOrEmpty(v2->fields.overwriteText, 0LL) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v11 = v2->fields.infoData) == 0LL)
    || !this )
  {
LABEL_36:
    sub_1B8880C(this, method);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v11->fields.targetIds, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v2->fields.spriteName, 0LL) )
    {
      v14 = 0;
    }
    else
    {
      v18 = v2->fields.spriteName;
      v2->fields._SpriteName_k__BackingField = v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._SpriteName_k__BackingField, (int32_t)v18, v12, v13);
      v14 = 1;
    }
    eventName = v2->fields.eventName;
    v2->fields._EventName_k__BackingField = eventName;
    p_fields = &v2->fields;
    p_fields->_IsSprite_k__BackingField = v14;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0LL) )
  {
    v17 = 0;
  }
  else
  {
    overwriteSpriteName = v2->fields.overwriteSpriteName;
    v2->fields._SpriteName_k__BackingField = overwriteSpriteName;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v2->fields._SpriteName_k__BackingField,
      (int32_t)overwriteSpriteName,
      v15,
      v16);
    v17 = 1;
  }
  overwriteText = v2->fields.overwriteText;
  v2->fields._IsSprite_k__BackingField = v17;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0LL) )
  {
    eventName = v2->fields.overwriteText;
    v2->fields._EventName_k__BackingField = eventName;
    p_fields = &v2->fields;
LABEL_34:
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_fields, (int32_t)eventName, v12, v13);
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
  int32_t v3; // w3

  this->fields._EventName_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  int32_t v3; // w3

  this->fields._SpriteName_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._SpriteName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall EventNoticeControl_EventInfo__set_StartAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._StartAt_k__BackingField = value;
}