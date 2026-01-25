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

  if ( (byte_4CEC49D & 1) == 0 )
  {
    sub_1C7BAE8(&NGuiPlayMakerDelegates_TypeInfo);
    byte_4CEC49D = 1;
  }
  v11 = fsmEventDelegate;
  v6 = (System_Enum_o *)j_il2cpp_value_box_0(NGuiPlayMakerDelegates_TypeInfo, &v11);
  FsmEventEnumValue = (NGuiEventsToPlaymakerFsmEvents_o *)NGuiPlayMakerProxy__GetFsmEventEnumValue(v6, v7);
  return NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_38995580(
           FsmEventEnumValue,
           fsm,
           (System_String_o *)FsmEventEnumValue,
           v9);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_38995580(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        System_String_o *fsmEvent,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  NGuiEventsToPlaymakerFsmEvents_o *v7; // x21
  unsigned int v8; // w22
  int v9; // w8
  NGuiEventsToPlaymakerFsmEvents_o *v10; // x20
  unsigned int v11; // w21
  __int64 v12; // x8
  __int64 v13; // x22
  int v14; // w8
  unsigned int v15; // w23

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
      if ( v8 >= m_CancellationTokenSource )
        goto LABEL_27;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)*((_QWORD *)&v7->fields.debug + (int)v8);
      if ( !this )
        goto LABEL_26;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)HutongGames_PlayMaker_FsmTransition__get_EventName(
                                                   (HutongGames_PlayMaker_FsmTransition_o *)this,
                                                   0);
      if ( !this )
        goto LABEL_26;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)System_String__Equals_64212232((System_String_o *)this, fsmEvent, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
    }
    while ( (int)++v8 < m_CancellationTokenSource );
  }
  this = (NGuiEventsToPlaymakerFsmEvents_o *)PlayMakerFSM__get_FsmStates(fsm, 0);
  if ( !this )
LABEL_26:
    sub_1C7BD40(this, fsm);
  v9 = (int)this->fields.m_CancellationTokenSource;
  v10 = this;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        goto LABEL_27;
      v12 = *((_QWORD *)&v10->fields.debug + (int)v11);
      if ( !v12 )
        goto LABEL_26;
      v13 = *(_QWORD *)(v12 + 104);
      if ( !v13 )
        goto LABEL_26;
      v14 = *(_DWORD *)(v13 + 24);
      if ( v14 >= 1 )
        break;
LABEL_23:
      v9 = (int)v10->fields.m_CancellationTokenSource;
      if ( (int)++v11 >= v9 )
        return 0;
    }
    v15 = 0;
    while ( v15 < v14 )
    {
      this = *(NGuiEventsToPlaymakerFsmEvents_o **)(v13 + 8LL * (int)v15 + 32);
      if ( !this )
        goto LABEL_26;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)HutongGames_PlayMaker_FsmTransition__get_EventName(
                                                   (HutongGames_PlayMaker_FsmTransition_o *)this,
                                                   0);
      if ( !this )
        goto LABEL_26;
      this = (NGuiEventsToPlaymakerFsmEvents_o *)System_String__Equals_64212232((System_String_o *)this, fsmEvent, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      v14 = *(_DWORD *)(v13 + 24);
      if ( (int)++v15 >= v14 )
        goto LABEL_23;
    }
