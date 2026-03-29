void EventInfoQPPointCounter___ctor(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1

  if ( (byte_4D31E5E & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23139/*"qp_counter_overlay"*/);
    byte_4D31E5E = 1;
  }
  *(_QWORD *)&this->fields.DigitDefaultScale = 0x3F6666663F800000LL;
  v9 = StringLiteral_23139/*"qp_counter_overlay"*/;
  this->fields.OverlaySpName = (struct System_String_o *)StringLiteral_23139/*"qp_counter_overlay"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.OverlaySpName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


int32_t EventInfoQPPointCounter__GetDigit(EventInfoQPPointCounter_o *this, int64_t num, const MethodInfo *method)
{
  double v4; // d0

  if ( (byte_4D31E5A & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D31E5A = 1;
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


int64_t EventInfoQPPointCounter__GetDigitNumber(
        EventInfoQPPointCounter_o *this,
        int64_t number,
        int64_t digit,
        const MethodInfo *method)
{
  double v6; // d0
  signed __int64 v7; // x8

  if ( (byte_4D31E5B & 1) == 0 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D31E5B = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = System_Math__Pow(10.0, (double)digit, 0);
  v7 = 0xFFFFFFFF80000000LL;
  if ( v6 != INFINITY )
    v7 = (int)v6;
  return number / v7 % 10;
}


int64_t EventInfoQPPointCounter__GetLimitPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D31E5D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D31E5D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventPointUpperMaster___)) == 0 )
  {
    sub_1C93D2C(Instance, v4);
  }
  return EventPointUpperMaster__getPointUpper((EventPointUpperMaster_o *)Instance, this->fields.eventId, 0, 0);
}


int64_t EventInfoQPPointCounter__GetNextPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x0
  EventInfoQPPointCounter___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_object__long__o *_9__24_0; // x21
  Il2CppObject *v10; // x22
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w22
  int64_t v21; // x20
  int32_t v22; // w23
  Il2CppObject *Value; // x21
  int v24; // w8
  void *v25; // x21
  unsigned int v26; // w23
  _DWORD *v27; // x25
  int32_t v28; // w22
  int32_t v29; // w22

  if ( (byte_4D31E5C & 1) == 0 )
  {
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    sub_1C93AD4(&System_Func_EventMissionConditionEntity__long__TypeInfo);
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__);
    sub_1C93AD4(&EventInfoQPPointCounter___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_10891/*"QPEVENT_NEXT_DISPLAY_DATA"*/);
    byte_4D31E5C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( MasterData_object )
  {
    EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                      (EventMissionConditionMaster_o *)MasterData_object,
                                      this->fields.eventId,
                                      85,
                                      0);
    v7 = EventInfoQPPointCounter___c_TypeInfo;
    v8 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType;
    if ( !EventInfoQPPointCounter___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoQPPointCounter___c_TypeInfo);
      v7 = EventInfoQPPointCounter___c_TypeInfo;
    }
    _9__24_0 = (System_Func_object__long__o *)v7->static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = EventInfoQPPointCounter___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v7->static_fields->__9;
      _9__24_0 = (System_Func_object__long__o *)sub_1C93D20(System_Func_EventMissionConditionEntity__long__TypeInfo);
      System_Func_object__long____ctor(_9__24_0, v10, Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, 0);
      static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      static_fields->__9__24_0 = (struct System_Func_EventMissionConditionEntity__long__o *)_9__24_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__24_0,
        (int32_t)_9__24_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__long_(
                                                                 v8,
                                                                 (System_Func_TSource__TKey__o *)_9__24_0,
                                                                 (const MethodInfo_31D3E50 *)Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v18,
                 (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_40;
    v19 = (System_Collections_Generic_List_object__o *)Instance;
    if ( *((int *)Instance + 6) >= 1 )
    {
      v20 = 0;
      v21 = 0;
      while ( 1 )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v19,
                     v20,
                     (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
        if ( !Instance )
          break;
        v22 = *((_DWORD *)Instance + 4);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( !CondType__IsMissionAchive(v22, 0) )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v19,
                       v20,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
          if ( !Instance )
            break;
          v21 = *((_QWORD *)Instance + 7);
          if ( ++v20 < v19->fields._size )
            continue;
        }
        goto LABEL_22;
      }
LABEL_40:
      sub_1C93D2C(Instance, v4);
    }
  }
  v21 = 0;
