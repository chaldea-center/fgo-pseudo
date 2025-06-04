void __fastcall EventInfoQPPointCounter___ctor(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4B0361F & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_22628/*"qp_counter_overlay"*/, method);
    byte_4B0361F = 1;
  }
  *(_QWORD *)&this->fields.DigitDefaultScale = 0x3F6666663F800000LL;
  v5 = StringLiteral_22628/*"qp_counter_overlay"*/;
  this->fields.OverlaySpName = (struct System_String_o *)StringLiteral_22628/*"qp_counter_overlay"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.OverlaySpName, v5, v2, v3);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


int32_t __fastcall EventInfoQPPointCounter__GetDigit(
        EventInfoQPPointCounter_o *this,
        int64_t num,
        const MethodInfo *method)
{
  double v4; // d0

  if ( (byte_4B0361B & 1) == 0 )
  {
    sub_1BC3008(&System_Math_TypeInfo, num);
    byte_4B0361B = 1;
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


int64_t __fastcall EventInfoQPPointCounter__GetDigitNumber(
        EventInfoQPPointCounter_o *this,
        int64_t number,
        int64_t digit,
        const MethodInfo *method)
{
  double v6; // d0
  signed __int64 v7; // x8

  if ( (byte_4B0361C & 1) == 0 )
  {
    sub_1BC3008(&System_Math_TypeInfo, number);
    byte_4B0361C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = System_Math__Pow(10.0, (double)digit, 0LL);
  v7 = 0xFFFFFFFF80000000LL;
  if ( v6 != INFINITY )
    v7 = (int)v6;
  return number / v7 % 10;
}


int64_t __fastcall EventInfoQPPointCounter__GetLimitPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B0361E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMasterData_EventPointUpperMaster___, method);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4B0361E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventPointUpperMaster___)) == 0LL )
  {
    sub_1BC3264(Instance, v5);
  }
  return EventPointUpperMaster__getPointUpper((EventPointUpperMaster_o *)Instance, this->fields.eventId, 0, 0LL);
}


int64_t __fastcall EventInfoQPPointCounter__GetNextPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x0
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x0
  EventInfoQPPointCounter___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_T__TResult__o *_9__24_0; // x21
  Il2CppObject *v22; // x22
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t v28; // w22
  int64_t v29; // x20
  int32_t v30; // w23
  Il2CppObject *Value; // x21
  __int64 v32; // x2
  int v33; // w8
  void *v34; // x21
  unsigned int v35; // w23
  _DWORD *v36; // x25
  int32_t v37; // w22
  int32_t v38; // w22

  if ( (byte_4B0361D & 1) == 0 )
  {
    sub_1BC3008(&CondType_TypeInfo, method);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___, v5);
    sub_1BC3008(&System_Func_EventMissionConditionEntity__long__TypeInfo, v6);
    sub_1BC3008(&Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___, v7);
    sub_1BC3008(&JsonManager_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v10);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1BC3008(&Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, v12);
    sub_1BC3008(&EventInfoQPPointCounter___c_TypeInfo, v13);
    sub_1BC3008(&StringLiteral_10721/*"QPEVENT_NEXT_DISPLAY_DATA"*/, v14);
    byte_4B0361D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( MasterData_object )
  {
    EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                      (EventMissionConditionMaster_o *)MasterData_object,
                                      this->fields.eventId,
                                      85,
                                      0LL);
    v19 = EventInfoQPPointCounter___c_TypeInfo;
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType;
    if ( !EventInfoQPPointCounter___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoQPPointCounter___c_TypeInfo);
      v19 = EventInfoQPPointCounter___c_TypeInfo;
    }
    _9__24_0 = (System_Func_T__TResult__o *)v19->static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = EventInfoQPPointCounter___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v19->static_fields->__9;
      _9__24_0 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_EventMissionConditionEntity__long__TypeInfo);
      System_Func_object__long____ctor(_9__24_0, v22, Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, 0LL);
      static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      static_fields->__9__24_0 = (struct System_Func_EventMissionConditionEntity__long__o *)_9__24_0;
      sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__24_0, (int32_t)_9__24_0, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__long_(
                                                                 v20,
                                                                 (System_Func_TSource__TKey__o *)_9__24_0,
                                                                 (const MethodInfo_302DA88 *)Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v26,
                 (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_40;
    v27 = (System_Collections_Generic_List_object__o *)Instance;
    if ( *((int *)Instance + 6) >= 1 )
    {
      v28 = 0;
      v29 = 0LL;
      while ( 1 )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v27,
                     v28,
                     (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
        if ( !Instance )
          break;
        v30 = *((_DWORD *)Instance + 4);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsMissionAchive(v30, 0LL) )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v27,
                       v28,
                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
          if ( !Instance )
            break;
          v29 = *((_QWORD *)Instance + 7);
          if ( ++v28 < v27->fields._size )
            continue;
        }
        goto LABEL_22;
      }
LABEL_40:
      sub_1BC3264(Instance, v16);
    }
  }
  v29 = 0LL;
