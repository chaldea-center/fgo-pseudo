void EventInfoHappinessCounterControl___ctor(EventInfoHappinessCounterControl_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.defaultEventPointPosY = 0xC3290000C2E40000LL;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoHappinessCounterControl__CheckAssertions(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  struct UISprite_array *happinessCounterNumberSp; // x8
  int max_length; // w8
  int v4; // w9

  happinessCounterNumberSp = this->fields.happinessCounterNumberSp;
  if ( !happinessCounterNumberSp )
    sub_1C6BC60(this, method);
  max_length = happinessCounterNumberSp->max_length;
  v4 = -1;
  do
    ++v4;
  while ( v4 < max_length );
}


int32_t EventInfoHappinessCounterControl__GetDigit(
        EventInfoHappinessCounterControl_o *this,
        int64_t num,
        const MethodInfo *method)
{
  double v4; // d0

  if ( (byte_4CB77FB & 1) == 0 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB77FB = 1;
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


int64_t EventInfoHappinessCounterControl__GetDigitNumber(
        EventInfoHappinessCounterControl_o *this,
        int64_t number,
        int64_t digit,
        const MethodInfo *method)
{
  double v6; // d0
  signed __int64 v7; // x8

  if ( (byte_4CB77FC & 1) == 0 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CB77FC = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = System_Math__Pow(10.0, (double)digit, 0);
  v7 = 0xFFFFFFFF80000000LL;
  if ( v6 != INFINITY )
    v7 = (int)v6;
  return number / v7 % 10;
}


void EventInfoHappinessCounterControl__Initialization(
        EventInfoHappinessCounterControl_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  EventUiEntity_o *v12; // x20
  System_Action_o *v13; // x23
  __int64 v14; // x8
  struct UISprite_array *happinessCounterNumberSp; // x9

  if ( (byte_4CB77F5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_EventInfoHappinessCounterControl___c__DisplayClass22_0__Initialization_b__0__);
    sub_1C6BA08(&EventInfoHappinessCounterControl___c__DisplayClass22_0_TypeInfo);
    byte_4CB77F5 = 1;
  }
  v5 = sub_1C6BC54(EventInfoHappinessCounterControl___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = entity;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)entity, v10, v11);
  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, *(EventUiEntity_o **)(v5 + 24), 0);
  v12 = *(EventUiEntity_o **)(v5 + 24);
  v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)v5,
    Method_EventInfoHappinessCounterControl___c__DisplayClass22_0__Initialization_b__0__,
    0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v12, v13, 0);
  v14 = *(_QWORD *)(v5 + 24);
  if ( !v14
    || (happinessCounterNumberSp = this->fields.happinessCounterNumberSp,
        this->fields.eventId = *(_DWORD *)(v14 + 24),
        !happinessCounterNumberSp) )
  {
LABEL_6:
    sub_1C6BC60(v6, v7);
  }
}


void EventInfoHappinessCounterControl__OnDestroy(EventInfoHappinessCounterControl_o *this, const MethodInfo *method)
{
  EventInfoUIBase__ReleaseEventUIAssetData((EventInfoUIBase_o *)this, this->fields.eventId, 0);
  EventInfoUIBase__ReleaseLocalAtlas((EventInfoUIBase_o *)this, 0);
}


void EventInfoHappinessCounterControl__Redisplay(EventInfoHappinessCounterControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  EventInfoUIBase__Redisplay((EventInfoUIBase_o *)this, 0);
  EventInfoHappinessCounterControl__SetupPoint(this, v3);
  EventInfoHappinessCounterControl__SetupEventPointBg(this, v4);
  EventInfoHappinessCounterControl__SetupEventPoint(this, v5);
  EventInfoHappinessCounterControl__SetupHappinessCounterBg(this, v6);
  EventInfoHappinessCounterControl__SetupHappinessCounter(this, v7);
}


