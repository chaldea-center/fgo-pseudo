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

  if ( (byte_438C484 & 1) == 0 )
  {
    sub_B775C4(&ServantAddMaster_TypeInfo);
    sub_B775C4(&StringLiteral_21978/*"presentDialogMessageId"*/);
    byte_438C484 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantAddMaster_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_21978/*"presentDialogMessageId"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_21978/*"presentDialogMessageId"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall ServantAddMaster___ctor(ServantAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438C483 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
    byte_438C483 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    374,
    (const MethodInfo_21FB7F8 *)Method_DataMasterBase_ServantAddMaster__ServantAddEntity__int___ctor__);
}