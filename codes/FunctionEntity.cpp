void __fastcall FunctionEntity___ctor(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A4F4 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418A4F4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall FunctionEntity__CreatePrimaryKey(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall FunctionEntity__GetAddStateBuffTypeFromFunction(FunctionEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t funcType; // w8
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  struct System_Int32_array *vals; // x8
  __int64 v10; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A4F3 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v4);
    byte_418A4F3 = 1;
  }
  entity = 0LL;
  funcType = this->fields.funcType;
  if ( funcType == 16 || funcType == 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BuffMaster___);
    vals = this->fields.vals;
    if ( !vals )
      goto LABEL_15;
    if ( !vals->max_length )
    {
      v10 = sub_B2C460(Master_WarQuestSelectionMaster);
      sub_B2C400(v10, 0LL);
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_15;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                    &entity,
                                                                    vals->m_Items[1],
                                                                    (const MethodInfo_24E412C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
    {
      if ( entity )
        return *(&entity->fields.id + 1);
LABEL_15:
      sub_B2C434(Master_WarQuestSelectionMaster, v7);
    }
  }
  return 0;
}


System_Int32_array *__fastcall FunctionEntity__getEffectList(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_418A4F1 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_418A4F1 = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall FunctionEntity__getQuestTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0

  if ( (byte_418A4F2 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, method);
    byte_418A4F2 = 1;
  }
  result = this->fields.questTvals;
  if ( !result )
    return (System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  return result;
}


System_Int32_array *__fastcall FunctionEntity__getTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.tvals;
}


System_Int32_array *__fastcall FunctionEntity__getValues(FunctionEntity_o *this, const MethodInfo *method)
{
  return this->fields.vals;
}


bool __fastcall FunctionEntity__isTargetEnemy(FunctionEntity_o *this, const MethodInfo *method)
{
  return (this->fields.applyTarget | 1) == 3;
}


bool __fastcall FunctionEntity__isTargetPlayer(FunctionEntity_o *this, const MethodInfo *method)
{
  return (this->fields.applyTarget | 2) == 3;
}