void __fastcall EventInfoDistanceDispComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E94CC & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoDistanceDispComponent_TypeInfo, v1, v2, v3);
    byte_42E94CC = 1;
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
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  __int64 v28; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *conditionDic; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x19
  float v33; // s9
  EventInfoDistanceDispComponent_c *v34; // x0
  System_String_o *monitor; // x19
  System_String_o *v36; // x19
  int v37; // w8
  EventInfoDistanceDispComponent_c *v38; // x0
  EventInfoDistanceDispComponent_c *v39; // x0
  EventInfoDistanceDispComponent_c *v40; // x0
  System_String_o *v41; // x19
  Il2CppObject *v42; // x1
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+0h] [xbp-80h] BYREF
  int v45; // [xsp+18h] [xbp-68h]
  int v46; // [xsp+2Ch] [xbp-54h]
  System_Collections_Generic_List_Enumerator_T__o v47; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42E94CB & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__,
      (_DWORD)method,
      v3,
      v4);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__get_Current__,
      v10,
      v11,
      v12);
    sub_B5D5C4(&EventInfoDistanceDispComponent_TypeInfo, v13, v14, v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__,
      v16,
      v17,
      v18);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&float_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1/*""*/, v25, v26, v27);
    byte_42E94CB = 1;
  }
  memset(&v47, 0, sizeof(v47));
  v46 = 0;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.conditionDic, 0LL) )
    return (System_String_o *)StringLiteral_1/*""*/;
  conditionDic = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.conditionDic;
  if ( !conditionDic )
    sub_B5D69C(0LL, v28);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v44,
    conditionDic,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventInfoDistanceDispComponent_KeyPositionPairData__GetEnumerator__);
  v47 = v44;
  while ( 2 )
  {
    v30 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v47,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__MoveNext__);
    if ( v30 )
    {
      current = v47.fields.current;
      if ( !v47.fields.current )
        sub_B5D69C(v30, v31);
      switch ( LODWORD(v47.fields.current[1].klass) )
      {
        case 1:
          if ( *((float *)&v47.fields.current[1].klass + 1) >= restDistance )
            continue;
          v33 = 0.0;
          if ( restDistance > 0.0 )
          {
            v39 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v39 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v33 = restDistance / (float)v39->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 2:
          if ( *((float *)&v47.fields.current[1].klass + 1) > restDistance )
            continue;
          v33 = 0.0;
          if ( restDistance > 0.0 )
          {
            v34 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v34 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v33 = restDistance / (float)v34->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 3:
          if ( *((float *)&v47.fields.current[1].klass + 1) < restDistance )
            continue;
          v33 = 0.0;
          if ( restDistance > 0.0 )
          {
            v40 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v40 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v33 = restDistance / (float)v40->static_fields->DISTANCE_DISP_FRACTION;
          }
          monitor = (System_String_o *)current[1].monitor;
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          break;
        case 4:
          if ( *((float *)&v47.fields.current[1].klass + 1) <= restDistance )
            continue;
          v33 = 0.0;
          if ( restDistance > 0.0 )
          {
            v38 = EventInfoDistanceDispComponent_TypeInfo;
            if ( (BYTE3(EventInfoDistanceDispComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventInfoDistanceDispComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventInfoDistanceDispComponent_TypeInfo);
              v38 = EventInfoDistanceDispComponent_TypeInfo;
            }
            v33 = restDistance / (float)v38->static_fields->DISTANCE_DISP_FRACTION;
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
      v41 = LocalizationManager__Get(monitor, 0LL);
      *(float *)&v44.fields.list = v33;
      v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44);
      v36 = System_String__Format(v41, v42, 0LL);
      v37 = 368;
    }
    else
    {
      v36 = 0LL;
      v37 = 362;
    }
    break;
  }
  v45 = v37;
  v46 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v47,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventInfoDistanceDispComponent_KeyPositionPairData__Dispose__);
  if ( v45 == 362 )
  {
    v46 = 0;
    return (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( v45 != 368 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v46 = 0;
  return v36;
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_String_o *IsNullOrEmpty; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *bgSprite; // x20
  System_String_o *bgSpriteName; // x20
  UISprite_o *v26; // x21
  struct EventUiEntity_o *eventUiEntity; // x8
  UILabel_o *titleText; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x21
  const MethodInfo *v31; // x1

  if ( (byte_42E94C9 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_5713/*"EVENT_INFO_DISTANCE_TXT_"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E94C9 = 1;
  }
  this->fields.eventUiEntity = entity;
  sub_B5D560(
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
      v26 = this->fields.bgSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      IsNullOrEmpty = (System_String_o *)AtlasManager__SetEventUI(v26, bgSpriteName, 0LL);
    }
  }
  eventUiEntity = this->fields.eventUiEntity;
  if ( !eventUiEntity )
    goto LABEL_19;
  titleText = this->fields.titleText;
  v29 = System_Int32__ToString((int)eventUiEntity + 24, 0LL);
  v30 = System_String__Concat_44577788((System_String_o *)StringLiteral_5713/*"EVENT_INFO_DISTANCE_TXT_"*/, v29, 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  IsNullOrEmpty = LocalizationManager__Get(v30, 0LL);
  if ( !titleText
    || (UILabel__set_text(titleText, IsNullOrEmpty, 0LL),
        (IsNullOrEmpty = (System_String_o *)this->fields.distanceText) == 0LL) )
  {
LABEL_19:
    sub_B5D69C(IsNullOrEmpty, v23);
  }
  UILabel__set_text((UILabel_o *)IsNullOrEmpty, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.isUpdate = 1;
  EventInfoDistanceDispComponent__UpdateDisp(this, v31);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *distanceText; // x20
  float RemainingDistance; // s0
  UILabel_o *v7; // x20
  float v8; // s8
  const MethodInfo *v9; // x1
  System_String_o *RestDistance; // x0
  __int64 v11; // x1

  if ( (byte_42E94CA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E94CA = 1;
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
      v7 = this->fields.distanceText;
      v8 = RemainingDistance;
      RestDistance = EventInfoDistanceDispComponent__GetRestDistance(this, RemainingDistance, v9);
      if ( !v7
        || (UILabel__set_text(v7, RestDistance, 0LL),
            (RestDistance = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)this,
                                                 0LL)) == 0LL) )
      {
        sub_B5D69C(RestDistance, v11);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestDistance, 1, 0LL);
      if ( v8 <= 0.0 )
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