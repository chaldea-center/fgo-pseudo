void __fastcall EventInfoQPPointCounter___ctor(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1

  if ( (byte_40FA162 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21513/*"qp_counter_overlay"*/, method);
    byte_40FA162 = 1;
  }
  *(_QWORD *)&this->fields.DigitDefaultScale = 0x3F6666663F800000LL;
  v9 = (System_Int32_array **)StringLiteral_21513/*"qp_counter_overlay"*/;
  this->fields.OverlaySpName = (struct System_String_o *)StringLiteral_21513/*"qp_counter_overlay"*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.OverlaySpName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


int32_t __fastcall EventInfoQPPointCounter__GetDigit(
        EventInfoQPPointCounter_o *this,
        int64_t num,
        const MethodInfo *method)
{
  double v4; // d0

  if ( (byte_40FA15E & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, num);
    byte_40FA15E = 1;
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

  if ( (byte_40FA15F & 1) == 0 )
  {
    sub_B16FFC(&System_Math_TypeInfo, number);
    byte_40FA15F = 1;
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
  WebViewManager_o *Instance; // x0
  EventPointUpperMaster_o *MasterData_WarQuestSelectionMaster; // x0

  if ( (byte_40FA161 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventPointUpperMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_40FA161 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (EventPointUpperMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventPointUpperMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  return EventPointUpperMaster__getPointUpper(MasterData_WarQuestSelectionMaster, this->fields.eventId, 0, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventMissionConditionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x20
  EventInfoQPPointCounter___c_c *v23; // x8
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__24_0; // x21
  Il2CppObject *v26; // x22
  struct EventInfoQPPointCounter___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_List_TSource__o *v35; // x0
  int size; // w8
  System_Collections_Generic_List_TSource__o *v37; // x21
  unsigned int v38; // w23
  int64_t monitor; // x20
  Il2CppObject *v40; // x8
  int32_t klass; // w22
  Il2CppObject *v42; // x9
  Il2CppObject *Value; // x21
  UserPresentBoxWindow_resData_array *IsMissionAchive; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  int max_length; // w8
  UserPresentBoxWindow_resData_array *v48; // x21
  unsigned int v49; // w23
  UserPresentBoxWindow_resData_o *v50; // x25
  int32_t v51; // w22
  int32_t getSvts; // w22

  if ( (byte_40FA160 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___, v5);
    sub_B16FFC(&Method_System_Func_EventMissionConditionEntity__long___ctor__, v6);
    sub_B16FFC(&System_Func_EventMissionConditionEntity__long__TypeInfo, v7);
    sub_B16FFC(&Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___, v8);
    sub_B16FFC(&JsonManager_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, v13);
    sub_B16FFC(&EventInfoQPPointCounter___c_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_10844/*"QPEVENT_NEXT_DISPLAY_DATA"*/, v15);
    byte_40FA160 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  MasterData_WarQuestSelectionMaster = (EventMissionConditionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                          (DataManager_o *)Instance,
                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( MasterData_WarQuestSelectionMaster )
  {
    EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                      MasterData_WarQuestSelectionMaster,
                                      this->fields.eventId,
                                      85,
                                      0LL);
    v23 = EventInfoQPPointCounter___c_TypeInfo;
    if ( (BYTE3(EventInfoQPPointCounter___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventInfoQPPointCounter___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoQPPointCounter___c_TypeInfo);
      v23 = EventInfoQPPointCounter___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__24_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__24_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B170CC(
                                                                                 System_Func_EventMissionConditionEntity__long__TypeInfo,
                                                                                 v18,
                                                                                 v19,
                                                                                 v20,
                                                                                 v21);
      System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
        _9__24_0,
        v26,
        Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__,
        (const MethodInfo_2B6BEAC *)Method_System_Func_EventMissionConditionEntity__long___ctor__);
      v27 = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      v27->__9__24_0 = (struct System_Func_EventMissionConditionEntity__long__o *)_9__24_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v27->__9__24_0,
        (System_Int32_array **)_9__24_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_UserEventServantPointEntity__long_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType,
                                                                 (System_Func_TSource__TKey__o *)_9__24_0,
                                                                 (const MethodInfo_19BDB00 *)Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    v35 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v34,
            (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    if ( !v35 )
      goto LABEL_50;
    size = v35->fields._size;
    v37 = v35;
    if ( size >= 1 )
    {
      v38 = 0;
      monitor = 0LL;
      while ( 1 )
      {
        if ( size <= v38 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v40 = v37->fields._items->m_Items[v38];
        if ( !v40 )
          break;
        klass = (int32_t)v40[1].klass;
        if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsMissionAchive(klass, 0LL) )
          goto LABEL_29;
        if ( v37->fields._size <= v38 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v42 = v37->fields._items->m_Items[v38];
        if ( !v42 )
          break;
        size = v37->fields._size;
        monitor = (int64_t)v42[3].monitor;
        if ( (int)++v38 >= size )
          goto LABEL_29;
      }
LABEL_50:
      sub_B170D4();
    }
  }
  monitor = 0LL;
LABEL_29:
  Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_10844/*"QPEVENT_NEXT_DISPLAY_DATA"*/, 0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0LL) )
  {
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    IsMissionAchive = JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                        Value,
                        (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    if ( !IsMissionAchive )
      goto LABEL_50;
    max_length = IsMissionAchive->max_length;
    v48 = IsMissionAchive;
    if ( max_length >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        if ( v49 >= max_length )
        {
          sub_B17100(IsMissionAchive, v45, v46);
          sub_B170A0();
        }
        v50 = v48->m_Items[v49];
        if ( !v50 )
          break;
        if ( v50->fields.overflowType == this->fields.eventId )
        {
          v51 = *(&v50->fields.overflowType + 1);
          if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsMissionAchive = (UserPresentBoxWindow_resData_array *)CondType__IsMissionAchive(v51, 0LL);
          if ( ((unsigned __int8)IsMissionAchive & 1) != 0 )
          {
            getSvts = (int32_t)v50->fields.getSvts;
            if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CondType_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
            }
            IsMissionAchive = (UserPresentBoxWindow_resData_array *)CondType__IsQuestClear_25438860(getSvts, -1, 0, 0LL);
            if ( ((unsigned __int8)IsMissionAchive & 1) == 0 )
              monitor = 0LL;
          }
        }
        max_length = v48->max_length;
        if ( (int)++v49 >= max_length )
          return monitor;
      }
      goto LABEL_50;
    }
  }
  return monitor;
}


