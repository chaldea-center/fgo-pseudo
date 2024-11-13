void __fastcall EventDetailEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2

  if ( (byte_4B16151 & 1) == 0 )
  {
    sub_1BCA7E0(&EventDetailEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_6330/*"EventServantFatigue/{0}"*/, v8, v9);
    byte_4B16151 = 1;
  }
  EventDetailEntity_TypeInfo->static_fields->DATA_ROOT_FOLDER = (struct System_String_o *)StringLiteral_6330/*"EventServantFatigue/{0}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventDetailEntity_TypeInfo->static_fields,
    StringLiteral_6330/*"EventServantFatigue/{0}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void __fastcall EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16150 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_int___ctor__, method, v2);
    byte_4B16150 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_31B2C40 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDetailEntity__CreatePrimaryKey(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


System_String_o *__fastcall EventDetailEntity__GetCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4B16144 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22646/*"overwriteRewardMessageCommonReleaseId"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_22647/*"overwriteRewardMessageId"*/, v5, v6);
    byte_4B16144 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22646/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22647/*"overwriteRewardMessageId"*/,
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

  if ( (byte_4B16137 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6862/*"FloorRewardPrefabName"*/, method, v2);
    byte_4B16137 = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6862/*"FloorRewardPrefabName"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16141 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19790/*"fortificationBasePoint"*/, method, v2);
    byte_4B16141 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19790/*"fortificationBasePoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16142 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19791/*"fortificationLvPoint"*/, method, v2);
    byte_4B16142 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19791/*"fortificationLvPoint"*/, v2);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x20
  System_Func_object__object__o *v12; // x21

  if ( (byte_4B16149 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method, v2);
    sub_1BCA7E0(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v5, v6);
    sub_1BCA7E0(&System_Func_List_object___List_int___TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_20440/*"ignoreCommandAssistQuestIds"*/, v9, v10);
    byte_4B16149 = 1;
  }
  v11 = (System_String_o *)StringLiteral_20440/*"ignoreCommandAssistQuestIds"*/;
  v12 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_List_object___List_int___TypeInfo, method, v2, v3);
  System_Func_object__object____ctor(v12, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v11,
                                                     (System_Func_TSource__TDestination__o *)v12,
                                                     0LL,
                                                     (const MethodInfo_2F19B3C *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall EventDetailEntity__GetIntFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16138 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, key, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6);
    byte_4B16138 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v9 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
      LODWORD(script) = System_Convert__ToInt32(v9, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v31; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_32651E0 **v33; // x25
  __int64 methodPtr_low; // x10
  System_Object_array *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  __int64 v40; // x8
  Il2CppObject **v41; // x23
  unsigned __int64 v42; // x26
  Il2CppObject **m_Items; // x27
  System_Collections_Generic_Dictionary_object__object__o *v44; // x21
  __int64 v45; // x10
  __int64 v46; // x1
  System_String_o *v47; // x22
  int32_t v48; // w0
  Il2CppObject *v49; // x1
  int32_t v50; // w22
  Il2CppObject **v51; // x29
  const MethodInfo_32651E0 **v52; // x23
  Il2CppObject *v53; // x0
  int32_t v54; // w25
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  int64_t v58; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  struct System_Object_array *items; // x8
  _QWORD *v66; // x9
  __int64 size; // x10
  Il2CppClass **v68; // x0

  if ( (byte_4B1613D & 1) == 0 )
  {
    sub_1BCA7E0(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Convert_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ToArray__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_18354/*"commonReleaseId"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_17997/*"changeLoadAnimations"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_16951/*"animationId"*/, v28, v29);
    byte_4B1613D = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_17997/*"changeLoadAnimations"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_32;
  v33 = (const MethodInfo_32651E0 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17997/*"changeLoadAnimations"*/,
                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_32;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_32;
  if ( (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_32;
  v35 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Item,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_object__ToArray__);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo,
                                                       v36,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
  if ( !v35 )
    goto LABEL_32;
  v40 = *(_QWORD *)&v35->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = (Il2CppObject **)&StringLiteral_16951/*"animationId"*/;
    v42 = 0LL;
    m_Items = v35->m_Items;
    do
    {
      if ( v42 >= (unsigned int)v40 )
        sub_1BCAA44(Item, v31);
      v44 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v42];
      if ( v44 )
      {
        v45 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v44->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v45
          && (System_Collections_Generic_Dictionary_string__object__c *)v44->klass->_2.typeHierarchy[v45 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v42],
                                                                              (Il2CppObject *)StringLiteral_18354/*"commonReleaseId"*/,
                                                                              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                v44,
                                                                                *v41,
                                                                                (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v44,
                                                                                  (Il2CppObject *)StringLiteral_18354/*"commonReleaseId"*/,
                                                                                  *v33);
              if ( !Item )
                goto LABEL_32;
              v47 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                         Item,
                                         Item->klass->vtable._4_unknown.methodPtr);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v46);
              v48 = System_Convert__ToInt32_63057916(v47, 0LL);
              v49 = *v41;
              v50 = v48;
              v51 = v41;
              v52 = v33;
              v53 = System_Collections_Generic_Dictionary_object__object___get_Item(v44, v49, *v33);
              v54 = System_Convert__ToInt32(v53, 0LL);
              v58 = sub_1BCAA2C(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo, v55, v56, v57);
              System_Object___ctor((Il2CppObject *)v58, 0LL);
              *(_DWORD *)(v58 + 16) = v50;
              *(_DWORD *)(v58 + 20) = v54;
              if ( !v39 )
                goto LABEL_32;
              items = v39->fields._items;
              v66 = Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__;
              ++v39->fields._version;
              if ( !items )
                goto LABEL_32;
              size = v39->fields._size;
              v33 = v52;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v39,
                  (Il2CppObject *)v58,
                  *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
              }
              else
              {
                v68 = &items->obj.klass + size;
                v39->fields._size = size + 1;
                v68[4] = (Il2CppClass *)v58;
                sub_1BCA784((PartyOrganizationUtility_o *)(v68 + 4), v58, v59, v60, v61, v62, v63, v64);
              }
              v41 = v51;
            }
          }
        }
      }
      LODWORD(v40) = v35->max_length;
    }
    while ( (__int64)++v42 < (int)v40 );
  }
  if ( !v39 )
