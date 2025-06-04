void __fastcall EventInfoHappinessCounterControl___ctor(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  *(_QWORD *)&this->fields.defaultEventPointPosY = 0xC3290000C2E40000LL;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoHappinessCounterControl__CheckAssertions(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *happinessCounterNumberSp; // x8
  int max_length; // w8
  int v4; // w9

  happinessCounterNumberSp = this->fields.happinessCounterNumberSp;
  if ( !happinessCounterNumberSp )
    sub_1BC3264(this, method);
  max_length = happinessCounterNumberSp->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


int32_t __fastcall EventInfoHappinessCounterControl__GetDigit(
        EventInfoHappinessCounterControl_o *this,
        int64_t num,
        const MethodInfo *method)
{
  double v4; // d0

  if ( (byte_4B035B7 & 1) == 0 )
  {
    sub_1BC3008(&System_Math_TypeInfo, num);
    byte_4B035B7 = 1;
  }
  if ( !num )
    return 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = log10((double)num);
  if ( v4 == INFINITY )
    return 0x80000000;
  else
    return (int)v4;
}


int64_t __fastcall EventInfoHappinessCounterControl__GetDigitNumber(
        EventInfoHappinessCounterControl_o *this,
        int64_t number,
        int64_t digit,
        const MethodInfo *method)
{
  double v6; // d0
  signed __int64 v7; // x8

  if ( (byte_4B035B8 & 1) == 0 )
  {
    sub_1BC3008(&System_Math_TypeInfo, number);
    byte_4B035B8 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = System_Math__Pow(10.0, (double)digit, 0LL);
  v7 = 0xFFFFFFFF80000000LL;
  if ( v6 != INFINITY )
    v7 = (int)v6;
  return number / v7 % 10;
}


void __fastcall EventInfoHappinessCounterControl__Initialization(
        EventInfoHappinessCounterControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  EventUiEntity_o *v14; // x20
  System_Action_o *v15; // x23
  __int64 v16; // x8
  struct UISprite_array *happinessCounterNumberSp; // x9

  if ( (byte_4B035B1 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, entity);
    sub_1BC3008(&Method_EventInfoHappinessCounterControl___c__DisplayClass22_0__Initialization_b__0__, v5);
    sub_1BC3008(&EventInfoHappinessCounterControl___c__DisplayClass22_0_TypeInfo, v6);
    byte_4B035B1 = 1;
  }
  v7 = sub_1BC3254(EventInfoHappinessCounterControl___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = entity;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)entity, v12, v13);
  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, *(EventUiEntity_o **)(v7 + 24), 0LL);
  v14 = *(EventUiEntity_o **)(v7 + 24);
  v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_EventInfoHappinessCounterControl___c__DisplayClass22_0__Initialization_b__0__,
    0LL);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v14, v15, 0LL);
  v16 = *(_QWORD *)(v7 + 24);
  if ( !v16
    || (happinessCounterNumberSp = this->fields.happinessCounterNumberSp,
        this->fields.eventId = *(_DWORD *)(v16 + 24),
        !happinessCounterNumberSp) )
  {
LABEL_6:
    sub_1BC3264(v8, v9);
  }
}


void __fastcall EventInfoHappinessCounterControl__OnDestroy(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, 0LL);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoHappinessCounterControl__Redisplay(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  EventInfoUIBase__Redisplay((EventInfoUIBase_o *)this, 0LL);
  EventInfoHappinessCounterControl__SetupPoint(this, v3);
  EventInfoHappinessCounterControl__SetupEventPointBg(this, v4);
  EventInfoHappinessCounterControl__SetupEventPoint(this, v5);
  EventInfoHappinessCounterControl__SetupHappinessCounterBg(this, v6);
  EventInfoHappinessCounterControl__SetupHappinessCounter(this, v7);
}


