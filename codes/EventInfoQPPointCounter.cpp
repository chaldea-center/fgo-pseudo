void __fastcall EventInfoQPPointCounter___ctor(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1

  if ( (byte_4B177D7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22926/*"qp_counter_overlay"*/, method, v2);
    byte_4B177D7 = 1;
  }
  *(_QWORD *)&this->fields.DigitDefaultScale = 0x3F6666663F800000LL;
  v9 = StringLiteral_22926/*"qp_counter_overlay"*/;
  this->fields.OverlaySpName = (struct System_String_o *)StringLiteral_22926/*"qp_counter_overlay"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.OverlaySpName, v9, v2, v3, v4, v5, v6, v7);
  EventInfoUIBase___ctor((EventInfoUIBase_o *)this, 0LL);
}


int32_t __fastcall EventInfoQPPointCounter__GetDigit(
        EventInfoQPPointCounter_o *this,
        int64_t num,
        const MethodInfo *method)
{
  double v4; // d0

  if ( (byte_4B177D3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, num, method);
    byte_4B177D3 = 1;
  }
  if ( !num )
    return 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, num);
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

  if ( (byte_4B177D4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, number, digit);
    byte_4B177D4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, number);
  v6 = System_Math__Pow(10.0, (double)digit, 0LL);
  v7 = 0xFFFFFFFF80000000LL;
  if ( v6 != INFINITY )
    v7 = (int)v6;
  return number / v7 % 10;
}


int64_t __fastcall EventInfoQPPointCounter__GetLimitPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B177D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventPointUpperMaster___, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4, v5);
    byte_4B177D6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventPointUpperMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v7);
  }
  return EventPointUpperMaster__getPointUpper((EventPointUpperMaster_o *)Instance, this->fields.eventId, 0, 0LL);
}


int64_t __fastcall EventInfoQPPointCounter__GetNextPoint(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  void *Instance; // x0
  __int64 v29; // x1
  Il2CppObject *MasterData_object; // x0
  System_Collections_Generic_List_EventMissionConditionEntity__o *EntityFromTargetIdAndCondType; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  EventInfoQPPointCounter___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  System_Func_T__TResult__o *_9__24_0; // x21
  Il2CppObject *v38; // x22
  struct EventInfoQPPointCounter___c_StaticFields *static_fields; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_object__o *v47; // x21
  int32_t v48; // w22
  int64_t v49; // x20
  int32_t v50; // w23
  Il2CppObject *Value; // x21
  __int64 v52; // x1
  int v53; // w8
  void *v54; // x21
  unsigned int v55; // w23
  _DWORD *v56; // x25
  int32_t v57; // w22
  int32_t v58; // w22

  if ( (byte_4B177D5 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMissionConditionMaster___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_EventMissionConditionEntity__long__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___, v12, v13);
    sub_1BCA7E0(&JsonManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Count__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, v22, v23);
    sub_1BCA7E0(&EventInfoQPPointCounter___c_TypeInfo, v24, v25);
    sub_1BCA7E0(&StringLiteral_10952/*"QPEVENT_NEXT_DISPLAY_DATA"*/, v26, v27);
    byte_4B177D5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_40;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMissionConditionMaster___);
  if ( MasterData_object )
  {
    EntityFromTargetIdAndCondType = EventMissionConditionMaster__GetEntityFromTargetIdAndCondType(
                                      (EventMissionConditionMaster_o *)MasterData_object,
                                      this->fields.eventId,
                                      85,
                                      0LL);
    v35 = EventInfoQPPointCounter___c_TypeInfo;
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityFromTargetIdAndCondType;
    if ( !EventInfoQPPointCounter___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventInfoQPPointCounter___c_TypeInfo, v32);
      v35 = EventInfoQPPointCounter___c_TypeInfo;
    }
    _9__24_0 = (System_Func_T__TResult__o *)v35->static_fields->__9__24_0;
    if ( !_9__24_0 )
    {
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35, v32);
        v35 = EventInfoQPPointCounter___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v35->static_fields->__9;
      _9__24_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                                System_Func_EventMissionConditionEntity__long__TypeInfo,
                                                v32,
                                                v33,
                                                v34);
      System_Func_object__long____ctor(_9__24_0, v38, Method_EventInfoQPPointCounter___c__GetNextPoint_b__24_0__, 0LL);
      static_fields = EventInfoQPPointCounter___c_TypeInfo->static_fields;
      static_fields->__9__24_0 = (struct System_Func_EventMissionConditionEntity__long__o *)_9__24_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__24_0,
        (int64_t)_9__24_0,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__long_(
                                                                 v36,
                                                                 (System_Func_TSource__TKey__o *)_9__24_0,
                                                                 (const MethodInfo_2F3B930 *)Method_System_Linq_Enumerable_OrderByDescending_EventMissionConditionEntity__long___);
    Instance = System_Linq_Enumerable__ToList_object_(
                 v46,
                 (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_EventMissionConditionEntity___);
    if ( !Instance )
      goto LABEL_40;
    v47 = (System_Collections_Generic_List_object__o *)Instance;
    if ( *((int *)Instance + 6) >= 1 )
    {
      v48 = 0;
      v49 = 0LL;
      while ( 1 )
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     v47,
                     v48,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
        if ( !Instance )
          break;
        v50 = *((_DWORD *)Instance + 4);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v29);
        if ( !CondType__IsMissionAchive(v50, 0LL) )
        {
          Instance = System_Collections_Generic_List_object___get_Item(
                       v47,
                       v48,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventMissionConditionEntity__get_Item__);
          if ( !Instance )
            break;
          v49 = *((_QWORD *)Instance + 7);
          if ( ++v48 < v47->fields._size )
            continue;
        }
        goto LABEL_22;
      }
