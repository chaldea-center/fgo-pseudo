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
    sub_1B9026C(this, method);
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

  if ( (byte_4A70842 & 1) == 0 )
  {
    sub_1B90010(&System_Math_TypeInfo, num);
    byte_4A70842 = 1;
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

  if ( (byte_4A70843 & 1) == 0 )
  {
    sub_1B90010(&System_Math_TypeInfo, number);
    byte_4A70843 = 1;
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
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  EventUiEntity_o *v14; // x20
  System_Action_o *v15; // x23
  __int64 v16; // x8
  struct UISprite_array *happinessCounterNumberSp; // x9

  if ( (byte_4A7083C & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, entity);
    sub_1B90010(&Method_EventInfoHappinessCounterControl___c__DisplayClass22_0__Initialization_b__0__, v5);
    sub_1B90010(&EventInfoHappinessCounterControl___c__DisplayClass22_0_TypeInfo, v6);
    byte_4A7083C = 1;
  }
  v7 = sub_1B9025C(EventInfoHappinessCounterControl___c__DisplayClass22_0_TypeInfo);
  EventInfoHappinessCounterControl___c__DisplayClass22_0___ctor(
    (EventInfoHappinessCounterControl___c__DisplayClass22_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = entity;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)entity, v12, v13);
  EventInfoUIBase__Initialization((EventInfoUIBase_o *)this, *(EventUiEntity_o **)(v7 + 24), 0LL);
  v14 = *(EventUiEntity_o **)(v7 + 24);
  v15 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
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
    sub_1B9026C(v8, v9);
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
  unsigned __int64 v12; // x24
  int v13; // w25
  signed __int64 v14; // x26
  UISprite_o **m_Items; // x27
  UnityEngine_Object_o *v16; // x22
  const MethodInfo *v17; // x3
  UISprite_o *v18; // x22
  System_String_o *v19; // x0
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  UISprite_o *v23; // x0
  int64_t DigitNumber; // [xsp+0h] [xbp-70h] BYREF
  int v25; // [xsp+Ch] [xbp-64h] BYREF

  v6 = (EventInfoUIBase_o *)this;
  if ( (byte_4A70841 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Count_UISprite___, number);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    this = (EventInfoHappinessCounterControl_o *)sub_1B90010(&StringLiteral_19187/*"event_counter_number_"*/, v8);
    byte_4A70841 = 1;
  }
  v25 = 0;
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = EventInfoHappinessCounterControl__GetDigit(this, number, (const MethodInfo *)sprites);
    v10 = (EventInfoHappinessCounterControl_o *)System_Linq_Enumerable__Count_object_(
                                                  (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                  (const MethodInfo_2EAB334 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)v10 >= 1 )
    {
      v12 = 0LL;
      v13 = 0;
      v14 = Digit;
      m_Items = sprites->m_Items;
      do
      {
        if ( v12 >= sprites->max_length )
LABEL_19:
          sub_1B90274(v10, v11);
        v16 = (UnityEngine_Object_o *)m_Items[v12];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v10 = (EventInfoHappinessCounterControl_o *)UnityEngine_Object__op_Equality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)v10 & 1) == 0 )
        {
          if ( v12 >= sprites->max_length )
            goto LABEL_19;
          v18 = m_Items[v12];
          if ( (__int64)v12 <= v14 )
          {
            DigitNumber = EventInfoHappinessCounterControl__GetDigitNumber(v10, number, v13, v17);
            v21 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v22 = System_String__Concat_61787092((System_String_o *)StringLiteral_19187/*"event_counter_number_"*/, v21, 0LL);
            v10 = (EventInfoHappinessCounterControl_o *)EventInfoUIBase__SetSpriteByLocalAtlas(v6, v18, v22, 0LL);
            if ( v12 >= sprites->max_length )
              goto LABEL_19;
            v23 = m_Items[v12];
            if ( !v23 )
              sub_1B9026C(0LL, v11);
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v23->klass->vtable._33_MakePixelPerfect.method)(
              v23,
              v23->klass->vtable._34_get_minWidth.methodPtr);
          }
          else
          {
            v25 = 0;
            v19 = System_Int32__ToString((int32_t)&v25, 0LL);
            v20 = System_String__Concat_61787092((System_String_o *)StringLiteral_19187/*"event_counter_number_"*/, v19, 0LL);
            EventInfoUIBase__SetSpriteByLocalAtlas(v6, v18, v20, 0LL);
          }
          ++v13;
        }
        ++v12;
        v10 = (EventInfoHappinessCounterControl_o *)System_Linq_Enumerable__Count_object_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                      (const MethodInfo_2EAB334 *)Method_System_Linq_Enumerable_Count_UISprite___);
      }
      while ( (__int64)v12 < (int)v10 );
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
    sub_1B9026C(0LL, v6);
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
  UILabel_o *v8; // x20
  int64_t eventPoint; // x21
  System_String_o *NumberFormatLong; // x0
  __int64 v11; // x1
  unsigned int localPosition; // s0
  int v13; // s2
  __int64 v14; // x8
  int v15; // s1
  UnityEngine_Component_o *eventPointLabelRoot; // x8
  char v17; // w19
  EventUiEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A7083E & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_EventUiMaster___, method);
    sub_1B90010(&Method_DataManager_GetMaster_EventUiReleaseMaster___, v3);
    sub_1B90010(&DataManager_TypeInfo, v4);
    sub_1B90010(&LocalizationManager_TypeInfo, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    byte_4A7083E = 1;
  }
  entity = 0LL;
  eventPointLabel = (UnityEngine_Object_o *)this->fields.eventPointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventPointLabel, 0LL, 0LL) )
  {
    v8 = this->fields.eventPointLabel;
    eventPoint = this->fields.eventPoint;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    NumberFormatLong = LocalizationManager__GetNumberFormatLong(eventPoint, 0LL);
    if ( !v8 )
      goto LABEL_24;
    UILabel__set_text(v8, NumberFormatLong, 0LL);
    NumberFormatLong = (System_String_o *)this->fields.eventPointLabelRoot;
    if ( !NumberFormatLong )
      goto LABEL_24;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(
                                    (UnityEngine_Transform_o *)NumberFormatLong,
                                    0LL);
    NumberFormatLong = (System_String_o *)this->fields.eventPointLabelRoot;
    if ( !NumberFormatLong )
      goto LABEL_24;
    v13 = 0;
    v14 = 144LL;
    if ( this->fields.isHappinessPointCountStop )
      v14 = 148LL;
    v15 = *(_DWORD *)((char *)&this->klass + v14);
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)NumberFormatLong,
      *(UnityEngine_Vector3_o *)&localPosition,
      0LL);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    NumberFormatLong = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventUiMaster___);
    if ( !NumberFormatLong )
      goto LABEL_24;
    if ( !EventUiMaster__TryGetEntity(
            (EventUiMaster_o *)NumberFormatLong,
            &entity,
            this->fields.eventPointGroupId,
            1,
            0LL) )
      return;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    NumberFormatLong = (System_String_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_EventUiReleaseMaster___);
    if ( !NumberFormatLong
      || (NumberFormatLong = (System_String_o *)EventUiReleaseMaster__IsOpen(
                                                  (EventUiReleaseMaster_o *)NumberFormatLong,
                                                  entity,
                                                  0LL),
          (eventPointLabelRoot = (UnityEngine_Component_o *)this->fields.eventPointLabelRoot) == 0LL)
      || (v17 = (char)NumberFormatLong,
          (NumberFormatLong = (System_String_o *)UnityEngine_Component__get_gameObject(eventPointLabelRoot, 0LL)) == 0LL) )
    {
LABEL_24:
      sub_1B9026C(NumberFormatLong, v11);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NumberFormatLong, v17 & 1, 0LL);
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

  if ( (byte_4A7083D & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_19232/*"event_point_base"*/, v3);
    byte_4A7083D = 1;
  }
  eventPointBgSprite = (UnityEngine_Object_o *)this->fields.eventPointBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(eventPointBgSprite, 0LL, 0LL) )
  {
    EventInfoUIBase__SetSpriteByLocalAtlas(
      (EventInfoUIBase_o *)this,
      this->fields.eventPointBgSprite,
      (System_String_o *)StringLiteral_19232/*"event_point_base"*/,
      0LL);
    v6 = this->fields.eventPointBgSprite;
    if ( !v6 )
      sub_1B9026C(0LL, v5);
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

  if ( (byte_4A70840 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    byte_4A70840 = 1;
  }
  happinessCounterNumberSpRoot = (UnityEngine_Object_o *)this->fields.happinessCounterNumberSpRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(happinessCounterNumberSpRoot, 0LL, 0LL)
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.happinessCounterNumberSp, 0LL) )
  {
    v5 = this->fields.happinessCounterNumberSpRoot;
    if ( !v5 )
      sub_1B9026C(0LL, v4);
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

  if ( (byte_4A7083F & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&StringLiteral_19185/*"event_counter_base_first"*/, v3);
    sub_1B90010(&StringLiteral_19186/*"event_counter_base_max"*/, v4);
    byte_4A7083F = 1;
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
        (System_String_o *)StringLiteral_19185/*"event_counter_base_first"*/,
        0LL);
      EventInfoUIBase__SetSpriteByLocalAtlas(
        (EventInfoUIBase_o *)this,
        this->fields.happinessCounterBgSpriteMax,
        (System_String_o *)StringLiteral_19186/*"event_counter_base_max"*/,
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
        sub_1B9026C(gameObject, v7);
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
    sub_1B9026C(this, method);
  EventInfoUIBase__LoadLocalAtlas((EventInfoUIBase_o *)this, entity->fields.eventId, 0LL);
}