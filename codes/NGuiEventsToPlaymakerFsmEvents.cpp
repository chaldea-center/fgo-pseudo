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

  if ( (byte_596E548 & 1) == 0 )
  {
    sub_2213A60(&NGuiPlayMakerDelegates_TypeInfo);
    byte_596E548 = 1;
  }
  v11 = fsmEventDelegate;
  v6 = (System_Enum_o *)j_il2cpp_value_box_0(NGuiPlayMakerDelegates_TypeInfo, &v11);
  FsmEventEnumValue = (NGuiEventsToPlaymakerFsmEvents_o *)NGuiPlayMakerProxy__GetFsmEventEnumValue(v6, v7);
  return NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_45351504(
           FsmEventEnumValue,
           fsm,
           (System_String_o *)FsmEventEnumValue,
           v9);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_45351504(
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
      this = (NGuiEventsToPlaymakerFsmEvents_o *)System_String__Equals_75686512((System_String_o *)this, fsmEvent, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
    }
    while ( (int)++v8 < m_CancellationTokenSource );
  }
  this = (NGuiEventsToPlaymakerFsmEvents_o *)PlayMakerFSM__get_FsmStates(fsm, 0);
  if ( !this )
LABEL_26:
    sub_2213CDC(this, fsm);
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
      this = (NGuiEventsToPlaymakerFsmEvents_o *)System_String__Equals_75686512((System_String_o *)this, fsmEvent, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      v14 = *(_DWORD *)(v13 + 24);
      if ( (int)++v15 >= v14 )
        goto LABEL_23;
    }
LABEL_27:
    sub_2213CE4(this);
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

  if ( (byte_596E547 & 1) == 0 )
  {
    sub_2213A60(&NGuiPlayMakerDelegates_TypeInfo);
    byte_596E547 = 1;
  }
  v12 = fsmEventDelegate;
  v7 = (System_Enum_o *)j_il2cpp_value_box_0(NGuiPlayMakerDelegates_TypeInfo, &v12);
  FsmEventEnumValue = NGuiPlayMakerProxy__GetFsmEventEnumValue(v7, v8);
  return NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation_45351340(this, fsm, FsmEventEnumValue, v10);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation_45351340(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        System_String_o *fsmEvent,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_FsmEvent_array *DoesTargetImplementsEvent_45351504; // x0
  __int64 v7; // x1
  int max_length; // w8
  HutongGames_PlayMaker_FsmEvent_array *v9; // x20
  __int64 v10; // x21
  HutongGames_PlayMaker_FsmEvent_o *v11; // x8

  DoesTargetImplementsEvent_45351504 = (HutongGames_PlayMaker_FsmEvent_array *)NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_45351504(
                                                                                 this,
                                                                                 fsm,
                                                                                 fsmEvent,
                                                                                 method);
  if ( ((unsigned __int8)DoesTargetImplementsEvent_45351504 & 1) == 0 )
  {
    if ( !fsm )
      goto LABEL_14;
    DoesTargetImplementsEvent_45351504 = PlayMakerFSM__get_FsmEvents(fsm, 0);
    if ( !DoesTargetImplementsEvent_45351504 )
      goto LABEL_14;
    max_length = DoesTargetImplementsEvent_45351504->max_length;
    v9 = DoesTargetImplementsEvent_45351504;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v10 >= max_length )
          sub_2213CE4(DoesTargetImplementsEvent_45351504);
        v11 = v9->m_Items[v10];
        if ( !v11 )
          break;
        DoesTargetImplementsEvent_45351504 = (HutongGames_PlayMaker_FsmEvent_array *)v11->fields.name;
        if ( !DoesTargetImplementsEvent_45351504 )
          break;
        DoesTargetImplementsEvent_45351504 = (HutongGames_PlayMaker_FsmEvent_array *)System_String__Equals_75686512(
                                                                                       (System_String_o *)DoesTargetImplementsEvent_45351504,
                                                                                       fsmEvent,
                                                                                       0);
        if ( ((unsigned __int8)DoesTargetImplementsEvent_45351504 & 1) == 0 )
        {
          max_length = v9->max_length;
          if ( (int)++v10 < max_length )
            continue;
        }
        return (unsigned __int8)DoesTargetImplementsEvent_45351504 & 1;
      }
