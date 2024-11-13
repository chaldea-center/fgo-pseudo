void __fastcall EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B19AA9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo, v5, v6);
    byte_4B19AA9 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventInfoList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _BOOL8 IsMultiple; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int v8; // w1

  if ( (byte_4B19AA5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method, v2);
    byte_4B19AA5 = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_1BCAA3C(IsMultiple, v5);
    v8 = (this->fields.eventInfoIndex + 1) % eventInfoList->fields._size;
    this->fields.eventInfoIndex = v8;
    EventNoticeControl__SetLabelAndSprite(this, v8, v6);
  }
}


void __fastcall EventNoticeControl__CheckCombineCampaignData(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *eventInfoList; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v15; // x8
  int size; // w8
  int32_t eventInfoIndex; // w1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19AA8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, v10, v11);
    byte_4B19AA8 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    eventInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v18.fields._current )
      sub_1BCAA3C(0LL, v13);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v18.fields._current, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v15 = this->fields.eventInfoList;
  if ( !v15 )
LABEL_16:
    sub_1BCAA3C(eventInfoList, method);
  size = v15->fields._size;
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
  EventNoticeControl__SetLabelAndSprite(this, eventInfoIndex, v14);
}


bool __fastcall EventNoticeControl__GetIsNeedToInfoUpdate(
        EventNoticeControl_o *this,
        System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfolist,
        int64_t now,
        bool isNeedToUpdate,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  bool result; // w0
  int32_t size; // w22
  int32_t v12; // w21
  EventNoticeControl_o *v13; // x8

  if ( (byte_4B19AA3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, eventInfolist, now);
    this = (EventNoticeControl_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__,
                                     v8,
                                     v9);
    byte_4B19AA3 = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_15:
    sub_1BCAA3C(this, eventInfolist);
  size = eventInfolist->fields._size;
  if ( size < 1 )
    return 0;
  v12 = 0;
  while ( 1 )
  {
    this = (EventNoticeControl_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)eventInfolist,
                                     v12,
                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    if ( !this )
      goto LABEL_15;
    v13 = this;
    if ( !BYTE1(this->fields.eventRemainLabel) )
      break;
LABEL_12:
    if ( size == ++v12 )
      return 0;
  }
  if ( (__int64)this->fields.eventDetailLabel >= now )
  {
    if ( (__int64)this->fields.eventDetailSprite <= now )
      return 1;
    goto LABEL_12;
  }
  result = 1;
  BYTE1(v13->fields.eventRemainLabel) = 1;
  return result;
}


void __fastcall EventNoticeControl__InitLabelAndSprite(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *eventDetailLabel; // x0
  UnityEngine_Color_o v5; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19AA2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19AA2 = 1;
  }
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_8;
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_8;
  v5.fields.r = 1.0;
  v5.fields.g = 1.0;
  v5.fields.b = 1.0;
  v5.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventDetailLabel, v5, 0LL);
  eventDetailLabel = (UILabel_o *)this->fields.eventDetailSprite;
  if ( !eventDetailLabel
    || (UISprite__set_spriteName((UISprite_o *)eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (eventDetailLabel = this->fields.eventRemainLabel) == 0LL) )
  {
LABEL_8:
    sub_1BCAA3C(eventDetailLabel, method);
  }
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4B19A9F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__, method, v2);
    byte_4B19A9F = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( eventInfoList )
  {
    size = eventInfoList->fields._size;
    v6 = eventInfoList->fields._version + 1;
    eventInfoList->fields._size = 0;
    eventInfoList->fields._version = v6;
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
      sub_1BCAA3C(eventDetailLabel, v5);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *eventInfoList; // x20
  EventNoticeControl_EventInfo_o *v9; // x21
  const MethodInfo *v10; // x2
  __int64 v11; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4B19AA0 & 1) == 0 )
  {
    sub_1BCA7E0(&EventNoticeControl_EventInfo_TypeInfo, data, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__, v6, v7);
    byte_4B19AA0 = 1;
  }
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  v9 = (EventNoticeControl_EventInfo_o *)sub_1BCAA2C(EventNoticeControl_EventInfo_TypeInfo, data, method, v3);
  EventNoticeControl_EventInfo___ctor(v9, data, v10);
  if ( !eventInfoList
    || (items = eventInfoList->fields._items,
        v20 = Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__,
        ++eventInfoList->fields._version,
        !items) )
  {
    sub_1BCAA3C(v11, v12);
  }
  size = eventInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventInfoList,
      (Il2CppObject *)v9,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &items->obj.klass + size;
    eventInfoList->fields._size = size + 1;
    v22[4] = (Il2CppClass *)v9;
    sub_1BCA784((PartyOrganizationUtility_o *)(v22 + 4), (int64_t)v9, v13, v14, v15, v16, v17, v18);
  }
  this->fields.isNeedToUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetLabelAndSprite(
        EventNoticeControl_o *this,
        int32_t index,
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
  void *eventInfoList; // x0
  void *v16; // x20
  UISprite_o *eventDetailSprite; // x21
  System_String_o *v18; // x22
  bool v19; // w21
  struct UILabel_o *eventDetailLabel; // x8
  System_String_o *v21; // x0
  UILabel_o *v22; // x21
  System_String_o *v23; // x22
  Il2CppObject *RestTime2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x20
  int64_t Time; // x0
  const MethodInfo *v29; // x2
  struct UISprite_o *v30; // x8
  int32_t v31; // w1
  float v32; // s0
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B19AA6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, *(_QWORD *)&index, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_13491/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, v13, v14);
    byte_4B19AA6 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventInfoList,
                    index,
                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
  if ( !eventInfoList )
    goto LABEL_46;
  v16 = eventInfoList;
  if ( *((_BYTE *)eventInfoList + 48) )
  {
    eventDetailSprite = this->fields.eventDetailSprite;
    v18 = (System_String_o *)*((_QWORD *)eventInfoList + 3);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, *(_QWORD *)&index);
    v19 = AtlasManager__SetEventUI(eventDetailSprite, v18, 0LL);
  }
  else
  {
    v19 = 0;
  }
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, v19, 0LL);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, !v19, 0LL);
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_46;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)eventInfoList + 840LL))(
    eventInfoList,
    *(_QWORD *)(*(_QWORD *)eventInfoList + 848LL));
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)eventInfoList, *((System_String_o **)v16 + 2), 0LL);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  v33.fields.r = 1.0;
  v33.fields.g = 1.0;
  v33.fields.b = 1.0;
  v33.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventInfoList, v33, 0LL);
  if ( *((_BYTE *)v16 + 50) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&index);
    eventInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_13491/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, 0LL);
    eventDetailLabel = this->fields.eventDetailLabel;
    if ( eventDetailLabel )
    {
      v21 = System_String__Format_62415592(
              (System_String_o *)eventInfoList,
              (Il2CppObject *)eventDetailLabel->fields.mText,
              (Il2CppObject *)StringLiteral_25238/*"{0}"*/,
              0LL);
      v22 = this->fields.eventDetailLabel;
      v23 = v21;
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(*((_QWORD *)v16 + 4), -1LL, 0LL);
      eventInfoList = System_String__Format(v23, RestTime2, 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, (System_String_o *)eventInfoList, 0LL);
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
              UILabel__set_applyGradient((UILabel_o *)eventInfoList, *((_BYTE *)v16 + 51), 0LL);
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
                    if ( *((_BYTE *)v16 + 51) )
                      return;
                    eventInfoList = this->fields.eventDetailLabel;
                    if ( eventInfoList )
                    {
                      v34.fields.r = 0.0;
                      v34.fields.g = 1.0;
                      v34.fields.b = 1.0;
                      v34.fields.a = 1.0;
                      UIWidget__set_color((UIWidget_o *)eventInfoList, v34, 0LL);
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
    sub_1BCAA3C(eventInfoList, *(_QWORD *)&index);
  }
  eventInfoList = this->fields.eventRemainLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, 1, 0LL);
  v27 = *((_QWORD *)v16 + 4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v26);
  Time = NetworkManager__getTime(0LL);
  EventNoticeControl__SetRemainTime(v27 - Time, this->fields.eventRemainLabel, v29);
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
  v30 = this->fields.eventDetailSprite;
  if ( !v30 )
    goto LABEL_46;
  eventInfoList = this->fields.eventRemainLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  v31 = *((_DWORD *)eventInfoList + 42);
  if ( v30->fields.mWidth >= 320 )
  {
    v32 = (float)v31 * 0.8;
    if ( v32 == INFINITY )
      v31 = 0x80000000;
    else
      v31 = (int)v32;
  }
  UILabel__SetCondensedScale((UILabel_o *)eventInfoList, v31, 0LL);
}


