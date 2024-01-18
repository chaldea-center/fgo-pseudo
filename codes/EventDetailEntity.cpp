void __fastcall EventDetailEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_418A363 & 1) == 0 )
  {
    sub_B2C35C(&EventDetailEntity_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_6192/*"EventServantFatigue/{0}"*/, v8);
    byte_418A363 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventDetailEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6192/*"EventServantFatigue/{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6192/*"EventServantFatigue/{0}"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void __fastcall EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418A362 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418A362 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDetailEntity__CreatePrimaryKey(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


System_String_o *__fastcall EventDetailEntity__GetCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *OverwriteMessage; // x20

  if ( (byte_418A35B & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21378/*"overwriteRewardMessageCommonReleaseId"*/, method);
    sub_B2C35C(&StringLiteral_21379/*"overwriteRewardMessageId"*/, v4);
    byte_418A35B = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_21378/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_21379/*"overwriteRewardMessageId"*/,
                       v2);
  if ( System_String__IsNullOrEmpty(OverwriteMessage, 0LL) )
    return this->fields.condMessage;
  return OverwriteMessage;
}


System_String_o *__fastcall EventDetailEntity__GetFloorRewardPrefabName(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A34E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_6722/*"FloorRewardPrefabName"*/, method);
    byte_418A34E = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6722/*"FloorRewardPrefabName"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A358 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18853/*"fortificationBasePoint"*/, method);
    byte_418A358 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18853/*"fortificationBasePoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A359 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18854/*"fortificationLvPoint"*/, method);
    byte_418A359 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18854/*"fortificationLvPoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetGaugeType(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType;
}


System_Collections_Generic_List_int__o *__fastcall EventDetailEntity__GetIgnoreCommandAssistQuestIds(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *v7; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v8; // x21

  if ( (byte_418A360 & 1) == 0 )
  {
    sub_B2C35C(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_B2C35C(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v3);
    sub_B2C35C(&Method_System_Func_List_object___List_int____ctor__, v4);
    sub_B2C35C(&System_Func_List_object___List_int___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_19405/*"ignoreCommandAssistQuestIds"*/, v6);
    byte_418A360 = 1;
  }
  v7 = (System_String_o *)StringLiteral_19405/*"ignoreCommandAssistQuestIds"*/;
  v8 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v8,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2713350 *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v7,
                                                     (System_Func_TSource__TDestination__o *)v8,
                                                     0LL,
                                                     (const MethodInfo_1735FA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall EventDetailEntity__GetIntFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v7; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A34F & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, key);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    byte_418A34F = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v7, 0LL);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


