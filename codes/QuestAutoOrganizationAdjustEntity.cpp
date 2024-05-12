void __fastcall QuestAutoOrganizationAdjustEntity___ctor(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_438C7BE & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438C7BE = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall QuestAutoOrganizationAdjustEntity__CreatePrimaryKey(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


float __fastcall QuestAutoOrganizationAdjustEntity__GetAdjustRate(
        QuestAutoOrganizationAdjustEntity_o *this,
        int64_t targetUserSvtId,
        const MethodInfo *method)
{
  if ( QuestAutoOrganizationAdjustEntity__IsMatchingIndividualityBySvtId(this, targetUserSvtId, method) )
    return (float)this->fields.adjustRate / 1000.0;
  else
    return 1.0;
}


float __fastcall QuestAutoOrganizationAdjustEntity__GetAdjustRatePerThousand(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  return (float)this->fields.adjustRate / 1000.0;
}


bool __fastcall QuestAutoOrganizationAdjustEntity__IsMatchingIndividualityBySvtId(
        QuestAutoOrganizationAdjustEntity_o *this,
        int64_t targetUserSvtId,
        const MethodInfo *method)
{
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  ServantLimitImageMaster_o *v10; // x20
  __int64 v11; // x21
  __int64 v12; // x22
  int32_t v13; // w21
  int32_t v14; // w20
  ServantEntity_o *v15; // x21
  WarEntity_o *v18; // [xsp+8h] [xbp-38h] BYREF
  UserServantEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_438C7BD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438C7BD = 1;
  }
  entity = 0LL;
  v18 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          targetUserSvtId,
          (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_29;
  v7 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v9 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = v9;
  *(_QWORD *)&v20.fields.fakeValue = v8;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v20, 0LL);
  if ( !v7 )
LABEL_29:
    sub_B7769C(Master_WarQuestSelectionMaster, v6);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v7,
          &v18,
          (int32_t)Master_WarQuestSelectionMaster,
          (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Master_WarQuestSelectionMaster, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !entity )
    goto LABEL_29;
  v10 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  v12 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v12;
  *(_QWORD *)&v21.fields.fakeValue = v11;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v21, 0LL);
  if ( !entity )
    goto LABEL_29;
  v13 = (int)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__getDispLimitCount(entity, 0, 0LL);
  if ( !v10 )
    goto LABEL_29;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(v10, v13, (int32_t)Master_WarQuestSelectionMaster, 0LL);
  if ( !entity )
    goto LABEL_29;
  v14 = (int)Master_WarQuestSelectionMaster;
  v15 = (ServantEntity_o *)v18;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(entity->fields.limitCount, 0LL);
  if ( !v15 )
    goto LABEL_29;
  return ServantEntity__IsIndividuality(
           v15,
           (int32_t)Master_WarQuestSelectionMaster,
           v14,
           this->fields.individuality,
           0LL);
}