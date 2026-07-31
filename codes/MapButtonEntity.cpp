void MapButtonEntity___ctor(MapButtonEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938B77 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938B77 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *MapButtonEntity__CreatePK(int32_t id, int32_t priority, int32_t targetMapId, const MethodInfo *method)
{
  if ( (byte_5938B78 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_5938B78 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           id,
           priority,
           targetMapId,
           (const MethodInfo_38213FC *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *MapButtonEntity__CreatePrimaryKey(MapButtonEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return MapButtonEntity__CreatePK(this->fields.id, this->fields.priority, this->fields.targetMapId, v2);
}