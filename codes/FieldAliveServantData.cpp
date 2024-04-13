void __fastcall FieldAliveServantData___ctor(FieldAliveServantData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42E69A0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_BattleServantData__TypeInfo, v5, v6, v7);
    byte_42E69A0 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.playerIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.enemyIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.enemyIdList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FieldAliveServantData__addSvtData(
        FieldAliveServantData_o *this,
        bool isEnemySide,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v7; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x0

  if ( (byte_42E699F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleServantData__Add__, isEnemySide, (_DWORD)svtData, method);
    byte_42E699F = 1;
  }
  v7 = 16LL;
  if ( isEnemySide )
    v7 = 24LL;
  v8 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)((char *)&this->klass
                                                                                                + v7);
  if ( !v8 )
    sub_B5D69C(0LL, isEnemySide);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)svtData,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
}


System_Collections_Generic_List_BattleServantData__o *__fastcall FieldAliveServantData__getTargetSideSvtDataList(
        FieldAliveServantData_o *this,
        bool isEnemySide,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 16LL;
  if ( isEnemySide )
    v3 = 24LL;
  return *(System_Collections_Generic_List_BattleServantData__o **)((char *)&this->klass + v3);
}