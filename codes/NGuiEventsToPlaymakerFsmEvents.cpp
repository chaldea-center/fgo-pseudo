void NGuiEventsToPlaymakerFsmEvents___ctor(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        int32_t fsmEventDelegate,
        const MethodInfo *method)
{
  System_Enum_o *v6; // x0
  const MethodInfo *v7; // x1
  NGuiEventsToPlaymakerFsmEvents_o *FsmEventEnumValue; // x0
  const MethodInfo *v9; // x3
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59363EE & 1) == 0 )
  {
    sub_21FFC50(&NGuiPlayMakerDelegates_TypeInfo);
    byte_59363EE = 1;
  }
  v11 = fsmEventDelegate;
  v6 = (System_Enum_o *)j_il2cpp_value_box_0(NGuiPlayMakerDelegates_TypeInfo, &v11);
  FsmEventEnumValue = (NGuiEventsToPlaymakerFsmEvents_o *)NGuiPlayMakerProxy__GetFsmEventEnumValue(v6, v7);
  return NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_45327240(
           FsmEventEnumValue,
           fsm,
           (System_String_o *)FsmEventEnumValue,
           v9);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_45327240(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        System_String_o *fsmEvent,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  NGuiEventsToPlaymakerFsmEvents_o *v7; // x21
  __int64 v8; // x22
  unsigned __int64 m_CancellationTokenSource_low; // x8
  NGuiEventsToPlaymakerFsmEvents_o *v10; // x20
  unsigned __int64 v11; // x21
  __int64 v12; // x8
  __int64 v13; // x22
  int v14; // w8
  __int64 v15; // x23

  if ( !fsm )
    goto LABEL_26;
  this = (NGuiEventsToPlaymakerFsmEvents_o *)PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0);
  if ( !this )
    goto LABEL_26;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    do
    {
      if ( (unsigned int)v8 >= m_CancellationTokenSource )
        goto LABEL_27;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)*((_QWORD *)&v7->fields.debug + v8);
      if ( !this )
        goto LABEL_26;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)HutongGames_PlayMaker_FsmTransition__get_EventName(
                                                   (HutongGames_PlayMaker_FsmTransition_o *)this,
                                                   0);
      if ( !this )
        goto LABEL_26;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)System_String__Equals_75473208((System_String_o *)this, fsmEvent, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
    }
    while ( (int)++v8 < m_CancellationTokenSource );
  }
  this = (NGuiEventsToPlaymakerFsmEvents_o *)PlayMakerFSM__get_FsmStates(fsm, 0);
  if ( !this )
LABEL_26:
    sub_21FFECC(this, fsm);
  m_CancellationTokenSource_low = LODWORD(this->fields.m_CancellationTokenSource);
  v10 = this;
  if ( (int)m_CancellationTokenSource_low >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= m_CancellationTokenSource_low )
        goto LABEL_27;
      v12 = *((_QWORD *)&v10->fields.debug + v11);
      if ( !v12 )
        goto LABEL_26;
      v13 = *(_QWORD *)(v12 + 104);
      if ( !v13 )
        goto LABEL_26;
      v14 = *(_DWORD *)(v13 + 24);
      if ( v14 >= 1 )
        break;
LABEL_23:
      m_CancellationTokenSource_low = LODWORD(v10->fields.m_CancellationTokenSource);
      if ( (int)++v11 >= (int)m_CancellationTokenSource_low )
        return 0;
    }
    v15 = 0;
    while ( (unsigned int)v15 < v14 )
    {
      this = *(NGuiEventsToPlaymakerFsmEvents_o **)(v13 + 32 + 8 * v15);
      if ( !this )
        goto LABEL_26;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)HutongGames_PlayMaker_FsmTransition__get_EventName(
                                                   (HutongGames_PlayMaker_FsmTransition_o *)this,
                                                   0);
      if ( !this )
        goto LABEL_26;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)System_String__Equals_75473208((System_String_o *)this, fsmEvent, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      v14 = *(_DWORD *)(v13 + 24);
      if ( (int)++v15 >= v14 )
        goto LABEL_23;
    }
