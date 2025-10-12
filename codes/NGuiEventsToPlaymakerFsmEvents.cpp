void NGuiEventsToPlaymakerFsmEvents___ctor(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        int32_t fsmEventDelegate,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  System_Enum_o *v10; // x0
  const MethodInfo *v11; // x1
  NGuiEventsToPlaymakerFsmEvents_o *FsmEventEnumValue; // x0
  const MethodInfo *v13; // x3
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C357F9 & 1) == 0 )
  {
    sub_1C32C20(&NGuiPlayMakerDelegates_TypeInfo);
    byte_4C357F9 = 1;
  }
  v15 = fsmEventDelegate;
  v10 = (System_Enum_o *)j_il2cpp_value_box_0(
                           NGuiPlayMakerDelegates_TypeInfo,
                           &v15,
                           *(_QWORD *)&fsmEventDelegate,
                           method,
                           v4,
                           v5,
                           v6,
                           v7);
  FsmEventEnumValue = (NGuiEventsToPlaymakerFsmEvents_o *)NGuiPlayMakerProxy__GetFsmEventEnumValue(v10, v11);
  return NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_38357340(
           FsmEventEnumValue,
           fsm,
           (System_String_o *)FsmEventEnumValue,
           v13);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_38357340(
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
      this = (NGuiEventsToPlaymakerFsmEvents_o *)System_String__Equals_63553848((System_String_o *)this, fsmEvent, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
    }
    while ( (int)++v8 < m_CancellationTokenSource );
  }
  this = (NGuiEventsToPlaymakerFsmEvents_o *)PlayMakerFSM__get_FsmStates(fsm, 0);
  if ( !this )
LABEL_26:
    sub_1C32E7C(this);
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
      this = (NGuiEventsToPlaymakerFsmEvents_o *)System_String__Equals_63553848((System_String_o *)this, fsmEvent, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return 1;
      v14 = *(_DWORD *)(v13 + 24);
      if ( (int)++v15 >= v14 )
        goto LABEL_23;
    }
LABEL_27:
    sub_1C32E84(this);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        int32_t fsmEventDelegate,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  System_Enum_o *v11; // x0
  const MethodInfo *v12; // x1
  System_String_o *FsmEventEnumValue; // x0
  const MethodInfo *v14; // x3
  int32_t v16; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C357F8 & 1) == 0 )
  {
    sub_1C32C20(&NGuiPlayMakerDelegates_TypeInfo);
    byte_4C357F8 = 1;
  }
  v16 = fsmEventDelegate;
  v11 = (System_Enum_o *)j_il2cpp_value_box_0(
                           NGuiPlayMakerDelegates_TypeInfo,
                           &v16,
                           *(_QWORD *)&fsmEventDelegate,
                           method,
                           v4,
                           v5,
                           v6,
                           v7);
  FsmEventEnumValue = NGuiPlayMakerProxy__GetFsmEventEnumValue(v11, v12);
  return NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation_38357184(this, fsm, FsmEventEnumValue, v14);
}


