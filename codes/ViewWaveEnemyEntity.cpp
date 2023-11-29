void __fastcall ViewWaveEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FF733 & 1) == 0 )
  {
    sub_B16FFC(&ViewWaveEnemyEntity_TypeInfo, v1);
    byte_40FF733 = 1;
  }
  ViewWaveEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewWaveEnemyEntity___ctor(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FF72A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FF72A = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewWaveEnemyEntity___ctor_34377224(
        ViewWaveEnemyEntity_o *this,
        ViewWaveEnemyEntity_o *old,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o *name; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40FF72B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, old);
    byte_40FF72B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_B170D4();
  this->fields.questId = old->fields.questId;
  this->fields.enemyId = old->fields.enemyId;
  name = old->fields.name;
  this->fields.name = name;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v5, v6, v7, v8, v9, v10);
  this->fields.classId = old->fields.classId;
  this->fields.svtId = old->fields.svtId;
  this->fields.limitCount = old->fields.limitCount;
  this->fields.iconId = old->fields.iconId;
  this->fields.displayType = old->fields.displayType;
  this->fields.npcSvtId = old->fields.npcSvtId;
  this->fields.wave = old->fields.wave;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.enemyScript,
    (System_Int32_array **)enemyScript,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewWaveEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_40FF72D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId);
    byte_40FF72D = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewWaveEnemyEntity__CreatePrimaryKey(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_40FF72C & 1) == 0 )
  {
    sub_B16FFC(&ViewWaveEnemyEntity_TypeInfo, method);
    byte_40FF72C = 1;
  }
  questId = this->fields.questId;
  enemyId = this->fields.enemyId;
  if ( (BYTE3(ViewWaveEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
  }
  return ViewWaveEnemyEntity__CreatePK(questId, enemyId, v2);
}


System_String_o *__fastcall ViewWaveEnemyEntity__GetBattleName(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  clsQuestCheck_o *v11; // x0
  int32_t v12; // w20
  clsQuestCheck_o *v13; // x0
  bool v14; // w21
  QuestPhaseMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Int32_array *EnemyInfoDispNpcSvtIdList; // x0
  System_Int32_array *v17; // x20
  int32_t v18; // w0
  unsigned int v19; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  ServantEntity_o *v27; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FF72F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_int___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    sub_B16FFC(&StringLiteral_9280, v10);
    byte_40FF72F = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  v11 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v11 )
    goto LABEL_28;
  v12 = clsQuestCheck__mfGetQuestPhaseByQuestID(v11, this->fields.questId, 0LL);
  v13 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v13 )
    goto LABEL_28;
  v14 = clsQuestCheck__IsQuestClear(v13, this->fields.questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (QuestPhaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity(Master_WarQuestSelectionMaster, &entity, this->fields.questId, v12 + !v14, 0LL) )
    goto LABEL_22;
  if ( !entity )
    goto LABEL_28;
  EnemyInfoDispNpcSvtIdList = QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !EnemyInfoDispNpcSvtIdList )
    goto LABEL_28;
  v17 = EnemyInfoDispNpcSvtIdList;
  if ( !*(_QWORD *)&EnemyInfoDispNpcSvtIdList->max_length )
    goto LABEL_22;
  v18 = System_Array__IndexOf_int_(
          EnemyInfoDispNpcSvtIdList,
          this->fields.npcSvtId,
          (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  if ( (v18 & 0x80000000) != 0 )
    goto LABEL_22;
  v19 = v18;
  if ( !entity )
    goto LABEL_28;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != v17->max_length) )
  {
LABEL_22:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9280, 0LL) )
      return name;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v27 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                   MasterData_WarQuestSelectionMaster,
                                   this->fields.svtId,
                                   (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( v27 )
          return ServantEntity__getBattleName(v27, 0, -1, 0LL);
      }
    }
LABEL_28:
    sub_B170D4();
  }
  if ( v19 >= max_length )
  {
    sub_B17100(EnemyInfoOverwriteNpcSvtNameList, v21, v22);
    sub_B170A0();
  }
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v19];
}


int32_t __fastcall ViewWaveEnemyEntity__GetEnemyNameEffect(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FF730 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18299, method);
    byte_40FF730 = 1;
  }
  return ViewWaveEnemyEntity__GetScript(this, (System_String_o *)StringLiteral_18299, 0, v2);
}


int32_t __fastcall ViewWaveEnemyEntity__GetScript(
        ViewWaveEnemyEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v10; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  ViewWaveEnemyEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_40FF731 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B16FFC(&long_TypeInfo, v8);
    byte_40FF731 = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  v10 = this->fields.enemyScript;
  if ( !v10
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                 (System_Type_o *)key,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B173C8(Item);
  return ViewWaveEnemyEntity__IsDispDanger(v13, v14);
}


bool __fastcall ViewWaveEnemyEntity__IsDispDanger(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FF732 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23065, method);
    byte_40FF732 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_23065, 0, 0LL) > 0;
}


bool __fastcall ViewWaveEnemyEntity__IsIconIdUnique(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewWaveEnemyEntity_c *v6; // x0

  if ( (byte_40FF72E & 1) == 0 )
  {
    sub_B16FFC(&ViewWaveEnemyEntity_TypeInfo, method);
    byte_40FF72E = 1;
  }
  limitCount = this->fields.limitCount;
  if ( limitCount > 9 )
    return 0;
  svtId = this->fields.svtId;
  v6 = ViewWaveEnemyEntity_TypeInfo;
  if ( (BYTE3(ViewWaveEnemyEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ViewWaveEnemyEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ViewWaveEnemyEntity_TypeInfo);
    v6 = ViewWaveEnemyEntity_TypeInfo;
    limitCount = this->fields.limitCount;
  }
  return limitCount + v6->static_fields->SVT_ID_TO_ICON_ID * svtId != this->fields.iconId;
}