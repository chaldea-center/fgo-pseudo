void QuestAutoOrganizationAdjustEntity___ctor(QuestAutoOrganizationAdjustEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E05007 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_int___ctor__);
    byte_4E05007 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_34E6B24 *)Method_DataEntityBase_int___ctor__);
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


float QuestAutoOrganizationAdjustEntity__GetAdjustRate_43599132(
        QuestAutoOrganizationAdjustEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  bool v5; // w0
  float result; // s0

  if ( (byte_4E05006 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4E05006 = 1;
  }
  v5 = System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)individualities,
         this->fields.individuality,
         (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___);
  result = 1.0;
  if ( v5 )
    return (float)this->fields.adjustRate / 1000.0;
  return result;
}


bool QuestAutoOrganizationAdjustEntity__IsMatchingIndividualityBySvtId(
        QuestAutoOrganizationAdjustEntity_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t dispLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4E05005 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    byte_4E05005 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !Master_object )
    goto LABEL_11;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          svtId,
          (const MethodInfo_34E92A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  Master_object = entity;
  if ( !entity )
LABEL_11:
    sub_1CE6958(Master_object, v10);
  return ServantEntity__IsIndividuality(
           (ServantEntity_o *)entity,
           limitCount,
           dispLimitCount,
           this->fields.individuality,
           0);
}