void __fastcall EventNoticeControl__SetRemainTime(int64_t remainTime, UILabel_o *label, const MethodInfo *method)
{
  unsigned __int64 v4; // x20
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
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x21
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  unsigned __int64 v27; // x21
  System_String_o *v28; // x20
  Il2CppObject *v29; // x0
  int v30; // [xsp+Ch] [xbp-44h] BYREF
  int v31; // [xsp+18h] [xbp-38h] BYREF
  int v32; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = remainTime;
  if ( (byte_4B19AA4 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, label, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_5699/*"EVENT_DAY_TXT"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_5811/*"EVENT_TIMEOVER_TXT"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_5812/*"EVENT_TIME_TXT"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    remainTime = sub_1BCA7E0(&StringLiteral_5724/*"EVENT_MIN_TXT"*/, v15, v16);
    byte_4B19AA4 = 1;
  }
  if ( !label )
    sub_1BCAA3C(remainTime, label);
  v33.fields.r = 0.0;
  v33.fields.g = 0.0;
  v33.fields.b = 0.0;
  v33.fields.a = 1.0;
  UILabel__set_effectColor(label, v33, 0LL);
  if ( (__int64)v4 < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5811/*"EVENT_TIMEOVER_TXT"*/, 0LL);
    goto LABEL_15;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5699/*"EVENT_DAY_TXT"*/, 0LL);
  v32 = v4 / 0x15180;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  v20 = System_String__Format(v18, v19, 0LL);
  if ( (int)(v4 / 0x15180) <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v21);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5812/*"EVENT_TIME_TXT"*/, 0LL);
    v31 = v4 / 0xE10;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
    v20 = System_String__Format(v22, v23, 0LL);
    if ( (int)(v4 / 0xE10) <= 0 )
    {
      v27 = v4 / 0x3C;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24);
      v28 = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_MIN_TXT"*/, 0LL);
      v30 = v27;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
      v26 = System_String__Format(v28, v29, 0LL);