void EventInfoHappinessCounterControl__SetPointNumSprite(
        EventInfoHappinessCounterControl_o *this,
        int64_t number,
        UISprite_array *sprites,
        const MethodInfo *method)
{
  EventInfoUIBase_o *v6; // x21
  int32_t Digit; // w22
  EventInfoHappinessCounterControl_o *v8; // x0
  unsigned __int64 v9; // x24
  int v10; // w25
  signed __int64 v11; // x26
  UISprite_o **m_Items; // x27
  UnityEngine_Object_o *v13; // x22
  const MethodInfo *v14; // x3
  UISprite_o *v15; // x22
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  __int64 v20; // x1
  UISprite_o *v21; // x0
  int64_t DigitNumber; // [xsp+0h] [xbp-70h] BYREF
  int v23; // [xsp+Ch] [xbp-64h] BYREF

  v6 = (EventInfoUIBase_o *)this;
  if ( (byte_4CB77FA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (EventInfoHappinessCounterControl_o *)sub_1C6BA08(&StringLiteral_19224/*"event_counter_number_"*/);
    byte_4CB77FA = 1;
  }
  v23 = 0;
  DigitNumber = 0;
  if ( sprites )
  {
    Digit = EventInfoHappinessCounterControl__GetDigit(this, number, (const MethodInfo *)sprites);
    v8 = (EventInfoHappinessCounterControl_o *)System_Linq_Enumerable__Count_object_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)v8 >= 1 )
    {
      v9 = 0;
      v10 = 0;
      v11 = Digit;
      m_Items = sprites->m_Items;
      do
      {
        if ( v9 >= LODWORD(sprites->max_length) )
LABEL_19:
          sub_1C6BC68(v8);
        v13 = (UnityEngine_Object_o *)m_Items[v9];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v8 = (EventInfoHappinessCounterControl_o *)UnityEngine_Object__op_Equality(v13, 0, 0);
        if ( ((unsigned __int8)v8 & 1) == 0 )
        {
          if ( v9 >= LODWORD(sprites->max_length) )
            goto LABEL_19;
          v15 = m_Items[v9];
          if ( (__int64)v9 <= v11 )
          {
            DigitNumber = EventInfoHappinessCounterControl__GetDigitNumber(v8, number, v10, v14);
            v18 = System_Int64__ToString((int64_t)&DigitNumber, 0);
            v19 = System_String__Concat_63966792((System_String_o *)StringLiteral_19224/*"event_counter_number_"*/, v18, 0);
            v8 = (EventInfoHappinessCounterControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(v6, v15, v19, 0);
            if ( v9 >= LODWORD(sprites->max_length) )
              goto LABEL_19;
            v21 = m_Items[v9];
            if ( !v21 )
              sub_1C6BC60(0, v20);
            ((void (__fastcall *)(UISprite_o *, const MethodInfo *))v21->klass->vtable._33_MakePixelPerfect.methodPtr)(
              v21,
              v21->klass->vtable._33_MakePixelPerfect.method);
          }
          else
          {
            v23 = 0;
            v16 = System_Int32__ToString((int32_t)&v23, 0);
            v17 = System_String__Concat_63966792((System_String_o *)StringLiteral_19224/*"event_counter_number_"*/, v16, 0);
            EventInfoUIBase__SetSpriteByLocalAtlas(v6, v15, v17, 0);
          }
          ++v10;
        }
        ++v9;
        v8 = (EventInfoHappinessCounterControl_o *)System_Linq_Enumerable__Count_object_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                     (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_UISprite___);
      }
      while ( (__int64)v9 < (int)v8 );
    }
  }
}


