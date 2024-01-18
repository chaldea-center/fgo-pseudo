void __fastcall EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4187878 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo, v3);
    byte_4187878 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventInfoList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsMultiple; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int v7; // w1

  if ( (byte_4187874 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method);
    byte_4187874 = 1;
  }
  IsMultiple = EventNoticeControl__get_IsMultiple(this, method);
  if ( IsMultiple )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_B2C434(IsMultiple, v4);
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
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v10; // x8
  int size; // w8
  EventNoticeControl_o *v12; // x0
  int32_t eventInfoIndex; // w1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187877 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, v6);
    byte_4187877 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v14,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventInfoList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v14,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v14.fields.current )
      sub_B2C434(0LL, v8);
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v14.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v14,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v10 = this->fields.eventInfoList;
  if ( !v10 )
LABEL_16:
    sub_B2C434(eventInfoList, method);
  size = v10->fields._size;
  if ( size == 1 )
  {
    v12 = this;
    eventInfoIndex = 0;
  }
  else
  {
    if ( size < 2 )
      return;
    eventInfoIndex = this->fields.eventInfoIndex;
    v12 = this;
  }
  EventNoticeControl__SetLabelAndSprite(v12, eventInfoIndex, v9);
}


bool __fastcall EventNoticeControl__GetIsNeedToInfoUpdate(
        EventNoticeControl_o *this,
        System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfolist,
        int64_t now,
        bool isNeedToUpdate,
        const MethodInfo *method)
{
  __int64 v8; // x1
  int32_t size; // w21
  __int64 v11; // x22
  unsigned int v12; // w8

  if ( (byte_4187872 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, eventInfolist);
    this = (EventNoticeControl_o *)sub_B2C35C(
                                     &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__,
                                     v8);
    byte_4187872 = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_18:
    sub_B2C434(this, eventInfolist);
  size = eventInfolist->fields._size;
  if ( size >= 1 )
  {
    v11 = 0LL;
    v12 = eventInfolist->fields._size;
    while ( 1 )
    {
      if ( v12 <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (EventNoticeControl_o *)eventInfolist->fields._items->m_Items[v11];
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
      if ( (int)v11 + 1 >= size )
        return 0;
      v12 = eventInfolist->fields._size;
      ++v11;
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

  if ( (byte_4187871 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187871 = 1;
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
    sub_B2C434(eventDetailLabel, method);
  }
  UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


void __fastcall EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x0
  const MethodInfo *v4; // x1

  if ( (byte_418786E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__, method);
    byte_418786E = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( eventInfoList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventInfoList,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
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
      sub_B2C434(eventDetailLabel, v5);
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
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x21
  EventNoticeControl_EventInfo_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_418786F & 1) == 0 )
  {
    sub_B2C35C(&EventNoticeControl_EventInfo_TypeInfo, data);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__, v5);
    byte_418786F = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  v7 = (EventNoticeControl_EventInfo_o *)sub_B2C42C(EventNoticeControl_EventInfo_TypeInfo);
  EventNoticeControl_EventInfo___ctor(v7, data, 0LL);
  if ( !eventInfoList )
    sub_B2C434(v8, v9);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v7,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
  this->fields.isNeedToUpdate = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetLabelAndSprite(
        EventNoticeControl_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventNoticeControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x21
  EventNoticeControl_EventInfo_o *v11; // x22
  UISprite_o *eventDetailSprite; // x20
  System_String_o *SpriteName_k__BackingField; // x21
  bool v14; // w20
  UIWidget_o *eventDetailLabel; // x20
  int v16; // s0
  struct UILabel_o *v20; // x8
  System_String_o *v21; // x0
  UILabel_o *v22; // x20
  System_String_o *v23; // x21
  Il2CppObject *RestTime2; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t EndAt_k__BackingField; // x20
  int64_t Time; // x0
  const MethodInfo *v28; // x2
  struct UISprite_o *v29; // x8
  int32_t v30; // w1
  float v31; // s0
  double v32; // d0
  UIWidget_o *v33; // x19
  int v34; // s0

  v4 = this;
  if ( (byte_4187875 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23539/*"{0}"*/, v8);
    this = (EventNoticeControl_o *)sub_B2C35C(&StringLiteral_13395/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, v9);
    byte_4187875 = 1;
  }
  eventInfoList = v4->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_52;
  if ( eventInfoList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v11 = eventInfoList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_52;
  if ( v11->fields._IsSprite_k__BackingField )
  {
    eventDetailSprite = v4->fields.eventDetailSprite;
    SpriteName_k__BackingField = v11->fields._SpriteName_k__BackingField;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    v14 = AtlasManager__SetEventUI(eventDetailSprite, SpriteName_k__BackingField, 0LL);
  }
  else
  {
    v14 = 0;
  }
  this = (EventNoticeControl_o *)v4->fields.eventDetailSprite;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v14, 0LL);
  this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !v14, 0LL);
  this = (EventNoticeControl_o *)v4->fields.eventDetailSprite;
  if ( !this )
    goto LABEL_52;
  ((void (__fastcall *)(EventNoticeControl_o *, void *))this->klass[2]._1.typeMetadataHandle)(
    this,
    this->klass[2]._1.interopData);
  this = (EventNoticeControl_o *)v4->fields.eventDetailLabel;
  if ( !this )
    goto LABEL_52;
  UILabel__set_text((UILabel_o *)this, v11->fields._EventName_k__BackingField, 0LL);
  eventDetailLabel = (UIWidget_o *)v4->fields.eventDetailLabel;
  *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
  if ( !eventDetailLabel )
    goto LABEL_52;
  UIWidget__set_color(eventDetailLabel, *(UnityEngine_Color_o *)&v16, 0LL);
  if ( v11->fields._IsCondTypeQuestClear_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (EventNoticeControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13395/*"TIME_REST_EVENT_BOARD_CAMPAIGN"*/, 0LL);
    v20 = v4->fields.eventDetailLabel;
    if ( v20 )
    {
      v21 = System_String__Format_44301068(
              (System_String_o *)this,
              (Il2CppObject *)v20->fields.mText,
              (Il2CppObject *)StringLiteral_23539/*"{0}"*/,
              0LL);
      v22 = v4->fields.eventDetailLabel;
      v23 = v21;
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v11->fields._EndAt_k__BackingField, -1LL, 0LL);
      this = (EventNoticeControl_o *)System_String__Format(v23, RestTime2, 0LL);
      if ( v22 )
      {
        UILabel__set_text(v22, (System_String_o *)this, 0LL);
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
              UILabel__set_applyGradient((UILabel_o *)this, v11->fields._IsCampaignOpen_k__BackingField, 0LL);
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
                    if ( v11->fields._IsCampaignOpen_k__BackingField )
                      return;
                    v33 = (UIWidget_o *)v4->fields.eventDetailLabel;
                    *(UnityEngine_Color_o *)&v34 = UnityEngine_Color__get_cyan(0LL);
                    if ( v33 )
                    {
                      UIWidget__set_color(v33, *(UnityEngine_Color_o *)&v34, 0LL);
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
    sub_B2C434(this, *(_QWORD *)&index);
  }
  this = (EventNoticeControl_o *)v4->fields.eventRemainLabel;
  if ( !this )
    goto LABEL_52;
  this = (EventNoticeControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  EndAt_k__BackingField = v11->fields._EndAt_k__BackingField;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  EventNoticeControl__SetRemainTime(EndAt_k__BackingField - Time, v4->fields.eventRemainLabel, v28);
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
  v29 = v4->fields.eventDetailSprite;
  if ( !v29 )
    goto LABEL_52;
  this = (EventNoticeControl_o *)v4->fields.eventRemainLabel;
  if ( !this )
    goto LABEL_52;
  v30 = (int32_t)this[2].fields.eventDetailSprite;
  if ( v29->fields.mWidth >= 320 )
  {
    v31 = (float)v30 * 0.8;
    if ( v31 == INFINITY )
      v32 = -v31;
    else
      v32 = v31;
    v30 = (int)v32;
  }
  UILabel__SetCondensedScale((UILabel_o *)this, v30, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetRemainTime(int64_t remainTime, UILabel_o *label, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // s0
  System_String_o *v17; // x21
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x0
  unsigned __int64 v24; // x21
  System_String_o *v25; // x20
  Il2CppObject *v26; // x0
  int v27; // [xsp+4h] [xbp-3Ch] BYREF
  int v28; // [xsp+8h] [xbp-38h] BYREF
  int v29; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4187873 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, label);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_5623/*"EVENT_DAY_TXT"*/, v6);
    sub_B2C35C(&StringLiteral_5734/*"EVENT_TIMEOVER_TXT"*/, v7);
    sub_B2C35C(&StringLiteral_5735/*"EVENT_TIME_TXT"*/, v8);
    sub_B2C35C(&StringLiteral_1/*""*/, v9);
    sub_B2C35C(&StringLiteral_5647/*"EVENT_MIN_TXT"*/, v10);
    byte_4187873 = 1;
  }
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_black(0LL);
  if ( !label )
    sub_B2C434(v11, v12);
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&v13, 0LL);
  if ( remainTime < 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5734/*"EVENT_TIMEOVER_TXT"*/, 0LL);
    goto LABEL_18;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_5623/*"EVENT_DAY_TXT"*/, 0LL);
  v29 = remainTime / 0x15180uLL;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v19 = System_String__Format(v17, v18, 0LL);
  if ( (int)(remainTime / 0x15180uLL) <= 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5735/*"EVENT_TIME_TXT"*/, 0LL);
    v28 = remainTime / 0xE10uLL;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
    v19 = System_String__Format(v20, v21, 0LL);
    if ( (int)(remainTime / 0xE10uLL) <= 0 )
    {
      v24 = remainTime / 0x3CuLL;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_5647/*"EVENT_MIN_TXT"*/, 0LL);
      v27 = v24;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
      v23 = System_String__Format(v25, v26, 0LL);
LABEL_18:
      v22 = v23;
      white = UnityEngine_Color__get_white(0LL);
      UILabel__set_effectColor(label, white, 0LL);
      goto LABEL_19;
    }
  }
  v22 = v19;
LABEL_19:
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

  if ( (byte_4187870 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    byte_4187870 = 1;
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
                         v6);
  if ( IsNeedToInfoUpdate )
  {
    v9 = this->fields.eventInfoList;
    this->fields.isNeedToUpdate = 0;
    if ( !v9 )
      sub_B2C434(IsNeedToInfoUpdate, v8);
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
  if ( (byte_4187876 & 1) == 0 )
  {
    this = (EventNoticeControl_o *)sub_B2C35C(
                                     &Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__,
                                     method);
    byte_4187876 = 1;
  }
  eventInfoList = v2->fields.eventInfoList;
  if ( !eventInfoList )
    sub_B2C434(this, method);
  return eventInfoList->fields._size > 1;
}


void __fastcall EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  void *v6; // x1
  void *v7; // x1
  void *v8; // x1
  void *v9; // x1
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x1
  struct System_String_o *name; // x25
  int64_t startAt; // x8
  void *v14; // x1
  void *v15; // x1
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  __int64 v18; // x8
  __int64 v19; // x26
  System_String_o **v20; // x23
  System_String_o *v21; // x24
  struct System_String_o *v22; // x24
  System_String_o *v23; // x24
  struct System_String_o *v24; // x0
  struct System_String_o *v25; // x1
  void *v26; // x1
  __int64 v27; // x0

  if ( (byte_4184B3E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22498/*"synthesis_notice_"*/, eventInfoData);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_4184B3E = 1;
  }
  v6 = StringLiteral_1/*""*/;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.spriteName, v6);
  v7 = StringLiteral_1/*""*/;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.eventName, v7);
  v8 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.overwriteSpriteName, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.overwriteText, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_B2C2F8(&this->fields.eventName, name);
  this->fields._EventName_k__BackingField = name;
  sub_B2C2F8(&this->fields, name);
  this->fields._EndAt_k__BackingField = eventInfoData->fields.endAt;
  startAt = eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  this->fields._StartAt_k__BackingField = startAt;
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_B2C2F8(&this->fields.infoData, eventInfoData);
  v14 = StringLiteral_1/*""*/;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.overwriteSpriteName, v14);
  v15 = StringLiteral_1/*""*/;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.overwriteText, v15);
  eventEntity = eventInfoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_21;
  script = eventEntity->fields.script;
  if ( script && (v18 = *(_QWORD *)&script->max_length) != 0 )
  {
    if ( (int)v18 >= 1 )
    {
      v19 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v19 >= (unsigned int)v18 )
        {
          v27 = sub_B2C460(IsNullOrEmpty);
          sub_B2C400(v27, 0LL);
        }
        v20 = (System_String_o **)script->m_Items[v19];
        if ( !v20 )
          break;
        v21 = v20[7];
        if ( !System_String__IsNullOrEmpty(v21, 0LL) )
        {
          v22 = System_String__Concat_44305532((System_String_o *)StringLiteral_22498/*"synthesis_notice_"*/, v21, 0LL);
          this->fields.spriteName = v22;
          sub_B2C2F8(&this->fields.spriteName, v22);
          this->fields._SpriteName_k__BackingField = v22;
          sub_B2C2F8(&this->fields._SpriteName_k__BackingField, v22);
          this->fields._IsSprite_k__BackingField = 1;
        }
        v23 = v20[8];
        if ( !System_String__IsNullOrEmpty(v23, 0LL) )
        {
          v24 = System_String__Concat_44305532((System_String_o *)StringLiteral_22498/*"synthesis_notice_"*/, v23, 0LL);
          this->fields.overwriteSpriteName = v24;
          sub_B2C2F8(&this->fields.overwriteSpriteName, v24);
        }
        IsNullOrEmpty = System_String__IsNullOrEmpty(v20[9], 0LL);
        if ( !IsNullOrEmpty )
        {
          v25 = v20[9];
          this->fields.overwriteText = v25;
          sub_B2C2F8(&this->fields.overwriteText, v25);
        }
        LODWORD(v18) = script->max_length;
        if ( (int)++v19 >= (int)v18 )
          goto LABEL_20;
      }
LABEL_21:
      sub_B2C434(IsNullOrEmpty, v11);
    }
  }
  else
  {
    v26 = StringLiteral_1/*""*/;
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B2C2F8(&this->fields._SpriteName_k__BackingField, v26);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v11);
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
  EventCampaignReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  struct EventInfoData_o *v9; // x8
  EventNoticeControl_EventInfo_o *v10; // x20
  struct System_String_o *spriteName; // x1
  struct EventInfoData_o *v12; // x8
  char v13; // w8
  char v14; // w8
  struct System_String_o *v15; // x1
  struct System_String_o *eventName; // x1
  struct System_String_o *overwriteSpriteName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4184B3F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    this = (EventNoticeControl_EventInfo_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4184B3F = 1;
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
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)this,
                                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v9 = v2->fields.infoData;
  if ( !v9 || !this )
    goto LABEL_36;
  this = (EventNoticeControl_EventInfo_o *)EventCampaignMaster__getData(
                                             (EventCampaignMaster_o *)this,
                                             v9->fields.eventId,
                                             0LL);
  if ( this )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_36;
    v10 = this;
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
        spriteName = v10->fields.spriteName;
        v2->fields._EventName_k__BackingField = spriteName;
        sub_B2C2F8(&v2->fields, spriteName);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0LL)
    && System_String__IsNullOrEmpty(v2->fields.overwriteText, 0LL) )
  {
    return;
  }
  this = (EventNoticeControl_EventInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (this = (EventNoticeControl_EventInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v12 = v2->fields.infoData) == 0LL)
    || !this )
  {
LABEL_36:
    sub_B2C434(this, method);
  }
  if ( UserServantCollectionMaster__IsServantHaving((UserServantCollectionMaster_o *)this, v12->fields.targetIds, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(v2->fields.spriteName, 0LL) )
    {
      v13 = 0;
    }
    else
    {
      v15 = v2->fields.spriteName;
      v2->fields._SpriteName_k__BackingField = v15;
      sub_B2C2F8(&v2->fields._SpriteName_k__BackingField, v15);
      v13 = 1;
    }
    eventName = v2->fields.eventName;
    v2->fields._IsSprite_k__BackingField = v13;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(v2->fields.overwriteSpriteName, 0LL) )
  {
    v14 = 0;
  }
  else
  {
    overwriteSpriteName = v2->fields.overwriteSpriteName;
    v2->fields._SpriteName_k__BackingField = overwriteSpriteName;
    sub_B2C2F8(&v2->fields._SpriteName_k__BackingField, overwriteSpriteName);
    v14 = 1;
  }
  overwriteText = v2->fields.overwriteText;
  v2->fields._IsSprite_k__BackingField = v14;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0LL) )
  {
    eventName = v2->fields.overwriteText;
LABEL_34:
    v2->fields._EventName_k__BackingField = eventName;
    sub_B2C2F8(&v2->fields, eventName);
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
  sub_B2C2F8(&this->fields, value);
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
  sub_B2C2F8(&this->fields._SpriteName_k__BackingField, value);
}


void __fastcall EventNoticeControl_EventInfo__set_StartAt(
        EventNoticeControl_EventInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._StartAt_k__BackingField = value;
}