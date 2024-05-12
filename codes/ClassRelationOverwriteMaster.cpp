void __fastcall ClassRelationOverwriteMaster___ctor(ClassRelationOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_438D4A0 & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__);
    byte_438D4A0 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    291,
    (const MethodInfo_21FBC48 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassRelationOverwriteEntity_o *__fastcall ClassRelationOverwriteMaster__GetEntity(
        ClassRelationOverwriteMaster_o *this,
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_438D49E & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__);
    byte_438D49E = 1;
  }
  PK = ClassRelationOverwriteEntity__CreatePK(id, atkSide, atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationOverwriteEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                             (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_21FBCE4 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassRelationOverwriteMaster__TryGetEntity(
        ClassRelationOverwriteMaster_o *this,
        ClassRelationOverwriteEntity_o **entity,
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_438D49F & 1) == 0 )
  {
    sub_B775C4(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__);
    byte_438D49F = 1;
  }
  PK = ClassRelationOverwriteEntity__CreatePK(id, atkSide, atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_21FBD3C *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassRelationOverwriteMaster__getEntity(
        ClassRelationOverwriteMaster_o *this,
        ClassRelationOverwriteEntity_o **outEnt,
        int32_t relationId,
        bool isAtkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  __int64 Entity; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x6
  unsigned int v17; // w8
  _DWORD *v18; // x22
  const MethodInfo *v19; // x6
  unsigned int v20; // w8
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x6
  unsigned int v24; // w8
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x6
  unsigned int v29; // w8
  __int64 v30; // x0

  if ( (byte_438D4A1 & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438D4A1 = 1;
  }
  *outEnt = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)outEnt,
    0LL,
    *(System_String_array ***)&relationId,
    (System_String_array **)isAtkSide,
    *(System_Boolean_array ***)&atkClass,
    *(System_Int32_array ***)&defClass,
    (System_Int32_array *)method,
    v7);
  Entity = sub_B775DC(int___TypeInfo, 4LL);
  if ( !Entity )
    sub_B7769C(0LL, v15);
  v17 = *(_DWORD *)(Entity + 24);
  v18 = (_DWORD *)Entity;
  if ( !v17 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 32) = relationId;
  if ( v17 == 1 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 36) = isAtkSide;
  if ( v17 <= 2 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 40) = atkClass;
  if ( v17 == 3 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 44) = defClass;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, relationId, isAtkSide, atkClass, defClass, v16);
  if ( (Entity & 1) != 0 )
    return 1;
  v20 = v18[6];
  if ( v20 <= 2 )
    goto LABEL_19;
  v18[10] = atkClass;
  if ( v20 == 3 )
    goto LABEL_19;
  v21 = v18[8];
  v22 = v18[9];
  v18[11] = 0;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v21, v22, atkClass, 0, v19);
  if ( (Entity & 1) != 0 )
    return 1;
  v24 = v18[6];
  if ( v24 <= 2 )
    goto LABEL_19;
  v18[10] = 0;
  if ( v24 == 3 )
    goto LABEL_19;
  v25 = v18[8];
  v26 = v18[9];
  v18[11] = defClass;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v25, v26, 0, defClass, v23);
  if ( (Entity & 1) != 0 )
    return 1;
  v29 = v18[6];
  if ( v29 <= 2 || (v18[10] = 0, v29 == 3) )
  {
LABEL_19:
    v30 = sub_B776C8(Entity);
    sub_B77668(v30, 0LL);
  }
  v18[11] = 0;
  return ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v18[8], v18[9], 0, 0, v27);
}