void __fastcall ClassRelationMaster___ctor(ClassRelationMaster_o *this, const MethodInfo *method)
{
  if ( (byte_41887E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__, method);
    byte_41887E8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    107,
    (const MethodInfo_24E4484 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassRelationEntity_o *__fastcall ClassRelationMaster__GetEntity(
        ClassRelationMaster_o *this,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_41887E6 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__,
      *(_QWORD *)&atkClass);
    byte_41887E6 = 1;
  }
  PK = ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                    (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_24E4520 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__);
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

  if ( (byte_41887E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__, entity);
    byte_41887E7 = 1;
  }
  PK = ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_24E4578 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall ClassRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  ClassRelationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x4
  float v10; // s8
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_41887E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ClassRelationMaster___, *(_QWORD *)&def);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_41887E9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v10 = 1.0;
  if ( MasterData_WarQuestSelectionMaster )
  {
    Instance = (WebViewManager_o *)ClassRelationMaster__TryGetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     &entity,
                                     atk,
                                     def,
                                     v9);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (float)entity->fields.attackRate / 1000.0;
LABEL_9:
      sub_B2C434(Instance, v7);
    }
  }
  return v10;
}