LABEL_32:
    sub_1BCAA3C(Item, v31);
  return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v39,
                                                              (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
}


System_String_o *__fastcall EventDetailEntity__GetOverwriteMessage(
        EventDetailEntity_o *this,
        System_String_o *messageCommonReleaseKey,
        System_String_o *messageKey,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x19
  int32_t IntFromScript; // w0
  const MethodInfo *v13; // x2
  int32_t v14; // w22
  __int64 v15; // x1
  System_String_o *StringFromScript; // x20
  __int64 v17; // x1

  if ( (byte_4B16143 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, messageCommonReleaseKey, messageKey);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B16143 = 1;
  }
  v11 = (System_String_o *)StringLiteral_1/*""*/;
  IntFromScript = EventDetailEntity__GetIntFromScript(this, messageCommonReleaseKey, (const MethodInfo *)messageKey);
  if ( !IntFromScript )
    return v11;
  v14 = IntFromScript;
  StringFromScript = EventDetailEntity__GetStringFromScript(this, messageKey, v13);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v15);
  if ( !CondType__IsCommonRelease(v14, 0LL) || System_String__IsNullOrEmpty(StringFromScript, 0LL) )
    return v11;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v17);
  return LocalizationManager__Get(StringFromScript, 0LL);
}


int32_t __fastcall EventDetailEntity__GetOverwriteRewardCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16146 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22645/*"overwriteRewardCondCommonReleaseId"*/, method, v2);
    byte_4B16146 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22645/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetOverwriteShopCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16147 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22651/*"overwriteShopCondCommonReleaseId"*/, method, v2);
    byte_4B16147 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22651/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1613E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23022/*"randomMissionMaxNum"*/, method, v2);
    byte_4B1613E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23022/*"randomMissionMaxNum"*/, v2);
}


EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *__fastcall EventDetailEntity__GetReplaceEventRewardBtnLogoInfo(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_Dictionary_object__object__o *v21; // x19
  __int64 methodPtr_low; // x10
  __int64 v23; // x1
  System_String_o *v24; // x20
  int32_t v25; // w20
  Il2CppObject *v26; // x0
  int32_t v27; // w21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x19

  if ( (byte_4B16140 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v8, v9);
    sub_1BCA7E0(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_19331/*"eventLogoId"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_18354/*"commonReleaseId"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_23119/*"replaceEventRewardBtnLogoInfo"*/, v16, v17);
    byte_4B16140 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23119/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23119/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0LL;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_23119/*"replaceEventRewardBtnLogoInfo"*/,
                                                                            (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v21 = Item,
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_19:
    sub_1BCAA3C(Item, v19);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          Item,
          (Il2CppObject *)StringLiteral_18354/*"commonReleaseId"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v21,
          (Il2CppObject *)StringLiteral_19331/*"eventLogoId"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      v21,
                                                                      (Il2CppObject *)StringLiteral_18354/*"commonReleaseId"*/,
                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_19;
  v24 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                             Item,
                             Item->klass->vtable._4_unknown.methodPtr);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v23);
  v25 = System_Convert__ToInt32_63057916(v24, 0LL);
  v26 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v21,
          (Il2CppObject *)StringLiteral_19331/*"eventLogoId"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v27 = System_Convert__ToInt32(v26, 0LL);
  v31 = sub_1BCAA2C(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo, v28, v29, v30);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  *(_DWORD *)(v31 + 16) = v25;
  *(_DWORD *)(v31 + 20) = v27;
  return (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)v31;
}


System_String_o *__fastcall EventDetailEntity__GetServantFatigueFolder(
        EventDetailEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t ServantFatigueId; // w0
  int DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v8; // x0
  System_String_o *DATA_ROOT_FOLDER; // x20
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1613B & 1) == 0 )
  {
    sub_1BCA7E0(&EventDetailEntity_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    byte_4B1613B = 1;
  }
  if ( entity && (ServantFatigueId = EventDetailEntity__GetServantFatigueId(entity, method)) != 0 )
  {
    DATA_DEFAULT_ID = ServantFatigueId;
    v8 = EventDetailEntity_TypeInfo;
  }
  else
  {
    v8 = EventDetailEntity_TypeInfo;
    if ( !EventDetailEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo, method);
      v8 = EventDetailEntity_TypeInfo;
    }
    DATA_DEFAULT_ID = v8->static_fields->DATA_DEFAULT_ID;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8, method);
    v8 = EventDetailEntity_TypeInfo;
  }
  DATA_ROOT_FOLDER = v8->static_fields->DATA_ROOT_FOLDER;
  v12 = DATA_DEFAULT_ID;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return System_String__Format(DATA_ROOT_FOLDER, v10, 0LL);
}


int32_t __fastcall EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1613C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_12789/*"ServantFatigueId"*/, method, v2);
    byte_4B1613C = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12789/*"ServantFatigueId"*/, v2);
}


System_String_o *__fastcall EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4B16145 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_22653/*"overwriteShopMessageId"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_22652/*"overwriteShopMessageCommonReleaseId"*/, v5, v6);
    byte_4B16145 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22652/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22653/*"overwriteShopMessageId"*/,
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
  __int64 v5; // x1
  __int64 v6; // x2
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B16139 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key, method);
    sub_1BCA7E0(&string_TypeInfo, v5, v6);
    byte_4B16139 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1BCACFC(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1613A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_24607/*"useDiceSpotId"*/, method, v2);
    byte_4B1613A = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24607/*"useDiceSpotId"*/, v2);
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

  if ( (byte_4B1614A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21014/*"isEventCircleProgress"*/, method, v2);
    byte_4B1614A = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21014/*"isEventCircleProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B16148 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21015/*"isEventCommandAssist"*/, method, v2);
    byte_4B16148 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21015/*"isEventCommandAssist"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventConquest(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE4(this->fields.flag) & 1;
}


bool __fastcall EventDetailEntity__IsEventDailyPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 3) & 1;
}


bool __fastcall EventDetailEntity__IsEventHappiness(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1614C & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21016/*"isEventHappiness"*/, method, v2);
    byte_4B1614C = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21016/*"isEventHappiness"*/, v2) > 0;
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

  if ( (byte_4B1614B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21017/*"isEventRiverProgress"*/, method, v2);
    byte_4B1614B = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21017/*"isEventRiverProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1613F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_19341/*"eventUiCushion"*/, method, v2);
    byte_4B1613F = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19341/*"eventUiCushion"*/, v2) > 0;
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


bool __fastcall EventDetailEntity__IsMakeFarm(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1614F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21026/*"isMakeFarm"*/, method, v2);
    byte_4B1614F = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21026/*"isMakeFarm"*/, v2) > 0;
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

  if ( (byte_4B16136 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21031/*"isPersonalRaid"*/, method, v2);
    byte_4B16136 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21031/*"isPersonalRaid"*/, v2) > 0;
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


bool __fastcall EventDetailEntity__IsRefreshableEventUiByAfterAction(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1614E & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_21039/*"isRefreshableEventUiByAfterAction"*/, method, v2);
    byte_4B1614E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21039/*"isRefreshableEventUiByAfterAction"*/, v2) > 0;
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


