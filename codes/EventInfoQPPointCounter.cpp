void __fastcall EventInfoQPPointCounter___ctor(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_42E952B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21896/*"qp_counter_overlay"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E952B = 1;
  }
  *(_QWORD *)&this->fields.DigitDefaultScale = 0x3F6666663F800000LL;
  v9 = (System_Int32_array **)StringLiteral_21896/*"qp_counter_overlay"*/;
  this->fields.OverlaySpName = (struct System_String_o *)StringLiteral_21896/*"qp_counter_overlay"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.OverlaySpName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


int32_t __fastcall EventInfoQPPointCounter__GetDigit(
        EventInfoQPPointCounter_o *this,
        int64_t num,
        const MethodInfo *method)
{
  __int64 v3; // x3
  double v5; // d0

  if ( (byte_42E9527 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, num, (_DWORD)method, v3);
    byte_42E9527 = 1;
  }
  if ( !num )
    return 0;
  if ( (BYTE3(System_Math_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v5 = log10((double)num);
  if ( v5 == INFINITY )
    return (int)-v5;
  return (int)v5;
}


int64_t __fastcall EventInfoQPPointCounter__GetDigitNumber(
        EventInfoQPPointCounter_o *this,
        int64_t number,
        int64_t digit,
        const MethodInfo *method)
{
  double v6; // d0

  if ( (byte_42E9528 & 1) == 0 )
  {
    sub_B5D5C4(&System_Math_TypeInfo, number, digit, method);
    byte_42E9528 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  DataManager_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42E952A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointUpperMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    byte_42E952A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointUpperMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v9);
  }
  return EventPointUpperMaster__getPointUpper((EventPointUpperMaster_o *)Instance, this->fields.eventId, 0, 0LL);
}


int64_t __fastcall EventInfoQPPointCounter__GetNextPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  void *Instance; // x0
  __int64 v45; // x1
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x20
  EventInfoQPPointCounter___c_c *v48; // x8
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__24_0; // x21
  Il2CppObject *v51; // x22
  struct EventInfoQPPointCounter___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  int v60; // w8
  void *v61; // x21
  unsigned int v62; // w23
  int64_t v63; // x20
  __int64 v64; // x8
  int32_t v65; // w22
  __int64 v66; // x9
  Il2CppObject *Value; // x21
  int v68; // w8
  void *v69; // x21
  unsigned int v70; // w23
  _DWORD *v71; // x25
  int32_t v72; // w22
  int32_t v73; // w22
  __int64 v75; // x0

  if ( (byte_42E9529 & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_EventMissionConditionEntity__long___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Func_EventMissionConditionEntity__long__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___, v20, v21, v22);
    sub_B5D5C4(&JsonManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, v35, v36, v37);
    sub_B5D5C4(&EventInfoQPPointCounter___c_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_11010/*"QPEVENT_NEXT_DISPLAY_DATA"*/, v41, v42, v43);
    byte_42E9529 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                      MasterData_WarQuestSelectionMaster,
                                      this->fields.eventId,
                                      85,
                                      0LL);
    v48 = EventInfoQPPointCounter___c_TypeInfo;
    if ( (BYTE3(EventInfoQPPointCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoQPPointCounter___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoQPPointCounter___c_TypeInfo);
      v48 = EventInfoQPPointCounter___c_TypeInfo;
    }
    static_fields = v48->static_fields;
    _9__24_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48);
        static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      }
      v51 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_EventMissionConditionEntity__long__TypeInfo);
      System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
        _9__24_0,
        v51,
        Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__,
        (const MethodInfo_2C3003C *)Method_System_Func_EventMissionConditionEntity__long___ctor__);
      v52 = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      v52->__9__24_0 = (struct System_Func_EventMissionConditionEntity__long__o *)_9__24_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v52->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType,
                                                                 (System_Func_TSource__TKey__o *)_9__24_0,
                                                                 (const MethodInfo_1CAF628 *)Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    Instance = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                 v59,
                 (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_50;
    v60 = *((_DWORD *)Instance + 6);
    v61 = Instance;
    if ( v60 >= 1 )
    {
      v62 = 0;
      v63 = 0LL;
      while ( 1 )
      {
        if ( v60 <= v62 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v64 = *(_QWORD *)(*((_QWORD *)v61 + 2) + 8LL * (int)v62 + 32);
        if ( !v64 )
          break;
        v65 = *(_DWORD *)(v64 + 16);
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        Instance = (void *)CondType__IsMissionAchive(v65, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
          goto LABEL_29;
        if ( *((_DWORD *)v61 + 6) <= v62 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v66 = *(_QWORD *)(*((_QWORD *)v61 + 2) + 8LL * (int)v62 + 32);
        if ( !v66 )
          break;
        v60 = *((_DWORD *)v61 + 6);
        v63 = *(_QWORD *)(v66 + 56);
        if ( (int)++v62 >= v60 )
          goto LABEL_29;
      }
LABEL_50:
      sub_B5D69C(Instance, v45);
    }
  }
  v63 = 0LL;
LABEL_29:
  Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_11010/*"QPEVENT_NEXT_DISPLAY_DATA"*/, 0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    Instance = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                 Value,
                 (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    if ( !Instance )
      goto LABEL_50;
    v68 = *((_DWORD *)Instance + 6);
    v69 = Instance;
    if ( v68 >= 1 )
    {
      v70 = 0;
      while ( 1 )
      {
        if ( v70 >= v68 )
        {
          v75 = sub_B5D6C8(Instance);
          sub_B5D668(v75, 0LL);
        }
        v71 = (_DWORD *)*((_QWORD *)v69 + (int)v70 + 4);
        if ( !v71 )
          break;
        if ( v71[4] == this->fields.eventId )
        {
          v72 = v71[5];
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          Instance = (void *)CondType__IsMissionAchive(v72, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v73 = v71[6];
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            Instance = (void *)CondType__IsQuestClear_25877652(v73, -1, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              v63 = 0LL;
          }
        }
        v68 = *((_DWORD *)v69 + 6);
        if ( (int)++v70 >= v68 )
          return v63;
      }
      goto LABEL_50;
    }
  }
  return v63;
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
  if ( (byte_42E9524 & 1) == 0 )
  {
    this = (EventInfoQPPointCounter_o *)sub_B5D5C4(&int_TypeInfo, (_DWORD)val, (_DWORD)method, v3);
    byte_42E9524 = 1;
  }
  if ( !val )
    sub_B5D69C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v6 = *(_DWORD *)j_il2cpp_object_unbox_0(val);
    v5->fields.eventId = v6;
    v5->fields.totalPoint = UserEventPointMaster__GetEventPoint(v6, 0, 0LL);
    EventInfoQPPointCounter__UpdateDisp(v5, v7);
  }
  else
  {
    v8 = (EventInfoQPPointCounter_o *)sub_B5D990(val);
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
  EventInfoQPPointCounter_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Transform_o *transform; // x0
  unsigned __int64 v22; // x26
  int v23; // w27
  UISprite_o **m_Items; // x20
  UnityEngine_Object_o *v25; // x23
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  UISprite_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x24
  System_Collections_Generic_IEnumerable_TSource__o *CommaSp; // x0
  __int64 v32; // x20
  struct UISprite_array *v33; // x8
  unsigned __int64 v34; // x28
  UnityEngine_Object_o *v35; // x21
  struct UISprite_array *v36; // x8
  UISprite_o *v37; // x21
  struct UISprite_array *v38; // x8
  __int64 v39; // x8
  UnityEngine_Object_o *TotalCounterParent; // x21
  float Digit10Scale; // s0
  float v42; // s1
  int v43; // s2
  __int64 v44; // x0
  int32_t Digit; // [xsp+8h] [xbp-68h]
  int64_t DigitNumber; // [xsp+18h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_42E9526 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, number, (_DWORD)sprites, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_UISprite___, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21895/*"qp_counter_comma"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21891/*"qp_counter_"*/, v15, v16, v17);
    this = (EventInfoQPPointCounter_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v18, v19, v20);
    byte_42E9526 = 1;
  }
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = EventInfoQPPointCounter__GetDigit(this, number, (const MethodInfo *)sprites);
    transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                             (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)transform >= 1 )
    {
      v22 = 0LL;
      v23 = 0;
      m_Items = sprites->m_Items;
      while ( v22 < sprites->max_length )
      {
        v25 = (UnityEngine_Object_o *)m_Items[v22];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v25, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          if ( v22 >= sprites->max_length )
            break;
          v28 = m_Items[v22];
          if ( (__int64)v22 <= Digit )
          {
            DigitNumber = EventInfoQPPointCounter__GetDigitNumber(
                            (EventInfoQPPointCounter_o *)transform,
                            number,
                            v23,
                            v27);
            v29 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v30 = System_String__Concat_44577788((System_String_o *)StringLiteral_21891/*"qp_counter_"*/, v29, 0LL);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(v28, v30, 0LL);
            if ( v22 >= sprites->max_length )
              break;
            transform = (UnityEngine_Transform_o *)m_Items[v22];
            if ( !transform )
              goto LABEL_63;
            ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
              transform,
              transform->klass[2]._1.declaringType);
          }
          else
          {
            if ( !v28 )
              goto LABEL_63;
            UISprite__set_spriteName(m_Items[v22], (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          ++v23;
        }
        ++v22;
        transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v22 >= (int)transform )
          goto LABEL_23;
      }
LABEL_62:
      v44 = sub_B5D6C8(transform);
      sub_B5D668(v44, 0LL);
    }
LABEL_23:
    CommaSp = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.CommaSp;
    if ( CommaSp )
    {
      transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                               CommaSp,
                                               (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_UISprite___);
      if ( (int)transform >= 1 )
      {
        v32 = 4LL;
        while ( 1 )
        {
          v33 = v5->fields.CommaSp;
          if ( !v33 )
            break;
          v34 = v32 - 4;
          if ( v32 - 4 >= (unsigned __int64)v33->max_length )
            goto LABEL_62;
          v35 = (UnityEngine_Object_o *)*((_QWORD *)&v33->obj.klass + v32);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            v36 = v5->fields.CommaSp;
            if ( !v36 )
              break;
            if ( v34 >= v36->max_length )
              goto LABEL_62;
            v37 = (UISprite_o *)*((_QWORD *)&v36->obj.klass + v32);
            if ( (__int64)v34 >= Digit / 3 )
            {
              if ( !v37 )
                break;
              UISprite__set_spriteName(*((UISprite_o **)&v36->obj.klass + v32), (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            else
            {
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(
                                                       v37,
                                                       (System_String_o *)StringLiteral_21895/*"qp_counter_comma"*/,
                                                       0LL);
              v38 = v5->fields.CommaSp;
              if ( !v38 )
                break;
              if ( v34 >= v38->max_length )
                goto LABEL_62;
              transform = (UnityEngine_Transform_o *)*((_QWORD *)&v38->obj.klass + v32);
              if ( !transform )
                break;
              ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
                transform,
                transform->klass[2]._1.declaringType);
            }
          }
          transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.CommaSp,
                                                   (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_UISprite___);
          v39 = v32 - 3;
          ++v32;
          if ( v39 >= (int)transform )
            goto LABEL_45;
        }
LABEL_63:
        sub_B5D69C(transform, v26);
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
        v42 = 1.0;
        v43 = 0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  UnityEngine_Object_o *PointCounterSp; // x20
  UISprite_o *v18; // x20
  __int64 v19; // x1
  struct UISprite_o *v20; // x0
  UnityEngine_Object_o *NextCounterSp; // x20
  UISprite_o *v22; // x20
  UnityEngine_Object_o *LimitCounterSp; // x20
  UISprite_o *v24; // x20
  UnityEngine_Object_o *OverlaySp; // x20
  const MethodInfo *v26; // x1
  UISprite_o *v27; // x20
  System_String_o *OverlaySpName; // x21

  if ( (byte_42E9523 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_21893/*"qp_counter_bg_main"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_21894/*"qp_counter_bg_next"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_21892/*"qp_counter_bg_limit"*/, v14, v15, v16);
    byte_42E9523 = 1;
  }
  PointCounterSp = (UnityEngine_Object_o *)this->fields.PointCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(PointCounterSp, 0LL, 0LL) )
  {
    v18 = this->fields.PointCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_21893/*"qp_counter_bg_main"*/, 0LL);
    v20 = this->fields.PointCounterSp;
    if ( !v20 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
      v20,
      v20->klass->vtable._34_get_minWidth.methodPtr);
  }
  NextCounterSp = (UnityEngine_Object_o *)this->fields.NextCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterSp, 0LL, 0LL) )
  {
    v22 = this->fields.NextCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v22, (System_String_o *)StringLiteral_21894/*"qp_counter_bg_next"*/, 0LL);
    v20 = this->fields.NextCounterSp;
    if ( !v20 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
      v20,
      v20->klass->vtable._34_get_minWidth.methodPtr);
  }
  LimitCounterSp = (UnityEngine_Object_o *)this->fields.LimitCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCounterSp, 0LL, 0LL) )
  {
    v24 = this->fields.LimitCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v24, (System_String_o *)StringLiteral_21892/*"qp_counter_bg_limit"*/, 0LL);
    v20 = this->fields.LimitCounterSp;
    if ( !v20 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
      v20,
      v20->klass->vtable._34_get_minWidth.methodPtr);
  }
  OverlaySp = (UnityEngine_Object_o *)this->fields.OverlaySp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(OverlaySp, 0LL, 0LL) )
  {
    v27 = this->fields.OverlaySp;
    OverlaySpName = this->fields.OverlaySpName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v27, OverlaySpName, 0LL);
    v20 = this->fields.OverlaySp;
    if ( v20 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
        v20,
        v20->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_39;
    }
