void __fastcall EventNoticeControl___ctor(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FABEE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo, v6);
    byte_40FABEE = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_EventNoticeControl_EventInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo___ctor__);
  this->fields.eventInfoList = (struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventInfoList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventNoticeControl__ChangeEventInfo(EventNoticeControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8
  int v5; // w1

  if ( (byte_40FABEA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method);
    byte_40FABEA = 1;
  }
  if ( EventNoticeControl__get_IsMultiple(this, method) )
  {
    eventInfoList = this->fields.eventInfoList;
    if ( !eventInfoList )
      sub_B170D4();
    v5 = (this->fields.eventInfoIndex + 1) % eventInfoList->fields._size;
    this->fields.eventInfoIndex = v5;
    EventNoticeControl__SetLabelAndSprite(this, v5, v3);
  }
}


void __fastcall EventNoticeControl__CheckCombineCampaignData(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x0
  const MethodInfo *v8; // x2
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v9; // x8
  int size; // w8
  EventNoticeControl_o *v11; // x0
  int32_t eventInfoIndex; // w1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FABED & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, v6);
    byte_40FABED = 1;
  }
  memset(&v13, 0, sizeof(v13));
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v13,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)eventInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v13,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__MoveNext__) )
  {
    if ( !v13.fields.current )
      sub_B170D4();
    EventNoticeControl_EventInfo__CheckCombineCampaignData((EventNoticeControl_EventInfo_o *)v13.fields.current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v13,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventNoticeControl_EventInfo__Dispose__);
  v9 = this->fields.eventInfoList;
  if ( !v9 )
LABEL_16:
    sub_B170D4();
  size = v9->fields._size;
  if ( size == 1 )
  {
    v11 = this;
    eventInfoIndex = 0;
  }
  else
  {
    if ( size < 2 )
      return;
    eventInfoIndex = this->fields.eventInfoIndex;
    v11 = this;
  }
  EventNoticeControl__SetLabelAndSprite(v11, eventInfoIndex, v8);
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
  EventNoticeControl_EventInfo_o *v13; // x0

  if ( (byte_40FABE8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, eventInfolist);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__, v8);
    byte_40FABE8 = 1;
  }
  if ( isNeedToUpdate )
    return 1;
  if ( !eventInfolist )
