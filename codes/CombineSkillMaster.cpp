void __fastcall CombineSkillMaster___ctor(CombineSkillMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E8B52 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__, (_DWORD)method, v2, v3);
    byte_42E8B52 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    87,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
CombineSkillEntity_o *__fastcall CombineSkillMaster__GetEntity(
        CombineSkillMaster_o *this,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42E8B50 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__, id, skillLv, method);
    byte_42E8B50 = 1;
  }
  PK = CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&skillLv);
  return (CombineSkillEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                   (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                   PK,
                                   (const MethodInfo_23FB260 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineSkillMaster__TryGetEntity(
        CombineSkillMaster_o *this,
        CombineSkillEntity_o **entity,
        int32_t id,
        int32_t skillLv,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42E8B51 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__,
      (_DWORD)entity,
      id,
      *(_QWORD *)&skillLv);
    byte_42E8B51 = 1;
  }
  PK = CombineSkillEntity__CreatePK(id, skillLv, *(const MethodInfo **)&id);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_CombineSkillMaster__CombineSkillEntity__string__TryGetEntity__);
}