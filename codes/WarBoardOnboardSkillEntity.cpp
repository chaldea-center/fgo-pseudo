void __fastcall WarBoardOnboardSkillEntity___ctor(WarBoardOnboardSkillEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4186545 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_4186545 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarBoardOnboardSkillEntity__CreatePK(
        int32_t stageId,
        int32_t idx,
        const MethodInfo *method)
{
  if ( (byte_4186541 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4186541 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           stageId,
           idx,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarBoardOnboardSkillEntity__CreatePrimaryKey(
        WarBoardOnboardSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return WarBoardOnboardSkillEntity__CreatePK(this->fields.stageId, this->fields.idx, v2);
}


int32_t __fastcall WarBoardOnboardSkillEntity__GetBreakPointDamageType(
        WarBoardOnboardSkillEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4186543 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15410/*"WarBoardBreakPointDamageType"*/, method);
    byte_4186543 = 1;
  }
  return WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_15410/*"WarBoardBreakPointDamageType"*/, 0, v2);
}


int32_t __fastcall WarBoardOnboardSkillEntity__GetIntFromScript(
        WarBoardOnboardSkillEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  WarBoardOnboardSkillEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4186542 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7);
    sub_B2C35C(&long_TypeInfo, v8);
    byte_4186542 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return defVal;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
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
  v13 = (WarBoardOnboardSkillEntity_o *)sub_B2C728(Item);
  return WarBoardOnboardSkillEntity__GetBreakPointDamageType(v13, v14);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardOnboardSkillEntity__GetSquareIndexGroup(
        WarBoardOnboardSkillEntity_o *this,
        int32_t stageId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t IntFromScript; // w0
  int32_t v10; // w21
  WarBoardSquareIndexGroupMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1

  if ( (byte_4186544 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___, *(_QWORD *)&stageId);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B2C35C(&StringLiteral_22241/*"squareIndexGroup"*/, v8);
    byte_4186544 = 1;
  }
  IntFromScript = WarBoardOnboardSkillEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22241/*"squareIndexGroup"*/, -1, v3);
  if ( IntFromScript == -1 )
    return this->fields.targetSquareIndex;
  v10 = IntFromScript;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardSquareIndexGroupMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (Master_WarQuestSelectionMaster = (WarBoardSquareIndexGroupMaster_o *)WarBoardSquareIndexGroupMaster__GetStageList(
                                                                               Master_WarQuestSelectionMaster,
                                                                               v10,
                                                                               stageId,
                                                                               0LL)) == 0LL )
  {
    sub_B2C434(Master_WarQuestSelectionMaster, v12);
  }
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}