void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20

  if ( (byte_434EB41 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434EB41 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B70630(&this->fields);
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.tag);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.tag);
}


void __fastcall BattleLogData___ctor_19403220(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21

  if ( (byte_434EB42 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434EB42 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v5;
  sub_B70630(&this->fields);
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.tag);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B70630(&this->fields.tag);
}


void __fastcall BattleLogData___ctor_19403428(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x22

  if ( (byte_434EB43 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434EB43 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v7;
  sub_B70630(&this->fields);
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields.tag);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B70630(&this->fields.tag);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v6; // x0
  __int64 v7; // x1

  if ( (byte_434EB44 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_434EB44 = 1;
  }
  list = this->fields.list;
  v6 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_44758168(this->fields.tag, str, 0LL);
  if ( !list
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
          v6,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__),
        (v6 = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.list) == 0LL) )
  {
    sub_B7076C(v6, v7);
  }
  if ( this->fields.max < v6->fields.targetId )
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
      0,
      (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_434EB45 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_string__ToArray__);
    byte_434EB45 = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_B7076C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)list,
                                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_string__ToArray__);
}