bool __fastcall EventDetailEntity__TryGetJumpSlotIdx(
        EventDetailEntity_o *this,
        int32_t *jumpSlotIdx,
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
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_32651E0 **v28; // x25
  __int64 methodPtr_low; // x10
  __int64 v30; // x1
  System_Object_array *v31; // x20
  __int64 v32; // x8
  Il2CppObject **v33; // x26
  System_Convert_c **v34; // x23
  unsigned __int64 v35; // x27
  Il2CppObject **m_Items; // x28
  System_Collections_Generic_Dictionary_object__object__o *v37; // x22
  __int64 v38; // x10
  Il2CppObject **v39; // x21
  const MethodInfo_32651E0 **v40; // x26
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  System_Convert_c *v43; // x8
  System_Convert_c **v44; // x25
  Il2CppObject *v45; // x23
  bool result; // w0
  __int64 v47; // x1
  Il2CppObject *v48; // x20
  int32_t v49; // w0
  int32_t v50; // w9
  CommonReleaseMaster_o *v51; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1614D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, jumpSlotIdx, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ToArray__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_18354/*"commonReleaseId"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_23620/*"slot"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_23332/*"selectSlotOnRewardScene"*/, v23, v24);
    byte_4B1614D = 1;
  }
  *jumpSlotIdx = -1;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23332/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  v28 = (const MethodInfo_32651E0 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23332/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23332/*"selectSlotOnRewardScene"*/,
                                                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_35;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_35;
  }
  v31 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Item,
          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_object__ToArray__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v51 = (CommonReleaseMaster_o *)Item;
  if ( !v31 )
LABEL_35:
    sub_1BCAA3C(Item, v26);
  v32 = *(_QWORD *)&v31->max_length;
  if ( (int)v32 < 1 )
    return 0;
  v33 = (Il2CppObject **)&StringLiteral_23620/*"slot"*/;
  v34 = &System_Convert_TypeInfo;
  v35 = 0LL;
  m_Items = v31->m_Items;
  while ( 1 )
  {
    if ( v35 >= (unsigned int)v32 )
      sub_1BCAA44(Item, v26);
    v37 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v35];
    if ( v37 )
    {
      v38 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v37->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v38
        && (System_Collections_Generic_Dictionary_string__object__c *)v37->klass->_2.typeHierarchy[v38 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v35],
                                                                            (Il2CppObject *)StringLiteral_18354/*"commonReleaseId"*/,
                                                                            (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              v37,
                                                                              *v33,
                                                                              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            v39 = v33;
            v40 = v28;
            v41 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    v37,
                    (Il2CppObject *)StringLiteral_18354/*"commonReleaseId"*/,
                    *v28);
            v43 = *v34;
            v44 = v34;
            v45 = v41;
            if ( !v43->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v43, v42);
            v26 = (unsigned int)System_Convert__ToInt32(v45, 0LL);
            Item = (System_Collections_Generic_Dictionary_object__object__o *)v51;
            if ( !v51 )
              goto LABEL_35;
            Item = (System_Collections_Generic_Dictionary_object__object__o *)CommonReleaseMaster__IsOpen(
                                                                                v51,
                                                                                v26,
                                                                                0LL,
                                                                                0,
                                                                                0LL);
            v34 = v44;
            v28 = v40;
            v33 = v39;
            if ( ((unsigned __int8)Item & 1) != 0 )
              break;
          }
        }
      }
    }
    LODWORD(v32) = v31->max_length;
    if ( (__int64)++v35 >= (int)v32 )
      return 0;
  }
  v48 = System_Collections_Generic_Dictionary_object__object___get_Item(v37, *v39, *v28);
  if ( !(*v34)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v34, v47);
  v49 = System_Convert__ToInt32(v48, 0LL);
  if ( v49 >= 0 )
    v50 = v49;
  else
    v50 = 0;
  result = v49 >= 0;
  *jumpSlotIdx = v50;
  return result;
}


int32_t __fastcall EventDetailEntity__getBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  bool v15; // cc
  __int64 v16; // x8

  if ( (byte_4B16134 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16134 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    v15 = NetworkManager__getTime(0LL) <= (__int64)v14[6].klass;
    v16 = 40LL;
    if ( v15 )
      v16 = 36LL;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v16);
  }
  return (int)Entity;
}


int32_t __fastcall EventDetailEntity__getShopBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  bool v15; // cc
  __int64 v16; // x8

  if ( (byte_4B16135 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    byte_4B16135 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v11);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v14 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v13);
    v15 = NetworkManager__getTime(0LL) <= (__int64)v14[6].klass;
    v16 = 144LL;
    if ( v15 )
      v16 = 140LL;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v16);
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