EventDetailEntity_ChangeLoadAnimationInfo_array *__fastcall EventDetailEntity__GetLoadAnimationIds(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  EventDetailEntity_ChangeLoadAnimationInfo_array *result; // x0
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  const MethodInfo_2DB1BFC **v19; // x25
  __int64 v20; // x10
  WarBoardUiData_SaveData_array *v21; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x19
  __int64 v23; // x8
  System_Xml_XmlQualifiedName_o **v24; // x23
  unsigned __int64 v25; // x26
  WarBoardUiData_SaveData_o **m_Items; // x27
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v27; // x21
  __int64 v28; // x10
  System_String_o *v29; // x22
  int32_t v30; // w0
  System_Xml_XmlQualifiedName_o *v31; // x1
  int32_t v32; // w22
  System_Xml_XmlQualifiedName_o **v33; // x24
  const MethodInfo_2DB1BFC **v34; // x23
  Il2CppObject *Item; // x0
  int32_t v36; // w25
  EventDetailEntity_ChangeLoadAnimationInfo_o *v37; // x21
  __int64 v38; // x0

  if ( (byte_418A354 & 1) == 0 )
  {
    sub_B2C35C(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo, method);
    sub_B2C35C(&System_Convert_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__ToArray__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo, v12);
    sub_B2C35C(&StringLiteral_17615/*"commonReleaseId"*/, v13);
    sub_B2C35C(&StringLiteral_17279/*"changeLoadAnimations"*/, v14);
    sub_B2C35C(&StringLiteral_16348/*"animationId"*/, v15);
    byte_418A354 = 1;
  }
  result = (EventDetailEntity_ChangeLoadAnimationInfo_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17279/*"changeLoadAnimations"*/,
           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !script )
        goto LABEL_30;
      v19 = (const MethodInfo_2DB1BFC **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
      script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   script,
                                                                                   (System_Type_o *)StringLiteral_17279/*"changeLoadAnimations"*/,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !script )
        goto LABEL_30;
      v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&script->klass->_2.bitflags2 + 1) < (unsigned int)v20 )
        goto LABEL_30;
      if ( (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
        goto LABEL_30;
      v21 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
              (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_object__ToArray__);
      v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v22,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
      if ( !v21 )
        goto LABEL_30;
      v23 = *(_QWORD *)&v21->max_length;
      if ( (int)v23 >= 1 )
      {
        v24 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_16348/*"animationId"*/;
        v25 = 0LL;
        m_Items = v21->m_Items;
        do
        {
          if ( v25 >= (unsigned int)v23 )
          {
            v38 = sub_B2C460(script);
            sub_B2C400(v38, 0LL);
          }
          v27 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v25];
          if ( v27 )
          {
            v28 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
            if ( *(&v27->klass->_2.bitflags2 + 1) >= (unsigned int)v28
              && (System_Collections_Generic_Dictionary_string__object__c *)v27->klass->_2.typeHierarchy[v28 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v25],
                                                                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_17615/*"commonReleaseId"*/,
                                                                                           (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
              if ( ((unsigned __int8)script & 1) != 0 )
              {
                script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                                             v27,
                                                                                             *v24,
                                                                                             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)script & 1) != 0 )
                {
                  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v27,
                                                                                               (System_Type_o *)StringLiteral_17615/*"commonReleaseId"*/,
                                                                                               *v19);
                  if ( !script )
                    goto LABEL_30;
                  v29 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
                                             script,
                                             script->klass->vtable._4_unknown.methodPtr);
                  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !System_Convert_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                  }
                  v30 = System_Convert__ToInt32_42132516(v29, 0LL);
                  v31 = *v24;
                  v32 = v30;
                  v33 = v24;
                  v34 = v19;
                  Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v27,
                                           (System_Type_o *)v31,
                                           *v19);
                  v36 = System_Convert__ToInt32(Item, 0LL);
                  v37 = (EventDetailEntity_ChangeLoadAnimationInfo_o *)sub_B2C42C(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
                  EventDetailEntity_ChangeLoadAnimationInfo___ctor(v37, v32, v36, 0LL);
                  if ( !v22 )
                    goto LABEL_30;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v22,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
                  v19 = v34;
                  v24 = v33;
                }
              }
            }
          }
          LODWORD(v23) = v21->max_length;
        }
        while ( (__int64)++v25 < (int)v23 );
      }
      if ( !v22 )
LABEL_30:
        sub_B2C434(script, v17);
      return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall EventDetailEntity__GetOverwriteMessage(
        EventDetailEntity_o *this,
        System_String_o *messageCommonReleaseKey,
        System_String_o *messageKey,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_String_o *v9; // x19
  int32_t IntFromScript; // w0
  const MethodInfo *v11; // x2
  int32_t v12; // w22
  System_String_o *StringFromScript; // x20

  if ( (byte_418A35A & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, messageCommonReleaseKey);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418A35A = 1;
  }
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  IntFromScript = EventDetailEntity__GetIntFromScript(this, messageCommonReleaseKey, (const MethodInfo *)messageKey);
  if ( !IntFromScript )
    return v9;
  v12 = IntFromScript;
  StringFromScript = EventDetailEntity__GetStringFromScript(this, messageKey, v11);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsCommonRelease(v12, 0LL) || System_String__IsNullOrEmpty(StringFromScript, 0LL) )
    return v9;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  return LocalizationManager__Get(StringFromScript, 0LL);
}


