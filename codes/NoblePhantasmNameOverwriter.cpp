void NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
        UserServantEntity_o *entity,
        UILabel_o *npNameLabel,
        UILabel_o *npRubyLabel,
        const MethodInfo *method)
{
  int32_t SvtId; // w22
  int32_t DispSelectLimitCount; // w1
  const MethodInfo *v9; // x4

  if ( !entity )
    sub_1C71608(0, npNameLabel);
  SvtId = UserServantEntity__getSvtId(entity, 0);
  DispSelectLimitCount = UserServantEntity__getDispSelectLimitCount(entity, 0, 0);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel_48918216(SvtId, DispSelectLimitCount, npNameLabel, npRubyLabel, v9);
}


void NoblePhantasmNameOverwriter__SetOverwriteNpLabel_48918216(
        int32_t servantId,
        int32_t dispLimitCount,
        UILabel_o *npNameLabel,
        UILabel_o *npRubyLabel,
        const MethodInfo *method)
{
  ServantLimitImageMaster_o *Master_object; // x0
  __int64 v10; // x1
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *OverwriteTDName; // x0
  const MethodInfo *v13; // x2
  System_String_o *OverwriteTDRuby; // x0
  const MethodInfo *v15; // x2
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CCB4AE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantLimitAddMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CCB4AE = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_17;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_object,
                                 servantId,
                                 dispLimitCount,
                                 0);
  Master_object = (ServantLimitImageMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          servantId,
          ServantLimitCountSealAfter,
          0) )
    return;
  Master_object = (ServantLimitImageMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (ServantLimitImageMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                 servantId,
                                                 (const MethodInfo_3408E80 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_17;
  if ( !ServantEntity__IsNameTrue((ServantEntity_o *)Master_object, 0) )
    return;
  Master_object = (ServantLimitImageMaster_o *)entity;
  if ( !entity
    || (OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(entity, 0),
        NoblePhantasmNameOverwriter__SetOverwriteText(npNameLabel, OverwriteTDName, v13),
        (Master_object = (ServantLimitImageMaster_o *)entity) == 0) )
  {
LABEL_17:
    sub_1C71608(Master_object, v10);
  }
  OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0);
  NoblePhantasmNameOverwriter__SetOverwriteText(npRubyLabel, OverwriteTDRuby, v15);
}


void NoblePhantasmNameOverwriter__SetOverwriteText(
        UILabel_o *label,
        System_String_o *overwriteText,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  IsNullOrEmpty = System_String__IsNullOrEmpty(overwriteText, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !label )
      sub_1C71608(IsNullOrEmpty, v6);
    UILabel__set_text(label, overwriteText, 0);
  }
}