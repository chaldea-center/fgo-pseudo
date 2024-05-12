void __fastcall EventInfoQPPointCounter___ctor(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_438C261 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22062/*"qp_counter_overlay"*/);
    byte_438C261 = 1;
  }
  *(_QWORD *)&this->fields.DigitDefaultScale = 0x3F6666663F800000LL;
  v9 = (System_Int32_array **)StringLiteral_22062/*"qp_counter_overlay"*/;
  this->fields.OverlaySpName = (struct System_String_o *)StringLiteral_22062/*"qp_counter_overlay"*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.OverlaySpName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


int32_t __fastcall EventInfoQPPointCounter__GetDigit(
        EventInfoQPPointCounter_o *this,
        int64_t num,
        const MethodInfo *method)
{
  double v4; // d0

  if ( (byte_438C25D & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    byte_438C25D = 1;
  }
  if ( !num )
    return 0;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4 = log10((double)num);
  if ( v4 == INFINITY )
    return (int)-v4;
  return (int)v4;
}


int64_t __fastcall EventInfoQPPointCounter__GetDigitNumber(
        EventInfoQPPointCounter_o *this,
        int64_t number,
        int64_t digit,
        const MethodInfo *method)
{
  double v6; // d0

  if ( (byte_438C25E & 1) == 0 )
  {
    sub_B775C4(&System_Math_TypeInfo);
    byte_438C25E = 1;
  }
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = System_Math__Pow(10.0, (double)digit, 0LL);
  if ( v6 == INFINITY )
    v6 = -v6;
  return number / (int)v6 % 10;
}


int64_t __fastcall EventInfoQPPointCounter__GetLimitPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438C260 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventPointUpperMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C260 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventPointUpperMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  return EventPointUpperMaster__getPointUpper((EventPointUpperMaster_o *)Instance, this->fields.eventId, 0, 0LL);
}


int64_t __fastcall EventInfoQPPointCounter__GetNextPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x20
  EventInfoQPPointCounter___c_c *v7; // x8
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__24_0; // x21
  Il2CppObject *v10; // x22
  struct EventInfoQPPointCounter___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  int v19; // w8
  void *v20; // x21
  unsigned int v21; // w23
  int64_t v22; // x20
  __int64 v23; // x8
  int32_t v24; // w22
  __int64 v25; // x9
  Il2CppObject *Value; // x21
  int v27; // w8
  void *v28; // x21
  unsigned int v29; // w23
  _DWORD *v30; // x25
  int32_t v31; // w22
  int32_t v32; // w22
  __int64 v34; // x0

  if ( (byte_438C25F & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    sub_B775C4(&Method_System_Func_EventMissionConditionEntity__long___ctor__);
    sub_B775C4(&System_Func_EventMissionConditionEntity__long__TypeInfo);
    sub_B775C4(&Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__);
    sub_B775C4(&EventInfoQPPointCounter___c_TypeInfo);
    sub_B775C4(&StringLiteral_11090/*"QPEVENT_NEXT_DISPLAY_DATA"*/);
    byte_438C25F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                      MasterData_WarQuestSelectionMaster,
                                      this->fields.eventId,
                                      85,
                                      0LL);
    v7 = EventInfoQPPointCounter___c_TypeInfo;
    if ( (BYTE3(EventInfoQPPointCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoQPPointCounter___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoQPPointCounter___c_TypeInfo);
      v7 = EventInfoQPPointCounter___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__24_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B77694(System_Func_EventMissionConditionEntity__long__TypeInfo);
      System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
        _9__24_0,
        v10,
        Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__,
        (const MethodInfo_29EA630 *)Method_System_Func_EventMissionConditionEntity__long___ctor__);
      v11 = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      v11->__9__24_0 = (struct System_Func_EventMissionConditionEntity__long__o *)_9__24_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v11->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType,
                                                                 (System_Func_TSource__TKey__o *)_9__24_0,
                                                                 (const MethodInfo_1D34E30 *)Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    Instance = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                 v18,
                 (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_50;
    v19 = *((_DWORD *)Instance + 6);
    v20 = Instance;
    if ( v19 >= 1 )
    {
      v21 = 0;
      v22 = 0LL;
      while ( 1 )
      {
        if ( v19 <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v23 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 8LL * (int)v21 + 32);
        if ( !v23 )
          break;
        v24 = *(_DWORD *)(v23 + 16);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (void *)CondType__IsMissionAchive(v24, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_29;
        if ( *((_DWORD *)v20 + 6) <= v21 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v25 = *(_QWORD *)(*((_QWORD *)v20 + 2) + 8LL * (int)v21 + 32);
        if ( !v25 )
          break;
        v19 = *((_DWORD *)v20 + 6);
        v22 = *(_QWORD *)(v25 + 56);
        if ( (int)++v21 >= v19 )
          goto LABEL_29;
      }
LABEL_50:
      sub_B7769C(Instance, v4);
    }
  }
  v22 = 0LL;
LABEL_29:
  Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_11090/*"QPEVENT_NEXT_DISPLAY_DATA"*/, 0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Instance = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                 Value,
                 (const MethodInfo_1DF16CC *)Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    if ( !Instance )
      goto LABEL_50;
    v27 = *((_DWORD *)Instance + 6);
    v28 = Instance;
    if ( v27 >= 1 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( v29 >= v27 )
        {
          v34 = sub_B776C8(Instance);
          sub_B77668(v34, 0LL);
        }
        v30 = (_DWORD *)*((_QWORD *)v28 + (int)v29 + 4);
        if ( !v30 )
          break;
        if ( v30[4] == this->fields.eventId )
        {
          v31 = v30[5];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (void *)CondType__IsMissionAchive(v31, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v32 = v30[6];
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            Instance = (void *)CondType__IsQuestClear_24699280(v32, -1, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              v22 = 0LL;
          }
        }
        v27 = *((_DWORD *)v28 + 6);
        if ( (int)++v29 >= v27 )
          return v22;
      }
      goto LABEL_50;
    }
  }
  return v22;
}


void __fastcall EventInfoQPPointCounter__SetEventId(
        EventInfoQPPointCounter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  EventInfoQPPointCounter_o *v4; // x19
  int32_t v5; // w0
  const MethodInfo *v6; // x1
  EventInfoQPPointCounter_o *v7; // x0
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_438C25A & 1) == 0 )
  {
    this = (EventInfoQPPointCounter_o *)sub_B775C4(&int_TypeInfo);
    byte_438C25A = 1;
  }
  if ( !val )
    sub_B7769C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5 = *(_DWORD *)j_il2cpp_object_unbox_0(val);
    v4->fields.eventId = v5;
    v4->fields.totalPoint = UserEventPointMaster__GetEventPoint(v5, 0, 0LL);
    EventInfoQPPointCounter__UpdateDisp(v4, v6);
  }
  else
  {
    v7 = (EventInfoQPPointCounter_o *)sub_B77990(val);
    EventInfoQPPointCounter__GetNextPoint(v7, v8);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventInfoQPPointCounter__SetPointNumSprite(
        EventInfoQPPointCounter_o *this,
        int64_t number,
        UISprite_array *sprites,
        const MethodInfo *method)
{
  EventInfoQPPointCounter_o *v5; // x19
  UnityEngine_Transform_o *transform; // x0
  unsigned __int64 v7; // x26
  int v8; // w27
  UISprite_o **m_Items; // x20
  UnityEngine_Object_o *v10; // x23
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  UISprite_o *v13; // x23
  System_String_o *v14; // x0
  System_String_o *v15; // x24
  System_Collections_Generic_IEnumerable_TSource__o *CommaSp; // x0
  __int64 v17; // x20
  struct UISprite_array *v18; // x8
  unsigned __int64 v19; // x28
  UnityEngine_Object_o *v20; // x21
  struct UISprite_array *v21; // x8
  UISprite_o *v22; // x21
  struct UISprite_array *v23; // x8
  __int64 v24; // x8
  UnityEngine_Object_o *TotalCounterParent; // x21
  float Digit10Scale; // s0
  float v27; // s1
  int v28; // s2
  __int64 v29; // x0
  int32_t Digit; // [xsp+8h] [xbp-68h]
  int64_t DigitNumber; // [xsp+18h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_438C25C & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_Count_UISprite___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_22061/*"qp_counter_comma"*/);
    sub_B775C4(&StringLiteral_22057/*"qp_counter_"*/);
    this = (EventInfoQPPointCounter_o *)sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C25C = 1;
  }
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = EventInfoQPPointCounter__GetDigit(this, number, (const MethodInfo *)sprites);
    transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                             (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)transform >= 1 )
    {
      v7 = 0LL;
      v8 = 0;
      m_Items = sprites->m_Items;
      while ( v7 < sprites->max_length )
      {
        v10 = (UnityEngine_Object_o *)m_Items[v7];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          if ( v7 >= sprites->max_length )
            break;
          v13 = m_Items[v7];
          if ( (__int64)v7 <= Digit )
          {
            DigitNumber = EventInfoQPPointCounter__GetDigitNumber(
                            (EventInfoQPPointCounter_o *)transform,
                            number,
                            v8,
                            v12);
            v14 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v15 = System_String__Concat_44901936((System_String_o *)StringLiteral_22057/*"qp_counter_"*/, v14, 0LL);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(v13, v15, 0LL);
            if ( v7 >= sprites->max_length )
              break;
            transform = (UnityEngine_Transform_o *)m_Items[v7];
            if ( !transform )
              goto LABEL_63;
            ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
              transform,
              transform->klass[2]._1.declaringType);
          }
          else
          {
            if ( !v13 )
              goto LABEL_63;
            UISprite__set_spriteName(m_Items[v7], (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          ++v8;
        }
        ++v7;
        transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v7 >= (int)transform )
          goto LABEL_23;
      }
LABEL_62:
      v29 = sub_B776C8(transform);
      sub_B77668(v29, 0LL);
    }
