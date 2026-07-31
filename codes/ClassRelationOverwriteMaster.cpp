void ClassRelationOverwriteMaster___ctor(ClassRelationOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938406 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__);
    byte_5938406 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    300,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string___ctor__);
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

  if ( (byte_5938404 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__);
    byte_5938404 = 1;
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
                                             (const MethodInfo_3EE2044 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__GetEntity__);
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

  if ( (byte_5938405 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__);
    byte_5938405 = 1;
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
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_ClassRelationOverwriteMaster__ClassRelationOverwriteEntity__string__TryGetEntity__);
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
  bool v7; // w7
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
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_5938407 & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_5938407 = 1;
  }
  *outEnt = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)outEnt,
    0,
    *(System_String_o **)&relationId,
    (System_String_o *)isAtkSide,
    atkClass,
    defClass,
    (bool)method,
    v7);
  Entity = sub_21FFD10(int___TypeInfo, 4);
  if ( !Entity )
    sub_21FFECC(0, v15);
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
LABEL_19:
    sub_21FFED4(Entity);
  v30 = v18[8];
  v31 = v18[9];
  v18[11] = 0;
  return ClassRelationOverwriteMaster__TryGetEntity(this, outEnt, v30, v31, 0, 0, v27);
}