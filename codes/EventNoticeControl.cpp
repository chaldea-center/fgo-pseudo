void __fastcall EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C259CD & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo, v3);
    byte_4C259CD = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventInfoList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsMultiple; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int v7; // w1

  if ( (byte_4C259C9 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method);
    byte_4C259C9 = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_1C3B9C0(IsMultiple, v4);
    v7 = (this->fields.eventInfoIndex + 1) % eventInfoList->fields._size;
    this->fields.eventInfoIndex = v7;
    EventNoticeControl__SetLabelAndSprite(this, v7, v5);
  }
}


void __fastcall EventNoticeControl__CheckCombineCampaignData(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *eventInfoList; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v10; // x8
  int size; // w8
  int32_t eventInfoIndex; // w1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C259CC & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, v6);
    byte_4C259CC = 1;
  }
  memset(&v13, 0, sizeof(v13));
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    eventInfoList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_1C3B9C0(0LL, v8);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v13.fields._current, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v10 = this->fields.eventInfoList;
  if ( !v10 )
LABEL_16:
    sub_1C3B9C0(eventInfoList, method);
  size = v10->fields._size;
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
  EventNoticeControl__SetLabelAndSprite(this, eventInfoIndex, v9);
}


bool __fastcall EventNoticeControl__GetIsNeedToInfoUpdate(
        EventNoticeControl_o *this,
        System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfolist,
        int64_t now,
        bool isNeedToUpdate,
        const MethodInfo *method)
{
  __int64 v8; // x1
  bool result; // w0
  int32_t size; // w22
  int32_t v11; // w21
  EventNoticeControl_o *v12; // x8

  if ( (byte_4C259C7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, eventInfolist);
    this = (EventNoticeControl_o *)sub_1C3B764(
                                     &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__,
                                     v8);
    byte_4C259C7 = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_15:
    sub_1C3B9C0(this, eventInfolist);
  size = eventInfolist->fields._size;
  if ( size < 1 )
    return 0;
  v11 = 0;
  while ( 1 )
  {
    this = (EventNoticeControl_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)eventInfolist,
                                     v11,
                                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
    if ( !this )
      goto LABEL_15;
    v12 = this;
    if ( !BYTE1(this->fields.eventRemainLabel) )
      break;
LABEL_12:
    if ( size == ++v11 )
      return 0;
  }
  if ( (__int64)this->fields.eventDetailLabel >= now )
  {
    if ( (__int64)this->fields.eventDetailSprite <= now )
      return 1;
    goto LABEL_12;
  }
  result = 1;
  BYTE1(v12->fields.eventRemainLabel) = 1;
  return result;
}


void __fastcall EventNoticeControl__InitLabelAndSprite(EventNoticeControl_o *this, const MethodInfo *method)
{
  UILabel_o *eventDetailLabel; // x0
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C259C6 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C259C6 = 1;
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
    sub_1C3B9C0(eventDetailLabel, method);
  }
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4C259C3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__, method);
    byte_4C259C3 = 1;
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
      sub_1C3B9C0(eventDetailLabel, v5);
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
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *eventInfoList; // x20
  EventNoticeControl_EventInfo_o *v7; // x21
  const MethodInfo *v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0

  if ( (byte_4C259C4 & 1) == 0 )
  {
    sub_1C3B764(&EventNoticeControl_EventInfo_TypeInfo, data);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__, v5);
    byte_4C259C4 = 1;
  }
  eventInfoList = (System_Collections_Generic_List_object__o *)this->fields.eventInfoList;
  v7 = (EventNoticeControl_EventInfo_o *)sub_1C3B9B0(EventNoticeControl_EventInfo_TypeInfo);
  EventNoticeControl_EventInfo___ctor(v7, data, v8);
  if ( !eventInfoList
    || (items = eventInfoList->fields._items,
        v18 = Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__,
        ++eventInfoList->fields._version,
        !items) )
  {
    sub_1C3B9C0(v9, v10);
  }
  size = eventInfoList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      eventInfoList,
      (Il2CppObject *)v7,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    eventInfoList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)v7;
    sub_1C3B708((PartyOrganizationUtility_o *)(v20 + 4), (int64_t)v7, v11, v12, v13, v14, v15, v16);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *eventInfoList; // x0
  void *v11; // x20
  UISprite_o *eventDetailSprite; // x21
  System_String_o *v13; // x22
  bool v14; // w21
  struct UILabel_o *eventDetailLabel; // x8
  System_String_o *v16; // x0
  UILabel_o *v17; // x21
  System_String_o *v18; // x22
  Il2CppObject *RestTime2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x20
  int64_t Time; // x0
  const MethodInfo *v23; // x2
  struct UISprite_o *v24; // x8
  int32_t v25; // w1
  float v26; // s0
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C259CA & 1) == 0 )
  {
    sub_1C3B764(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__, v5);
    sub_1C3B764(&LocalizationManager_TypeInfo, v6);
    sub_1C3B764(&NetworkManager_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_25497, v8);
    sub_1C3B764(&StringLiteral_13622/*"The content model can only have one of the following; 'all', 'choice', or 'sequence'."*/, v9);
    byte_4C259CA = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = System_Collections_Generic_List_object___get_Item(
                    (System_Collections_Generic_List_object__o *)eventInfoList,
                    index,
                    (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__);
  if ( !eventInfoList )
    goto LABEL_46;
  v11 = eventInfoList;
  if ( *((_BYTE *)eventInfoList + 48) )
  {
    eventDetailSprite = this->fields.eventDetailSprite;
    v13 = (System_String_o *)*((_QWORD *)eventInfoList + 3);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    v14 = AtlasManager__SetEventUI(eventDetailSprite, v13, 0LL);
  }
  else
  {
    v14 = 0;
  }
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, v14, 0LL);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, !v14, 0LL);
  eventInfoList = this->fields.eventDetailSprite;
  if ( !eventInfoList )
    goto LABEL_46;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)eventInfoList + 840LL))(
    eventInfoList,
    *(_QWORD *)(*(_QWORD *)eventInfoList + 848LL));
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  UILabel__set_text((UILabel_o *)eventInfoList, *((System_String_o **)v11 + 2), 0LL);
  eventInfoList = this->fields.eventDetailLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  v27.fields.r = 1.0;
  v27.fields.g = 1.0;
  v27.fields.b = 1.0;
  v27.fields.a = 1.0;
  UIWidget__set_color((UIWidget_o *)eventInfoList, v27, 0LL);
  if ( *((_BYTE *)v11 + 50) )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    eventInfoList = LocalizationManager__Get((System_String_o *)StringLiteral_13622/*"The content model can only have one of the following; 'all', 'choice', or 'sequence'."*/, 0LL);
    eventDetailLabel = this->fields.eventDetailLabel;
    if ( eventDetailLabel )
    {
      v16 = System_String__Format_63382984(
              (System_String_o *)eventInfoList,
              (Il2CppObject *)eventDetailLabel->fields.mText,
              (Il2CppObject *)StringLiteral_25497,
              0LL);
      v17 = this->fields.eventDetailLabel;
      v18 = v16;
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(*((_QWORD *)v11 + 4), -1LL, 0LL);
      eventInfoList = System_String__Format(v18, RestTime2, 0LL);
      if ( v17 )
      {
        UILabel__set_text(v17, (System_String_o *)eventInfoList, 0LL);
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
              UILabel__set_applyGradient((UILabel_o *)eventInfoList, *((_BYTE *)v11 + 51), 0LL);
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
                    UILabel__SetCondensedScale((UILabel_o *)eventInfoList, 430, 0, 0LL);
                    if ( *((_BYTE *)v11 + 51) )
                      return;
                    eventInfoList = this->fields.eventDetailLabel;
                    if ( eventInfoList )
                    {
                      v28.fields.r = 0.0;
                      v28.fields.g = 1.0;
                      v28.fields.b = 1.0;
                      v28.fields.a = 1.0;
                      UIWidget__set_color((UIWidget_o *)eventInfoList, v28, 0LL);
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
    sub_1C3B9C0(eventInfoList, *(_QWORD *)&index);
  }
  eventInfoList = this->fields.eventRemainLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  eventInfoList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)eventInfoList, 0LL);
  if ( !eventInfoList )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)eventInfoList, 1, 0LL);
  v21 = *((_QWORD *)v11 + 4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  EventNoticeControl__SetRemainTime(v21 - Time, this->fields.eventRemainLabel, v23);
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
  UILabel__SetCondensedScale((UILabel_o *)eventInfoList, 300, 0, 0LL);
  v24 = this->fields.eventDetailSprite;
  if ( !v24 )
    goto LABEL_46;
  eventInfoList = this->fields.eventRemainLabel;
  if ( !eventInfoList )
    goto LABEL_46;
  v25 = *((_DWORD *)eventInfoList + 42);
  if ( v24->fields.mWidth >= 320 )
  {
    v26 = (float)v25 * 0.8;
    if ( v26 == INFINITY )
      v25 = 0x80000000;
    else
      v25 = (int)v26;
  }
  UILabel__SetCondensedScale((UILabel_o *)eventInfoList, v25, 0, 0LL);
}


