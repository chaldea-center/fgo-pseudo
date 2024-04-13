void __fastcall EventDetailEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v12; // x1

  if ( (byte_42EB1A5 & 1) == 0 )
  {
    sub_B5D5C4(&EventDetailEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_6271/*"EventServantFatigue/{0}"*/, v8, v9, v10);
    byte_42EB1A5 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventDetailEntity_TypeInfo->static_fields;
  v12 = (System_Int32_array **)StringLiteral_6271/*"EventServantFatigue/{0}"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_6271/*"EventServantFatigue/{0}"*/;
  sub_B5D560(static_fields, v12, v2, v3, v4, v5, v6, v7);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void __fastcall EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB1A4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EB1A4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDetailEntity__CreatePrimaryKey(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


System_String_o *__fastcall EventDetailEntity__GetCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_42EB19C & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21661/*"overwriteRewardMessageCommonReleaseId"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21662/*"overwriteRewardMessageId"*/, v5, v6, v7);
    byte_42EB19C = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_21661/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_21662/*"overwriteRewardMessageId"*/,
                       v3);
  if ( System_String__IsNullOrEmpty(OverwriteMessage, 0LL) )
    return this->fields.condMessage;
  return OverwriteMessage;
}


System_String_o *__fastcall EventDetailEntity__GetFloorRewardPrefabName(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB18F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_6802/*"FloorRewardPrefabName"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB18F = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6802/*"FloorRewardPrefabName"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB199 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19089/*"fortificationBasePoint"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB199 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19089/*"fortificationBasePoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB19A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19090/*"fortificationLvPoint"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB19A = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19090/*"fortificationLvPoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetGaugeType(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType;
}


System_Collections_Generic_List_int__o *__fastcall EventDetailEntity__GetIgnoreCommandAssistQuestIds(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_String_o *v17; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v18; // x21

  if ( (byte_42EB1A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_List_object___List_int____ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_List_object___List_int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_19650/*"ignoreCommandAssistQuestIds"*/, v14, v15, v16);
    byte_42EB1A1 = 1;
  }
  v17 = (System_String_o *)StringLiteral_19650/*"ignoreCommandAssistQuestIds"*/;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_List_object___List_int___TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
    v18,
    0LL,
    Method_EntityScriptValueConvertLogic_ObjectListToIntList__,
    (const MethodInfo_2C3041C *)Method_System_Func_List_object___List_int____ctor__);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v17,
                                                     (System_Func_TSource__TDestination__o *)v18,
                                                     0LL,
                                                     (const MethodInfo_1AE6800 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall EventDetailEntity__GetIntFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v10; // x19
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB190 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)key, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7, v8);
    byte_42EB190 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v10 = (Il2CppObject *)value;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      LODWORD(script) = System_Convert__ToInt32(v10, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  EventDetailEntity_ChangeLoadAnimationInfo_array *result; // x0
  __int64 v45; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *script; // x0
  const MethodInfo_2F26AF8 **v47; // x25
  __int64 v48; // x10
  WarBoardUiData_SaveData_array *v49; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v50; // x19
  __int64 v51; // x8
  System_Xml_XmlQualifiedName_o **v52; // x23
  unsigned __int64 v53; // x26
  WarBoardUiData_SaveData_o **m_Items; // x27
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v55; // x21
  __int64 v56; // x10
  System_String_o *v57; // x22
  int32_t v58; // w0
  System_Xml_XmlQualifiedName_o *v59; // x1
  int32_t v60; // w22
  System_Xml_XmlQualifiedName_o **v61; // x24
  const MethodInfo_2F26AF8 **v62; // x23
  Il2CppObject *Item; // x0
  int32_t v64; // w25
  EventDetailEntity_ChangeLoadAnimationInfo_o *v65; // x21
  __int64 v66; // x0

  if ( (byte_42EB195 & 1) == 0 )
  {
    sub_B5D5C4(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Convert_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__,
      v20,
      v21,
      v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__ToArray__, v23, v24, v25);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__,
      v26,
      v27,
      v28);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_17834/*"commonReleaseId"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_17494/*"changeLoadAnimations"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_16546/*"animationId"*/, v41, v42, v43);
    byte_42EB195 = 1;
  }
  result = (EventDetailEntity_ChangeLoadAnimationInfo_array *)this->fields.script;
  if ( result )
  {
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)StringLiteral_17494/*"changeLoadAnimations"*/,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    {
      script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
      if ( !script )
        goto LABEL_30;
      v47 = (const MethodInfo_2F26AF8 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
      script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   script,
                                                                                   (System_Type_o *)StringLiteral_17494/*"changeLoadAnimations"*/,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !script )
        goto LABEL_30;
      v48 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&script->klass->_2.bitflags2 + 1) < (unsigned int)v48 )
        goto LABEL_30;
      if ( (System_Collections_Generic_List_object__c *)script->klass->_2.typeHierarchy[v48 - 1] != System_Collections_Generic_List_object__TypeInfo )
        goto LABEL_30;
      v49 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
              (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)script,
              (const MethodInfo_305910C *)Method_System_Collections_Generic_List_object__ToArray__);
      v50 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v50,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
      if ( !v49 )
        goto LABEL_30;
      v51 = *(_QWORD *)&v49->max_length;
      if ( (int)v51 >= 1 )
      {
        v52 = (System_Xml_XmlQualifiedName_o **)&StringLiteral_16546/*"animationId"*/;
        v53 = 0LL;
        m_Items = v49->m_Items;
        do
        {
          if ( v53 >= (unsigned int)v51 )
          {
            v66 = sub_B5D6C8(script);
            sub_B5D668(v66, 0LL);
          }
          v55 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v53];
          if ( v55 )
          {
            v56 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
            if ( *(&v55->klass->_2.bitflags2 + 1) >= (unsigned int)v56
              && (System_Collections_Generic_Dictionary_string__object__c *)v55->klass->_2.typeHierarchy[v56 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            {
              script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                                           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)m_Items[v53],
                                                                                           (System_Xml_XmlQualifiedName_o *)StringLiteral_17834/*"commonReleaseId"*/,
                                                                                           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
              if ( ((unsigned __int8)script & 1) != 0 )
              {
                script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                                                             v55,
                                                                                             *v52,
                                                                                             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
                if ( ((unsigned __int8)script & 1) != 0 )
                {
                  script = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                               (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v55,
                                                                                               (System_Type_o *)StringLiteral_17834/*"commonReleaseId"*/,
                                                                                               *v47);
                  if ( !script )
                    goto LABEL_30;
                  v57 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))script->klass->vtable._3_ToString.method)(
                                             script,
                                             script->klass->vtable._4_unknown.methodPtr);
                  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !System_Convert_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
                  }
                  v58 = System_Convert__ToInt32_42786468(v57, 0LL);
                  v59 = *v52;
                  v60 = v58;
                  v61 = v52;
                  v62 = v47;
                  Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v55,
                                           (System_Type_o *)v59,
                                           *v47);
                  v64 = System_Convert__ToInt32(Item, 0LL);
                  v65 = (EventDetailEntity_ChangeLoadAnimationInfo_o *)sub_B5D694(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
                  EventDetailEntity_ChangeLoadAnimationInfo___ctor(v65, v60, v64, 0LL);
                  if ( !v50 )
                    goto LABEL_30;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v50,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
                    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
                  v47 = v62;
                  v52 = v61;
                }
              }
            }
          }
          LODWORD(v51) = v49->max_length;
        }
        while ( (__int64)++v53 < (int)v51 );
      }
      if ( !v50 )
