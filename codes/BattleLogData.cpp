void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  void *v9; // x1
  void *v10; // x1

  if ( (byte_40F734F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40F734F = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v8;
  sub_B16F98(&this->fields, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(&this->fields.tag, v9);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(&this->fields.tag, v10);
}


void __fastcall BattleLogData___ctor_19759460(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x21
  void *v10; // x1

  if ( (byte_40F7350 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40F7350 = 1;
  }
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 intag,
                                                                                                 method,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v9;
  sub_B16F98(&this->fields, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(&this->fields.tag, v10);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B16F98(&this->fields.tag, intag);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogData___ctor_19759668(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  void *v11; // x1

  if ( (byte_40F7351 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_1/*""*/, v9);
    byte_40F7351 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  intag,
                                                                                                  *(_QWORD *)&inmax,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B16F98(&this->fields, v10);
  v11 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98(&this->fields.tag, v11);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B16F98(&this->fields.tag, intag);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *list; // x21
  System_String_o *v8; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v9; // x0

  if ( (byte_40F7352 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    byte_40F7352 = 1;
  }
  list = this->fields.list;
  v8 = System_String__Concat_43743732(this->fields.tag, str, 0LL);
  if ( !list
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__),
        (v9 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.list) == 0LL) )
  {
    sub_B170D4();
  }
  if ( this->fields.max < v9->fields._size )
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      v9,
      0,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_40F7353 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_40F7353 = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_B170D4();
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)list,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
}