LABEL_27:
    sub_21FFED4(this);
  }
  return 0;
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        int32_t fsmEventDelegate,
        const MethodInfo *method)
{
  System_Enum_o *v7; // x0
  const MethodInfo *v8; // x1
  System_String_o *FsmEventEnumValue; // x0
  const MethodInfo *v10; // x3
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_59363ED & 1) == 0 )
  {
    sub_21FFC50(&NGuiPlayMakerDelegates_TypeInfo);
    byte_59363ED = 1;
  }
  v12 = fsmEventDelegate;
  v7 = (System_Enum_o *)j_il2cpp_value_box_0(NGuiPlayMakerDelegates_TypeInfo, &v12);
  FsmEventEnumValue = NGuiPlayMakerProxy__GetFsmEventEnumValue(v7, v8);
  return NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation_45327076(this, fsm, FsmEventEnumValue, v10);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation_45327076(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        System_String_o *fsmEvent,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_FsmEvent_array *DoesTargetImplementsEvent_45327240; // x0
  __int64 v7; // x1
  int max_length; // w8
  HutongGames_PlayMaker_FsmEvent_array *v9; // x20
  __int64 v10; // x21
  HutongGames_PlayMaker_FsmEvent_o *v11; // x8

  DoesTargetImplementsEvent_45327240 = (HutongGames_PlayMaker_FsmEvent_array *)NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_45327240(
                                                                                 this,
                                                                                 fsm,
                                                                                 fsmEvent,
                                                                                 method);
  if ( ((unsigned __int8)DoesTargetImplementsEvent_45327240 & 1) == 0 )
  {
    if ( !fsm )
      goto LABEL_14;
    DoesTargetImplementsEvent_45327240 = PlayMakerFSM__get_FsmEvents(fsm, 0);
    if ( !DoesTargetImplementsEvent_45327240 )
      goto LABEL_14;
    max_length = DoesTargetImplementsEvent_45327240->max_length;
    v9 = DoesTargetImplementsEvent_45327240;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= max_length )
          sub_21FFED4(DoesTargetImplementsEvent_45327240);
        v11 = v9->m_Items[v10];
        if ( !v11 )
          break;
        DoesTargetImplementsEvent_45327240 = (HutongGames_PlayMaker_FsmEvent_array *)v11->fields.name;
        if ( !DoesTargetImplementsEvent_45327240 )
          break;
        DoesTargetImplementsEvent_45327240 = (HutongGames_PlayMaker_FsmEvent_array *)System_String__Equals_75473208(
                                                                                       (System_String_o *)DoesTargetImplementsEvent_45327240,
                                                                                       fsmEvent,
                                                                                       0);
        if ( ((unsigned __int8)DoesTargetImplementsEvent_45327240 & 1) == 0 )
        {
          max_length = v9->max_length;
          if ( (int)++v10 < max_length )
            continue;
        }
        return (unsigned __int8)DoesTargetImplementsEvent_45327240 & 1;
      }
LABEL_14:
      sub_21FFECC(DoesTargetImplementsEvent_45327240, v7);
    }
  }
  LOBYTE(DoesTargetImplementsEvent_45327240) = 0;
  return (unsigned __int8)DoesTargetImplementsEvent_45327240 & 1;
}


