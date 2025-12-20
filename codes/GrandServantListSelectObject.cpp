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
  if ( (byte_4D27507 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&EventDelegate_TypeInfo);
    this = (GrandServantListSelectObject_o *)sub_1C94098(&Method_GrandServantListSelectObject_OnClickServant__);
    byte_4D27507 = 1;
  }
  if ( !touchPress )
    sub_1C942F0(this, touchPress);
  onClick = touchPress->fields.onClick;
  v6 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v6, v4, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_49949268(onClick, v6, 0);
}


void GrandServantListSelectObject__Initialize(
        GrandServantListSelectObject_o *this,
        PlayMakerFSM_o *fsm,
        int32_t grandGraphId,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  EventDelegate_o *v11; // x0
  __int64 v12; // x1
  struct UITouchPress_o *servantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v15; // x21
  struct UITouchPress_o *v16; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v18; // x21
  const MethodInfo *v19; // x2
  struct UITouchPress_array *equipTouchPresses; // x8
  __int64 v21; // x24
  int max_length; // w9
  unsigned int v23; // w20
  __int64 v24; // x8
  System_Collections_Generic_List_EventDelegate__o *v25; // x21
  EventDelegate_Callback_o *v26; // x22
  const MethodInfo *v27; // x2
  struct UITouchPress_array *v28; // x8
  __int64 v29; // x8
  System_Collections_Generic_List_EventDelegate__o *v30; // x21
  EventDelegate_Callback_o *v31; // x0

  if ( (byte_4D27506 & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&EventDelegate_TypeInfo);
    sub_1C94098(&Method_GrandServantListSelectObject_OnClickServant__);
    sub_1C94098(&Method_GrandServantListSelectObject_OnLongPressServant__);
    byte_4D27506 = 1;
  }
  this->fields.fsm = fsm;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.fsm,
    (int32_t)fsm,
    grandGraphId,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  servantTouchPress = this->fields.servantTouchPress;
  this->fields.grandGraphId = grandGraphId;
  if ( !servantTouchPress )
    goto LABEL_18;
  onClick = servantTouchPress->fields.onClick;
  v15 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v15, (Il2CppObject *)this, Method_GrandServantListSelectObject_OnClickServant__, 0);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  v11 = EventDelegate__Set_49949268(onClick, v15, 0);
  v16 = this->fields.servantTouchPress;
  if ( !v16
    || (onLongPress = v16->fields.onLongPress,
        v18 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v18,
          (Il2CppObject *)this,
          Method_GrandServantListSelectObject_OnLongPressServant__,
          0),
        v11 = EventDelegate__Set_49949268(onLongPress, v18, 0),
        (equipTouchPresses = this->fields.equipTouchPresses) == 0) )
  {
LABEL_18:
    sub_1C942F0(v11, v12);
  }
  v21 = 4;
  while ( 1 )
  {
    max_length = equipTouchPresses->max_length;
    v23 = v21 - 4;
    if ( (int)v21 - 4 >= max_length )
      break;
    if ( v23 >= max_length )
      goto LABEL_20;
    v24 = *((_QWORD *)&equipTouchPresses->obj.klass + v21);
    if ( v24 )
    {
      v25 = *(System_Collections_Generic_List_EventDelegate__o **)(v24 + 32);
      v26 = GrandServantListSelectObject___Initialize_g__CreateOnClickEquip_4_0(this, v23, v19);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      v11 = EventDelegate__Set_49949268(v25, v26, 0);
      v28 = this->fields.equipTouchPresses;
      if ( v28 )
      {
        if ( v23 >= LODWORD(v28->max_length) )
LABEL_20:
          sub_1C942F8(v11);
        v29 = *((_QWORD *)&v28->obj.klass + v21);
        if ( v29 )
        {
          v30 = *(System_Collections_Generic_List_EventDelegate__o **)(v29 + 48);
          v31 = GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(this, v23, v27);
          v11 = EventDelegate__Set_49949268(v30, v31, 0);
          equipTouchPresses = this->fields.equipTouchPresses;
          ++v21;
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

  if ( (byte_4D2750A & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3457/*"CLICK_EQUIP"*/);
    byte_4D2750A = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3457/*"CLICK_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnClickServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D27508 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_3483/*"CLICK_SERVANT"*/);
    byte_4D27508 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3483/*"CLICK_SERVANT"*/, v2);
}


void GrandServantListSelectObject__OnLongPressEquip(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4D2750B & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_8352/*"LONG_PRESS_EQUIP"*/);
    byte_4D2750B = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8352/*"LONG_PRESS_EQUIP"*/, v5);
}


void GrandServantListSelectObject__OnLongPressServant(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4D27509 & 1) == 0 )
  {
    sub_1C94098(&StringLiteral_8353/*"LONG_PRESS_SERVANT"*/);
    byte_4D27509 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8353/*"LONG_PRESS_SERVANT"*/, v2);
}


void GrandServantListSelectObject__SendEvent(
        GrandServantListSelectObject_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *fsm; // x21
  __int64 v6; // x1
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_4D2750C & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_11582/*"SELECT_GRAND_GRAPH_ID"*/);
    byte_4D2750C = 1;
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
                                                          (System_String_o *)StringLiteral_11582/*"SELECT_GRAND_GRAPH_ID"*/,
                                                          0)) == 0
      || (LODWORD(m_CancellationTokenSource->fields.addEventHandlers) = this->fields.grandGraphId,
          (m_CancellationTokenSource = this->fields.fsm) == 0) )
    {
      sub_1C942F0(m_CancellationTokenSource, v6);
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

  if ( (byte_4D2750D & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_11573/*"SELECT_EQUIP_INDEX"*/);
    byte_4D2750D = 1;
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
                                                          (System_String_o *)StringLiteral_11573/*"SELECT_EQUIP_INDEX"*/,
                                                          0)) == 0 )
    {
      sub_1C942F0(m_CancellationTokenSource, v6);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  EventDelegate_Callback_o *v14; // x19

  if ( (byte_4D2750E & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__);
    sub_1C94098(&GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
    byte_4D2750E = 1;
  }
  v5 = sub_1C942E4(GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 16) = index;
  v14 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__,
    0);
  return v14;
}


EventDelegate_Callback_o *GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  EventDelegate_Callback_o *v14; // x19

  if ( (byte_4D2750F & 1) == 0 )
  {
    sub_1C94098(&EventDelegate_Callback_TypeInfo);
    sub_1C94098(&Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__);
    sub_1C94098(&GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
    byte_4D2750F = 1;
  }
  v5 = sub_1C942E4(GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 16) = index;
  v14 = (EventDelegate_Callback_o *)sub_1C942E4(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__,
    0);
  return v14;
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
    sub_1C942F0(this, method);
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
    sub_1C942F0(this, method);
  GrandServantListSelectObject__OnLongPressEquip(this->fields.__4__this, this->fields.index, v2);
}