bool NGuiEventsToPlaymakerFsmEvents__DoesTargetMissEventImplementation_38357184(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        PlayMakerFSM_o *fsm,
        System_String_o *fsmEvent,
        const MethodInfo *method)
{
  HutongGames_PlayMaker_FsmEvent_array *DoesTargetImplementsEvent_38357340; // x0
  int max_length; // w8
  HutongGames_PlayMaker_FsmEvent_array *v8; // x20
  unsigned int v9; // w21
  HutongGames_PlayMaker_FsmEvent_o *v10; // x8

  DoesTargetImplementsEvent_38357340 = (HutongGames_PlayMaker_FsmEvent_array *)NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent_38357340(
                                                                                 this,
                                                                                 fsm,
                                                                                 fsmEvent,
                                                                                 method);
  if ( ((unsigned __int8)DoesTargetImplementsEvent_38357340 & 1) == 0 )
  {
    if ( !fsm )
      goto LABEL_14;
    DoesTargetImplementsEvent_38357340 = PlayMakerFSM__get_FsmEvents(fsm, 0);
    if ( !DoesTargetImplementsEvent_38357340 )
      goto LABEL_14;
    max_length = DoesTargetImplementsEvent_38357340->max_length;
    v8 = DoesTargetImplementsEvent_38357340;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C32E84(DoesTargetImplementsEvent_38357340);
        v10 = v8->m_Items[v9];
        if ( !v10 )
          break;
        DoesTargetImplementsEvent_38357340 = (HutongGames_PlayMaker_FsmEvent_array *)v10->fields.name;
        if ( !DoesTargetImplementsEvent_38357340 )
          break;
        DoesTargetImplementsEvent_38357340 = (HutongGames_PlayMaker_FsmEvent_array *)System_String__Equals_63553848(
                                                                                       (System_String_o *)DoesTargetImplementsEvent_38357340,
                                                                                       fsmEvent,
                                                                                       0);
        if ( ((unsigned __int8)DoesTargetImplementsEvent_38357340 & 1) == 0 )
        {
          max_length = v8->max_length;
          if ( (int)++v9 < max_length )
            continue;
        }
        return (unsigned __int8)DoesTargetImplementsEvent_38357340 & 1;
      }
LABEL_14:
      sub_1C32E7C(DoesTargetImplementsEvent_38357340);
    }
  }
  LOBYTE(DoesTargetImplementsEvent_38357340) = 0;
  return (unsigned __int8)DoesTargetImplementsEvent_38357340 & 1;
}


void NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        int32_t event,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *customEventsKeys; // x0
  bool v6; // w0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  PlayMakerFSM_o *targetFSM; // x20
  struct System_Collections_Generic_List_string__o *customEventsValues; // x21
  System_Enum_o *v15; // x0
  const MethodInfo *v16; // x1
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C357FA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__IndexOf__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&NGuiPlayMakerDelegates_TypeInfo);
    byte_4C357FA = 1;
  }
  customEventsKeys = (System_Collections_Generic_List_T__o *)this->fields.customEventsKeys;
  if ( !customEventsKeys )
    goto LABEL_11;
  v6 = System_Collections_Generic_List_Int32Enum___Contains(
         customEventsKeys,
         event,
         (const MethodInfo_377E33C *)Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__Contains__);
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
                                                                   (const MethodInfo_377EC40 *)Method_System_Collections_Generic_List_NGuiPlayMakerDelegates__IndexOf__);
      if ( customEventsValues )
      {
        customEventsKeys = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_object___get_Item(
                                                                     (System_Collections_Generic_List_object__o *)customEventsValues,
                                                                     (int32_t)customEventsKeys,
                                                                     (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( targetFSM )
        {
          PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)customEventsKeys, 0);
          return;
        }
      }
    }
LABEL_11:
    sub_1C32E7C(customEventsKeys);
  }
  v17 = event;
  v15 = (System_Enum_o *)j_il2cpp_value_box_0(NGuiPlayMakerDelegates_TypeInfo, &v17, v7, v8, v9, v10, v11, v12);
  customEventsKeys = (System_Collections_Generic_List_T__o *)NGuiPlayMakerProxy__GetFsmEventEnumValue(v15, v16);
  if ( !targetFSM )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(targetFSM, (System_String_o *)customEventsKeys, 0);
}


void NGuiEventsToPlaymakerFsmEvents__OnChange(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  void *value; // x0
  struct System_Int32_array *usage; // x8
  UnityEngine_Object_o *input; // x20
  __int64 v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *toggle; // x20
  const MethodInfo *v11; // x2
  __int64 v12; // x20

  if ( (byte_4C35805 & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35805 = 1;
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
        sub_1C32E84(value);
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
        v7 = **((_QWORD **)value + 23);
        value = UIInput__get_value(this->fields._input, 0);
        if ( !v7 )
          goto LABEL_27;
        *(_QWORD *)(v7 + 80) = value;
        sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 80), (int32_t)value, v8, v9);
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
        v12 = **((_QWORD **)value + 23);
        value = (void *)UIToggle__get_value(this->fields._toggle, 0);
        if ( v12 )
        {
          *(_BYTE *)(v12 + 48) = (unsigned __int8)value & 1;
LABEL_26:
          NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 14, v11);
          return;
        }
      }
