void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_4352C2B & 1) == 0 )
  {
    sub_B70694(&ServantAddMaster_TypeInfo);
    sub_B70694(&StringLiteral_21879/*"presentDialogMessageId"*/);
    byte_4352C2B = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantAddMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_21879/*"presentDialogMessageId"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21879/*"presentDialogMessageId"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4352C2A & 1) == 0 )
  {
    sub_B70694(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
    byte_4352C2A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    374,
    (const MethodInfo_21C03A4 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}