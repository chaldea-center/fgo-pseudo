void EventDetailEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C42F07 & 1) == 0 )
  {
    sub_1C37058(&EventDetailEntity_TypeInfo);
    sub_1C37058(&StringLiteral_6250/*"EventServantFatigue/{0}"*/);
    byte_4C42F07 = 1;
  }
  EventDetailEntity_TypeInfo->static_fields->DATA_ROOT_FOLDER = (struct System_String_o *)StringLiteral_6250/*"EventServantFatigue/{0}"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)EventDetailEntity_TypeInfo->static_fields, StringLiteral_6250/*"EventServantFatigue/{0}"*/, v1, v2);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C42F06 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_int___ctor__);
    byte_4C42F06 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_339EBBC *)Method_DataEntityBase_int___ctor__);
}


int32_t EventDetailEntity__CreatePrimaryKey(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


System_String_o *EventDetailEntity__GetCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4C42EF8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22578/*"overwriteRewardMessageCommonReleaseId"*/);
    sub_1C37058(&StringLiteral_22579/*"overwriteRewardMessageId"*/);
    byte_4C42EF8 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22578/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22579/*"overwriteRewardMessageId"*/,
                       v2);
  if ( System_String__IsNullOrEmpty(OverwriteMessage, 0) )
    return this->fields.condMessage;
  return OverwriteMessage;
}


System_String_o *EventDetailEntity__GetFloorRewardPrefabName(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EEB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6776/*"FloorRewardPrefabName"*/);
    byte_4C42EEB = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6776/*"FloorRewardPrefabName"*/, v2);
}


int32_t EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EF5 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19624/*"fortificationBasePoint"*/);
    byte_4C42EF5 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19624/*"fortificationBasePoint"*/, v2);
}


int32_t EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EF6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19625/*"fortificationLvPoint"*/);
    byte_4C42EF6 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19625/*"fortificationLvPoint"*/, v2);
}


int32_t EventDetailEntity__GetGaugeType(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType;
}


