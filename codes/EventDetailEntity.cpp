void __fastcall EventDetailEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_438DE02 & 1) == 0 )
  {
    sub_B775C4(&EventDetailEntity_TypeInfo);
    sub_B775C4(&StringLiteral_6340/*"EventServantFatigue/{0}"*/);
    byte_438DE02 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventDetailEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_6340/*"EventServantFatigue/{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6340/*"EventServantFatigue/{0}"*/;
  sub_B77560(static_fields, v8, v1, v2, v3, v4, v5, v6);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void __fastcall EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438DE01 & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_int___ctor__);
    byte_438DE01 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_21FB740 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDetailEntity__CreatePrimaryKey(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


System_String_o *__fastcall EventDetailEntity__GetCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_438DDF9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21821/*"overwriteRewardMessageCommonReleaseId"*/);
    sub_B775C4(&StringLiteral_21822/*"overwriteRewardMessageId"*/);
    byte_438DDF9 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_21821/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_21822/*"overwriteRewardMessageId"*/,
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

  if ( (byte_438DDEC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_6871/*"FloorRewardPrefabName"*/);
    byte_438DDEC = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6871/*"FloorRewardPrefabName"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DDF6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19232/*"fortificationBasePoint"*/);
    byte_438DDF6 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19232/*"fortificationBasePoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DDF7 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19233/*"fortificationLvPoint"*/);
    byte_438DDF7 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19233/*"fortificationLvPoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetGaugeType(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType;
}


System_Collections_Generic_List_int__o *__fastcall EventDetailEntity__GetIgnoreCommandAssistQuestIds(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v4; // x21

  if ( (byte_438DDFE & 1) == 0 )
  {
    sub_B775C4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_B775C4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_B775C4(&Method_System_Func_List_object___List_int____ctor__);
    sub_B775C4(&System_Func_List_object___List_int___TypeInfo);
    sub_B775C4(&StringLiteral_19799/*"ignoreCommandAssistQuestIds"*/);
    byte_438DDFE = 1;
  }
  v3 = (System_String_o *)StringLiteral_19799/*"ignoreCommandAssistQuestIds"*/;
  v4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v4,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_29EAA10 *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v3,
                                                     (System_Func_TSource__TDestination__o *)v4,
                                                     0LL,
                                                     (const MethodInfo_1D1A9A4 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall EventDetailEntity__GetIntFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438DDED & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438DDED = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v6, 0LL);
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
  EventDetailEntity_ChangeLoadAnimationInfo_array *result; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  const MethodInfo_2F7D534 **v6; // x25
  __int64 v7; // x10
  WarBoardUiData_SaveData_array *v8; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x19
  __int64 v10; // x8
  System_Xml_XmlQualifiedName_o **v11; // x23
  unsigned __int64 v12; // x26
  WarBoardUiData_SaveData_o **m_Items; // x27
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v14; // x21
  __int64 v15; // x10
  System_String_o *v16; // x22
  int32_t v17; // w0
  System_Xml_XmlQualifiedName_o *v18; // x1
  int32_t v19; // w22
  System_Xml_XmlQualifiedName_o **v20; // x24
  const MethodInfo_2F7D534 **v21; // x23
  Il2CppObject *Item; // x0
  int32_t v23; // w25
  EventDetailEntity_ChangeLoadAnimationInfo_o *v24; // x21
  __int64 v25; // x0

  if ( (byte_438DDF2 & 1) == 0 )
  {
    sub_B775C4(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_object__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
    sub_B775C4(&StringLiteral_17969/*"commonReleaseId"*/);
    sub_B775C4(&StringLiteral_17624/*"changeLoadAnimations"*/);
    sub_B775C4(&StringLiteral_16668/*"animationId"*/);
    byte_438DDF2 = 1;
  }
  result = (EventDetailEntity_ChangeLoadAnimationInfo_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17624/*"changeLoadAnimations"*/,
           (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !script )
        goto LABEL_30;
      v6 = (const MethodInfo_2F7D534 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
      script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   script,
                                                                                   (System_Type_o *)StringLiteral_17624/*"changeLoadAnimations"*/,
                                                                                   (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !script )
        goto LABEL_30;
      v7 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&script->klass->_2.bitflags2 + 1) < (unsigned int)v7 )
        goto LABEL_30;
      if ( (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_List_object__TypeInfo )
        goto LABEL_30;
      v8 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
             (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_object__ToArray__);
      v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v9,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
      if ( !v8 )
        goto LABEL_30;
      v10 = *(_QWORD *)&v8->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_16668/*"animationId"*/;
        v12 = 0LL;
        m_Items = v8->m_Items;
        do
        {
          if ( v12 >= (unsigned int)v10 )
          {
            v25 = sub_B776C8(script);
            sub_B77668(v25, 0LL);
          }
          v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v12];
          if ( v14 )
          {
            v15 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
            if ( *(&v14->klass->_2.bitflags2 + 1) >= (unsigned int)v15
              && (System_Collections_Generic_Dictionary_string__object__c *)v14->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v12],
                                                                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_17969/*"commonReleaseId"*/,
                                                                                           (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
              if ( ((unsigned __int8)script & 1) != 0 )
              {
                script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                                             v14,
                                                                                             *v11,
                                                                                             (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)script & 1) != 0 )
                {
                  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
                                                                                               (System_Type_o *)StringLiteral_17969/*"commonReleaseId"*/,
                                                                                               *v6);
                  if ( !script )
                    goto LABEL_30;
                  v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
                                             script,
                                             script->klass->vtable._4_unknown.methodPtr);
                  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !System_Convert_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                  }
                  v17 = System_Convert__ToInt32_42780592(v16, 0LL);
                  v18 = *v11;
                  v19 = v17;
                  v20 = v11;
                  v21 = v6;
                  Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
                                           (System_Type_o *)v18,
                                           *v6);
                  v23 = System_Convert__ToInt32(Item, 0LL);
                  v24 = (EventDetailEntity_ChangeLoadAnimationInfo_o *)sub_B77694(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
                  EventDetailEntity_ChangeLoadAnimationInfo___ctor(v24, v19, v23, 0LL);
                  if ( !v9 )
                    goto LABEL_30;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v9,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
                  v6 = v21;
                  v11 = v20;
                }
              }
            }
          }
          LODWORD(v10) = v8->max_length;
        }
        while ( (__int64)++v12 < (int)v10 );
      }
      if ( !v9 )