LABEL_15:
      v25 = v26;
      v34.fields.r = 1.0;
      v34.fields.g = 1.0;
      v34.fields.b = 1.0;
      v34.fields.a = 1.0;
      UILabel__set_effectColor(label, v34, 0LL);
      goto LABEL_16;
    }
  }
  v25 = v20;
LABEL_16:
  UILabel__set_text(label, v25, 0LL);
}


void __fastcall EventNoticeControl__UpdateEventNotice(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x20
  EventNoticeControl_o *Time; // x0
  const MethodInfo *v8; // x4
  _BOOL8 IsNeedToInfoUpdate; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v11; // x8
  const MethodInfo *v12; // x2

  if ( (byte_4B19AA1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B19AA1 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = (EventNoticeControl_o *)NetworkManager__getTime(0LL);
  IsNeedToInfoUpdate = EventNoticeControl__GetIsNeedToInfoUpdate(
                         Time,
                         eventInfoList,
                         (int64_t)Time,
                         this->fields.isNeedToUpdate,
                         v8);
  if ( IsNeedToInfoUpdate )
  {
    v11 = this->fields.eventInfoList;
    this->fields.isNeedToUpdate = 0;
    if ( !v11 )
      sub_1BCAA3C(IsNeedToInfoUpdate, v10);
    if ( v11->fields._size )
    {
      if ( !EventNoticeControl__get_IsMultiple(this, v10) )
        EventNoticeControl__SetLabelAndSprite(this, 0, v12);
    }
    else
    {
      EventNoticeControl__InitLabelAndSprite(this, v10);
    }
  }
}


bool __fastcall EventNoticeControl__get_IsMultiple(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  EventNoticeControl_o *v3; // x19
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8

  v3 = this;
  if ( (byte_4B19AA7 & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__,
                                     method,
                                     v2);
    byte_4B19AA7 = 1;
  }
  eventInfoList = v3->fields.eventInfoList;
  if ( !eventInfoList )
    sub_1BCAA3C(this, method);
  return eventInfoList->fields._size > 1;
}


void __fastcall EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  void *v12; // x1
  void *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  void *v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  void *v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_String_o *name; // x25
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int8x16_t v49; // q0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  void *v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  void *v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  __int64 v78; // x8
  __int64 v79; // x26
  System_String_o **v80; // x29
  System_String_o *v81; // x24
  struct System_String_o *v82; // x24
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  System_String_o *v95; // x24
  struct System_String_o *v96; // x0
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  struct System_String_o *v109; // x1
  void *v110; // x1

  if ( (byte_4B19AAA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23989/*"synthesis_notice_"*/, eventInfoData, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    byte_4B19AAA = 1;
  }
  v12 = StringLiteral_1/*""*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spriteName, (int64_t)v12, (int64_t)method, v3, v4, v5, v6, v7);
  v13 = StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventName, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  v20 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overwriteSpriteName,
    (int64_t)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overwriteText, (int64_t)v27, v28, v29, v30, v31, v32, v33);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventName, (int64_t)name, v36, v37, v38, v39, v40, v41);
  this->fields._EventName_k__BackingField = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)name, v43, v44, v45, v46, v47, v48);
  v49 = *(int8x16_t *)&eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  *(int8x16_t *)&this->fields._EndAt_k__BackingField = vextq_s8(v49, v49, 8uLL);
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.infoData,
    (int64_t)eventInfoData,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.overwriteSpriteName,
    (int64_t)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.overwriteText, (int64_t)v63, v64, v65, v66, v67, v68, v69);
  eventEntity = eventInfoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_21;
  script = eventEntity->fields.script;
  if ( script && (v78 = *(_QWORD *)&script->max_length) != 0 )
  {
    if ( (int)v78 >= 1 )
    {
      v79 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v79 >= (unsigned int)v78 )
          sub_1BCAA44(IsNullOrEmpty, v35);
        v80 = (System_String_o **)script->m_Items[v79];
        if ( !v80 )
          break;
        v81 = v80[7];
        if ( !System_String__IsNullOrEmpty(v81, 0LL) )
        {
          v82 = System_String__Concat_62401220((System_String_o *)StringLiteral_23989/*"synthesis_notice_"*/, v81, 0LL);
          this->fields.spriteName = v82;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.spriteName,
            (int64_t)v82,
            v83,
            v84,
            v85,
            v86,
            v87,
            v88);
          this->fields._SpriteName_k__BackingField = v82;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields._SpriteName_k__BackingField,
            (int64_t)v82,
            v89,
            v90,
            v91,
            v92,
            v93,
            v94);
          this->fields._IsSprite_k__BackingField = 1;
        }
        v95 = v80[8];
        if ( !System_String__IsNullOrEmpty(v95, 0LL) )
        {
          v96 = System_String__Concat_62401220((System_String_o *)StringLiteral_23989/*"synthesis_notice_"*/, v95, 0LL);
          this->fields.overwriteSpriteName = v96;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.overwriteSpriteName,
            (int64_t)v96,
            v97,
            v98,
            v99,
            v100,
            v101,
            v102);
        }
        IsNullOrEmpty = System_String__IsNullOrEmpty(v80[9], 0LL);
        if ( !IsNullOrEmpty )
        {
          v109 = v80[9];
          this->fields.overwriteText = v109;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&this->fields.overwriteText,
            (int64_t)v109,
            v103,
            v104,
            v105,
            v106,
            v107,
            v108);
        }
        LODWORD(v78) = script->max_length;
        if ( (int)++v79 >= (int)v78 )
          goto LABEL_20;
      }
