void __fastcall ViewWaveEnemyEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418D2C0 & 1) == 0 )
  {
    sub_B2C35C(&ViewWaveEnemyEntity_TypeInfo, v1);
    byte_418D2C0 = 1;
  }
  ViewWaveEnemyEntity_TypeInfo->static_fields->SVT_ID_TO_ICON_ID = 10;
}


void __fastcall ViewWaveEnemyEntity___ctor(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D2B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418D2B7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


void __fastcall ViewWaveEnemyEntity___ctor_34368760(
        ViewWaveEnemyEntity_o *this,
        ViewWaveEnemyEntity_o *old,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *name; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *enemyScript; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_418D2B8 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, old);
    byte_418D2B8 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
  if ( !old )
    sub_B2C434(v5, v6);
  this->fields.questId = old->fields.questId;
  this->fields.enemyId = old->fields.enemyId;
  name = old->fields.name;
  this->fields.name = name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  this->fields.classId = old->fields.classId;
  this->fields.svtId = old->fields.svtId;
  this->fields.limitCount = old->fields.limitCount;
  this->fields.iconId = old->fields.iconId;
  this->fields.displayType = old->fields.displayType;
  this->fields.npcSvtId = old->fields.npcSvtId;
  this->fields.wave = old->fields.wave;
  enemyScript = old->fields.enemyScript;
  this->fields.enemyScript = enemyScript;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.enemyScript,
    (System_Int32_array **)enemyScript,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall ViewWaveEnemyEntity__CreatePK(int32_t questId, int32_t enemyId, const MethodInfo *method)
{
  if ( (byte_418D2BA & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&enemyId);
    byte_418D2BA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           questId,
           enemyId,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall ViewWaveEnemyEntity__CreatePrimaryKey(
        ViewWaveEnemyEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t enemyId; // w19
  int32_t questId; // w20

  if ( (byte_418D2B9 & 1) == 0 )
  {
    sub_B2C35C(&ViewWaveEnemyEntity_TypeInfo, method);
    byte_418D2B9 = 1;
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
  clsQuestCheck_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  int32_t v13; // w20
  bool v14; // w21
  clsQuestCheck_o *v15; // x20
  int32_t v16; // w0
  unsigned int v17; // w21
  System_String_array *EnemyInfoOverwriteNpcSvtNameList; // x0
  il2cpp_array_size_t max_length; // w8
  System_String_o *name; // x20
  __int64 v22; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418D2BC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_int___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestPhaseMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v8);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v9);
    sub_B2C35C(&StringLiteral_9310/*"NONE"*/, v10);
    byte_418D2BC = 1;
  }
  entity = 0LL;
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v13 = clsQuestCheck__mfGetQuestPhaseByQuestID(Master_WarQuestSelectionMaster, this->fields.questId, 0LL);
  Master_WarQuestSelectionMaster = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v14 = clsQuestCheck__IsQuestClear(Master_WarQuestSelectionMaster, this->fields.questId, 0, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestPhaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  if ( !QuestPhaseMaster__TryGetEntity(
          (QuestPhaseMaster_o *)Master_WarQuestSelectionMaster,
          &entity,
          this->fields.questId,
          v13 + !v14,
          0LL) )
    goto LABEL_22;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_28;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)QuestPhaseEntity__GetEnemyInfoDispNpcSvtIdList(entity, 0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_28;
  v15 = Master_WarQuestSelectionMaster;
  if ( !Master_WarQuestSelectionMaster->fields.cQuestReleaseListP )
    goto LABEL_22;
  v16 = System_Array__IndexOf_int_(
          (System_Int32_array *)Master_WarQuestSelectionMaster,
          this->fields.npcSvtId,
          (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  if ( (v16 & 0x80000000) != 0 )
    goto LABEL_22;
  v17 = v16;
  Master_WarQuestSelectionMaster = (clsQuestCheck_o *)entity;
  if ( !entity )
    goto LABEL_28;
  EnemyInfoOverwriteNpcSvtNameList = QuestPhaseEntity__GetEnemyInfoOverwriteNpcSvtNameList(entity, 0LL);
  if ( !EnemyInfoOverwriteNpcSvtNameList
    || (max_length = EnemyInfoOverwriteNpcSvtNameList->max_length, max_length != LODWORD(v15->fields.cQuestReleaseListP)) )
  {
LABEL_22:
    name = this->fields.name;
    if ( !System_String__op_Equality(name, (System_String_o *)StringLiteral_9310/*"NONE"*/, 0LL) )
      return name;
    Master_WarQuestSelectionMaster = (clsQuestCheck_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Master_WarQuestSelectionMaster,
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( Master_WarQuestSelectionMaster )
      {
        Master_WarQuestSelectionMaster = (clsQuestCheck_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                              (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                              this->fields.svtId,
                                                              (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( Master_WarQuestSelectionMaster )
          return ServantEntity__getBattleName((ServantEntity_o *)Master_WarQuestSelectionMaster, 0, -1, 0LL);
      }
    }
LABEL_28:
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
  if ( v17 >= max_length )
  {
    v22 = sub_B2C460(EnemyInfoOverwriteNpcSvtNameList);
    sub_B2C400(v22, 0LL);
  }
  return EnemyInfoOverwriteNpcSvtNameList->m_Items[v17];
}


int32_t __fastcall ViewWaveEnemyEntity__GetEnemyNameEffect(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418D2BD & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18368/*"enemyNameEffect"*/, method);
    byte_418D2BD = 1;
  }
  return ViewWaveEnemyEntity__GetScript(this, (System_String_o *)StringLiteral_18368/*"enemyNameEffect"*/, 0, v2);
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
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  ViewWaveEnemyEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_418D2BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_418D2BE = 1;
  }
  enemyScript = this->fields.enemyScript;
  if ( !enemyScript
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)enemyScript,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.enemyScript;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)key,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
    sub_B2C434(Item, v10);
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(Item);
  sub_B2C728(Item);
  return ViewWaveEnemyEntity__IsDispDanger(v13, v14);
}


bool __fastcall ViewWaveEnemyEntity__IsDispDanger(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418D2BF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23159/*"viewWaveEnemyDispDanger"*/, method);
    byte_418D2BF = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.enemyScript, (System_String_o *)StringLiteral_23159/*"viewWaveEnemyDispDanger"*/, 0, 0LL) > 0;
}


bool __fastcall ViewWaveEnemyEntity__IsIconIdUnique(ViewWaveEnemyEntity_o *this, const MethodInfo *method)
{
  int32_t limitCount; // w8
  int32_t svtId; // w20
  ViewWaveEnemyEntity_c *v6; // x0

  if ( (byte_418D2BB & 1) == 0 )
  {
    sub_B2C35C(&ViewWaveEnemyEntity_TypeInfo, method);
    byte_418D2BB = 1;
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