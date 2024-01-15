void __fastcall ServantAddMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_40F93E1 & 1) == 0 )
  {
    sub_B16FFC(&ServantAddMaster_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_21431/*"presentDialogMessageId"*/, v8);
    byte_40F93E1 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantAddMaster_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_21431/*"presentDialogMessageId"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21431/*"presentDialogMessageId"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F93E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__, method);
    byte_40F93E0 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    373,
    (const MethodInfo_266F2EC *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}