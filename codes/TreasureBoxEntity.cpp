void TreasureBoxEntity___ctor(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C27F9F & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C27F9F = 1;
  }
  this->fields.consumeItemId = -1;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
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
  __int64 v6; // x2
  il2cpp_array_size_t max_length; // x8
  CommonConsumeEntity_o *v8; // x8

  if ( (byte_4C27F9E & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    byte_4C27F9E = 1;
  }
  result = this->fields.consumeItemId;
  if ( result <= 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (CommonConsumeEntity_array *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
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
        sub_1C2D6F4(Master_object, v5, v6);
      v8 = Master_object->m_Items[0];
      if ( v8 )
      {
        result = v8->fields.objectId;
LABEL_13:
        this->fields.consumeItemId = result;
        return result;
      }
    }
    sub_1C2D6EC(Master_object, v5);
  }
  return result;
}