LABEL_30:
        sub_B7769C(script, v4);
      return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v9,
                                                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
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
  System_String_o *v7; // x19
  int32_t IntFromScript; // w0
  const MethodInfo *v9; // x2
  int32_t v10; // w22
  System_String_o *StringFromScript; // x20

  if ( (byte_438DDF8 & 1) == 0 )
  {
    sub_B775C4(&CondType_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438DDF8 = 1;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  IntFromScript = EventDetailEntity__GetIntFromScript(this, messageCommonReleaseKey, (const MethodInfo *)messageKey);
  if ( !IntFromScript )
    return v7;
  v10 = IntFromScript;
  StringFromScript = EventDetailEntity__GetStringFromScript(this, messageKey, v9);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsCommonRelease(v10, 0LL) || System_String__IsNullOrEmpty(StringFromScript, 0LL) )
    return v7;
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

  if ( (byte_438DDFB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21820/*"overwriteRewardCondCommonReleaseId"*/);
    byte_438DDFB = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21820/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetOverwriteShopCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DDFC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21825/*"overwriteShopCondCommonReleaseId"*/);
    byte_438DDFC = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21825/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DDF3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22155/*"randomMissionMaxNum"*/);
    byte_438DDF3 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22155/*"randomMissionMaxNum"*/, v2);
}


EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *__fastcall EventDetailEntity__GetReplaceEventRewardBtnLogoInfo(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v6; // x19
  __int64 v7; // x10
  System_String_o *v8; // x20
  int32_t v9; // w20
  Il2CppObject *v10; // x0
  int32_t v11; // w21
  EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *v12; // x19

  if ( (byte_438DDF5 & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B775C4(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
    sub_B775C4(&StringLiteral_18841/*"eventLogoId"*/);
    sub_B775C4(&StringLiteral_17969/*"commonReleaseId"*/);
    sub_B775C4(&StringLiteral_22237/*"replaceEventRewardBtnLogoInfo"*/);
    byte_438DDF5 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22237/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          Item,
          (System_Type_o *)StringLiteral_22237/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0LL;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_22237/*"replaceEventRewardBtnLogoInfo"*/,
                                                                                   (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v6 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
        v7 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v7)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v7 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_20:
    sub_B7769C(Item, v4);
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17969/*"commonReleaseId"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v6,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18841/*"eventLogoId"*/,
          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6,
                                                                             (System_Type_o *)StringLiteral_17969/*"commonReleaseId"*/,
                                                                             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_20;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                            Item,
                            Item->klass->vtable._4_unknown.methodPtr);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v9 = System_Convert__ToInt32_42780592(v8, 0LL);
  v10 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6,
                          (System_Type_o *)StringLiteral_18841/*"eventLogoId"*/,
                          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = System_Convert__ToInt32(v10, 0LL);
  v12 = (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)sub_B77694(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
  EventDetailEntity_ReplaceEventRewardBtnLogoInfo___ctor(v12, v9, v11, 0LL);
  return v12;
}


System_String_o *__fastcall EventDetailEntity__GetServantFatigueFolder(
        EventDetailEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t ServantFatigueId; // w0
  int DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v6; // x0
  System_String_o *DATA_ROOT_FOLDER; // x20
  Il2CppObject *v8; // x0
  int v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438DDF0 & 1) == 0 )
  {
    sub_B775C4(&EventDetailEntity_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    byte_438DDF0 = 1;
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
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, v2);
  return System_String__Format(DATA_ROOT_FOLDER, v8, 0LL);
}


int32_t __fastcall EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DDF1 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_12951/*"ServantFatigueId"*/);
    byte_438DDF1 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12951/*"ServantFatigueId"*/, v2);
}


System_String_o *__fastcall EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_438DDFA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_21827/*"overwriteShopMessageId"*/);
    sub_B775C4(&StringLiteral_21826/*"overwriteShopMessageCommonReleaseId"*/);
    byte_438DDFA = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_21826/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_21827/*"overwriteShopMessageId"*/,
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
  System_String_o *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438DDEE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B775C4(&string_TypeInfo);
    byte_438DDEE = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B77990(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DDEF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23457/*"useDiceSpotId"*/);
    byte_438DDEF = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23457/*"useDiceSpotId"*/, v2);
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

  if ( (byte_438DDFF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20336/*"isEventCircleProgress"*/);
    byte_438DDFF = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20336/*"isEventCircleProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DDFD & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20337/*"isEventCommandAssist"*/);
    byte_438DDFD = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20337/*"isEventCommandAssist"*/, v2) > 0;
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


bool __fastcall EventDetailEntity__IsEventRiverProgress(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DE00 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20338/*"isEventRiverProgress"*/);
    byte_438DE00 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20338/*"isEventRiverProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_438DDF4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18850/*"eventUiCushion"*/);
    byte_438DDF4 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18850/*"eventUiCushion"*/, v2) > 0;
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

  if ( (byte_438DDEB & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20350/*"isPersonalRaid"*/);
    byte_438DDEB = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20350/*"isPersonalRaid"*/, v2) > 0;
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
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v6; // x20

  if ( (byte_438DDE9 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DDE9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v6 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( NetworkManager__getTime(0LL) <= *(_QWORD *)&v6->fields.eventId )
      LODWORD(Entity) = this->fields.bgmId;
    else
      LODWORD(Entity) = this->fields.afterBgmId;
  }
  return (int)Entity;
}


int32_t __fastcall EventDetailEntity__getShopBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v6; // x20

  if ( (byte_438DDEA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438DDEA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B7769C(Instance, v4);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v6 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( NetworkManager__getTime(0LL) <= *(_QWORD *)&v6->fields.eventId )
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