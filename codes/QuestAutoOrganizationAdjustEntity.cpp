void __fastcall QuestAutoOrganizationAdjustEntity___ctor(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9FFA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E9FFA = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v29; // x20
  __int64 v30; // x21
  __int64 v31; // x22
  ServantLimitImageMaster_o *v32; // x20
  __int64 v33; // x21
  __int64 v34; // x22
  int32_t v35; // w21
  int32_t v36; // w20
  ServantEntity_o *v37; // x21
  WarEntity_o *v40; // [xsp+8h] [xbp-38h] BYREF
  UserServantEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_42E9FF9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, targetUserSvtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v18, v19, v20);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24, v25, v26);
    byte_42E9FF9 = 1;
  }
  entity = 0LL;
  v40 = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          targetUserSvtId,
          (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_29;
  v29 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
  v31 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v42.fields.currentCryptoKey = v31;
  *(_QWORD *)&v42.fields.fakeValue = v30;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v42, 0LL);
  if ( !v29 )
LABEL_29:
    sub_B5D69C(Master_WarQuestSelectionMaster, v28);
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          v29,
          &v40,
          (int32_t)Master_WarQuestSelectionMaster,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_29;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Master_WarQuestSelectionMaster, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !entity )
    goto LABEL_29;
  v32 = (ServantLimitImageMaster_o *)Master_WarQuestSelectionMaster;
  v34 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
  v33 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v43.fields.currentCryptoKey = v34;
  *(_QWORD *)&v43.fields.fakeValue = v33;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v43, 0LL);
  if ( !entity )
    goto LABEL_29;
  v35 = (int)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)UserServantEntity__getDispLimitCount(entity, 0, 0LL);
  if ( !v32 )
    goto LABEL_29;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(v32, v35, (int32_t)Master_WarQuestSelectionMaster, 0LL);
  if ( !entity )
    goto LABEL_29;
  v36 = (int)Master_WarQuestSelectionMaster;
  v37 = (ServantEntity_o *)v40;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(entity->fields.limitCount, 0LL);
  if ( !v37 )
    goto LABEL_29;
  return ServantEntity__IsIndividuality(
           v37,
           (int32_t)Master_WarQuestSelectionMaster,
           v36,
           this->fields.individuality,
           0LL);
}