System_Collections_Generic_List_int__o *EventDetailEntity__GetIgnoreCommandAssistQuestIds(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x20
  System_Func_object__object__o *v4; // x21

  if ( (byte_4C42EFD & 1) == 0 )
  {
    sub_1C37058(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1C37058(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1C37058(&System_Func_List_object___List_int___TypeInfo);
    sub_1C37058(&StringLiteral_20278/*"ignoreCommandAssistQuestIds"*/);
    byte_4C42EFD = 1;
  }
  v3 = (System_String_o *)StringLiteral_20278/*"ignoreCommandAssistQuestIds"*/;
  v4 = (System_Func_object__object__o *)sub_1C372A4(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v4, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v3,
                                                     (System_Func_TSource__TDestination__o *)v4,
                                                     0,
                                                     (const MethodInfo_30EE3F0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t EventDetailEntity__GetIntFromScript(EventDetailEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42EEC & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C42EEC = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      LODWORD(script) = System_Convert__ToInt32(v6, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


EventDetailEntity_ChangeLoadAnimationInfo_array *EventDetailEntity__GetLoadAnimationIds(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_34635B0 **v5; // x25
  __int64 naturalAligment; // x10
  System_Object_array *v7; // x19
  System_Collections_Generic_List_object__o *v8; // x20
  il2cpp_array_size_t max_length; // x8
  Il2CppObject **v10; // x23
  unsigned __int64 v11; // x26
  Il2CppObject **m_Items; // x27
  System_Collections_Generic_Dictionary_object__object__o *v13; // x21
  __int64 v14; // x10
  System_String_o *v15; // x22
  int32_t v16; // w0
  Il2CppObject *v17; // x1
  int32_t v18; // w22
  Il2CppObject **v19; // x29
  const MethodInfo_34635B0 **v20; // x23
  Il2CppObject *v21; // x0
  int32_t v22; // w25
  __int64 v23; // x21
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_4C42EF1 & 1) == 0 )
  {
    sub_1C37058(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&StringLiteral_18174/*"commonReleaseId"*/);
    sub_1C37058(&StringLiteral_17812/*"changeLoadAnimations"*/);
    sub_1C37058(&StringLiteral_16785/*"animationId"*/);
    byte_4C42EF1 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_17812/*"changeLoadAnimations"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_32;
  v5 = (const MethodInfo_34635B0 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17812/*"changeLoadAnimations"*/,
                                                                      (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_32;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_32;
  if ( (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_32;
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)Item,
         (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_object__ToArray__);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
  if ( !v7 )
    goto LABEL_32;
  max_length = v7->max_length;
  if ( (int)max_length >= 1 )
  {
    v10 = (Il2CppObject **)&StringLiteral_16785/*"animationId"*/;
    v11 = 0;
    m_Items = v7->m_Items;
    do
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C372BC(Item);
      v13 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v11];
      if ( v13 )
      {
        v14 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( v13->klass->_2.naturalAligment >= (unsigned int)v14
          && (System_Collections_Generic_Dictionary_string__object__c *)v13->klass->_2.typeHierarchy[v14 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v11],
                                                                              (Il2CppObject *)StringLiteral_18174/*"commonReleaseId"*/,
                                                                              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                v13,
                                                                                *v10,
                                                                                (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v13,
                                                                                  (Il2CppObject *)StringLiteral_18174/*"commonReleaseId"*/,
                                                                                  *v5);
              if ( !Item )
                goto LABEL_32;
              v15 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Item->klass->vtable._3_ToString.methodPtr)(
                                         Item,
                                         Item->klass->vtable._3_ToString.method);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v16 = System_Convert__ToInt32_64649256(v15, 0);
              v17 = *v10;
              v18 = v16;
              v19 = v10;
              v20 = v5;
              v21 = System_Collections_Generic_Dictionary_object__object___get_Item(v13, v17, *v5);
              v22 = System_Convert__ToInt32(v21, 0);
              v23 = sub_1C372A4(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v23, 0);
              *(_DWORD *)(v23 + 16) = v18;
              *(_DWORD *)(v23 + 20) = v22;
              if ( !v8 )
                goto LABEL_32;
              items = v8->fields._items;
              v27 = Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__;
              ++v8->fields._version;
              if ( !items )
                goto LABEL_32;
              size = v8->fields._size;
              v5 = v20;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v8,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
              }
              else
              {
                v29 = &items->obj.klass + size;
                v8->fields._size = size + 1;
                v29[4] = (Il2CppClass *)v23;
                sub_1C36FFC((CGThumbnailListItem_o *)(v29 + 4), v23, v24, v25);
              }
              v10 = v19;
            }
          }
        }
      }
      LODWORD(max_length) = v7->max_length;
    }
    while ( (__int64)++v11 < (int)max_length );
  }
  if ( !v8 )
LABEL_32:
    sub_1C372B4(Item);
  return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v8,
                                                              (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
}


System_String_o *EventDetailEntity__GetOverwriteMessage(
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

  if ( (byte_4C42EF7 & 1) == 0 )
  {
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42EF7 = 1;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  IntFromScript = EventDetailEntity__GetIntFromScript(this, messageCommonReleaseKey, (const MethodInfo *)messageKey);
  if ( !IntFromScript )
    return v7;
  v10 = IntFromScript;
  StringFromScript = EventDetailEntity__GetStringFromScript(this, messageKey, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsCommonRelease(v10, 0) || System_String__IsNullOrEmpty(StringFromScript, 0) )
    return v7;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(StringFromScript, 0);
}


int32_t EventDetailEntity__GetOverwriteRewardCondCommonReleaseId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EFA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22577/*"overwriteRewardCondCommonReleaseId"*/);
    byte_4C42EFA = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22577/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t EventDetailEntity__GetOverwriteShopCondCommonReleaseId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EFB & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22584/*"overwriteShopCondCommonReleaseId"*/);
    byte_4C42EFB = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22584/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EF2 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22955/*"randomMissionMaxNum"*/);
    byte_4C42EF2 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22955/*"randomMissionMaxNum"*/, v2);
}


int32_t EventDetailEntity__GetRefreshWarBySelectBonus(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42F05 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_23008/*"refreshWarBySelectBonus"*/);
    byte_4C42F05 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23008/*"refreshWarBySelectBonus"*/, v2);
}


EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *EventDetailEntity__GetReplaceEventRewardBtnLogoInfo(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_Dictionary_object__object__o *v5; // x19
  __int64 naturalAligment; // x10
  System_String_o *v7; // x20
  int32_t v8; // w20
  Il2CppObject *v9; // x0
  int32_t v10; // w21
  __int64 v11; // x19

  if ( (byte_4C42EF4 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
    sub_1C37058(&StringLiteral_19148/*"eventLogoId"*/);
    sub_1C37058(&StringLiteral_18174/*"commonReleaseId"*/);
    sub_1C37058(&StringLiteral_23047/*"replaceEventRewardBtnLogoInfo"*/);
    byte_4C42EF4 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23047/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23047/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_23047/*"replaceEventRewardBtnLogoInfo"*/,
                                                                            (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
    || (v5 = Item,
        naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
        Item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_19:
    sub_1C372B4(Item);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          Item,
          (Il2CppObject *)StringLiteral_18174/*"commonReleaseId"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v5,
          (Il2CppObject *)StringLiteral_19148/*"eventLogoId"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      v5,
                                                                      (Il2CppObject *)StringLiteral_18174/*"commonReleaseId"*/,
                                                                      (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_19;
  v7 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Item->klass->vtable._3_ToString.methodPtr)(
                            Item,
                            Item->klass->vtable._3_ToString.method);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v8 = System_Convert__ToInt32_64649256(v7, 0);
  v9 = System_Collections_Generic_Dictionary_object__object___get_Item(
         v5,
         (Il2CppObject *)StringLiteral_19148/*"eventLogoId"*/,
         (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = System_Convert__ToInt32(v9, 0);
  v11 = sub_1C372A4(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = v8;
  *(_DWORD *)(v11 + 20) = v10;
  return (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)v11;
}


System_String_o *EventDetailEntity__GetServantFatigueFolder(EventDetailEntity_o *entity, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int32_t ServantFatigueId; // w0
  int32_t DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v11; // x0
  System_String_o *DATA_ROOT_FOLDER; // x20
  Il2CppObject *v13; // x0
  int32_t v15; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C42EEF & 1) == 0 )
  {
    sub_1C37058(&EventDetailEntity_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    byte_4C42EEF = 1;
  }
  if ( entity && (ServantFatigueId = EventDetailEntity__GetServantFatigueId(entity, method)) != 0 )
  {
    DATA_DEFAULT_ID = ServantFatigueId;
    v11 = EventDetailEntity_TypeInfo;
  }
  else
  {
    v11 = EventDetailEntity_TypeInfo;
    if ( !EventDetailEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo);
      v11 = EventDetailEntity_TypeInfo;
    }
    DATA_DEFAULT_ID = v11->static_fields->DATA_DEFAULT_ID;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = EventDetailEntity_TypeInfo;
  }
  DATA_ROOT_FOLDER = v11->static_fields->DATA_ROOT_FOLDER;
  v15 = DATA_DEFAULT_ID;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15, v2, v3, v4, v5, v6, v7);
  return System_String__Format(DATA_ROOT_FOLDER, v13, 0);
}


int32_t EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EF0 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_12731/*"ServantFatigueId"*/);
    byte_4C42EF0 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12731/*"ServantFatigueId"*/, v2);
}


System_String_o *EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4C42EF9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22586/*"overwriteShopMessageId"*/);
    sub_1C37058(&StringLiteral_22585/*"overwriteShopMessageCommonReleaseId"*/);
    byte_4C42EF9 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22585/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22586/*"overwriteShopMessageId"*/,
                       v2);
  if ( System_String__IsNullOrEmpty(OverwriteMessage, 0) )
    return this->fields.shopCondMessage;
  return OverwriteMessage;
}


System_String_o *EventDetailEntity__GetStringFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  System_String_o *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42EED & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&string_TypeInfo);
    byte_4C42EED = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1C37574(value);
      return 0;
    }
  }
  return result;
}


int32_t EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EEE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_24478/*"useDiceSpotId"*/);
    byte_4C42EEE = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24478/*"useDiceSpotId"*/, v2);
}


bool EventDetailEntity__HasFlag(EventDetailEntity_o *this, int64_t typeFlag, const MethodInfo *method)
{
  return (this->fields.flag & typeFlag) != 0;
}


