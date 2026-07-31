void EventInfoHappinessCounterControl___ctor(EventInfoHappinessCounterControl_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.defaultEventPointPosY = 0xC3290000C2E40000LL;
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoHappinessCounterControl__CheckAssertions(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.happinessCounterNumberSp )
    sub_21FFECC(this, method);
}


int32_t EventInfoHappinessCounterControl__GetDigit(
        EventInfoHappinessCounterControl_o *this,
        int64_t num,
        const MethodInfo *method)
{
  if ( (byte_593994E & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593994E = 1;
  }
  if ( !num )
    return 0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, num);
  return (int)log10((double)num);
}


int64_t EventInfoHappinessCounterControl__GetDigitNumber(
        EventInfoHappinessCounterControl_o *this,
        int64_t number,
        int64_t digit,
        const MethodInfo *method)
{
  double v6; // d0
  signed __int64 v7; // x8

  if ( (byte_593994F & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593994F = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, number);
  v6 = System_Math__Pow(10.0, (double)digit, 0);
  v7 = (int)v6;
  if ( v6 == INFINITY )
    v7 = 0xFFFFFFFF80000000LL;
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  EventUiEntity_o *v20; // x20
  System_Action_o *v21; // x23
  __int64 v22; // x8
  struct UISprite_array *happinessCounterNumberSp; // x9

  if ( (byte_5939948 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_EventInfoHappinessCounterControl___c__DisplayClass22_0__Initialization_b__0__);
    sub_21FFC50(&EventInfoHappinessCounterControl___c__DisplayClass22_0_TypeInfo);
    byte_5939948 = 1;
  }
  v5 = sub_21FFEBC(EventInfoHappinessCounterControl___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_6;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = entity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)entity, v14, v15, v16, v17, v18, v19);
  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, *(EventUiEntity_o **)(v5 + 24), 0);
  v20 = *(EventUiEntity_o **)(v5 + 24);
  v21 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v21,
    (Il2CppObject *)v5,
    Method_EventInfoHappinessCounterControl___c__DisplayClass22_0__Initialization_b__0__,
    0);
  EventInfoUIBase__LoadEventUIAssetData((EventInfoUIBase_o *)this, v20, v21, 0);
  v22 = *(_QWORD *)(v5 + 24);
  if ( !v22
    || (happinessCounterNumberSp = this->fields.happinessCounterNumberSp,
        this->fields.eventId = *(_DWORD *)(v22 + 24),
        !happinessCounterNumberSp) )
  {
LABEL_6:
    sub_21FFECC(v6, v7);
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
  __int64 v9; // x1
  signed __int64 v10; // x26
  int v11; // w24
  __int64 i; // x28
  unsigned __int64 v13; // x29
  UnityEngine_Object_o *v14; // x22
  const MethodInfo *v15; // x3
  unsigned __int64 max_length_low; // x8
  UISprite_o *v17; // x22
  System_String_o *v18; // x0
  System_String_o *v19; // x0
  UISprite_o *v20; // x22
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x8
  int64_t DigitNumber; // [xsp+0h] [xbp-70h] BYREF
  int v27; // [xsp+Ch] [xbp-64h] BYREF

  v6 = (EventInfoUIBase_o *)this;
  if ( (byte_593994D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (EventInfoHappinessCounterControl_o *)sub_21FFC50(&StringLiteral_20025/*"event_counter_number_"*/);
    byte_593994D = 1;
  }
  v27 = 0;
  DigitNumber = 0;
  if ( sprites )
  {
    Digit = EventInfoHappinessCounterControl__GetDigit(this, number, (const MethodInfo *)sprites);
    v8 = (EventInfoHappinessCounterControl_o *)System_Linq_Enumerable__Count_object_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)v8 >= 1 )
    {
      v10 = Digit;
      v11 = 0;
      for ( i = 4; ; ++i )
      {
        v13 = i - 4;
        if ( i - 4 >= (unsigned __int64)LODWORD(sprites->max_length) )
          break;
        v14 = (UnityEngine_Object_o *)*((_QWORD *)&sprites->obj.klass + i);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        v8 = (EventInfoHappinessCounterControl_o *)UnityEngine_Object__op_Equality(v14, 0, 0);
        if ( ((unsigned __int8)v8 & 1) == 0 )
        {
          max_length_low = LODWORD(sprites->max_length);
          if ( (__int64)v13 <= v10 )
          {
            if ( v13 >= max_length_low )
              break;
            v20 = (UISprite_o *)*((_QWORD *)&sprites->obj.klass + i);
            DigitNumber = EventInfoHappinessCounterControl__GetDigitNumber(v8, number, v11, v15);
            v21 = System_Int64__ToString((int64_t)&DigitNumber, 0);
            v22 = System_String__Concat_75438412((System_String_o *)StringLiteral_20025/*"event_counter_number_"*/, v21, 0);
            v8 = (EventInfoHappinessCounterControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(v6, v20, v22, 0);
            if ( v13 >= LODWORD(sprites->max_length) )
              break;
            v24 = *((_QWORD *)&sprites->obj.klass + i);
            if ( !v24 )
              sub_21FFECC(0, v23);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v24 + 840LL))(v24, *(_QWORD *)(*(_QWORD *)v24 + 848LL));
          }
          else
          {
            if ( v13 >= max_length_low )
              break;
            v17 = (UISprite_o *)*((_QWORD *)&sprites->obj.klass + i);
            v27 = 0;
            v18 = System_Int32__ToString((int32_t)&v27, 0);
            v19 = System_String__Concat_75438412((System_String_o *)StringLiteral_20025/*"event_counter_number_"*/, v18, 0);
            EventInfoUIBase__SetSpriteByLocalAtlas(v6, v17, v19, 0);
          }
          ++v11;
        }
        v8 = (EventInfoHappinessCounterControl_o *)System_Linq_Enumerable__Count_object_(
                                                     (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                     (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_UISprite___);
        v25 = i - 3;
        if ( v25 >= (int)v8 )
          return;
      }
      sub_21FFED4(v8);
    }
  }
}


