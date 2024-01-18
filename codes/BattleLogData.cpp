void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  void *v6; // x1
  void *v7; // x1

  if ( (byte_4184BE6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, method);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v3);
    sub_B2C35C(&StringLiteral_1/*""*/, v4);
    byte_4184BE6 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v5;
  sub_B2C2F8(&this->fields, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.tag, v6);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.tag, v7);
}


void __fastcall BattleLogData___ctor_19397812(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x21
  void *v8; // x1

  if ( (byte_4184BE7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, intag);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4184BE7 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v7;
  sub_B2C2F8(&this->fields, v7);
  v8 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.tag, v8);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B2C2F8(&this->fields.tag, intag);
}


void __fastcall BattleLogData___ctor_19398020(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x22
  void *v10; // x1

  if ( (byte_4184BE8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, intag);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_4184BE8 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v9;
  sub_B2C2F8(&this->fields, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.tag, v10);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B2C2F8(&this->fields.tag, intag);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *list; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_4184BE9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    byte_4184BE9 = 1;
  }
  list = this->fields.list;
  v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_44305532(this->fields.tag, str, 0LL);
  if ( !list
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
          v8,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__),
        (v8 = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.list) == 0LL) )
  {
    sub_B2C434(v8, v9);
  }
  if ( this->fields.max < v8->fields.targetId )
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v8,
      0,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_4184BEA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_4184BEA = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_B2C434(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)list,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}