LABEL_27:
      sub_1C32E7C(value);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnClick(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  _BOOL8 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Int32_array *usage; // x8
  UICamera_c *v8; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4C357FB & 1) == 0 )
  {
    sub_1C32C20(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C357FB = 1;
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
        sub_1C32E7C(v4);
      if ( !LODWORD(usage->max_length) )
        sub_1C32E84(v4);
      ++usage->m_Items[0];
      v8 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v8 = UICamera_TypeInfo;
      }
      currentTouch = v8->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v5,
        v6);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 0, v10);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  HutongGames_PlayMaker_Fsm_c *v9; // x0
  float *EventData; // x8
  UICamera_c *v11; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v13; // x2

  y = delta.fields.y;
  x = delta.fields.x;
  if ( (byte_4C357FF & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C357FF = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v9 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v9 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = (float *)v9->static_fields->EventData;
      if ( !EventData )
        sub_1C32E7C(v9);
      EventData[17] = x;
      EventData[18] = y;
      EventData[19] = 0.0;
      v11 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = UICamera_TypeInfo;
      }
      currentTouch = v11->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v7,
        v8);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 8, v13);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnDrop(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        UnityEngine_GameObject_o *go,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  HutongGames_PlayMaker_Fsm_c *v8; // x0
  CGThumbnailListItem_o *EventData; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UICamera_c *v12; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v14; // x2

  if ( (byte_4C35800 & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C35800 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = (CGThumbnailListItem_o *)v8->static_fields->EventData;
      if ( !EventData )
        sub_1C32E7C(0);
      EventData[1].klass = (CGThumbnailListItem_c *)go;
      sub_1C32BC4(EventData + 1, (int32_t)go, v6, v7);
      v12 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v12 = UICamera_TypeInfo;
      }
      currentTouch = v12->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v10,
        v11);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 9, v14);
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
  struct System_Int32_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *targetFSM; // x21
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x20
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *input; // x20
  EventDelegate_o *v22; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct UIInput_o *v25; // x8
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  const MethodInfo *v30; // x3
  Il2CppObject *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *pBar; // x20
  EventDelegate_o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct UIProgressBar_o *v38; // x8
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x8
  Il2CppObject *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UnityEngine_Object_o *v46; // x20
  EventDelegate_o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct UIInput_o *v50; // x8
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass **v54; // x8
  Il2CppObject *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  UnityEngine_Object_o *toggle; // x20
  EventDelegate_o *v59; // x20
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct UIToggle_o *v62; // x8
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x8

  if ( (byte_4C357F7 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIInput___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_UIToggle___);
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&EventDelegate_TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_EventDelegate__Add__);
    sub_1C32C20(&NGuiPlayMakerDelegates_var);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Type_TypeInfo);
    sub_1C32C20(&StringLiteral_9967/*"OnSubmitChange"*/);
    sub_1C32C20(&StringLiteral_9962/*"OnSliderChange"*/);
    sub_1C32C20(&StringLiteral_9834/*"OnChange"*/);
    byte_4C357F7 = 1;
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
    v8 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, (unsigned int)Names->fields._size);
    this->fields._usage = v8;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._usage, (int32_t)v8, v9, v10);
  }
  targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_PlayMakerFSM___);
    this->fields.targetFSM = (struct PlayMakerFSM_o *)Component_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetFSM, (int32_t)Component_object, v13, v14);
  }
  v15 = (UnityEngine_Object_o *)this->fields.targetFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v15, 0, 0) )
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
  if ( NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 10, v16) )
  {
    v18 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
    this->fields._input = (struct UIInput_o *)v18;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._input, (int32_t)v18, v19, v20);
    input = (UnityEngine_Object_o *)this->fields._input;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(input, 0, 0) )
    {
      v22 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
      EventDelegate___ctor(v22, 0);
      if ( !v22 )
        goto LABEL_63;
      EventDelegate__set_target(v22, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v22, (System_String_o *)StringLiteral_9967/*"OnSubmitChange"*/, 0);
      v25 = this->fields._input;
      if ( !v25 )
        goto LABEL_63;
      Names = (System_Collections_Generic_List_object__o *)v25->fields.onSubmit;
      if ( !Names )
        goto LABEL_63;
      items = Names->fields._items;
      v27 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++Names->fields._version;
      if ( !items )
        goto LABEL_63;
      size = Names->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Names,
          (Il2CppObject *)v22,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        Names->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v22;
        sub_1C32BC4((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v22, v23, v24);
      }
    }
  }
  if ( NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 11, v17) )
  {
    v31 = UnityEngine_Component__GetComponent_object_(
            (UnityEngine_Component_o *)this,
            (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIProgressBar___);
    this->fields._pBar = (struct UIProgressBar_o *)v31;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._pBar, (int32_t)v31, v32, v33);
    pBar = (UnityEngine_Object_o *)this->fields._pBar;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pBar, 0, 0) )
    {
      v35 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
      EventDelegate___ctor(v35, 0);
      if ( !v35 )
        goto LABEL_63;
      EventDelegate__set_target(v35, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v35, (System_String_o *)StringLiteral_9962/*"OnSliderChange"*/, 0);
      v38 = this->fields._pBar;
      if ( !v38 )
        goto LABEL_63;
      Names = (System_Collections_Generic_List_object__o *)v38->fields.onChange;
      if ( !Names )
        goto LABEL_63;
      v39 = Names->fields._items;
      v40 = Method_System_Collections_Generic_List_EventDelegate__Add__;
      ++Names->fields._version;
      if ( !v39 )
        goto LABEL_63;
      v41 = Names->fields._size;
      if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          Names,
          (Il2CppObject *)v35,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &v39->obj.klass + v41;
        Names->fields._size = v41 + 1;
        v42[4] = (Il2CppClass *)v35;
        sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v35, v36, v37);
      }
    }
  }
  if ( !NGuiEventsToPlaymakerFsmEvents__DoesTargetImplementsEvent(this, this->fields.targetFSM, 14, v30) )
    return;
  v43 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIInput___);
  this->fields._input = (struct UIInput_o *)v43;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._input, (int32_t)v43, v44, v45);
  v46 = (UnityEngine_Object_o *)this->fields._input;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v46, 0, 0) )
  {
    v47 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
    EventDelegate___ctor(v47, 0);
    if ( !v47 )
      goto LABEL_63;
    EventDelegate__set_target(v47, (UnityEngine_MonoBehaviour_o *)this, 0);
    EventDelegate__set_methodName(v47, (System_String_o *)StringLiteral_9834/*"OnChange"*/, 0);
    v50 = this->fields._input;
    if ( !v50 )
      goto LABEL_63;
    Names = (System_Collections_Generic_List_object__o *)v50->fields.onChange;
    if ( !Names )
      goto LABEL_63;
    v51 = Names->fields._items;
    v52 = Method_System_Collections_Generic_List_EventDelegate__Add__;
    ++Names->fields._version;
    if ( !v51 )
      goto LABEL_63;
    v53 = Names->fields._size;
    if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Names,
        (Il2CppObject *)v47,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
    }
    else
    {
      v54 = &v51->obj.klass + v53;
      Names->fields._size = v53 + 1;
      v54[4] = (Il2CppClass *)v47;
      sub_1C32BC4((CGThumbnailListItem_o *)(v54 + 4), (int32_t)v47, v48, v49);
    }
  }
  v55 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_UIToggle___);
  this->fields._toggle = (struct UIToggle_o *)v55;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._toggle, (int32_t)v55, v56, v57);
  toggle = (UnityEngine_Object_o *)this->fields._toggle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(toggle, 0, 0) )
  {
    v59 = (EventDelegate_o *)sub_1C32E6C(EventDelegate_TypeInfo);
    EventDelegate___ctor(v59, 0);
    if ( v59 )
    {
      EventDelegate__set_target(v59, (UnityEngine_MonoBehaviour_o *)this, 0);
      EventDelegate__set_methodName(v59, (System_String_o *)StringLiteral_9834/*"OnChange"*/, 0);
      v62 = this->fields._toggle;
      if ( v62 )
      {
        Names = (System_Collections_Generic_List_object__o *)v62->fields.onChange;
        if ( Names )
        {
          v63 = Names->fields._items;
          v64 = Method_System_Collections_Generic_List_EventDelegate__Add__;
          ++Names->fields._version;
          if ( v63 )
          {
            v65 = Names->fields._size;
            if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                Names,
                (Il2CppObject *)v59,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v66 = &v63->obj.klass + v65;
              Names->fields._size = v65 + 1;
              v66[4] = (Il2CppClass *)v59;
              sub_1C32BC4((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v59, v60, v61);
            }
            return;
          }
        }
      }
    }
LABEL_63:
    sub_1C32E7C(Names);
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnHover(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool isOver,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  HutongGames_PlayMaker_Fsm_c *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *usage; // x8
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v11; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *v16; // x8

  if ( (byte_4C357FC & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C357FC = 1;
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
      v11 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = UICamera_TypeInfo;
      }
      currentTouch = v11->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v7,
        v8);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 1, v13);
      if ( isOver )
      {
        NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 2, v14);
        v15 = this->fields._usage;
        if ( v15 )
        {
          if ( LODWORD(v15->max_length) > 2 )
          {
            ++v15->m_Items[2];
            return;
          }
LABEL_23:
          sub_1C32E84(v6);
        }
LABEL_22:
        sub_1C32E7C(v6);
      }
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 3, v14);
      v16 = this->fields._usage;
      if ( !v16 )
        goto LABEL_22;
      if ( LODWORD(v16->max_length) <= 3 )
        goto LABEL_23;
      ++v16->m_Items[3];
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *usage; // x8
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v11; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x2
  struct System_Int32_array *v15; // x8
  struct System_Int32_array *v16; // x8

  if ( (byte_4C357FD & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C357FD = 1;
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
      v11 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v11 = UICamera_TypeInfo;
      }
      currentTouch = v11->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v7,
        v8);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 4, v13);
      if ( pressed )
      {
        NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 6, v14);
        v15 = this->fields._usage;
        if ( v15 )
        {
          if ( LODWORD(v15->max_length) > 6 )
          {
            ++v15->m_Items[6];
            return;
          }
LABEL_23:
          sub_1C32E84(v6);
        }