LABEL_14:
      sub_2213CDC(DoesTargetImplementsEvent_45351504, v7);
    }
  }
  LOBYTE(DoesTargetImplementsEvent_45351504) = 0;
  return (unsigned __int8)DoesTargetImplementsEvent_45351504 & 1;
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

  if ( (byte_596E549 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__IndexOf__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&NGuiPlayMakerDelegates_TypeInfo);
    byte_596E549 = 1;
  }
  customEventsKeys = (System_Collections_Generic_List_T__o *)this->fields.customEventsKeys;
  if ( !customEventsKeys )
    goto LABEL_11;
  v6 = System_Collections_Generic_List_Int32Enum___Contains(
         customEventsKeys,
         event,
         (const MethodInfo_4469E08 *)Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__Contains__);
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
                                                                   (const MethodInfo_446A6E4 *)Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__IndexOf__);
      if ( customEventsValues )
      {
        customEventsKeys = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)customEventsValues,
                                                                     (int32_t)customEventsKeys,
                                                                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( targetFSM )
        {
          PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)customEventsKeys, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_2213CDC(customEventsKeys, *(_QWORD *)&event);
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

  if ( (byte_596E554 & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E554 = 1;
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
        sub_2213CE4(value);
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
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 80), (int32_t)value, v14, v15, v16, v17, v18, v19);
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
      sub_2213CDC(value, v7);
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

  if ( (byte_596E54A & 1) == 0 )
  {
    sub_2213A60(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E54A = 1;
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
        sub_2213CDC(v6, v7);
      if ( !LODWORD(usage->max_length) )
        sub_2213CE4(v6);
      v15 = UICamera_TypeInfo;
      ++usage->m_Items[0];
      if ( !*(&v15->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v15, v7, v8);
        v15 = UICamera_TypeInfo;
      }
      currentTouch = v15->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_2213A04(
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
  if ( (byte_596E54E & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E54E = 1;
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
        sub_2213CDC(v16, v9);
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
      sub_2213A04(
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

  if ( (byte_596E54F & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E54F = 1;
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
        sub_2213CDC(0, v8);
      EventData->fields.GameObjectData = go;
      sub_2213A04(
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
      sub_2213A04(
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
  __int64 v6; // x1
  __int64 v7; // x2
  System_Type_o *TypeFromHandle; // x21
  System_Collections_Generic_List_object__o *Names; // x0
  __int64 v10; // x1
  struct System_Int32_array *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Object_o *targetFSM; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *Component_object; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Object_o *v28; // x20
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  __int64 v38; // x1
  __int64 v39; // x2
  UnityEngine_Object_o *input; // x20
  EventDelegate_o *v41; // x20
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct UIInput_o *v48; // x8
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x8
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  __int64 v61; // x1
  __int64 v62; // x2
  UnityEngine_Object_o *pBar; // x20
  EventDelegate_o *v64; // x20
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct UIProgressBar_o *v71; // x8
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x8
  Il2CppObject *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  __int64 v83; // x1
  __int64 v84; // x2
  UnityEngine_Object_o *v85; // x20
  EventDelegate_o *v86; // x20
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  struct UIInput_o *v93; // x8
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x8
  Il2CppObject *v98; // x0
  System_String_o *v99; // x2
  System_String_o *v100; // x3
  int32_t v101; // w4
  int32_t v102; // w5
  bool v103; // w6
  bool v104; // w7
  __int64 v105; // x1
  __int64 v106; // x2
  UnityEngine_Object_o *toggle; // x20
  EventDelegate_o *v108; // x20
  System_String_o *v109; // x2
  System_String_o *v110; // x3
  int32_t v111; // w4
  int32_t v112; // w5
  bool v113; // w6
  bool v114; // w7
  struct UIToggle_o *v115; // x8
  System_Collections_Generic_List_object__o *onChange; // x8
  struct System_Object_array *v117; // x9
  _QWORD *v118; // x10
  __int64 v119; // x11
  Il2CppClass **v120; // x0

  if ( (byte_596E546 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_2213A60(&EventDelegate_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_2213A60(&NGuiPlayMakerDelegates_var);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_10371/*"OnSubmitChange"*/);
    sub_2213A60(&StringLiteral_10366/*"OnSliderChange"*/);
    sub_2213A60(&StringLiteral_10234/*"OnChange"*/);
    byte_596E546 = 1;
  }
  usage = this->fields._usage;
  if ( !usage || !usage->max_length )
  {
    v5 = NGuiPlayMakerDelegates_var;
    if ( !*(_DWORD *)(qword_59843E0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_59843E0, method, v2);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v5, 0);
    if ( !*(_DWORD *)(qword_5984398 + 228) )
      j_il2cpp_runtime_class_init_0(qword_5984398, v6, v7);
    Names = (System_Collections_Generic_List_object__o *)System_Enum__GetNames(TypeFromHandle, 0);
    if ( !Names )
      goto LABEL_63;
    v11 = (struct System_Int32_array *)sub_2213B20(int___TypeInfo, (unsigned int)Names->fields._size);
    this->fields._usage = v11;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._usage, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.targetFSM = (struct PlayMakerFSM_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.targetFSM,
      (int32_t)Component_object,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  if ( UnityEngine_Object__op_Equality(v28, 0, 0) )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  if ( NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 10, v29) )
  {
    v31 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    this->fields._input = (struct UIInput_o *)v31;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._input, (int32_t)v31, v32, v33, v34, v35, v36, v37);
    input = (UnityEngine_Object_o *)this->fields._input;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38, v39);
    if ( UnityEngine_Object__op_Inequality(input, 0, 0) )
    {
      v41 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
      EventDelegate___ctor(v41, 0);
      if ( !v41 )
        goto LABEL_63;
      EventDelegate__set_target(v41, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v41, (System_String_o *)StringLiteral_10371/*"OnSubmitChange"*/, 0);
      v48 = this->fields._input;
      if ( !v48 )
        goto LABEL_63;
      Names = (System_Collections_Generic_List_object__o *)v48->fields.onSubmit;
      if ( !Names )
        goto LABEL_63;
      items = Names->fields._items;
      v50 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++Names->fields._version;
      if ( !items )
        goto LABEL_63;
      size = Names->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Names,
          (Il2CppObject *)v41,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        Names->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v41;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v41, v42, v43, v44, v45, v46, v47);
      }
    }
  }
  if ( NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 11, v30) )
  {
    v54 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    this->fields._pBar = (struct UIProgressBar_o *)v54;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._pBar, (int32_t)v54, v55, v56, v57, v58, v59, v60);
    pBar = (UnityEngine_Object_o *)this->fields._pBar;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v61, v62);
    if ( UnityEngine_Object__op_Inequality(pBar, 0, 0) )
    {
      v64 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
      EventDelegate___ctor(v64, 0);
      if ( !v64 )
        goto LABEL_63;
      EventDelegate__set_target(v64, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v64, (System_String_o *)StringLiteral_10366/*"OnSliderChange"*/, 0);
      v71 = this->fields._pBar;
      if ( !v71 )
        goto LABEL_63;
      Names = (System_Collections_Generic_List_object__o *)v71->fields.onChange;
      if ( !Names )
        goto LABEL_63;
      v72 = Names->fields._items;
      v73 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++Names->fields._version;
      if ( !v72 )
        goto LABEL_63;
      v74 = Names->fields._size;
      if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Names,
          (Il2CppObject *)v64,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &v72->obj.klass + v74;
        Names->fields._size = v74 + 1;
        v75[4] = (Il2CppClass *)v64;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v64, v65, v66, v67, v68, v69, v70);
      }
    }
  }
  if ( !NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 14, v53) )
    return;
  v76 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  this->fields._input = (struct UIInput_o *)v76;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._input, (int32_t)v76, v77, v78, v79, v80, v81, v82);
  v85 = (UnityEngine_Object_o *)this->fields._input;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v83, v84);
  if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
  {
    v86 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
    EventDelegate___ctor(v86, 0);
    if ( !v86 )
      goto LABEL_63;
    EventDelegate__set_target(v86, (UnityEngine_MonoBehaviour_o *)this, 0);
    EventDelegate__set_methodName(v86, (System_String_o *)StringLiteral_10234/*"OnChange"*/, 0);
    v93 = this->fields._input;
    if ( !v93 )
      goto LABEL_63;
    Names = (System_Collections_Generic_List_object__o *)v93->fields.onChange;
    if ( !Names )
      goto LABEL_63;
    v94 = Names->fields._items;
    v95 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++Names->fields._version;
    if ( !v94 )
      goto LABEL_63;
    v96 = Names->fields._size;
    if ( (unsigned int)v96 >= LODWORD(v94->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Names,
        (Il2CppObject *)v86,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
    }
    else
    {
      v97 = &v94->obj.klass + v96;
      Names->fields._size = v96 + 1;
      v97[4] = (Il2CppClass *)v86;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v97 + 4), (int32_t)v86, v87, v88, v89, v90, v91, v92);
    }
  }
  v98 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  this->fields._toggle = (struct UIToggle_o *)v98;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._toggle,
    (int32_t)v98,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  toggle = (UnityEngine_Object_o *)this->fields._toggle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v105, v106);
  if ( UnityEngine_Object__op_Inequality(toggle, 0, 0) )
  {
    v108 = (EventDelegate_o *)sub_2213CCC(EventDelegate_TypeInfo);
    EventDelegate___ctor(v108, 0);
    if ( v108 )
    {
      EventDelegate__set_target(v108, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v108, (System_String_o *)StringLiteral_10234/*"OnChange"*/, 0);
      v115 = this->fields._toggle;
      if ( v115 )
      {
        onChange = (System_Collections_Generic_List_object__o *)v115->fields.onChange;
        if ( onChange )
        {
          v117 = onChange->fields._items;
          v118 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++onChange->fields._version;
          if ( v117 )
          {
            v119 = onChange->fields._size;
            if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                onChange,
                (Il2CppObject *)v108,
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
            }
            else
            {
              v120 = &v117->obj.klass + v119;
              onChange->fields._size = v119 + 1;
              v120[4] = (Il2CppClass *)v108;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)(v120 + 4),
                (int32_t)v108,
                v109,
                v110,
                v111,
                v112,
                v113,
                v114);
            }
            return;
          }
        }
      }
    }
