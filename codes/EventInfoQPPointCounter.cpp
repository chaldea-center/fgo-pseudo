void __fastcall EventInfoQPPointCounter___ctor(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_4188695 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21605/*"qp_counter_overlay"*/, method);
    byte_4188695 = 1;
  }
  *(_QWORD *)&this->fields.DigitDefaultScale = 0x3F6666663F800000LL;
  v9 = (System_Int32_array **)StringLiteral_21605/*"qp_counter_overlay"*/;
  this->fields.OverlaySpName = (struct System_String_o *)StringLiteral_21605/*"qp_counter_overlay"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.OverlaySpName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


int32_t __fastcall EventInfoQPPointCounter__GetDigit(
        EventInfoQPPointCounter_o *this,
        int64_t num,
        const MethodInfo *method)
{
  double v4; // d0

  if ( (byte_4188691 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, num);
    byte_4188691 = 1;
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

  if ( (byte_4188692 & 1) == 0 )
  {
    sub_B2C35C(&System_Math_TypeInfo, number);
    byte_4188692 = 1;
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
  __int64 v3; // x1
  DataManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4188694 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventPointUpperMaster___, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_4188694 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventPointUpperMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v5);
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
  __int64 v15; // x1
  void *Instance; // x0
  __int64 v17; // x1
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x20
  EventInfoQPPointCounter___c_c *v20; // x8
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__24_0; // x21
  Il2CppObject *v23; // x22
  struct EventInfoQPPointCounter___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  int v32; // w8
  void *v33; // x21
  unsigned int v34; // w23
  int64_t v35; // x20
  __int64 v36; // x8
  int32_t v37; // w22
  __int64 v38; // x9
  Il2CppObject *Value; // x21
  int v40; // w8
  void *v41; // x21
  unsigned int v42; // w23
  _DWORD *v43; // x25
  int32_t v44; // w22
  int32_t v45; // w22
  __int64 v47; // x0

  if ( (byte_4188693 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___, v5);
    sub_B2C35C(&Method_System_Func_EventMissionConditionEntity__long___ctor__, v6);
    sub_B2C35C(&System_Func_EventMissionConditionEntity__long__TypeInfo, v7);
    sub_B2C35C(&Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___, v8);
    sub_B2C35C(&JsonManager_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, v13);
    sub_B2C35C(&EventInfoQPPointCounter___c_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_10880/*"QPEVENT_NEXT_DISPLAY_DATA"*/, v15);
    byte_4188693 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                      MasterData_WarQuestSelectionMaster,
                                      this->fields.eventId,
                                      85,
                                      0LL);
    v20 = EventInfoQPPointCounter___c_TypeInfo;
    if ( (BYTE3(EventInfoQPPointCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoQPPointCounter___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoQPPointCounter___c_TypeInfo);
      v20 = EventInfoQPPointCounter___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__24_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      }
      v23 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B2C42C(System_Func_EventMissionConditionEntity__long__TypeInfo);
      System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
        _9__24_0,
        v23,
        Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__,
        (const MethodInfo_2712F70 *)Method_System_Func_EventMissionConditionEntity__long___ctor__);
      v24 = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      v24->__9__24_0 = (struct System_Func_EventMissionConditionEntity__long__o *)_9__24_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v24->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType,
                                                                 (System_Func_TSource__TKey__o *)_9__24_0,
                                                                 (const MethodInfo_1A93A78 *)Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    Instance = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                 v31,
                 (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_50;
    v32 = *((_DWORD *)Instance + 6);
    v33 = Instance;
    if ( v32 >= 1 )
    {
      v34 = 0;
      v35 = 0LL;
      while ( 1 )
      {
        if ( v32 <= v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v36 = *(_QWORD *)(*((_QWORD *)v33 + 2) + 8LL * (int)v34 + 32);
        if ( !v36 )
          break;
        v37 = *(_DWORD *)(v36 + 16);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (void *)CondType__IsMissionAchive(v37, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_29;
        if ( *((_DWORD *)v33 + 6) <= v34 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v38 = *(_QWORD *)(*((_QWORD *)v33 + 2) + 8LL * (int)v34 + 32);
        if ( !v38 )
          break;
        v32 = *((_DWORD *)v33 + 6);
        v35 = *(_QWORD *)(v38 + 56);
        if ( (int)++v34 >= v32 )
          goto LABEL_29;
      }
LABEL_50:
      sub_B2C434(Instance, v17);
    }
  }
  v35 = 0LL;
LABEL_29:
  Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_10880/*"QPEVENT_NEXT_DISPLAY_DATA"*/, 0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Instance = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                 Value,
                 (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    if ( !Instance )
      goto LABEL_50;
    v40 = *((_DWORD *)Instance + 6);
    v41 = Instance;
    if ( v40 >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= v40 )
        {
          v47 = sub_B2C460(Instance);
          sub_B2C400(v47, 0LL);
        }
        v43 = (_DWORD *)*((_QWORD *)v41 + (int)v42 + 4);
        if ( !v43 )
          break;
        if ( v43[4] == this->fields.eventId )
        {
          v44 = v43[5];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (void *)CondType__IsMissionAchive(v44, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v45 = v43[6];
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            Instance = (void *)CondType__IsQuestClear_25746984(v45, -1, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              v35 = 0LL;
          }
        }
        v40 = *((_DWORD *)v41 + 6);
        if ( (int)++v42 >= v40 )
          return v35;
      }
      goto LABEL_50;
    }
  }
  return v35;
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
  if ( (byte_418868E & 1) == 0 )
  {
    this = (EventInfoQPPointCounter_o *)sub_B2C35C(&int_TypeInfo, val);
    byte_418868E = 1;
  }
  if ( !val )
    sub_B2C434(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5 = *(_DWORD *)j_il2cpp_object_unbox_0(val);
    v4->fields.eventId = v5;
    v4->fields.totalPoint = UserEventPointMaster__GetEventPoint(v5, 0, 0LL);
    EventInfoQPPointCounter__UpdateDisp(v4, v6);
  }
  else
  {
    v7 = (EventInfoQPPointCounter_o *)sub_B2C728(val);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Transform_o *transform; // x0
  unsigned __int64 v12; // x26
  int v13; // w27
  UISprite_o **m_Items; // x20
  UnityEngine_Object_o *v15; // x23
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  UISprite_o *v18; // x23
  System_String_o *v19; // x0
  System_String_o *v20; // x24
  System_Collections_Generic_IEnumerable_TSource__o *CommaSp; // x0
  __int64 v22; // x20
  struct UISprite_array *v23; // x8
  unsigned __int64 v24; // x28
  UnityEngine_Object_o *v25; // x21
  struct UISprite_array *v26; // x8
  UISprite_o *v27; // x21
  struct UISprite_array *v28; // x8
  __int64 v29; // x8
  UnityEngine_Object_o *TotalCounterParent; // x21
  float Digit10Scale; // s0
  float v32; // s1
  int v33; // s2
  __int64 v34; // x0
  int32_t Digit; // [xsp+8h] [xbp-68h]
  int64_t DigitNumber; // [xsp+18h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_4188690 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, number);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_UISprite___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_21604/*"qp_counter_comma"*/, v8);
    sub_B2C35C(&StringLiteral_21600/*"qp_counter_"*/, v9);
    this = (EventInfoQPPointCounter_o *)sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4188690 = 1;
  }
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = EventInfoQPPointCounter__GetDigit(this, number, (const MethodInfo *)sprites);
    transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                             (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)transform >= 1 )
    {
      v12 = 0LL;
      v13 = 0;
      m_Items = sprites->m_Items;
      while ( v12 < sprites->max_length )
      {
        v15 = (UnityEngine_Object_o *)m_Items[v12];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          if ( v12 >= sprites->max_length )
            break;
          v18 = m_Items[v12];
          if ( (__int64)v12 <= Digit )
          {
            DigitNumber = EventInfoQPPointCounter__GetDigitNumber(
                            (EventInfoQPPointCounter_o *)transform,
                            number,
                            v13,
                            v17);
            v19 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v20 = System_String__Concat_44305532((System_String_o *)StringLiteral_21600/*"qp_counter_"*/, v19, 0LL);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(v18, v20, 0LL);
            if ( v12 >= sprites->max_length )
              break;
            transform = (UnityEngine_Transform_o *)m_Items[v12];
            if ( !transform )
              goto LABEL_63;
            ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
              transform,
              transform->klass[2]._1.declaringType);
          }
          else
          {
            if ( !v18 )
              goto LABEL_63;
            UISprite__set_spriteName(m_Items[v12], (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          ++v13;
        }
        ++v12;
        transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v12 >= (int)transform )
          goto LABEL_23;
      }
LABEL_62:
      v34 = sub_B2C460(transform);
      sub_B2C400(v34, 0LL);
    }
LABEL_23:
    CommaSp = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.CommaSp;
    if ( CommaSp )
    {
      transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                               CommaSp,
                                               (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_UISprite___);
      if ( (int)transform >= 1 )
      {
        v22 = 4LL;
        while ( 1 )
        {
          v23 = v5->fields.CommaSp;
          if ( !v23 )
            break;
          v24 = v22 - 4;
          if ( v22 - 4 >= (unsigned __int64)v23->max_length )
            goto LABEL_62;
          v25 = (UnityEngine_Object_o *)*((_QWORD *)&v23->obj.klass + v22);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            v26 = v5->fields.CommaSp;
            if ( !v26 )
              break;
            if ( v24 >= v26->max_length )
              goto LABEL_62;
            v27 = (UISprite_o *)*((_QWORD *)&v26->obj.klass + v22);
            if ( (__int64)v24 >= Digit / 3 )
            {
              if ( !v27 )
                break;
              UISprite__set_spriteName(*((UISprite_o **)&v26->obj.klass + v22), (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            else
            {
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(
                                                       v27,
                                                       (System_String_o *)StringLiteral_21604/*"qp_counter_comma"*/,
                                                       0LL);
              v28 = v5->fields.CommaSp;
              if ( !v28 )
                break;
              if ( v24 >= v28->max_length )
                goto LABEL_62;
              transform = (UnityEngine_Transform_o *)*((_QWORD *)&v28->obj.klass + v22);
              if ( !transform )
                break;
              ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
                transform,
                transform->klass[2]._1.declaringType);
            }
          }
          transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.CommaSp,
                                                   (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_UISprite___);
          v29 = v22 - 3;
          ++v22;
          if ( v29 >= (int)transform )
            goto LABEL_45;
        }
LABEL_63:
        sub_B2C434(transform, v16);
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
        v32 = 1.0;
        v33 = 0;
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

  if ( (byte_418868D & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_21602/*"qp_counter_bg_main"*/, v4);
    sub_B2C35C(&StringLiteral_21603/*"qp_counter_bg_next"*/, v5);
    sub_B2C35C(&StringLiteral_21601/*"qp_counter_bg_limit"*/, v6);
    byte_418868D = 1;
  }
  PointCounterSp = (UnityEngine_Object_o *)this->fields.PointCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(PointCounterSp, 0LL, 0LL) )
  {
    v8 = this->fields.PointCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_21602/*"qp_counter_bg_main"*/, 0LL);
    v10 = this->fields.PointCounterSp;
    if ( !v10 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
      v10,
      v10->klass->vtable._34_get_minWidth.methodPtr);
  }
  NextCounterSp = (UnityEngine_Object_o *)this->fields.NextCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterSp, 0LL, 0LL) )
  {
    v12 = this->fields.NextCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v12, (System_String_o *)StringLiteral_21603/*"qp_counter_bg_next"*/, 0LL);
    v10 = this->fields.NextCounterSp;
    if ( !v10 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
      v10,
      v10->klass->vtable._34_get_minWidth.methodPtr);
  }
  LimitCounterSp = (UnityEngine_Object_o *)this->fields.LimitCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCounterSp, 0LL, 0LL) )
  {
    v14 = this->fields.LimitCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v14, (System_String_o *)StringLiteral_21601/*"qp_counter_bg_limit"*/, 0LL);
    v10 = this->fields.LimitCounterSp;
    if ( !v10 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
      v10,
      v10->klass->vtable._34_get_minWidth.methodPtr);
  }
  OverlaySp = (UnityEngine_Object_o *)this->fields.OverlaySp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(OverlaySp, 0LL, 0LL) )
  {
    v17 = this->fields.OverlaySp;
    OverlaySpName = this->fields.OverlaySpName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v17, OverlaySpName, 0LL);
    v10 = this->fields.OverlaySp;
    if ( v10 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v10->klass->vtable._33_MakePixelPerfect.method)(
        v10,
        v10->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_39;
    }
