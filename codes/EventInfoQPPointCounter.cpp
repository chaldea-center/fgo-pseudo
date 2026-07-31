void EventInfoQPPointCounter___ctor(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1

  if ( (byte_593A418 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23997/*"qp_counter_overlay"*/);
    byte_593A418 = 1;
  }
  v9 = StringLiteral_23997/*"qp_counter_overlay"*/;
  this->fields.OverlaySpName = (struct System_String_o *)StringLiteral_23997/*"qp_counter_overlay"*/;
  *(_QWORD *)&this->fields.DigitDefaultScale = 0x3F6666663F800000LL;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.OverlaySpName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0);
}


int32_t EventInfoQPPointCounter__GetDigit(EventInfoQPPointCounter_o *this, int64_t num, const MethodInfo *method)
{
  if ( (byte_593A414 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593A414 = 1;
  }
  if ( !num )
    return 0;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, num);
  return (int)log10((double)num);
}


int64_t EventInfoQPPointCounter__GetDigitNumber(
        EventInfoQPPointCounter_o *this,
        int64_t number,
        int64_t digit,
        const MethodInfo *method)
{
  double v6; // d0
  signed __int64 v7; // x8

  if ( (byte_593A415 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593A415 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, number);
  v6 = System_Math__Pow(10.0, (double)digit, 0);
  v7 = (int)v6;
  if ( v6 == INFINITY )
    v7 = 0xFFFFFFFF80000000LL;
  return number / v7 % 10;
}


int64_t EventInfoQPPointCounter__GetLimitPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593A417 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_593A417 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventPointUpperMaster___)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  return EventPointUpperMaster__getPointUpper((EventPointUpperMaster_o *)Instance, this->fields.eventId, 0, 0);
}


int64_t EventInfoQPPointCounter__GetNextPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x0
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x0
  __int64 v7; // x1
  EventInfoQPPointCounter___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x20
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x9
  System_Func_object__long__o *_9__24_0; // x21
  Il2CppObject *v12; // x22
  struct EventInfoQPPointCounter___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Collections_Generic_List_object__o *v21; // x21
  int32_t v22; // w22
  int64_t v23; // x20
  int32_t v24; // w23
  Il2CppObject *Value; // x21
  __int64 v26; // x1
  int v27; // w8
  void *v28; // x21
  unsigned int v29; // w24
  _DWORD *v30; // x25
  int32_t v31; // w22
  int32_t v32; // w22

  if ( (byte_593A416 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    sub_21FFC50(&System_Func_EventMissionConditionEntity__long__TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__);
    sub_21FFC50(&EventInfoQPPointCounter___c_TypeInfo);
    sub_21FFC50(&StringLiteral_11266/*"QPEVENT_NEXT_DISPLAY_DATA"*/);
    byte_593A416 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( MasterData_object )
  {
    EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                      (EventMissionConditionMaster_o *)MasterData_object,
                                      this->fields.eventId,
                                      85,
                                      0);
    v8 = EventInfoQPPointCounter___c_TypeInfo;
    v9 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType;
    if ( !*(&EventInfoQPPointCounter___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventInfoQPPointCounter___c_TypeInfo, v7);
      v8 = EventInfoQPPointCounter___c_TypeInfo;
    }
    static_fields = v8->static_fields;
    _9__24_0 = (System_Func_object__long__o *)static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( !*(&v8->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v8, v7);
        static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_EventMissionConditionEntity__long__TypeInfo);
      System_Func_object__long____ctor(_9__24_0, v12, Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, 0);
      v13 = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      v13->__9__24_0 = (struct System_Func_EventMissionConditionEntity__long__o *)_9__24_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__24_0, (int32_t)_9__24_0, v14, v15, v16, v17, v18, v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__long_(
                                                                 v9,
                                                                 (System_Func_TSource__TKey__o *)_9__24_0,
                                                                 (const MethodInfo_3855D6C *)Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v20,
                 (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_40;
    v21 = (System_Collections_Generic_List_object__o *)Instance;
    if ( *((int *)Instance + 6) >= 1 )
    {
      v22 = 0;
      v23 = 0;
      while ( 1 )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v21,
                     v22,
                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
        if ( !Instance )
          break;
        v24 = *((_DWORD *)Instance + 4);
        if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
        if ( !CondType__IsMissionAchive(v24, 0) )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v21,
                       v22,
                       (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
          if ( !Instance )
            break;
          ++v22;
          v23 = *((_QWORD *)Instance + 7);
          if ( v22 < v21->fields._size )
            continue;
        }
        goto LABEL_22;
      }
LABEL_40:
      sub_21FFECC(Instance, v4);
    }
  }
  v23 = 0;
LABEL_22:
  Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_11266/*"QPEVENT_NEXT_DISPLAY_DATA"*/, 0);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0) )
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v26);
    Instance = JsonManager__DeserializeArray_object_(
                 Value,
                 (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    if ( !Instance )
      goto LABEL_40;
    v27 = *((_DWORD *)Instance + 6);
    v28 = Instance;
    if ( v27 >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= v27 )
          sub_21FFED4(Instance);
        v30 = (_DWORD *)*((_QWORD *)v28 + (int)v29 + 4);
        if ( !v30 )
          break;
        if ( v30[4] == this->fields.eventId )
        {
          v31 = v30[5];
          if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
          Instance = (void *)CondType__IsMissionAchive(v31, 0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v32 = v30[6];
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
            Instance = (void *)CondType__IsQuestClear_47254560(v32, -1, 0, 0);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              v23 = 0;
          }
        }
        v27 = *((_DWORD *)v28 + 6);
        if ( (int)++v29 >= v27 )
          return v23;
      }
      goto LABEL_40;
    }
  }
  return v23;
}