LABEL_40:
      sub_1BCAA3C(Instance, v29);
    }
  }
  v49 = 0LL;
LABEL_22:
  Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_10952/*"QPEVENT_NEXT_DISPLAY_DATA"*/, 0LL);
  if ( !System_String__IsNullOrEmpty((System_String_o *)Value, 0LL) )
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v52);
    Instance = JsonManager__DeserializeArray_object_(
                 Value,
                 (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_EventInfoQPPointCounter_NextDisplayData___);
    if ( !Instance )
      goto LABEL_40;
    v53 = *((_DWORD *)Instance + 6);
    v54 = Instance;
    if ( v53 >= 1 )
    {
      v55 = 0;
      while ( 1 )
      {
        if ( v55 >= v53 )
          sub_1BCAA44(Instance, v29);
        v56 = (_DWORD *)*((_QWORD *)v54 + (int)v55 + 4);
        if ( !v56 )
          break;
        if ( v56[4] == this->fields.eventId )
        {
          v57 = v56[5];
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v29);
          Instance = (void *)CondType__IsMissionAchive(v57, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            v58 = v56[6];
            if ( !CondType_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v29);
            Instance = (void *)CondType__IsQuestClear_38310172(v58, -1, 0, 0LL);
            if ( ((unsigned __int8)Instance & 1) == 0 )
              v49 = 0LL;
          }
        }
        v53 = *((_DWORD *)v54 + 6);
        if ( (int)++v55 >= v53 )
          return v49;
      }
      goto LABEL_40;
    }
  }
  return v49;
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
  if ( (byte_4B177D0 & 1) == 0 )
  {
    this = (EventInfoQPPointCounter_o *)sub_1BCA7E0(&int_TypeInfo, val, method);
    byte_4B177D0 = 1;
  }
  if ( !val )
    sub_1BCAA3C(this, val);
  if ( val->klass->_1.element_class == int_TypeInfo->_1.element_class )
  {
    v6 = *(_DWORD *)j_il2cpp_object_unbox_0(val, int_TypeInfo, method, v3);
    v5->fields.eventId = v6;
    v5->fields.totalPoint = UserEventPointMaster__GetEventPoint(v6, 0, 0LL);
    EventInfoQPPointCounter__UpdateDisp(v5, v7);
  }
  else
  {
    sub_1BCACFC(val);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v18; // x1
  unsigned __int64 v19; // x27
  int v20; // w28
  UISprite_o **m_Items; // x20
  UnityEngine_Object_o *v22; // x23
  const MethodInfo *v23; // x3
  UISprite_o *v24; // x23
  System_String_o *v25; // x0
  __int64 v26; // x1
  System_String_o *v27; // x24
  System_Collections_Generic_IEnumerable_TSource__o *CommaSp; // x0
  __int64 v29; // x20
  struct UISprite_array *v30; // x8
  unsigned __int64 v31; // x28
  UnityEngine_Object_o *v32; // x21
  struct UISprite_array *v33; // x8
  UISprite_o *v34; // x21
  struct UISprite_array *v35; // x8
  __int64 v36; // x8
  UnityEngine_Object_o *TotalCounterParent; // x21
  bool v38; // w0
  float Digit10Scale; // s0
  float v40; // s1
  int v41; // s2
  int32_t Digit; // [xsp+0h] [xbp-70h]
  int64_t DigitNumber; // [xsp+8h] [xbp-68h] BYREF

  v6 = this;
  if ( (byte_4B177D2 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, number, sprites);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_UISprite___, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22925/*"qp_counter_comma"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_22921/*"qp_counter_"*/, v13, v14);
    this = (EventInfoQPPointCounter_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B177D2 = 1;
  }
  DigitNumber = 0LL;
  if ( sprites )
  {
    Digit = EventInfoQPPointCounter__GetDigit(this, number, (const MethodInfo *)sprites);
    transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                             (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_UISprite___);
    if ( (int)transform >= 1 )
    {
      v19 = 0LL;
      v20 = 0;
      m_Items = sprites->m_Items;
      while ( v19 < sprites->max_length )
      {
        v22 = (UnityEngine_Object_o *)m_Items[v19];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          if ( v19 >= sprites->max_length )
            break;
          v24 = m_Items[v19];
          if ( (__int64)v19 <= Digit )
          {
            DigitNumber = EventInfoQPPointCounter__GetDigitNumber(
                            (EventInfoQPPointCounter_o *)transform,
                            number,
                            v20,
                            v23);
            v25 = System_Int64__ToString((int64_t)&DigitNumber, 0LL);
            v27 = System_String__Concat_62401220((System_String_o *)StringLiteral_22921/*"qp_counter_"*/, v25, 0LL);
            if ( !AtlasManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v26);
            transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(v24, v27, 0LL);
            if ( v19 >= sprites->max_length )
              break;
            transform = (UnityEngine_Transform_o *)m_Items[v19];
            if ( !transform )
              goto LABEL_55;
            ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
              transform,
              transform->klass[2]._1.declaringType);
          }
          else
          {
            if ( !v24 )
              goto LABEL_55;
            UISprite__set_spriteName(m_Items[v19], (System_String_o *)StringLiteral_1/*""*/, 0LL);
          }
          ++v20;
        }
        ++v19;
        transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                                 (System_Collections_Generic_IEnumerable_TSource__o *)sprites,
                                                 (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_UISprite___);
        if ( (__int64)v19 >= (int)transform )
          goto LABEL_21;
      }
LABEL_54:
      sub_1BCAA44(transform, v18);
    }
