void __fastcall GrandServantListSelectObject___ctor(GrandServantListSelectObject_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantListSelectObject__AddServantTouchPress(
        GrandServantListSelectObject_o *this,
        UITouchPress_o *touchPress,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v8; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4B17400 & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, touchPress);
    sub_1BCAFF8(&EventDelegate_TypeInfo, v5);
    this = (GrandServantListSelectObject_o *)sub_1BCAFF8(&Method_GrandServantListSelectObject_OnClickServant__, v6);
    byte_4B17400 = 1;
  }
  if ( !touchPress )
    sub_1BCB254(this, touchPress);
  onClick = touchPress->fields.onClick;
  v8 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v8, v4, Method_GrandServantListSelectObject_OnClickServant__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  EventDelegate__Set_48451416(onClick, v8, 0LL);
}


void __fastcall GrandServantListSelectObject__Initialize(
        GrandServantListSelectObject_o *this,
        PlayMakerFSM_o *fsm,
        int32_t parentClassBoardBaseId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  EventDelegate_o *v10; // x0
  __int64 v11; // x1
  struct UITouchPress_o *servantTouchPress; // x8
  System_Collections_Generic_List_EventDelegate__o *onClick; // x20
  EventDelegate_Callback_o *v14; // x21
  struct UITouchPress_o *v15; // x8
  System_Collections_Generic_List_EventDelegate__o *onLongPress; // x20
  EventDelegate_Callback_o *v17; // x21
  const MethodInfo *v18; // x2
  struct UITouchPress_array *equipTouchPresses; // x8
  __int64 v20; // x24
  int max_length; // w9
  unsigned int v22; // w20
  __int64 v23; // x8
  System_Collections_Generic_List_EventDelegate__o *v24; // x21
  EventDelegate_Callback_o *v25; // x22
  struct UITouchPress_array *v26; // x8
  __int64 v27; // x8
  System_Collections_Generic_List_EventDelegate__o *v28; // x21
  EventDelegate_Callback_o *v29; // x0

  if ( (byte_4B173FF & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, fsm);
    sub_1BCAFF8(&EventDelegate_TypeInfo, v7);
    sub_1BCAFF8(&Method_GrandServantListSelectObject_OnClickServant__, v8);
    sub_1BCAFF8(&Method_GrandServantListSelectObject_OnLongPressServant__, v9);
    byte_4B173FF = 1;
  }
  this->fields.fsm = fsm;
  v10 = (EventDelegate_o *)sub_1BCAF9C(&this->fields.fsm);
  servantTouchPress = this->fields.servantTouchPress;
  this->fields.parentClassBoardBaseId = parentClassBoardBaseId;
  if ( !servantTouchPress )
    goto LABEL_18;
  onClick = servantTouchPress->fields.onClick;
  v14 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(v14, (Il2CppObject *)this, Method_GrandServantListSelectObject_OnClickServant__, 0LL);
  if ( !EventDelegate_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
  v10 = EventDelegate__Set_48451416(onClick, v14, 0LL);
  v15 = this->fields.servantTouchPress;
  if ( !v15
    || (onLongPress = v15->fields.onLongPress,
        v17 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo),
        EventDelegate_Callback___ctor(
          v17,
          (Il2CppObject *)this,
          Method_GrandServantListSelectObject_OnLongPressServant__,
          0LL),
        v10 = EventDelegate__Set_48451416(onLongPress, v17, 0LL),
        (equipTouchPresses = this->fields.equipTouchPresses) == 0LL) )
  {
LABEL_18:
    sub_1BCB254(v10, v11);
  }
  v20 = 4LL;
  while ( 1 )
  {
    max_length = equipTouchPresses->max_length;
    v22 = v20 - 4;
    if ( (int)v20 - 4 >= max_length )
      break;
    if ( v22 >= max_length )
      goto LABEL_20;
    v23 = *((_QWORD *)&equipTouchPresses->obj.klass + v20);
    if ( v23 )
    {
      v24 = *(System_Collections_Generic_List_EventDelegate__o **)(v23 + 32);
      v25 = GrandServantListSelectObject___Initialize_g__CreateOnClickEquip_4_0(this, v22, v18);
      if ( !EventDelegate_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
      v10 = EventDelegate__Set_48451416(v24, v25, 0LL);
      v26 = this->fields.equipTouchPresses;
      if ( v26 )
      {
        if ( v22 >= v26->max_length )
LABEL_20:
          sub_1BCB25C(v10, v11, v18);
        v27 = *((_QWORD *)&v26->obj.klass + v20);
        if ( v27 )
        {
          v28 = *(System_Collections_Generic_List_EventDelegate__o **)(v27 + 48);
          v29 = GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(this, v22, v18);
          v10 = EventDelegate__Set_48451416(v28, v29, 0LL);
          equipTouchPresses = this->fields.equipTouchPresses;
          ++v20;
          if ( equipTouchPresses )
            continue;
        }
      }
    }
    goto LABEL_18;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListSelectObject__OnClickEquip(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4B17403 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3420/*"CLICK_EQUIP"*/, *(_QWORD *)&index);
    byte_4B17403 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3420/*"CLICK_EQUIP"*/, v5);
}


void __fastcall GrandServantListSelectObject__OnClickServant(
        GrandServantListSelectObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B17401 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3445/*"CLICK_SERVANT"*/, method);
    byte_4B17401 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_3445/*"CLICK_SERVANT"*/, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListSelectObject__OnLongPressEquip(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4B17404 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8262/*"LONG_PRESS_EQUIP"*/, *(_QWORD *)&index);
    byte_4B17404 = 1;
  }
  GrandServantListSelectObject__SetEquipIndex(this, index, method);
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8262/*"LONG_PRESS_EQUIP"*/, v5);
}