LABEL_40:
    sub_B5D69C(v20, v19);
  }
LABEL_39:
  EventInfoQPPointCounter__UpdateDisp(this, v26);
}


void __fastcall EventInfoQPPointCounter__UpdateDisp(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int64_t NextPoint; // x21
  const MethodInfo *v18; // x1
  int64_t LimitPoint; // x0
  UnityEngine_Object_o *NextCounterLabel; // x22
  __int64 v21; // x20
  UILabel_o *v22; // x22
  System_String_o *v23; // x23
  Il2CppObject *v24; // x0
  System_String_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_Object_o *LimitCounterLabel; // x22
  UILabel_o *v28; // x22
  System_String_o *v29; // x23
  Il2CppObject *v30; // x0
  UnityEngine_Object_o *NextCounterParent; // x22
  UnityEngine_Object_o *LimitCountParent; // x21
  const MethodInfo *v33; // x3
  int64_t v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E9525 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_5753/*"EVENT_QPPOINT_NEXT_FORMAT"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5752/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, v14, v15, v16);
    byte_42E9525 = 1;
  }
  NextPoint = EventInfoQPPointCounter__GetNextPoint(this, method);
  LimitPoint = EventInfoQPPointCounter__GetLimitPoint(this, v18);
  NextCounterLabel = (UnityEngine_Object_o *)this->fields.NextCounterLabel;
  v21 = LimitPoint;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterLabel, 0LL, 0LL) )
  {
    v22 = this->fields.NextCounterLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5753/*"EVENT_QPPOINT_NEXT_FORMAT"*/, 0LL);
    v34 = NextPoint;
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34);
    v25 = System_String__Format(v23, v24, 0LL);
    if ( !v22 )
      goto LABEL_34;
    UILabel__set_text(v22, v25, 0LL);
  }
  LimitCounterLabel = (UnityEngine_Object_o *)this->fields.LimitCounterLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCounterLabel, 0LL, 0LL) )
  {
    v28 = this->fields.LimitCounterLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5752/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, 0LL);
    v34 = v21;
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v34);
    v25 = System_String__Format(v29, v30, 0LL);
    if ( !v28 )
      goto LABEL_34;
    UILabel__set_text(v28, v25, 0LL);
  }
  NextCounterParent = (UnityEngine_Object_o *)this->fields.NextCounterParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterParent, 0LL, 0LL) )
  {
    v25 = (System_String_o *)this->fields.NextCounterParent;
    if ( !v25 )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, NextPoint > 0, 0LL);
  }
  LimitCountParent = (UnityEngine_Object_o *)this->fields.LimitCountParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCountParent, 0LL, 0LL) )
  {
    v25 = (System_String_o *)this->fields.LimitCountParent;
    if ( v25 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, v21 > 0, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_B5D69C(v25, v26);
  }
LABEL_33:
  EventInfoQPPointCounter__SetPointNumSprite(this, this->fields.totalPoint, this->fields.TotalPointNumberSp, v33);
}


void __fastcall EventInfoQPPointCounter_NextDisplayData___ctor(
        EventInfoQPPointCounter_NextDisplayData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventInfoQPPointCounter___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x0

  if ( (byte_42E6543 & 1) == 0 )
  {
    sub_B5D5C4(&EventInfoQPPointCounter___c_TypeInfo, v1, v2, v3);
    byte_42E6543 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EventInfoQPPointCounter___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EventInfoQPPointCounter___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return entity->fields.targetNum;
}