void __fastcall EventInfoQPPointCounter__SetEventId(
        EventInfoQPPointCounter_o *this,
        Il2CppObject *val,
        const MethodInfo *method)
{
  int32_t v5; // w0
  const MethodInfo *v6; // x1
  EventInfoQPPointCounter_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_40FA15B & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, val);
    byte_40FA15B = 1;
  }
  if ( !val )
    sub_B170D4();
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v5 = *(_DWORD *)j_il2cpp_object_unbox_0(val);
    this->fields.eventId = v5;
    this->fields.totalPoint = UserEventPointMaster__GetEventPoint(v5, 0, 0LL);
    EventInfoQPPointCounter__UpdateDisp(this, v6);
  }
  else
  {
    v7 = (EventInfoQPPointCounter_o *)sub_B173C8(val);
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
  EventInfoQPPointCounter_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  unsigned __int64 v14; // x26
  int v15; // w27
  UISprite_o **m_Items; // x20
  UnityEngine_Object_o *v17; // x23
  const MethodInfo *v18; // x3
  UISprite_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x24
  UISprite_o *v22; // x0
  System_Collections_Generic_IEnumerable_TSource__o *CommaSp; // x0
  __int64 v24; // x20
  struct UISprite_array *v25; // x8
  unsigned __int64 v26; // x28
  UnityEngine_Object_o *v27; // x21
  struct UISprite_array *v28; // x8
  UISprite_o *v29; // x21
  struct UISprite_array *v30; // x8
  __int64 v31; // x0
  __int64 v32; // x8
  UnityEngine_Object_o *TotalCounterParent; // x21
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_Transform_o *transform; // x0
  float Digit10Scale; // s0
  UnityEngine_GameObject_o *v37; // x0
  float v38; // s1
  int v39; // s2
  int32_t Digit; // [xsp+8h] [xbp-68h]
  int64_t DigitNumber; // [xsp+18h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_40FA15D & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, number);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_UISprite___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_21512/*"qp_counter_comma"*/, v8);
    sub_B16FFC(&StringLiteral_21508/*"qp_counter_"*/, v9);
    this = (EventInfoQPPointCounter_o *)sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FA15D = 1;
  }
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = EventInfoQPPointCounter__GetDigit(this, number, (const MethodInfo *)sprites);
    v11 = (EventInfoQPPointCounter_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                         (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)v11 >= 1 )
    {
      v14 = 0LL;
      v15 = 0;
      m_Items = sprites->m_Items;
      while ( v14 < sprites->max_length )
      {
        v17 = (UnityEngine_Object_o *)m_Items[v14];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v11 = (EventInfoQPPointCounter_o *)UnityEngine_Object__op_Equality(v17, 0LL, 0LL);
        if ( ((unsigned __int8)v11 & 1) == 0 )
        {
          if ( v14 >= sprites->max_length )
            break;
          v19 = m_Items[v14];
          if ( (__int64)v14 <= Digit )
          {
            DigitNumber = EventInfoQPPointCounter__GetDigitNumber(v11, number, v15, v18);
            v20 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v21 = System_String__Concat_43743732((System_String_o *)StringLiteral_21508/*"qp_counter_"*/, v20, 0LL);
            if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AtlasManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
            }
            v11 = (EventInfoQPPointCounter_o *)AtlasManager__SetEventUI(v19, v21, 0LL);
            if ( v14 >= sprites->max_length )
              break;
            v22 = m_Items[v14];
            if ( !v22 )
              goto LABEL_63;
            ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))v22->klass->vtable._33_MakePixelPerfect.method)(
              v22,
              v22->klass->vtable._34_get_minWidth.methodPtr);
          }
          else
          {
            if ( !v19 )
              goto LABEL_63;
            UISprite__set_spriteName(m_Items[v14], (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          ++v15;
        }
        ++v14;
        v11 = (EventInfoQPPointCounter_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                             (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v14 >= (int)v11 )
          goto LABEL_23;
      }
LABEL_62:
      sub_B17100(v11, v12, v13);
      sub_B170A0();
    }
LABEL_23:
    CommaSp = (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.CommaSp;
    if ( CommaSp )
    {
      v11 = (EventInfoQPPointCounter_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                           CommaSp,
                                           (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_UISprite___);
      if ( (int)v11 >= 1 )
      {
        v24 = 4LL;
        while ( 1 )
        {
          v25 = v5->fields.CommaSp;
          if ( !v25 )
            break;
          v26 = v24 - 4;
          if ( v24 - 4 >= (unsigned __int64)v25->max_length )
            goto LABEL_62;
          v27 = (UnityEngine_Object_o *)*((_QWORD *)&v25->obj.klass + v24);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v11 = (EventInfoQPPointCounter_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
          if ( ((unsigned __int8)v11 & 1) == 0 )
          {
            v28 = v5->fields.CommaSp;
            if ( !v28 )
              break;
            if ( v26 >= v28->max_length )
              goto LABEL_62;
            v29 = (UISprite_o *)*((_QWORD *)&v28->obj.klass + v24);
            if ( (__int64)v26 >= Digit / 3 )
            {
              if ( !v29 )
                break;
              UISprite__set_spriteName(*((UISprite_o **)&v28->obj.klass + v24), (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            else
            {
              if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !AtlasManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
              }
              v11 = (EventInfoQPPointCounter_o *)AtlasManager__SetEventUI(
                                                   v29,
                                                   (System_String_o *)StringLiteral_21512/*"qp_counter_comma"*/,
                                                   0LL);
              v30 = v5->fields.CommaSp;
              if ( !v30 )
                break;
              if ( v26 >= v30->max_length )
                goto LABEL_62;
              v31 = *((_QWORD *)&v30->obj.klass + v24);
              if ( !v31 )
                break;
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v31 + 840LL))(
                v31,
                *(_QWORD *)(*(_QWORD *)v31 + 848LL));
            }
          }
          v11 = (EventInfoQPPointCounter_o *)System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.CommaSp,
                                               (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_UISprite___);
          v32 = v24 - 3;
          ++v24;
          if ( v32 >= (int)v11 )
            goto LABEL_45;
        }
LABEL_63:
        sub_B170D4();
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
        v37 = v5->fields.TotalCounterParent;
        if ( !v37 )
          goto LABEL_63;
        transform = UnityEngine_GameObject__get_transform(v37, 0LL);
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
        v34 = v5->fields.TotalCounterParent;
        if ( !v34 )
          goto LABEL_63;
        transform = UnityEngine_GameObject__get_transform(v34, 0LL);
        if ( !transform )
          goto LABEL_63;
        Digit10Scale = v5->fields.DigitDefaultScale;
LABEL_60:
        v38 = 1.0;
        v39 = 0;
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
  struct UISprite_o *v9; // x0
  UnityEngine_Object_o *NextCounterSp; // x20
  UISprite_o *v11; // x20
  struct UISprite_o *v12; // x0
  UnityEngine_Object_o *LimitCounterSp; // x20
  UISprite_o *v14; // x20
  struct UISprite_o *v15; // x0
  UnityEngine_Object_o *OverlaySp; // x20
  const MethodInfo *v17; // x1
  UISprite_o *v18; // x20
  System_String_o *OverlaySpName; // x21
  struct UISprite_o *v20; // x0

  if ( (byte_40FA15A & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_21510/*"qp_counter_bg_main"*/, v4);
    sub_B16FFC(&StringLiteral_21511/*"qp_counter_bg_next"*/, v5);
    sub_B16FFC(&StringLiteral_21509/*"qp_counter_bg_limit"*/, v6);
    byte_40FA15A = 1;
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
    AtlasManager__SetEventUI(v8, (System_String_o *)StringLiteral_21510/*"qp_counter_bg_main"*/, 0LL);
    v9 = this->fields.PointCounterSp;
    if ( !v9 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v9->klass->vtable._33_MakePixelPerfect.method)(
      v9,
      v9->klass->vtable._34_get_minWidth.methodPtr);
  }
  NextCounterSp = (UnityEngine_Object_o *)this->fields.NextCounterSp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterSp, 0LL, 0LL) )
  {
    v11 = this->fields.NextCounterSp;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v11, (System_String_o *)StringLiteral_21511/*"qp_counter_bg_next"*/, 0LL);
    v12 = this->fields.NextCounterSp;
    if ( !v12 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v12->klass->vtable._33_MakePixelPerfect.method)(
      v12,
      v12->klass->vtable._34_get_minWidth.methodPtr);
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
    AtlasManager__SetEventUI(v14, (System_String_o *)StringLiteral_21509/*"qp_counter_bg_limit"*/, 0LL);
    v15 = this->fields.LimitCounterSp;
    if ( !v15 )
      goto LABEL_40;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v15->klass->vtable._33_MakePixelPerfect.method)(
      v15,
      v15->klass->vtable._34_get_minWidth.methodPtr);
  }
  OverlaySp = (UnityEngine_Object_o *)this->fields.OverlaySp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(OverlaySp, 0LL, 0LL) )
  {
    v18 = this->fields.OverlaySp;
    OverlaySpName = this->fields.OverlaySpName;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v18, OverlaySpName, 0LL);
    v20 = this->fields.OverlaySp;
    if ( v20 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v20->klass->vtable._33_MakePixelPerfect.method)(
        v20,
        v20->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_39;
    }
LABEL_40:
    sub_B170D4();
  }