LABEL_27:
    sub_1C7BD48(this);
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

  if ( (byte_4CEC49C & 1) == 0 )
  {
    sub_1C7BAE8(&NGuiPlayMakerDelegates_TypeInfo);
    byte_4CEC49C = 1;
  }
  v12 = fsmEventDelegate;
  v7 = (System_Enum_o *)j_il2cpp_value_box_0(NGuiPlayMakerDelegates_TypeInfo, &v12);
  FsmEventEnumValue = NGuiPlayMakerProxy__GetFsmEventEnumValue(v7, v8);
  return NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation_38995424(this, fsm, FsmEventEnumValue, v10);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation_38995424(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        System_String_o *fsmEvent,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_FsmEvent_array *DoesTargetImplementsEvent_38995580; // x0
  __int64 v7; // x1
  int max_length; // w8
  HutongGames_PlayMaker_FsmEvent_array *v9; // x20
  unsigned int v10; // w21
  HutongGames_PlayMaker_FsmEvent_o *v11; // x8

  DoesTargetImplementsEvent_38995580 = (HutongGames_PlayMaker_FsmEvent_array *)NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_38995580(
                                                                                 this,
                                                                                 fsm,
                                                                                 fsmEvent,
                                                                                 method);
  if ( ((unsigned __int8)DoesTargetImplementsEvent_38995580 & 1) == 0 )
  {
    if ( !fsm )
      goto LABEL_14;
    DoesTargetImplementsEvent_38995580 = PlayMakerFSM__get_FsmEvents(fsm, 0);
    if ( !DoesTargetImplementsEvent_38995580 )
      goto LABEL_14;
    max_length = DoesTargetImplementsEvent_38995580->max_length;
    v9 = DoesTargetImplementsEvent_38995580;
    if ( max_length >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= max_length )
          sub_1C7BD48(DoesTargetImplementsEvent_38995580);
        v11 = v9->m_Items[v10];
        if ( !v11 )
          break;
        DoesTargetImplementsEvent_38995580 = (HutongGames_PlayMaker_FsmEvent_array *)v11->fields.name;
        if ( !DoesTargetImplementsEvent_38995580 )
          break;
        DoesTargetImplementsEvent_38995580 = (HutongGames_PlayMaker_FsmEvent_array *)System_String__Equals_64212232(
                                                                                       (System_String_o *)DoesTargetImplementsEvent_38995580,
                                                                                       fsmEvent,
                                                                                       0);
        if ( ((unsigned __int8)DoesTargetImplementsEvent_38995580 & 1) == 0 )
        {
          max_length = v9->max_length;
          if ( (int)++v10 < max_length )
            continue;
        }
        return (unsigned __int8)DoesTargetImplementsEvent_38995580 & 1;
      }
LABEL_14:
      sub_1C7BD40(DoesTargetImplementsEvent_38995580, v7);
    }
  }
  LOBYTE(DoesTargetImplementsEvent_38995580) = 0;
  return (unsigned __int8)DoesTargetImplementsEvent_38995580 & 1;
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

  if ( (byte_4CEC49E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__IndexOf__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C7BAE8(&NGuiPlayMakerDelegates_TypeInfo);
    byte_4CEC49E = 1;
  }
  customEventsKeys = (System_Collections_Generic_List_T__o *)this->fields.customEventsKeys;
  if ( !customEventsKeys )
    goto LABEL_11;
  v6 = System_Collections_Generic_List_Int32Enum___Contains(
         customEventsKeys,
         event,
         (const MethodInfo_382497C *)Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__Contains__);
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
                                                                   (const MethodInfo_3825280 *)Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__IndexOf__);
      if ( customEventsValues )
      {
        customEventsKeys = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)customEventsValues,
                                                                     (int32_t)customEventsKeys,
                                                                     (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( targetFSM )
        {
          PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)customEventsKeys, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_1C7BD40(customEventsKeys, *(_QWORD *)&event);
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
  UnityEngine_Object_o *targetFSM; // x20
  void *value; // x0
  __int64 v5; // x1
  struct System_Int32_array *usage; // x8
  UnityEngine_Object_o *input; // x20
  __int64 v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  UnityEngine_Object_o *toggle; // x20
  const MethodInfo *v16; // x2
  __int64 v17; // x20

  if ( (byte_4CEC4A9 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC4A9 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    value = (void *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)value & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( !usage )
        goto LABEL_27;
      if ( LODWORD(usage->max_length) <= 0xE )
        sub_1C7BD48(value);
      ++usage->m_Items[14];
      input = (UnityEngine_Object_o *)this->fields._input;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(input, 0, 0) )
      {
        value = HutongGames_PlayMaker_Fsm_TypeInfo;
        if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
          value = HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        if ( !this->fields._input )
          goto LABEL_27;
        v8 = **((_QWORD **)value + 23);
        value = UIInput__get_value(this->fields._input, 0);
        if ( !v8 )
          goto LABEL_27;
        *(_QWORD *)(v8 + 80) = value;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v8 + 80), (int32_t)value, v9, v10, v11, v12, v13, v14);
      }
      toggle = (UnityEngine_Object_o *)this->fields._toggle;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(toggle, 0, 0) )
        goto LABEL_26;
      value = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        value = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      if ( this->fields._toggle )
      {
        v17 = **((_QWORD **)value + 23);
        value = (void *)UIToggle__get_value(this->fields._toggle, 0);
        if ( v17 )
        {
          *(_BYTE *)(v17 + 48) = (unsigned __int8)value & 1;
LABEL_26:
          NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 14, v16);
          return;
        }
      }