bool EventDetailEntity__IsBonusSkill(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 4) & 1;
}


bool EventDetailEntity__IsBoxGacha(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 2) & 1;
}


bool EventDetailEntity__IsClosePurchaseShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE3(this->fields.flag) & 1;
}


bool EventDetailEntity__IsEventActivityPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 4) & 1;
}


bool EventDetailEntity__IsEventBoardGame(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE4(this->fields.flag) >> 5) & 1;
}


bool EventDetailEntity__IsEventCircleProgress(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EFE & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20915/*"isEventCircleProgress"*/);
    byte_4C42EFE = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20915/*"isEventCircleProgress"*/, v2) > 0;
}


bool EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EFC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20916/*"isEventCommandAssist"*/);
    byte_4C42EFC = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20916/*"isEventCommandAssist"*/, v2) > 0;
}


bool EventDetailEntity__IsEventConquest(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE4(this->fields.flag) & 1;
}


bool EventDetailEntity__IsEventDailyPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 3) & 1;
}


bool EventDetailEntity__IsEventEquipSkillParts(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42F01 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20917/*"isEventEquipSkillParts"*/);
    byte_4C42F01 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20917/*"isEventEquipSkillParts"*/, v2) > 0;
}


bool EventDetailEntity__IsEventHappiness(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42F00 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20918/*"isEventHappiness"*/);
    byte_4C42F00 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20918/*"isEventHappiness"*/, v2) > 0;
}


bool EventDetailEntity__IsEventOnlyEquip(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 5) & 1;
}


bool EventDetailEntity__IsEventPanel(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE5(this->fields.flag) >> 2) & 1;
}


bool EventDetailEntity__IsEventPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0xC001) != 0;
}


bool EventDetailEntity__IsEventPointByQp(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE4(this->fields.flag) >> 1) & 1;
}


bool EventDetailEntity__IsEventRiverProgress(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EFF & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20919/*"isEventRiverProgress"*/);
    byte_4C42EFF = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20919/*"isEventRiverProgress"*/, v2) > 0;
}


bool EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EF3 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_19159/*"eventUiCushion"*/);
    byte_4C42EF3 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19159/*"eventUiCushion"*/, v2) > 0;
}


bool EventDetailEntity__IsExchangeShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
}


bool EventDetailEntity__IsFatigue(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 4) & 1;
}


bool EventDetailEntity__IsForcedAdjustmentDialog(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 6) & 1;
}


bool EventDetailEntity__IsGroupPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE1(this->fields.flag) >> 7;
}


bool EventDetailEntity__IsGroupRanking(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 2) & 1;
}


bool EventDetailEntity__IsMainInterlude(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE4(this->fields.flag) >> 7;
}


bool EventDetailEntity__IsMakeFarm(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42F04 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20932/*"isMakeFarm"*/);
    byte_4C42F04 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20932/*"isMakeFarm"*/, v2) > 0;
}


bool EventDetailEntity__IsMapSwitchButtonTop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 6) & 1;
}


bool EventDetailEntity__IsMission(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 5) & 1;
}


bool EventDetailEntity__IsNeedUseEventSupport(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 2) & 1;
}


bool EventDetailEntity__IsNoDispArrow(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 5) & 1;
}


bool EventDetailEntity__IsPersonalBoss(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42EEA & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20940/*"isPersonalRaid"*/);
    byte_4C42EEA = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20940/*"isPersonalRaid"*/, v2) > 0;
}


bool EventDetailEntity__IsQuestCooltime(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE5(this->fields.flag) >> 1) & 1;
}


bool EventDetailEntity__IsRaid(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 6) & 1;
}


bool EventDetailEntity__IsRanking(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 3) & 1;
}


bool EventDetailEntity__IsRefreshableEventUiByAfterAction(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C42F03 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20948/*"isRefreshableEventUiByAfterAction"*/);
    byte_4C42F03 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20948/*"isRefreshableEventUiByAfterAction"*/, v2) > 0;
}


bool EventDetailEntity__IsRevivalEvent(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LODWORD(this->fields.flag) >> 31;
}