LABEL_22:
        sub_1C32E7C(v6);
      }
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 5, v14);
      v16 = this->fields._usage;
      if ( !v16 )
        goto LABEL_22;
      if ( LODWORD(v16->max_length) <= 5 )
        goto LABEL_23;
      ++v16->m_Items[5];
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSelect(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool selected,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  HutongGames_PlayMaker_Fsm_c *v8; // x0
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C357FE & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C357FE = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v8->static_fields->EventData;
      if ( !EventData )
        sub_1C32E7C(v8);
      EventData->fields.BoolData = selected;
      v10 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v10 = UICamera_TypeInfo;
      }
      currentTouch = v10->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v6,
        v7);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 7, v12);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array *usage; // x8
  HutongGames_PlayMaker_Fsm_c *v10; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4C35804 & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35804 = 1;
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
        sub_1C32E84(EventData);
      ++usage->m_Items[12];
      v10 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v10 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v10->static_fields->EventData;
      if ( !EventData )
LABEL_14:
        sub_1C32E7C(EventData);
      EventData->fields.StringData = item;
      sub_1C32BC4((CGThumbnailListItem_o *)&EventData->fields.StringData, (int32_t)item, v7, v8);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 12, v11);
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
  struct System_Int32_array *usage; // x8
  UnityEngine_Transform_c *klass; // x8
  UnityEngine_Object_o *pBar; // x20
  const MethodInfo *v10; // x2
  float v11; // s0
  float v12; // s8
  UnityEngine_Transform_c *v13; // x8

  if ( (byte_4C35803 & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C35803 = 1;
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
          sub_1C32E84(v6);
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
            v11 = UIProgressBar__get_value(v6, 0);
            v6 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
            v12 = v11;
            if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
              v6 = (UIProgressBar_o *)HutongGames_PlayMaker_Fsm_TypeInfo;
            }
            v13 = v6[1].fields.mTrans->klass;
            if ( v13 )
            {
              *(float *)&v13->_1.this_arg.bits = v12;
LABEL_21:
              NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 11, v10);
              return;
            }
          }
        }
      }
      sub_1C32E7C(v6);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnSubmitChange(NGuiEventsToPlaymakerFsmEvents_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x20
  struct UIInput_o *EventData; // x0
  struct System_Int32_array *usage; // x8
  UnityEngine_Object_o *input; // x20
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_String_o *value; // x20
  HutongGames_PlayMaker_Fsm_c *v11; // x8

  if ( (byte_4C35802 & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C35802 = 1;
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
          sub_1C32E84(EventData);
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
          v11 = HutongGames_PlayMaker_Fsm_TypeInfo;
          if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
            v11 = HutongGames_PlayMaker_Fsm_TypeInfo;
          }
          EventData = (struct UIInput_o *)v11->static_fields->EventData;
          if ( EventData )
          {
            *(_QWORD *)&EventData->fields.activeTextColor.fields.r = value;
            sub_1C32BC4((CGThumbnailListItem_o *)&EventData->fields.activeTextColor, (int32_t)value, v8, v9);
LABEL_18:
            NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 10, v7);
            return;
          }
        }
      }
      sub_1C32E7C(EventData);
    }
  }
}