void EventInfoHappinessCounterControl__SetUIDisp(
        EventInfoHappinessCounterControl_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  bool v3; // w19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  v3 = isDisp;
  EventInfoUIBase__SetUIDisp((EventInfoUIBase_o *)this, isDisp, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C6BC60(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, v3, 0);
}


void EventInfoHappinessCounterControl__Setup(
        EventInfoHappinessCounterControl_o *this,
        EventUiValueEntity_array *entities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  EventInfoUIBase__Setup((EventInfoUIBase_o *)this, entities, 0);
  EventInfoHappinessCounterControl__SetupPoint(this, v4);
  EventInfoHappinessCounterControl__SetupEventPointBg(this, v5);
  EventInfoHappinessCounterControl__SetupEventPoint(this, v6);
  EventInfoHappinessCounterControl__SetupHappinessCounterBg(this, v7);
  EventInfoHappinessCounterControl__SetupHappinessCounter(this, v8);
}


// local variable allocation has failed, the output may be wrong!
void EventInfoHappinessCounterControl__SetupEventPoint(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventPointLabel; // x20
  System_String_o *Master_object; // x0
  __int64 v5; // x1
  UILabel_o *v6; // x20
  int64_t eventPoint; // x21
  unsigned int localPosition; // s0 OVERLAPPED
  int v9; // s2
  __int64 v10; // x8
  int v11; // s1
  UnityEngine_Component_o *eventPointLabelRoot; // x8
  char v13; // w19
  bool v14; // w1
  EventUiEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB77F7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB77F7 = 1;
  }
  entity = 0;
  eventPointLabel = (UnityEngine_Object_o *)this->fields.eventPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventPointLabel, 0, 0) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( Master_object )
    {
      if ( EventUiMaster__TryGetEntity((EventUiMaster_o *)Master_object, &entity, this->fields.eventPointGroupId, 1, 0) )
      {
        v6 = this->fields.eventPointLabel;
        eventPoint = this->fields.eventPoint;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        Master_object = LocalizationManager__GetNumberFormatLong(eventPoint, 0);
        if ( v6 )
        {
          UILabel__set_text(v6, Master_object, 0);
          Master_object = (System_String_o *)this->fields.eventPointLabelRoot;
          if ( Master_object )
          {
            localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)Master_object,
                                            0);
            Master_object = (System_String_o *)this->fields.eventPointLabelRoot;
            if ( Master_object )
            {
              v9 = 0;
              v10 = 144;
              if ( this->fields.isHappinessPointCountStop )
                v10 = 148;
              v11 = *(_DWORD *)((char *)&this->klass + v10);
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Master_object,
                *(UnityEngine_Vector3_o *)&localPosition,
                0);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
              if ( Master_object )
              {
                Master_object = (System_String_o *)EventUiReleaseMaster__IsOpen(
                                                     (EventUiReleaseMaster_o *)Master_object,
                                                     entity,
                                                     0);
                eventPointLabelRoot = (UnityEngine_Component_o *)this->fields.eventPointLabelRoot;
                if ( eventPointLabelRoot )
                {
                  v13 = (char)Master_object;
                  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(eventPointLabelRoot, 0);
                  if ( Master_object )
                  {
                    v14 = v13 & 1;
LABEL_26:
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v14, 0);
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
                                               0);
          if ( Master_object )
          {
            v14 = 0;
            goto LABEL_26;
          }
        }
      }
    }
    sub_1C6BC60(Master_object, v5);
  }
}


void EventInfoHappinessCounterControl__SetupEventPointBg(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventPointBgSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_4CB77F6 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_19275/*"event_point_base"*/);
    byte_4CB77F6 = 1;
  }
  eventPointBgSprite = (UnityEngine_Object_o *)this->fields.eventPointBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventPointBgSprite, 0, 0) )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.eventPointBgSprite,
      (System_String_o *)StringLiteral_19275/*"event_point_base"*/,
      0);
    v5 = this->fields.eventPointBgSprite;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v5->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v5,
      v5->klass->vtable._33_MakePixelPerfect.method);
  }
}


