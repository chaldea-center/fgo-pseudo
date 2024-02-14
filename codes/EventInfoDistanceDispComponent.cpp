void __fastcall EventInfoDistanceDispComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_42155B0 & 1) == 0 )
  {
    sub_B0D8A4(&EventInfoDistanceDispComponent_TypeInfo, v1);
    byte_42155B0 = 1;
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *conditionDic; // x0
  _BOOL8 v13; // x0
  Il2CppObject *current; // x19
  float v15; // s9
  EventInfoDistanceDispComponent_c *v16; // x0
  System_String_o *monitor; // x19
  System_String_o *v18; // x19
  int v19; // w8
  EventInfoDistanceDispComponent_c *v20; // x0
  EventInfoDistanceDispComponent_c *v21; // x0
  EventInfoDistanceDispComponent_c *v22; // x0
  System_String_o *v23; // x19
  Il2CppObject *v24; // x1
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+0h] [xbp-80h] BYREF
  int v27; // [xsp+18h] [xbp-68h]
  int v28; // [xsp+2Ch] [xbp-54h]
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42155AF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__get_Current__,
      v6);
    sub_B0D8A4(&EventInfoDistanceDispComponent_TypeInfo, v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__,
      v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&float_TypeInfo, v10);
    sub_B0D8A4(&StringLiteral_1/*""*/, v11);
    byte_42155AF = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v28 = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.conditionDic, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  conditionDic = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.conditionDic;
  if ( !conditionDic )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    conditionDic,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
  v29 = v26;
  while ( 2 )
  {
    v13 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    if ( v13 )
    {
      current = v29.fields.current;
      if ( !v29.fields.current )
        sub_B0D97C(v13);
      switch ( LODWORD(v29.fields.current[1].klass) )
      {
        case 1:
          if ( *((float *)&v29.fields.current[1].klass + 1) >= restDistance )
            continue;
          v15 = 0.0;
          if ( restDistance > 0.0 )
          {
            v21 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v21 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v15 = restDistance / (float)v21->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 2:
          if ( *((float *)&v29.fields.current[1].klass + 1) > restDistance )
            continue;
          v15 = 0.0;
          if ( restDistance > 0.0 )
          {
            v16 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v16 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v15 = restDistance / (float)v16->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 3:
          if ( *((float *)&v29.fields.current[1].klass + 1) < restDistance )
            continue;
          v15 = 0.0;
          if ( restDistance > 0.0 )
          {
            v22 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v22 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v15 = restDistance / (float)v22->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 4:
          if ( *((float *)&v29.fields.current[1].klass + 1) <= restDistance )
            continue;
          v15 = 0.0;
          if ( restDistance > 0.0 )
          {
            v20 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v20 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v15 = restDistance / (float)v20->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        default:
          continue;
      }
      v23 = LocalizationManager__Get(monitor, 0LL);
      *(float *)&v26.fields.list = v15;
      v24 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v26);
      v18 = System_String__Format(v23, v24, 0LL);
      v19 = 368;
    }
    else
    {
      v18 = 0LL;
      v19 = 362;
    }
    break;
  }
  v27 = v19;
  v28 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
  if ( v27 == 362 )
  {
    v28 = 0;
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( v27 != 368 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v28 = 0;
  return v18;
}


void __fastcall EventInfoDistanceDispComponent__Initialization(
        EventInfoDistanceDispComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_String_o *IsNullOrEmpty; // x0
  UnityEngine_Object_o *bgSprite; // x20
  System_String_o *bgSpriteName; // x20
  UISprite_o *v17; // x21
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *titleText; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x21
  const MethodInfo *v22; // x1

  if ( (byte_42155AD & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, entity);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v10);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_5652/*"EVENT_INFO_DISTANCE_TXT_"*/, v12);
    sub_B0D8A4(&StringLiteral_1/*""*/, v13);
    byte_42155AD = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventUiEntity,
    (System_Int32_array **)entity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.bgSpriteName, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    IsNullOrEmpty = (System_String_o *)UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      bgSpriteName = this->fields.bgSpriteName;
      v17 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      IsNullOrEmpty = (System_String_o *)AtlasManager__SetEventUI(v17, bgSpriteName, 0LL);
    }
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_19;
  titleText = this->fields.titleText;
  v20 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
  v21 = System_String__Concat_43849904((System_String_o *)StringLiteral_5652/*"EVENT_INFO_DISTANCE_TXT_"*/, v20, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  IsNullOrEmpty = LocalizationManager__Get(v21, 0LL);
  if ( !titleText
    || (UILabel__set_text(titleText, IsNullOrEmpty, 0LL),
        (IsNullOrEmpty = (System_String_o *)this->fields.distanceText) == 0LL) )
  {
LABEL_19:
    sub_B0D97C(IsNullOrEmpty);
  }
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.isUpdate = 1;
  EventInfoDistanceDispComponent__UpdateDisp(this, v22);
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

  if ( (byte_42155AE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42155AE = 1;
  }
  if ( this->fields.isUpdate )
  {
    distanceText = (UnityEngine_Object_o *)this->fields.distanceText;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
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
        sub_B0D97C(RestDistance);
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