void __fastcall GrandServantListSelectObject__OnLongPressServant(
        GrandServantListSelectObject_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B17402 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8263/*"LONG_PRESS_SERVANT"*/, method);
    byte_4B17402 = 1;
  }
  GrandServantListSelectObject__SendEvent(this, (System_String_o *)StringLiteral_8263/*"LONG_PRESS_SERVANT"*/, v2);
}


void __fastcall GrandServantListSelectObject__SendEvent(
        GrandServantListSelectObject_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *fsm; // x21
  __int64 v7; // x1
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_4B17405 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, eventName);
    sub_1BCAFF8(&StringLiteral_11419/*"SELECT_CLASS_BOARD_BASE_ID"*/, v5);
    byte_4B17405 = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0LL, 0LL) )
  {
    m_CancellationTokenSource = this->fields.fsm;
    if ( !m_CancellationTokenSource
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(m_CancellationTokenSource, 0LL)) == 0LL
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)m_CancellationTokenSource[1].fields.m_CancellationTokenSource) == 0LL
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                          (HutongGames_PlayMaker_FsmVariables_o *)m_CancellationTokenSource,
                                                          (System_String_o *)StringLiteral_11419/*"SELECT_CLASS_BOARD_BASE_ID"*/,
                                                          0LL)) == 0LL
      || (LODWORD(m_CancellationTokenSource->fields.addEventHandlers) = this->fields.parentClassBoardBaseId,
          (m_CancellationTokenSource = this->fields.fsm) == 0LL) )
    {
      sub_1BCB254(m_CancellationTokenSource, v7);
    }
    PlayMakerFSM__SendEvent(m_CancellationTokenSource, eventName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListSelectObject__SetEquipIndex(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *fsm; // x21
  __int64 v7; // x1
  PlayMakerFSM_o *m_CancellationTokenSource; // x0

  if ( (byte_4B17406 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&StringLiteral_11423/*"SELECT_EQUIP_INDEX"*/, v5);
    byte_4B17406 = 1;
  }
  fsm = (UnityEngine_Object_o *)this->fields.fsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(fsm, 0LL, 0LL) )
  {
    m_CancellationTokenSource = this->fields.fsm;
    if ( !m_CancellationTokenSource
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(m_CancellationTokenSource, 0LL)) == 0LL
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)m_CancellationTokenSource[1].fields.m_CancellationTokenSource) == 0LL
      || (m_CancellationTokenSource = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmInt(
                                                          (HutongGames_PlayMaker_FsmVariables_o *)m_CancellationTokenSource,
                                                          (System_String_o *)StringLiteral_11423/*"SELECT_EQUIP_INDEX"*/,
                                                          0LL)) == 0LL )
    {
      sub_1BCB254(m_CancellationTokenSource, v7);
    }
    LODWORD(m_CancellationTokenSource->fields.addEventHandlers) = index;
  }
}


// local variable allocation has failed, the output may be wrong!
EventDelegate_Callback_o *__fastcall GrandServantListSelectObject___Initialize_g__CreateOnClickEquip_4_0(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  EventDelegate_Callback_o *v10; // x19

  if ( (byte_4B17407 & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__, v5);
    sub_1BCAFF8(&GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo, v6);
    byte_4B17407 = 1;
  }
  v7 = sub_1BCB244(GrandServantListSelectObject___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_1BCAF9C(v7 + 24);
  *(_DWORD *)(v7 + 16) = index;
  v10 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)v7,
    Method_GrandServantListSelectObject___c__DisplayClass4_0__Initialize_b__2__,
    0LL);
  return v10;
}


// local variable allocation has failed, the output may be wrong!
EventDelegate_Callback_o *__fastcall GrandServantListSelectObject___Initialize_g__CreateOnLongPressEquip_4_1(
        GrandServantListSelectObject_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  EventDelegate_Callback_o *v10; // x19

  if ( (byte_4B17408 & 1) == 0 )
  {
    sub_1BCAFF8(&EventDelegate_Callback_TypeInfo, *(_QWORD *)&index);
    sub_1BCAFF8(&Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__, v5);
    sub_1BCAFF8(&GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo, v6);
    byte_4B17408 = 1;
  }
  v7 = sub_1BCB244(GrandServantListSelectObject___c__DisplayClass4_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_1BCAF9C(v7 + 24);
  *(_DWORD *)(v7 + 16) = index;
  v10 = (EventDelegate_Callback_o *)sub_1BCB244(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v10,
    (Il2CppObject *)v7,
    Method_GrandServantListSelectObject___c__DisplayClass4_1__Initialize_b__3__,
    0LL);
  return v10;
}


void __fastcall GrandServantListSelectObject___c__DisplayClass4_0___ctor(
        GrandServantListSelectObject___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListSelectObject___c__DisplayClass4_0___Initialize_b__2(
        GrandServantListSelectObject___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCB254(this, method);
  GrandServantListSelectObject__OnClickEquip(this->fields.__4__this, this->fields.index, v2);
}


void __fastcall GrandServantListSelectObject___c__DisplayClass4_1___ctor(
        GrandServantListSelectObject___c__DisplayClass4_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall GrandServantListSelectObject___c__DisplayClass4_1___Initialize_b__3(
        GrandServantListSelectObject___c__DisplayClass4_1_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCB254(this, method);
  GrandServantListSelectObject__OnLongPressEquip(this->fields.__4__this, this->fields.index, v2);
}