int32_t __fastcall EventDetailEntity__GetOverwriteRewardCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A35D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21377/*"overwriteRewardCondCommonReleaseId"*/, method);
    byte_418A35D = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21377/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetOverwriteShopCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A35E & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21382/*"overwriteShopCondCommonReleaseId"*/, method);
    byte_418A35E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21382/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A355 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21696/*"randomMissionMaxNum"*/, method);
    byte_418A355 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21696/*"randomMissionMaxNum"*/, v2);
}


EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *__fastcall EventDetailEntity__GetReplaceEventRewardBtnLogoInfo(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x19
  __int64 v14; // x10
  System_String_o *v15; // x20
  int32_t v16; // w20
  Il2CppObject *v17; // x0
  int32_t v18; // w21
  EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *v19; // x19

  if ( (byte_418A357 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B2C35C(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_18474/*"eventLogoId"*/, v7);
    sub_B2C35C(&StringLiteral_17615/*"commonReleaseId"*/, v8);
    sub_B2C35C(&StringLiteral_21773/*"replaceEventRewardBtnLogoInfo"*/, v9);
    byte_418A357 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21773/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          Item,
          (System_Type_o *)StringLiteral_21773/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0LL;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_21773/*"replaceEventRewardBtnLogoInfo"*/,
                                                                                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
        v14 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v14)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_20:
    sub_B2C434(Item, v11);
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17615/*"commonReleaseId"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v13,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18474/*"eventLogoId"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13,
                                                                             (System_Type_o *)StringLiteral_17615/*"commonReleaseId"*/,
                                                                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_20;
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                             Item,
                             Item->klass->vtable._4_unknown.methodPtr);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v16 = System_Convert__ToInt32_42132516(v15, 0LL);
  v17 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13,
                          (System_Type_o *)StringLiteral_18474/*"eventLogoId"*/,
                          (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v18 = System_Convert__ToInt32(v17, 0LL);
  v19 = (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)sub_B2C42C(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
  EventDetailEntity_ReplaceEventRewardBtnLogoInfo___ctor(v19, v16, v18, 0LL);
  return v19;
}


System_String_o *__fastcall EventDetailEntity__GetServantFatigueFolder(
        EventDetailEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t ServantFatigueId; // w0
  int DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v6; // x0
  System_String_o *DATA_ROOT_FOLDER; // x20
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_418A352 & 1) == 0 )
  {
    sub_B2C35C(&EventDetailEntity_TypeInfo, method);
    sub_B2C35C(&int_TypeInfo, v3);
    byte_418A352 = 1;
  }
  if ( entity && (ServantFatigueId = EventDetailEntity__GetServantFatigueId(entity, method)) != 0 )
  {
    DATA_DEFAULT_ID = ServantFatigueId;
    v6 = EventDetailEntity_TypeInfo;
  }
  else
  {
    v6 = EventDetailEntity_TypeInfo;
    if ( (BYTE3(EventDetailEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDetailEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo);
      v6 = EventDetailEntity_TypeInfo;
    }
    DATA_DEFAULT_ID = v6->static_fields->DATA_DEFAULT_ID;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = EventDetailEntity_TypeInfo;
  }
  DATA_ROOT_FOLDER = v6->static_fields->DATA_ROOT_FOLDER;
  v10 = DATA_DEFAULT_ID;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return System_String__Format(DATA_ROOT_FOLDER, v8, 0LL);
}


int32_t __fastcall EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A353 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12715/*"ServantFatigueId"*/, method);
    byte_418A353 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12715/*"ServantFatigueId"*/, v2);
}