void __fastcall EventInfoHappinessCounterControl__SetPointNumSprite(
        EventInfoHappinessCounterControl_o *this,
        int64_t number,
        UISprite_array *sprites,
        const MethodInfo *method)
{
  EventInfoUIBase_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t Digit; // w22
  EventInfoHappinessCounterControl_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  unsigned __int64 v13; // x24
  int v14; // w25
  signed __int64 v15; // x26
  UISprite_o **m_Items; // x27
  UnityEngine_Object_o *v17; // x22
  const MethodInfo *v18; // x3
  UISprite_o *v19; // x22
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  UISprite_o *v24; // x0
  int64_t DigitNumber; // [xsp+0h] [xbp-70h] BYREF
  int v26; // [xsp+Ch] [xbp-64h] BYREF

  v6 = (EventInfoUIBase_o *)this;
  if ( (byte_4B035B6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_UISprite___, number);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v7);
    this = (EventInfoHappinessCounterControl_o *)sub_1BC3008(&StringLiteral_18991/*"event_counter_number_"*/, v8);
    byte_4B035B6 = 1;
  }
  v26 = 0;
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = EventInfoHappinessCounterControl__GetDigit(this, number, (const MethodInfo *)sprites);
    v10 = (EventInfoHappinessCounterControl_o *)System_Linq_Enumerable__Count_object_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                  (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)v10 >= 1 )
    {
      v13 = 0LL;
      v14 = 0;
      v15 = Digit;
      m_Items = sprites->m_Items;
      do
      {
        if ( v13 >= sprites->max_length )
LABEL_19:
          sub_1BC326C(v10, v11, v12);
        v17 = (UnityEngine_Object_o *)m_Items[v13];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = (EventInfoHappinessCounterControl_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
        if ( ((unsigned __int8)v10 & 1) == 0 )
        {
          if ( v13 >= sprites->max_length )
            goto LABEL_19;
          v19 = m_Items[v13];
          if ( (__int64)v13 <= v15 )
          {
            DigitNumber = EventInfoHappinessCounterControl__GetDigitNumber(v10, number, v14, v18);
            v22 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v23 = System_String__Concat_62348648((System_String_o *)StringLiteral_18991/*"event_counter_number_"*/, v22, 0LL);
            v10 = (EventInfoHappinessCounterControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(v6, v19, v23, 0LL);
            if ( v13 >= sprites->max_length )
              goto LABEL_19;
            v24 = m_Items[v13];
            if ( !v24 )
              sub_1BC3264(0LL, v11);
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v24->klass->vtable._33_MakePixelPerfect.method)(
              v24,
              v24->klass->vtable._34_get_minWidth.methodPtr);
          }
          else
          {
            v26 = 0;
            v20 = System_Int32__ToString((int32_t)&v26, 0LL);
            v21 = System_String__Concat_62348648((System_String_o *)StringLiteral_18991/*"event_counter_number_"*/, v20, 0LL);
            EventInfoUIBase__SetSpriteByLocalAtlas(v6, v19, v21, 0LL);
          }
          ++v14;
        }
        ++v13;
        v10 = (EventInfoHappinessCounterControl_o *)System_Linq_Enumerable__Count_object_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                      (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_UISprite___);
      }
      while ( (__int64)v13 < (int)v10 );
    }
  }
}


void __fastcall EventInfoHappinessCounterControl__SetUIDisp(
        EventInfoHappinessCounterControl_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  bool v3; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  v3 = isDisp;
  EventInfoUIBase__SetUIDisp((EventInfoUIBase_o *)this, isDisp, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, v3, 0LL);
}