void __fastcall EventNoticeControl__SetRemainTime(int64_t remainTime, UILabel_o *label, const MethodInfo *method)
{
  unsigned __int64 v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  unsigned __int64 v24; // x21
  System_String_o *v25; // x20
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  int v30; // [xsp+Ch] [xbp-44h] BYREF
  int v31; // [xsp+18h] [xbp-38h] BYREF
  int v32; // [xsp+1Ch] [xbp-34h] BYREF
  UnityEngine_Color_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = remainTime;
  if ( (byte_4C259C8 & 1) == 0 )
  {
    sub_1C3B764(&int_TypeInfo, label);
    sub_1C3B764(&LocalizationManager_TypeInfo, v5);
    sub_1C3B764(&StringLiteral_5730/*"Easing type not implemented"*/, v6);
    sub_1C3B764(&StringLiteral_5846/*"Empty symbols submission token"*/, v7);
    sub_1C3B764(&StringLiteral_5847/*"EmptyObjectFromNull"*/, v8);
    sub_1C3B764(&StringLiteral_1/*""*/, v9);
    remainTime = sub_1C3B764(&StringLiteral_5759/*"Effect/BoxGacha"*/, v10);
    byte_4C259C8 = 1;
  }
  if ( !label )
    sub_1C3B9C0(remainTime, label);
  v33.fields.r = 0.0;
  v33.fields.g = 0.0;
  v33.fields.b = 0.0;
  v33.fields.a = 1.0;
  UILabel__set_effectColor(label, v33, 0LL);
  if ( (__int64)v4 < 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5846/*"Empty symbols submission token"*/, 0LL);
    goto LABEL_15;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5730/*"Easing type not implemented"*/, 0LL);
  v32 = v4 / 0x15180;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, v12, v13, v14);
  v16 = System_String__Format(v11, v15, 0LL);
  if ( (int)(v4 / 0x15180) <= 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5847/*"EmptyObjectFromNull"*/, 0LL);
    v31 = v4 / 0xE10;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31, v18, v19, v20);
    v16 = System_String__Format(v17, v21, 0LL);
    if ( (int)(v4 / 0xE10) <= 0 )
    {
      v24 = v4 / 0x3C;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5759/*"Effect/BoxGacha"*/, 0LL);
      v30 = v24;
      v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30, v26, v27, v28);
      v23 = System_String__Format(v25, v29, 0LL);
