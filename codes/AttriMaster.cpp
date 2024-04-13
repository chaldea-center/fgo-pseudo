void __fastcall AttriMaster___ctor(AttriMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBD7A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__, (_DWORD)method, v2, v3);
    byte_42EBD7A = 1;
  }
  DataMasterBase_WarMaster__WarEntity__int____ctor(
    (DataMasterBase_WarMaster__WarEntity__int__o *)this,
    478,
    (const MethodInfo_23FAD74 *)Method_DataMasterBase_AttriMaster__AttriEntity__int___ctor__);
}


int32_t __fastcall AttriMaster__GetAttrValue(AttriMaster_o *this, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EBD79 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_AttriMaster___, id, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42EBD79 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_AttriMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  id,
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_AttriMaster__AttriEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
  }
  return 10;
}