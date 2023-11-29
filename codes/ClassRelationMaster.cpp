void __fastcall ClassRelationMaster___ctor(ClassRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F99D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__, method);
    byte_40F99D1 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    107,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassRelationEntity_o *__fastcall ClassRelationMaster__GetEntity(
        ClassRelationMaster_o *this,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_40F99CF & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__,
      *(_QWORD *)&atkClass);
    byte_40F99CF = 1;
  }
  PK = ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_266F7D8 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassRelationMaster__TryGetEntity(
        ClassRelationMaster_o *this,
        ClassRelationEntity_o **entity,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_40F99D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__, entity);
    byte_40F99D0 = 1;
  }
  PK = ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ClassRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  ClassRelationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x4
  float v9; // s8
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F99D2 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ClassRelationMaster___, *(_QWORD *)&def);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40F99D2 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v9 = 1.0;
  if ( MasterData_WarQuestSelectionMaster
    && ClassRelationMaster__TryGetEntity(MasterData_WarQuestSelectionMaster, &entity, atk, def, v8) )
  {
    if ( entity )
      return (float)entity->fields.attackRate / 1000.0;
LABEL_9:
    sub_B170D4();
  }
  return v9;
}