LABEL_15:
      v22 = v23;
      v34.fields.r = 1.0;
      v34.fields.g = 1.0;
      v34.fields.b = 1.0;
      v34.fields.a = 1.0;
      UILabel__set_effectColor(label, v34, 0LL);
      goto LABEL_16;
    }
  }
  v22 = v16;
LABEL_16:
  UILabel__set_text(label, v22, 0LL);
}


void __fastcall EventNoticeControl__UpdateEventNotice(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x20
  EventNoticeControl_o *Time; // x0
  const MethodInfo *v6; // x4
  _BOOL8 IsNeedToInfoUpdate; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v9; // x8
  const MethodInfo *v10; // x2

  if ( (byte_4C259C5 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    byte_4C259C5 = 1;
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
                         v6);
  if ( IsNeedToInfoUpdate )
  {
    v9 = this->fields.eventInfoList;
    this->fields.isNeedToUpdate = 0;
    if ( !v9 )
      sub_1C3B9C0(IsNeedToInfoUpdate, v8);
    if ( v9->fields._size )
    {
      if ( !EventNoticeControl__get_IsMultiple(this, v8) )
        EventNoticeControl__SetLabelAndSprite(this, 0, v10);
    }
    else
    {
      EventNoticeControl__InitLabelAndSprite(this, v8);
    }
  }
}


bool __fastcall EventNoticeControl__get_IsMultiple(EventNoticeControl_o *this, const MethodInfo *method)
{
  EventNoticeControl_o *v2; // x19
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8

  v2 = this;
  if ( (byte_4C259CB & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_1C3B764(
                                     &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__,
                                     method);
    byte_4C259CB = 1;
  }
  eventInfoList = v2->fields.eventInfoList;
  if ( !eventInfoList )
    sub_1C3B9C0(this, method);
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
  void *v11; // x1
  void *v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  void *v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  void *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_o *name; // x25
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  int8x16_t v48; // q0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  void *v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  void *v62; // x1
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  __int64 v77; // x8
  __int64 v78; // x26
  System_String_o **v79; // x29
  System_String_o *v80; // x24
  struct System_String_o *v81; // x24
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  System_String_o *v94; // x24
  struct System_String_o *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_String_o *v108; // x1
  void *v109; // x1

  if ( (byte_4C259CE & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_24236/*"vm.locked.size"*/, eventInfoData);
    sub_1C3B764(&StringLiteral_1/*""*/, v10);
    byte_4C259CE = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.spriteName, (int64_t)v11, (int64_t)method, v3, v4, v5, v6, v7);
  v12 = StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventName, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.overwriteSpriteName,
    (int64_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.overwriteText, (int64_t)v26, v27, v28, v29, v30, v31, v32);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.eventName, (int64_t)name, v35, v36, v37, v38, v39, v40);
  this->fields._EventName_k__BackingField = name;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)name, v42, v43, v44, v45, v46, v47);
  v48 = *(int8x16_t *)&eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  *(int8x16_t *)&this->fields._EndAt_k__BackingField = vextq_s8(v48, v48, 8uLL);
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.infoData,
    (int64_t)eventInfoData,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.overwriteSpriteName,
    (int64_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.overwriteText, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  eventEntity = eventInfoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_21;
  script = eventEntity->fields.script;
  if ( script && (v77 = *(_QWORD *)&script->max_length) != 0 )
  {
    if ( (int)v77 >= 1 )
    {
      v78 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v78 >= (unsigned int)v77 )
          sub_1C3B9C8(IsNullOrEmpty, v34);
        v79 = (System_String_o **)script->m_Items[v78];
        if ( !v79 )
          break;
        v80 = v79[7];
        if ( !System_String__IsNullOrEmpty(v80, 0LL) )
        {
          v81 = System_String__Concat_63368612((System_String_o *)StringLiteral_24236/*"vm.locked.size"*/, v80, 0LL);
          this->fields.spriteName = v81;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&this->fields.spriteName,
            (int64_t)v81,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87);
          this->fields._SpriteName_k__BackingField = v81;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&this->fields._SpriteName_k__BackingField,
            (int64_t)v81,
            v88,
            v89,
            v90,
            v91,
            v92,
            v93);
          this->fields._IsSprite_k__BackingField = 1;
        }
        v94 = v79[8];
        if ( !System_String__IsNullOrEmpty(v94, 0LL) )
        {
          v95 = System_String__Concat_63368612((System_String_o *)StringLiteral_24236/*"vm.locked.size"*/, v94, 0LL);
          this->fields.overwriteSpriteName = v95;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&this->fields.overwriteSpriteName,
            (int64_t)v95,
            v96,
            v97,
            v98,
            v99,
            v100,
            v101);
        }
        IsNullOrEmpty = System_String__IsNullOrEmpty(v79[9], 0LL);
        if ( !IsNullOrEmpty )
        {
          v108 = v79[9];
          this->fields.overwriteText = v108;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&this->fields.overwriteText,
            (int64_t)v108,
            v102,
            v103,
            v104,
            v105,
            v106,
            v107);
        }
        LODWORD(v77) = script->max_length;
        if ( (int)++v78 >= (int)v77 )
          goto LABEL_20;
      }