System_String_o *__fastcall EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *OverwriteMessage; // x20

  if ( (byte_418A35C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21384/*"overwriteShopMessageId"*/, method);
    sub_B2C35C(&StringLiteral_21383/*"overwriteShopMessageCommonReleaseId"*/, v4);
    byte_418A35C = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_21383/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_21384/*"overwriteShopMessageId"*/,
                       v2);
  if ( System_String__IsNullOrEmpty(OverwriteMessage, 0LL) )
    return this->fields.shopCondMessage;
  return OverwriteMessage;
}


System_String_o *__fastcall EventDetailEntity__GetStringFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418A350 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B2C35C(&string_TypeInfo, v5);
    byte_418A350 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B2C728(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A351 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22979/*"useDiceSpotId"*/, method);
    byte_418A351 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22979/*"useDiceSpotId"*/, v2);
}


bool __fastcall EventDetailEntity__HasFlag(EventDetailEntity_o *this, int64_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool __fastcall EventDetailEntity__IsBonusSkill(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}


bool __fastcall EventDetailEntity__IsBoxGacha(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool __fastcall EventDetailEntity__IsClosePurchaseShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE3(this->fields.flag) & 1;
}


bool __fastcall EventDetailEntity__IsEventActivityPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 4) & 1;
}


bool __fastcall EventDetailEntity__IsEventBoardGame(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE4(this->fields.flag) >> 5) & 1;
}


