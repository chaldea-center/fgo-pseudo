void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20

  if ( (byte_42E597C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42E597C = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v11;
  sub_B5D560(&this->fields);
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.tag);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.tag);
}


void __fastcall BattleLogData___ctor_19672092(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x21

  if ( (byte_42E597D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)intag, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E597D = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v12;
  sub_B5D560(&this->fields);
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.tag);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B5D560(&this->fields.tag);
}


void __fastcall BattleLogData___ctor_19672300(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x22

  if ( (byte_42E597E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)intag, inmax, method);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    byte_42E597E = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v13;
  sub_B5D560(&this->fields);
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.tag);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_B5D560(&this->fields.tag);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct System_Collections_Generic_List_string__o *list; // x21
  EventMissionProgressRequest_Argument_ProgressData_o *v13; // x0
  __int64 v14; // x1

  if ( (byte_42E597F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)str, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAt__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v9, v10, v11);
    byte_42E597F = 1;
  }
  list = this->fields.list;
  v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_44577788(
                                                                 this->fields.tag,
                                                                 str,
                                                                 0LL);
  if ( !list
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)list,
          v13,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__),
        (v13 = (EventMissionProgressRequest_Argument_ProgressData_o *)this->fields.list) == 0LL) )
  {
    sub_B5D69C(v13, v14);
  }
  if ( this->fields.max < v13->fields.targetId )
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v13,
      0,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_42E5980 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, (_DWORD)method, v2, v3);
    byte_42E5980 = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)list,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
}