void __fastcall EventInfoHappinessCounterControl__Setup(
        EventInfoHappinessCounterControl_o *this,
        EventUiValueEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  EventInfoUIBase__Setup((EventInfoUIBase_o *)this, entities, 0LL);
  EventInfoHappinessCounterControl__SetupPoint(this, v4);
  EventInfoHappinessCounterControl__SetupEventPointBg(this, v5);
  EventInfoHappinessCounterControl__SetupEventPoint(this, v6);
  EventInfoHappinessCounterControl__SetupHappinessCounterBg(this, v7);
  EventInfoHappinessCounterControl__SetupHappinessCounter(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoHappinessCounterControl__SetupEventPoint(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *eventPointLabel; // x20
  System_String_o *Master_object; // x0
  __int64 v9; // x1
  UILabel_o *v10; // x20
  int64_t eventPoint; // x21
  unsigned int localPosition; // s0
  int v13; // s2
  __int64 v14; // x8
  int v15; // s1
  UnityEngine_Component_o *eventPointLabelRoot; // x8
  char v17; // w19
  bool v18; // w1
  EventUiEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B035B3 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_EventUiMaster___, method);
    sub_1BC3008(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v3);
    sub_1BC3008(&DataManager_TypeInfo, v4);
    sub_1BC3008(&LocalizationManager_TypeInfo, v5);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v6);
    byte_4B035B3 = 1;
  }
  entity = 0LL;
  eventPointLabel = (UnityEngine_Object_o *)this->fields.eventPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventPointLabel, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( Master_object )
    {
      if ( EventUiMaster__TryGetEntity(
             (EventUiMaster_o *)Master_object,
             &entity,
             this->fields.eventPointGroupId,
             1,
             0LL) )
      {
        v10 = this->fields.eventPointLabel;
        eventPoint = this->fields.eventPoint;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = LocalizationManager__GetNumberFormatLong(eventPoint, 0LL);
        if ( v10 )
        {
          UILabel__set_text(v10, Master_object, 0LL);
          Master_object = (System_String_o *)this->fields.eventPointLabelRoot;
          if ( Master_object )
          {
            localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)Master_object,
                                            0LL);
            Master_object = (System_String_o *)this->fields.eventPointLabelRoot;
            if ( Master_object )
            {
              v13 = 0;
              v14 = 144LL;
              if ( this->fields.isHappinessPointCountStop )
                v14 = 148LL;
              v15 = *(_DWORD *)((char *)&this->klass + v14);
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Master_object,
                *(UnityEngine_Vector3_o *)&localPosition,
                0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
              if ( Master_object )
              {
                Master_object = (System_String_o *)EventUiReleaseMaster__IsOpen(
                                                     (EventUiReleaseMaster_o *)Master_object,
                                                     entity,
                                                     0LL);
                eventPointLabelRoot = (UnityEngine_Component_o *)this->fields.eventPointLabelRoot;
                if ( eventPointLabelRoot )
                {
                  v17 = (char)Master_object;
                  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(eventPointLabelRoot, 0LL);
                  if ( Master_object )
                  {
                    v18 = v17 & 1;
LABEL_26:
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v18, 0LL);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        Master_object = (System_String_o *)this->fields.eventPointLabelRoot;
        if ( Master_object )
        {
          Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)Master_object,
                                               0LL);
          if ( Master_object )
          {
            v18 = 0;
            goto LABEL_26;
          }
        }
      }
    }
    sub_1BC3264(Master_object, v9);
  }
}


void __fastcall EventInfoHappinessCounterControl__SetupEventPointBg(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *eventPointBgSprite; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0

  if ( (byte_4B035B2 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_19040/*"event_point_base"*/, v3);
    byte_4B035B2 = 1;
  }
  eventPointBgSprite = (UnityEngine_Object_o *)this->fields.eventPointBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventPointBgSprite, 0LL, 0LL) )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.eventPointBgSprite,
      (System_String_o *)StringLiteral_19040/*"event_point_base"*/,
      0LL);
    v6 = this->fields.eventPointBgSprite;
    if ( !v6 )
      sub_1BC3264(0LL, v5);
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
}