LABEL_22:
  Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_10721/*"QPEVENT_NEXT_DISPLAY_DATA"*/, 0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Instance = JsonManager__DeserializeArray_object_(
                 Value,
                 (const MethodInfo_306D91C *)Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    if ( !Instance )
      goto LABEL_40;
    v33 = *((_DWORD *)Instance + 6);
    v34 = Instance;
    if ( v33 >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( v35 >= v33 )
          sub_1BC326C(Instance, v16, v32);
        v36 = (_DWORD *)*((_QWORD *)v34 + (int)v35 + 4);
        if ( !v36 )
          break;
        if ( v36[4] == this->fields.eventId )
        {
          v37 = v36[5];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (void *)CondType__IsMissionAchive(v37, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v38 = v36[6];
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            Instance = (void *)CondType__IsQuestClear_39366056(v38, -1, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              v29 = 0LL;
          }
        }
        v33 = *((_DWORD *)v34 + 6);
        if ( (int)++v35 >= v33 )
          return v29;
      }
      goto LABEL_40;
    }
  }
  return v29;
}


void __fastcall EventInfoQPPointCounter__SetEventId(
        EventInfoQPPointCounter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoQPPointCounter_o *v5; // x19
  int32_t v6; // w0
  const MethodInfo *v7; // x1
  EventInfoQPPointCounter_o *v8; // x0
  const MethodInfo *v9; // x1

  v5 = this;
  if ( (byte_4B03618 & 1) == 0 )
  {
    this = (EventInfoQPPointCounter_o *)sub_1BC3008(&int_TypeInfo, val);
    byte_4B03618 = 1;
  }
  if ( !val )
    sub_1BC3264(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v6 = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
    v5->fields.eventId = v6;
    v5->fields.totalPoint = UserEventPointMaster__GetEventPoint(v6, 0, 0LL);
    EventInfoQPPointCounter__UpdateDisp(v5, v7);
  }
  else
  {
    sub_1BC3524(val);
    EventInfoQPPointCounter__GetNextPoint(v8, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoQPPointCounter__SetPointNumSprite(
        EventInfoQPPointCounter_o *this,
        int64_t number,
        UISprite_array *sprites,
        const MethodInfo *method)
{
  EventInfoQPPointCounter_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  unsigned __int64 v15; // x27
  int v16; // w28
  UISprite_o **m_Items; // x20
  UnityEngine_Object_o *v18; // x23
  const MethodInfo *v19; // x3
  UISprite_o *v20; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x24
  System_Collections_Generic_IEnumerable_TSource__o *CommaSp; // x0
  __int64 v24; // x20
  struct UISprite_array *v25; // x8
  unsigned __int64 v26; // x28
  UnityEngine_Object_o *v27; // x21
  struct UISprite_array *v28; // x8
  UISprite_o *v29; // x21
  struct UISprite_array *v30; // x8
  __int64 v31; // x8
  UnityEngine_Object_o *TotalCounterParent; // x21
  bool v33; // w0
  float Digit10Scale; // s0
  float v35; // s1
  int v36; // s2
  int32_t Digit; // [xsp+0h] [xbp-70h]
  int64_t DigitNumber; // [xsp+8h] [xbp-68h] BYREF

  v6 = this;
  if ( (byte_4B0361A & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, number);
    sub_1BC3008(&Method_System_Linq_Enumerable_Count_UISprite___, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    sub_1BC3008(&StringLiteral_22627/*"qp_counter_comma"*/, v9);
    sub_1BC3008(&StringLiteral_22623/*"qp_counter_"*/, v10);
    this = (EventInfoQPPointCounter_o *)sub_1BC3008(&StringLiteral_1/*""*/, v11);
    byte_4B0361A = 1;
  }
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = EventInfoQPPointCounter__GetDigit(this, number, (const MethodInfo *)sprites);
    transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                             (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)transform >= 1 )
    {
      v15 = 0LL;
      v16 = 0;
      m_Items = sprites->m_Items;
      while ( v15 < sprites->max_length )
      {
        v18 = (UnityEngine_Object_o *)m_Items[v15];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          if ( v15 >= sprites->max_length )
            break;
          v20 = m_Items[v15];
          if ( (__int64)v15 <= Digit )
          {
            DigitNumber = EventInfoQPPointCounter__GetDigitNumber(
                            (EventInfoQPPointCounter_o *)transform,
                            number,
                            v16,
                            v19);
            v21 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v22 = System_String__Concat_62348648((System_String_o *)StringLiteral_22623/*"qp_counter_"*/, v21, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(v20, v22, 0LL);
            if ( v15 >= sprites->max_length )
              break;
            transform = (UnityEngine_Transform_o *)m_Items[v15];
            if ( !transform )
              goto LABEL_55;
            ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
              transform,
              transform->klass[2]._1.declaringType);
          }
          else
          {
            if ( !v20 )
              goto LABEL_55;
            UISprite__set_spriteName(m_Items[v15], (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          ++v16;
        }
        ++v15;
        transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v15 >= (int)transform )
          goto LABEL_21;
      }
LABEL_54:
      sub_1BC326C(transform, v13, v14);
    }
LABEL_21:
    CommaSp = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.CommaSp;
    if ( CommaSp )
    {
      transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                               CommaSp,
                                               (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_UISprite___);
      if ( (int)transform >= 1 )
      {
        v24 = 4LL;
        while ( 1 )
        {
          v25 = v6->fields.CommaSp;
          if ( !v25 )
            break;
          v26 = v24 - 4;
          if ( v24 - 4 >= (unsigned __int64)v25->max_length )
            goto LABEL_54;
          v27 = (UnityEngine_Object_o *)*((_QWORD *)&v25->obj.klass + v24);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            v28 = v6->fields.CommaSp;
            if ( !v28 )
              break;
            if ( v26 >= v28->max_length )
              goto LABEL_54;
            v29 = (UISprite_o *)*((_QWORD *)&v28->obj.klass + v24);
            if ( (__int64)v26 >= Digit / 3 )
            {
              if ( !v29 )
                break;
              UISprite__set_spriteName(*((UISprite_o **)&v28->obj.klass + v24), (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            else
            {
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(
                                                       v29,
                                                       (System_String_o *)StringLiteral_22627/*"qp_counter_comma"*/,
                                                       0LL);
              v30 = v6->fields.CommaSp;
              if ( !v30 )
                break;
              if ( v26 >= v30->max_length )
                goto LABEL_54;
              transform = (UnityEngine_Transform_o *)*((_QWORD *)&v30->obj.klass + v24);
              if ( !transform )
                break;
              ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
                transform,
                transform->klass[2]._1.declaringType);
            }
          }
          transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.CommaSp,
                                                   (const MethodInfo_301E214 *)Method_System_Linq_Enumerable_Count_UISprite___);
          v31 = v24 - 3;
          ++v24;
          if ( v31 >= (int)transform )
            goto LABEL_41;
        }
LABEL_55:
        sub_1BC3264(transform, v13);
      }
    }
LABEL_41:
    TotalCounterParent = (UnityEngine_Object_o *)v6->fields.TotalCounterParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v33 = UnityEngine_Object__op_Inequality(TotalCounterParent, 0LL, 0LL);
    if ( Digit + 1 >= 10 )
    {
      if ( !v33 )
        return;
      transform = (UnityEngine_Transform_o *)v6->fields.TotalCounterParent;
      if ( !transform )
        goto LABEL_55;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_55;
      Digit10Scale = v6->fields.Digit10Scale;
    }
    else
    {
      if ( !v33 )
        return;
      transform = (UnityEngine_Transform_o *)v6->fields.TotalCounterParent;
      if ( !transform )
        goto LABEL_55;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_55;
      Digit10Scale = v6->fields.DigitDefaultScale;
    }
    v35 = 1.0;
    v36 = 0;
    UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&Digit10Scale, 0LL);
  }
}


void __fastcall EventInfoQPPointCounter__Setup(
        EventInfoQPPointCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventInfoQPPointCounter__Start(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *PointCounterSp; // x20
  UISprite_o *v8; // x20
  __int64 v9; // x1
  struct UISprite_o *v10; // x0
  UnityEngine_Object_o *NextCounterSp; // x20
  UISprite_o *v12; // x20
  UnityEngine_Object_o *LimitCounterSp; // x20
  UISprite_o *v14; // x20
  UnityEngine_Object_o *OverlaySp; // x20
  const MethodInfo *v16; // x1
  UISprite_o *v17; // x20
  System_String_o *OverlaySpName; // x21

  if ( (byte_4B03617 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    sub_1BC3008(&StringLiteral_22625/*"qp_counter_bg_main"*/, v4);
    sub_1BC3008(&StringLiteral_22626/*"qp_counter_bg_next"*/, v5);
    sub_1BC3008(&StringLiteral_22624/*"qp_counter_bg_limit"*/, v6);
    byte_4B03617 = 1;
  }
  PointCounterSp = (UnityEngine_Object_o *)this->fields.PointCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(PointCounterSp, 0LL, 0LL) )
  {
    v8 = this->fields.PointCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_22625/*"qp_counter_bg_main"*/, 0LL);
    v10 = this->fields.PointCounterSp;
    if ( !v10 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
      v10,
      v10->klass->vtable._34_get_minWidth.methodPtr);
  }
  NextCounterSp = (UnityEngine_Object_o *)this->fields.NextCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(NextCounterSp, 0LL, 0LL) )
  {
    v12 = this->fields.NextCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v12, (System_String_o *)StringLiteral_22626/*"qp_counter_bg_next"*/, 0LL);
    v10 = this->fields.NextCounterSp;
    if ( !v10 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
      v10,
      v10->klass->vtable._34_get_minWidth.methodPtr);
  }
  LimitCounterSp = (UnityEngine_Object_o *)this->fields.LimitCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LimitCounterSp, 0LL, 0LL) )
  {
    v14 = this->fields.LimitCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v14, (System_String_o *)StringLiteral_22624/*"qp_counter_bg_limit"*/, 0LL);
    v10 = this->fields.LimitCounterSp;
    if ( !v10 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
      v10,
      v10->klass->vtable._34_get_minWidth.methodPtr);
  }
  OverlaySp = (UnityEngine_Object_o *)this->fields.OverlaySp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(OverlaySp, 0LL, 0LL) )
  {
    v17 = this->fields.OverlaySp;
    OverlaySpName = this->fields.OverlaySpName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v17, OverlaySpName, 0LL);
    v10 = this->fields.OverlaySp;
    if ( v10 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
        v10,
        v10->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_31;
    }
