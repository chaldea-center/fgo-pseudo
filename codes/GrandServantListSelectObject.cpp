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

  v4 = (Il2CppObject *)this;
  if ( (byte_4C3DDE5 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    this = (GrandServantListSelectObject_o *)sub_1C37058(&Method_GrandServantListSelectObject_OnClickServant__);
    byte_4C3DDE5 = 1;
  }
  if ( !touchPress )
    sub_1C372B4(this);
  onClick = touchPress->fields.onClick;
  v6 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, v4, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49258620(onClick, v6, 0);
}


void GrandServantListSelectObject__Initialize(
        GrandServantListSelectObject_o *this,
        PlayMakerFSM_o *fsm,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  EventDelegate_o *v7; // x0
  struct UITouchPress_o *servantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v10; // x21
  struct UITouchPress_o *v11; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v13; // x21
  const MethodInfo *v14; // x2
  struct UITouchPress_array *equipTouchPresses; // x8
  __int64 v16; // x24
  int max_length; // w9
  unsigned int v18; // w20
  __int64 v19; // x8
  System_Collections_Generic_List_EventDelegate__o *v20; // x21
  EventDelegate_Callback_o *v21; // x22
  const MethodInfo *v22; // x2
  struct UITouchPress_array *v23; // x8
  __int64 v24; // x8
  System_Collections_Generic_List_EventDelegate__o *v25; // x21
  EventDelegate_Callback_o *v26; // x0

  if ( (byte_4C3DDE4 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&Method_GrandServantListSelectObject_OnClickServant__);
    sub_1C37058(&Method_GrandServantListSelectObject_OnLongPressServant__);
    byte_4C3DDE4 = 1;
  }
  this->fields.fsm = fsm;
  v7 = (EventDelegate_o *)sub_1C36FFC(&this->fields.fsm, fsm);
  servantTouchPress = this->fields.servantTouchPress;
  this->fields.grandGraphId = grandGraphId;
  if ( !servantTouchPress )
    goto LABEL_18;
  onClick = servantTouchPress->fields.onClick;
  v10 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v10, (Il2CppObject *)this, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  v7 = EventDelegate__Set_49258620(onClick, v10, 0);
  v11 = this->fields.servantTouchPress;
  if ( !v11
    || (onLongPress = v11->fields.onLongPress,
        v13 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v13,
          (Il2CppObject *)this,
          Method_GrandServantListSelectObject_OnLongPressServant__,
          0),
        v7 = EventDelegate__Set_49258620(onLongPress, v13, 0),
        (equipTouchPresses = this->fields.equipTouchPresses) == 0) )
  {
LABEL_18:
    sub_1C372B4(v7);
  }
  v16 = 4;
  while ( 1 )
  {
    max_length = equipTouchPresses->max_length;
    v18 = v16 - 4;
    if ( (int)v16 - 4 >= max_length )
      break;
    if ( v18 >= max_length )
      goto LABEL_20;
    v19 = *((_QWORD *)&equipTouchPresses->obj.klass + v16);
    if ( v19 )
    {
      v20 = *(System_Collections_Generic_List_EventDelegate__o **)(v19 + 32);
      v21 = GrandServantListSelectObject___Initialize_g__CreateOnClickEquip_4_0(this, v18, v14);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      v7 = EventDelegate__Set_49258620(v20, v21, 0);
      v23 = this->fields.equipTouchPresses;
      if ( v23 )
      {
        if ( v18 >= LODWORD(v23->max_length) )
LABEL_20:
          sub_1C372BC(v7);
        v24 = *((_QWORD *)&v23->obj.klass + v16);
        if ( v24 )
        {
          v25 = *(System_Collections_Generic_List_EventDelegate__o **)(v24 + 48);
          v26 = GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(this, v18, v22);
          v7 = EventDelegate__Set_49258620(v25, v26, 0);
          equipTouchPresses = this->fields.equipTouchPresses;
          ++v16;
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

  if ( (byte_4C3DDE8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3453/*"CLICK_EQUIP"*/);
    byte_4C3DDE8 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3453/*"CLICK_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnClickServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3DDE6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3478/*"CLICK_SERVANT"*/);
    byte_4C3DDE6 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3478/*"CLICK_SERVANT"*/, v2);
}


void GrandServantListSelectObject__OnLongPressEquip(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4C3DDE9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8332/*"LONG_PRESS_EQUIP"*/);
    byte_4C3DDE9 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8332/*"LONG_PRESS_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnLongPressServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C3DDE7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8333/*"LONG_PRESS_SERVANT"*/);
    byte_4C3DDE7 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8333/*"LONG_PRESS_SERVANT"*/, v2);
}


void GrandServantListSelectObject__SendEvent(
        GrandServantListSelectObject_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x21
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_4C3DDEA & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11535/*"SELECT_GRAND_GRAPH_ID"*/);
    byte_4C3DDEA = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    m_CancellationTokenSource = this->fields.fsm;
    if ( !m_CancellationTokenSource
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(m_CancellationTokenSource, 0)) == 0
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)m_CancellationTokenSource[1].fields.m_CancellationTokenSource) == 0
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                          (HutongGames_PlayMaker_FsmVariables_o *)m_CancellationTokenSource,
                                                          (System_String_o *)StringLiteral_11535/*"SELECT_GRAND_GRAPH_ID"*/,
                                                          0)) == 0
      || (LODWORD(m_CancellationTokenSource->fields.addEventHandlers) = this->fields.grandGraphId,
          (m_CancellationTokenSource = this->fields.fsm) == 0) )
    {
      sub_1C372B4(m_CancellationTokenSource);
    }
    PlayMakerFSM__SendEvent(m_CancellationTokenSource, eventName, 0);
  }
}


void GrandServantListSelectObject__SetEquipIndex(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x21
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_4C3DDEB & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11526/*"SELECT_EQUIP_INDEX"*/);
    byte_4C3DDEB = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0, 0) )
  {
    m_CancellationTokenSource = this->fields.fsm;
    if ( !m_CancellationTokenSource
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(m_CancellationTokenSource, 0)) == 0
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)m_CancellationTokenSource[1].fields.m_CancellationTokenSource) == 0
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                          (HutongGames_PlayMaker_FsmVariables_o *)m_CancellationTokenSource,
                                                          (System_String_o *)StringLiteral_11526/*"SELECT_EQUIP_INDEX"*/,
                                                          0)) == 0 )
    {
      sub_1C372B4(m_CancellationTokenSource);
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
  EventDelegate_Callback_o *v7; // x19

  if ( (byte_4C3DDEC & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__);
    sub_1C37058(&GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
    byte_4C3DDEC = 1;
  }
  v5 = sub_1C372A4(GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC(v5 + 24, this);
  *(_DWORD *)(v5 + 16) = index;
  v7 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__,
    0);
  return v7;
}


EventDelegate_Callback_o *GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  EventDelegate_Callback_o *v7; // x19

  if ( (byte_4C3DDED & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_Callback_TypeInfo);
    sub_1C37058(&Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__);
    sub_1C37058(&GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
    byte_4C3DDED = 1;
  }
  v5 = sub_1C372A4(GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C36FFC(v5 + 24, this);
  *(_DWORD *)(v5 + 16) = index;
  v7 = (EventDelegate_Callback_o *)sub_1C372A4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v7,
    (Il2CppObject *)v5,
    Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__,
    0);
  return v7;
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  GrandServantListSelectObject__OnLongPressEquip(this->fields.__4__this, this->fields.index, v2);
}