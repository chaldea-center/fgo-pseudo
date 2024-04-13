void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42E986E & 1) == 0 )
  {
    sub_B5D5C4(&ServantAddMaster_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_21813/*"presentDialogMessageId"*/, v8, v9, v10);
    byte_42E986E = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantAddMaster_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_21813/*"presentDialogMessageId"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21813/*"presentDialogMessageId"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E986D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42E986D = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    374,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}