LABEL_18:
    sub_B170D4();
  size = eventInfolist->fields._size;
  if ( size >= 1 )
  {
    v11 = 0LL;
    v12 = eventInfolist->fields._size;
    while ( 1 )
    {
      if ( v12 <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = eventInfolist->fields._items->m_Items[v11];
      if ( !v13 )
        goto LABEL_18;
      if ( !v13->fields._IsTimeOver_k__BackingField )
      {
        if ( v13->fields._EndAt_k__BackingField < now )
        {
          EventNoticeControl_EventInfo__SetIsTimeOver(v13, 0LL);
          return 1;
        }
        if ( v13->fields._StartAt_k__BackingField <= now )
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
  UISprite_o *eventDetailSprite; // x0
  UILabel_o *eventRemainLabel; // x0

  if ( (byte_40FABE7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FABE7 = 1;
  }
  eventDetailLabel = this->fields.eventDetailLabel;
  if ( !eventDetailLabel
    || (UILabel__set_text(eventDetailLabel, (System_String_o *)StringLiteral_1, 0LL),
        v4 = (UIWidget_o *)this->fields.eventDetailLabel,
        *(UnityEngine_Color_o *)&v5 = UnityEngine_Color__get_white(0LL),
        !v4)
    || (UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v5, 0LL),
        (eventDetailSprite = this->fields.eventDetailSprite) == 0LL)
    || (UISprite__set_spriteName(eventDetailSprite, (System_String_o *)StringLiteral_1, 0LL),
        (eventRemainLabel = this->fields.eventRemainLabel) == 0LL) )
  {
    sub_B170D4();
  }
  UILabel__set_text(eventRemainLabel, (System_String_o *)StringLiteral_1, 0LL);
}


void __fastcall EventNoticeControl__Initialize(EventNoticeControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x0
  const MethodInfo *v4; // x1

  if ( (byte_40FABE4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__, method);
    byte_40FABE4 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( eventInfoList )
  {
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)eventInfoList,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Clear__);
    EventNoticeControl__InitLabelAndSprite(this, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventNoticeControl__SetAlpha(EventNoticeControl_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  struct UILabel_o *eventDetailLabel; // x0
  struct UISprite_o *eventDetailSprite; // x0
  struct UILabel_o *eventRemainLabel; // x0

  v3 = *(long double *)&alpha;
  if ( EventNoticeControl__get_IsMultiple(this, method) )
  {
    eventDetailLabel = this->fields.eventDetailLabel;
    if ( !eventDetailLabel
      || (((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, long double))eventDetailLabel->klass->vtable._8_set_alpha.method)(
            eventDetailLabel,
            eventDetailLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
            v3),
          (eventDetailSprite = this->fields.eventDetailSprite) == 0LL)
      || (((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, long double))eventDetailSprite->klass->vtable._8_set_alpha.method)(
            eventDetailSprite,
            eventDetailSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
            v3),
          (eventRemainLabel = this->fields.eventRemainLabel) == 0LL) )
    {
      sub_B170D4();
    }
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer, long double))eventRemainLabel->klass->vtable._8_set_alpha.method)(
      eventRemainLabel,
      eventRemainLabel->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
}


void __fastcall EventNoticeControl__SetCombineEventData(
        EventNoticeControl_o *this,
        EventInfoData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x21
  EventNoticeControl_EventInfo_o *v9; // x22

  if ( (byte_40FABE5 & 1) == 0 )
  {
    sub_B16FFC(&EventNoticeControl_EventInfo_TypeInfo, data);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__, v7);
    byte_40FABE5 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  v9 = (EventNoticeControl_EventInfo_o *)sub_B170CC(EventNoticeControl_EventInfo_TypeInfo, data, method, v3, v4);
  EventNoticeControl_EventInfo___ctor(v9, data, 0LL);
  if ( !eventInfoList )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)eventInfoList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__Add__);
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
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x21
  EventNoticeControl_EventInfo_o *v11; // x22
  UISprite_o *eventDetailSprite; // x20
  System_String_o *SpriteName_k__BackingField; // x21
  bool v14; // w20
  UnityEngine_Component_o *v15; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *eventDetailLabel; // x0
  UnityEngine_GameObject_o *v18; // x0
  struct UISprite_o *v19; // x0
  UILabel_o *v20; // x0
  UIWidget_o *v21; // x20
  int v22; // s0
  System_String_o *v26; // x0
  struct UILabel_o *v27; // x8
  System_String_o *v28; // x0
  UILabel_o *v29; // x20
  System_String_o *v30; // x21
  Il2CppObject *RestTime2; // x0
  System_String_o *v32; // x0
  UnityEngine_Component_o *eventRemainLabel; // x0
  UnityEngine_GameObject_o *v34; // x0
  UILabel_o *v35; // x0
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UILabel_o *v38; // x0
  UILabel_o *v39; // x0
  UnityEngine_Component_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  int64_t EndAt_k__BackingField; // x20
  int64_t Time; // x0
  const MethodInfo *v44; // x2
  UILabel_o *v45; // x0
  UILabel_o *v46; // x0
  UILabel_o *v47; // x0
  struct UISprite_o *v48; // x8
  struct UILabel_o *v49; // x0
  int32_t mWidth; // w1
  float v51; // s0
  double v52; // d0
  UIWidget_o *v53; // x19
  int v54; // s0

  if ( (byte_40FABEB & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Item__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_23445, v8);
    sub_B16FFC(&StringLiteral_13339, v9);
    byte_40FABEB = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    goto LABEL_52;
  if ( eventInfoList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v11 = eventInfoList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_52;
  if ( v11->fields._IsSprite_k__BackingField )
  {
    eventDetailSprite = this->fields.eventDetailSprite;
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
  v15 = (UnityEngine_Component_o *)this->fields.eventDetailSprite;
  if ( !v15 )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(v15, 0LL);
  if ( !gameObject )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(gameObject, v14, 0LL);
  eventDetailLabel = (UnityEngine_Component_o *)this->fields.eventDetailLabel;
  if ( !eventDetailLabel )
    goto LABEL_52;
  v18 = UnityEngine_Component__get_gameObject(eventDetailLabel, 0LL);
  if ( !v18 )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(v18, !v14, 0LL);
  v19 = this->fields.eventDetailSprite;
  if ( !v19 )
    goto LABEL_52;
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v19->klass->vtable._33_MakePixelPerfect.method)(
    v19,
    v19->klass->vtable._34_get_minWidth.methodPtr);
  v20 = this->fields.eventDetailLabel;
  if ( !v20 )
    goto LABEL_52;
  UILabel__set_text(v20, v11->fields._EventName_k__BackingField, 0LL);
  v21 = (UIWidget_o *)this->fields.eventDetailLabel;
  *(UnityEngine_Color_o *)&v22 = UnityEngine_Color__get_white(0LL);
  if ( !v21 )
    goto LABEL_52;
  UIWidget__set_color(v21, *(UnityEngine_Color_o *)&v22, 0LL);
  if ( v11->fields._IsCondTypeQuestClear_k__BackingField )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_13339, 0LL);
    v27 = this->fields.eventDetailLabel;
    if ( v27 )
    {
      v28 = System_String__Format_43739268(
              v26,
              (Il2CppObject *)v27->fields.mText,
              (Il2CppObject *)StringLiteral_23445,
              0LL);
      v29 = this->fields.eventDetailLabel;
      v30 = v28;
      RestTime2 = (Il2CppObject *)LocalizationManager__GetRestTime2(v11->fields._EndAt_k__BackingField, -1LL, 0LL);
      v32 = System_String__Format(v30, RestTime2, 0LL);
      if ( v29 )
      {
        UILabel__set_text(v29, v32, 0LL);
        eventRemainLabel = (UnityEngine_Component_o *)this->fields.eventRemainLabel;
        if ( eventRemainLabel )
        {
          v34 = UnityEngine_Component__get_gameObject(eventRemainLabel, 0LL);
          if ( v34 )
          {
            UnityEngine_GameObject__SetActive(v34, 0, 0LL);
            v35 = this->fields.eventDetailLabel;
            if ( v35 )
            {
              UILabel__set_applyGradient(v35, v11->fields._IsCampaignOpen_k__BackingField, 0LL);
              v36 = (UnityEngine_Component_o *)this->fields.eventDetailLabel;
              if ( v36 )
              {
                v37 = UnityEngine_Component__get_gameObject(v36, 0LL);
                GameObjectExtensions__SetLocalPositionX(v37, -290.0, 0LL);
                v38 = this->fields.eventDetailLabel;
                if ( v38 )
                {
                  UILabel__set_fontSize(v38, 18, 0LL);
                  v39 = this->fields.eventDetailLabel;
                  if ( v39 )
                  {
                    UILabel__SetCondensedScale(v39, 430, 0LL);
                    if ( v11->fields._IsCampaignOpen_k__BackingField )
                      return;
                    v53 = (UIWidget_o *)this->fields.eventDetailLabel;
                    *(UnityEngine_Color_o *)&v54 = UnityEngine_Color__get_cyan(0LL);
                    if ( v53 )
                    {
                      UIWidget__set_color(v53, *(UnityEngine_Color_o *)&v54, 0LL);
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
    sub_B170D4();
  }
  v40 = (UnityEngine_Component_o *)this->fields.eventRemainLabel;
  if ( !v40 )
    goto LABEL_52;
  v41 = UnityEngine_Component__get_gameObject(v40, 0LL);
  if ( !v41 )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive(v41, 1, 0LL);
  EndAt_k__BackingField = v11->fields._EndAt_k__BackingField;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = NetworkManager__getTime(0LL);
  EventNoticeControl__SetRemainTime(EndAt_k__BackingField - Time, this->fields.eventRemainLabel, v44);
  v45 = this->fields.eventDetailLabel;
  if ( !v45 )
    goto LABEL_52;
  UILabel__set_applyGradient(v45, 1, 0LL);
  v46 = this->fields.eventDetailLabel;
  if ( !v46 )
    goto LABEL_52;
  UILabel__set_fontSize(v46, 20, 0LL);
  v47 = this->fields.eventDetailLabel;
  if ( !v47 )
    goto LABEL_52;
  UILabel__SetCondensedScale(v47, 300, 0LL);
  v48 = this->fields.eventDetailSprite;
  if ( !v48 )
    goto LABEL_52;
  v49 = this->fields.eventRemainLabel;
  if ( !v49 )
    goto LABEL_52;
  mWidth = v49->fields.mWidth;
  if ( v48->fields.mWidth >= 320 )
  {
    v51 = (float)mWidth * 0.8;
    if ( v51 == INFINITY )
      v52 = -v51;
    else
      v52 = v51;
    mWidth = (int)v52;
  }
  UILabel__SetCondensedScale(v49, mWidth, 0LL);
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
  int v11; // s0
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x21
  System_String_o *v21; // x0
  unsigned __int64 v22; // x21
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  int v25; // [xsp+4h] [xbp-3Ch] BYREF
  int v26; // [xsp+8h] [xbp-38h] BYREF
  int v27; // [xsp+Ch] [xbp-34h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FABE9 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, label);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_5608, v6);
    sub_B16FFC(&StringLiteral_5716, v7);
    sub_B16FFC(&StringLiteral_5717, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    sub_B16FFC(&StringLiteral_5631, v10);
    byte_40FABE9 = 1;
  }
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_black(0LL);
  if ( !label )
    sub_B170D4();
  UILabel__set_effectColor(label, *(UnityEngine_Color_o *)&v11, 0LL);
  if ( remainTime < 1 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_5716, 0LL);
    goto LABEL_18;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5608, 0LL);
  v27 = remainTime / 0x15180uLL;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
  v17 = System_String__Format(v15, v16, 0LL);
  if ( (int)(remainTime / 0x15180uLL) <= 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5717, 0LL);
    v26 = remainTime / 0xE10uLL;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    v17 = System_String__Format(v18, v19, 0LL);
    if ( (int)(remainTime / 0xE10uLL) <= 0 )
    {
      v22 = remainTime / 0x3CuLL;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5631, 0LL);
      v25 = v22;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      v21 = System_String__Format(v23, v24, 0LL);
LABEL_18:
      v20 = v21;
      white = UnityEngine_Color__get_white(0LL);
      UILabel__set_effectColor(label, white, 0LL);
      goto LABEL_19;
    }
  }
  v20 = v17;
LABEL_19:
  UILabel__set_text(label, v20, 0LL);
}


void __fastcall EventNoticeControl__UpdateEventNotice(EventNoticeControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x20
  EventNoticeControl_o *Time; // x0
  const MethodInfo *v6; // x4
  const MethodInfo *v7; // x1
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *v8; // x8
  const MethodInfo *v9; // x2

  if ( (byte_40FABE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    byte_40FABE6 = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Time = (EventNoticeControl_o *)NetworkManager__getTime(0LL);
  if ( EventNoticeControl__GetIsNeedToInfoUpdate(Time, eventInfoList, (int64_t)Time, this->fields.isNeedToUpdate, v6) )
  {
    v8 = this->fields.eventInfoList;
    this->fields.isNeedToUpdate = 0;
    if ( !v8 )
      sub_B170D4();
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
  struct System_Collections_Generic_List_EventNoticeControl_EventInfo__o *eventInfoList; // x8

  if ( (byte_40FABEC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventNoticeControl_EventInfo__get_Count__, method);
    byte_40FABEC = 1;
  }
  eventInfoList = this->fields.eventInfoList;
  if ( !eventInfoList )
    sub_B170D4();
  return eventInfoList->fields._size > 1;
}


void __fastcall EventNoticeControl_EventInfo___ctor(
        EventNoticeControl_EventInfo_o *this,
        EventInfoData_o *eventInfoData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_String_o *name; // x25
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int64_t startAt; // x8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x1
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct EventEntity_o *eventEntity; // x8
  struct EventEntity_ScriptData_array *script; // x25
  __int64 v77; // x8
  __int64 v78; // x26
  System_String_o **v79; // x23
  System_String_o *v80; // x24
  struct System_String_o *v81; // x24
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_String_o *v94; // x24
  struct System_String_o *v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct System_String_o *v107; // x1
  System_Int32_array **v108; // x1

  if ( (byte_40F700B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22405, eventInfoData);
    sub_B16FFC(&StringLiteral_1, v10);
    byte_40F700B = 1;
  }
  v11 = (System_Int32_array **)StringLiteral_1;
  this->fields.spriteName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spriteName,
    v11,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = (System_Int32_array **)StringLiteral_1;
  this->fields.eventName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventName, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_1;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.overwriteSpriteName, v19, v20, v21, v22, v23, v24, v25);
  v26 = (System_Int32_array **)StringLiteral_1;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.overwriteText, v26, v27, v28, v29, v30, v31, v32);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !eventInfoData )
    goto LABEL_21;
  name = eventInfoData->fields.name;
  this->fields.eventName = name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventName,
    (System_Int32_array **)name,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields._EventName_k__BackingField = name;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)name, v40, v41, v42, v43, v44, v45);
  this->fields._EndAt_k__BackingField = eventInfoData->fields.endAt;
  startAt = eventInfoData->fields.startAt;
  this->fields.infoData = eventInfoData;
  *(_WORD *)&this->fields._IsTimeOver_k__BackingField = 0;
  this->fields._StartAt_k__BackingField = startAt;
  this->fields._IsCampaignOpen_k__BackingField = 0;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.infoData,
    (System_Int32_array **)eventInfoData,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = (System_Int32_array **)StringLiteral_1;
  this->fields.overwriteSpriteName = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.overwriteSpriteName, v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Int32_array **)StringLiteral_1;
  this->fields.overwriteText = (struct System_String_o *)StringLiteral_1;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.overwriteText, v60, v61, v62, v63, v64, v65, v66);
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
        {
          sub_B17100(IsNullOrEmpty, v68, v69);
          sub_B170A0();
        }
        v79 = (System_String_o **)script->m_Items[v78];
        if ( !v79 )
          break;
        v80 = v79[7];
        if ( !System_String__IsNullOrEmpty(v80, 0LL) )
        {
          v81 = System_String__Concat_43743732((System_String_o *)StringLiteral_22405, v80, 0LL);
          this->fields.spriteName = v81;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.spriteName,
            (System_Int32_array **)v81,
            v82,
            v83,
            v84,
            v85,
            v86,
            v87);
          this->fields._SpriteName_k__BackingField = v81;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields._SpriteName_k__BackingField,
            (System_Int32_array **)v81,
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
          v95 = System_String__Concat_43743732((System_String_o *)StringLiteral_22405, v94, 0LL);
          this->fields.overwriteSpriteName = v95;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.overwriteSpriteName,
            (System_Int32_array **)v95,
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
          v107 = v79[9];
          this->fields.overwriteText = v107;
          sub_B16F98(
            (BattleServantConfConponent_o *)&this->fields.overwriteText,
            (System_Int32_array **)v107,
            v69,
            v102,
            v103,
            v104,
            v105,
            v106);
        }
        LODWORD(v77) = script->max_length;
        if ( (int)++v78 >= (int)v77 )
          goto LABEL_20;
      }
LABEL_21:
      sub_B170D4();
    }
  }
  else
  {
    v108 = (System_Int32_array **)StringLiteral_1;
    this->fields._SpriteName_k__BackingField = (struct System_String_o *)StringLiteral_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._SpriteName_k__BackingField,
      v108,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    this->fields._IsSprite_k__BackingField = 0;
  }