void EventInfoQPPointCounter__SetEventId(EventInfoQPPointCounter_o *this, Il2CppObject *val, const MethodInfo *method)
{
  int32_t v4; // w0
  const MethodInfo *v5; // x1
  EventInfoQPPointCounter_o *v6; // x0
  const MethodInfo *v7; // x1

  if ( !val )
    sub_21FFECC(this, 0);
  if ( val->klass->_1.element_class == *(Il2CppClass **)(qword_594C070 + 64) )
  {
    v4 = *(_DWORD *)j_il2cpp_object_unbox_0(val, val, method);
    this->fields.eventId = v4;
    this->fields.totalPoint = UserEventPointMaster__GetEventPoint(v4, 0, 0);
    EventInfoQPPointCounter__UpdateDisp(this, v5);
  }
  else
  {
    sub_220024C(val, qword_594C070, method);
    EventInfoQPPointCounter__GetNextPoint(v6, v7);
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
  __int64 v8; // x1
  int v9; // w27
  __int64 v10; // x29
  unsigned __int64 v11; // x28
  UnityEngine_Object_o *v12; // x23
  const MethodInfo *v13; // x3
  unsigned __int64 max_length_low; // x8
  UISprite_o *v15; // x23
  System_String_o *v16; // x0
  __int64 v17; // x1
  System_String_o *v18; // x24
  __int64 v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *CommaSp; // x0
  __int64 v21; // x27
  struct UISprite_array *v22; // x8
  unsigned __int64 v23; // x28
  UnityEngine_Object_o *v24; // x21
  struct UISprite_array *v25; // x8
  UISprite_o *v26; // x21
  struct UISprite_array *v27; // x8
  __int64 v28; // x8
  UnityEngine_Object_o *TotalCounterParent; // x20
  int v30; // w8
  float *p_Digit10Scale; // x8
  int32_t Digit; // [xsp+0h] [xbp-70h]
  int64_t DigitNumber; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_593A413 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_23996/*"qp_counter_comma"*/);
    sub_21FFC50(&StringLiteral_23992/*"qp_counter_"*/);
    this = (EventInfoQPPointCounter_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A413 = 1;
  }
  DigitNumber = 0;
  if ( sprites )
  {
    Digit = EventInfoQPPointCounter__GetDigit(this, number, (const MethodInfo *)sprites);
    transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                             (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)transform >= 1 )
    {
      v9 = 0;
      v10 = 4;
      do
      {
        v11 = v10 - 4;
        if ( v10 - 4 >= (unsigned __int64)LODWORD(sprites->max_length) )
LABEL_59:
          sub_21FFED4(transform);
        v12 = (UnityEngine_Object_o *)*((_QWORD *)&sprites->obj.klass + v10);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v12, 0, 0);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          max_length_low = LODWORD(sprites->max_length);
          if ( (__int64)v11 <= Digit )
          {
            if ( v11 >= max_length_low )
              goto LABEL_59;
            v15 = (UISprite_o *)*((_QWORD *)&sprites->obj.klass + v10);
            DigitNumber = EventInfoQPPointCounter__GetDigitNumber(
                            (EventInfoQPPointCounter_o *)transform,
                            number,
                            v9,
                            v13);
            v16 = System_Int64__ToString((int64_t)&DigitNumber, 0);
            v18 = System_String__Concat_75438412((System_String_o *)StringLiteral_23992/*"qp_counter_"*/, v16, 0);
            if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v17);
            transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(v15, v18, 0);
            if ( v11 >= LODWORD(sprites->max_length) )
              goto LABEL_59;
            transform = (UnityEngine_Transform_o *)*((_QWORD *)&sprites->obj.klass + v10);
            if ( !transform )
              goto LABEL_60;
            (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *))&transform->klass[2]._1.this_arg.bits)(
              transform,
              transform->klass[2]._1.element_class);
          }
          else
          {
            if ( v11 >= max_length_low )
              goto LABEL_59;
            transform = (UnityEngine_Transform_o *)*((_QWORD *)&sprites->obj.klass + v10);
            if ( !transform )
              goto LABEL_60;
            UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
          }
          ++v9;
        }
        transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_UISprite___);
        v19 = v10 - 3;
        ++v10;
      }
      while ( v19 < (int)transform );
    }
    CommaSp = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.CommaSp;
    if ( CommaSp )
    {
      transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                               CommaSp,
                                               (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_UISprite___);
      if ( (int)transform >= 1 )
      {
        v21 = 4;
        while ( 1 )
        {
          v22 = v6->fields.CommaSp;
          if ( !v22 )
            break;
          v23 = v21 - 4;
          if ( v21 - 4 >= (unsigned __int64)LODWORD(v22->max_length) )
            goto LABEL_59;
          v24 = (UnityEngine_Object_o *)*((_QWORD *)&v22->obj.klass + v21);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v24, 0, 0);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            v25 = v6->fields.CommaSp;
            if ( (__int64)v23 >= Digit / 3 )
            {
              if ( !v25 )
                break;
              if ( v23 >= LODWORD(v25->max_length) )
                goto LABEL_59;
              transform = (UnityEngine_Transform_o *)*((_QWORD *)&v25->obj.klass + v21);
              if ( !transform )
                break;
              UISprite__set_spriteName((UISprite_o *)transform, (System_String_o *)StringLiteral_1/*""*/, 0);
            }
            else
            {
              if ( !v25 )
                break;
              if ( v23 >= LODWORD(v25->max_length) )
                goto LABEL_59;
              v26 = (UISprite_o *)*((_QWORD *)&v25->obj.klass + v21);
              if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
              transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(
                                                       v26,
                                                       (System_String_o *)StringLiteral_23996/*"qp_counter_comma"*/,
                                                       0);
              v27 = v6->fields.CommaSp;
              if ( !v27 )
                break;
              if ( v23 >= LODWORD(v27->max_length) )
                goto LABEL_59;
              transform = (UnityEngine_Transform_o *)*((_QWORD *)&v27->obj.klass + v21);
              if ( !transform )
                break;
              (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *))&transform->klass[2]._1.this_arg.bits)(
                transform,
                transform->klass[2]._1.element_class);
            }
          }
          transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.CommaSp,
                                                   (const MethodInfo_384633C *)Method_System_Linq_Enumerable_Count_UISprite___);
          v28 = v21 - 3;
          ++v21;
          if ( v28 >= (int)transform )
            goto LABEL_44;
        }
