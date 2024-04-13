void __fastcall ClassRelationMaster___ctor(ClassRelationMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA8E7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EA8E7 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    108,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassRelationEntity_o *__fastcall ClassRelationMaster__GetEntity(
        ClassRelationMaster_o *this,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EA8E5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__,
      atkClass,
      defClass,
      method);
    byte_42EA8E5 = 1;
  }
  PK = ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__GetEntity__);
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

  if ( (byte_42EA8E6 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__,
      (_DWORD)entity,
      atkClass,
      *(_QWORD *)&defClass);
    byte_42EA8E6 = 1;
  }
  PK = ClassRelationEntity__CreatePK(atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ClassRelationMaster__ClassRelationEntity__string__TryGetEntity__);
}


float __fastcall ClassRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  ClassRelationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x4
  float v13; // s8
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA8E8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ClassRelationMaster___, def, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EA8E8 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v13 = 1.0;
  if ( MasterData_WarQuestSelectionMaster )
  {
    Instance = (WebViewManager_o *)ClassRelationMaster__TryGetEntity(
                                     MasterData_WarQuestSelectionMaster,
                                     &entity,
                                     atk,
                                     def,
                                     v12);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (float)entity->fields.attackRate / 1000.0;
LABEL_9:
      sub_B5D69C(Instance, v10);
    }
  }
  return v13;
}