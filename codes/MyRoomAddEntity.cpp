void __fastcall MyRoomAddEntity___ctor(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438C2D4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438C2D4 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall MyRoomAddEntity__CreatePK(
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_438C2D3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_438C2D3 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           type,
           priority,
           (const MethodInfo_1D175E4 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall MyRoomAddEntity__CreatePrimaryKey(MyRoomAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MyRoomAddEntity__CreatePK(this->fields.id, this->fields.type, this->fields.priority, v2);
}