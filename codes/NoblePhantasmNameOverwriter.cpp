void __fastcall NoblePhantasmNameOverwriter__SetOverwriteNpLabel(
        UserServantEntity_o *entity,
        UILabel_o *npNameLabel,
        UILabel_o *npRubyLabel,
        const MethodInfo *method)
{
  int32_t SvtId; // w22
  int32_t DispSelectLimitCount; // w1
  const MethodInfo *v9; // x4

  if ( !entity )
    sub_1B64C5C(0LL, npNameLabel);
  SvtId = UserServantEntity__getSvtId(entity, 0LL);
  DispSelectLimitCount = UserServantEntity__getDispSelectLimitCount(entity, 0, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteNpLabel_44551916(SvtId, DispSelectLimitCount, npNameLabel, npRubyLabel, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NoblePhantasmNameOverwriter__SetOverwriteNpLabel_44551916(
        int32_t servantId,
        int32_t dispLimitCount,
        UILabel_o *npNameLabel,
        UILabel_o *npRubyLabel,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  ServantLimitImageMaster_o *Master_object; // x0
  __int64 v15; // x1
  int32_t ServantLimitCountSealAfter; // w22
  System_String_o *OverwriteTDName; // x0
  const MethodInfo *v18; // x2
  System_String_o *OverwriteTDRuby; // x0
  const MethodInfo *v20; // x2
  ServantLimitAddEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A0230C & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantLimitAddMaster___, *(_QWORD *)&dispLimitCount);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v10);
    sub_1B64A00(&DataManager_TypeInfo, v11);
    sub_1B64A00(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_4A0230C = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !Master_object )
    goto LABEL_17;
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_object,
                                 servantId,
                                 dispLimitCount,
                                 0LL);
  Master_object = (ServantLimitImageMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantLimitAddMaster___);
  if ( !Master_object )
    goto LABEL_17;
  if ( !ServantLimitAddMaster__TryGetEntity(
          (ServantLimitAddMaster_o *)Master_object,
          &entity,
          servantId,
          ServantLimitCountSealAfter,
          0LL) )
    return;
  Master_object = (ServantLimitImageMaster_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (ServantLimitImageMaster_o *)DataManager__GetMasterData_object_(
                                                 (DataManager_o *)Master_object,
                                                 (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Master_object )
    goto LABEL_17;
  Master_object = (ServantLimitImageMaster_o *)DataMasterBase_object__object__int___GetEntity(
                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                                 servantId,
                                                 (const MethodInfo_30D6798 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !Master_object )
    goto LABEL_17;
  if ( !ServantEntity__IsNameTrue((ServantEntity_o *)Master_object, 0LL) )
    return;
  Master_object = (ServantLimitImageMaster_o *)entity;
  if ( !entity
    || (OverwriteTDName = ServantLimitAddEntity__GetOverwriteTDName(entity, 0LL),
        NoblePhantasmNameOverwriter__SetOverwriteText(npNameLabel, OverwriteTDName, v18),
        (Master_object = (ServantLimitImageMaster_o *)entity) == 0LL) )
  {
LABEL_17:
    sub_1B64C5C(Master_object, v15);
  }
  OverwriteTDRuby = ServantLimitAddEntity__GetOverwriteTDRuby(entity, 0LL);
  NoblePhantasmNameOverwriter__SetOverwriteText(npRubyLabel, OverwriteTDRuby, v20);
}


void __fastcall NoblePhantasmNameOverwriter__SetOverwriteText(
        UILabel_o *label,
        System_String_o *overwriteText,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1

  IsNullOrEmpty = System_String__IsNullOrEmpty(overwriteText, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !label )
      sub_1B64C5C(IsNullOrEmpty, v6);
    UILabel__set_text(label, overwriteText, 0LL);
  }
}