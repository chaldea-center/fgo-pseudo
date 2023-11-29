void __fastcall ClassRelationOverwriteMaster___ctor(ClassRelationOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_40F99D8 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__,
      method);
    byte_40F99D8 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    290,
    (const MethodInfo_266F73C *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__);
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

  if ( (byte_40F99D6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_40F99D6 = 1;
  }
  PK = ClassRelationOverwriteEntity__CreatePK(id, atkSide, atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_266F7D8 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__);
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

  if ( (byte_40F99D7 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_40F99D7 = 1;
  }
  PK = ClassRelationOverwriteEntity__CreatePK(id, atkSide, atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266F830 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__);
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
  __int64 v14; // x2
  __int64 Entity; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x6
  unsigned int v19; // w8
  _DWORD *v20; // x22
  const MethodInfo *v21; // x6
  unsigned int v22; // w8
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x6
  unsigned int v26; // w8
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x6
  unsigned int v31; // w8

  if ( (byte_40F99D9 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, outEnt);
    byte_40F99D9 = 1;
  }
  *outEnt = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)outEnt,
    0LL,
    *(System_String_array ***)&relationId,
    (System_String_array **)isAtkSide,
    *(System_Boolean_array ***)&atkClass,
    *(System_Int32_array ***)&defClass,
    (System_Int32_array *)method,
    v7);
  Entity = sub_B17014(int___TypeInfo, 4LL, v14);
  if ( !Entity )
    sub_B170D4();
  v19 = *(_DWORD *)(Entity + 24);
  v20 = (_DWORD *)Entity;
  if ( !v19 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 32) = relationId;
  if ( v19 == 1 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 36) = isAtkSide;
  if ( v19 <= 2 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 40) = atkClass;
  if ( v19 == 3 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 44) = defClass;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, relationId, isAtkSide, atkClass, defClass, v18);
  if ( (Entity & 1) != 0 )
    return 1;
  v22 = v20[6];
  if ( v22 <= 2 )
    goto LABEL_19;
  v20[10] = atkClass;
  if ( v22 == 3 )
    goto LABEL_19;
  v23 = v20[8];
  v24 = v20[9];
  v20[11] = 0;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v23, v24, atkClass, 0, v21);
  if ( (Entity & 1) != 0 )
    return 1;
  v26 = v20[6];
  if ( v26 <= 2 )
    goto LABEL_19;
  v20[10] = 0;
  if ( v26 == 3 )
    goto LABEL_19;
  v27 = v20[8];
  v28 = v20[9];
  v20[11] = defClass;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v27, v28, 0, defClass, v25);
  if ( (Entity & 1) != 0 )
    return 1;
  v31 = v20[6];
  if ( v31 <= 2 || (v20[10] = 0, v31 == 3) )
  {
LABEL_19:
    sub_B17100(Entity, v16, v17);
    sub_B170A0();
  }
  v20[11] = 0;
  return ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v20[8], v20[9], 0, 0, v29);
}