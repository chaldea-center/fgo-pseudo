void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438A893 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleObserver___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleObserver__TypeInfo);
    byte_438A893 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleObserver__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSubject__Add(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleObserver__o *observers; // x0

  if ( (byte_438A890 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleObserver__Add__);
    byte_438A890 = 1;
  }
  if ( observer )
  {
    observers = this->fields.observers;
    if ( !observers )
      sub_B7769C(0LL, observer);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)observers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)observer,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleObserver__Add__);
  }
}


void __fastcall BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleObserver__o *observers; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438A892 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleObserver___ctor__);
    sub_B775C4(&System_Action_BattleObserver__TypeInfo);
    sub_B775C4(&Method_BattleSubject__Notify_b__3_0__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleObserver__ForEach__);
    byte_438A892 = 1;
  }
  observers = this->fields.observers;
  v4 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleObserver__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleSubject__Notify_b__3_0__,
    (const MethodInfo_26A0868 *)Method_System_Action_BattleObserver___ctor__);
  if ( !observers )
    sub_B7769C(v5, v6);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)observers,
    (System_Action_T__o *)v4,
    (const MethodInfo_3053FB0 *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *observers; // x0

  if ( (byte_438A891 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_BattleObserver__Remove__);
    byte_438A891 = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.observers;
    if ( !observers )
      sub_B7769C(0LL, observer);
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      observers,
      (WarBoardManager_TaskList_o *)observer,
      (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}