LABEL_23:
    CommaSp = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.CommaSp;
    if ( CommaSp )
    {
      transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                               CommaSp,
                                               (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_UISprite___);
      if ( (int)transform >= 1 )
      {
        v17 = 4LL;
        while ( 1 )
        {
          v18 = v5->fields.CommaSp;
          if ( !v18 )
            break;
          v19 = v17 - 4;
          if ( v17 - 4 >= (unsigned __int64)v18->max_length )
            goto LABEL_62;
          v20 = (UnityEngine_Object_o *)*((_QWORD *)&v18->obj.klass + v17);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v20, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            v21 = v5->fields.CommaSp;
            if ( !v21 )
              break;
            if ( v19 >= v21->max_length )
              goto LABEL_62;
            v22 = (UISprite_o *)*((_QWORD *)&v21->obj.klass + v17);
            if ( (__int64)v19 >= Digit / 3 )
            {
              if ( !v22 )
                break;
              UISprite__set_spriteName(*((UISprite_o **)&v21->obj.klass + v17), (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            else
            {
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(
                                                       v22,
                                                       (System_String_o *)StringLiteral_22061/*"qp_counter_comma"*/,
                                                       0LL);
              v23 = v5->fields.CommaSp;
              if ( !v23 )
                break;
              if ( v19 >= v23->max_length )
                goto LABEL_62;
              transform = (UnityEngine_Transform_o *)*((_QWORD *)&v23->obj.klass + v17);
              if ( !transform )
                break;
              ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
                transform,
                transform->klass[2]._1.declaringType);
            }
          }
          transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.CommaSp,
                                                   (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_UISprite___);
          v24 = v17 - 3;
          ++v17;
          if ( v24 >= (int)transform )
            goto LABEL_45;
        }
LABEL_63:
        sub_B7769C(transform, v11);
      }
    }
LABEL_45:
    TotalCounterParent = (UnityEngine_Object_o *)v5->fields.TotalCounterParent;
    if ( Digit + 1 >= 10 )
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(TotalCounterParent, 0LL, 0LL) )
      {
        transform = (UnityEngine_Transform_o *)v5->fields.TotalCounterParent;
        if ( !transform )
          goto LABEL_63;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
        if ( !transform )
          goto LABEL_63;
        Digit10Scale = v5->fields.Digit10Scale;
        goto LABEL_60;
      }
    }
    else
    {
      if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(TotalCounterParent, 0LL, 0LL) )
      {
        transform = (UnityEngine_Transform_o *)v5->fields.TotalCounterParent;
        if ( !transform )
          goto LABEL_63;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
        if ( !transform )
          goto LABEL_63;
        Digit10Scale = v5->fields.DigitDefaultScale;
LABEL_60:
        v27 = 1.0;
        v28 = 0;
        UnityEngine_Transform__set_localScale(transform, *(UnityEngine_Vector3_o *)&Digit10Scale, 0LL);
      }
    }
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

  if ( (byte_438C259 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_22059/*"qp_counter_bg_main"*/);
    sub_B775C4(&StringLiteral_22060/*"qp_counter_bg_next"*/);
    sub_B775C4(&StringLiteral_22058/*"qp_counter_bg_limit"*/);
    byte_438C259 = 1;
  }
  PointCounterSp = (UnityEngine_Object_o *)this->fields.PointCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(PointCounterSp, 0LL, 0LL) )
  {
    v4 = this->fields.PointCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v4, (System_String_o *)StringLiteral_22059/*"qp_counter_bg_main"*/, 0LL);
    v6 = this->fields.PointCounterSp;
    if ( !v6 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
  NextCounterSp = (UnityEngine_Object_o *)this->fields.NextCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterSp, 0LL, 0LL) )
  {
    v8 = this->fields.NextCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_22060/*"qp_counter_bg_next"*/, 0LL);
    v6 = this->fields.NextCounterSp;
    if ( !v6 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
  LimitCounterSp = (UnityEngine_Object_o *)this->fields.LimitCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCounterSp, 0LL, 0LL) )
  {
    v10 = this->fields.LimitCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v10, (System_String_o *)StringLiteral_22058/*"qp_counter_bg_limit"*/, 0LL);
    v6 = this->fields.LimitCounterSp;
    if ( !v6 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
      v6,
      v6->klass->vtable._34_get_minWidth.methodPtr);
  }
  OverlaySp = (UnityEngine_Object_o *)this->fields.OverlaySp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(OverlaySp, 0LL, 0LL) )
  {
    v13 = this->fields.OverlaySp;
    OverlaySpName = this->fields.OverlaySpName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v13, OverlaySpName, 0LL);
    v6 = this->fields.OverlaySp;
    if ( v6 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v6->klass->vtable._33_MakePixelPerfect.method)(
        v6,
        v6->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_39;
    }
