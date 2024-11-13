void __fastcall QuestAutoOrganizationAdjustEntity___ctor(
        QuestAutoOrganizationAdjustEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16631 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16631 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
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


float __fastcall QuestAutoOrganizationAdjustEntity__GetAdjustRate_40183884(
        QuestAutoOrganizationAdjustEntity_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  bool v5; // w0
  float result; // s0

  if ( (byte_4B16630 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, individualities, method);
    byte_4B16630 = 1;
  }
  v5 = System_Linq_Enumerable__Contains_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)individualities,
         this->fields.individuality,
         (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *Master_object; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x20
  void *monitor; // x21
  Il2CppClass *klass; // x22
  ServantLimitImageMaster_o *v25; // x20
  void *v26; // x21
  Il2CppClass *v27; // x22
  int32_t v28; // w21
  int32_t v29; // w20
  ServantEntity_o *v30; // x21
  ServantEntity_o *v33; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4B1662F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, targetUserSvtId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17, v18);
    byte_4B1662F = 1;
  }
  v33 = 0LL;
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, targetUserSvtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_25;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          targetUserSvtId,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantMaster___);
  if ( !entity )
    goto LABEL_25;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  klass = entity[5].klass;
  monitor = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v35.fields.currentCryptoKey = klass;
  *(_QWORD *)&v35.fields.fakeValue = monitor;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v35, 0LL);
  if ( !v22 )
LABEL_25:
    sub_1BCAA3C(Master_object, v20);
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          v22,
          (Il2CppObject **)&v33,
          (int32_t)Master_object,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__) )
    return 0;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_25;
  Master_object = DataManager__GetMasterData_object_(
                    (DataManager_o *)Master_object,
                    (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !entity )
    goto LABEL_25;
  v25 = (ServantLimitImageMaster_o *)Master_object;
  v27 = entity[5].klass;
  v26 = entity[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
  *(_QWORD *)&v36.fields.currentCryptoKey = v27;
  *(_QWORD *)&v36.fields.fakeValue = v26;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v36, 0LL);
  if ( !entity )
    goto LABEL_25;
  v28 = (int)Master_object;
  Master_object = (Il2CppObject *)UserServantEntity__getDispLimitCount((UserServantEntity_o *)entity, 0, 0LL);
  if ( !v25 )
    goto LABEL_25;
  Master_object = (Il2CppObject *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                    v25,
                                    v28,
                                    (int32_t)Master_object,
                                    0LL);
  if ( !entity )
    goto LABEL_25;
  v29 = (int)Master_object;
  v30 = v33;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                    (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
                                    0LL);
  if ( !v30 )
    goto LABEL_25;
  return ServantEntity__IsIndividuality(v30, (int32_t)Master_object, v29, this->fields.individuality, 0LL);
}