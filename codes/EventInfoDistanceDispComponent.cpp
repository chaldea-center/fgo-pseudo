void __fastcall EventInfoDistanceDispComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B16A56 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoDistanceDispComponent_TypeInfo, v1, v2);
    byte_4B16A56 = 1;
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
  __int64 v3; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  struct System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__o *conditionDic; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x19
  float v25; // s9
  EventInfoDistanceDispComponent_c *v26; // x0
  System_String_o *monitor; // x19
  System_String_o *v28; // x19
  EventInfoDistanceDispComponent_c *v29; // x0
  EventInfoDistanceDispComponent_c *v30; // x0
  EventInfoDistanceDispComponent_c *v31; // x0
  System_String_o *v32; // x19
  Il2CppObject *v33; // x1
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B16A55 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__,
      method,
      v3);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(&EventInfoDistanceDispComponent_TypeInfo, v10, v11);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__,
      v12,
      v13);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&float_TypeInfo, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B16A55 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.conditionDic, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  conditionDic = this->fields.conditionDic;
  if ( !conditionDic )
    sub_1BCAA3C(0LL, v20);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)conditionDic,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
  v36 = v35;
  while ( 2 )
  {
    v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    if ( !v22 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v36,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
      return (System_String_o *)StringLiteral_1/*""*/;
    }
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1BCAA3C(v22, v23);
    switch ( LODWORD(v36.fields._current[1].klass) )
    {
      case 1:
        if ( *((float *)&v36.fields._current[1].klass + 1) >= restDistance )
          continue;
        v25 = 0.0;
        if ( restDistance > 0.0 )
        {
          v31 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo, v23);
            v31 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v25 = restDistance / (float)v31->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
        break;
      case 2:
        if ( *((float *)&v36.fields._current[1].klass + 1) > restDistance )
          continue;
        v25 = 0.0;
        if ( restDistance > 0.0 )
        {
          v26 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo, v23);
            v26 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v25 = restDistance / (float)v26->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
        break;
      case 3:
        if ( *((float *)&v36.fields._current[1].klass + 1) < restDistance )
          continue;
        v25 = 0.0;
        if ( restDistance > 0.0 )
        {
          v30 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo, v23);
            v30 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v25 = restDistance / (float)v30->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
        break;
      case 4:
        if ( *((float *)&v36.fields._current[1].klass + 1) <= restDistance )
          continue;
        v25 = 0.0;
        if ( restDistance > 0.0 )
        {
          v29 = EventInfoDistanceDispComponent_TypeInfo;
          if ( !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo, v23);
            v29 = EventInfoDistanceDispComponent_TypeInfo;
          }
          v25 = restDistance / (float)v29->static_fields->DISTANCE_DISP_FRACTION;
        }
        monitor = (System_String_o *)current[1].monitor;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
        break;
      default:
        continue;
    }
    break;
  }
  v32 = LocalizationManager__Get(monitor, 0LL);
  *(float *)&v35.fields._list = v25;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v35);
  v28 = System_String__Format(v32, v33, 0LL);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
  return v28;
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_String_o *IsNullOrEmpty; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *bgSprite; // x20
  System_String_o *bgSpriteName; // x20
  UISprite_o *v22; // x21
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *titleText; // x20
  System_String_o *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x21
  const MethodInfo *v28; // x1

  if ( (byte_4B16A53 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, entity, method);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_5712/*"EVENT_INFO_DISTANCE_TXT_"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v16, v17);
    byte_4B16A53 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_1BCA784(
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
    IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v22 = this->fields.bgSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v19);
      IsNullOrEmpty = (System_String_o *)AtlasManager__SetEventUI(v22, bgSpriteName, 0LL);
    }
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_16;
  titleText = this->fields.titleText;
  v25 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
  v27 = System_String__Concat_62401220((System_String_o *)StringLiteral_5712/*"EVENT_INFO_DISTANCE_TXT_"*/, v25, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  IsNullOrEmpty = LocalizationManager__Get(v27, 0LL);
  if ( !titleText
    || (UILabel__set_text(titleText, IsNullOrEmpty, 0LL),
        (IsNullOrEmpty = (System_String_o *)this->fields.distanceText) == 0LL) )
  {
LABEL_16:
    sub_1BCAA3C(IsNullOrEmpty, v19);
  }
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.isUpdate = 1;
  EventInfoDistanceDispComponent__UpdateDisp(this, v28);
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
  __int64 v2; // x2
  UnityEngine_Object_o *distanceText; // x20
  float RemainingDistance; // s0
  UILabel_o *v6; // x20
  float v7; // s8
  const MethodInfo *v8; // x1
  System_String_o *RestDistance; // x0
  __int64 v10; // x1

  if ( (byte_4B16A54 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B16A54 = 1;
  }
  if ( this->fields.isUpdate )
  {
    distanceText = (UnityEngine_Object_o *)this->fields.distanceText;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(distanceText, 0LL, 0LL) )
    {
      RemainingDistance = EventMapGimmickMoveManager__GetRemainingDistance(this->fields.mapGimmickId, 0LL);
      v6 = this->fields.distanceText;
      v7 = RemainingDistance;
      RestDistance = EventInfoDistanceDispComponent__GetRestDistance(this, RemainingDistance, v8);
      if ( !v6
        || (UILabel__set_text(v6, RestDistance, 0LL),
            (RestDistance = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL) )
      {
        sub_1BCAA3C(RestDistance, v10);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestDistance, 1, 0LL);
      if ( v7 <= 0.0 )
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