LABEL_40:
    sub_B7769C(v6, v5);
  }
LABEL_39:
  EventInfoQPPointCounter__UpdateDisp(this, v12);
}


void __fastcall EventInfoQPPointCounter__UpdateDisp(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  int64_t NextPoint; // x21
  const MethodInfo *v4; // x1
  int64_t LimitPoint; // x0
  UnityEngine_Object_o *NextCounterLabel; // x22
  __int64 v7; // x20
  UILabel_o *v8; // x22
  System_String_o *v9; // x23
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  System_String_o *v12; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *LimitCounterLabel; // x22
  UILabel_o *v15; // x22
  System_String_o *v16; // x23
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  UnityEngine_Object_o *NextCounterParent; // x22
  UnityEngine_Object_o *LimitCountParent; // x21
  const MethodInfo *v21; // x3
  int64_t v22; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438C25B & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_5820/*"EVENT_QPPOINT_NEXT_FORMAT"*/);
    sub_B775C4(&StringLiteral_5819/*"EVENT_QPPOINT_LIMIT_FORMAT"*/);
    byte_438C25B = 1;
  }
  NextPoint = EventInfoQPPointCounter__GetNextPoint(this, method);
  LimitPoint = EventInfoQPPointCounter__GetLimitPoint(this, v4);
  NextCounterLabel = (UnityEngine_Object_o *)this->fields.NextCounterLabel;
  v7 = LimitPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterLabel, 0LL, 0LL) )
  {
    v8 = this->fields.NextCounterLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_5820/*"EVENT_QPPOINT_NEXT_FORMAT"*/, 0LL);
    v22 = NextPoint;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v10);
    v12 = System_String__Format(v9, v11, 0LL);
    if ( !v8 )
      goto LABEL_34;
    UILabel__set_text(v8, v12, 0LL);
  }
  LimitCounterLabel = (UnityEngine_Object_o *)this->fields.LimitCounterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCounterLabel, 0LL, 0LL) )
  {
    v15 = this->fields.LimitCounterLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5819/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, 0LL);
    v22 = v7;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v22, v17);
    v12 = System_String__Format(v16, v18, 0LL);
    if ( !v15 )
      goto LABEL_34;
    UILabel__set_text(v15, v12, 0LL);
  }
  NextCounterParent = (UnityEngine_Object_o *)this->fields.NextCounterParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterParent, 0LL, 0LL) )
  {
    v12 = (System_String_o *)this->fields.NextCounterParent;
    if ( !v12 )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, NextPoint > 0, 0LL);
  }
  LimitCountParent = (UnityEngine_Object_o *)this->fields.LimitCountParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCountParent, 0LL, 0LL) )
  {
    v12 = (System_String_o *)this->fields.LimitCountParent;
    if ( v12 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v12, v7 > 0, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_B7769C(v12, v13);
  }
LABEL_33:
  EventInfoQPPointCounter__SetPointNumSprite(this, this->fields.totalPoint, this->fields.TotalPointNumberSp, v21);
}


void __fastcall EventInfoQPPointCounter_NextDisplayData___ctor(
        EventInfoQPPointCounter_NextDisplayData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoQPPointCounter___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x0

  if ( (byte_438866F & 1) == 0 )
  {
    sub_B775C4(&EventInfoQPPointCounter___c_TypeInfo);
    byte_438866F = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EventInfoQPPointCounter___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoQPPointCounter___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return entity->fields.targetNum;
}