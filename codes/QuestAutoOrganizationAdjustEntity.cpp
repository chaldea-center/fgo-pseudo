void QuestAutoOrganizationAdjustEntity___ctor(QuestAutoOrganizationAdjustEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970E73 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_5970E73 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t QuestAutoOrganizationAdjustEntity__CreatePrimaryKey(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


float QuestAutoOrganizationAdjustEntity__GetAdjustRate(
        QuestAutoOrganizationAdjustEntity_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  bool IsMatchingIndividualityBySvtId; // w0
  float result; // s0

  IsMatchingIndividualityBySvtId = QuestAutoOrganizationAdjustEntity__IsMatchingIndividualityBySvtId(
                                     this,
                                     svtId,
                                     limitCount,
                                     dispLimitCount,
                                     method);
  result = 1.0;
  if ( IsMatchingIndividualityBySvtId )
    return (float)this->fields.adjustRate / 1000.0;
  return result;
}


float QuestAutoOrganizationAdjustEntity__GetAdjustRatePerThousand(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.adjustRate / 1000.0;
}


float QuestAutoOrganizationAdjustEntity__GetAdjustRate_49476276(
        QuestAutoOrganizationAdjustEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  bool v5; // w0
  float result; // s0

  if ( (byte_5970E72 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Contains_int___);
    byte_5970E72 = 1;
  }
  v5 = System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)individualities,
         this->fields.individuality,
         (const MethodInfo_3876640 *)Method_System_Linq_Enumerable_Contains_int___);
  result = 1.0;
  if ( v5 )
    return (float)this->fields.adjustRate / 1000.0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAutoOrganizationAdjustEntity__IsMatchingIndividualityBySvtId(
        QuestAutoOrganizationAdjustEntity_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  int v9; // w8
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5970E71 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_ServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_5970E71 = 1;
  }
  v9 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&svtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          svtId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_2213CDC(Master_object, v11);
  return ServantEntity__IsIndividuality(
           (ServantEntity_o *)entity,
           limitCount,
           dispLimitCount,
           this->fields.individuality,
           0);
}