LABEL_21:
    CommaSp = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.CommaSp;
    if ( CommaSp )
    {
      transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                               CommaSp,
                                               (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_UISprite___);
      if ( (int)transform >= 1 )
      {
        v29 = 4LL;
        while ( 1 )
        {
          v30 = v6->fields.CommaSp;
          if ( !v30 )
            break;
          v31 = v29 - 4;
          if ( v29 - 4 >= (unsigned __int64)v30->max_length )
            goto LABEL_54;
          v32 = (UnityEngine_Object_o *)*((_QWORD *)&v30->obj.klass + v29);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
          transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
          if ( ((unsigned __int8)transform & 1) == 0 )
          {
            v33 = v6->fields.CommaSp;
            if ( !v33 )
              break;
            if ( v31 >= v33->max_length )
              goto LABEL_54;
            v34 = (UISprite_o *)*((_QWORD *)&v33->obj.klass + v29);
            if ( (__int64)v31 >= Digit / 3 )
            {
              if ( !v34 )
                break;
              UISprite__set_spriteName(*((UISprite_o **)&v33->obj.klass + v29), (System_String_o *)StringLiteral_1/*""*/, 0LL);
            }
            else
            {
              if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
              transform = (UnityEngine_Transform_o *)AtlasManager__SetEventUI(
                                                       v34,
                                                       (System_String_o *)StringLiteral_22925/*"qp_counter_comma"*/,
                                                       0LL);
              v35 = v6->fields.CommaSp;
              if ( !v35 )
                break;
              if ( v31 >= v35->max_length )
                goto LABEL_54;
              transform = (UnityEngine_Transform_o *)*((_QWORD *)&v35->obj.klass + v29);
              if ( !transform )
                break;
              ((void (__fastcall *)(UnityEngine_Transform_o *, Il2CppClass *))transform->klass[2]._1.castClass)(
                transform,
                transform->klass[2]._1.declaringType);
            }
          }
          transform = (UnityEngine_Transform_o *)System_Linq_Enumerable__Count_object_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.CommaSp,
                                                   (const MethodInfo_2F2DF88 *)Method_System_Linq_Enumerable_Count_UISprite___);
          v36 = v29 - 3;
          ++v29;
          if ( v36 >= (int)transform )
            goto LABEL_41;
        }
LABEL_55:
        sub_1BCAA3C(transform, v18);
      }
    }