// local variable allocation has failed, the output may be wrong!
void NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        int32_t event,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *customEventsKeys; // x0
  bool v6; // w0
  PlayMakerFSM_o *targetFSM; // x20
  struct System_Collections_Generic_List_string__o *customEventsValues; // x21
  System_Enum_o *v9; // x0
  const MethodInfo *v10; // x1
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_59363EF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__IndexOf__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&NGuiPlayMakerDelegates_TypeInfo);
    byte_59363EF = 1;
  }
  customEventsKeys = (System_Collections_Generic_List_T__o *)this->fields.customEventsKeys;
  if ( !customEventsKeys )
    goto LABEL_11;
  v6 = System_Collections_Generic_List_Int32Enum___Contains(
         customEventsKeys,
         event,
         (const MethodInfo_4435CD0 *)Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__Contains__);
  targetFSM = this->fields.targetFSM;
  if ( v6 )
  {
    customEventsKeys = (System_Collections_Generic_List_T__o *)this->fields.customEventsKeys;
    if ( customEventsKeys )
    {
      customEventsValues = this->fields.customEventsValues;
      customEventsKeys = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___IndexOf(
                                                                   customEventsKeys,
                                                                   event,
                                                                   (const MethodInfo_44365AC *)Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__IndexOf__);
      if ( customEventsValues )
      {
        customEventsKeys = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)customEventsValues,
                                                                     (int32_t)customEventsKeys,
                                                                     (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( targetFSM )
        {
          PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)customEventsKeys, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_21FFECC(customEventsKeys, *(_QWORD *)&event);
  }
  v11 = event;
  v9 = (System_Enum_o *)j_il2cpp_value_box_0(NGuiPlayMakerDelegates_TypeInfo, &v11);
  customEventsKeys = (System_Collections_Generic_List_T__o *)NGuiPlayMakerProxy__GetFsmEventEnumValue(v9, v10);
  if ( !targetFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)customEventsKeys, 0);
}


void NGuiEventsToPlaymakerFsmEvents__OnChange(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *targetFSM; // x20
  void *value; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *usage; // x8
  UnityEngine_Object_c *v10; // x0
  UnityEngine_Object_o *input; // x20
  __int64 v12; // x2
  __int64 v13; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Object_o *toggle; // x20
  const MethodInfo *v21; // x2
  __int64 v22; // x20

  if ( (byte_59363FA & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59363FA = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
    value = (void *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)value & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( !usage )
        goto LABEL_27;
      if ( LODWORD(usage->max_length) <= 0xE )
        sub_21FFED4(value);
      v10 = UnityEngine_Object_TypeInfo;
      input = (UnityEngine_Object_o *)this->fields._input;
      ++usage->m_Items[14];
      if ( !*(&v10->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v10, v7, v8);
      if ( UnityEngine_Object__op_Inequality(input, 0, 0) )
      {
        value = HutongGames_PlayMaker_Fsm_TypeInfo;
        if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v7, v12);
          value = HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        if ( !this->fields._input )
          goto LABEL_27;
        v13 = **((_QWORD **)value + 23);
        value = UIInput__get_value(this->fields._input, 0);
        if ( !v13 )
          goto LABEL_27;
        *(_QWORD *)(v13 + 80) = value;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v13 + 80), (int32_t)value, v14, v15, v16, v17, v18, v19);
      }
      toggle = (UnityEngine_Object_o *)this->fields._toggle;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v12);
      if ( !UnityEngine_Object__op_Inequality(toggle, 0, 0) )
        goto LABEL_26;
      value = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v7, v21);
        value = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      if ( this->fields._toggle )
      {
        v22 = **((_QWORD **)value + 23);
        value = (void *)UIToggle__get_value(this->fields._toggle, 0);
        if ( v22 )
        {
          *(_BYTE *)(v22 + 48) = (unsigned __int8)value & 1;
LABEL_26:
          NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 14, v21);
          return;
        }
      }
