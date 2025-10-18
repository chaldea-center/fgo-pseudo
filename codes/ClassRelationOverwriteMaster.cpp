void ClassRelationOverwriteMaster___ctor(ClassRelationOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C42D46 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__);
    byte_4C42D46 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    298,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
ClassRelationOverwriteEntity_o *ClassRelationOverwriteMaster__GetEntity(
        ClassRelationOverwriteMaster_o *this,
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C42D44 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__);
    byte_4C42D44 = 1;
  }
  PK = (Il2CppObject *)ClassRelationOverwriteEntity__CreatePK(
                         id,
                         atkSide,
                         atkClass,
                         defClass,
                         *(const MethodInfo **)&defClass);
  return (ClassRelationOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                             PK,
                                             (const MethodInfo_33A5B58 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ClassRelationOverwriteMaster__TryGetEntity(
        ClassRelationOverwriteMaster_o *this,
        ClassRelationOverwriteEntity_o **entity,
        int32_t id,
        int32_t atkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C42D45 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__);
    byte_4C42D45 = 1;
  }
  PK = (Il2CppObject *)ClassRelationOverwriteEntity__CreatePK(
                         id,
                         atkSide,
                         atkClass,
                         defClass,
                         *(const MethodInfo **)&atkClass);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33A5BA4 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool ClassRelationOverwriteMaster__getEntity(
        ClassRelationOverwriteMaster_o *this,
        ClassRelationOverwriteEntity_o **outEnt,
        int32_t relationId,
        bool isAtkSide,
        int32_t atkClass,
        int32_t defClass,
        const MethodInfo *method)
{
  __int64 Entity; // x0
  const MethodInfo *v14; // x6
  unsigned int v15; // w8
  _DWORD *v16; // x22
  const MethodInfo *v17; // x6
  unsigned int v18; // w8
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x6
  unsigned int v22; // w8
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x6
  unsigned int v27; // w8
  int32_t v28; // w2
  int32_t v29; // w3

  if ( (byte_4C42D47 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    byte_4C42D47 = 1;
  }
  *outEnt = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)outEnt, 0, relationId, (const MethodInfo *)isAtkSide);
  Entity = sub_1C37100(int___TypeInfo, 4);
  if ( !Entity )
    sub_1C372B4(0);
  v15 = *(_DWORD *)(Entity + 24);
  v16 = (_DWORD *)Entity;
  if ( !v15 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 32) = relationId;
  if ( v15 == 1 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 36) = isAtkSide;
  if ( v15 <= 2 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 40) = atkClass;
  if ( v15 == 3 )
    goto LABEL_19;
  *(_DWORD *)(Entity + 44) = defClass;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, relationId, isAtkSide, atkClass, defClass, v14);
  if ( (Entity & 1) != 0 )
    return 1;
  v18 = v16[6];
  if ( v18 <= 2 )
    goto LABEL_19;
  v16[10] = atkClass;
  if ( v18 == 3 )
    goto LABEL_19;
  v19 = v16[8];
  v20 = v16[9];
  v16[11] = 0;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v19, v20, atkClass, 0, v17);
  if ( (Entity & 1) != 0 )
    return 1;
  v22 = v16[6];
  if ( v22 <= 2 )
    goto LABEL_19;
  v16[10] = 0;
  if ( v22 == 3 )
    goto LABEL_19;
  v23 = v16[8];
  v24 = v16[9];
  v16[11] = defClass;
  Entity = ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v23, v24, 0, defClass, v21);
  if ( (Entity & 1) != 0 )
    return 1;
  v27 = v16[6];
  if ( v27 <= 2 || (v16[10] = 0, v27 == 3) )
LABEL_19:
    sub_1C372BC(Entity);
  v28 = v16[8];
  v29 = v16[9];
  v16[11] = 0;
  return ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v28, v29, 0, 0, v25);
}