LABEL_41:
    TotalCounterParent = (UnityEngine_Object_o *)v6->fields.TotalCounterParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v38 = UnityEngine_Object__op_Inequality(TotalCounterParent, 0LL, 0LL);
    if ( Digit + 1 >= 10 )
    {
      if ( !v38 )
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
      if ( !v38 )
        return;
      transform = (UnityEngine_Transform_o *)v6->fields.TotalCounterParent;
      if ( !transform )
        goto LABEL_55;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_55;
      Digit10Scale = v6->fields.DigitDefaultScale;
    }
    v40 = 1.0;
    v41 = 0;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *PointCounterSp; // x20
  __int64 v13; // x1
  UISprite_o *v14; // x20
  __int64 v15; // x1
  struct UISprite_o *v16; // x0
  UnityEngine_Object_o *NextCounterSp; // x20
  __int64 v18; // x1
  UISprite_o *v19; // x20
  UnityEngine_Object_o *LimitCounterSp; // x20
  __int64 v21; // x1
  UISprite_o *v22; // x20
  UnityEngine_Object_o *OverlaySp; // x20
  const MethodInfo *v24; // x1
  UISprite_o *v25; // x20
  System_String_o *OverlaySpName; // x21

  if ( (byte_4B177CF & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_22923/*"qp_counter_bg_main"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_22924/*"qp_counter_bg_next"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_22922/*"qp_counter_bg_limit"*/, v10, v11);
    byte_4B177CF = 1;
  }
  PointCounterSp = (UnityEngine_Object_o *)this->fields.PointCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(PointCounterSp, 0LL, 0LL) )
  {
    v14 = this->fields.PointCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13);
    AtlasManager__SetEventUI(v14, (System_String_o *)StringLiteral_22923/*"qp_counter_bg_main"*/, 0LL);
    v16 = this->fields.PointCounterSp;
    if ( !v16 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
      v16,
      v16->klass->vtable._34_get_minWidth.methodPtr);
  }
  NextCounterSp = (UnityEngine_Object_o *)this->fields.NextCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Inequality(NextCounterSp, 0LL, 0LL) )
  {
    v19 = this->fields.NextCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v18);
    AtlasManager__SetEventUI(v19, (System_String_o *)StringLiteral_22924/*"qp_counter_bg_next"*/, 0LL);
    v16 = this->fields.NextCounterSp;
    if ( !v16 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
      v16,
      v16->klass->vtable._34_get_minWidth.methodPtr);
  }
  LimitCounterSp = (UnityEngine_Object_o *)this->fields.LimitCounterSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(LimitCounterSp, 0LL, 0LL) )
  {
    v22 = this->fields.LimitCounterSp;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v21);
    AtlasManager__SetEventUI(v22, (System_String_o *)StringLiteral_22922/*"qp_counter_bg_limit"*/, 0LL);
    v16 = this->fields.LimitCounterSp;
    if ( !v16 )
      goto LABEL_32;
    ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
      v16,
      v16->klass->vtable._34_get_minWidth.methodPtr);
  }
  OverlaySp = (UnityEngine_Object_o *)this->fields.OverlaySp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
  if ( UnityEngine_Object__op_Inequality(OverlaySp, 0LL, 0LL) )
  {
    v25 = this->fields.OverlaySp;
    OverlaySpName = this->fields.OverlaySpName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v24);
    AtlasManager__SetEventUI(v25, OverlaySpName, 0LL);
    v16 = this->fields.OverlaySp;
    if ( v16 )
    {
      ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))v16->klass->vtable._33_MakePixelPerfect.method)(
        v16,
        v16->klass->vtable._34_get_minWidth.methodPtr);
      goto LABEL_31;
    }