LABEL_30:
        sub_B5D69C(script, v45);
      return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v50,
                                                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_String_o *v13; // x19
  int32_t IntFromScript; // w0
  const MethodInfo *v15; // x2
  int32_t v16; // w22
  System_String_o *StringFromScript; // x20

  if ( (byte_42EB19B & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, (_DWORD)messageCommonReleaseKey, (_DWORD)messageKey, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_1/*""*/, v10, v11, v12);
    byte_42EB19B = 1;
  }
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  IntFromScript = EventDetailEntity__GetIntFromScript(this, messageCommonReleaseKey, (const MethodInfo *)messageKey);
  if ( !IntFromScript )
    return v13;
  v16 = IntFromScript;
  StringFromScript = EventDetailEntity__GetStringFromScript(this, messageKey, v15);
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsCommonRelease(v16, 0LL) || System_String__IsNullOrEmpty(StringFromScript, 0LL) )
    return v13;
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
  __int64 v3; // x3

  if ( (byte_42EB19E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21660/*"overwriteRewardCondCommonReleaseId"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB19E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21660/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetOverwriteShopCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB19F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21665/*"overwriteShopCondCommonReleaseId"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB19F = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21665/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB196 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21989/*"randomMissionMaxNum"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB196 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21989/*"randomMissionMaxNum"*/, v2);
}


EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *__fastcall EventDetailEntity__GetReplaceEventRewardBtnLogoInfo(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v27; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *Item; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v29; // x19
  __int64 v30; // x10
  System_String_o *v31; // x20
  int32_t v32; // w20
  Il2CppObject *v33; // x0
  int32_t v34; // w21
  EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *v35; // x19

  if ( (byte_42EB198 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_18703/*"eventLogoId"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_17834/*"commonReleaseId"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_22068/*"replaceEventRewardBtnLogoInfo"*/, v23, v24, v25);
    byte_42EB198 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22068/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
          Item,
          (System_Type_o *)StringLiteral_22068/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0LL;
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                   Item,
                                                                                   (System_Type_o *)StringLiteral_22068/*"replaceEventRewardBtnLogoInfo"*/,
                                                                                   (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v29 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
        v30 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
        *(&Item->klass->_2.bitflags2 + 1) < (unsigned int)v30)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[v30 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_20:
    sub_B5D69C(Item, v27);
  }
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)Item,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_17834/*"commonReleaseId"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v29,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_18703/*"eventLogoId"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v29,
                                                                             (System_Type_o *)StringLiteral_17834/*"commonReleaseId"*/,
                                                                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_20;
  v31 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_Type__IStoreExtension__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                             Item,
                             Item->klass->vtable._4_unknown.methodPtr);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v32 = System_Convert__ToInt32_42786468(v31, 0LL);
  v33 = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v29,
                          (System_Type_o *)StringLiteral_18703/*"eventLogoId"*/,
                          (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v34 = System_Convert__ToInt32(v33, 0LL);
  v35 = (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)sub_B5D694(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
  EventDetailEntity_ReplaceEventRewardBtnLogoInfo___ctor(v35, v32, v34, 0LL);
  return v35;
}


System_String_o *__fastcall EventDetailEntity__GetServantFatigueFolder(
        EventDetailEntity_o *entity,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t ServantFatigueId; // w0
  int DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v10; // x0
  System_String_o *DATA_ROOT_FOLDER; // x20
  Il2CppObject *v12; // x0
  int v14; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42EB193 & 1) == 0 )
  {
    sub_B5D5C4(&EventDetailEntity_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    byte_42EB193 = 1;
  }
  if ( entity && (ServantFatigueId = EventDetailEntity__GetServantFatigueId(entity, method)) != 0 )
  {
    DATA_DEFAULT_ID = ServantFatigueId;
    v10 = EventDetailEntity_TypeInfo;
  }
  else
  {
    v10 = EventDetailEntity_TypeInfo;
    if ( (BYTE3(EventDetailEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventDetailEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo);
      v10 = EventDetailEntity_TypeInfo;
    }
    DATA_DEFAULT_ID = v10->static_fields->DATA_DEFAULT_ID;
  }
  if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = EventDetailEntity_TypeInfo;
  }
  DATA_ROOT_FOLDER = v10->static_fields->DATA_ROOT_FOLDER;
  v14 = DATA_DEFAULT_ID;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return System_String__Format(DATA_ROOT_FOLDER, v12, 0LL);
}


int32_t __fastcall EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB194 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12866/*"ServantFatigueId"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB194 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12866/*"ServantFatigueId"*/, v2);
}


System_String_o *__fastcall EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_42EB19D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_21667/*"overwriteShopMessageId"*/, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_21666/*"overwriteShopMessageCommonReleaseId"*/, v5, v6, v7);
    byte_42EB19D = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_21666/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_21667/*"overwriteShopMessageId"*/,
                       v3);
  if ( System_String__IsNullOrEmpty(OverwriteMessage, 0LL) )
    return this->fields.shopCondMessage;
  return OverwriteMessage;
}


System_String_o *__fastcall EventDetailEntity__GetStringFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB191 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&string_TypeInfo, v6, v7, v8);
    byte_42EB191 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)key,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B5D990(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB192 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_23284/*"useDiceSpotId"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB192 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23284/*"useDiceSpotId"*/, v2);
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
  __int64 v3; // x3

  if ( (byte_42EB1A2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20182/*"isEventCircleProgress"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB1A2 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20182/*"isEventCircleProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB1A0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20183/*"isEventCommandAssist"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB1A0 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20183/*"isEventCommandAssist"*/, v2) > 0;
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
  __int64 v3; // x3

  if ( (byte_42EB1A3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20184/*"isEventRiverProgress"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB1A3 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20184/*"isEventRiverProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3

  if ( (byte_42EB197 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_18712/*"eventUiCushion"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB197 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_18712/*"eventUiCushion"*/, v2) > 0;
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
  __int64 v3; // x3

  if ( (byte_42EB18E & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20196/*"isPersonalRaid"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB18E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20196/*"isPersonalRaid"*/, v2) > 0;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v17; // x20

  if ( (byte_42EB18C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB18C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v17 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( NetworkManager__getTime(0LL) <= *(_QWORD *)&v17->fields.eventId )
      LODWORD(Entity) = this->fields.bgmId;
    else
      LODWORD(Entity) = this->fields.afterBgmId;
  }
  return (int)Entity;
}


int32_t __fastcall EventDetailEntity__getShopBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  WarEntity_o *Entity; // x0
  WarEntity_o *v17; // x20

  if ( (byte_42EB18D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12, v13);
    byte_42EB18D = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v15);
  }
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v17 = Entity;
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    if ( NetworkManager__getTime(0LL) <= *(_QWORD *)&v17->fields.eventId )
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