bool EventDetailEntity__IsReward(EventDetailEntity_o *this, const MethodInfo *method)
{
  unsigned __int64 flag; // x8

  flag = this->fields.flag;
  if ( (flag & 0xC065) != 0 )
    return (char)&dword_0 + 1;
  if ( (flag & 0x400) != 0 )
  {
    if ( !EventDetailEntity__IsPersonalBoss(this, method) )
      return (char)&dword_0 + 1;
    flag = this->fields.flag;
  }
  if ( (flag & 0x40000) == 0 )
    return (flag >> 19) & 1;
  return (char)&dword_0 + 1;
}


bool EventDetailEntity__IsShiftHelpInfo(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE2(this->fields.flag) >> 7;
}


bool EventDetailEntity__IsSpotCooltime(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE5(this->fields.flag) >> 7;
}


bool EventDetailEntity__IsSuperBoss(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (this->fields.flag & 0x400) != 0 && !EventDetailEntity__IsPersonalBoss(this, method);
}


bool EventDetailEntity__IsTimeProgressEvent(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType != 1;
}


bool EventDetailEntity__IsTimeStatusRecord(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE3(this->fields.flag) >> 1) & 1;
}


bool EventDetailEntity__TryGetJumpSlotIdx(EventDetailEntity_o *this, int32_t *jumpSlotIdx, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_34635B0 **v7; // x25
  __int64 naturalAligment; // x10
  System_Object_array *v9; // x20
  il2cpp_array_size_t max_length; // x8
  Il2CppObject **v11; // x26
  System_Convert_c **v12; // x23
  unsigned __int64 v13; // x27
  Il2CppObject **m_Items; // x28
  System_Collections_Generic_Dictionary_object__object__o *v15; // x22
  __int64 v16; // x10
  Il2CppObject **v17; // x21
  const MethodInfo_34635B0 **v18; // x26
  Il2CppObject *v19; // x0
  System_Convert_c *v20; // x8
  System_Convert_c **v21; // x25
  Il2CppObject *v22; // x23
  int32_t v23; // w1
  const MethodInfo *v24; // x4
  bool result; // w0
  Il2CppObject *v26; // x20
  int32_t v27; // w0
  int32_t v28; // w9
  CommonReleaseMaster_o *v29; // [xsp+8h] [xbp-68h]

  if ( (byte_4C42F02 & 1) == 0 )
  {
    sub_1C37058(&System_Convert_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&StringLiteral_18174/*"commonReleaseId"*/);
    sub_1C37058(&StringLiteral_23548/*"slot"*/);
    sub_1C37058(&StringLiteral_23257/*"selectSlotOnRewardScene"*/);
    byte_4C42F02 = 1;
  }
  *jumpSlotIdx = -1;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23257/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  v7 = (const MethodInfo_34635B0 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23257/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23257/*"selectSlotOnRewardScene"*/,
                                                                      (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_35;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_35;
  }
  v9 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)Item,
         (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_object__ToArray__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v29 = (CommonReleaseMaster_o *)Item;
  if ( !v9 )
LABEL_35:
    sub_1C372B4(Item);
  max_length = v9->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v11 = (Il2CppObject **)&StringLiteral_23548/*"slot"*/;
  v12 = &System_Convert_TypeInfo;
  v13 = 0;
  m_Items = v9->m_Items;
  while ( 1 )
  {
    if ( v13 >= (unsigned int)max_length )
      sub_1C372BC(Item);
    v15 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v13];
    if ( v15 )
    {
      v16 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( v15->klass->_2.naturalAligment >= (unsigned int)v16
        && (System_Collections_Generic_Dictionary_string__object__c *)v15->klass->_2.typeHierarchy[v16 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v13],
                                                                            (Il2CppObject *)StringLiteral_18174/*"commonReleaseId"*/,
                                                                            (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              v15,
                                                                              *v11,
                                                                              (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            v17 = v11;
            v18 = v7;
            v19 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    v15,
                    (Il2CppObject *)StringLiteral_18174/*"commonReleaseId"*/,
                    *v7);
            v20 = *v12;
            v21 = v12;
            v22 = v19;
            if ( !v20->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v20);
            v23 = System_Convert__ToInt32(v22, 0);
            Item = (System_Collections_Generic_Dictionary_object__object__o *)v29;
            if ( !v29 )
              goto LABEL_35;
            Item = (System_Collections_Generic_Dictionary_object__object__o *)CommonReleaseMaster__IsOpen(
                                                                                v29,
                                                                                v23,
                                                                                0,
                                                                                0,
                                                                                v24);
            v12 = v21;
            v7 = v18;
            v11 = v17;
            if ( ((unsigned __int8)Item & 1) != 0 )
              break;
          }
        }
      }
    }
    LODWORD(max_length) = v9->max_length;
    if ( (__int64)++v13 >= (int)max_length )
      return 0;
  }
  v26 = System_Collections_Generic_Dictionary_object__object___get_Item(v15, *v17, *v7);
  if ( !(*v12)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v12);
  v27 = System_Convert__ToInt32(v26, 0);
  if ( v27 >= 0 )
    v28 = v27;
  else
    v28 = 0;
  result = v27 >= 0;
  *jumpSlotIdx = v28;
  return result;
}


