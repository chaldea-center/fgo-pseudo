void TreasureBoxEntity___ctor(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  const MethodInfo_3F0E518 *v3; // x1

  if ( (byte_59715A5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59715A5 = 1;
  }
  v3 = (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__;
  this->fields.consumeItemId = -1;
  DataEntityBase_int____ctor((DataEntityBase_int__o *)this, v3);
}


int32_t TreasureBoxEntity__CreatePrimaryKey(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t TreasureBoxEntity__get_ConsumeItemId(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  CommonConsumeEntity_array *Master_object; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // x8
  CommonConsumeEntity_o *v7; // x8

  if ( (byte_59715A4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59715A4 = 1;
  }
  result = this->fields.consumeItemId;
  if ( result <= 0 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (CommonConsumeEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
    if ( Master_object )
    {
      Master_object = CommonConsumeMaster__GetIdEntityList(
                        (CommonConsumeMaster_o *)Master_object,
                        this->fields.commonConsumeId,
                        0);
      if ( !Master_object || (max_length = Master_object->max_length) == 0 )
      {
        result = -1;
        goto LABEL_13;
      }
      if ( !(_DWORD)max_length )
        sub_2213CE4(Master_object);
      v7 = Master_object->m_Items[0];
      if ( v7 )
      {
        result = v7->fields.objectId;
LABEL_13:
        this->fields.consumeItemId = result;
        return result;
      }
    }
    sub_2213CDC(Master_object, v5);
  }
  return result;
}