LABEL_32:
    sub_1BCAA3C(v16, v15);
  }
LABEL_31:
  EventInfoQPPointCounter__UpdateDisp(this, v24);
}


void __fastcall EventInfoQPPointCounter__UpdateDisp(EventInfoQPPointCounter_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int64_t NextPoint; // x21
  const MethodInfo *v13; // x1
  int64_t LimitPoint; // x0
  __int64 v15; // x1
  UnityEngine_Object_o *NextCounterLabel; // x22
  __int64 v17; // x20
  __int64 v18; // x1
  UILabel_o *v19; // x22
  System_String_o *v20; // x23
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  __int64 v23; // x1
  UnityEngine_Object_o *LimitCounterLabel; // x22
  __int64 v25; // x1
  UILabel_o *v26; // x22
  System_String_o *v27; // x23
  Il2CppObject *v28; // x0
  UnityEngine_Object_o *NextCounterParent; // x22
  UnityEngine_Object_o *LimitCountParent; // x21
  const MethodInfo *v31; // x3
  int64_t v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B177D1 & 1) == 0 )
  {
    sub_1BCA7E0(&long_TypeInfo, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_5753/*"EVENT_QPPOINT_NEXT_FORMAT"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_5752/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, v10, v11);
    byte_4B177D1 = 1;
  }
  NextPoint = EventInfoQPPointCounter__GetNextPoint(this, method);
  LimitPoint = EventInfoQPPointCounter__GetLimitPoint(this, v13);
  NextCounterLabel = (UnityEngine_Object_o *)this->fields.NextCounterLabel;
  v17 = LimitPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(NextCounterLabel, 0LL, 0LL) )
  {
    v19 = this->fields.NextCounterLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v18);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5753/*"EVENT_QPPOINT_NEXT_FORMAT"*/, 0LL);
    v32 = NextPoint;
    v21 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
    v22 = System_String__Format(v20, v21, 0LL);
    if ( !v19 )
      goto LABEL_28;
    UILabel__set_text(v19, v22, 0LL);
  }
  LimitCounterLabel = (UnityEngine_Object_o *)this->fields.LimitCounterLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality(LimitCounterLabel, 0LL, 0LL) )
  {
    v26 = this->fields.LimitCounterLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    v27 = LocalizationManager__Get((System_String_o *)StringLiteral_5752/*"EVENT_QPPOINT_LIMIT_FORMAT"*/, 0LL);
    v32 = v17;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v32);
    v22 = System_String__Format(v27, v28, 0LL);
    if ( !v26 )
      goto LABEL_28;
    UILabel__set_text(v26, v22, 0LL);
  }
  NextCounterParent = (UnityEngine_Object_o *)this->fields.NextCounterParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  if ( UnityEngine_Object__op_Inequality(NextCounterParent, 0LL, 0LL) )
  {
    v22 = (System_String_o *)this->fields.NextCounterParent;
    if ( !v22 )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, NextPoint > 0, 0LL);
  }
  LimitCountParent = (UnityEngine_Object_o *)this->fields.LimitCountParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
  if ( UnityEngine_Object__op_Inequality(LimitCountParent, 0LL, 0LL) )
  {
    v22 = (System_String_o *)this->fields.LimitCountParent;
    if ( v22 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v22, v17 > 0, 0LL);
      goto LABEL_27;
    }
LABEL_28:
    sub_1BCAA3C(v22, v23);
  }
LABEL_27:
  EventInfoQPPointCounter__SetPointNumSprite(this, this->fields.totalPoint, this->fields.TotalPointNumberSp, v31);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B177D8 & 1) == 0 )
  {
    sub_1BCA7E0(&EventInfoQPPointCounter___c_TypeInfo, v1, v2);
    byte_4B177D8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventInfoQPPointCounter___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventInfoQPPointCounter___c_TypeInfo->static_fields->__9 = (struct EventInfoQPPointCounter___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventInfoQPPointCounter___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return entity->fields.targetNum;
}