LABEL_22:
  Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_10891/*"QPEVENT_NEXT_DISPLAY_DATA"*/, 0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Instance = JsonManager__DeserializeArray_object_(
                 Value,
                 (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    if ( !Instance )
      goto LABEL_40;
    v24 = *((_DWORD *)Instance + 6);
    v25 = Instance;
    if ( v24 >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= v24 )
          sub_1C93D34(Instance);
        v27 = (_DWORD *)*((_QWORD *)v25 + (int)v26 + 4);
        if ( !v27 )
          break;
        if ( v27[4] == this->fields.eventId )
        {
          v28 = v27[5];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (void *)CondType__IsMissionAchive(v28, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v29 = v27[6];
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            Instance = (void *)CondType__IsQuestClear_41038904(v29, -1, 0, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              v21 = 0;
          }
        }
        v24 = *((_DWORD *)v25 + 6);
        if ( (int)++v26 >= v24 )
          return v21;
      }
      goto LABEL_40;
    }
  }
  return v21;
}


void EventInfoQPPointCounter__SetEventId(EventInfoQPPointCounter_o *this, Il2CppObject *val, const MethodInfo *method)
{
  __int64 v3; // x3
  EventInfoQPPointCounter_o *v5; // x19
  int32_t v6; // w0
  const MethodInfo *v7; // x1
  EventInfoQPPointCounter_o *v8; // x0
  const MethodInfo *v9; // x1

  v5 = this;
  if ( (byte_4D31E57 & 1) == 0 )
  {
    this = (EventInfoQPPointCounter_o *)sub_1C93AD4(&int_TypeInfo);
    byte_4D31E57 = 1;
  }
  if ( !val )
    sub_1C93D2C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v6 = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
    v5->fields.eventId = v6;
    v5->fields.totalPoint = UserEventPointMaster__GetEventPoint(v6, 0, 0);
    EventInfoQPPointCounter__UpdateDisp(v5, v7);
  }
  else
  {
    sub_1C940C8(val);
    EventInfoQPPointCounter__GetNextPoint(v8, v9);
  }
}


void EventInfoQPPointCounter__SetPointNumSprite(
        EventInfoQPPointCounter_o *this,
        int64_t number,
        UISprite_array *sprites,
        const MethodInfo *method)
{
  EventInfoQPPointCounter_o *v6; // x19
  UnityEngine_Transform_o *transform; // x0
  unsigned __int64 v8; // x27
  int v9; // w28
  UISprite_o **m_Items; // x20
  UnityEngine_Object_o *v11; // x23
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  UISprite_o *v14; // x23
  System_String_o *v15; // x0
  System_String_o *v16; // x24
  System_Collections_Generic_IEnumerable_TSource__o *CommaSp; // x0
  __int64 v18; // x20
  struct UISprite_array *v19; // x8
  unsigned __int64 v20; // x28
  UnityEngine_Object_o *v21; // x21
  struct UISprite_array *v22; // x8
  UISprite_o *v23; // x21
  struct UISprite_array *v24; // x8
  __int64 v25; // x8
  UnityEngine_Object_o *TotalCounterParent; // x21
  bool v27; // w0
  int32_t Digit; // [xsp+0h] [xbp-70h]
  int64_t DigitNumber; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4D31E59 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_23138/*"qp_counter_comma"*/);
    sub_1C93AD4(&StringLiteral_23134/*"qp_counter_"*/);
    this = (EventInfoQPPointCounter_o *)sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31E59 = 1;
  }
  DigitNumber = 0;
  if ( sprites )
  {
    Digit = EventInfoQPPointCounter__GetDigit(this, number, (const MethodInfo *)sprites);
    transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                             (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)transform >= 1 )
    {
      v8 = 0;
      v9 = 0;
      m_Items = sprites->m_Items;
      while ( v8 < LODWORD(sprites->max_length) )
      {
        v11 = (UnityEngine_Object_o *)m_Items[v8];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v11, 0, 0);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          if ( v8 >= LODWORD(sprites->max_length) )
            break;
          v14 = m_Items[v8];
          if ( (__int64)v8 <= Digit )
          {
            DigitNumber = EventInfoQPPointCounter__GetDigitNumber(
                            (EventInfoQPPointCounter_o *)transform,
                            number,
                            v9,
                            v13);
            v15 = System_Int64__ToString((int64_t)&DigitNumber, 0);
            v16 = System_String__Concat_64425724((System_String_o *)StringLiteral_23134/*"qp_counter_"*/, v15, 0);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(v14, v16, 0);
            if ( v8 >= LODWORD(sprites->max_length) )
              break;
            transform = (UnityEngine_Transform_o *)m_Items[v8];
            if ( !transform )
              goto LABEL_55;
            (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *))&transform->klass[2]._1.this_arg.bits)(
              transform,
              transform->klass[2]._1.element_class);
          }
          else
          {
            if ( !v14 )
              goto LABEL_55;
            UISprite__set_spriteName(m_Items[v8], (System_String_o *)StringLiteral_1/*""*/, 0);
          }
          ++v9;
        }
        ++v8;
        transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v8 >= (int)transform )
          goto LABEL_21;
      }