LABEL_27:
      sub_1C7BD40(value, v5);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnClick(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Int32_array *usage; // x8
  UICamera_c *v13; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4CEC49F & 1) == 0 )
  {
    sub_1C7BAE8(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEC49F = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v4 = UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( !v4 )
    {
      usage = this->fields._usage;
      if ( !usage )
        sub_1C7BD40(v4, v5);
      if ( !LODWORD(usage->max_length) )
        sub_1C7BD48(v4);
      ++usage->m_Items[0];
      v13 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v13 = UICamera_TypeInfo;
      }
      currentTouch = v13->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v6,
        v7,
        v8,
        v9,
        v10,
        v11);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 0, v15);
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
  UnityEngine_Object_o *targetFSM; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  HutongGames_PlayMaker_Fsm_c *v14; // x0
  float *EventData; // x8
  UICamera_c *v16; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v18; // x2

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4CEC4A3 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEC4A3 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v14 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v14 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = (float *)v14->static_fields->EventData;
      if ( !EventData )
        sub_1C7BD40(v14, v7);
      EventData[17] = x;
      EventData[18] = y;
      EventData[19] = 0.0;
      v16 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = UICamera_TypeInfo;
      }
      currentTouch = v16->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 8, v18);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnDrop(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  HutongGames_PlayMaker_Fsm_c *v13; // x0
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UICamera_c *v21; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v23; // x2

  if ( (byte_4CEC4A4 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEC4A4 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v13 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v13 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v13->static_fields->EventData;
      if ( !EventData )
        sub_1C7BD40(0, v6);
      EventData->fields.GameObjectData = go;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&EventData->fields.GameObjectData,
        (int32_t)go,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v21 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v21 = UICamera_TypeInfo;
      }
      currentTouch = v21->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 9, v23);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnEnable(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  struct System_Int32_array *usage; // x8
  Il2CppType *v4; // x21
  System_RuntimeTypeHandle_o v5; // x0
  System_Type_o *TypeFromHandle; // x21
  System_Collections_Generic_List_object__o *Names; // x0
  __int64 v8; // x1
  struct System_Int32_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  UnityEngine_Object_o *targetFSM; // x21
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  UnityEngine_Object_o *v24; // x20
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  UnityEngine_Object_o *input; // x20
  EventDelegate_o *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct UIInput_o *v42; // x8
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  UnityEngine_Object_o *pBar; // x20
  EventDelegate_o *v56; // x20
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  struct UIProgressBar_o *v63; // x8
  struct System_Object_array *v64; // x8
  _QWORD *v65; // x9
  __int64 v66; // x10
  Il2CppClass **v67; // x8
  Il2CppObject *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  UnityEngine_Object_o *v75; // x20
  EventDelegate_o *v76; // x20
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct UIInput_o *v83; // x8
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  Il2CppClass **v87; // x8
  Il2CppObject *v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x4
  int32_t v92; // w5
  int64_t v93; // x6
  System_String_o *v94; // x7
  UnityEngine_Object_o *toggle; // x20
  EventDelegate_o *v96; // x20
  int32_t v97; // w2
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  struct UIToggle_o *v103; // x8
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x8

  if ( (byte_4CEC49B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C7BAE8(&System_Enum_TypeInfo);
    sub_1C7BAE8(&EventDelegate_TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C7BAE8(&NGuiPlayMakerDelegates_var);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&System_Type_TypeInfo);
    sub_1C7BAE8(&StringLiteral_9994/*"OnSubmitChange"*/);
    sub_1C7BAE8(&StringLiteral_9989/*"OnSliderChange"*/);
    sub_1C7BAE8(&StringLiteral_9860/*"OnChange"*/);
    byte_4CEC49B = 1;
  }
  usage = this->fields._usage;
  if ( !usage || !usage->max_length )
  {
    v4 = NGuiPlayMakerDelegates_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v5.fields.value = (intptr_t)v4;
    TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    Names = (System_Collections_Generic_List_object__o *)System_Enum__GetNames(TypeFromHandle, 0);
    if ( !Names )
      goto LABEL_63;
    v9 = (struct System_Int32_array *)sub_1C7BB90(int___TypeInfo, (unsigned int)Names->fields._size);
    this->fields._usage = v9;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._usage, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.targetFSM = (struct PlayMakerFSM_o *)Component_object;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.targetFSM,
      (int32_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v24, 0, 0) )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  if ( NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 10, v25) )
  {
    v27 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    this->fields._input = (struct UIInput_o *)v27;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._input, (int32_t)v27, v28, v29, v30, v31, v32, v33);
    input = (UnityEngine_Object_o *)this->fields._input;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(input, 0, 0) )
    {
      v35 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
      EventDelegate___ctor(v35, 0);
      if ( !v35 )
        goto LABEL_63;
      EventDelegate__set_target(v35, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v35, (System_String_o *)StringLiteral_9994/*"OnSubmitChange"*/, 0);
      v42 = this->fields._input;
      if ( !v42 )
        goto LABEL_63;
      Names = (System_Collections_Generic_List_object__o *)v42->fields.onSubmit;
      if ( !Names )
        goto LABEL_63;
      items = Names->fields._items;
      v44 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++Names->fields._version;
      if ( !items )
        goto LABEL_63;
      size = Names->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Names,
          (Il2CppObject *)v35,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = &items->obj.klass + size;
        Names->fields._size = size + 1;
        v46[4] = (Il2CppClass *)v35;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v35, v36, v37, v38, v39, v40, v41);
      }
    }
  }
  if ( NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 11, v26) )
  {
    v48 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    this->fields._pBar = (struct UIProgressBar_o *)v48;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._pBar, (int32_t)v48, v49, v50, v51, v52, v53, v54);
    pBar = (UnityEngine_Object_o *)this->fields._pBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pBar, 0, 0) )
    {
      v56 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
      EventDelegate___ctor(v56, 0);
      if ( !v56 )
        goto LABEL_63;
      EventDelegate__set_target(v56, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v56, (System_String_o *)StringLiteral_9989/*"OnSliderChange"*/, 0);
      v63 = this->fields._pBar;
      if ( !v63 )
        goto LABEL_63;
      Names = (System_Collections_Generic_List_object__o *)v63->fields.onChange;
      if ( !Names )
        goto LABEL_63;
      v64 = Names->fields._items;
      v65 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++Names->fields._version;
      if ( !v64 )
        goto LABEL_63;
      v66 = Names->fields._size;
      if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Names,
          (Il2CppObject *)v56,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &v64->obj.klass + v66;
        Names->fields._size = v66 + 1;
        v67[4] = (Il2CppClass *)v56;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v67 + 4), (int32_t)v56, v57, v58, v59, v60, v61, v62);
      }
    }
  }
  if ( !NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 14, v47) )
    return;
  v68 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  this->fields._input = (struct UIInput_o *)v68;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._input, (int32_t)v68, v69, v70, v71, v72, v73, v74);
  v75 = (UnityEngine_Object_o *)this->fields._input;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v75, 0, 0) )
  {
    v76 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
    EventDelegate___ctor(v76, 0);
    if ( !v76 )
      goto LABEL_63;
    EventDelegate__set_target(v76, (UnityEngine_MonoBehaviour_o *)this, 0);
    EventDelegate__set_methodName(v76, (System_String_o *)StringLiteral_9860/*"OnChange"*/, 0);
    v83 = this->fields._input;
    if ( !v83 )
      goto LABEL_63;
    Names = (System_Collections_Generic_List_object__o *)v83->fields.onChange;
    if ( !Names )
      goto LABEL_63;
    v84 = Names->fields._items;
    v85 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++Names->fields._version;
    if ( !v84 )
      goto LABEL_63;
    v86 = Names->fields._size;
    if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Names,
        (Il2CppObject *)v76,
        *(const MethodInfo_383EDFC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
    }
    else
    {
      v87 = &v84->obj.klass + v86;
      Names->fields._size = v86 + 1;
      v87[4] = (Il2CppClass *)v76;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v87 + 4), (int32_t)v76, v77, v78, v79, v80, v81, v82);
    }
  }
  v88 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  this->fields._toggle = (struct UIToggle_o *)v88;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields._toggle, (int32_t)v88, v89, v90, v91, v92, v93, v94);
  toggle = (UnityEngine_Object_o *)this->fields._toggle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(toggle, 0, 0) )
  {
    v96 = (EventDelegate_o *)sub_1C7BD34(EventDelegate_TypeInfo);
    EventDelegate___ctor(v96, 0);
    if ( v96 )
    {
      EventDelegate__set_target(v96, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v96, (System_String_o *)StringLiteral_9860/*"OnChange"*/, 0);
      v103 = this->fields._toggle;
      if ( v103 )
      {
        Names = (System_Collections_Generic_List_object__o *)v103->fields.onChange;
        if ( Names )
        {
          v104 = Names->fields._items;
          v105 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++Names->fields._version;
          if ( v104 )
          {
            v106 = Names->fields._size;
            if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                Names,
                (Il2CppObject *)v96,
                *(const MethodInfo_383EDFC **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
            }
            else
            {
              v107 = &v104->obj.klass + v106;
              Names->fields._size = v106 + 1;
              v107[4] = (Il2CppClass *)v96;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v107 + 4), (int32_t)v96, v97, v98, v99, v100, v101, v102);
            }
            return;
          }
        }
      }
    }