void EventInfoHappinessCounterControl__SetUIDisp(
        EventInfoHappinessCounterControl_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  EventInfoUIBase__SetUIDisp((EventInfoUIBase_o *)this, isDisp, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v6);
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0);
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
  __int64 v4; // x1
  System_String_o *Master_object; // x0
  __int64 v6; // x1
  UILabel_o *v7; // x20
  int64_t eventPoint; // x21
  unsigned int localPosition; // s0 OVERLAPPED
  int v10; // s2
  __int64 v11; // x8
  int v12; // s1
  __int64 v13; // x1
  UnityEngine_Component_o *eventPointLabelRoot; // x8
  char v15; // w19
  bool v16; // w1
  EventUiEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593994A & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_EventUiMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventUiReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593994A = 1;
  }
  eventPointLabel = (UnityEngine_Object_o *)this->fields.eventPointLabel;
  entity = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(eventPointLabel, 0, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4);
    Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( Master_object )
    {
      if ( EventUiMaster__TryGetEntity((EventUiMaster_o *)Master_object, &entity, this->fields.eventPointGroupId, 1, 0) )
      {
        v7 = this->fields.eventPointLabel;
        eventPoint = this->fields.eventPoint;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
        Master_object = LocalizationManager__GetNumberFormatLong(eventPoint, 0);
        if ( v7 )
        {
          UILabel__set_text(v7, Master_object, 0);
          Master_object = (System_String_o *)this->fields.eventPointLabelRoot;
          if ( Master_object )
          {
            localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)Master_object,
                                            0);
            Master_object = (System_String_o *)this->fields.eventPointLabelRoot;
            if ( Master_object )
            {
              v10 = 0;
              v11 = 148;
              if ( !this->fields.isHappinessPointCountStop )
                v11 = 144;
              v12 = *(_DWORD *)((char *)&this->klass + v11);
              UnityEngine_Transform__set_localPosition(
                (UnityEngine_Transform_o *)Master_object,
                *(UnityEngine_Vector3_o *)&localPosition,
                0);
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
              Master_object = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
              if ( Master_object )
              {
                Master_object = (System_String_o *)EventUiReleaseMaster__IsOpen(
                                                     (EventUiReleaseMaster_o *)Master_object,
                                                     entity,
                                                     0);
                eventPointLabelRoot = (UnityEngine_Component_o *)this->fields.eventPointLabelRoot;
                if ( eventPointLabelRoot )
                {
                  v15 = (char)Master_object;
                  Master_object = (System_String_o *)UnityEngine_Component__get_gameObject(eventPointLabelRoot, 0);
                  if ( Master_object )
                  {
                    v16 = v15 & 1;
LABEL_26:
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v16, 0);
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
            v16 = 0;
            goto LABEL_26;
          }
        }
      }
    }
    sub_21FFECC(Master_object, v6);
  }
}


void EventInfoHappinessCounterControl__SetupEventPointBg(
        EventInfoHappinessCounterControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *eventPointBgSprite; // x20
  __int64 v4; // x1
  struct UISprite_o *v5; // x0

  if ( (byte_5939949 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20076/*"event_point_base"*/);
    byte_5939949 = 1;
  }
  eventPointBgSprite = (UnityEngine_Object_o *)this->fields.eventPointBgSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(eventPointBgSprite, 0, 0) )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.eventPointBgSprite,
      (System_String_o *)StringLiteral_20076/*"event_point_base"*/,
      0);
    v5 = this->fields.eventPointBgSprite;
    if ( !v5 )
      sub_21FFECC(0, v4);
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

  if ( (byte_593994C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593994C = 1;
  }
  happinessCounterNumberSpRoot = (UnityEngine_Object_o *)this->fields.happinessCounterNumberSpRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(happinessCounterNumberSpRoot, 0, 0)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.happinessCounterNumberSp, 0) )
  {
    v5 = this->fields.happinessCounterNumberSpRoot;
    if ( !v5 )
      sub_21FFECC(0, v4);
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
  __int64 v4; // x1
  UnityEngine_Object_o *happinessCounterBgSpriteMax; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_593994B & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_20023/*"event_counter_base_first"*/);
    sub_21FFC50(&StringLiteral_20024/*"event_counter_base_max"*/);
    byte_593994B = 1;
  }
  happinessCounterBgSpriteFirst = (UnityEngine_Object_o *)this->fields.happinessCounterBgSpriteFirst;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(happinessCounterBgSpriteFirst, 0, 0) )
  {
    happinessCounterBgSpriteMax = (UnityEngine_Object_o *)this->fields.happinessCounterBgSpriteMax;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Equality(happinessCounterBgSpriteMax, 0, 0) )
    {
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.happinessCounterBgSpriteFirst,
        (System_String_o *)StringLiteral_20023/*"event_counter_base_first"*/,
        0);
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.happinessCounterBgSpriteMax,
        (System_String_o *)StringLiteral_20024/*"event_counter_base_max"*/,
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
        sub_21FFECC(gameObject, v6);
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
    sub_21FFECC(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, entity->fields.eventId, 0);
}