LABEL_54:
      sub_1C93D34(transform);
    }
LABEL_21:
    CommaSp = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.CommaSp;
    if ( CommaSp )
    {
      transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                               CommaSp,
                                               (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_UISprite___);
      if ( (int)transform >= 1 )
      {
        v18 = 4;
        while ( 1 )
        {
          v19 = v6->fields.CommaSp;
          if ( !v19 )
            break;
          v20 = v18 - 4;
          if ( v18 - 4 >= (unsigned __int64)LODWORD(v19->max_length) )
            goto LABEL_54;
          v21 = (UnityEngine_Object_o *)*((_QWORD *)&v19->obj.klass + v18);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v21, 0, 0);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            v22 = v6->fields.CommaSp;
            if ( !v22 )
              break;
            if ( v20 >= LODWORD(v22->max_length) )
              goto LABEL_54;
            v23 = (UISprite_o *)*((_QWORD *)&v22->obj.klass + v18);
            if ( (__int64)v20 >= Digit / 3 )
            {
              if ( !v23 )
                break;
              UISprite__set_spriteName(*((UISprite_o **)&v22->obj.klass + v18), (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            else
            {
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(
                                                       v23,
                                                       (System_String_o *)StringLiteral_23138/*"qp_counter_comma"*/,
                                                       0);
              v24 = v6->fields.CommaSp;
              if ( !v24 )
                break;
              if ( v20 >= LODWORD(v24->max_length) )
                goto LABEL_54;
              transform = (UnityEngine_Transform_o *)*((_QWORD *)&v24->obj.klass + v18);
              if ( !transform )
                break;
              (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *))&transform->klass[2]._1.this_arg.bits)(
                transform,
                transform->klass[2]._1.element_class);
            }
          }
          transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.CommaSp,
                                                   (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_UISprite___);
          v25 = v18 - 3;
          ++v18;
          if ( v25 >= (int)transform )
            goto LABEL_41;
        }
LABEL_55:
        sub_1C93D2C(transform, v12);
      }
    }
LABEL_41:
    TotalCounterParent = (UnityEngine_Object_o *)v6->fields.TotalCounterParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__op_Inequality(TotalCounterParent, 0, 0);
    if ( Digit + 1 >= 10 )
    {
      if ( !v27 )
        return;
      transform = (UnityEngine_Transform_o *)v6->fields.TotalCounterParent;
      if ( !transform )
        goto LABEL_55;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( !transform )
        goto LABEL_55;
      v30.fields.x = v6->fields.Digit10Scale;
    }
    else
    {
      if ( !v27 )
        return;
      transform = (UnityEngine_Transform_o *)v6->fields.TotalCounterParent;
      if ( !transform )
        goto LABEL_55;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( !transform )
        goto LABEL_55;
      v30.fields.x = v6->fields.DigitDefaultScale;
    }
    v30.fields.y = 1.0;
    v30.fields.z = 0.0;
    UnityEngine_Transform__set_localScale(transform, v30, 0);
  }
}


void EventInfoQPPointCounter__Setup(
        EventInfoQPPointCounter_o *this,
        EventUiValueEntity_array *entity,
        const MethodInfo *method)
{
  ;
}


void EventInfoQPPointCounter__Start(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *PointCounterSp; // x20
  UISprite_o *v4; // x20
  __int64 v5; // x1
  struct UISprite_o *v6; // x0
  UnityEngine_Object_o *NextCounterSp; // x20
  UISprite_o *v8; // x20
  UnityEngine_Object_o *LimitCounterSp; // x20
  UISprite_o *v10; // x20
  UnityEngine_Object_o *OverlaySp; // x20
  const MethodInfo *v12; // x1
  UISprite_o *v13; // x20
  System_String_o *OverlaySpName; // x21

  if ( (byte_4D31E56 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_23136/*"qp_counter_bg_main"*/);
    sub_1C93AD4(&StringLiteral_23137/*"qp_counter_bg_next"*/);
    sub_1C93AD4(&StringLiteral_23135/*"qp_counter_bg_limit"*/);
    byte_4D31E56 = 1;
  }
  PointCounterSp = (UnityEngine_Object_o *)this->fields.PointCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(PointCounterSp, 0, 0) )
  {
    v4 = this->fields.PointCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v4, (System_String_o *)StringLiteral_23136/*"qp_counter_bg_main"*/, 0);
    v6 = this->fields.PointCounterSp;
    if ( !v6 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
  NextCounterSp = (UnityEngine_Object_o *)this->fields.NextCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(NextCounterSp, 0, 0) )
  {
    v8 = this->fields.NextCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_23137/*"qp_counter_bg_next"*/, 0);
    v6 = this->fields.NextCounterSp;
    if ( !v6 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
  LimitCounterSp = (UnityEngine_Object_o *)this->fields.LimitCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LimitCounterSp, 0, 0) )
  {
    v10 = this->fields.LimitCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v10, (System_String_o *)StringLiteral_23135/*"qp_counter_bg_limit"*/, 0);
    v6 = this->fields.LimitCounterSp;
    if ( !v6 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v6,
      v6->klass->vtable._33_MakePixelPerfect.method);
  }
  OverlaySp = (UnityEngine_Object_o *)this->fields.OverlaySp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(OverlaySp, 0, 0) )
  {
    v13 = this->fields.OverlaySp;
    OverlaySpName = this->fields.OverlaySpName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI(v13, OverlaySpName, 0);
    v6 = this->fields.OverlaySp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v6->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v6,
        v6->klass->vtable._33_MakePixelPerfect.method);
      goto LABEL_31;
    }
