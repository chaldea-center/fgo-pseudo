void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418A5CB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleObserver___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_BattleObserver__TypeInfo, v3);
    byte_418A5CB = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleObserver__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSubject__Add(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleObserver__o *observers; // x0

  if ( (byte_418A5C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleObserver__Add__, observer);
    byte_418A5C8 = 1;
  }
  if ( observer )
  {
    observers = this->fields.observers;
    if ( !observers )
      sub_B2C434(0LL, observer);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)observers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)observer,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleObserver__Add__);
  }
}


void __fastcall BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattleObserver__o *observers; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_418A5CA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleObserver___ctor__, method);
    sub_B2C35C(&System_Action_BattleObserver__TypeInfo, v3);
    sub_B2C35C(&Method_BattleSubject__Notify_b__3_0__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleObserver__ForEach__, v5);
    byte_418A5CA = 1;
  }
  observers = this->fields.observers;
  v7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleObserver__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleSubject__Notify_b__3_0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_BattleObserver___ctor__);
  if ( !observers )
    sub_B2C434(v8, v9);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)observers,
    (System_Action_T__o *)v7,
    (const MethodInfo_2EF5178 *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *observers; // x0

  if ( (byte_418A5C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleObserver__Remove__, observer);
    byte_418A5C9 = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.observers;
    if ( !observers )
      sub_B2C434(0LL, observer);
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      observers,
      (WarBoardManager_TaskList_o *)observer,
      (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}