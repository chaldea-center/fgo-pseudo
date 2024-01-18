void __fastcall FieldAliveServantData___ctor(FieldAliveServantData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_4186970 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_BattleServantData__TypeInfo, v3);
    byte_4186970 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.playerIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  this->fields.enemyIdList = (struct System_Collections_Generic_List_BattleServantData__o *)v11;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enemyIdList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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

  if ( (byte_418696F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleServantData__Add__, isEnemySide);
    byte_418696F = 1;
  }
  v7 = 16LL;
  if ( isEnemySide )
    v7 = 24LL;
  v8 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)((char *)&this->klass
                                                                                                + v7);
  if ( !v8 )
    sub_B2C434(0LL, isEnemySide);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    v8,
    (EventMissionProgressRequest_Argument_ProgressData_o *)svtData,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleServantData__Add__);
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