LABEL_32:
    sub_1C93D2C(v6, v5);
  }
LABEL_31:
  EventInfoQPPointCounter__UpdateDisp(this, v12);
}


void EventInfoQPPointCounter__UpdateDisp(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  int64_t NextPoint; // x21
  const MethodInfo *v4; // x1
  int64_t LimitPoint; // x0
  UnityEngine_Object_o *NextCounterLabel; // x22
  int64_t v7; // x20
  UILabel_o *v8; // x22
  System_String_o *v9; // x23
  Il2CppObject *v10; // x0
  System_String_o *v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *LimitCounterLabel; // x22
  UILabel_o *v14; // x22
  System_String_o *v15; // x23
  Il2CppObject *v16; // x0
  UnityEngine_Object_o *NextCounterParent; // x22
  UnityEngine_Object_o *LimitCountParent; // x21
  const MethodInfo *v19; // x3
  int64_t v20; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D31E58 & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_5690/*"EVENT_QPPOINT_NEXT_FORMAT"*/);
    sub_1C93AD4(&StringLiteral_5689/*"EVENT_QPPOINT_LIMIT_FORMAT"*/);
    byte_4D31E58 = 1;
  }
  NextPoint = EventInfoQPPointCounter__GetNextPoint(this, method);
  LimitPoint = EventInfoQPPointCounter__GetLimitPoint(this, v4);
  NextCounterLabel = (UnityEngine_Object_o *)this->fields.NextCounterLabel;
  v7 = LimitPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(NextCounterLabel, 0, 0) )
  {
    v8 = this->fields.NextCounterLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5690/*"EVENT_QPPOINT_NEXT_FORMAT"*/, 0);
    v20 = NextPoint;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
    v11 = System_String__Format(v9, v10, 0);
    if ( !v8 )
      goto LABEL_28;
    UILabel__set_text(v8, v11, 0);
  }
  LimitCounterLabel = (UnityEngine_Object_o *)this->fields.LimitCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LimitCounterLabel, 0, 0) )
  {
    v14 = this->fields.LimitCounterLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v15 = LocalizationManager__Get((System_String_o *)StringLiteral_5689/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, 0);
    v20 = v7;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v20);
    v11 = System_String__Format(v15, v16, 0);
    if ( !v14 )
      goto LABEL_28;
    UILabel__set_text(v14, v11, 0);
  }
  NextCounterParent = (UnityEngine_Object_o *)this->fields.NextCounterParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(NextCounterParent, 0, 0) )
  {
    v11 = (System_String_o *)this->fields.NextCounterParent;
    if ( !v11 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, NextPoint > 0, 0);
  }
  LimitCountParent = (UnityEngine_Object_o *)this->fields.LimitCountParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(LimitCountParent, 0, 0) )
  {
    v11 = (System_String_o *)this->fields.LimitCountParent;
    if ( v11 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v11, v7 > 0, 0);
      goto LABEL_27;
    }
LABEL_28:
    sub_1C93D2C(v11, v12);
  }
LABEL_27:
  EventInfoQPPointCounter__SetPointNumSprite(this, this->fields.totalPoint, this->fields.TotalPointNumberSp, v19);
}


void EventInfoQPPointCounter_NextDisplayData___ctor(
        EventInfoQPPointCounter_NextDisplayData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventInfoQPPointCounter___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D31E5F & 1) == 0 )
  {
    sub_1C93AD4(&EventInfoQPPointCounter___c_TypeInfo);
    byte_4D31E5F = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(EventInfoQPPointCounter___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoQPPointCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoQPPointCounter___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)EventInfoQPPointCounter___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void EventInfoQPPointCounter___c___ctor(EventInfoQPPointCounter___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t EventInfoQPPointCounter___c___GetNextPoint_b__24_0(
        EventInfoQPPointCounter___c_o *this,
        EventMissionConditionEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.targetNum;
}