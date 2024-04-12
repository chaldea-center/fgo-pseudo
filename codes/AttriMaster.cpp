void __fastcall AttriMaster___ctor(AttriMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42B1D44 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__);
    byte_42B1D44 = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    477,
    (const MethodInfo_23E223C *)Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__);
}


int32_t __fastcall AttriMaster__GetAttrValue(AttriMaster_o *this, int32_t id, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B1D43 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_AttriMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
    byte_42B1D43 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  id,
                                                                  (const MethodInfo_23E2334 *)Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B52A5C(Master_WarQuestSelectionMaster, v5);
  }
  return 10;
}