bool __fastcall EventDetailEntity__IsEventCircleProgress(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A361 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19930/*"isEventCircleProgress"*/, method);
    byte_418A361 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19930/*"isEventCircleProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A35F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19931/*"isEventCommandAssist"*/, method);
    byte_418A35F = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19931/*"isEventCommandAssist"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventConquest(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE4(this->fields.flag) & 1;
}


bool __fastcall EventDetailEntity__IsEventDailyPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 3) & 1;
}


bool __fastcall EventDetailEntity__IsEventOnlyEquip(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 5) & 1;
}


bool __fastcall EventDetailEntity__IsEventPanel(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE5(this->fields.flag) >> 2) & 1;
}


bool __fastcall EventDetailEntity__IsEventPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0xC001) != 0;
}


bool __fastcall EventDetailEntity__IsEventPointByQp(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE4(this->fields.flag) >> 1) & 1;
}


bool __fastcall EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A356 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_18483/*"eventUiCushion"*/, method);
    byte_418A356 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18483/*"eventUiCushion"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsExchangeShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool __fastcall EventDetailEntity__IsFatigue(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 4) & 1;
}


bool __fastcall EventDetailEntity__IsForcedAdjustmentDialog(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 6) & 1;
}


bool __fastcall EventDetailEntity__IsGroupPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE1(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsGroupRanking(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 2) & 1;
}


bool __fastcall EventDetailEntity__IsMainInterlude(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE4(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsMapSwitchButtonTop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 6) & 1;
}


bool __fastcall EventDetailEntity__IsMission(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 5) & 1;
}


bool __fastcall EventDetailEntity__IsNeedUseEventSupport(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 2) & 1;
}


bool __fastcall EventDetailEntity__IsNoDispArrow(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 5) & 1;
}


bool __fastcall EventDetailEntity__IsPersonalBoss(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_418A34D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19943/*"isPersonalRaid"*/, method);
    byte_418A34D = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19943/*"isPersonalRaid"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsQuestCooltime(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE5(this->fields.flag) >> 1) & 1;
}


bool __fastcall EventDetailEntity__IsRaid(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 6) & 1;
}


bool __fastcall EventDetailEntity__IsRanking(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool __fastcall EventDetailEntity__IsRevivalEvent(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LODWORD(this->fields.flag) >> 31;
}


bool __fastcall EventDetailEntity__IsReward(EventDetailEntity_o *this, const MethodInfo *method)
{
  unsigned __int64 flag; // x8
  __int64 v3; // x0

  flag = this->fields.flag;
  if ( (flag & 0xC065) != 0 )
    goto LABEL_2;
  if ( (flag & 0x400) != 0 )
  {
    if ( !EventDetailEntity__IsPersonalBoss(this, method) )
      goto LABEL_2;
    flag = this->fields.flag;
  }
  if ( (flag & 0x40000) == 0 )
    return (flag >> 19) & 1;
LABEL_2:
  LOBYTE(v3) = (unsigned __int8)&dword_0 + 1;
  return v3;
}


bool __fastcall EventDetailEntity__IsShiftHelpInfo(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE2(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsSpotCooltime(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE5(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsSuperBoss(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0x400) != 0 && !EventDetailEntity__IsPersonalBoss(this, method);
}


bool __fastcall EventDetailEntity__IsTimeProgressEvent(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType != 1;
}


bool __fastcall EventDetailEntity__IsTimeStatusRecord(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 1) & 1;
}


int32_t __fastcall EventDetailEntity__getBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v9; // x20

  if ( (byte_418A34B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A34B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( NetworkManager__getTime(0LL) <= *(_QWORD *)&v9->fields.eventId )
      LODWORD(Entity) = this->fields.bgmId;
    else
      LODWORD(Entity) = this->fields.afterBgmId;
  }
  return (int)Entity;
}


int32_t __fastcall EventDetailEntity__getShopBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v9; // x20

  if ( (byte_418A34C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A34C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B2C434(Instance, v7);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( NetworkManager__getTime(0LL) <= *(_QWORD *)&v9->fields.eventId )
      LODWORD(Entity) = this->fields.shopBgmId;
    else
      LODWORD(Entity) = this->fields.shopAfterBgmId;
  }
  return (int)Entity;
}


bool __fastcall EventDetailEntity__isBP(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 4) & 1;
}


bool __fastcall EventDetailEntity__isDailyMission(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 1) & 1;
}


bool __fastcall EventDetailEntity__isEventVoicePlay(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE2(this->fields.flag) & 1;
}


bool __fastcall EventDetailEntity__isGroupRanking(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 2) & 1;
}


bool __fastcall EventDetailEntity__isNoMaterialBanner(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 5) & 1;
}


bool __fastcall EventDetailEntity__isOldRaid(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType == 5;
}


bool __fastcall EventDetailEntity__isRaidDefeatCount(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 3) & 1;
}


bool __fastcall EventDetailEntity__isTower(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 3) & 1;
}


void __fastcall EventDetailEntity_ChangeLoadAnimationInfo___ctor(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._commonReleaseId_k__BackingField = a;
  this->fields._animationId_k__BackingField = b;
}


int32_t __fastcall EventDetailEntity_ChangeLoadAnimationInfo__get_animationId(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._animationId_k__BackingField;
}


int32_t __fastcall EventDetailEntity_ChangeLoadAnimationInfo__get_commonReleaseId(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._commonReleaseId_k__BackingField;
}


void __fastcall EventDetailEntity_ChangeLoadAnimationInfo__set_animationId(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._animationId_k__BackingField = value;
}


void __fastcall EventDetailEntity_ChangeLoadAnimationInfo__set_commonReleaseId(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._commonReleaseId_k__BackingField = value;
}


void __fastcall EventDetailEntity_ReplaceEventRewardBtnLogoInfo___ctor(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        int32_t commonReleased,
        int32_t eventLogoId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._CommonReleasedId_k__BackingField = commonReleased;
  this->fields._EventLogoId_k__BackingField = eventLogoId;
}


int32_t __fastcall EventDetailEntity_ReplaceEventRewardBtnLogoInfo__get_CommonReleasedId(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonReleasedId_k__BackingField;
}


int32_t __fastcall EventDetailEntity_ReplaceEventRewardBtnLogoInfo__get_EventLogoId(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventLogoId_k__BackingField;
}


void __fastcall EventDetailEntity_ReplaceEventRewardBtnLogoInfo__set_CommonReleasedId(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommonReleasedId_k__BackingField = value;
}


void __fastcall EventDetailEntity_ReplaceEventRewardBtnLogoInfo__set_EventLogoId(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventLogoId_k__BackingField = value;
}