LABEL_39:
  EventInfoQPPointCounter__UpdateDisp(this, v17);
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
  UnityEngine_Object_o *LimitCounterLabel; // x22
  UILabel_o *v17; // x22
  System_String_o *v18; // x23
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UnityEngine_Object_o *NextCounterParent; // x22
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *LimitCountParent; // x21
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *v25; // x0
  int64_t v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA15C & 1) == 0 )
  {
    sub_B16FFC(&long_TypeInfo, method);
    sub_B16FFC(&LocalizationManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_5660/*"EVENT_QPPOINT_NEXT_FORMAT"*/, v5);
    sub_B16FFC(&StringLiteral_5659/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, v6);
    byte_40FA15C = 1;
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
    v13 = LocalizationManager__Get((System_String_o *)StringLiteral_5660/*"EVENT_QPPOINT_NEXT_FORMAT"*/, 0LL);
    v26 = NextPoint;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
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
    v17 = this->fields.LimitCounterLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_5659/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, 0LL);
    v26 = v11;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v26);
    v20 = System_String__Format(v18, v19, 0LL);
    if ( !v17 )
      goto LABEL_34;
    UILabel__set_text(v17, v20, 0LL);
  }
  NextCounterParent = (UnityEngine_Object_o *)this->fields.NextCounterParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(NextCounterParent, 0LL, 0LL) )
  {
    v22 = this->fields.NextCounterParent;
    if ( !v22 )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive(v22, NextPoint > 0, 0LL);
  }
  LimitCountParent = (UnityEngine_Object_o *)this->fields.LimitCountParent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(LimitCountParent, 0LL, 0LL) )
  {
    v25 = this->fields.LimitCountParent;
    if ( v25 )
    {
      UnityEngine_GameObject__SetActive(v25, v11 > 0, 0LL);
      goto LABEL_33;
    }
LABEL_34:
    sub_B170D4();
  }
LABEL_33:
  EventInfoQPPointCounter__SetPointNumSprite(this, this->fields.totalPoint, this->fields.TotalPointNumberSp, v24);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F6FD9 & 1) == 0 )
  {
    sub_B16FFC(&EventInfoQPPointCounter___c_TypeInfo, v1);
    byte_40F6FD9 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EventInfoQPPointCounter___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EventInfoQPPointCounter___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return entity->fields.targetNum;
}