void NGuiEventsToPlaymakerFsmEvents__OnTooltip(
        NGuiEventsToPlaymakerFsmEvents_o *this,
        bool show,
        const MethodInfo *method)
{
  UnityEngine_Object_o *targetFSM; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  HutongGames_PlayMaker_Fsm_c *v8; // x0
  struct HutongGames_PlayMaker_FsmEventData_o *EventData; // x8
  UICamera_c *v10; // x0
  struct UICamera_MouseOrTouch_o *currentTouch; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C35801 & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&NGuiEventsToPlaymakerFsmEvents_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UICamera_TypeInfo);
    byte_4C35801 = 1;
  }
  if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0) )
  {
    targetFSM = (UnityEngine_Object_o *)this->fields.targetFSM;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(targetFSM, 0, 0) )
    {
      v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
      if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
        v8 = HutongGames_PlayMaker_Fsm_TypeInfo;
      }
      EventData = v8->static_fields->EventData;
      if ( !EventData )
        sub_1C32E7C(v8);
      EventData->fields.BoolData = show;
      v10 = UICamera_TypeInfo;
      if ( !UICamera_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
        v10 = UICamera_TypeInfo;
      }
      currentTouch = v10->static_fields->currentTouch;
      NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields->currentTouch = currentTouch;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)NGuiEventsToPlaymakerFsmEvents_TypeInfo->static_fields,
        (int32_t)currentTouch,
        v6,
        v7);
      NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 13, v12);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Int32_array *usage; // x8
  struct UIPopupList_o *v9; // x8
  System_String_o *mSelectedItem; // x20
  HutongGames_PlayMaker_Fsm_c *v11; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4C35806 & 1) == 0 )
  {
    sub_1C32C20(&HutongGames_PlayMaker_Fsm_TypeInfo);
    sub_1C32C20(&Localization_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&UIPopupList_TypeInfo);
    byte_4C35806 = 1;
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
          sub_1C32E84(EventData);
        ++usage->m_Items[12];
        v9 = UIPopupList_TypeInfo->static_fields->current;
        if ( !v9 )
          goto LABEL_22;
        mSelectedItem = v9->fields.mSelectedItem;
        if ( v9->fields.isLocalized )
        {
          if ( !Localization_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(Localization_TypeInfo);
          mSelectedItem = Localization__Get(mSelectedItem, 0);
        }
        v11 = HutongGames_PlayMaker_Fsm_TypeInfo;
        if ( !HutongGames_PlayMaker_Fsm_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HutongGames_PlayMaker_Fsm_TypeInfo);
          v11 = HutongGames_PlayMaker_Fsm_TypeInfo;
        }
        EventData = v11->static_fields->EventData;
        if ( !EventData )
LABEL_22:
          sub_1C32E7C(EventData);
        EventData->fields.StringData = mSelectedItem;
        sub_1C32BC4((CGThumbnailListItem_o *)&EventData->fields.StringData, (int32_t)mSelectedItem, v6, v7);
        NGuiEventsToPlaymakerFsmEvents__FireNGUIPlayMakerEvent(this, 12, v12);
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
    sub_1C32E84(this);
  return usage->m_Items[fsmEventDelegate];
}