LABEL_21:
      sub_1C3B9C0(IsNullOrEmpty, v34);
    }
  }
  else
  {
    v109 = StringLiteral_1/*""*/;
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields._SpriteName_k__BackingField,
      (int64_t)v109,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v34);
}


void __fastcall EventNoticeControl_EventInfo__CheckCombineCampaignData(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  EventNoticeControl_EventInfo_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventInfoData_o *infoData; // x8
  struct EventEntity_o *eventEntity; // x8
  Il2CppObject *MasterData_object; // x21
  struct EventInfoData_o *v9; // x8
  EventNoticeControl_EventInfo_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t spriteName; // x1
  struct EventInfoData_o *v18; // x8
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  char v25; // w8
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  char v32; // w8
  int64_t v33; // x1
  int64_t eventName; // x1
  EventNoticeControl_EventInfo_Fields *p_fields; // x19
  int64_t overwriteSpriteName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4C259CF & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_1C3B764(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v3);
    sub_1C3B764(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    this = (EventNoticeControl_EventInfo_o *)sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4C259CF = 1;
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
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v9 = v2->fields.infoData;
  if ( !v9 || !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)EventCampaignMaster__getData(
                                             (EventCampaignMaster_o *)this,
                                             v9->fields.eventId,
                                             0LL);
  if ( this )
  {
    if ( !MasterData_object )
      goto LABEL_36;
    v10 = this;
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
                                                 (int32_t)v10->fields._EventName_k__BackingField,
                                                 HIDWORD(v10->fields._EventName_k__BackingField),
                                                 0LL);
      v2->fields._IsCampaignOpen_k__BackingField = (unsigned __int8)this & 1;
      if ( !entity )
        goto LABEL_36;
      if ( entity->fields.condType == 1 )
      {
        v2->fields._IsCondTypeQuestClear_k__BackingField = 1;
        v2->fields._IsSprite_k__BackingField = 0;
      }
      if ( ((unsigned __int8)this & 1) == 0 && !System_String__IsNullOrEmpty(v10->fields.spriteName, 0LL) )
      {
        spriteName = (int64_t)v10->fields.spriteName;
        v2->fields._EventName_k__BackingField = (struct System_String_o *)spriteName;
        sub_1C3B708((PartyOrganizationUtility_o *)&v2->fields, spriteName, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0LL)
    && System_String__IsNullOrEmpty(v2->fields.overwriteText, 0LL) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v18 = v2->fields.infoData) == 0LL)
    || !this )
  {
LABEL_36:
    sub_1C3B9C0(this, method);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v18->fields.targetIds, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v2->fields.spriteName, 0LL) )
    {
      v25 = 0;
    }
    else
    {
      v33 = (int64_t)v2->fields.spriteName;
      v2->fields._SpriteName_k__BackingField = (struct System_String_o *)v33;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v2->fields._SpriteName_k__BackingField,
        v33,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      v25 = 1;
    }
    eventName = (int64_t)v2->fields.eventName;
    v2->fields._EventName_k__BackingField = (struct System_String_o *)eventName;
    p_fields = &v2->fields;
    p_fields->_IsSprite_k__BackingField = v25;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0LL) )
  {
    v32 = 0;
  }
  else
  {
    overwriteSpriteName = (int64_t)v2->fields.overwriteSpriteName;
    v2->fields._SpriteName_k__BackingField = (struct System_String_o *)overwriteSpriteName;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&v2->fields._SpriteName_k__BackingField,
      overwriteSpriteName,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    v32 = 1;
  }
  overwriteText = v2->fields.overwriteText;
  v2->fields._IsSprite_k__BackingField = v32;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0LL) )
  {
    eventName = (int64_t)v2->fields.overwriteText;
    v2->fields._EventName_k__BackingField = (struct System_String_o *)eventName;
    p_fields = &v2->fields;
LABEL_34:
    sub_1C3B708((PartyOrganizationUtility_o *)p_fields, eventName, v19, v20, v21, v22, v23, v24);
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
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  sub_1C3B708(
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