LABEL_27:
      sub_21FFECC(value, v7);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnClick(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *targetFSM; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Int32_array *usage; // x8
  UICamera_c *v15; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v17; // x2

  if ( (byte_59363F0 & 1) == 0 )
  {
    sub_21FFC50(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363F0 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
    v6 = UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( !v6 )
    {
      usage = this->fields._usage;
      if ( !usage )
        sub_21FFECC(v6, v7);
      if ( !LODWORD(usage->max_length) )
        sub_21FFED4(v6);
      v15 = UICamera_TypeInfo;
      ++usage->m_Items[0];
      if ( !*(&v15->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v15, v7, v8);
        v15 = UICamera_TypeInfo;
      }
      currentTouch = v15->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 0, v17);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnDrag(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *targetFSM; // x20
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  HutongGames_PlayMaker_Fsm_c *v16; // x0
  float *EventData; // x8
  UICamera_c *v18; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v20; // x2

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_59363F4 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363F4 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v16 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v9, v10);
        v16 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = (float *)v16->static_fields->EventData;
      if ( !EventData )
        sub_21FFECC(v16, v9);
      EventData[17] = x;
      EventData[18] = y;
      EventData[19] = 0.0;
      v18 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9, v10);
        v18 = UICamera_TypeInfo;
      }
      currentTouch = v18->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 8, v20);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnDrop(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *targetFSM; // x21
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  HutongGames_PlayMaker_Fsm_c *v15; // x0
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x0
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UICamera_c *v24; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v26; // x2

  if ( (byte_59363F5 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363F5 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v15 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v8, v9);
        v15 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v15->static_fields->EventData;
      if ( !EventData )
        sub_21FFECC(0, v8);
      EventData->fields.GameObjectData = go;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&EventData->fields.GameObjectData,
        (int32_t)go,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      v24 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v17, v18);
        v24 = UICamera_TypeInfo;
      }
      currentTouch = v24->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 9, v26);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnEnable(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Int32_array *usage; // x8
  Il2CppType *v5; // x21
  System_RuntimeTypeHandle_o v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Type_o *TypeFromHandle; // x21
  System_Collections_Generic_List_object__o *Names; // x0
  __int64 v11; // x1
  struct System_Int32_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  UnityEngine_Object_o *targetFSM; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  UnityEngine_Object_o *v29; // x20
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  __int64 v40; // x2
  UnityEngine_Object_o *input; // x20
  EventDelegate_o *v42; // x20
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct UIInput_o *v49; // x8
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x8
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  __int64 v62; // x1
  __int64 v63; // x2
  UnityEngine_Object_o *pBar; // x20
  EventDelegate_o *v65; // x20
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct UIProgressBar_o *v72; // x8
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x8
  Il2CppObject *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  __int64 v84; // x1
  __int64 v85; // x2
  UnityEngine_Object_o *v86; // x20
  EventDelegate_o *v87; // x20
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  struct UIInput_o *v94; // x8
  struct System_Object_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  Il2CppClass **v98; // x8
  Il2CppObject *v99; // x0
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  __int64 v106; // x1
  __int64 v107; // x2
  UnityEngine_Object_o *toggle; // x20
  EventDelegate_o *v109; // x20
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  struct UIToggle_o *v116; // x8
  System_Collections_Generic_List_object__o *onChange; // x8
  struct System_Object_array *v118; // x9
  _QWORD *v119; // x10
  __int64 v120; // x11
  Il2CppClass **v121; // x0

  if ( (byte_59363EC & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_21FFC50(&NGuiPlayMakerDelegates_var);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10358/*"OnSubmitChange"*/);
    sub_21FFC50(&StringLiteral_10353/*"OnSliderChange"*/);
    sub_21FFC50(&StringLiteral_10221/*"OnChange"*/);
    byte_59363EC = 1;
  }
  usage = this->fields._usage;
  if ( !usage || !usage->max_length )
  {
    v5 = NGuiPlayMakerDelegates_var;
    if ( !*(_DWORD *)(qword_594C108 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C108, method, v2);
    v6.fields.value = (intptr_t)v5;
    TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
    if ( !*(_DWORD *)(qword_594C0C0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C0C0, v7, v8);
    Names = (System_Collections_Generic_List_object__o *)System_Enum__GetNames(TypeFromHandle, 0);
    if ( !Names )
      goto LABEL_63;
    v12 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, (unsigned int)Names->fields._size);
    this->fields._usage = v12;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._usage, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.targetFSM = (struct PlayMakerFSM_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetFSM,
      (int32_t)Component_object,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Equality(v29, 0, 0) )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  if ( NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 10, v30) )
  {
    v32 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    this->fields._input = (struct UIInput_o *)v32;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._input, (int32_t)v32, v33, v34, v35, v36, v37, v38);
    input = (UnityEngine_Object_o *)this->fields._input;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39, v40);
    if ( UnityEngine_Object__op_Inequality(input, 0, 0) )
    {
      v42 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
      EventDelegate___ctor(v42, 0);
      if ( !v42 )
        goto LABEL_63;
      EventDelegate__set_target(v42, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v42, (System_String_o *)StringLiteral_10358/*"OnSubmitChange"*/, 0);
      v49 = this->fields._input;
      if ( !v49 )
        goto LABEL_63;
      Names = (System_Collections_Generic_List_object__o *)v49->fields.onSubmit;
      if ( !Names )
        goto LABEL_63;
      items = Names->fields._items;
      v51 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++Names->fields._version;
      if ( !items )
        goto LABEL_63;
      size = Names->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Names,
          (Il2CppObject *)v42,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + size;
        Names->fields._size = size + 1;
        v53[4] = (Il2CppClass *)v42;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v42, v43, v44, v45, v46, v47, v48);
      }
    }
  }
  if ( NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 11, v31) )
  {
    v55 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    this->fields._pBar = (struct UIProgressBar_o *)v55;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._pBar, (int32_t)v55, v56, v57, v58, v59, v60, v61);
    pBar = (UnityEngine_Object_o *)this->fields._pBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62, v63);
    if ( UnityEngine_Object__op_Inequality(pBar, 0, 0) )
    {
      v65 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
      EventDelegate___ctor(v65, 0);
      if ( !v65 )
        goto LABEL_63;
      EventDelegate__set_target(v65, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v65, (System_String_o *)StringLiteral_10353/*"OnSliderChange"*/, 0);
      v72 = this->fields._pBar;
      if ( !v72 )
        goto LABEL_63;
      Names = (System_Collections_Generic_List_object__o *)v72->fields.onChange;
      if ( !Names )
        goto LABEL_63;
      v73 = Names->fields._items;
      v74 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++Names->fields._version;
      if ( !v73 )
        goto LABEL_63;
      v75 = Names->fields._size;
      if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Names,
          (Il2CppObject *)v65,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
      }
      else
      {
        v76 = &v73->obj.klass + v75;
        Names->fields._size = v75 + 1;
        v76[4] = (Il2CppClass *)v65;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v76 + 4), (int32_t)v65, v66, v67, v68, v69, v70, v71);
      }
    }
  }
  if ( !NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 14, v54) )
    return;
  v77 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  this->fields._input = (struct UIInput_o *)v77;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._input, (int32_t)v77, v78, v79, v80, v81, v82, v83);
  v86 = (UnityEngine_Object_o *)this->fields._input;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v84, v85);
  if ( UnityEngine_Object__op_Inequality(v86, 0, 0) )
  {
    v87 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
    EventDelegate___ctor(v87, 0);
    if ( !v87 )
      goto LABEL_63;
    EventDelegate__set_target(v87, (UnityEngine_MonoBehaviour_o *)this, 0);
    EventDelegate__set_methodName(v87, (System_String_o *)StringLiteral_10221/*"OnChange"*/, 0);
    v94 = this->fields._input;
    if ( !v94 )
      goto LABEL_63;
    Names = (System_Collections_Generic_List_object__o *)v94->fields.onChange;
    if ( !Names )
      goto LABEL_63;
    v95 = Names->fields._items;
    v96 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++Names->fields._version;
    if ( !v95 )
      goto LABEL_63;
    v97 = Names->fields._size;
    if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Names,
        (Il2CppObject *)v87,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
    }
    else
    {
      v98 = &v95->obj.klass + v97;
      Names->fields._size = v97 + 1;
      v98[4] = (Il2CppClass *)v87;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v98 + 4), (int32_t)v87, v88, v89, v90, v91, v92, v93);
    }
  }
  v99 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  this->fields._toggle = (struct UIToggle_o *)v99;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._toggle,
    (int32_t)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  toggle = (UnityEngine_Object_o *)this->fields._toggle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v106, v107);
  if ( UnityEngine_Object__op_Inequality(toggle, 0, 0) )
  {
    v109 = (EventDelegate_o *)sub_21FFEBC(EventDelegate_TypeInfo);
    EventDelegate___ctor(v109, 0);
    if ( v109 )
    {
      EventDelegate__set_target(v109, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v109, (System_String_o *)StringLiteral_10221/*"OnChange"*/, 0);
      v116 = this->fields._toggle;
      if ( v116 )
      {
        onChange = (System_Collections_Generic_List_object__o *)v116->fields.onChange;
        if ( onChange )
        {
          v118 = onChange->fields._items;
          v119 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++onChange->fields._version;
          if ( v118 )
          {
            v120 = onChange->fields._size;
            if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                onChange,
                (Il2CppObject *)v109,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
            }
            else
            {
              v121 = &v118->obj.klass + v120;
              onChange->fields._size = v120 + 1;
              v121[4] = (Il2CppClass *)v109;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v121 + 4),
                (int32_t)v109,
                v110,
                v111,
                v112,
                v113,
                v114,
                v115);
            }
            return;
          }
        }
      }
    }
