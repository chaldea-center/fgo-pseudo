void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x20
  void *v7; // x1
  void *v8; // x1

  if ( (byte_4211826 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_1/*""*/, v5);
    byte_4211826 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v6;
  sub_B0D840(&this->fields, v6);
  v7 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.tag, v7);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.tag, v8);
}


void __fastcall BattleLogData___ctor_18902900(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  void *v8; // x1

  if ( (byte_4211827 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4211827 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 intag,
                                                                                                 method);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v7;
  sub_B0D840(&this->fields, v7);
  v8 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.tag, v8);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B0D840(&this->fields.tag, intag);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogData___ctor_18903108(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  void *v10; // x1

  if ( (byte_4211828 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_1/*""*/, v8);
    byte_4211828 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 intag,
                                                                                                 *(_QWORD *)&inmax);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v9;
  sub_B0D840(&this->fields, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.tag, v10);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B0D840(&this->fields.tag, intag);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *list; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x0

  if ( (byte_4211829 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    byte_4211829 = 1;
  }
  list = this->fields.list;
  v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_43849904(this->fields.tag, str, 0LL);
  if ( !list
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
          v8,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__),
        (v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.list) == 0LL) )
  {
    sub_B0D97C(v8);
  }
  if ( this->fields.max < v8->fields.targetId )
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_421182A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_421182A = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_B0D97C(0LL);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)list,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_string__ToArray__);
}