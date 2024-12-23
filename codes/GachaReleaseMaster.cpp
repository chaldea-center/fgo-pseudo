void __fastcall GachaReleaseMaster___ctor(GachaReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B66E79 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string___ctor__, method);
    byte_4B66E79 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    61,
    (const MethodInfo_31FDADC *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaReleaseEntity_o *__fastcall GachaReleaseMaster__GetEntity(
        GachaReleaseMaster_o *this,
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B66E77 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__GetEntity__, *(_QWORD *)&gachaId);
    byte_4B66E77 = 1;
  }
  PK = (Il2CppObject *)GachaReleaseEntity__CreatePK(gachaId, type, targetId, *(const MethodInfo **)&targetId);
  return (GachaReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                   PK,
                                   (const MethodInfo_31FDB1C *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaReleaseMaster__IsEnableRelease(
        GachaReleaseMaster_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v9; // w21
  int32_t v10; // w22
  __int64 methodPtr_low; // x10

  if ( (byte_4B66E7A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&gachaId);
    sub_1BE4ACC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1BE4ACC(&GachaReleaseEntity_TypeInfo, v6);
    byte_4B66E7A = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_14:
    sub_1BE4D28(list, *(_QWORD *)&gachaId);
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_3199D94 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  if ( Count < 1 )
    return 1;
  v9 = Count;
  v10 = 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_14;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v10,
                                                               (const MethodInfo_3199E24 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_14;
    methodPtr_low = LOBYTE(GachaReleaseEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(list->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (GachaReleaseEntity_c *)list->klass->_2.typeHierarchy[methodPtr_low - 1] != GachaReleaseEntity_TypeInfo )
    {
      goto LABEL_14;
    }
    if ( LODWORD(list->fields.items) == gachaId )
      return GachaReleaseEntity__IsEnable((GachaReleaseEntity_o *)list, *(const MethodInfo **)&gachaId);
    if ( v9 == ++v10 )
      return 1;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaReleaseMaster__TryGetEntity(
        GachaReleaseMaster_o *this,
        GachaReleaseEntity_o **entity,
        int32_t gachaId,
        int32_t type,
        int32_t targetId,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B66E78 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__TryGetEntity__, entity);
    byte_4B66E78 = 1;
  }
  PK = (Il2CppObject *)GachaReleaseEntity__CreatePK(gachaId, type, targetId, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31FDB6C *)Method_DataMasterBase_GachaReleaseMaster__GachaReleaseEntity__string__TryGetEntity__);
}