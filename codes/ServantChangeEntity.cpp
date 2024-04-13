void __fastcall ServantChangeEntity___ctor(ServantChangeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E994F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E994F = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall ServantChangeEntity__CreatePK(int32_t svtId, int32_t priority, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E994D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, priority, (_DWORD)method, v3);
    byte_42E994D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           svtId,
           priority,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ServantChangeEntity__CreatePrimaryKey(
        ServantChangeEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ServantChangeEntity__CreatePK(this->fields.svtId, this->fields.priority, v2);
}


int32_t __fastcall ServantChangeEntity__GetAfterTreasureDeviceId(
        ServantChangeEntity_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  struct System_Int32_array *beforeTreasureDeviceIds; // x9
  int32_t result; // w0
  struct System_Int32_array *afterTreasureDeviceIds; // x11
  int max_length; // w10
  __int64 v8; // x8
  int32_t *v9; // x11
  int v10; // w10
  __int64 v11; // x0

  beforeTreasureDeviceIds = this->fields.beforeTreasureDeviceIds;
  result = treasureDeviceId;
  if ( beforeTreasureDeviceIds )
  {
    afterTreasureDeviceIds = this->fields.afterTreasureDeviceIds;
    if ( afterTreasureDeviceIds )
    {
      max_length = afterTreasureDeviceIds->max_length;
      if ( max_length >= 1 )
      {
        v8 = 0LL;
        v9 = &afterTreasureDeviceIds->m_Items[1];
        while ( v9[v8] != treasureDeviceId )
        {
          if ( (int)++v8 >= max_length )
            return result;
        }
        v10 = beforeTreasureDeviceIds->max_length;
        if ( (int)v8 < v10 )
        {
          if ( (unsigned int)v8 >= v10 )
          {
            v11 = sub_B5D6C8((unsigned int)treasureDeviceId);
            sub_B5D668(v11, 0LL);
          }
          return beforeTreasureDeviceIds->m_Items[v8 + 1];
        }
      }
    }
  }
  return result;
}


int32_t __fastcall ServantChangeEntity__GetBeforeTreasureDeviceId(
        ServantChangeEntity_o *this,
        int32_t treasureDeviceId,
        const MethodInfo *method)
{
  struct System_Int32_array *beforeTreasureDeviceIds; // x11
  int32_t result; // w0
  struct System_Int32_array *afterTreasureDeviceIds; // x8
  int max_length; // w10
  __int64 v8; // x9
  int32_t *v9; // x11
  int v10; // w10
  __int64 v11; // x0

  beforeTreasureDeviceIds = this->fields.beforeTreasureDeviceIds;
  result = treasureDeviceId;
  if ( beforeTreasureDeviceIds )
  {
    afterTreasureDeviceIds = this->fields.afterTreasureDeviceIds;
    if ( afterTreasureDeviceIds )
    {
      max_length = beforeTreasureDeviceIds->max_length;
      if ( max_length >= 1 )
      {
        v8 = 0LL;
        v9 = &beforeTreasureDeviceIds->m_Items[1];
        while ( v9[v8] != treasureDeviceId )
        {
          if ( (int)++v8 >= max_length )
            return result;
        }
        v10 = afterTreasureDeviceIds->max_length;
        if ( (int)v8 < v10 )
        {
          if ( (unsigned int)v8 >= v10 )
          {
            v11 = sub_B5D6C8((unsigned int)treasureDeviceId);
            sub_B5D668(v11, 0LL);
          }
          return afterTreasureDeviceIds->m_Items[v8 + 1];
        }
      }
    }
  }
  return result;
}


bool __fastcall ServantChangeEntity__HasFlag(ServantChangeEntity_o *this, int32_t type, const MethodInfo *method)
{
  return (this->fields.flag & type) != 0;
}


bool __fastcall ServantChangeEntity__IsEnable(ServantChangeEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t condTargetId; // w20
  int32_t condType; // w21
  int64_t condValue; // x19

  if ( (byte_42E994E & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E994E = 1;
  }
  condType = this->fields.condType;
  condTargetId = this->fields.condTargetId;
  condValue = this->fields.condValue;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condTargetId, condValue, 0, 0LL);
}