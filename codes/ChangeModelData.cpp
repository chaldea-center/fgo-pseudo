void ChangeModelData___ctor(ChangeModelData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


float ChangeModelData__GetHeadUpOffsetY(
        ChangeModelData_o *this,
        ServantEntity_o *originalSvtEnt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  float HeadUpY; // s0
  System_Nullable_float__o v7; // x0
  System_Nullable_float__o p_headUpOffsetY; // x0
  struct System_Nullable_float__o v10; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C45932 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&Method_System_Nullable_float__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_float__get_Value__);
    byte_4C45932 = 1;
  }
  entity = 0;
  if ( !this->fields.headUpOffsetY.fields.hasValue )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( Master_object )
    {
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        this->fields.modelId,
                                        (const MethodInfo_33A10EC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        originalSvtEnt = (ServantEntity_o *)entity;
        if ( entity )
        {
LABEL_9:
          HeadUpY = ServantEntity__getHeadUpY(originalSvtEnt, 0);
          v7 = (System_Nullable_float__o)&v10;
          v10 = 0;
          System_Nullable_float____ctor(v7, HeadUpY, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
          this->fields.headUpOffsetY = v10;
          goto LABEL_10;
        }
      }
      else if ( originalSvtEnt )
      {
        goto LABEL_9;
      }
    }
    sub_1C372B4(Master_object);
  }
LABEL_10:
  p_headUpOffsetY = (System_Nullable_float__o)&this->fields.headUpOffsetY;
  return System_Nullable_float___get_Value(
           p_headUpOffsetY,
           (const MethodInfo_38CAEBC *)Method_System_Nullable_float__get_Value__);
}


int32_t ChangeModelData__GetModelId(ChangeModelData_o *this, int32_t originalModelId, const MethodInfo *method)
{
  if ( this->fields.modelId <= 0 )
    return originalModelId;
  else
    return this->fields.modelId;
}


void ChangeModelData__ResetAfterContinue(
        ChangeModelData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( this->fields.isKeepChangeModelAfterContinue <= 0 )
  {
    if ( !svtData )
      sub_1C372B4(this);
    BattleServantData__ResetChangeModelData(svtData, 0);
  }
}


bool ChangeModelData__get_IsChange(ChangeModelData_o *this, const MethodInfo *method)
{
  return this->fields.modelId > 0;
}


bool ChangeModelData__get_IsKeepChangeModelAfterContinue(ChangeModelData_o *this, const MethodInfo *method)
{
  return this->fields.isKeepChangeModelAfterContinue > 0;
}