void EventInfoHappinessCounterControl__SetupHappinessCounter(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *happinessCounterNumberSpRoot; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4CB77F9 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB77F9 = 1;
  }
  happinessCounterNumberSpRoot = (UnityEngine_Object_o *)this->fields.happinessCounterNumberSpRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(happinessCounterNumberSpRoot, 0, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.happinessCounterNumberSp, 0) )
  {
    v5 = this->fields.happinessCounterNumberSpRoot;
    if ( !v5 )
      sub_1C6BC60(0, v4);
    UnityEngine_GameObject__SetActive(v5, !this->fields.isHappinessPointCountStop, 0);
    EventInfoHappinessCounterControl__SetPointNumSprite(
      this,
      this->fields.happinessPoint,
      this->fields.happinessCounterNumberSp,
      v6);
  }
}


void EventInfoHappinessCounterControl__SetupHappinessCounterBg(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *happinessCounterBgSpriteFirst; // x20
  UnityEngine_Object_o *happinessCounterBgSpriteMax; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4CB77F8 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_19222/*"event_counter_base_first"*/);
    sub_1C6BA08(&StringLiteral_19223/*"event_counter_base_max"*/);
    byte_4CB77F8 = 1;
  }
  happinessCounterBgSpriteFirst = (UnityEngine_Object_o *)this->fields.happinessCounterBgSpriteFirst;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(happinessCounterBgSpriteFirst, 0, 0) )
  {
    happinessCounterBgSpriteMax = (UnityEngine_Object_o *)this->fields.happinessCounterBgSpriteMax;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(happinessCounterBgSpriteMax, 0, 0) )
    {
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.happinessCounterBgSpriteFirst,
        (System_String_o *)StringLiteral_19222/*"event_counter_base_first"*/,
        0);
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.happinessCounterBgSpriteMax,
        (System_String_o *)StringLiteral_19223/*"event_counter_base_max"*/,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.happinessCounterBgSpriteFirst;
      if ( !gameObject )
        goto LABEL_17;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( !gameObject
        || (UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)gameObject,
              !this->fields.isHappinessPointCountStop,
              0),
            (gameObject = (UnityEngine_Component_o *)this->fields.happinessCounterBgSpriteMax) == 0)
        || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive(
              (UnityEngine_GameObject_o *)gameObject,
              this->fields.isHappinessPointCountStop,
              0),
            (gameObject = (UnityEngine_Component_o *)this->fields.happinessCounterBgSpriteFirst) == 0)
        || (((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
              gameObject,
              gameObject->klass[2]._1.generic_class),
            (gameObject = (UnityEngine_Component_o *)this->fields.happinessCounterBgSpriteMax) == 0) )
      {
LABEL_17:
        sub_1C6BC60(gameObject, v5);
      }
      ((void (__fastcall *)(UnityEngine_Component_o *, void *))gameObject->klass[2]._1.parent)(
        gameObject,
        gameObject->klass[2]._1.generic_class);
    }
  }
}


void EventInfoHappinessCounterControl__SetupPoint(EventInfoHappinessCounterControl_o *this, const MethodInfo *method)
{
  int64_t EventPoint; // x0
  int32_t eventId; // w8
  int32_t happinessPointGroupId; // w1
  int64_t v6; // x0

  EventPoint = UserEventPointMaster__GetEventPoint(this->fields.eventId, this->fields.eventPointGroupId, 0);
  eventId = this->fields.eventId;
  happinessPointGroupId = this->fields.happinessPointGroupId;
  this->fields.eventPoint = EventPoint;
  v6 = UserEventPointMaster__GetEventPoint(eventId, happinessPointGroupId, 0);
  this->fields.happinessPoint = v6;
  this->fields.isHappinessPointCountStop = v6 > 9998;
}


void EventInfoHappinessCounterControl___c__DisplayClass22_0___ctor(
        EventInfoHappinessCounterControl___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoHappinessCounterControl___c__DisplayClass22_0___Initialization_b__0(
        EventInfoHappinessCounterControl___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct EventUiEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity || (this = (EventInfoHappinessCounterControl___c__DisplayClass22_0_o *)this->fields.__4__this) == 0 )
    sub_1C6BC60(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, entity->fields.eventId, 0);
}