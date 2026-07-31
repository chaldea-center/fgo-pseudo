void GrandServantListSelectObject___ctor(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListSelectObject__AddServantTouchPress(
        GrandServantListSelectObject_o *this,
        UITouchPress_o *touchPress,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2

  v4 = (Il2CppObject *)this;
  if ( (byte_593327F & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    this = (GrandServantListSelectObject_o *)sub_21FFC50(&Method_GrandServantListSelectObject_OnClickServant__);
    byte_593327F = 1;
  }
  if ( !touchPress )
    sub_21FFECC(this, touchPress);
  onClick = touchPress->fields.onClick;
  v6 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, v4, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v7, v8);
  EventDelegate__Set_56117672(onClick, v6, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListSelectObject__Initialize(
        GrandServantListSelectObject_o *this,
        PlayMakerFSM_o *fsm,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  EventDelegate_o *v11; // x0
  __int64 v12; // x1
  struct UITouchPress_o *servantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v15; // x21
  __int64 v16; // x1
  __int64 v17; // x2
  struct UITouchPress_o *v18; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v20; // x21
  const MethodInfo *v21; // x2
  struct UITouchPress_array *equipTouchPresses; // x8
  int32_t v23; // w20
  int32_t max_length; // w9
  UITouchPress_o *v25; // x8
  System_Collections_Generic_List_EventDelegate__o *v26; // x21
  __int64 v27; // x1
  __int64 v28; // x2
  EventDelegate_Callback_o *v29; // x22
  const MethodInfo *v30; // x2
  struct UITouchPress_array *v31; // x8
  UITouchPress_o *v32; // x8
  System_Collections_Generic_List_EventDelegate__o *v33; // x21
  EventDelegate_Callback_o *v34; // x0

  if ( (byte_593327E & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&EventDelegate_TypeInfo);
    sub_21FFC50(&Method_GrandServantListSelectObject_OnClickServant__);
    sub_21FFC50(&Method_GrandServantListSelectObject_OnLongPressServant__);
    byte_593327E = 1;
  }
  this->fields.fsm = fsm;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.fsm,
    (int32_t)fsm,
    *(System_String_o **)&grandGraphId,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  servantTouchPress = this->fields.servantTouchPress;
  this->fields.grandGraphId = grandGraphId;
  if ( !servantTouchPress )
    goto LABEL_18;
  onClick = servantTouchPress->fields.onClick;
  v15 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)this, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v16, v17);
  v11 = EventDelegate__Set_56117672(onClick, v15, 0);
  v18 = this->fields.servantTouchPress;
  if ( !v18
    || (onLongPress = v18->fields.onLongPress,
        v20 = (EventDelegate_Callback_o *)sub_21FFEBC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v20,
          (Il2CppObject *)this,
          Method_GrandServantListSelectObject_OnLongPressServant__,
          0),
        v11 = EventDelegate__Set_56117672(onLongPress, v20, 0),
        (equipTouchPresses = this->fields.equipTouchPresses) == 0) )
  {
LABEL_18:
    sub_21FFECC(v11, v12);
  }
  v23 = 0;
  while ( 1 )
  {
    max_length = equipTouchPresses->max_length;
    if ( v23 >= max_length )
      break;
    if ( v23 >= (unsigned int)max_length )
      goto LABEL_20;
    v25 = equipTouchPresses->m_Items[v23];
    if ( v25 )
    {
      v26 = v25->fields.onClick;
      v29 = GrandServantListSelectObject___Initialize_g__CreateOnClickEquip_4_0(this, v23, v21);
      if ( !*(&EventDelegate_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo, v27, v28);
      v11 = EventDelegate__Set_56117672(v26, v29, 0);
      v31 = this->fields.equipTouchPresses;
      if ( v31 )
      {
        if ( (unsigned int)v23 >= LODWORD(v31->max_length) )
LABEL_20:
          sub_21FFED4(v11);
        v32 = v31->m_Items[v23];
        if ( v32 )
        {
          v33 = v32->fields.onLongPress;
          v34 = GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(this, v23, v30);
          v11 = EventDelegate__Set_56117672(v33, v34, 0);
          equipTouchPresses = this->fields.equipTouchPresses;
          ++v23;
          if ( equipTouchPresses )
            continue;
        }
      }
    }
    goto LABEL_18;
  }
}


void GrandServantListSelectObject__OnClickEquip(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_5933282 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3588/*"CLICK_EQUIP"*/);
    byte_5933282 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3588/*"CLICK_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnClickServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5933280 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3615/*"CLICK_SERVANT"*/);
    byte_5933280 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3615/*"CLICK_SERVANT"*/, v2);
}


