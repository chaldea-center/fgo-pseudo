void __fastcall AttriRelationMaster___ctor(AttriRelationMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EBD7F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42EBD7F = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    107,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
AttriRelationEntity_o *__fastcall AttriRelationMaster__GetEntity(
        AttriRelationMaster_o *this,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42EBD7D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__,
      atkAttri,
      defAttri,
      method);
    byte_42EBD7D = 1;
  }
  PK = AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&defAttri);
  return (AttriRelationEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                    (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                    PK,
                                    (const MethodInfo_23FB260 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AttriRelationMaster__TryGetEntity(
        AttriRelationMaster_o *this,
        AttriRelationEntity_o **entity,
        int32_t atkAttri,
        int32_t defAttri,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42EBD7E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__,
      (_DWORD)entity,
      atkAttri,
      *(_QWORD *)&defAttri);
    byte_42EBD7E = 1;
  }
  PK = AttriRelationEntity__CreatePK(atkAttri, defAttri, *(const MethodInfo **)&atkAttri);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_AttriRelationMaster__AttriRelationEntity__string__TryGetEntity__);
}


float __fastcall AttriRelationMaster__getRate(int32_t atk, int32_t def, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  WebViewManager_o *Instance; // x0
  __int64 v10; // x1
  AttriRelationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v12; // x3
  float v13; // s8
  AttriRelationEntity_o *Entity; // x0

  if ( (byte_42EBD80 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_AttriRelationMaster___, def, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42EBD80 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v10);
  MasterData_WarQuestSelectionMaster = (AttriRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AttriRelationMaster___);
  v13 = 1.0;
  if ( MasterData_WarQuestSelectionMaster )
  {
    Entity = AttriRelationMaster__GetEntity(MasterData_WarQuestSelectionMaster, atk, def, v12);
    if ( Entity )
      return (float)Entity->fields.attackRate / 1000.0;
  }
  return v13;
}