void EventInfoDistanceDispComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C58278 & 1) == 0 )
  {
    sub_1C3E564(&EventInfoDistanceDispComponent_TypeInfo);
    byte_4C58278 = 1;
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__o *conditionDic; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x19
  float v10; // s9
  EventInfoDistanceDispComponent_c *v11; // x0
  System_String_o *monitor; // x19
  System_String_o *v13; // x19
  EventInfoDistanceDispComponent_c *v14; // x0
  EventInfoDistanceDispComponent_c *v15; // x0
  EventInfoDistanceDispComponent_c *v16; // x0
  System_String_o *v17; // x19
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C58277 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__get_Current__);
    sub_1C3E564(&EventInfoDistanceDispComponent_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C58277 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.conditionDic, 0) )
    return (System_String_o *)StringLiteral_1/*""*/;
  conditionDic = this->fields.conditionDic;
  if ( !conditionDic )
    sub_1C3E7C0(0, v5);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)conditionDic,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
  v27 = v26;
  while ( 2 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v27,
           (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    if ( !v7 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v27,
        (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1C3E7C0(v7, v8);
    switch ( LODWORD(v27.fields._current[1].klass) )
    {
      case 1:
        if ( *((float *)&v27.fields._current[1].klass + 1) >= restDistance )
          continue;
        v10 = 0.0;
        if ( restDistance > 0.0 )
        {
          v16 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
            v16 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v10 = restDistance / (float)v16->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        break;
      case 2:
        if ( *((float *)&v27.fields._current[1].klass + 1) > restDistance )
          continue;
        v10 = 0.0;
        if ( restDistance > 0.0 )
        {
          v11 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
            v11 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v10 = restDistance / (float)v11->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        break;
      case 3:
        if ( *((float *)&v27.fields._current[1].klass + 1) < restDistance )
          continue;
        v10 = 0.0;
        if ( restDistance > 0.0 )
        {
          v15 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
            v15 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v10 = restDistance / (float)v15->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        break;
      case 4:
        if ( *((float *)&v27.fields._current[1].klass + 1) <= restDistance )
          continue;
        v10 = 0.0;
        if ( restDistance > 0.0 )
        {
          v14 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
            v14 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v10 = restDistance / (float)v14->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        break;
      default:
        continue;
    }
    break;
  }
  v17 = LocalizationManager__Get(monitor, 0);
  *(float *)&v26.fields._list = v10;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v26, v18, v19, v20, v21, v22, v23);
  v13 = System_String__Format(v17, v24, 0);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
  return v13;
}


void EventInfoDistanceDispComponent__Initialization(
        EventInfoDistanceDispComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v7; // x1
  UnityEngine_Object_o *bgSprite; // x20
  System_String_o *bgSpriteName; // x20
  UISprite_o *v10; // x21
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *titleText; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x21
  const MethodInfo *v15; // x1

  if ( (byte_4C58275 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_5617/*"EVENT_INFO_DISTANCE_TXT_"*/);
    sub_1C3E564(&StringLiteral_1/*""*/);
    byte_4C58275 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.eventUiEntity, (int32_t)entity, (int32_t)method, v3);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(bgSprite, 0, 0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v10 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      IsNullOrEmpty = (System_String_o *)AtlasManager__SetEventUI(v10, bgSpriteName, 0);
    }
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_16;
  titleText = this->fields.titleText;
  v13 = System_Int32__ToString((int)eventUiEntity + 24, 0);
  v14 = System_String__Concat_63636468((System_String_o *)StringLiteral_5617/*"EVENT_INFO_DISTANCE_TXT_"*/, v13, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get(v14, 0);
  if ( !titleText
    || (UILabel__set_text(titleText, IsNullOrEmpty, 0),
        (IsNullOrEmpty = (System_String_o *)this->fields.distanceText) == 0) )
  {
LABEL_16:
    sub_1C3E7C0(IsNullOrEmpty, v7);
  }
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.isUpdate = 1;
  EventInfoDistanceDispComponent__UpdateDisp(this, v15);
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

  if ( (byte_4C58276 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C58276 = 1;
  }
  if ( this->fields.isUpdate )
  {
    distanceText = (UnityEngine_Object_o *)this->fields.distanceText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1C3E7C0(RestDistance, v9);
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