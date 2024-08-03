void __fastcall QuestAutoOrganizationAdjustEntity___ctor(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FC826 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FC826 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
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
  bool IsMatchingIndividualityBySvtId; // w0
  float result; // s0

  IsMatchingIndividualityBySvtId = QuestAutoOrganizationAdjustEntity__IsMatchingIndividualityBySvtId(
                                     this,
                                     targetUserSvtId,
                                     method);
  result = 1.0;
  if ( IsMatchingIndividualityBySvtId )
    return (float)this->fields.adjustRate / 1000.0;
  return result;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantLimitImageMaster_o *v16; // x20
  void *v17; // x21
  Il2CppClass *v18; // x22
  int32_t v19; // w21
  int32_t v20; // w20
  ServantEntity_o *v21; // x21
  ServantEntity_o *v24; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_49FC825 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, targetUserSvtId);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_49FC825 = 1;
  }
  v24 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          targetUserSvtId,
          (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_25;
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = klass;
  *(_QWORD *)&v26.fields.fakeValue = monitor;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v26, 0LL);
  if ( !v13 )
LABEL_25:
    sub_1B64324(Master_object);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v13,
          (Il2CppObject **)&v24,
          (int32_t)Master_object,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !entity )
    goto LABEL_25;
  v16 = (ServantLimitImageMaster_o *)Master_object;
  v18 = entity[5].klass;
  v17 = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v18;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v27, 0LL);
  if ( !entity )
    goto LABEL_25;
  v19 = (int)Master_object;
  Master_object = (Il2CppObject *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0LL);
  if ( !v16 )
    goto LABEL_25;
  Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                    v16,
                                    v19,
                                    (int32_t)Master_object,
                                    0LL);
  if ( !entity )
    goto LABEL_25;
  v20 = (int)Master_object;
  v21 = v24;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(
                                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                                    0LL);
  if ( !v21 )
    goto LABEL_25;
  return ServantEntity__IsIndividuality(v21, (int32_t)Master_object, v20, this->fields.individuality, 0LL);
}