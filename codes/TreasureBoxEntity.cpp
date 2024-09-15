void __fastcall TreasureBoxEntity___ctor(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A2E9A2 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataEntityBase_int___ctor__, method);
    byte_4A2E9A2 = 1;
  }
  this->fields.consumeItemId = -1;
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30FF580 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall TreasureBoxEntity__CreatePrimaryKey(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall TreasureBoxEntity__get_ConsumeItemId(TreasureBoxEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t result; // w0
  CommonConsumeMaster_o *Master_object; // x0
  __int64 v6; // x1
  struct System_String_o *MasterName_k__BackingField; // x8
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x8

  if ( (byte_4A2E9A1 & 1) == 0 )
  {
    sub_1B761C0(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_1B761C0(&DataManager_TypeInfo, v3);
    byte_4A2E9A1 = 1;
  }
  result = this->fields.consumeItemId;
  if ( result <= 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (CommonConsumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E623B4 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
    if ( Master_object )
    {
      Master_object = (CommonConsumeMaster_o *)CommonConsumeMaster__GetIdEntityList(
                                                 Master_object,
                                                 this->fields.commonConsumeId,
                                                 0LL);
      if ( !Master_object || (MasterName_k__BackingField = Master_object->fields._MasterName_k__BackingField) == 0LL )
      {
        result = -1;
        goto LABEL_13;
      }
      if ( !(_DWORD)MasterName_k__BackingField )
        sub_1B76424(Master_object, v6);
      list = Master_object->fields.list;
      if ( list )
      {
        result = HIDWORD(list->fields._monitor);
LABEL_13:
        this->fields.consumeItemId = result;
        return result;
      }
    }
    sub_1B7641C(Master_object, v6);
  }
  return result;
}