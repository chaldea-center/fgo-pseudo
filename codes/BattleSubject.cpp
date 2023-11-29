void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FCD82 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleObserver___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_BattleObserver__TypeInfo, v6);
    byte_40FCD82 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_BattleObserver__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSubject__Add(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleObserver__o *observers; // x0

  if ( (byte_40FCD7F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleObserver__Add__, observer);
    byte_40FCD7F = 1;
  }
  if ( observer )
  {
    observers = this->fields.observers;
    if ( !observers )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)observers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)observer,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleObserver__Add__);
  }
}


void __fastcall BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleObserver__o *observers; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x21

  if ( (byte_40FCD81 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleObserver___ctor__, method);
    sub_B16FFC(&System_Action_BattleObserver__TypeInfo, v6);
    sub_B16FFC(&Method_BattleSubject__Notify_b__3_0__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleObserver__ForEach__, v8);
    byte_40FCD81 = 1;
  }
  observers = this->fields.observers;
  v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_BattleObserver__TypeInfo,
                                                                               method,
                                                                               v2,
                                                                               v3,
                                                                               v4);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleSubject__Notify_b__3_0__,
    (const MethodInfo_24B7310 *)Method_System_Action_BattleObserver___ctor__);
  if ( !observers )
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)observers,
    (System_Action_T__o *)v10,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *observers; // x0

  if ( (byte_40FCD80 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleObserver__Remove__, observer);
    byte_40FCD80 = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.observers;
    if ( !observers )
      sub_B170D4();
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      observers,
      (WarBoardManager_TaskList_o *)observer,
      (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}