LABEL_40:
    sub_B2C434(v10, v9);
  }
LABEL_39:
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
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *LimitCounterLabel; // x22
  UILabel_o *v18; // x22
  System_String_o *v19; // x23
  Il2CppObject *v20; // x0
  UnityEngine_Object_o *NextCounterParent; // x22
  UnityEngine_Object_o *LimitCountParent; // x21
  const MethodInfo *v23; // x3
  int64_t v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418868F & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, method);
    sub_B2C35C(&LocalizationManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_5676/*"EVENT_QPPOINT_NEXT_FORMAT"*/, v5);
    sub_B2C35C(&StringLiteral_5675/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, v6);
    byte_418868F = 1;
  }
  NextPoint = EventInfoQPPointCounter__GetNextPoint(this, method);
  LimitPoint = EventInfoQPPointCounter__GetLimitPoint(this, v8);
  NextCounterLabel = (UnityEngine_Object_o *)this->fields.NextCounterLabel;
  v11 = LimitPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterLabel, 0LL, 0LL) )
  {
    v12 = this->fields.NextCounterLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5676/*"EVENT_QPPOINT_NEXT_FORMAT"*/, 0LL);
    v24 = NextPoint;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
    v15 = System_String__Format(v13, v14, 0LL);
    if ( !v12 )
      goto LABEL_34;
    UILabel__set_text(v12, v15, 0LL);
  }
  LimitCounterLabel = (UnityEngine_Object_o *)this->fields.LimitCounterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCounterLabel, 0LL, 0LL) )
  {
    v18 = this->fields.LimitCounterLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5675/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, 0LL);
    v24 = v11;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v24);
    v15 = System_String__Format(v19, v20, 0LL);
    if ( !v18 )
      goto LABEL_34;
    UILabel__set_text(v18, v15, 0LL);
  }
  NextCounterParent = (UnityEngine_Object_o *)this->fields.NextCounterParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterParent, 0LL, 0LL) )
  {
    v15 = (System_String_o *)this->fields.NextCounterParent;
    if ( !v15 )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v15, NextPoint > 0, 0LL);
  }
  LimitCountParent = (UnityEngine_Object_o *)this->fields.LimitCountParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCountParent, 0LL, 0LL) )
  {
    v15 = (System_String_o *)this->fields.LimitCountParent;
    if ( v15 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v15, v11 > 0, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_B2C434(v15, v16);
  }
LABEL_33:
  EventInfoQPPointCounter__SetPointNumSprite(this, this->fields.totalPoint, this->fields.TotalPointNumberSp, v23);
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
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x0

  if ( (byte_4184B0C & 1) == 0 )
  {
    sub_B2C35C(&EventInfoQPPointCounter___c_TypeInfo, v1);
    byte_4184B0C = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EventInfoQPPointCounter___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoQPPointCounter___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return entity->fields.targetNum;
}