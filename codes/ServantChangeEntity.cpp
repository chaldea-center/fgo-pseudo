void __fastcall ServantChangeEntity___ctor(ServantChangeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FEB49 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_string___ctor__, method);
    byte_49FEB49 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30D5FF8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ServantChangeEntity__CreatePK(int32_t svtId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_49FEB47 & 1) == 0 )
  {
    sub_1B64870(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&priority);
    byte_49FEB47 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           priority,
           (const MethodInfo_2E398EC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantChangeEntity__CreatePrimaryKey(
        ServantChangeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantChangeEntity__CreatePK(this->fields.svtId, this->fields.priority, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantChangeEntity__GetAfterTreasureDeviceId(
        ServantChangeEntity_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  struct System_Int32_array *beforeTreasureDeviceIds; // x8
  struct System_Int32_array *afterTreasureDeviceIds; // x9
  int max_length; // w10
  il2cpp_array_size_t v6; // w11
  il2cpp_array_size_t v7; // w9

  beforeTreasureDeviceIds = this->fields.beforeTreasureDeviceIds;
  if ( beforeTreasureDeviceIds )
  {
    afterTreasureDeviceIds = this->fields.afterTreasureDeviceIds;
    if ( afterTreasureDeviceIds )
    {
      max_length = afterTreasureDeviceIds->max_length;
      if ( max_length >= 1 )
      {
        v6 = 0;
        while ( afterTreasureDeviceIds->m_Items[v6 + 1] != treasureDeviceId )
        {
          if ( max_length == ++v6 )
            return treasureDeviceId;
        }
        v7 = beforeTreasureDeviceIds->max_length;
        if ( (int)v6 < (int)v7 )
        {
          if ( v6 >= v7 )
            sub_1B64AD4(this, *(_QWORD *)&treasureDeviceId);
          return beforeTreasureDeviceIds->m_Items[v6 + 1];
        }
      }
    }
  }
  return treasureDeviceId;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall ServantChangeEntity__GetBeforeTreasureDeviceId(
        ServantChangeEntity_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  struct System_Int32_array *beforeTreasureDeviceIds; // x9
  struct System_Int32_array *afterTreasureDeviceIds; // x8
  int max_length; // w10
  il2cpp_array_size_t v6; // w11
  il2cpp_array_size_t v7; // w9

  beforeTreasureDeviceIds = this->fields.beforeTreasureDeviceIds;
  if ( beforeTreasureDeviceIds )
  {
    afterTreasureDeviceIds = this->fields.afterTreasureDeviceIds;
    if ( afterTreasureDeviceIds )
    {
      max_length = beforeTreasureDeviceIds->max_length;
      if ( max_length >= 1 )
      {
        v6 = 0;
        while ( beforeTreasureDeviceIds->m_Items[v6 + 1] != treasureDeviceId )
        {
          if ( max_length == ++v6 )
            return treasureDeviceId;
        }
        v7 = afterTreasureDeviceIds->max_length;
        if ( (int)v6 < (int)v7 )
        {
          if ( v6 >= v7 )
            sub_1B64AD4(this, *(_QWORD *)&treasureDeviceId);
          return afterTreasureDeviceIds->m_Items[v6 + 1];
        }
      }
    }
  }
  return treasureDeviceId;
}


bool __fastcall ServantChangeEntity__HasFlag(ServantChangeEntity_o *this, int32_t type, const MethodInfo *method)
{
  return (this->fields.flag & type) != 0;
}


bool __fastcall ServantChangeEntity__IsEnable(ServantChangeEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condValue; // x19

  if ( (byte_49FEB48 & 1) == 0 )
  {
    sub_1B64870(&CondType_TypeInfo, method);
    byte_49FEB48 = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condValue = this->fields.condValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL);
}