void GrandServantListSelectObject__OnLongPressEquip(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_5933283 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8668/*"LONG_PRESS_EQUIP"*/);
    byte_5933283 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8668/*"LONG_PRESS_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnLongPressServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_5933281 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8669/*"LONG_PRESS_SERVANT"*/);
    byte_5933281 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8669/*"LONG_PRESS_SERVANT"*/, v2);
}


void GrandServantListSelectObject__SendEvent(
        GrandServantListSelectObject_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x21
  __int64 v6; // x1
  PlayMakerFSM_o *m_CancellationTokenSource; // x0
  PlayMakerFSM_o *v8; // x8

  if ( (byte_5933284 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12020/*"SELECT_GRAND_GRAPH_ID"*/);
    byte_5933284 = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, eventName, method);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    m_CancellationTokenSource = this->fields.fsm;
    if ( !m_CancellationTokenSource
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(m_CancellationTokenSource, 0)) == 0
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)m_CancellationTokenSource[1].fields.m_CancellationTokenSource) == 0
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                          (HutongGames_PlayMaker_FsmVariables_o *)m_CancellationTokenSource,
                                                          (System_String_o *)StringLiteral_12020/*"SELECT_GRAND_GRAPH_ID"*/,
                                                          0)) == 0
      || (v8 = this->fields.fsm,
          LODWORD(m_CancellationTokenSource->fields.addEventHandlers) = this->fields.grandGraphId,
          !v8) )
    {
      sub_21FFECC(m_CancellationTokenSource, v6);
    }
    PlayMakerFSM__SendEvent(v8, eventName, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListSelectObject__SetEquipIndex(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x21
  __int64 v6; // x1
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_5933285 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12011/*"SELECT_EQUIP_INDEX"*/);
    byte_5933285 = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    m_CancellationTokenSource = this->fields.fsm;
    if ( !m_CancellationTokenSource
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(m_CancellationTokenSource, 0)) == 0
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)m_CancellationTokenSource[1].fields.m_CancellationTokenSource) == 0
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                          (HutongGames_PlayMaker_FsmVariables_o *)m_CancellationTokenSource,
                                                          (System_String_o *)StringLiteral_12011/*"SELECT_EQUIP_INDEX"*/,
                                                          0)) == 0 )
    {
      sub_21FFECC(m_CancellationTokenSource, v6);
    }
    LODWORD(m_CancellationTokenSource->fields.addEventHandlers) = index;
  }
}


EventDelegate_Callback_o *GrandServantListSelectObject___Initialize_g__CreateOnClickEquip_4_0(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  EventDelegate_Callback_c *v14; // x0
  EventDelegate_Callback_o *v15; // x19

  if ( (byte_5933286 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__);
    sub_21FFC50(&GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
    byte_5933286 = 1;
  }
  v5 = sub_21FFEBC(GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = EventDelegate_Callback_TypeInfo;
  *(_DWORD *)(v5 + 16) = index;
  v15 = (EventDelegate_Callback_o *)sub_21FFEBC(v14);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__,
    0);
  return v15;
}


EventDelegate_Callback_o *GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  EventDelegate_Callback_c *v14; // x0
  EventDelegate_Callback_o *v15; // x19

  if ( (byte_5933287 & 1) == 0 )
  {
    sub_21FFC50(&EventDelegate_Callback_TypeInfo);
    sub_21FFC50(&Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__);
    sub_21FFC50(&GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
    byte_5933287 = 1;
  }
  v5 = sub_21FFEBC(GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  v14 = EventDelegate_Callback_TypeInfo;
  *(_DWORD *)(v5 + 16) = index;
  v15 = (EventDelegate_Callback_o *)sub_21FFEBC(v14);
  EventDelegate_Callback___ctor(
    v15,
    (Il2CppObject *)v5,
    Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__,
    0);
  return v15;
}


void GrandServantListSelectObject___c__DisplayClass4_0___ctor(
        GrandServantListSelectObject___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListSelectObject___c__DisplayClass4_0___Initialize_b__2(
        GrandServantListSelectObject___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  GrandServantListSelectObject__OnClickEquip(this->fields.__4__this, this->fields.index, v2);
}


void GrandServantListSelectObject___c__DisplayClass4_1___ctor(
        GrandServantListSelectObject___c__DisplayClass4_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void GrandServantListSelectObject___c__DisplayClass4_1___Initialize_b__3(
        GrandServantListSelectObject___c__DisplayClass4_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_21FFECC(this, method);
  GrandServantListSelectObject__OnLongPressEquip(this->fields.__4__this, this->fields.index, v2);
}