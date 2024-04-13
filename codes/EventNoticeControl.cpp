void __fastcall EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E9083 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo, v5, v6, v7);
    byte_42E9083 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventInfoList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _BOOL8 IsMultiple; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int v9; // w1

  if ( (byte_42E907F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E907F = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_B5D69C(IsMultiple, v6);
    v9 = (this->fields.eventInfoIndex + 1) % eventInfoList->fields._size;
    this->fields.eventInfoIndex = v9;
    EventNoticeControl__SetLabelAndSprite(this, v9, v7);
  }
}


void __fastcall EventNoticeControl__CheckCombineCampaignData(EventNoticeControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v20; // x8
  int size; // w8
  EventNoticeControl_o *v22; // x0
  int32_t eventInfoIndex; // w1
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E9082 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, v14, v15, v16);
    byte_42E9082 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v24,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v24,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v24.fields.current )
      sub_B5D69C(0LL, v18);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v24.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v24,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v20 = this->fields.eventInfoList;
  if ( !v20 )
LABEL_16:
    sub_B5D69C(eventInfoList, method);
  size = v20->fields._size;
  if ( size == 1 )
  {
    v22 = this;
    eventInfoIndex = 0;
  }
  else
  {
    if ( size < 2 )
      return;
    eventInfoIndex = this->fields.eventInfoIndex;
    v22 = this;
  }
  EventNoticeControl__SetLabelAndSprite(v22, eventInfoIndex, v19);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall EventNoticeControl__GetIsNeedToInfoUpdate(
        EventNoticeControl_o *this,
        System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfolist,
        int64_t now,
        bool isNeedToUpdate,
        const MethodInfo *method)
{
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t size; // w21
  __int64 v13; // x22
  unsigned int v14; // w8

  if ( (byte_42E907D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__,
      (_DWORD)eventInfolist,
      now,
      isNeedToUpdate);
    this = (EventNoticeControl_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__,
                                     v8,
                                     v9,
                                     v10);
    byte_42E907D = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_18:
    sub_B5D69C(this, eventInfolist);
  size = eventInfolist->fields._size;
  if ( size >= 1 )
  {
    v13 = 0LL;
    v14 = eventInfolist->fields._size;
    while ( 1 )
    {
      if ( v14 <= (unsigned int)v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (EventNoticeControl_o *)eventInfolist->fields._items->m_Items[v13];
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
      if ( (int)v13 + 1 >= size )
        return 0;
      v14 = eventInfolist->fields._size;
      ++v13;
    }
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__InitLabelAndSprite(EventNoticeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *eventDetailLabel; // x0
  UIWidget_o *v6; // x20
  int v7; // s0

  if ( (byte_42E907C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E907C = 1;
  }
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel
    || (UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        v6 = (UIWidget_o *)this->fields.eventDetailLabel,
        *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL),
        !v6)
    || (UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v7, 0LL),
        (eventDetailLabel = (UILabel_o *)this->fields.eventDetailSprite) == 0LL)
    || (UISprite__set_spriteName((UISprite_o *)eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (eventDetailLabel = this->fields.eventRemainLabel) == 0LL) )
  {
    sub_B5D69C(eventDetailLabel, method);
  }
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42E9079 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__, (_DWORD)method, v2, v3);
    byte_42E9079 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( eventInfoList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventInfoList,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
    EventNoticeControl__InitLabelAndSprite(this, v6);
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
      sub_B5D69C(eventDetailLabel, v5);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x21
  EventNoticeControl_EventInfo_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E907A & 1) == 0 )
  {
    sub_B5D5C4(&EventNoticeControl_EventInfo_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__, v6, v7, v8);
    byte_42E907A = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  v10 = (EventNoticeControl_EventInfo_o *)sub_B5D694(EventNoticeControl_EventInfo_TypeInfo);
  EventNoticeControl_EventInfo___ctor(v10, data, 0LL);
  if ( !eventInfoList )
    sub_B5D69C(v11, v12);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
  this->fields.isNeedToUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetLabelAndSprite(
        EventNoticeControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventNoticeControl_o *v5; // x19
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
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x21
  EventNoticeControl_EventInfo_o *v22; // x22
  UISprite_o *eventDetailSprite; // x20
  System_String_o *SpriteName_k__BackingField; // x21
  bool v25; // w20
  UIWidget_o *eventDetailLabel; // x20
  int v27; // s0
  struct UILabel_o *v31; // x8
  System_String_o *v32; // x0
  UILabel_o *v33; // x20
  System_String_o *v34; // x21
  Il2CppObject *RestTime2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t EndAt_k__BackingField; // x20
  int64_t Time; // x0
  const MethodInfo *v39; // x2
  struct UISprite_o *v40; // x8
  int32_t v41; // w1
  float v42; // s0
  double v43; // d0
  UIWidget_o *v44; // x19
  int v45; // s0

  v5 = this;
  if ( (byte_42E9080 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, index, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_23850/*"{0}"*/, v15, v16, v17);
    this = (EventNoticeControl_o *)sub_B5D5C4(&StringLiteral_13551/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, v18, v19, v20);
    byte_42E9080 = 1;
  }
  eventInfoList = v5->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_52;
  if ( eventInfoList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v22 = eventInfoList->fields._items->m_Items[index];
  if ( !v22 )
    goto LABEL_52;
  if ( v22->fields._IsSprite_k__BackingField )
  {
    eventDetailSprite = v5->fields.eventDetailSprite;
    SpriteName_k__BackingField = v22->fields._SpriteName_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v25 = AtlasManager__SetEventUI(eventDetailSprite, SpriteName_k__BackingField, 0LL);
  }
  else
  {
    v25 = 0;
  }
  this = (EventNoticeControl_o *)v5->fields.eventDetailSprite;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v25, 0LL);
  this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v25, 0LL);
  this = (EventNoticeControl_o *)v5->fields.eventDetailSprite;
  if ( !this )
    goto LABEL_52;
  ((void (__fastcall *)(EventNoticeControl_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__set_text((UILabel_o *)this, v22->fields._EventName_k__BackingField, 0LL);
  eventDetailLabel = (UIWidget_o *)v5->fields.eventDetailLabel;
  *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
  if ( !eventDetailLabel )
    goto LABEL_52;
  UIWidget__set_color(eventDetailLabel, *(UnityEngine_Color_o *)&v27, 0LL);
  if ( v22->fields._IsCondTypeQuestClear_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventNoticeControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13551/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, 0LL);
    v31 = v5->fields.eventDetailLabel;
    if ( v31 )
    {
      v32 = System_String__Format_44573324(
              (System_String_o *)this,
              (Il2CppObject *)v31->fields.mText,
              (Il2CppObject *)StringLiteral_23850/*"{0}"*/,
              0LL);
      v33 = v5->fields.eventDetailLabel;
      v34 = v32;
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v22->fields._EndAt_k__BackingField, -1LL, 0LL);
      this = (EventNoticeControl_o *)System_String__Format(v34, RestTime2, 0LL);
      if ( v33 )
      {
        UILabel__set_text(v33, (System_String_o *)this, 0LL);
        this = (EventNoticeControl_o *)v5->fields.eventRemainLabel;
        if ( this )
        {
          this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
            this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
            if ( this )
            {
              UILabel__set_applyGradient((UILabel_o *)this, v22->fields._IsCampaignOpen_k__BackingField, 0LL);
              this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
              if ( this )
              {
                gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                GameObjectExtensions__SetLocalPositionX(gameObject, -290.0, 0LL);
                this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
                if ( this )
                {
                  UILabel__set_fontSize((UILabel_o *)this, 18, 0LL);
                  this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
                  if ( this )
                  {
                    UILabel__SetCondensedScale((UILabel_o *)this, 430, 0LL);
                    if ( v22->fields._IsCampaignOpen_k__BackingField )
                      return;
                    v44 = (UIWidget_o *)v5->fields.eventDetailLabel;
                    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_cyan(0LL);
                    if ( v44 )
                    {
                      UIWidget__set_color(v44, *(UnityEngine_Color_o *)&v45, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  this = (EventNoticeControl_o *)v5->fields.eventRemainLabel;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  EndAt_k__BackingField = v22->fields._EndAt_k__BackingField;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  EventNoticeControl__SetRemainTime(EndAt_k__BackingField - Time, v5->fields.eventRemainLabel, v39);
  this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__set_applyGradient((UILabel_o *)this, 1, 0LL);
  this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__set_fontSize((UILabel_o *)this, 20, 0LL);
  this = (EventNoticeControl_o *)v5->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__SetCondensedScale((UILabel_o *)this, 300, 0LL);
  v40 = v5->fields.eventDetailSprite;
  if ( !v40 )
    goto LABEL_52;
  this = (EventNoticeControl_o *)v5->fields.eventRemainLabel;
  if ( !this )
    goto LABEL_52;
  v41 = (int32_t)this[2].fields.eventDetailSprite;
  if ( v40->fields.mWidth >= 320 )
  {
    v42 = (float)v41 * 0.8;
    if ( v42 == INFINITY )
      v43 = -v42;
    else
      v43 = v42;
    v41 = (int)v43;
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetRemainTime(int64_t remainTime, UILabel_o *label, const MethodInfo *method)
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
  __int64 v24; // x0
  __int64 v25; // x1
  int v26; // s0
  System_String_o *v30; // x21
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x21
  Il2CppObject *v34; // x0
  System_String_o *v35; // x21
  System_String_o *v36; // x0
  unsigned __int64 v37; // x21
  System_String_o *v38; // x20
  Il2CppObject *v39; // x0
  int v40; // [xsp+4h] [xbp-3Ch] BYREF
  int v41; // [xsp+8h] [xbp-38h] BYREF
  int v42; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E907E & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)label, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_5700/*"EVENT_DAY_TXT"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5811/*"EVENT_TIMEOVER_TXT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_5812/*"EVENT_TIME_TXT"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_5724/*"EVENT_MIN_TXT"*/, v21, v22, v23);
    byte_42E907E = 1;
  }
  *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_black(0LL);
  if ( !label )
    sub_B5D69C(v24, v25);
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&v26, 0LL);
  if ( remainTime < 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v36 = LocalizationManager__Get((System_String_o *)StringLiteral_5811/*"EVENT_TIMEOVER_TXT"*/, 0LL);
    goto LABEL_18;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_5700/*"EVENT_DAY_TXT"*/, 0LL);
  v42 = remainTime / 0x15180uLL;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42);
  v32 = System_String__Format(v30, v31, 0LL);
  if ( (int)(remainTime / 0x15180uLL) <= 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5812/*"EVENT_TIME_TXT"*/, 0LL);
    v41 = remainTime / 0xE10uLL;
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v41);
    v32 = System_String__Format(v33, v34, 0LL);
    if ( (int)(remainTime / 0xE10uLL) <= 0 )
    {
      v37 = remainTime / 0x3CuLL;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5724/*"EVENT_MIN_TXT"*/, 0LL);
      v40 = v37;
      v39 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v40);
      v36 = System_String__Format(v38, v39, 0LL);
LABEL_18:
      v35 = v36;
      white = UnityEngine_Color__get_white(0LL);
      UILabel__set_effectColor(label, white, 0LL);
      goto LABEL_19;
    }
  }
  v35 = v32;
LABEL_19:
  UILabel__set_text(label, v35, 0LL);
}


void __fastcall EventNoticeControl__UpdateEventNotice(EventNoticeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x20
  EventNoticeControl_o *Time; // x0
  const MethodInfo *v10; // x4
  _BOOL8 IsNeedToInfoUpdate; // x0
  const MethodInfo *v12; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v13; // x8
  const MethodInfo *v14; // x2

  if ( (byte_42E907B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    byte_42E907B = 1;
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
                         v10);
  if ( IsNeedToInfoUpdate )
  {
    v13 = this->fields.eventInfoList;
    this->fields.isNeedToUpdate = 0;
    if ( !v13 )
      sub_B5D69C(IsNeedToInfoUpdate, v12);
    if ( v13->fields._size )
    {
      if ( !EventNoticeControl__get_IsMultiple(this, v12) )
        EventNoticeControl__SetLabelAndSprite(this, 0, v14);
    }
    else
    {
      EventNoticeControl__InitLabelAndSprite(this, v12);
    }
  }
}


bool __fastcall EventNoticeControl__get_IsMultiple(EventNoticeControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventNoticeControl_o *v4; // x19
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8

  v4 = this;
  if ( (byte_42E9081 & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__,
                                     (_DWORD)method,
                                     v2,
                                     v3);
    byte_42E9081 = 1;
  }
  eventInfoList = v4->fields.eventInfoList;
  if ( !eventInfoList )
    sub_B5D69C(this, method);
  return eventInfoList->fields._size > 1;
}


void __fastcall EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v10; // x1
  struct System_String_o *name; // x25
  int64_t startAt; // x8
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  __int64 v15; // x8
  __int64 v16; // x26
  System_String_o **v17; // x23
  System_String_o *v18; // x24
  struct System_String_o *v19; // x24
  System_String_o *v20; // x24
  __int64 v21; // x0

  if ( (byte_42E6579 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22803/*"synthesis_notice_"*/, (_DWORD)eventInfoData, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E6579 = 1;
  }
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.spriteName);
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.eventName);
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.overwriteSpriteName);
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.overwriteText);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_B5D560(&this->fields.eventName);
  this->fields._EventName_k__BackingField = name;
  sub_B5D560(&this->fields);
  this->fields._EndAt_k__BackingField = eventInfoData->fields.endAt;
  startAt = eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  this->fields._StartAt_k__BackingField = startAt;
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_B5D560(&this->fields.infoData);
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.overwriteSpriteName);
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.overwriteText);
  eventEntity = eventInfoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_21;
  script = eventEntity->fields.script;
  if ( script && (v15 = *(_QWORD *)&script->max_length) != 0 )
  {
    if ( (int)v15 >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= (unsigned int)v15 )
        {
          v21 = sub_B5D6C8(IsNullOrEmpty);
          sub_B5D668(v21, 0LL);
        }
        v17 = (System_String_o **)script->m_Items[v16];
        if ( !v17 )
          break;
        v18 = v17[7];
        if ( !System_String__IsNullOrEmpty(v18, 0LL) )
        {
          v19 = System_String__Concat_44577788((System_String_o *)StringLiteral_22803/*"synthesis_notice_"*/, v18, 0LL);
          this->fields.spriteName = v19;
          sub_B5D560(&this->fields.spriteName);
          this->fields._SpriteName_k__BackingField = v19;
          sub_B5D560(&this->fields._SpriteName_k__BackingField);
          this->fields._IsSprite_k__BackingField = 1;
        }
        v20 = v17[8];
        if ( !System_String__IsNullOrEmpty(v20, 0LL) )
        {
          this->fields.overwriteSpriteName = System_String__Concat_44577788(
                                               (System_String_o *)StringLiteral_22803/*"synthesis_notice_"*/,
                                               v20,
                                               0LL);
          sub_B5D560(&this->fields.overwriteSpriteName);
        }
        IsNullOrEmpty = System_String__IsNullOrEmpty(v17[9], 0LL);
        if ( !IsNullOrEmpty )
        {
          this->fields.overwriteText = v17[9];
          sub_B5D560(&this->fields.overwriteText);
        }
        LODWORD(v15) = script->max_length;
        if ( (int)++v16 >= (int)v15 )
          goto LABEL_20;
      }
LABEL_21:
      sub_B5D69C(IsNullOrEmpty, v10);
    }
  }
  else
  {
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560(&this->fields._SpriteName_k__BackingField);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v10);
}


