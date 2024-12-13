void __fastcall QuestAutoOrganizationAdjustEntity___ctor(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B375DF & 1) == 0 )
  {
    sub_1BD3458(&Method_DataEntityBase_int___ctor__, method);
    byte_4B375DF = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31D1CF0 *)Method_DataEntityBase_int___ctor__);
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


float __fastcall QuestAutoOrganizationAdjustEntity__GetAdjustRate_40264884(
        QuestAutoOrganizationAdjustEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  bool v5; // w0
  float result; // s0

  if ( (byte_4B375DE & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Linq_Enumerable_Contains_int___, individualities);
    byte_4B375DE = 1;
  }
  v5 = System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)individualities,
         this->fields.individuality,
         (const MethodInfo_2F49970 *)Method_System_Linq_Enumerable_Contains_int___);
  result = 1.0;
  if ( v5 )
    return (float)this->fields.adjustRate / 1000.0;
  return result;
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
  __int64 v13; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantLimitImageMaster_o *v17; // x20
  void *v18; // x21
  Il2CppClass *v19; // x22
  int32_t v20; // w21
  int32_t v21; // w20
  ServantEntity_o *v22; // x21
  ServantEntity_o *v25; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_4B375DD & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, targetUserSvtId);
    sub_1BD3458(&Method_DataManager_GetMaster_ServantMaster___, v5);
    sub_1BD3458(&Method_DataManager_GetMaster_UserServantMaster___, v6);
    sub_1BD3458(&DataManager_TypeInfo, v7);
    sub_1BD3458(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1BD3458(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1BD3458(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B375DD = 1;
  }
  v25 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          targetUserSvtId,
          (const MethodInfo_31D20F0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_25;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = klass;
  *(_QWORD *)&v27.fields.fakeValue = monitor;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v27, 0LL);
  if ( !v14 )
LABEL_25:
    sub_1BD36B4(Master_object, v13);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v14,
          (Il2CppObject **)&v25,
          (int32_t)Master_object,
          (const MethodInfo_31D1F44 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !entity )
    goto LABEL_25;
  v17 = (ServantLimitImageMaster_o *)Master_object;
  v19 = entity[5].klass;
  v18 = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v28.fields.currentCryptoKey = v19;
  *(_QWORD *)&v28.fields.fakeValue = v18;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(v28, 0LL);
  if ( !entity )
    goto LABEL_25;
  v20 = (int)Master_object;
  Master_object = (Il2CppObject *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0LL);
  if ( !v17 )
    goto LABEL_25;
  Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                    v17,
                                    v20,
                                    (int32_t)Master_object,
                                    0LL);
  if ( !entity )
    goto LABEL_25;
  v21 = (int)Master_object;
  v22 = v25;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47136620(
                                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                                    0LL);
  if ( !v22 )
    goto LABEL_25;
  return ServantEntity__IsIndividuality(v22, (int32_t)Master_object, v21, this->fields.individuality, 0LL);
}