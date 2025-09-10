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
  if ( (byte_4C2212C & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    this = (GrandServantListSelectObject_o *)sub_1C2D490(&Method_GrandServantListSelectObject_OnClickServant__);
    byte_4C2212C = 1;
  }
  if ( !touchPress )
    sub_1C2D6EC(this, touchPress);
  onClick = touchPress->fields.onClick;
  v6 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, v4, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49155444(onClick, v6, 0);
}


void GrandServantListSelectObject__Initialize(
        GrandServantListSelectObject_o *this,
        PlayMakerFSM_o *fsm,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  EventDelegate_o *v7; // x0
  __int64 v8; // x1
  struct UITouchPress_o *servantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v11; // x21
  struct UITouchPress_o *v12; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v14; // x21
  const MethodInfo *v15; // x2
  struct UITouchPress_array *equipTouchPresses; // x8
  __int64 v17; // x24
  int max_length; // w9
  unsigned int v19; // w20
  __int64 v20; // x8
  System_Collections_Generic_List_EventDelegate__o *v21; // x21
  EventDelegate_Callback_o *v22; // x22
  struct UITouchPress_array *v23; // x8
  __int64 v24; // x8
  System_Collections_Generic_List_EventDelegate__o *v25; // x21
  EventDelegate_Callback_o *v26; // x0

  if ( (byte_4C2212B & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&EventDelegate_TypeInfo);
    sub_1C2D490(&Method_GrandServantListSelectObject_OnClickServant__);
    sub_1C2D490(&Method_GrandServantListSelectObject_OnLongPressServant__);
    byte_4C2212B = 1;
  }
  this->fields.fsm = fsm;
  v7 = (EventDelegate_o *)sub_1C2D434(&this->fields.fsm);
  servantTouchPress = this->fields.servantTouchPress;
  this->fields.grandGraphId = grandGraphId;
  if ( !servantTouchPress )
    goto LABEL_18;
  onClick = servantTouchPress->fields.onClick;
  v11 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  v7 = EventDelegate__Set_49155444(onClick, v11, 0);
  v12 = this->fields.servantTouchPress;
  if ( !v12
    || (onLongPress = v12->fields.onLongPress,
        v14 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v14,
          (Il2CppObject *)this,
          Method_GrandServantListSelectObject_OnLongPressServant__,
          0),
        v7 = EventDelegate__Set_49155444(onLongPress, v14, 0),
        (equipTouchPresses = this->fields.equipTouchPresses) == 0) )
  {
LABEL_18:
    sub_1C2D6EC(v7, v8);
  }
  v17 = 4;
  while ( 1 )
  {
    max_length = equipTouchPresses->max_length;
    v19 = v17 - 4;
    if ( (int)v17 - 4 >= max_length )
      break;
    if ( v19 >= max_length )
      goto LABEL_20;
    v20 = *((_QWORD *)&equipTouchPresses->obj.klass + v17);
    if ( v20 )
    {
      v21 = *(System_Collections_Generic_List_EventDelegate__o **)(v20 + 32);
      v22 = GrandServantListSelectObject___Initialize_g__CreateOnClickEquip_4_0(this, v19, v15);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      v7 = EventDelegate__Set_49155444(v21, v22, 0);
      v23 = this->fields.equipTouchPresses;
      if ( v23 )
      {
        if ( v19 >= LODWORD(v23->max_length) )
LABEL_20:
          sub_1C2D6F4(v7, v8, v15);
        v24 = *((_QWORD *)&v23->obj.klass + v17);
        if ( v24 )
        {
          v25 = *(System_Collections_Generic_List_EventDelegate__o **)(v24 + 48);
          v26 = GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(this, v19, v15);
          v7 = EventDelegate__Set_49155444(v25, v26, 0);
          equipTouchPresses = this->fields.equipTouchPresses;
          ++v17;
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

  if ( (byte_4C2212F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3446/*"CLICK_EQUIP"*/);
    byte_4C2212F = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3446/*"CLICK_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnClickServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C2212D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3471/*"CLICK_SERVANT"*/);
    byte_4C2212D = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3471/*"CLICK_SERVANT"*/, v2);
}


void GrandServantListSelectObject__OnLongPressEquip(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4C22130 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8325/*"LONG_PRESS_EQUIP"*/);
    byte_4C22130 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8325/*"LONG_PRESS_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnLongPressServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C2212E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8326/*"LONG_PRESS_SERVANT"*/);
    byte_4C2212E = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8326/*"LONG_PRESS_SERVANT"*/, v2);
}


void GrandServantListSelectObject__SendEvent(
        GrandServantListSelectObject_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x21
  __int64 v6; // x1
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_4C22131 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11528/*"SELECT_GRAND_GRAPH_ID"*/);
    byte_4C22131 = 1;
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
                                                          (System_String_o *)StringLiteral_11528/*"SELECT_GRAND_GRAPH_ID"*/,
                                                          0)) == 0
      || (LODWORD(m_CancellationTokenSource->fields.addEventHandlers) = this->fields.grandGraphId,
          (m_CancellationTokenSource = this->fields.fsm) == 0) )
    {
      sub_1C2D6EC(m_CancellationTokenSource, v6);
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
  __int64 v6; // x1
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_4C22132 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11519/*"SELECT_EQUIP_INDEX"*/);
    byte_4C22132 = 1;
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
                                                          (System_String_o *)StringLiteral_11519/*"SELECT_EQUIP_INDEX"*/,
                                                          0)) == 0 )
    {
      sub_1C2D6EC(m_CancellationTokenSource, v6);
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
  EventDelegate_Callback_o *v8; // x19

  if ( (byte_4C22133 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__);
    sub_1C2D490(&GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
    byte_4C22133 = 1;
  }
  v5 = sub_1C2D6DC(GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434(v5 + 24);
  *(_DWORD *)(v5 + 16) = index;
  v8 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v8,
    (Il2CppObject *)v5,
    Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__,
    0);
  return v8;
}


EventDelegate_Callback_o *GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  EventDelegate_Callback_o *v8; // x19

  if ( (byte_4C22134 & 1) == 0 )
  {
    sub_1C2D490(&EventDelegate_Callback_TypeInfo);
    sub_1C2D490(&Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__);
    sub_1C2D490(&GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
    byte_4C22134 = 1;
  }
  v5 = sub_1C2D6DC(GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C2D434(v5 + 24);
  *(_DWORD *)(v5 + 16) = index;
  v8 = (EventDelegate_Callback_o *)sub_1C2D6DC(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v8,
    (Il2CppObject *)v5,
    Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__,
    0);
  return v8;
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
    sub_1C2D6EC(this, method);
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
    sub_1C2D6EC(this, method);
  GrandServantListSelectObject__OnLongPressEquip(this->fields.__4__this, this->fields.index, v2);
}