LABEL_63:
    sub_1C7BD40(Names, v8);
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnHover(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool isOver,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  HutongGames_PlayMaker_Fsm_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Int32_array *usage; // x8
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v16; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  struct System_Int32_array *v20; // x8
  struct System_Int32_array *v21; // x8

  if ( (byte_4CEC4A0 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEC4A0 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (HutongGames_PlayMaker_Fsm_c *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( !usage )
        goto LABEL_22;
      if ( LODWORD(usage->max_length) <= 1 )
        goto LABEL_23;
      ++usage->m_Items[1];
      v6 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v6 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v6->static_fields->EventData;
      if ( !EventData )
        goto LABEL_22;
      EventData->fields.BoolData = isOver;
      v16 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = UICamera_TypeInfo;
      }
      currentTouch = v16->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 1, v18);
      if ( isOver )
      {
        NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 2, v19);
        v20 = this->fields._usage;
        if ( v20 )
        {
          if ( LODWORD(v20->max_length) > 2 )
          {
            ++v20->m_Items[2];
            return;
          }
LABEL_23:
          sub_1C7BD48(v6);
        }
LABEL_22:
        sub_1C7BD40(v6, v7);
      }
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 3, v19);
      v21 = this->fields._usage;
      if ( !v21 )
        goto LABEL_22;
      if ( LODWORD(v21->max_length) <= 3 )
        goto LABEL_23;
      ++v21->m_Items[3];
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnPress(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool pressed,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  HutongGames_PlayMaker_Fsm_c *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Int32_array *usage; // x8
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v16; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  struct System_Int32_array *v20; // x8
  struct System_Int32_array *v21; // x8

  if ( (byte_4CEC4A1 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEC4A1 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (HutongGames_PlayMaker_Fsm_c *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( !usage )
        goto LABEL_22;
      if ( LODWORD(usage->max_length) <= 4 )
        goto LABEL_23;
      ++usage->m_Items[4];
      v6 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v6 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v6->static_fields->EventData;
      if ( !EventData )
        goto LABEL_22;
      EventData->fields.BoolData = pressed;
      v16 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v16 = UICamera_TypeInfo;
      }
      currentTouch = v16->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 4, v18);
      if ( pressed )
      {
        NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 6, v19);
        v20 = this->fields._usage;
        if ( v20 )
        {
          if ( LODWORD(v20->max_length) > 6 )
          {
            ++v20->m_Items[6];
            return;
          }
LABEL_23:
          sub_1C7BD48(v6);
        }
LABEL_22:
        sub_1C7BD40(v6, v7);
      }
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 5, v19);
      v21 = this->fields._usage;
      if ( !v21 )
        goto LABEL_22;
      if ( LODWORD(v21->max_length) <= 5 )
        goto LABEL_23;
      ++v21->m_Items[5];
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSelect(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool selected,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  HutongGames_PlayMaker_Fsm_c *v13; // x0
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v15; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4CEC4A2 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEC4A2 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v13 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v13 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v13->static_fields->EventData;
      if ( !EventData )
        sub_1C7BD40(v13, v6);
      EventData->fields.BoolData = selected;
      v15 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v15 = UICamera_TypeInfo;
      }
      currentTouch = v15->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 7, v17);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSelectionChange(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        System_String_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct System_Int32_array *usage; // x8
  HutongGames_PlayMaker_Fsm_c *v15; // x0
  const MethodInfo *v16; // x2

  if ( (byte_4CEC4A8 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC4A8 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    EventData = (struct HutongGames_PlayMaker_FsmEventData_o *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)EventData & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( !usage )
        goto LABEL_14;
      if ( LODWORD(usage->max_length) <= 0xC )
        sub_1C7BD48(EventData);
      ++usage->m_Items[12];
      v15 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v15 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v15->static_fields->EventData;
      if ( !EventData )
LABEL_14:
        sub_1C7BD40(EventData, v7);
      EventData->fields.StringData = item;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&EventData->fields.StringData,
        (int32_t)item,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 12, v16);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSliderChange(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        float value,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  UIProgressBar_o *v6; // x0
  __int64 v7; // x1
  struct System_Int32_array *usage; // x8
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Object_o *pBar; // x20
  const MethodInfo *v11; // x2
  float v12; // s0
  float v13; // s8
  UnityEngine_Transform_c *v14; // x8

  if ( (byte_4CEC4A7 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CEC4A7 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = (UIProgressBar_o *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)v6 & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( usage )
      {
        if ( LODWORD(usage->max_length) <= 0xB )
          sub_1C7BD48(v6);
        ++usage->m_Items[11];
        v6 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
        if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
          v6 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        klass = v6[1].fields.mTrans->klass;
        if ( klass )
        {
          *(float *)&klass->_1.this_arg.bits = value;
          pBar = (UnityEngine_Object_o *)this->fields._pBar;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(pBar, 0, 0) )
            goto LABEL_21;
          v6 = this->fields._pBar;
          if ( v6 )
          {
            v12 = UIProgressBar__get_value(v6, 0);
            v6 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
            v13 = v12;
            if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
              v6 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
            }
            v14 = v6[1].fields.mTrans->klass;
            if ( v14 )
            {
              *(float *)&v14->_1.this_arg.bits = v13;
LABEL_21:
              NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 11, v11);
              return;
            }
          }
        }
      }
      sub_1C7BD40(v6, v7);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSubmitChange(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  struct UIInput_o *EventData; // x0
  __int64 v5; // x1
  struct System_Int32_array *usage; // x8
  UnityEngine_Object_o *input; // x20
  const MethodInfo *v8; // x2
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_String_o *value; // x20
  HutongGames_PlayMaker_Fsm_c *v16; // x8

  if ( (byte_4CEC4A6 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEC4A6 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    EventData = (struct UIInput_o *)UnityEngine_Object__op_Equality(targetFSM, 0, 0);
    if ( ((unsigned __int8)EventData & 1) == 0 )
    {
      usage = this->fields._usage;
      if ( usage )
      {
        if ( LODWORD(usage->max_length) <= 0xA )
          sub_1C7BD48(EventData);
        ++usage->m_Items[10];
        input = (UnityEngine_Object_o *)this->fields._input;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Inequality(input, 0, 0) )
          goto LABEL_18;
        EventData = this->fields._input;
        if ( EventData )
        {
          value = UIInput__get_value(EventData, 0);
          v16 = HutongGames_PlayMaker_Fsm_TypeInfo;
          if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
            v16 = HutongGames_PlayMaker_Fsm_TypeInfo;
          }
          EventData = (struct UIInput_o *)v16->static_fields->EventData;
          if ( EventData )
          {
            *(_QWORD *)&EventData->fields.activeTextColor.fields.r = value;
            sub_1C7BA8C(
              (GrandQuestFolderBoardItem_o *)&EventData->fields.activeTextColor,
              (int32_t)value,
              v9,
              v10,
              v11,
              v12,
              v13,
              v14);
LABEL_18:
            NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 10, v8);
            return;
          }
        }
      }
      sub_1C7BD40(EventData, v5);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnTooltip(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool show,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  HutongGames_PlayMaker_Fsm_c *v13; // x0
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v15; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v17; // x2

  if ( (byte_4CEC4A5 & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CEC4A5 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v13 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v13 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v13->static_fields->EventData;
      if ( !EventData )
        sub_1C7BD40(v13, v6);
      EventData->fields.BoolData = show;
      v15 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v15 = UICamera_TypeInfo;
      }
      currentTouch = v15->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 13, v17);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__SetCurrentSelection(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  UnityEngine_Object_o *current; // x20
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_Int32_array *usage; // x8
  struct UIPopupList_o *v14; // x8
  System_String_o *mSelectedItem; // x20
  HutongGames_PlayMaker_Fsm_c *v16; // x0
  const MethodInfo *v17; // x2

  if ( (byte_4CEC4AA & 1) == 0 )
  {
    sub_1C7BAE8(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C7BAE8(&Localization_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UIPopupList_TypeInfo);
    byte_4CEC4AA = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      current = (UnityEngine_Object_o *)UIPopupList_TypeInfo->static_fields->current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      EventData = (struct HutongGames_PlayMaker_FsmEventData_o *)UnityEngine_Object__op_Inequality(current, 0, 0);
      if ( ((unsigned __int8)EventData & 1) != 0 )
      {
        usage = this->fields._usage;
        if ( !usage )
          goto LABEL_22;
        if ( LODWORD(usage->max_length) <= 0xC )
          sub_1C7BD48(EventData);
        ++usage->m_Items[12];
        v14 = UIPopupList_TypeInfo->static_fields->current;
        if ( !v14 )
          goto LABEL_22;
        mSelectedItem = v14->fields.mSelectedItem;
        if ( v14->fields.isLocalized )
        {
          if ( !Localization_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          mSelectedItem = Localization__Get(mSelectedItem, 0);
        }
        v16 = HutongGames_PlayMaker_Fsm_TypeInfo;
        if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
          v16 = HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        EventData = v16->static_fields->EventData;
        if ( !EventData )
LABEL_22:
          sub_1C7BD40(EventData, v6);
        EventData->fields.StringData = mSelectedItem;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&EventData->fields.StringData,
          (int32_t)mSelectedItem,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12);
        NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 12, v17);
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
    sub_1C7BD48(this);
  return usage->m_Items[fsmEventDelegate];
}