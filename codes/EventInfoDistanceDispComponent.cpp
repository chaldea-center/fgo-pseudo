void __fastcall EventInfoDistanceDispComponent___cctor(const MethodInfo *method)
{
  if ( (byte_438C202 & 1) == 0 )
  {
    sub_B775C4(&EventInfoDistanceDispComponent_TypeInfo);
    byte_438C202 = 1;
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *conditionDic; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x19
  float v10; // s9
  EventInfoDistanceDispComponent_c *v11; // x0
  System_String_o *monitor; // x19
  System_String_o *v13; // x19
  int v14; // w8
  EventInfoDistanceDispComponent_c *v15; // x0
  EventInfoDistanceDispComponent_c *v16; // x0
  EventInfoDistanceDispComponent_c *v17; // x0
  System_String_o *v18; // x19
  __int64 v19; // x2
  Il2CppObject *v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+0h] [xbp-80h] BYREF
  int v23; // [xsp+18h] [xbp-68h]
  int v24; // [xsp+2Ch] [xbp-54h]
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_438C201 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__get_Current__);
    sub_B775C4(&EventInfoDistanceDispComponent_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C201 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v24 = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.conditionDic, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  conditionDic = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.conditionDic;
  if ( !conditionDic )
    sub_B7769C(0LL, v5);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    conditionDic,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
  v25 = v22;
  while ( 2 )
  {
    v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v25,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    if ( v7 )
    {
      current = v25.fields.current;
      if ( !v25.fields.current )
        sub_B7769C(v7, v8);
      switch ( LODWORD(v25.fields.current[1].klass) )
      {
        case 1:
          if ( *((float *)&v25.fields.current[1].klass + 1) >= restDistance )
            continue;
          v10 = 0.0;
          if ( restDistance > 0.0 )
          {
            v16 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v16 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v10 = restDistance / (float)v16->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 2:
          if ( *((float *)&v25.fields.current[1].klass + 1) > restDistance )
            continue;
          v10 = 0.0;
          if ( restDistance > 0.0 )
          {
            v11 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v11 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v10 = restDistance / (float)v11->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 3:
          if ( *((float *)&v25.fields.current[1].klass + 1) < restDistance )
            continue;
          v10 = 0.0;
          if ( restDistance > 0.0 )
          {
            v17 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v17 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v10 = restDistance / (float)v17->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 4:
          if ( *((float *)&v25.fields.current[1].klass + 1) <= restDistance )
            continue;
          v10 = 0.0;
          if ( restDistance > 0.0 )
          {
            v15 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v15 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v10 = restDistance / (float)v15->static_fields->DISTANCE_DISP_FRACTION;
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
      v18 = LocalizationManager__Get(monitor, 0LL);
      *(float *)&v22.fields.list = v10;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v22, v19);
      v13 = System_String__Format(v18, v20, 0LL);
      v14 = 368;
    }
    else
    {
      v13 = 0LL;
      v14 = 362;
    }
    break;
  }
  v23 = v14;
  v24 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
  if ( v23 == 362 )
  {
    v24 = 0;
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( v23 != 368 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v24 = 0;
  return v13;
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
  System_String_o *IsNullOrEmpty; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *bgSprite; // x20
  System_String_o *bgSpriteName; // x20
  UISprite_o *v14; // x21
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *titleText; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x21
  const MethodInfo *v19; // x1

  if ( (byte_438C1FF & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_5779/*"EVENT_INFO_DISTANCE_TXT_"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C1FF = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B77560(
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
      v14 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      IsNullOrEmpty = (System_String_o *)AtlasManager__SetEventUI(v14, bgSpriteName, 0LL);
    }
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_19;
  titleText = this->fields.titleText;
  v17 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
  v18 = System_String__Concat_44901936((System_String_o *)StringLiteral_5779/*"EVENT_INFO_DISTANCE_TXT_"*/, v17, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  IsNullOrEmpty = LocalizationManager__Get(v18, 0LL);
  if ( !titleText
    || (UILabel__set_text(titleText, IsNullOrEmpty, 0LL),
        (IsNullOrEmpty = (System_String_o *)this->fields.distanceText) == 0LL) )
  {
LABEL_19:
    sub_B7769C(IsNullOrEmpty, v11);
  }
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.isUpdate = 1;
  EventInfoDistanceDispComponent__UpdateDisp(this, v19);
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

  if ( (byte_438C200 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C200 = 1;
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
        sub_B7769C(RestDistance, v9);
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