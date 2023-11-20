void __fastcall FunctionEntity___ctor(FunctionEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FB2FF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FB2FF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
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
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Int32_array *vals; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB2FE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v4);
    byte_40FB2FE = 1;
  }
  entity = 0LL;
  funcType = this->fields.funcType;
  if ( funcType == 16 || funcType == 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BuffMaster___);
    vals = this->fields.vals;
    if ( !vals )
      goto LABEL_15;
    if ( !vals->max_length )
    {
      sub_B17100(Master_WarQuestSelectionMaster, v7, v8);
      sub_B170A0();
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_15;
    if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
           Master_WarQuestSelectionMaster,
           &entity,
           vals->m_Items[1],
           (const MethodInfo_266F3E4 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
    {
      if ( entity )
        return *(&entity->fields.id + 1);
LABEL_15:
      sub_B170D4();
    }
  }
  return 0;
}


System_Int32_array *__fastcall FunctionEntity__getEffectList(FunctionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0

  if ( (byte_40FB2FC & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40FB2FC = 1;
  }
  result = this->fields.effectList;
  if ( !result )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
  return result;
}


System_Int32_array *__fastcall FunctionEntity__getQuestTargetValues(FunctionEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0

  if ( (byte_40FB2FD & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40FB2FD = 1;
  }
  result = this->fields.questTvals;
  if ( !result )
    return (System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v2);
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