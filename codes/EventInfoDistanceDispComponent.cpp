void __fastcall EventInfoDistanceDispComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BFDFAE & 1) == 0 )
  {
    sub_1C2E12C(&EventInfoDistanceDispComponent_TypeInfo, v1);
    byte_4BFDFAE = 1;
  }
  EventInfoDistanceDispComponent_TypeInfo->static_fields->DISTANCE_DISP_FRACTION = 1000;
}


void __fastcall EventInfoDistanceDispComponent___ctor(EventInfoDistanceDispComponent_o *this, const MethodInfo *method)
{
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


void __fastcall EventInfoDistanceDispComponent__Awake(EventInfoDistanceDispComponent_o *this, const MethodInfo *method)
{
  System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0LL);
}


System_String_o *__fastcall EventInfoDistanceDispComponent__GetRestDistance(
        EventInfoDistanceDispComponent_o *this,
        float restDistance,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__o *conditionDic; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x19
  float v17; // s9
  EventInfoDistanceDispComponent_c *v18; // x0
  System_String_o *monitor; // x19
  System_String_o *v20; // x19
  EventInfoDistanceDispComponent_c *v21; // x0
  EventInfoDistanceDispComponent_c *v22; // x0
  EventInfoDistanceDispComponent_c *v23; // x0
  System_String_o *v24; // x19
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  Il2CppObject *v28; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BFDFAD & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__,
      method);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__,
      v5);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__get_Current__,
      v6);
    sub_1C2E12C(&EventInfoDistanceDispComponent_TypeInfo, v7);
    sub_1C2E12C(
      &Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__,
      v8);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v9);
    sub_1C2E12C(&float_TypeInfo, v10);
    sub_1C2E12C(&StringLiteral_1/*""*/, v11);
    byte_4BFDFAD = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.conditionDic, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  conditionDic = this->fields.conditionDic;
  if ( !conditionDic )
    sub_1C2E388(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)conditionDic,
    (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
  v31 = v30;
  while ( 2 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    if ( !v14 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v31,
        (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    current = v31.fields._current;
    if ( !v31.fields._current )
      sub_1C2E388(v14, v15);
    switch ( LODWORD(v31.fields._current[1].klass) )
    {
      case 1:
        if ( *((float *)&v31.fields._current[1].klass + 1) >= restDistance )
          continue;
        v17 = 0.0;
        if ( restDistance > 0.0 )
        {
          v23 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
            v23 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v17 = restDistance / (float)v23->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        break;
      case 2:
        if ( *((float *)&v31.fields._current[1].klass + 1) > restDistance )
          continue;
        v17 = 0.0;
        if ( restDistance > 0.0 )
        {
          v18 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
            v18 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v17 = restDistance / (float)v18->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        break;
      case 3:
        if ( *((float *)&v31.fields._current[1].klass + 1) < restDistance )
          continue;
        v17 = 0.0;
        if ( restDistance > 0.0 )
        {
          v22 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
            v22 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v17 = restDistance / (float)v22->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        break;
      case 4:
        if ( *((float *)&v31.fields._current[1].klass + 1) <= restDistance )
          continue;
        v17 = 0.0;
        if ( restDistance > 0.0 )
        {
          v21 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
            v21 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v17 = restDistance / (float)v21->static_fields->DISTANCE_DISP_FRACTION;
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
  v24 = LocalizationManager__Get(monitor, 0LL);
  *(float *)&v30.fields._list = v17;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v30, v25, v26, v27);
  v20 = System_String__Format(v24, v28, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
  return v20;
}


void __fastcall EventInfoDistanceDispComponent__Initialization(
        EventInfoDistanceDispComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *IsNullOrEmpty; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *bgSprite; // x20
  System_String_o *bgSpriteName; // x20
  UISprite_o *v18; // x21
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *titleText; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x21
  const MethodInfo *v23; // x1

  if ( (byte_4BFDFAB & 1) == 0 )
  {
    sub_1C2E12C(&AtlasManager_TypeInfo, entity);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v10);
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_5742/*"EVENT_INFO_DISTANCE_TXT_"*/, v12);
    sub_1C2E12C(&StringLiteral_1/*""*/, v13);
    byte_4BFDFAB = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.eventUiEntity,
    (int64_t)entity,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v18 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      IsNullOrEmpty = (System_String_o *)AtlasManager__SetEventUI(v18, bgSpriteName, 0LL);
    }
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_16;
  titleText = this->fields.titleText;
  v21 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
  v22 = System_String__Concat_63235584((System_String_o *)StringLiteral_5742/*"EVENT_INFO_DISTANCE_TXT_"*/, v21, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = LocalizationManager__Get(v22, 0LL);
  if ( !titleText
    || (UILabel__set_text(titleText, IsNullOrEmpty, 0LL),
        (IsNullOrEmpty = (System_String_o *)this->fields.distanceText) == 0LL) )
  {
LABEL_16:
    sub_1C2E388(IsNullOrEmpty, v15);
  }
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.isUpdate = 1;
  EventInfoDistanceDispComponent__UpdateDisp(this, v23);
}


// attributes: thunk
void __fastcall EventInfoDistanceDispComponent__Update(
        EventInfoDistanceDispComponent_o *this,
        const MethodInfo *method)
{
  EventInfoDistanceDispComponent__UpdateDisp(this, method);
}


void __fastcall EventInfoDistanceDispComponent__UpdateDisp(
        EventInfoDistanceDispComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *distanceText; // x20
  float RemainingDistance; // s0
  UILabel_o *v5; // x20
  float v6; // s8
  const MethodInfo *v7; // x1
  System_String_o *RestDistance; // x0
  __int64 v9; // x1

  if ( (byte_4BFDFAC & 1) == 0 )
  {
    sub_1C2E12C(&UnityEngine_Object_TypeInfo, method);
    byte_4BFDFAC = 1;
  }
  if ( this->fields.isUpdate )
  {
    distanceText = (UnityEngine_Object_o *)this->fields.distanceText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(distanceText, 0LL, 0LL) )
    {
      RemainingDistance = EventMapGimmickMoveManager__GetRemainingDistance(this->fields.mapGimmickId, 0LL);
      v5 = this->fields.distanceText;
      v6 = RemainingDistance;
      RestDistance = EventInfoDistanceDispComponent__GetRestDistance(this, RemainingDistance, v7);
      if ( !v5
        || (UILabel__set_text(v5, RestDistance, 0LL),
            (RestDistance = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL) )
      {
        sub_1C2E388(RestDistance, v9);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestDistance, 1, 0LL);
      if ( v6 <= 0.0 )
        this->fields.isUpdate = 0;
    }
  }
}


void __fastcall EventInfoDistanceDispComponent_KeyPositionPairData___ctor(
        EventInfoDistanceDispComponent_KeyPositionPairData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}