LABEL_32:
    sub_1BC3264(v10, v9);
  }
LABEL_31:
  EventInfoQPPointCounter__UpdateDisp(this, v16);
}


void __fastcall EventInfoQPPointCounter__UpdateDisp(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int64_t NextPoint; // x21
  const MethodInfo *v8; // x1
  int64_t LimitPoint; // x0
  UnityEngine_Object_o *NextCounterLabel; // x22
  __int64 v11; // x20
  UILabel_o *v12; // x22
  System_String_o *v13; // x23
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  Il2CppObject *v17; // x0
  System_String_o *v18; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *LimitCounterLabel; // x22
  UILabel_o *v21; // x22
  System_String_o *v22; // x23
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  Il2CppObject *v26; // x0
  UnityEngine_Object_o *NextCounterParent; // x22
  UnityEngine_Object_o *LimitCountParent; // x21
  const MethodInfo *v29; // x3
  int64_t v30; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B03619 & 1) == 0 )
  {
    sub_1BC3008(&long_TypeInfo, method);
    sub_1BC3008(&LocalizationManager_TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&StringLiteral_5614/*"EVENT_QPPOINT_NEXT_FORMAT"*/, v5);
    sub_1BC3008(&StringLiteral_5613/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, v6);
    byte_4B03619 = 1;
  }
  NextPoint = EventInfoQPPointCounter__GetNextPoint(this, method);
  LimitPoint = EventInfoQPPointCounter__GetLimitPoint(this, v8);
  NextCounterLabel = (UnityEngine_Object_o *)this->fields.NextCounterLabel;
  v11 = LimitPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(NextCounterLabel, 0LL, 0LL) )
  {
    v12 = this->fields.NextCounterLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5614/*"EVENT_QPPOINT_NEXT_FORMAT"*/, 0LL);
    v30 = NextPoint;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v30, v14, v15, v16);
    v18 = System_String__Format(v13, v17, 0LL);
    if ( !v12 )
      goto LABEL_28;
    UILabel__set_text(v12, v18, 0LL);
  }
  LimitCounterLabel = (UnityEngine_Object_o *)this->fields.LimitCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LimitCounterLabel, 0LL, 0LL) )
  {
    v21 = this->fields.LimitCounterLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5613/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, 0LL);
    v30 = v11;
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v30, v23, v24, v25);
    v18 = System_String__Format(v22, v26, 0LL);
    if ( !v21 )
      goto LABEL_28;
    UILabel__set_text(v21, v18, 0LL);
  }
  NextCounterParent = (UnityEngine_Object_o *)this->fields.NextCounterParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(NextCounterParent, 0LL, 0LL) )
  {
    v18 = (System_String_o *)this->fields.NextCounterParent;
    if ( !v18 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, NextPoint > 0, 0LL);
  }
  LimitCountParent = (UnityEngine_Object_o *)this->fields.LimitCountParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LimitCountParent, 0LL, 0LL) )
  {
    v18 = (System_String_o *)this->fields.LimitCountParent;
    if ( v18 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v18, v11 > 0, 0LL);
      goto LABEL_27;
    }
LABEL_28:
    sub_1BC3264(v18, v19);
  }
LABEL_27:
  EventInfoQPPointCounter__SetPointNumSprite(this, this->fields.totalPoint, this->fields.TotalPointNumberSp, v29);
}


void __fastcall EventInfoQPPointCounter_NextDisplayData___ctor(
        EventInfoQPPointCounter_NextDisplayData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoQPPointCounter___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B03620 & 1) == 0 )
  {
    sub_1BC3008(&EventInfoQPPointCounter___c_TypeInfo, v1);
    byte_4B03620 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(EventInfoQPPointCounter___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventInfoQPPointCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoQPPointCounter___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)EventInfoQPPointCounter___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall EventInfoQPPointCounter___c___ctor(EventInfoQPPointCounter___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall EventInfoQPPointCounter___c___GetNextPoint_b__24_0(
        EventInfoQPPointCounter___c_o *this,
        EventMissionConditionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BC3264(this, 0LL);
  return entity->fields.targetNum;
}