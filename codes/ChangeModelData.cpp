void __fastcall ChangeModelData___ctor(ChangeModelData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


float __fastcall ChangeModelData__GetHeadUpOffsetY(
        ChangeModelData_o *this,
        ServantEntity_o *originalSvtEnt,
        const MethodInfo *method)
{
  ServantEntity_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  float HeadUpY; // s0
  struct System_Nullable_float__o v14; // [xsp+0h] [xbp-30h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_float__o v16; // 0:x0.8
  System_Nullable_float__o p_headUpOffsetY; // 0:x0.8

  v3 = originalSvtEnt;
  if ( (byte_4B471F3 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, originalSvtEnt);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v6);
    sub_1BDB878(&Method_System_Nullable_float___ctor__, v7);
    sub_1BDB878(&Method_System_Nullable_float__get_HasValue__, v8);
    sub_1BDB878(&Method_System_Nullable_float__get_Value__, v9);
    byte_4B471F3 = 1;
  }
  entity = 0LL;
  if ( !this->fields.headUpOffsetY.fields.hasValue )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( Master_object )
    {
      Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        this->fields.modelId,
                                        (const MethodInfo_32E1E88 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v3 = (ServantEntity_o *)entity;
        if ( entity )
        {
LABEL_9:
          HeadUpY = ServantEntity__getHeadUpY(v3, 0LL);
          v16 = (System_Nullable_float__o)&v14;
          v14 = 0LL;
          System_Nullable_float____ctor(v16, HeadUpY, (const MethodInfo_37F7AEC *)Method_System_Nullable_float___ctor__);
          this->fields.headUpOffsetY = v14;
          goto LABEL_10;
        }
      }
      else if ( v3 )
      {
        goto LABEL_9;
      }
    }
    sub_1BDBAD4(Master_object, v11);
  }
LABEL_10:
  p_headUpOffsetY = (System_Nullable_float__o)&this->fields.headUpOffsetY;
  return System_Nullable_float___get_Value(
           p_headUpOffsetY,
           (const MethodInfo_37F7B04 *)Method_System_Nullable_float__get_Value__);
}


int32_t __fastcall ChangeModelData__GetModelId(
        ChangeModelData_o *this,
        int32_t originalModelId,
        const MethodInfo *method)
{
  if ( this->fields.modelId <= 0 )
    return originalModelId;
  else
    return this->fields.modelId;
}


void __fastcall ChangeModelData__ResetAfterContinue(
        ChangeModelData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  if ( this->fields.isKeepChangeModelAfterContinue <= 0 )
  {
    if ( !svtData )
      sub_1BDBAD4(this, 0LL);
    BattleServantData__ResetChangeModelData(svtData, 0LL);
  }
}


bool __fastcall ChangeModelData__get_IsChange(ChangeModelData_o *this, const MethodInfo *method)
{
  return this->fields.modelId > 0;
}


bool __fastcall ChangeModelData__get_IsKeepChangeModelAfterContinue(ChangeModelData_o *this, const MethodInfo *method)
{
  return this->fields.isKeepChangeModelAfterContinue > 0;
}