LABEL_20:
  EventNoticeControl_EventInfo__CheckCombineCampaignData(this, v68);
}


void __fastcall EventNoticeControl_EventInfo__CheckCombineCampaignData(
        EventNoticeControl_EventInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct EventInfoData_o *infoData; // x8
  struct EventEntity_o *eventEntity; // x8
  WebViewManager_o *Instance; // x0
  EventCampaignReleaseMaster_o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v10; // x0
  EventCampaignMaster_o *v11; // x0
  struct EventInfoData_o *v12; // x8
  EventCampaignEntity_o *Data; // x0
  EventCampaignEntity_o *v14; // x20
  bool isRelease; // w0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_String_o *entryCondMessage; // x1
  WebViewManager_o *v23; // x0
  UserServantCollectionMaster_o *v24; // x0
  struct EventInfoData_o *v25; // x8
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  bool v32; // w8
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  bool v39; // w8
  struct System_String_o *spriteName; // x1
  struct System_String_o *eventName; // x1
  struct System_String_o *overwriteSpriteName; // x1
  System_String_o *overwriteText; // x0
  EventCampaignReleaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F700C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventCampaignReleaseMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F700C = 1;
  }
  entity = 0LL;
  infoData = this->fields.infoData;
  if ( !infoData )
    goto LABEL_36;
  eventEntity = infoData->fields.eventEntity;
  if ( !eventEntity )
    goto LABEL_36;
  if ( eventEntity->fields.type != 5 )
    return;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_WarQuestSelectionMaster = (EventCampaignReleaseMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignReleaseMaster___);
  v10 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v10 )
    goto LABEL_36;
  v11 = (EventCampaignMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                   (DataManager_o *)v10,
                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  v12 = this->fields.infoData;
  if ( !v12 || !v11 )
    goto LABEL_36;
  Data = EventCampaignMaster__getData(v11, v12->fields.eventId, 0LL);
  if ( Data )
  {
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_36;
    v14 = Data;
    if ( EventCampaignReleaseMaster__TryGetEntity(
           MasterData_WarQuestSelectionMaster,
           &entity,
           Data->fields.eventId,
           Data->fields.target,
           Data->fields.idx,
           0LL) )
    {
      isRelease = EventCampaignReleaseMaster__isRelease(
                    MasterData_WarQuestSelectionMaster,
                    v14->fields.eventId,
                    v14->fields.target,
                    0LL);
      this->fields._IsCampaignOpen_k__BackingField = isRelease;
      if ( !entity )
        goto LABEL_36;
      if ( entity->fields.condType == 1 )
      {
        this->fields._IsCondTypeQuestClear_k__BackingField = 1;
        this->fields._IsSprite_k__BackingField = 0;
      }
      if ( !isRelease && !System_String__IsNullOrEmpty(v14->fields.entryCondMessage, 0LL) )
      {
        entryCondMessage = v14->fields.entryCondMessage;
        this->fields._EventName_k__BackingField = entryCondMessage;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields,
          (System_Int32_array **)entryCondMessage,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
    }
  }
  if ( System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL)
    && System_String__IsNullOrEmpty(this->fields.overwriteText, 0LL) )
  {
    return;
  }
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v23
    || (v24 = (UserServantCollectionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v23,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___),
        (v25 = this->fields.infoData) == 0LL)
    || !v24 )
  {
LABEL_36:
    sub_B170D4();
  }
  if ( UserServantCollectionMaster__IsServantHaving(v24, v25->fields.targetIds, 0LL) )
  {
    if ( System_String__IsNullOrEmpty(this->fields.spriteName, 0LL) )
    {
      v32 = 0;
    }
    else
    {
      spriteName = this->fields.spriteName;
      this->fields._SpriteName_k__BackingField = spriteName;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._SpriteName_k__BackingField,
        (System_Int32_array **)spriteName,
        v26,
        v27,
        v28,
        v29,
        v30,
        v31);
      v32 = 1;
    }
    eventName = this->fields.eventName;
    this->fields._IsSprite_k__BackingField = v32;
    goto LABEL_34;
  }
  if ( System_String__IsNullOrEmpty(this->fields.overwriteSpriteName, 0LL) )
  {
    v39 = 0;
  }
  else
  {
    overwriteSpriteName = this->fields.overwriteSpriteName;
    this->fields._SpriteName_k__BackingField = overwriteSpriteName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._SpriteName_k__BackingField,
      (System_Int32_array **)overwriteSpriteName,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = 1;
  }
  overwriteText = this->fields.overwriteText;
  this->fields._IsSprite_k__BackingField = v39;
  if ( !System_String__IsNullOrEmpty(overwriteText, 0LL) )
  {
    eventName = this->fields.overwriteText;
LABEL_34:
    this->fields._EventName_k__BackingField = eventName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields,
      (System_Int32_array **)eventName,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._EventName_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._SpriteName_k__BackingField = value;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._SpriteName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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