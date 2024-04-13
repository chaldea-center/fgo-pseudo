void __fastcall BattleSubject___ctor(BattleSubject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EB2F1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleObserver___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleObserver__TypeInfo, v5, v6, v7);
    byte_42EB2F1 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleObserver__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleObserver___ctor__);
  this->fields.observers = (struct System_Collections_Generic_List_BattleObserver__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleSubject__Add(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_BattleObserver__o *observers; // x0

  if ( (byte_42EB2EE & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleObserver__Add__, (_DWORD)observer, (_DWORD)method, v3);
    byte_42EB2EE = 1;
  }
  if ( observer )
  {
    observers = this->fields.observers;
    if ( !observers )
      sub_B5D69C(0LL, observer);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)observers,
      (EventMissionProgressRequest_Argument_ProgressData_o *)observer,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleObserver__Add__);
  }
}


void __fastcall BattleSubject__Notify(BattleSubject_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_List_BattleObserver__o *observers; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1

  if ( (byte_42EB2F0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleObserver___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_BattleObserver__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleSubject__Notify_b__3_0__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleObserver__ForEach__, v11, v12, v13);
    byte_42EB2F0 = 1;
  }
  observers = this->fields.observers;
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleObserver__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleSubject__Notify_b__3_0__,
    (const MethodInfo_258B320 *)Method_System_Action_BattleObserver___ctor__);
  if ( !observers )
    sub_B5D69C(v16, v17);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)observers,
    (System_Action_T__o *)v15,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_BattleObserver__ForEach__);
}


void __fastcall BattleSubject__Remove(BattleSubject_o *this, BattleObserver_o *observer, const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_List_WarBoardManager_TaskList__o *observers; // x0

  if ( (byte_42EB2EF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleObserver__Remove__, (_DWORD)observer, (_DWORD)method, v3);
    byte_42EB2EF = 1;
  }
  if ( observer )
  {
    observers = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.observers;
    if ( !observers )
      sub_B5D69C(0LL, observer);
    System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
      observers,
      (WarBoardManager_TaskList_o *)observer,
      (const MethodInfo_305896C *)Method_System_Collections_Generic_List_BattleObserver__Remove__);
  }
}


void __fastcall BattleSubject___Notify_b__3_0(BattleSubject_o *this, BattleObserver_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  ((void (__fastcall *)(BattleObserver_o *, BattleSubject_o *, const char *))x->klass[1]._1.gc_desc)(
    x,
    this,
    x->klass[1]._1.name);
}