LABEL_60:
        sub_21FFECC(transform, v8);
      }
    }
LABEL_44:
    TotalCounterParent = (UnityEngine_Object_o *)v6->fields.TotalCounterParent;
    v30 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
    if ( Digit + 1 >= 10 )
    {
      if ( !v30 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(TotalCounterParent, 0, 0) )
      {
        transform = (UnityEngine_Transform_o *)v6->fields.TotalCounterParent;
        if ( !transform )
          goto LABEL_60;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
        if ( !transform )
          goto LABEL_60;
        p_Digit10Scale = &v6->fields.Digit10Scale;
        goto LABEL_57;
      }
    }
    else
    {
      if ( !v30 )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      if ( UnityEngine_Object__op_Inequality(TotalCounterParent, 0, 0) )
      {
        transform = (UnityEngine_Transform_o *)v6->fields.TotalCounterParent;
        if ( !transform )
          goto LABEL_60;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
        if ( !transform )
          goto LABEL_60;
        p_Digit10Scale = &v6->fields.DigitDefaultScale;
LABEL_57:
        v34.fields.z = 0.0;
        v34.fields.y = 1.0;
        v34.fields.x = *p_Digit10Scale;
        UnityEngine_Transform__set_localScale(transform, v34, 0);
      }
    }
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
  __int64 v4; // x1
  UISprite_o *v5; // x20
  __int64 v6; // x1
  struct UISprite_o *v7; // x0
  UnityEngine_Object_o *NextCounterSp; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x20
  UnityEngine_Object_o *LimitCounterSp; // x20
  __int64 v12; // x1
  UISprite_o *v13; // x20
  UnityEngine_Object_o *OverlaySp; // x20
  const MethodInfo *v15; // x1
  UISprite_o *v16; // x20
  System_String_o *OverlaySpName; // x21

  if ( (byte_593A411 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_23994/*"qp_counter_bg_main"*/);
    sub_21FFC50(&StringLiteral_23995/*"qp_counter_bg_next"*/);
    sub_21FFC50(&StringLiteral_23993/*"qp_counter_bg_limit"*/);
    byte_593A411 = 1;
  }
  PointCounterSp = (UnityEngine_Object_o *)this->fields.PointCounterSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(PointCounterSp, 0, 0) )
  {
    v5 = this->fields.PointCounterSp;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
    AtlasManager__SetEventUI(v5, (System_String_o *)StringLiteral_23994/*"qp_counter_bg_main"*/, 0);
    v7 = this->fields.PointCounterSp;
    if ( !v7 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
  }
  NextCounterSp = (UnityEngine_Object_o *)this->fields.NextCounterSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(NextCounterSp, 0, 0) )
  {
    v10 = this->fields.NextCounterSp;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9);
    AtlasManager__SetEventUI(v10, (System_String_o *)StringLiteral_23995/*"qp_counter_bg_next"*/, 0);
    v7 = this->fields.NextCounterSp;
    if ( !v7 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
  }
  LimitCounterSp = (UnityEngine_Object_o *)this->fields.LimitCounterSp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(LimitCounterSp, 0, 0) )
  {
    v13 = this->fields.LimitCounterSp;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v12);
    AtlasManager__SetEventUI(v13, (System_String_o *)StringLiteral_23993/*"qp_counter_bg_limit"*/, 0);
    v7 = this->fields.LimitCounterSp;
    if ( !v7 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
      v7,
      v7->klass->vtable._33_MakePixelPerfect.method);
  }
  OverlaySp = (UnityEngine_Object_o *)this->fields.OverlaySp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12);
  if ( UnityEngine_Object__op_Inequality(OverlaySp, 0, 0) )
  {
    v16 = this->fields.OverlaySp;
    OverlaySpName = this->fields.OverlaySpName;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
    AtlasManager__SetEventUI(v16, OverlaySpName, 0);
    v7 = this->fields.OverlaySp;
    if ( v7 )
    {
      ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *))v7->klass->vtable._33_MakePixelPerfect.methodPtr)(
        v7,
        v7->klass->vtable._33_MakePixelPerfect.method);
      goto LABEL_31;
    }
