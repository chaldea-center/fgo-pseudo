void __fastcall ClassRelationOverwriteMaster___ctor(ClassRelationOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4214700 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__,
      method);
    byte_4214700 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    290,
    (const MethodInfo_2669F88 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__);
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

  if ( (byte_42146FE & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_42146FE = 1;
  }
  PK = ClassRelationOverwriteEntity__CreatePK(id, atkSide, atkClass, defClass, *(const MethodInfo **)&defClass);
  return (ClassRelationOverwriteEntity_o *)DataMasterBase_WarGroupMaster__WarGroupEntity__string___GetEntity(
                                             (DataMasterBase_WarGroupMaster__WarGroupEntity__string__o *)this,
                                             PK,
                                             (const MethodInfo_266A024 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__);
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

  if ( (byte_42146FF & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_42146FF = 1;
  }
  PK = ClassRelationOverwriteEntity__CreatePK(id, atkSide, atkClass, defClass, *(const MethodInfo **)&atkClass);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_266A07C *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__);
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
  const MethodInfo *v15; // x6
  unsigned int v16; // w8
  _DWORD *v17; // x22
  const MethodInfo *v18; // x6
  unsigned int v19; // w8
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x6
  unsigned int v23; // w8
  int32_t v24; // w2
  int32_t v25; // w3
  const MethodInfo *v26; // x6
  unsigned int v28; // w8
  __int64 v29; // x0

  if ( (byte_4214701 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, outEnt);
    byte_4214701 = 1;
  }
  *outEnt = 0LL;
  sub_B0D840(
    (BattleServantConfConponent_o *)outEnt,
    0LL,
    *(System_String_array ***)&relationId,
    (System_String_array **)isAtkSide,
    *(System_Boolean_array ***)&atkClass,
    *(System_Int32_array ***)&defClass,
    (System_Int32_array *)method,
    v7);
  Entity = sub_B0D8BC(int___TypeInfo, 4LL);
  if ( !Entity )
    sub_B0D97C(0LL);
  v16 = *(_DWORD *)(Entity + 24);
  v17 = (_DWORD *)Entity;
  if ( !v16 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 32) = relationId;
  if ( v16 == 1 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 36) = isAtkSide;
  if ( v16 <= 2 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 40) = atkClass;
  if ( v16 == 3 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 44) = defClass;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, relationId, isAtkSide, atkClass, defClass, v15);
  if ( (Entity & 1) != 0 )
    return 1;
  v19 = v17[6];
  if ( v19 <= 2 )
    goto LABEL_19;
  v17[10] = atkClass;
  if ( v19 == 3 )
    goto LABEL_19;
  v20 = v17[8];
  v21 = v17[9];
  v17[11] = 0;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v20, v21, atkClass, 0, v18);
  if ( (Entity & 1) != 0 )
    return 1;
  v23 = v17[6];
  if ( v23 <= 2 )
    goto LABEL_19;
  v17[10] = 0;
  if ( v23 == 3 )
    goto LABEL_19;
  v24 = v17[8];
  v25 = v17[9];
  v17[11] = defClass;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v24, v25, 0, defClass, v22);
  if ( (Entity & 1) != 0 )
    return 1;
  v28 = v17[6];
  if ( v28 <= 2 || (v17[10] = 0, v28 == 3) )
  {
LABEL_19:
    v29 = sub_B0D9A8(Entity);
    sub_B0D948(v29, 0LL);
  }
  v17[11] = 0;
  return ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v17[8], v17[9], 0, 0, v26);
}