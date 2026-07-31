void EventInfoDistanceDispComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5939939 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoDistanceDispComponent_TypeInfo);
    byte_5939939 = 1;
  }
  EventInfoDistanceDispComponent_TypeInfo->static_fields->DISTANCE_DISP_FRACTION = 1000;
}


void EventInfoDistanceDispComponent___ctor(EventInfoDistanceDispComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


void EventInfoDistanceDispComponent__Awake(EventInfoDistanceDispComponent_o *this, const MethodInfo *method)
{
  System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0);
}


System_String_o *EventInfoDistanceDispComponent__GetRestDistance(
        EventInfoDistanceDispComponent_o *this,
        float restDistance,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *conditionDic; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__o *v7; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x19
  int klass; // w8
  float v12; // s9
  EventInfoDistanceDispComponent_c *v13; // x0
  System_String_o *monitor; // x19
  System_String_o *v15; // x19
  EventInfoDistanceDispComponent_c *v16; // x0
  EventInfoDistanceDispComponent_c *v17; // x0
  EventInfoDistanceDispComponent_c *v18; // x0
  System_String_o *v19; // x19
  Il2CppObject *v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF
  float v24; // [xsp+5Ch] [xbp-14h] BYREF

  if ( (byte_5939938 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__get_Current__);
    sub_21FFC50(&EventInfoDistanceDispComponent_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939938 = 1;
  }
  conditionDic = (System_Collections_ICollection_o *)this->fields.conditionDic;
  memset(&v23, 0, sizeof(v23));
  if ( BasicHelper__IsNullOrEmpty(conditionDic, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  v7 = this->fields.conditionDic;
  if ( !v7 )
    sub_21FFECC(0, v6);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)v7,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
  v23 = v22;
  v22.fields._list = 0;
  *(_QWORD *)&v22.fields._index = &v23;
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v23,
               (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
        if ( !v8 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v23,
            (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
          return (System_String_o *)StringLiteral_1/*""*/;
        }
        current = v23.fields._current;
        if ( !v23.fields._current )
          sub_21FFECC(v8, v9);
        klass = (int)v23.fields._current[1].klass;
        if ( klass > 2 )
          break;
        if ( klass == 1 )
        {
          if ( *((float *)&v23.fields._current[1].klass + 1) < restDistance )
          {
            v12 = 0.0;
            if ( restDistance > 0.0 )
            {
              v17 = EventInfoDistanceDispComponent_TypeInfo;
              if ( !*(&EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo, v9);
                v17 = EventInfoDistanceDispComponent_TypeInfo;
              }
              v12 = restDistance / (float)v17->static_fields->DISTANCE_DISP_FRACTION;
            }
            monitor = (System_String_o *)current[1].monitor;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
            goto LABEL_49;
          }
        }
        else if ( klass == 2 && *((float *)&v23.fields._current[1].klass + 1) <= restDistance )
        {
          v12 = 0.0;
          if ( restDistance > 0.0 )
          {
            v18 = EventInfoDistanceDispComponent_TypeInfo;
            if ( !*(&EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo, v9);
              v18 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v12 = restDistance / (float)v18->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
          goto LABEL_49;
        }
      }
      if ( klass == 3 )
        break;
      if ( klass == 4 && *((float *)&v23.fields._current[1].klass + 1) > restDistance )
      {
        v12 = 0.0;
        if ( restDistance > 0.0 )
        {
          v16 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !*(&EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo, v9);
            v16 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v12 = restDistance / (float)v16->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
        goto LABEL_49;
      }
    }
  }
  while ( *((float *)&v23.fields._current[1].klass + 1) < restDistance );
  v12 = 0.0;
  if ( restDistance > 0.0 )
  {
    v13 = EventInfoDistanceDispComponent_TypeInfo;
    if ( !*(&EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo, v9);
      v13 = EventInfoDistanceDispComponent_TypeInfo;
    }
    v12 = restDistance / (float)v13->static_fields->DISTANCE_DISP_FRACTION;
  }
  monitor = (System_String_o *)current[1].monitor;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
LABEL_49:
  v19 = LocalizationManager__Get(monitor, 0);
  v24 = v12;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v24);
  v15 = System_String__Format(v19, v20, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
  return v15;
}


void EventInfoDistanceDispComponent__Initialization(
        EventInfoDistanceDispComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *bgSprite; // x20
  UISprite_o *v13; // x20
  System_String_o *bgSpriteName; // x21
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *titleText; // x20
  System_String_o *v17; // x0
  __int64 v18; // x1
  System_String_o *v19; // x21
  const MethodInfo *v20; // x1

  if ( (byte_5939936 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5805/*"EVENT_INFO_DISTANCE_TXT_"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5939936 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiEntity,
    (int32_t)entity,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(bgSprite, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v13 = this->fields.bgSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
      IsNullOrEmpty = (System_String_o *)AtlasManager__SetEventUI(v13, bgSpriteName, 0);
    }
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_16;
  titleText = this->fields.titleText;
  v17 = System_Int32__ToString((int)eventUiEntity + 24, 0);
  v19 = System_String__Concat_75438412((System_String_o *)StringLiteral_5805/*"EVENT_INFO_DISTANCE_TXT_"*/, v17, 0);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
  IsNullOrEmpty = LocalizationManager__Get(v19, 0);
  if ( !titleText
    || (UILabel__set_text(titleText, IsNullOrEmpty, 0),
        (IsNullOrEmpty = (System_String_o *)this->fields.distanceText) == 0) )
  {
LABEL_16:
    sub_21FFECC(IsNullOrEmpty, v11);
  }
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.isUpdate = 1;
  EventInfoDistanceDispComponent__UpdateDisp(this, v20);
}


// attributes: thunk
void EventInfoDistanceDispComponent__Update(EventInfoDistanceDispComponent_o *this, const MethodInfo *method)
{
  EventInfoDistanceDispComponent__UpdateDisp(this, method);
}


void EventInfoDistanceDispComponent__UpdateDisp(EventInfoDistanceDispComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *distanceText; // x20
  float RemainingDistance; // s0
  UILabel_o *v5; // x20
  float v6; // s8
  const MethodInfo *v7; // x1
  System_String_o *RestDistance; // x0
  __int64 v9; // x1

  if ( (byte_5939937 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5939937 = 1;
  }
  if ( this->fields.isUpdate )
  {
    distanceText = (UnityEngine_Object_o *)this->fields.distanceText;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(distanceText, 0, 0) )
    {
      RemainingDistance = EventMapGimmickMoveManager__GetRemainingDistance(this->fields.mapGimmickId, 0);
      v5 = this->fields.distanceText;
      v6 = RemainingDistance;
      RestDistance = EventInfoDistanceDispComponent__GetRestDistance(this, RemainingDistance, v7);
      if ( !v5
        || (UILabel__set_text(v5, RestDistance, 0),
            (RestDistance = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
      {
        sub_21FFECC(RestDistance, v9);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestDistance, 1, 0);
      if ( v6 <= 0.0 )
        this->fields.isUpdate = 0;
    }
  }
}


void EventInfoDistanceDispComponent_KeyPositionPairData___ctor(
        EventInfoDistanceDispComponent_KeyPositionPairData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}