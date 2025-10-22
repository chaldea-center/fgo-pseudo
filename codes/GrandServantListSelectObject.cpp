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
  if ( (byte_4C51B65 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&EventDelegate_TypeInfo);
    this = (GrandServantListSelectObject_o *)sub_1C3E564(&Method_GrandServantListSelectObject_OnClickServant__);
    byte_4C51B65 = 1;
  }
  if ( !touchPress )
    sub_1C3E7C0(this, touchPress);
  onClick = touchPress->fields.onClick;
  v6 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, v4, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49331860(onClick, v6, 0);
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
  const MethodInfo *v23; // x2
  struct UITouchPress_array *v24; // x8
  __int64 v25; // x8
  System_Collections_Generic_List_EventDelegate__o *v26; // x21
  EventDelegate_Callback_o *v27; // x0

  if ( (byte_4C51B64 & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&EventDelegate_TypeInfo);
    sub_1C3E564(&Method_GrandServantListSelectObject_OnClickServant__);
    sub_1C3E564(&Method_GrandServantListSelectObject_OnLongPressServant__);
    byte_4C51B64 = 1;
  }
  this->fields.fsm = fsm;
  v7 = (EventDelegate_o *)sub_1C3E508(&this->fields.fsm, fsm);
  servantTouchPress = this->fields.servantTouchPress;
  this->fields.grandGraphId = grandGraphId;
  if ( !servantTouchPress )
    goto LABEL_18;
  onClick = servantTouchPress->fields.onClick;
  v11 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v11, (Il2CppObject *)this, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  v7 = EventDelegate__Set_49331860(onClick, v11, 0);
  v12 = this->fields.servantTouchPress;
  if ( !v12
    || (onLongPress = v12->fields.onLongPress,
        v14 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v14,
          (Il2CppObject *)this,
          Method_GrandServantListSelectObject_OnLongPressServant__,
          0),
        v7 = EventDelegate__Set_49331860(onLongPress, v14, 0),
        (equipTouchPresses = this->fields.equipTouchPresses) == 0) )
  {
LABEL_18:
    sub_1C3E7C0(v7, v8);
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
      v7 = EventDelegate__Set_49331860(v21, v22, 0);
      v24 = this->fields.equipTouchPresses;
      if ( v24 )
      {
        if ( v19 >= LODWORD(v24->max_length) )
LABEL_20:
          sub_1C3E7C8(v7, v8);
        v25 = *((_QWORD *)&v24->obj.klass + v17);
        if ( v25 )
        {
          v26 = *(System_Collections_Generic_List_EventDelegate__o **)(v25 + 48);
          v27 = GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(this, v19, v23);
          v7 = EventDelegate__Set_49331860(v26, v27, 0);
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

  if ( (byte_4C51B68 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3453/*"CLICK_EQUIP"*/);
    byte_4C51B68 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3453/*"CLICK_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnClickServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C51B66 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_3478/*"CLICK_SERVANT"*/);
    byte_4C51B66 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3478/*"CLICK_SERVANT"*/, v2);
}


void GrandServantListSelectObject__OnLongPressEquip(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4C51B69 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8332/*"LONG_PRESS_EQUIP"*/);
    byte_4C51B69 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8332/*"LONG_PRESS_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnLongPressServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C51B67 & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_8333/*"LONG_PRESS_SERVANT"*/);
    byte_4C51B67 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8333/*"LONG_PRESS_SERVANT"*/, v2);
}


void GrandServantListSelectObject__SendEvent(
        GrandServantListSelectObject_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x21
  __int64 v6; // x1
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_4C51B6A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_11537/*"SELECT_GRAND_GRAPH_ID"*/);
    byte_4C51B6A = 1;
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
                                                          (System_String_o *)StringLiteral_11537/*"SELECT_GRAND_GRAPH_ID"*/,
                                                          0)) == 0
      || (LODWORD(m_CancellationTokenSource->fields.addEventHandlers) = this->fields.grandGraphId,
          (m_CancellationTokenSource = this->fields.fsm) == 0) )
    {
      sub_1C3E7C0(m_CancellationTokenSource, v6);
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

  if ( (byte_4C51B6B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&StringLiteral_11528/*"SELECT_EQUIP_INDEX"*/);
    byte_4C51B6B = 1;
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
                                                          (System_String_o *)StringLiteral_11528/*"SELECT_EQUIP_INDEX"*/,
                                                          0)) == 0 )
    {
      sub_1C3E7C0(m_CancellationTokenSource, v6);
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

  if ( (byte_4C51B6C & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__);
    sub_1C3E564(&GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
    byte_4C51B6C = 1;
  }
  v5 = sub_1C3E7B0(GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C3E508(v5 + 24, this);
  *(_DWORD *)(v5 + 16) = index;
  v8 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
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

  if ( (byte_4C51B6D & 1) == 0 )
  {
    sub_1C3E564(&EventDelegate_Callback_TypeInfo);
    sub_1C3E564(&Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__);
    sub_1C3E564(&GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
    byte_4C51B6D = 1;
  }
  v5 = sub_1C3E7B0(GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C3E508(v5 + 24, this);
  *(_DWORD *)(v5 + 16) = index;
  v8 = (EventDelegate_Callback_o *)sub_1C3E7B0(EventDelegate_Callback_TypeInfo);
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
    sub_1C3E7C0(this, method);
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
    sub_1C3E7C0(this, method);
  GrandServantListSelectObject__OnLongPressEquip(this->fields.__4__this, this->fields.index, v2);
}