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

  if ( (byte_40FC62C & 1) == 0 )
  {
    sub_B16FFC(&EventDetailEntity_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_6174/*"EventServantFatigue/{0}"*/, v8);
    byte_40FC62C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventDetailEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_6174/*"EventServantFatigue/{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6174/*"EventServantFatigue/{0}"*/;
  sub_B16F98(static_fields, v10, v2, v3, v4, v5, v6, v7);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void __fastcall EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FC62B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FC62B = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_40FC624 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21286/*"overwriteRewardMessageCommonReleaseId"*/, method);
    sub_B16FFC(&StringLiteral_21287/*"overwriteRewardMessageId"*/, v4);
    byte_40FC624 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_21286/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_21287/*"overwriteRewardMessageId"*/,
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

  if ( (byte_40FC617 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_6698/*"FloorRewardPrefabName"*/, method);
    byte_40FC617 = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6698/*"FloorRewardPrefabName"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FC621 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18781/*"fortificationBasePoint"*/, method);
    byte_40FC621 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18781/*"fortificationBasePoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FC622 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18782/*"fortificationLvPoint"*/, method);
    byte_40FC622 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18782/*"fortificationLvPoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetGaugeType(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType;
}


System_Collections_Generic_List_int__o *__fastcall EventDetailEntity__GetIgnoreCommandAssistQuestIds(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v11; // x21

  if ( (byte_40FC629 & 1) == 0 )
  {
    sub_B16FFC(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_B16FFC(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v6);
    sub_B16FFC(&Method_System_Func_List_object___List_int____ctor__, v7);
    sub_B16FFC(&System_Func_List_object___List_int___TypeInfo, v8);
    sub_B16FFC(&StringLiteral_19331/*"ignoreCommandAssistQuestIds"*/, v9);
    byte_40FC629 = 1;
  }
  v10 = (System_String_o *)StringLiteral_19331/*"ignoreCommandAssistQuestIds"*/;
  v11 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                          System_Func_List_object___List_int___TypeInfo,
                                                                                          method,
                                                                                          v2,
                                                                                          v3,
                                                                                          v4);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v11,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2B6C28C *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v10,
                                                     (System_Func_TSource__TDestination__o *)v11,
                                                     0LL,
                                                     (const MethodInfo_18C5838 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
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

  if ( (byte_40FC618 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, key);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    byte_40FC618 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  const MethodInfo_2DA3B54 **v18; // x25
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v20; // x10
  WarBoardUiData_SaveData_array *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x8
  System_Xml_XmlQualifiedName_o **v31; // x23
  unsigned __int64 v32; // x26
  WarBoardUiData_SaveData_o **m_Items; // x27
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v34; // x21
  __int64 v35; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v36; // x0
  System_String_o *v37; // x22
  int32_t v38; // w0
  System_Xml_XmlQualifiedName_o *v39; // x1
  int32_t v40; // w22
  System_Xml_XmlQualifiedName_o **v41; // x24
  const MethodInfo_2DA3B54 **v42; // x23
  Il2CppObject *v43; // x0
  int32_t v44; // w25
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  EventDetailEntity_ChangeLoadAnimationInfo_o *v49; // x21

  if ( (byte_40FC61D & 1) == 0 )
  {
    sub_B16FFC(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo, method);
    sub_B16FFC(&System_Convert_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__ToArray__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo, v12);
    sub_B16FFC(&StringLiteral_17548/*"commonReleaseId"*/, v13);
    sub_B16FFC(&StringLiteral_17213/*"changeLoadAnimations"*/, v14);
    sub_B16FFC(&StringLiteral_16284/*"animationId"*/, v15);
    byte_40FC61D = 1;
  }
  result = (EventDetailEntity_ChangeLoadAnimationInfo_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17213/*"changeLoadAnimations"*/,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      script = this->fields.script;
      if ( !script )
        goto LABEL_30;
      v18 = (const MethodInfo_2DA3B54 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
      Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
               (System_Type_o *)StringLiteral_17213/*"changeLoadAnimations"*/,
               (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_30;
      v20 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v20 )
        goto LABEL_30;
      if ( (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[v20 - 1] != System_Collections_Generic_List_object__TypeInfo )
        goto LABEL_30;
      v21 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)Item,
              (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_object__ToArray__);
      v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo, v22, v23, v24, v25);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v26,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
      if ( !v21 )
        goto LABEL_30;
      v30 = *(_QWORD *)&v21->max_length;
      if ( (int)v30 >= 1 )
      {
        v31 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_16284/*"animationId"*/;
        v32 = 0LL;
        m_Items = v21->m_Items;
        do
        {
          if ( v32 >= (unsigned int)v30 )
          {
            sub_B17100(v27, v28, v29);
            sub_B170A0();
          }
          v34 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v32];
          if ( v34 )
          {
            v35 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
            if ( *(&v34->klass->_2.bitflags2 + 1) >= (unsigned int)v35
              && (System_Collections_Generic_Dictionary_string__object__c *)v34->klass->_2.typeHierarchy[v35 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              v27 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v32],
                      (System_Xml_XmlQualifiedName_o *)StringLiteral_17548/*"commonReleaseId"*/,
                      (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
              if ( v27 )
              {
                v27 = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                        v34,
                        *v31,
                        (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( v27 )
                {
                  v36 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34,
                          (System_Type_o *)StringLiteral_17548/*"commonReleaseId"*/,
                          *v18);
                  if ( !v36 )
                    goto LABEL_30;
                  v37 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v36->klass->vtable[3].method)(
                                             v36,
                                             v36->klass->vtable[4].methodPtr);
                  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !System_Convert_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                  }
                  v38 = System_Convert__ToInt32_41746964(v37, 0LL);
                  v39 = *v31;
                  v40 = v38;
                  v41 = v31;
                  v42 = v18;
                  v43 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34,
                                          (System_Type_o *)v39,
                                          *v18);
                  v44 = System_Convert__ToInt32(v43, 0LL);
                  v49 = (EventDetailEntity_ChangeLoadAnimationInfo_o *)sub_B170CC(
                                                                         EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo,
                                                                         v45,
                                                                         v46,
                                                                         v47,
                                                                         v48);
                  EventDetailEntity_ChangeLoadAnimationInfo___ctor(v49, v40, v44, 0LL);
                  if ( !v26 )
                    goto LABEL_30;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v26,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v49,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
                  v18 = v42;
                  v31 = v41;
                }
              }
            }
          }
          LODWORD(v30) = v21->max_length;
        }
        while ( (__int64)++v32 < (int)v30 );
      }
      if ( !v26 )