LABEL_63:
    sub_21FFECC(Names, v11);
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnHover(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool isOver,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *targetFSM; // x21
  HutongGames_PlayMaker_Fsm_c *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Int32_array *usage; // x8
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v18; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct System_Int32_array *v22; // x8
  int32_t *v23; // x8
  struct System_Int32_array *v24; // x8

  if ( (byte_59363F1 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363F1 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v8 = (HutongGames_PlayMaker_Fsm_c *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( usage )
      {
        if ( (usage->max_length & 0xFFFFFFFE) == 0 )
          goto LABEL_24;
        v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
        ++usage->m_Items[1];
        if ( !*(&v8->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v8, v9, v10);
          v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        EventData = v8->static_fields->EventData;
        if ( EventData )
        {
          EventData->fields.BoolData = isOver;
          v18 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9, v10);
            v18 = UICamera_TypeInfo;
          }
          currentTouch = v18->static_fields->currentTouch;
          NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
            (int32_t)currentTouch,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
          NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 1, v20);
          if ( isOver )
          {
            NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 2, v21);
            v22 = this->fields._usage;
            if ( v22 )
            {
              if ( LODWORD(v22->max_length) > 2 )
              {
                v23 = &v22->m_Items[2];
LABEL_21:
                ++*v23;
                return;
              }
              goto LABEL_24;
            }
          }
          else
          {
            NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 3, v21);
            v24 = this->fields._usage;
            if ( v24 )
            {
              if ( (v24->max_length & 0xFFFFFFFC) != 0 )
              {
                v23 = &v24->m_Items[3];
                goto LABEL_21;
              }
LABEL_24:
              sub_21FFED4(v8);
            }
          }
        }
      }
      sub_21FFECC(v8, v9);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnPress(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool pressed,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *targetFSM; // x21
  HutongGames_PlayMaker_Fsm_c *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Int32_array *usage; // x8
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v18; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  struct System_Int32_array *v22; // x8
  int32_t *v23; // x8
  struct System_Int32_array *v24; // x8

  if ( (byte_59363F2 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363F2 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v8 = (HutongGames_PlayMaker_Fsm_c *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( usage )
      {
        if ( LODWORD(usage->max_length) <= 4 )
          goto LABEL_24;
        v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
        ++usage->m_Items[4];
        if ( !*(&v8->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v8, v9, v10);
          v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        EventData = v8->static_fields->EventData;
        if ( EventData )
        {
          EventData->fields.BoolData = pressed;
          v18 = UICamera_TypeInfo;
          if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v9, v10);
            v18 = UICamera_TypeInfo;
          }
          currentTouch = v18->static_fields->currentTouch;
          NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
            (int32_t)currentTouch,
            v10,
            v11,
            v12,
            v13,
            v14,
            v15);
          NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 4, v20);
          if ( pressed )
          {
            NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 6, v21);
            v22 = this->fields._usage;
            if ( v22 )
            {
              if ( LODWORD(v22->max_length) > 6 )
              {
                v23 = &v22->m_Items[6];
LABEL_21:
                ++*v23;
                return;
              }
              goto LABEL_24;
            }
          }
          else
          {
            NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 5, v21);
            v24 = this->fields._usage;
            if ( v24 )
            {
              if ( LODWORD(v24->max_length) > 5 )
              {
                v23 = &v24->m_Items[5];
                goto LABEL_21;
              }
LABEL_24:
              sub_21FFED4(v8);
            }
          }
        }
      }
      sub_21FFECC(v8, v9);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSelect(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool selected,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *targetFSM; // x21
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  HutongGames_PlayMaker_Fsm_c *v15; // x0
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v17; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v19; // x2

  if ( (byte_59363F3 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363F3 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v15 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v8, v9);
        v15 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v15->static_fields->EventData;
      if ( !EventData )
        sub_21FFECC(v15, v8);
      EventData->fields.BoolData = selected;
      v17 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8, v9);
        v17 = UICamera_TypeInfo;
      }
      currentTouch = v17->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 7, v19);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSelectionChange(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        System_String_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *targetFSM; // x21
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Int32_array *usage; // x8
  HutongGames_PlayMaker_Fsm_c *v17; // x0
  const MethodInfo *v18; // x2

  if ( (byte_59363F9 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59363F9 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    EventData = (struct HutongGames_PlayMaker_FsmEventData_o *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)EventData & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( !usage )
        goto LABEL_14;
      if ( LODWORD(usage->max_length) <= 0xC )
        sub_21FFED4(EventData);
      v17 = HutongGames_PlayMaker_Fsm_TypeInfo;
      ++usage->m_Items[12];
      if ( !*(&v17->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v17, v9, v10);
        v17 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v17->static_fields->EventData;
      if ( !EventData )
LABEL_14:
        sub_21FFECC(EventData, v9);
      EventData->fields.StringData = item;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&EventData->fields.StringData,
        (int32_t)item,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 12, v18);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSliderChange(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        float value,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *targetFSM; // x20
  UIProgressBar_o *v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Int32_array *usage; // x8
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Object_c *v13; // x0
  UnityEngine_Object_o *pBar; // x20
  const MethodInfo *v15; // x2
  float v16; // s0
  float v17; // s8
  UnityEngine_Transform_c *v18; // x8

  if ( (byte_59363F8 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59363F8 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    v8 = (UIProgressBar_o *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( usage )
      {
        if ( LODWORD(usage->max_length) <= 0xB )
          sub_21FFED4(v8);
        v8 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
        ++usage->m_Items[11];
        if ( !HIDWORD(v8[2].klass) )
        {
          j_il2cpp_runtime_class_init_0(v8, v9, v10);
          v8 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        klass = v8[1].fields.mTrans->klass;
        if ( klass )
        {
          v13 = UnityEngine_Object_TypeInfo;
          pBar = (UnityEngine_Object_o *)this->fields._pBar;
          *(float *)&klass->_1.this_arg.bits = value;
          if ( !*(&v13->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v13, v9, v10);
          if ( !UnityEngine_Object__op_Inequality(pBar, 0, 0) )
            goto LABEL_21;
          v8 = this->fields._pBar;
          if ( v8 )
          {
            v16 = UIProgressBar__get_value(v8, 0);
            v8 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
            v17 = v16;
            if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v9, v15);
              v8 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
            }
            v18 = v8[1].fields.mTrans->klass;
            if ( v18 )
            {
              *(float *)&v18->_1.this_arg.bits = v17;
LABEL_21:
              NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 11, v15);
              return;
            }
          }
        }
      }
      sub_21FFECC(v8, v9);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSubmitChange(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *targetFSM; // x20
  struct UIInput_o *EventData; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *usage; // x8
  UnityEngine_Object_c *v10; // x0
  UnityEngine_Object_o *input; // x20
  const MethodInfo *v12; // x2
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *value; // x20
  HutongGames_PlayMaker_Fsm_c *v20; // x8

  if ( (byte_59363F7 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59363F7 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
    EventData = (struct UIInput_o *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)EventData & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( usage )
      {
        if ( LODWORD(usage->max_length) <= 0xA )
          sub_21FFED4(EventData);
        v10 = UnityEngine_Object_TypeInfo;
        input = (UnityEngine_Object_o *)this->fields._input;
        ++usage->m_Items[10];
        if ( !*(&v10->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v10, v7, v8);
        if ( !UnityEngine_Object__op_Inequality(input, 0, 0) )
          goto LABEL_18;
        EventData = this->fields._input;
        if ( EventData )
        {
          value = UIInput__get_value(EventData, 0);
          v20 = HutongGames_PlayMaker_Fsm_TypeInfo;
          if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v7, v13);
            v20 = HutongGames_PlayMaker_Fsm_TypeInfo;
          }
          EventData = (struct UIInput_o *)v20->static_fields->EventData;
          if ( EventData )
          {
            *(_QWORD *)&EventData->fields.activeTextColor.fields.r = value;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&EventData->fields.activeTextColor,
              (int32_t)value,
              v13,
              v14,
              v15,
              v16,
              v17,
              v18);
LABEL_18:
            NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 10, v12);
            return;
          }
        }
      }
      sub_21FFECC(EventData, v7);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnTooltip(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool show,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *targetFSM; // x21
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  HutongGames_PlayMaker_Fsm_c *v15; // x0
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v17; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v19; // x2

  if ( (byte_59363F6 & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICamera_TypeInfo);
    byte_59363F6 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v15 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v8, v9);
        v15 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v15->static_fields->EventData;
      if ( !EventData )
        sub_21FFECC(v15, v8);
      EventData->fields.BoolData = show;
      v17 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8, v9);
        v17 = UICamera_TypeInfo;
      }
      currentTouch = v17->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 13, v19);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__SetCurrentSelection(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  UnityEngine_Object_o *targetFSM; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *current; // x20
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Int32_array *usage; // x8
  struct UIPopupList_StaticFields *static_fields; // x9
  struct UIPopupList_o *v19; // x9
  System_String_o *mSelectedItem; // x20
  HutongGames_PlayMaker_Fsm_c *v21; // x0
  const MethodInfo *v22; // x2

  if ( (byte_59363FB & 1) == 0 )
  {
    sub_21FFC50(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_21FFC50(&Localization_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIPopupList_TypeInfo);
    byte_59363FB = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      current = (UnityEngine_Object_o *)UIPopupList_TypeInfo->static_fields->current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      EventData = (struct HutongGames_PlayMaker_FsmEventData_o *)UnityEngine_Object__op_Inequality(current, 0, 0);
      if ( ((unsigned __int8)EventData & 1) != 0 )
      {
        usage = this->fields._usage;
        if ( !usage )
          goto LABEL_22;
        if ( LODWORD(usage->max_length) <= 0xC )
          sub_21FFED4(EventData);
        static_fields = UIPopupList_TypeInfo->static_fields;
        ++usage->m_Items[12];
        v19 = static_fields->current;
        if ( !v19 )
          goto LABEL_22;
        mSelectedItem = v19->fields.mSelectedItem;
        if ( v19->fields.isLocalized )
        {
          if ( !*(&Localization_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo, v10, v11);
          mSelectedItem = Localization__Get(mSelectedItem, 0);
        }
        v21 = HutongGames_PlayMaker_Fsm_TypeInfo;
        if ( !*(&HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo, v10, v11);
          v21 = HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        EventData = v21->static_fields->EventData;
        if ( !EventData )
LABEL_22:
          sub_21FFECC(EventData, v10);
        EventData->fields.StringData = mSelectedItem;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&EventData->fields.StringData,
          (int32_t)mSelectedItem,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16);
        NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 12, v22);
      }
    }
  }
}


int32_t NGuiEventsToPlaymakerFsmEvents__getUsage(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        int32_t fsmEventDelegate,
        const MethodInfo *method)
{
  struct System_Int32_array *usage; // x8
  int32_t max_length; // w9

  usage = this->fields._usage;
  if ( !usage )
    return 0;
  max_length = usage->max_length;
  if ( max_length <= fsmEventDelegate )
    return -1;
  if ( max_length <= (unsigned int)fsmEventDelegate )
    sub_21FFED4(this);
  return usage->m_Items[fsmEventDelegate];
}