LABEL_21:
      sub_1BCAA3C(IsNullOrEmpty, v35);
    }
  }
  else
  {
    v110 = StringLiteral_1/*""*/;
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._SpriteName_k__BackingField,
      (int64_t)v110,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v35);
}


void __fastcall EventNoticeControl_EventInfo__CheckCombineCampaignData(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventNoticeControl_EventInfo_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct EventInfoData_o *infoData; // x8
  struct EventEntity_o *eventEntity; // x8
  Il2CppObject *MasterData_object; // x21
  struct EventInfoData_o *v13; // x8
  EventNoticeControl_EventInfo_o *v14; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t spriteName; // x1
  struct EventInfoData_o *v22; // x8
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  char v29; // w8
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  char v36; // w8
  int64_t v37; // x1
  int64_t eventName; // x1
  EventNoticeControl_EventInfo_Fields *p_fields; // x19
  int64_t overwriteSpriteName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v3 = this;
  if ( (byte_4B19AAB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v6, v7);
    this = (EventNoticeControl_EventInfo_o *)sub_1BCA7E0(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v8,
                                               v9);
    byte_4B19AAB = 1;
  }
  entity = 0LL;
  infoData = v3->fields.infoData;
  if ( !infoData )
    goto LABEL_36;
  eventEntity = infoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_36;
  if ( eventEntity->fields.type != 5 )
    return;
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v13 = v3->fields.infoData;
  if ( !v13 || !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)EventCampaignMaster__getData(
                                             (EventCampaignMaster_o *)this,
                                             v13->fields.eventId,
                                             0LL);
  if ( this )
  {
    if ( !MasterData_object )
      goto LABEL_36;
    v14 = this;
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
                                                 (int32_t)v14->fields._EventName_k__BackingField,
                                                 HIDWORD(v14->fields._EventName_k__BackingField),
                                                 0LL);
      v3->fields._IsCampaignOpen_k__BackingField = (unsigned __int8)this & 1;
      if ( !entity )
        goto LABEL_36;
      if ( entity->fields.condType == 1 )
      {
        v3->fields._IsCondTypeQuestClear_k__BackingField = 1;
        v3->fields._IsSprite_k__BackingField = 0;
      }
      if ( ((unsigned __int8)this & 1) == 0 && !System_String__IsNullOrEmpty(v14->fields.spriteName, 0LL) )
      {
        spriteName = (int64_t)v14->fields.spriteName;
        v3->fields._EventName_k__BackingField = (struct System_String_o *)spriteName;
        sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields, spriteName, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v3->fields.overwriteSpriteName, 0LL)
    && System_String__IsNullOrEmpty(v3->fields.overwriteText, 0LL) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v22 = v3->fields.infoData) == 0LL)
    || !this )
  {
LABEL_36:
    sub_1BCAA3C(this, method);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v22->fields.targetIds, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v3->fields.spriteName, 0LL) )
    {
      v29 = 0;
    }
    else
    {
      v37 = (int64_t)v3->fields.spriteName;
      v3->fields._SpriteName_k__BackingField = (struct System_String_o *)v37;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v3->fields._SpriteName_k__BackingField,
        v37,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = 1;
    }
    eventName = (int64_t)v3->fields.eventName;
    v3->fields._EventName_k__BackingField = (struct System_String_o *)eventName;
    p_fields = &v3->fields;
    p_fields->_IsSprite_k__BackingField = v29;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v3->fields.overwriteSpriteName, 0LL) )
  {
    v36 = 0;
  }
  else
  {
    overwriteSpriteName = (int64_t)v3->fields.overwriteSpriteName;
    v3->fields._SpriteName_k__BackingField = (struct System_String_o *)overwriteSpriteName;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v3->fields._SpriteName_k__BackingField,
      overwriteSpriteName,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v36 = 1;
  }
  overwriteText = v3->fields.overwriteText;
  v3->fields._IsSprite_k__BackingField = v36;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0LL) )
  {
    eventName = (int64_t)v3->fields.overwriteText;
    v3->fields._EventName_k__BackingField = (struct System_String_o *)eventName;
    p_fields = &v3->fields;
LABEL_34:
    sub_1BCA784((PartyOrganizationUtility_o *)p_fields, eventName, v23, v24, v25, v26, v27, v28);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._EventName_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._SpriteName_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._SpriteName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall EventNoticeControl_EventInfo__set_StartAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._StartAt_k__BackingField = value;
}