int32_t EventDetailEntity__getBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *v5; // x20
  bool v6; // cc
  __int64 v7; // x8

  if ( (byte_4C42EE8 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42EE8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v5 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager__getTime(0) <= (__int64)v5[6].klass;
    v7 = 40;
    if ( v6 )
      v7 = 36;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v7);
  }
  return (int)Entity;
}


int32_t EventDetailEntity__getShopBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *Entity; // x0
  Il2CppObject *v5; // x20
  bool v6; // cc
  __int64 v7; // x8

  if ( (byte_4C42EE9 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42EE9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v5 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager__getTime(0) <= (__int64)v5[6].klass;
    v7 = 144;
    if ( v6 )
      v7 = 140;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v7);
  }
  return (int)Entity;
}


bool EventDetailEntity__isBP(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 4) & 1;
}


bool EventDetailEntity__isDailyMission(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 1) & 1;
}


bool EventDetailEntity__isEventVoicePlay(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE2(this->fields.flag) & 1;
}


bool EventDetailEntity__isGroupRanking(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 2) & 1;
}


bool EventDetailEntity__isNoMaterialBanner(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 5) & 1;
}


bool EventDetailEntity__isOldRaid(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventGaugeType == 5;
}


bool EventDetailEntity__isRaidDefeatCount(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE1(this->fields.flag) >> 3) & 1;
}


bool EventDetailEntity__isTower(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.flag) >> 3) & 1;
}


void EventDetailEntity_ChangeLoadAnimationInfo___ctor(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        int32_t a,
        int32_t b,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._commonReleaseId_k__BackingField = a;
  this->fields._animationId_k__BackingField = b;
}


int32_t EventDetailEntity_ChangeLoadAnimationInfo__get_animationId(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._animationId_k__BackingField;
}


int32_t EventDetailEntity_ChangeLoadAnimationInfo__get_commonReleaseId(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._commonReleaseId_k__BackingField;
}


void EventDetailEntity_ChangeLoadAnimationInfo__set_animationId(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._animationId_k__BackingField = value;
}


void EventDetailEntity_ChangeLoadAnimationInfo__set_commonReleaseId(
        EventDetailEntity_ChangeLoadAnimationInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._commonReleaseId_k__BackingField = value;
}


void EventDetailEntity_ReplaceEventRewardBtnLogoInfo___ctor(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        int32_t commonReleased,
        int32_t eventLogoId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._CommonReleasedId_k__BackingField = commonReleased;
  this->fields._EventLogoId_k__BackingField = eventLogoId;
}


int32_t EventDetailEntity_ReplaceEventRewardBtnLogoInfo__get_CommonReleasedId(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonReleasedId_k__BackingField;
}


int32_t EventDetailEntity_ReplaceEventRewardBtnLogoInfo__get_EventLogoId(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._EventLogoId_k__BackingField;
}


void EventDetailEntity_ReplaceEventRewardBtnLogoInfo__set_CommonReleasedId(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommonReleasedId_k__BackingField = value;
}


void EventDetailEntity_ReplaceEventRewardBtnLogoInfo__set_EventLogoId(
        EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._EventLogoId_k__BackingField = value;
}