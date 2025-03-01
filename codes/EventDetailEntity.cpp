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

  if ( (byte_4BFD6A1 & 1) == 0 )
  {
    sub_1C2E12C(&EventDetailEntity_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_6369/*"EventServantFatigue/{0}"*/, v8);
    byte_4BFD6A1 = 1;
  }
  EventDetailEntity_TypeInfo->static_fields->DATA_ROOT_FOLDER = (struct System_String_o *)StringLiteral_6369/*"EventServantFatigue/{0}"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)EventDetailEntity_TypeInfo->static_fields,
    StringLiteral_6369/*"EventServantFatigue/{0}"*/,
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
  if ( (byte_4BFD6A0 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_int___ctor__, method);
    byte_4BFD6A0 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3278C9C *)Method_DataEntityBase_int___ctor__);
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

  if ( (byte_4BFD693 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_22829/*"overwriteRewardMessageCommonReleaseId"*/, method);
    sub_1C2E12C(&StringLiteral_22830/*"overwriteRewardMessageId"*/, v4);
    byte_4BFD693 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22829/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22830/*"overwriteRewardMessageId"*/,
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

  if ( (byte_4BFD686 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_6904/*"FloorRewardPrefabName"*/, method);
    byte_4BFD686 = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6904/*"FloorRewardPrefabName"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD690 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19941/*"fortificationBasePoint"*/, method);
    byte_4BFD690 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19941/*"fortificationBasePoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD691 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19942/*"fortificationLvPoint"*/, method);
    byte_4BFD691 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19942/*"fortificationLvPoint"*/, v2);
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
  System_String_o *v6; // x20
  System_Func_object__object__o *v7; // x21

  if ( (byte_4BFD698 & 1) == 0 )
  {
    sub_1C2E12C(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____, method);
    sub_1C2E12C(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__, v3);
    sub_1C2E12C(&System_Func_List_object___List_int___TypeInfo, v4);
    sub_1C2E12C(&StringLiteral_20593/*"ignoreCommandAssistQuestIds"*/, v5);
    byte_4BFD698 = 1;
  }
  v6 = (System_String_o *)StringLiteral_20593/*"ignoreCommandAssistQuestIds"*/;
  v7 = (System_Func_object__object__o *)sub_1C2E378(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v7, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v6,
                                                     (System_Func_TSource__TDestination__o *)v7,
                                                     0LL,
                                                     (const MethodInfo_2FD7FC8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall EventDetailEntity__GetIntFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFD687 & 1) == 0 )
  {
    sub_1C2E12C(&System_Convert_TypeInfo, key);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    byte_4BFD687 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v17; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_3335AF4 **v19; // x25
  __int64 methodPtr_low; // x10
  System_Object_array *v21; // x19
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x8
  Il2CppObject **v24; // x23
  unsigned __int64 v25; // x26
  Il2CppObject **m_Items; // x27
  System_Collections_Generic_Dictionary_object__object__o *v27; // x21
  __int64 v28; // x10
  System_String_o *v29; // x22
  int32_t v30; // w0
  Il2CppObject *v31; // x1
  int32_t v32; // w22
  Il2CppObject **v33; // x29
  const MethodInfo_3335AF4 **v34; // x23
  Il2CppObject *v35; // x0
  int32_t v36; // w25
  int64_t v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0

  if ( (byte_4BFD68C & 1) == 0 )
  {
    sub_1C2E12C(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo, method);
    sub_1C2E12C(&System_Convert_TypeInfo, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_object__ToArray__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo, v11);
    sub_1C2E12C(&System_Collections_Generic_List_object__TypeInfo, v12);
    sub_1C2E12C(&StringLiteral_18491/*"commonReleaseId"*/, v13);
    sub_1C2E12C(&StringLiteral_18132/*"changeLoadAnimations"*/, v14);
    sub_1C2E12C(&StringLiteral_17078/*"animationId"*/, v15);
    byte_4BFD68C = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_18132/*"changeLoadAnimations"*/,
          (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_32;
  v19 = (const MethodInfo_3335AF4 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_18132/*"changeLoadAnimations"*/,
                                                                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_32;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_32;
  if ( (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_32;
  v21 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Item,
          (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_object__ToArray__);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
  if ( !v21 )
    goto LABEL_32;
  v23 = *(_QWORD *)&v21->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = (Il2CppObject **)&StringLiteral_17078/*"animationId"*/;
    v25 = 0LL;
    m_Items = v21->m_Items;
    do
    {
      if ( v25 >= (unsigned int)v23 )
        sub_1C2E390(Item, v17);
      v27 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v25];
      if ( v27 )
      {
        v28 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v27->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v28
          && (System_Collections_Generic_Dictionary_string__object__c *)v27->klass->_2.typeHierarchy[v28 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v25],
                                                                              (Il2CppObject *)StringLiteral_18491/*"commonReleaseId"*/,
                                                                              (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                v27,
                                                                                *v24,
                                                                                (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v27,
                                                                                  (Il2CppObject *)StringLiteral_18491/*"commonReleaseId"*/,
                                                                                  *v19);
              if ( !Item )
                goto LABEL_32;
              v29 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                         Item,
                                         Item->klass->vtable._4_unknown.methodPtr);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v30 = System_Convert__ToInt32_63892280(v29, 0LL);
              v31 = *v24;
              v32 = v30;
              v33 = v24;
              v34 = v19;
              v35 = System_Collections_Generic_Dictionary_object__object___get_Item(v27, v31, *v19);
              v36 = System_Convert__ToInt32(v35, 0LL);
              v37 = sub_1C2E378(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v37, 0LL);
              *(_DWORD *)(v37 + 16) = v32;
              *(_DWORD *)(v37 + 20) = v36;
              if ( !v22 )
                goto LABEL_32;
              items = v22->fields._items;
              v45 = Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__;
              ++v22->fields._version;
              if ( !items )
                goto LABEL_32;
              size = v22->fields._size;
              v19 = v34;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v22,
                  (Il2CppObject *)v37,
                  *(const MethodInfo_366B8AC **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
              }
              else
              {
                v47 = &items->obj.klass + size;
                v22->fields._size = size + 1;
                v47[4] = (Il2CppClass *)v37;
                sub_1C2E0D0((PartyOrganizationUtility_o *)(v47 + 4), v37, v38, v39, v40, v41, v42, v43);
              }
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
LABEL_32:
    sub_1C2E388(Item, v17);
  return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v22,
                                                              (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
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

  if ( (byte_4BFD692 & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, messageCommonReleaseKey);
    sub_1C2E12C(&LocalizationManager_TypeInfo, v7);
    sub_1C2E12C(&StringLiteral_1/*""*/, v8);
    byte_4BFD692 = 1;
  }
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  IntFromScript = EventDetailEntity__GetIntFromScript(this, messageCommonReleaseKey, (const MethodInfo *)messageKey);
  if ( !IntFromScript )
    return v9;
  v12 = IntFromScript;
  StringFromScript = EventDetailEntity__GetStringFromScript(this, messageKey, v11);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsCommonRelease(v12, 0LL) || System_String__IsNullOrEmpty(StringFromScript, 0LL) )
    return v9;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(StringFromScript, 0LL);
}


int32_t __fastcall EventDetailEntity__GetOverwriteRewardCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD695 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_22828/*"overwriteRewardCondCommonReleaseId"*/, method);
    byte_4BFD695 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22828/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetOverwriteShopCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD696 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_22834/*"overwriteShopCondCommonReleaseId"*/, method);
    byte_4BFD696 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22834/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD68D & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_23208/*"randomMissionMaxNum"*/, method);
    byte_4BFD68D = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23208/*"randomMissionMaxNum"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetRefreshWarBySelectBonus(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD69F & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_23267/*"refreshWarBySelectBonus"*/, method);
    byte_4BFD69F = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23267/*"refreshWarBySelectBonus"*/, v2);
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
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_Dictionary_object__object__o *v13; // x19
  __int64 methodPtr_low; // x10
  System_String_o *v15; // x20
  int32_t v16; // w20
  Il2CppObject *v17; // x0
  int32_t v18; // w21
  __int64 v19; // x19

  if ( (byte_4BFD68F & 1) == 0 )
  {
    sub_1C2E12C(&System_Convert_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1C2E12C(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_19474/*"eventLogoId"*/, v7);
    sub_1C2E12C(&StringLiteral_18491/*"commonReleaseId"*/, v8);
    sub_1C2E12C(&StringLiteral_23309/*"replaceEventRewardBtnLogoInfo"*/, v9);
    byte_4BFD68F = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23309/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23309/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0LL;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_23309/*"replaceEventRewardBtnLogoInfo"*/,
                                                                            (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v13 = Item,
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_19:
    sub_1C2E388(Item, v11);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          Item,
          (Il2CppObject *)StringLiteral_18491/*"commonReleaseId"*/,
          (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v13,
          (Il2CppObject *)StringLiteral_19474/*"eventLogoId"*/,
          (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      v13,
                                                                      (Il2CppObject *)StringLiteral_18491/*"commonReleaseId"*/,
                                                                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_19;
  v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                             Item,
                             Item->klass->vtable._4_unknown.methodPtr);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v16 = System_Convert__ToInt32_63892280(v15, 0LL);
  v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v13,
          (Il2CppObject *)StringLiteral_19474/*"eventLogoId"*/,
          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v18 = System_Convert__ToInt32(v17, 0LL);
  v19 = sub_1C2E378(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  *(_DWORD *)(v19 + 16) = v16;
  *(_DWORD *)(v19 + 20) = v18;
  return (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)v19;
}


System_String_o *__fastcall EventDetailEntity__GetServantFatigueFolder(
        EventDetailEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t ServantFatigueId; // w0
  int DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v9; // x0
  System_String_o *DATA_ROOT_FOLDER; // x20
  Il2CppObject *v11; // x0
  int v13; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BFD68A & 1) == 0 )
  {
    sub_1C2E12C(&EventDetailEntity_TypeInfo, method);
    sub_1C2E12C(&int_TypeInfo, v6);
    byte_4BFD68A = 1;
  }
  if ( entity && (ServantFatigueId = EventDetailEntity__GetServantFatigueId(entity, method)) != 0 )
  {
    DATA_DEFAULT_ID = ServantFatigueId;
    v9 = EventDetailEntity_TypeInfo;
  }
  else
  {
    v9 = EventDetailEntity_TypeInfo;
    if ( !EventDetailEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo);
      v9 = EventDetailEntity_TypeInfo;
    }
    DATA_DEFAULT_ID = v9->static_fields->DATA_DEFAULT_ID;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = EventDetailEntity_TypeInfo;
  }
  DATA_ROOT_FOLDER = v9->static_fields->DATA_ROOT_FOLDER;
  v13 = DATA_DEFAULT_ID;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13, v2, v3, v4);
  return System_String__Format(DATA_ROOT_FOLDER, v11, 0LL);
}


int32_t __fastcall EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD68B & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_12887/*"ServantFatigueId"*/, method);
    byte_4BFD68B = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12887/*"ServantFatigueId"*/, v2);
}


