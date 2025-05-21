void __fastcall TreasureBoxEntity___ctor(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B456F5 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_int___ctor__, method);
    byte_4B456F5 = 1;
  }
  this->fields.consumeItemId = -1;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_32DF958 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureBoxEntity__CreatePrimaryKey(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall TreasureBoxEntity__get_ConsumeItemId(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t result; // w0
  CommonConsumeEntity_array *Master_object; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x8
  CommonConsumeEntity_o *v9; // x8

  if ( (byte_4B456F4 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    byte_4B456F4 = 1;
  }
  result = this->fields.consumeItemId;
  if ( result <= 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (CommonConsumeEntity_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
    if ( Master_object )
    {
      Master_object = CommonConsumeMaster__GetIdEntityList(
                        (CommonConsumeMaster_o *)Master_object,
                        this->fields.commonConsumeId,
                        0LL);
      if ( !Master_object || (v8 = *(_QWORD *)&Master_object->max_length) == 0 )
      {
        result = -1;
        goto LABEL_13;
      }
      if ( !(_DWORD)v8 )
        sub_1BDBADC(Master_object, v6, v7);
      v9 = Master_object->m_Items[0];
      if ( v9 )
      {
        result = v9->fields.objectId;
LABEL_13:
        this->fields.consumeItemId = result;
        return result;
      }
    }
    sub_1BDBAD4(Master_object, v6);
  }
  return result;
}