LABEL_32:
    sub_21FFECC(v7, v6);
  }
LABEL_31:
  EventInfoQPPointCounter__UpdateDisp(this, v15);
}


void EventInfoQPPointCounter__UpdateDisp(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  int64_t NextPoint; // x21
  const MethodInfo *v4; // x1
  int64_t LimitPoint; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *NextCounterLabel; // x22
  int64_t v8; // x20
  __int64 v9; // x1
  UILabel_o *v10; // x22
  System_String_o *v11; // x23
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  UnityEngine_Object_o *LimitCounterLabel; // x22
  __int64 v16; // x1
  UILabel_o *v17; // x22
  System_String_o *v18; // x23
  Il2CppObject *v19; // x0
  UnityEngine_Object_o *NextCounterParent; // x22
  UnityEngine_Object_o *LimitCountParent; // x21
  const MethodInfo *v22; // x3
  int64_t v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593A412 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_5883/*"EVENT_QPPOINT_NEXT_FORMAT"*/);
    sub_21FFC50(&StringLiteral_5882/*"EVENT_QPPOINT_LIMIT_FORMAT"*/);
    byte_593A412 = 1;
  }
  NextPoint = EventInfoQPPointCounter__GetNextPoint(this, method);
  LimitPoint = EventInfoQPPointCounter__GetLimitPoint(this, v4);
  NextCounterLabel = (UnityEngine_Object_o *)this->fields.NextCounterLabel;
  v8 = LimitPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(NextCounterLabel, 0, 0) )
  {
    v10 = this->fields.NextCounterLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_5883/*"EVENT_QPPOINT_NEXT_FORMAT"*/, 0);
    v23 = NextPoint;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v23);
    v13 = System_String__Format(v11, v12, 0);
    if ( !v10 )
      goto LABEL_28;
    UILabel__set_text(v10, v13, 0);
  }
  LimitCounterLabel = (UnityEngine_Object_o *)this->fields.LimitCounterLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  if ( UnityEngine_Object__op_Inequality(LimitCounterLabel, 0, 0) )
  {
    v17 = this->fields.LimitCounterLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5882/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, 0);
    v23 = v8;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v23);
    v13 = System_String__Format(v18, v19, 0);
    if ( !v17 )
      goto LABEL_28;
    UILabel__set_text(v17, v13, 0);
  }
  NextCounterParent = (UnityEngine_Object_o *)this->fields.NextCounterParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(NextCounterParent, 0, 0) )
  {
    v13 = (System_String_o *)this->fields.NextCounterParent;
    if ( !v13 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, NextPoint > 0, 0);
  }
  LimitCountParent = (UnityEngine_Object_o *)this->fields.LimitCountParent;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Inequality(LimitCountParent, 0, 0) )
  {
    v13 = (System_String_o *)this->fields.LimitCountParent;
    if ( v13 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v13, v8 > 0, 0);
      goto LABEL_27;
    }
LABEL_28:
    sub_21FFECC(v13, v14);
  }
LABEL_27:
  EventInfoQPPointCounter__SetPointNumSprite(this, this->fields.totalPoint, this->fields.TotalPointNumberSp, v22);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593A419 & 1) == 0 )
  {
    sub_21FFC50(&EventInfoQPPointCounter___c_TypeInfo);
    byte_593A419 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(EventInfoQPPointCounter___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventInfoQPPointCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoQPPointCounter___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)EventInfoQPPointCounter___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return entity->fields.targetNum;
}