void __fastcall EventInfoHappinessCounterControl__SetupHappinessCounter(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *happinessCounterNumberSpRoot; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4B035B5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B035B5 = 1;
  }
  happinessCounterNumberSpRoot = (UnityEngine_Object_o *)this->fields.happinessCounterNumberSpRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(happinessCounterNumberSpRoot, 0LL, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.happinessCounterNumberSp, 0LL) )
  {
    v5 = this->fields.happinessCounterNumberSpRoot;
    if ( !v5 )
      sub_1BC3264(0LL, v4);
    UnityEngine_GameObject__SetActive(v5, !this->fields.isHappinessPointCountStop, 0LL);
    EventInfoHappinessCounterControl__SetPointNumSprite(
      this,
      this->fields.happinessPoint,
      this->fields.happinessCounterNumberSp,
      v6);
  }
}


void __fastcall EventInfoHappinessCounterControl__SetupHappinessCounterBg(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *happinessCounterBgSpriteFirst; // x20
  UnityEngine_Object_o *happinessCounterBgSpriteMax; // x20
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4B035B4 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_18989/*"event_counter_base_first"*/, v3);
    sub_1BC3008(&StringLiteral_18990/*"event_counter_base_max"*/, v4);
    byte_4B035B4 = 1;
  }
  happinessCounterBgSpriteFirst = (UnityEngine_Object_o *)this->fields.happinessCounterBgSpriteFirst;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(happinessCounterBgSpriteFirst, 0LL, 0LL) )
  {
    happinessCounterBgSpriteMax = (UnityEngine_Object_o *)this->fields.happinessCounterBgSpriteMax;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(happinessCounterBgSpriteMax, 0LL, 0LL) )
    {
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.happinessCounterBgSpriteFirst,
        (System_String_o *)StringLiteral_18989/*"event_counter_base_first"*/,
        0LL);
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.happinessCounterBgSpriteMax,
        (System_String_o *)StringLiteral_18990/*"event_counter_base_max"*/,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.happinessCounterBgSpriteFirst;
      if ( !gameObject )
        goto LABEL_17;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( !gameObject
        || (UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)gameObject,
              !this->fields.isHappinessPointCountStop,
              0LL),
            (gameObject = (UnityEngine_Component_o *)this->fields.happinessCounterBgSpriteMax) == 0LL)
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)gameObject,
              this->fields.isHappinessPointCountStop,
              0LL),
            (gameObject = (UnityEngine_Component_o *)this->fields.happinessCounterBgSpriteFirst) == 0LL)
        || (((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
              gameObject,
              gameObject->klass[2]._1.interopData),
            (gameObject = (UnityEngine_Component_o *)this->fields.happinessCounterBgSpriteMax) == 0LL) )
      {
LABEL_17:
        sub_1BC3264(gameObject, v7);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.typeMetadataHandle)(
        gameObject,
        gameObject->klass[2]._1.interopData);
    }
  }
}


void __fastcall EventInfoHappinessCounterControl__SetupPoint(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  int64_t EventPoint; // x0
  int32_t eventId; // w8
  int32_t happinessPointGroupId; // w1
  int64_t v6; // x0

  EventPoint = UserEventPointMaster__GetEventPoint(this->fields.eventId, this->fields.eventPointGroupId, 0LL);
  eventId = this->fields.eventId;
  happinessPointGroupId = this->fields.happinessPointGroupId;
  this->fields.eventPoint = EventPoint;
  v6 = UserEventPointMaster__GetEventPoint(eventId, happinessPointGroupId, 0LL);
  this->fields.happinessPoint = v6;
  this->fields.isHappinessPointCountStop = v6 > 9998;
}


void __fastcall EventInfoHappinessCounterControl___c__DisplayClass22_0___ctor(
        EventInfoHappinessCounterControl___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoHappinessCounterControl___c__DisplayClass22_0___Initialization_b__0(
        EventInfoHappinessCounterControl___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity || (this = (EventInfoHappinessCounterControl___c__DisplayClass22_0_o *)this->fields.__4__this) == 0LL )
    sub_1BC3264(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, entity->fields.eventId, 0LL);
}