void __fastcall EventNoticeControl_EventInfo__CheckCombineCampaignData(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  EventNoticeControl_EventInfo_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct EventInfoData_o *infoData; // x8
  struct EventEntity_o *eventEntity; // x8
  EventCampaignReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct EventInfoData_o *v17; // x8
  EventNoticeControl_EventInfo_o *v18; // x20
  struct EventInfoData_o *v19; // x8
  char v20; // w8
  char v21; // w8
  struct System_String_o *eventName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_42E657A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v8, v9, v10);
    this = (EventNoticeControl_EventInfo_o *)sub_B5D5C4(
                                               &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                               v11,
                                               v12,
                                               v13);
    byte_42E657A = 1;
  }
  entity = 0LL;
  infoData = v4->fields.infoData;
  if ( !infoData )
    goto LABEL_36;
  eventEntity = infoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_36;
  if ( eventEntity->fields.type != 5 )
    return;
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)this,
                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v17 = v4->fields.infoData;
  if ( !v17 || !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)EventCampaignMaster__getData(
                                             (EventCampaignMaster_o *)this,
                                             v17->fields.eventId,
                                             0LL);
  if ( this )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_36;
    v18 = this;
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
                                                 (int32_t)v18->fields._EventName_k__BackingField,
                                                 HIDWORD(v18->fields._EventName_k__BackingField),
                                                 0LL);
      v4->fields._IsCampaignOpen_k__BackingField = (unsigned __int8)this & 1;
      if ( !entity )
        goto LABEL_36;
      if ( entity->fields.condType == 1 )
      {
        v4->fields._IsCondTypeQuestClear_k__BackingField = 1;
        v4->fields._IsSprite_k__BackingField = 0;
      }
      if ( ((unsigned __int8)this & 1) == 0 && !System_String__IsNullOrEmpty(v18->fields.spriteName, 0LL) )
      {
        v4->fields._EventName_k__BackingField = v18->fields.spriteName;
        sub_B5D560(&v4->fields);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v4->fields.overwriteSpriteName, 0LL)
    && System_String__IsNullOrEmpty(v4->fields.overwriteText, 0LL) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v19 = v4->fields.infoData) == 0LL)
    || !this )
  {
LABEL_36:
    sub_B5D69C(this, method);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v19->fields.targetIds, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v4->fields.spriteName, 0LL) )
    {
      v20 = 0;
    }
    else
    {
      v4->fields._SpriteName_k__BackingField = v4->fields.spriteName;
      sub_B5D560(&v4->fields._SpriteName_k__BackingField);
      v20 = 1;
    }
    eventName = v4->fields.eventName;
    v4->fields._IsSprite_k__BackingField = v20;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v4->fields.overwriteSpriteName, 0LL) )
  {
    v21 = 0;
  }
  else
  {
    v4->fields._SpriteName_k__BackingField = v4->fields.overwriteSpriteName;
    sub_B5D560(&v4->fields._SpriteName_k__BackingField);
    v21 = 1;
  }
  overwriteText = v4->fields.overwriteText;
  v4->fields._IsSprite_k__BackingField = v21;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0LL) )
  {
    eventName = v4->fields.overwriteText;
LABEL_34:
    v4->fields._EventName_k__BackingField = eventName;
    sub_B5D560(&v4->fields);
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
  sub_B5D560(&this->fields);
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
  sub_B5D560(&this->fields._SpriteName_k__BackingField);
}


void __fastcall EventNoticeControl_EventInfo__set_StartAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._StartAt_k__BackingField = value;
}