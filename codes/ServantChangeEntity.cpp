void ServantChangeEntity___ctor(ServantChangeEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C43810 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_string___ctor__);
    byte_4C43810 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_339EC34 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *ServantChangeEntity__CreatePK(int32_t svtId, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4C4380E & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C4380E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           priority,
           (const MethodInfo_30E5DE0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *ServantChangeEntity__CreatePrimaryKey(ServantChangeEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantChangeEntity__CreatePK(this->fields.svtId, this->fields.priority, v2);
}


int32_t ServantChangeEntity__GetAfterTreasureDeviceId(
        ServantChangeEntity_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  struct System_Int32_array *beforeTreasureDeviceIds; // x8
  struct System_Int32_array *afterTreasureDeviceIds; // x9
  int max_length; // w10
  unsigned int v6; // w11
  unsigned int v7; // w9

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
        while ( afterTreasureDeviceIds->m_Items[v6] != treasureDeviceId )
        {
          if ( max_length == ++v6 )
            return treasureDeviceId;
        }
        v7 = beforeTreasureDeviceIds->max_length;
        if ( (int)v6 < (int)v7 )
        {
          if ( v6 >= v7 )
            sub_1C372BC(this);
          return beforeTreasureDeviceIds->m_Items[v6];
        }
      }
    }
  }
  return treasureDeviceId;
}


int32_t ServantChangeEntity__GetBeforeTreasureDeviceId(
        ServantChangeEntity_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  struct System_Int32_array *beforeTreasureDeviceIds; // x9
  struct System_Int32_array *afterTreasureDeviceIds; // x8
  int max_length; // w10
  unsigned int v6; // w11
  unsigned int v7; // w9

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
        while ( beforeTreasureDeviceIds->m_Items[v6] != treasureDeviceId )
        {
          if ( max_length == ++v6 )
            return treasureDeviceId;
        }
        v7 = afterTreasureDeviceIds->max_length;
        if ( (int)v6 < (int)v7 )
        {
          if ( v6 >= v7 )
            sub_1C372BC(this);
          return afterTreasureDeviceIds->m_Items[v6];
        }
      }
    }
  }
  return treasureDeviceId;
}


bool ServantChangeEntity__HasFlag(ServantChangeEntity_o *this, int32_t type, const MethodInfo *method)
{
  return (this->fields.flag & type) != 0;
}


bool ServantChangeEntity__IsEnable(ServantChangeEntity_o *this, const MethodInfo *method)
{
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condValue; // x19

  if ( (byte_4C4380F & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    byte_4C4380F = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condValue = this->fields.condValue;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condValue, 0, 0, 0);
}