System_String_o *__fastcall EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4BFD694 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_22836/*"overwriteShopMessageId"*/, method);
    sub_1C2E12C(&StringLiteral_22835/*"overwriteShopMessageCommonReleaseId"*/, v4);
    byte_4BFD694 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22835/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22836/*"overwriteShopMessageId"*/,
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BFD688 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1C2E12C(&string_TypeInfo, v5);
    byte_4BFD688 = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1C2E648(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD689 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_24814/*"useDiceSpotId"*/, method);
    byte_4BFD689 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24814/*"useDiceSpotId"*/, v2);
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

  if ( (byte_4BFD699 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21174/*"isEventCircleProgress"*/, method);
    byte_4BFD699 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21174/*"isEventCircleProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD697 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21175/*"isEventCommandAssist"*/, method);
    byte_4BFD697 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21175/*"isEventCommandAssist"*/, v2) > 0;
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

  if ( (byte_4BFD69B & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21176/*"isEventHappiness"*/, method);
    byte_4BFD69B = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21176/*"isEventHappiness"*/, v2) > 0;
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

  if ( (byte_4BFD69A & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21177/*"isEventRiverProgress"*/, method);
    byte_4BFD69A = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21177/*"isEventRiverProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4BFD68E & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_19484/*"eventUiCushion"*/, method);
    byte_4BFD68E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19484/*"eventUiCushion"*/, v2) > 0;
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

  if ( (byte_4BFD69E & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21187/*"isMakeFarm"*/, method);
    byte_4BFD69E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21187/*"isMakeFarm"*/, v2) > 0;
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

  if ( (byte_4BFD685 & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21192/*"isPersonalRaid"*/, method);
    byte_4BFD685 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21192/*"isPersonalRaid"*/, v2) > 0;
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

  if ( (byte_4BFD69D & 1) == 0 )
  {
    sub_1C2E12C(&StringLiteral_21200/*"isRefreshableEventUiByAfterAction"*/, method);
    byte_4BFD69D = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21200/*"isRefreshableEventUiByAfterAction"*/, v2) > 0;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v16; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_3335AF4 **v18; // x25
  __int64 methodPtr_low; // x10
  System_Object_array *v20; // x20
  __int64 v21; // x8
  Il2CppObject **v22; // x26
  System_Convert_c **v23; // x23
  unsigned __int64 v24; // x27
  Il2CppObject **m_Items; // x28
  System_Collections_Generic_Dictionary_object__object__o *v26; // x22
  __int64 v27; // x10
  Il2CppObject **v28; // x21
  const MethodInfo_3335AF4 **v29; // x26
  Il2CppObject *v30; // x0
  System_Convert_c *v31; // x8
  System_Convert_c **v32; // x25
  Il2CppObject *v33; // x23
  bool result; // w0
  Il2CppObject *v35; // x20
  int32_t v36; // w0
  int32_t v37; // w9
  CommonReleaseMaster_o *v38; // [xsp+8h] [xbp-68h]

  if ( (byte_4BFD69C & 1) == 0 )
  {
    sub_1C2E12C(&System_Convert_TypeInfo, jumpSlotIdx);
    sub_1C2E12C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1C2E12C(&DataManager_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_object__ToArray__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_object__TypeInfo, v11);
    sub_1C2E12C(&StringLiteral_18491/*"commonReleaseId"*/, v12);
    sub_1C2E12C(&StringLiteral_23822/*"slot"*/, v13);
    sub_1C2E12C(&StringLiteral_23531/*"selectSlotOnRewardScene"*/, v14);
    byte_4BFD69C = 1;
  }
  *jumpSlotIdx = -1;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23531/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  v18 = (const MethodInfo_3335AF4 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23531/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23531/*"selectSlotOnRewardScene"*/,
                                                                      (const MethodInfo_3335AF4 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_35;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_35;
  }
  v20 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Item,
          (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_object__ToArray__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v38 = (CommonReleaseMaster_o *)Item;
  if ( !v20 )
LABEL_35:
    sub_1C2E388(Item, v16);
  v21 = *(_QWORD *)&v20->max_length;
  if ( (int)v21 < 1 )
    return 0;
  v22 = (Il2CppObject **)&StringLiteral_23822/*"slot"*/;
  v23 = &System_Convert_TypeInfo;
  v24 = 0LL;
  m_Items = v20->m_Items;
  while ( 1 )
  {
    if ( v24 >= (unsigned int)v21 )
      sub_1C2E390(Item, v16);
    v26 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v24];
    if ( v26 )
    {
      v27 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v26->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v27
        && (System_Collections_Generic_Dictionary_string__object__c *)v26->klass->_2.typeHierarchy[v27 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v24],
                                                                            (Il2CppObject *)StringLiteral_18491/*"commonReleaseId"*/,
                                                                            (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              v26,
                                                                              *v22,
                                                                              (const MethodInfo_3335D68 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            v28 = v22;
            v29 = v18;
            v30 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    v26,
                    (Il2CppObject *)StringLiteral_18491/*"commonReleaseId"*/,
                    *v18);
            v31 = *v23;
            v32 = v23;
            v33 = v30;
            if ( !v31->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v31);
            v16 = (unsigned int)System_Convert__ToInt32(v33, 0LL);
            Item = (System_Collections_Generic_Dictionary_object__object__o *)v38;
            if ( !v38 )
              goto LABEL_35;
            Item = (System_Collections_Generic_Dictionary_object__object__o *)CommonReleaseMaster__IsOpen(
                                                                                v38,
                                                                                v16,
                                                                                0LL,
                                                                                0,
                                                                                0LL);
            v23 = v32;
            v18 = v29;
            v22 = v28;
            if ( ((unsigned __int8)Item & 1) != 0 )
              break;
          }
        }
      }
    }
    LODWORD(v21) = v20->max_length;
    if ( (__int64)++v24 >= (int)v21 )
      return 0;
  }
  v35 = System_Collections_Generic_Dictionary_object__object___get_Item(v26, *v28, *v18);
  if ( !(*v23)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v23);
  v36 = System_Convert__ToInt32(v35, 0LL);
  if ( v36 >= 0 )
    v37 = v36;
  else
    v37 = 0;
  result = v36 >= 0;
  *jumpSlotIdx = v37;
  return result;
}


int32_t __fastcall EventDetailEntity__getBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v9; // x20
  bool v10; // cc
  __int64 v11; // x8

  if ( (byte_4BFD683 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C2E12C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BFD683 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_327B180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager__getTime(0LL) <= (__int64)v9[6].klass;
    v11 = 40LL;
    if ( v10 )
      v11 = 36LL;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v11);
  }
  return (int)Entity;
}


int32_t __fastcall EventDetailEntity__getShopBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v9; // x20
  bool v10; // cc
  __int64 v11; // x8

  if ( (byte_4BFD684 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_1C2E12C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v3);
    sub_1C2E12C(&NetworkManager_TypeInfo, v4);
    sub_1C2E12C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4BFD684 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38A7F90 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2FD1830 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1C2E388(Instance, v7);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_327B180 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v9 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v10 = NetworkManager__getTime(0LL) <= (__int64)v9[6].klass;
    v11 = 144LL;
    if ( v10 )
      v11 = 140LL;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v11);
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