LABEL_30:
        sub_B170D4();
      return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
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

  if ( (byte_40FC623 & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, messageCommonReleaseKey);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_1/*""*/, v8);
    byte_40FC623 = 1;
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

  if ( (byte_40FC626 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21285/*"overwriteRewardCondCommonReleaseId"*/, method);
    byte_40FC626 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21285/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetOverwriteShopCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FC627 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21290/*"overwriteShopCondCommonReleaseId"*/, method);
    byte_40FC627 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21290/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FC61E & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21604/*"randomMissionMaxNum"*/, method);
    byte_40FC61E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21604/*"randomMissionMaxNum"*/, v2);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v11; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v14; // x19
  __int64 v15; // x10
  UnityEngine_Purchasing_IStoreExtension_o *v16; // x0
  System_String_o *v17; // x20
  int32_t v18; // w20
  Il2CppObject *v19; // x0
  int32_t v20; // w21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *v25; // x19

  if ( (byte_40FC620 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_B16FFC(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_18405/*"eventLogoId"*/, v7);
    sub_B16FFC(&StringLiteral_17548/*"commonReleaseId"*/, v8);
    sub_B16FFC(&StringLiteral_21681/*"replaceEventRewardBtnLogoInfo"*/, v9);
    byte_40FC620 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21681/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v11 = this->fields.script;
  if ( !v11 )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v11,
          (System_Type_o *)StringLiteral_21681/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0LL;
  v12 = this->fields.script;
  if ( !v12
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v12,
                 (System_Type_o *)StringLiteral_21681/*"replaceEventRewardBtnLogoInfo"*/,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
        v15 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v15)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v15 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_20:
    sub_B170D4();
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17548/*"commonReleaseId"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v14,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18405/*"eventLogoId"*/,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  v16 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
          (System_Type_o *)StringLiteral_17548/*"commonReleaseId"*/,
          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v16 )
    goto LABEL_20;
  v17 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))v16->klass->vtable[3].method)(
                             v16,
                             v16->klass->vtable[4].methodPtr);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v18 = System_Convert__ToInt32_41746964(v17, 0LL);
  v19 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
                          (System_Type_o *)StringLiteral_18405/*"eventLogoId"*/,
                          (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v20 = System_Convert__ToInt32(v19, 0LL);
  v25 = (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)sub_B170CC(
                                                               EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo,
                                                               v21,
                                                               v22,
                                                               v23,
                                                               v24);
  EventDetailEntity_ReplaceEventRewardBtnLogoInfo___ctor(v25, v18, v20, 0LL);
  return v25;
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

  if ( (byte_40FC61B & 1) == 0 )
  {
    sub_B16FFC(&EventDetailEntity_TypeInfo, method);
    sub_B16FFC(&int_TypeInfo, v3);
    byte_40FC61B = 1;
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

  if ( (byte_40FC61C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12659/*"ServantFatigueId"*/, method);
    byte_40FC61C = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12659/*"ServantFatigueId"*/, v2);
}


System_String_o *__fastcall EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *OverwriteMessage; // x20

  if ( (byte_40FC625 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_21292/*"overwriteShopMessageId"*/, method);
    sub_B16FFC(&StringLiteral_21291/*"overwriteShopMessageCommonReleaseId"*/, v4);
    byte_40FC625 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_21291/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_21292/*"overwriteShopMessageId"*/,
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

  if ( (byte_40FC619 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B16FFC(&string_TypeInfo, v5);
    byte_40FC619 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B173C8(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FC61A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22886/*"useDiceSpotId"*/, method);
    byte_40FC61A = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22886/*"useDiceSpotId"*/, v2);
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

  if ( (byte_40FC62A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19848/*"isEventCircleProgress"*/, method);
    byte_40FC62A = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19848/*"isEventCircleProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_40FC628 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19849/*"isEventCommandAssist"*/, method);
    byte_40FC628 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19849/*"isEventCommandAssist"*/, v2) > 0;
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

  if ( (byte_40FC61F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_18414/*"eventUiCushion"*/, method);
    byte_40FC61F = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18414/*"eventUiCushion"*/, v2) > 0;
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

  if ( (byte_40FC616 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19861/*"isPersonalRaid"*/, method);
    byte_40FC616 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19861/*"isPersonalRaid"*/, v2) > 0;
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v9; // x20

  if ( (byte_40FC614 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC614 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v9; // x20

  if ( (byte_40FC615 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FC615 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                              (DataManager_o *)Instance,
                                                                                              (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields.eventId,
             (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
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