LABEL_63:
    sub_2213CDC(Names, v10);
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

  if ( (byte_596E54B & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E54B = 1;
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
          sub_2213A04(
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
              sub_2213CE4(v8);
            }
          }
        }
      }
      sub_2213CDC(v8, v9);
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

  if ( (byte_596E54C & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E54C = 1;
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
          sub_2213A04(
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
              sub_2213CE4(v8);
            }
          }
        }
      }
      sub_2213CDC(v8, v9);
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

  if ( (byte_596E54D & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E54D = 1;
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
        sub_2213CDC(v15, v8);
      EventData->fields.BoolData = selected;
      v17 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8, v9);
        v17 = UICamera_TypeInfo;
      }
      currentTouch = v17->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_2213A04(
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

  if ( (byte_596E553 & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E553 = 1;
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
        sub_2213CE4(EventData);
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
        sub_2213CDC(EventData, v9);
      EventData->fields.StringData = item;
      sub_2213A04(
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

  if ( (byte_596E552 & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596E552 = 1;
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
          sub_2213CE4(v8);
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
      sub_2213CDC(v8, v9);
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

  if ( (byte_596E551 & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E551 = 1;
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
          sub_2213CE4(EventData);
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
            sub_2213A04(
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
      sub_2213CDC(EventData, v7);
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

  if ( (byte_596E550 & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596E550 = 1;
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
        sub_2213CDC(v15, v8);
      EventData->fields.BoolData = show;
      v17 = UICamera_TypeInfo;
      if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v8, v9);
        v17 = UICamera_TypeInfo;
      }
      currentTouch = v17->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_2213A04(
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

  if ( (byte_596E555 & 1) == 0 )
  {
    sub_2213A60(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_2213A60(&Localization_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UIPopupList_TypeInfo);
    byte_596E555 = 1;
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
          sub_2213CE4(EventData);
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
          sub_2213CDC(EventData, v10);
        EventData->fields.StringData = mSelectedItem;
        sub_2213A04(
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
    sub_2213CE4(this);
  return usage->m_Items[fsmEventDelegate];
}