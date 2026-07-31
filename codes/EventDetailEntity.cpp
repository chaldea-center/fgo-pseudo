void EventDetailEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1

  if ( (byte_59385DE & 1) == 0 )
  {
    sub_21FFC50(&EventDetailEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_6502/*"EventServantFatigue/{0}"*/);
    byte_59385DE = 1;
  }
  v7 = StringLiteral_6502/*"EventServantFatigue/{0}"*/;
  EventDetailEntity_TypeInfo->static_fields->DATA_ROOT_FOLDER = (struct System_String_o *)StringLiteral_6502/*"EventServantFatigue/{0}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)EventDetailEntity_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59385DD & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_int___ctor__);
    byte_59385DD = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3EDAD70 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventDetailEntity__CreatePrimaryKey(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


float EventDetailEntity__GetAdjustHelpButtonPositionX(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59385D9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17348/*"adjustHelpButtonPositionX"*/);
    byte_59385D9 = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17348/*"adjustHelpButtonPositionX"*/, 0.0, 0);
}


float EventDetailEntity__GetAdjustPlayVoiceButtonPositionX(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59385DA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17349/*"adjustPlayVoiceButtonPositionX"*/);
    byte_59385DA = 1;
  }
  return EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_17349/*"adjustPlayVoiceButtonPositionX"*/, 0.0, 0);
}


System_String_o *EventDetailEntity__GetCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_59385C6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23680/*"overwriteRewardMessageCommonReleaseId"*/);
    sub_21FFC50(&StringLiteral_23681/*"overwriteRewardMessageId"*/);
    byte_59385C6 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_23680/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_23681/*"overwriteRewardMessageId"*/,
                       v2);
  if ( System_String__IsNullOrEmpty(OverwriteMessage, 0) )
    return this->fields.condMessage;
  return OverwriteMessage;
}


EventDetailEntity_EventRewardInfoOnGrandQuest_o *EventDetailEntity__GetEventRewardInfoOnGrandQuest(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *Item; // x0
  System_Collections_Generic_Dictionary_object__object__o *v7; // x19
  __int64 naturalAligment; // x10
  __int64 v9; // x1
  Il2CppObject *v10; // x20
  int32_t v11; // w20
  __int64 v13; // x1
  Il2CppObject *v14; // x19
  int32_t v15; // w19

  if ( (byte_59385D4 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&EventDetailEntity_EventRewardInfoOnGrandQuest_TypeInfo);
    sub_21FFC50(&StringLiteral_18947/*"commonReleaseId"*/);
    sub_21FFC50(&StringLiteral_20003/*"eventRewardInfoOnGrandQuest"*/);
    sub_21FFC50(&StringLiteral_20798/*"grandWarId"*/);
    byte_59385D4 = 1;
  }
  v4 = 0;
  if ( EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_20003/*"eventRewardInfoOnGrandQuest"*/, 0) )
  {
    script = this->fields.script;
    if ( script )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
              (System_Collections_Generic_Dictionary_object__object__o *)script,
              (Il2CppObject *)StringLiteral_20003/*"eventRewardInfoOnGrandQuest"*/,
              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
        return 0;
      script = this->fields.script;
      if ( script )
      {
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)script,
                 (Il2CppObject *)StringLiteral_20003/*"eventRewardInfoOnGrandQuest"*/,
                 (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( Item )
        {
          v7 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment
            && (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
            && System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)Item,
                 (Il2CppObject *)StringLiteral_20798/*"grandWarId"*/,
                 (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
          {
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   v7,
                   (Il2CppObject *)StringLiteral_18947/*"commonReleaseId"*/,
                   (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
            {
              v10 = System_Collections_Generic_Dictionary_object__object___get_Item(
                      v7,
                      (Il2CppObject *)StringLiteral_18947/*"commonReleaseId"*/,
                      (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
              if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v9);
              v11 = System_Convert__ToInt32(v10, 0);
            }
            else
            {
              v11 = 0;
            }
            v14 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    v7,
                    (Il2CppObject *)StringLiteral_20798/*"grandWarId"*/,
                    (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
            if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v13);
            v15 = System_Convert__ToInt32(v14, 0);
            v4 = sub_21FFEBC(EventDetailEntity_EventRewardInfoOnGrandQuest_TypeInfo);
            System_Object___ctor((Il2CppObject *)v4, 0);
            *(_DWORD *)(v4 + 16) = v11;
            *(_DWORD *)(v4 + 20) = v15;
            return (EventDetailEntity_EventRewardInfoOnGrandQuest_o *)v4;
          }
        }
        return 0;
      }
    }
    sub_21FFECC(script, v3);
  }
  return (EventDetailEntity_EventRewardInfoOnGrandQuest_o *)v4;
}


System_String_o *EventDetailEntity__GetFloorRewardPrefabName(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385B9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_7047/*"FloorRewardPrefabName"*/);
    byte_59385B9 = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_7047/*"FloorRewardPrefabName"*/, v2);
}


int32_t EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385C3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20512/*"fortificationBasePoint"*/);
    byte_59385C3 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20512/*"fortificationBasePoint"*/, v2);
}


int32_t EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385C4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20513/*"fortificationLvPoint"*/);
    byte_59385C4 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20513/*"fortificationLvPoint"*/, v2);
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

  if ( (byte_59385CA & 1) == 0 )
  {
    sub_21FFC50(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_21FFC50(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_21FFC50(&System_Func_List_object___List_int___TypeInfo);
    sub_21FFC50(&StringLiteral_21216/*"ignoreCommandAssistQuestIds"*/);
    byte_59385CA = 1;
  }
  v3 = (System_String_o *)StringLiteral_21216/*"ignoreCommandAssistQuestIds"*/;
  v4 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v4, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v3,
                                                     (System_Func_TSource__TDestination__o *)v4,
                                                     0,
                                                     (const MethodInfo_382DCA0 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t EventDetailEntity__GetIntFromScript(EventDetailEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59385BA & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_59385BA = 1;
  }
  script = this->fields.script;
  value = 0;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v7 = value;
      if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v6);
      LODWORD(script) = System_Convert__ToInt32(v7, 0);
    }
    else
    {
      LODWORD(script) = 0;
    }
  }
  return (int)script;
}


int32_t EventDetailEntity__GetJobQuestGroupCommonReleaseId(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59385D7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22098/*"jobQuestGroupCommonReleaseId"*/);
    byte_59385D7 = 1;
  }
  return EntityScriptUtil__GetIntValue(this->fields.script, (System_String_o *)StringLiteral_22098/*"jobQuestGroupCommonReleaseId"*/, 0, 0);
}


EventDetailEntity_ChangeLoadAnimationInfo_array *EventDetailEntity__GetLoadAnimationIds(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_3FCA3E8 **v6; // x23
  __int64 naturalAligment; // x10
  System_Object_array *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  il2cpp_array_size_t max_length; // x8
  Il2CppObject **v11; // x29
  unsigned __int64 v12; // x26
  Il2CppObject **m_Items; // x25
  System_Collections_Generic_Dictionary_object__object__o *v14; // x21
  __int64 v15; // x10
  __int64 v16; // x1
  System_String_o *v17; // x22
  int32_t v18; // w0
  Il2CppObject *v19; // x1
  int32_t v20; // w22
  Il2CppObject **v21; // x28
  const MethodInfo_3FCA3E8 **v22; // x29
  Il2CppObject *v23; // x0
  int32_t v24; // w23
  __int64 v25; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0

  if ( (byte_59385BF & 1) == 0 )
  {
    sub_21FFC50(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&StringLiteral_18947/*"commonReleaseId"*/);
    sub_21FFC50(&StringLiteral_18565/*"changeLoadAnimations"*/);
    sub_21FFC50(&StringLiteral_17460/*"animationId"*/);
    byte_59385BF = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_18565/*"changeLoadAnimations"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_32;
  v6 = (const MethodInfo_3FCA3E8 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_18565/*"changeLoadAnimations"*/,
                                                                      (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_32;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_32;
  if ( (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_32;
  v8 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)Item,
         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_object__ToArray__);
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
  if ( !v8 )
    goto LABEL_32;
  max_length = v8->max_length;
  if ( (int)max_length >= 1 )
  {
    v11 = (Il2CppObject **)&StringLiteral_17460/*"animationId"*/;
    v12 = 0;
    m_Items = v8->m_Items;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_21FFED4(Item);
      v14 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v12];
      if ( v14 )
      {
        v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( v14->klass->_2.naturalAligment >= (unsigned int)v15
          && (System_Collections_Generic_Dictionary_string__object__c *)v14->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v12],
                                                                              (Il2CppObject *)StringLiteral_18947/*"commonReleaseId"*/,
                                                                              (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                v14,
                                                                                *v11,
                                                                                (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v14,
                                                                                  (Il2CppObject *)StringLiteral_18947/*"commonReleaseId"*/,
                                                                                  *v6);
              if ( !Item )
                goto LABEL_32;
              v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Item->klass->vtable._3_ToString.methodPtr)(
                                         Item,
                                         Item->klass->vtable._3_ToString.method);
              if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v16);
              v18 = System_Convert__ToInt32_76473520(v17, 0);
              v19 = *v11;
              v20 = v18;
              v21 = v11;
              v22 = v6;
              v23 = System_Collections_Generic_Dictionary_object__object___get_Item(v14, v19, *v6);
              v24 = System_Convert__ToInt32(v23, 0);
              v25 = sub_21FFEBC(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v25, 0);
              *(_DWORD *)(v25 + 16) = v20;
              *(_DWORD *)(v25 + 20) = v24;
              if ( !v9 )
                goto LABEL_32;
              items = v9->fields._items;
              v33 = Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__;
              ++v9->fields._version;
              if ( !items )
                goto LABEL_32;
              size = v9->fields._size;
              v6 = v22;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  (Il2CppObject *)v25,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
              }
              else
              {
                v35 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v35[4] = (Il2CppClass *)v25;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), v25, v26, v27, v28, v29, v30, v31);
              }
              v11 = v21;
            }
          }
        }
      }
      LODWORD(max_length) = v8->max_length;
    }
    while ( (__int64)++v12 < (int)max_length );
  }
  if ( !v9 )
LABEL_32:
    sub_21FFECC(Item, v4);
  return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v9,
                                                              (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
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
  __int64 v11; // x1
  System_String_o *StringFromScript; // x20
  __int64 v13; // x1

  if ( (byte_59385C5 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_59385C5 = 1;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  IntFromScript = EventDetailEntity__GetIntFromScript(this, messageCommonReleaseKey, (const MethodInfo *)messageKey);
  if ( !IntFromScript )
    return v7;
  v10 = IntFromScript;
  StringFromScript = EventDetailEntity__GetStringFromScript(this, messageKey, v9);
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v11);
  if ( !CondType__IsCommonRelease(v10, 0, 0) || System_String__IsNullOrEmpty(StringFromScript, 0) )
    return v7;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v13);
  return LocalizationManager__Get(StringFromScript, 0);
}


int32_t EventDetailEntity__GetOverwriteShopCondCommonReleaseId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385C8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23689/*"overwriteShopCondCommonReleaseId"*/);
    byte_59385C8 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_23689/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385C0 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24102/*"randomMissionMaxNum"*/);
    byte_59385C0 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24102/*"randomMissionMaxNum"*/, v2);
}


int32_t EventDetailEntity__GetRefreshWarBySelectBonus(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385D3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24156/*"refreshWarBySelectBonus"*/);
    byte_59385D3 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24156/*"refreshWarBySelectBonus"*/, v2);
}


EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *EventDetailEntity__GetReplaceEventRewardBtnLogoInfo(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x19
  __int64 naturalAligment; // x10
  __int64 v8; // x1
  System_String_o *v9; // x20
  int32_t v10; // w20
  Il2CppObject *v11; // x0
  int32_t v12; // w21
  __int64 v13; // x19

  if ( (byte_59385C2 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_19997/*"eventLogoId"*/);
    sub_21FFC50(&StringLiteral_18947/*"commonReleaseId"*/);
    sub_21FFC50(&StringLiteral_24204/*"replaceEventRewardBtnLogoInfo"*/);
    byte_59385C2 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_24204/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_24204/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_24204/*"replaceEventRewardBtnLogoInfo"*/,
                                                                            (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
    || (v6 = Item,
        naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
        Item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_19:
    sub_21FFECC(Item, v4);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          Item,
          (Il2CppObject *)StringLiteral_18947/*"commonReleaseId"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v6,
          (Il2CppObject *)StringLiteral_19997/*"eventLogoId"*/,
          (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      v6,
                                                                      (Il2CppObject *)StringLiteral_18947/*"commonReleaseId"*/,
                                                                      (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_19;
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Item->klass->vtable._3_ToString.methodPtr)(
                            Item,
                            Item->klass->vtable._3_ToString.method);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
  v10 = System_Convert__ToInt32_76473520(v9, 0);
  v11 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v6,
          (Il2CppObject *)StringLiteral_19997/*"eventLogoId"*/,
          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v12 = System_Convert__ToInt32(v11, 0);
  v13 = sub_21FFEBC(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_DWORD *)(v13 + 16) = v10;
  *(_DWORD *)(v13 + 20) = v12;
  return (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)v13;
}


System_String_o *EventDetailEntity__GetServantFatigueFolder(EventDetailEntity_o *entity, const MethodInfo *method)
{
  int32_t ServantFatigueId; // w0
  int32_t DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v5; // x0
  System_String_o **p_DATA_ROOT_FOLDER; // x8
  System_String_o *v7; // x20
  Il2CppObject *v8; // x0
  int32_t v10; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_59385BD & 1) == 0 )
  {
    sub_21FFC50(&EventDetailEntity_TypeInfo);
    byte_59385BD = 1;
  }
  if ( entity && (ServantFatigueId = EventDetailEntity__GetServantFatigueId(entity, method)) != 0 )
  {
    DATA_DEFAULT_ID = ServantFatigueId;
    v5 = EventDetailEntity_TypeInfo;
  }
  else
  {
    v5 = EventDetailEntity_TypeInfo;
    if ( !*(&EventDetailEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo, method);
      v5 = EventDetailEntity_TypeInfo;
    }
    DATA_DEFAULT_ID = v5->static_fields->DATA_DEFAULT_ID;
  }
  if ( !*(&v5->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v5, method);
    v5 = EventDetailEntity_TypeInfo;
  }
  p_DATA_ROOT_FOLDER = &v5->static_fields->DATA_ROOT_FOLDER;
  v10 = DATA_DEFAULT_ID;
  v7 = *p_DATA_ROOT_FOLDER;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v10);
  return System_String__Format(v7, v8, 0);
}


int32_t EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385BE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_13244/*"ServantFatigueId"*/);
    byte_59385BE = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_13244/*"ServantFatigueId"*/, v2);
}


System_String_o *EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_59385C7 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23691/*"overwriteShopMessageId"*/);
    sub_21FFC50(&StringLiteral_23690/*"overwriteShopMessageCommonReleaseId"*/);
    byte_59385C7 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_23690/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_23691/*"overwriteShopMessageId"*/,
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
  __int64 v6; // x2
  __int64 v7; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59385BB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_59385BB = 1;
  }
  result = (System_String_o *)this->fields.script;
  value = 0;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && value->klass != (Il2CppClass *)qword_594C0B8 )
    {
      sub_220024C(value, qword_594C0B8, v6, v7);
      return 0;
    }
  }
  return result;
}


int32_t EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385BC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25778/*"useDiceSpotId"*/);
    byte_59385BC = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_25778/*"useDiceSpotId"*/, v2);
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


bool EventDetailEntity__IsCountRaidRemainingHp(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385D6 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21873/*"isCountRaidRemainingHp"*/);
    byte_59385D6 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21873/*"isCountRaidRemainingHp"*/, v2) > 0;
}


bool EventDetailEntity__IsDispCompleteMissionOnEventMap(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385DB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21877/*"isDispCompleteMissionOnEventMap"*/);
    byte_59385DB = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21877/*"isDispCompleteMissionOnEventMap"*/, v2) > 0;
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

  if ( (byte_59385CB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21885/*"isEventCircleProgress"*/);
    byte_59385CB = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21885/*"isEventCircleProgress"*/, v2) > 0;
}


bool EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385C9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21886/*"isEventCommandAssist"*/);
    byte_59385C9 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21886/*"isEventCommandAssist"*/, v2) > 0;
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

  if ( (byte_59385CE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21887/*"isEventEquipSkillParts"*/);
    byte_59385CE = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21887/*"isEventEquipSkillParts"*/, v2) > 0;
}


bool EventDetailEntity__IsEventFlowerGarden(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385CF & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21888/*"isEventFlowerGarden"*/);
    byte_59385CF = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21888/*"isEventFlowerGarden"*/, v2) > 0;
}


bool EventDetailEntity__IsEventHappiness(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385CD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21889/*"isEventHappiness"*/);
    byte_59385CD = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21889/*"isEventHappiness"*/, v2) > 0;
}


bool EventDetailEntity__IsEventJob(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385D8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21890/*"isEventJob"*/);
    byte_59385D8 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21890/*"isEventJob"*/, v2) > 0;
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

  if ( (byte_59385CC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21891/*"isEventRiverProgress"*/);
    byte_59385CC = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21891/*"isEventRiverProgress"*/, v2) > 0;
}


bool EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385C1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20008/*"eventUiCushion"*/);
    byte_59385C1 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20008/*"eventUiCushion"*/, v2) > 0;
}


bool EventDetailEntity__IsExchangeShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 1) & 1;
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

  if ( (byte_59385D2 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21906/*"isMakeFarm"*/);
    byte_59385D2 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21906/*"isMakeFarm"*/, v2) > 0;
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

  if ( (byte_59385B8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21921/*"isPersonalRaid"*/);
    byte_59385B8 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21921/*"isPersonalRaid"*/, v2) > 0;
}


bool EventDetailEntity__IsQuestCooltime(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (BYTE5(this->fields.flag) >> 1) & 1;
}


bool EventDetailEntity__IsRaid(EventDetailEntity_o *this, const MethodInfo *method)
{
  return (LOBYTE(this->fields.flag) >> 6) & 1;
}


bool EventDetailEntity__IsRefreshableEventUiByAfterAction(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59385D1 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21935/*"isRefreshableEventUiByAfterAction"*/);
    byte_59385D1 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_21935/*"isRefreshableEventUiByAfterAction"*/, v2) > 0;
}


bool EventDetailEntity__IsRevivalEvent(EventDetailEntity_o *this, const MethodInfo *method)
{
  return BYTE3(this->fields.flag) >> 7;
}


bool EventDetailEntity__IsReward(EventDetailEntity_o *this, const MethodInfo *method)
{
  int64_t flag; // x8
  _BOOL8 v3; // x0

  flag = this->fields.flag;
  if ( (flag & 0xC065) != 0 )
  {
    return (char)&dword_0 + 1;
  }
  else
  {
    if ( (flag & 0x400) != 0 )
    {
      if ( !EventDetailEntity__IsPersonalBoss(this, method) )
      {
        LOBYTE(v3) = 1;
        return v3;
      }
      flag = this->fields.flag;
    }
    LOBYTE(v3) = (flag & 0x40000) != 0 || (flag & 0x80000) != 0;
  }
  return v3;
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


bool EventDetailEntity__TryGetHideHelpBtnOnEventReward(
        EventDetailEntity_o *this,
        System_Int32_array **tabNums,
        const MethodInfo *method)
{
  System_Int32_array *IntArray; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  long double v19; // q0
  _QWORD *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  System_Int32_array **v25; // x8
  System_Int32_array *v26; // x1

  if ( (byte_59385DC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&StringLiteral_21898/*"isHideHelpBtnOnEventReward"*/);
    byte_59385DC = 1;
  }
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, (System_String_o *)StringLiteral_21898/*"isHideHelpBtnOnEventReward"*/, 0, 0);
  *tabNums = IntArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)tabNums, (int32_t)IntArray, v6, v7, v8, v9, v10, v11);
  if ( *tabNums && (*tabNums)->max_length )
    return 1;
  v21 = Method_System_Array_Empty_int___;
  v22 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v22 )
  {
    sub_2237B54(Method_System_Array_Empty_int___);
    v22 = v21[7];
  }
  v23 = *(_QWORD *)(v22 + 16);
  if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
    v23 = sub_2237AF8(v19);
  if ( !*(_DWORD *)(v23 + 228) )
    *(__n128 *)&v19 = j_il2cpp_runtime_class_init_0(v23, v12);
  v24 = *(_QWORD *)(v21[7] + 16LL);
  if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
    v24 = sub_2237AF8(v19);
  v25 = *(System_Int32_array ***)(v24 + 184);
  v26 = *v25;
  *tabNums = *v25;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)tabNums, (int32_t)v26, v13, v14, v15, v16, v17, v18);
  return 0;
}


bool EventDetailEntity__TryGetJumpSlotIdx(EventDetailEntity_o *this, int32_t *jumpSlotIdx, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *script; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_3FCA3E8 **v8; // x25
  __int64 naturalAligment; // x10
  __int64 v10; // x1
  System_Object_array *v11; // x20
  il2cpp_array_size_t max_length; // x8
  Il2CppObject **v13; // x26
  System_Convert_c **v14; // x23
  unsigned __int64 v15; // x27
  Il2CppObject **m_Items; // x29
  System_Collections_Generic_Dictionary_object__object__o *v17; // x22
  __int64 v18; // x10
  Il2CppObject **v19; // x21
  const MethodInfo_3FCA3E8 **v20; // x26
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  System_Convert_c *v23; // x8
  System_Convert_c **v24; // x25
  Il2CppObject *v25; // x23
  const MethodInfo *v26; // x4
  __int64 v27; // x1
  Il2CppObject *v28; // x20
  int32_t v29; // w9
  CommonReleaseMaster_o *v31; // [xsp+8h] [xbp-68h]

  if ( (byte_59385D0 & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&StringLiteral_18947/*"commonReleaseId"*/);
    sub_21FFC50(&StringLiteral_24746/*"slot"*/);
    sub_21FFC50(&StringLiteral_24439/*"selectSlotOnRewardScene"*/);
    byte_59385D0 = 1;
  }
  script = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  *jumpSlotIdx = -1;
  if ( script )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            script,
            (Il2CppObject *)StringLiteral_24439/*"selectSlotOnRewardScene"*/,
            (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      goto LABEL_27;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
    if ( !Item )
      goto LABEL_33;
    v8 = (const MethodInfo_3FCA3E8 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
    script = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                          Item,
                                                                          (Il2CppObject *)StringLiteral_24439/*"selectSlotOnRewardScene"*/,
                                                                          (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      return (char)script;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
    if ( !Item )
      goto LABEL_33;
    Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                        Item,
                                                                        (Il2CppObject *)StringLiteral_24439/*"selectSlotOnRewardScene"*/,
                                                                        (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_33;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_33;
    }
    v11 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)Item,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_object__ToArray__);
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10);
    Item = (System_Collections_Generic_Dictionary_object__object__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
    if ( !v11 )
LABEL_33:
      sub_21FFECC(Item, v6);
    max_length = v11->max_length;
    if ( (int)max_length < 1 )
    {
LABEL_27:
      LOBYTE(script) = 0;
      return (char)script;
    }
    v31 = (CommonReleaseMaster_o *)Item;
    v13 = (Il2CppObject **)&StringLiteral_24746/*"slot"*/;
    v14 = &System_Convert_TypeInfo;
    v15 = 0;
    m_Items = v11->m_Items;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)max_length )
        sub_21FFED4(Item);
      v17 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v15];
      if ( v17 )
      {
        v18 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( v17->klass->_2.naturalAligment >= (unsigned int)v18
          && (System_Collections_Generic_Dictionary_string__object__c *)v17->klass->_2.typeHierarchy[v18 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v15],
                                                                              (Il2CppObject *)StringLiteral_18947/*"commonReleaseId"*/,
                                                                              (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                v17,
                                                                                *v13,
                                                                                (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              v19 = v13;
              v20 = v8;
              v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
                      v17,
                      (Il2CppObject *)StringLiteral_18947/*"commonReleaseId"*/,
                      *v8);
              v23 = *v14;
              v24 = v14;
              v25 = v21;
              if ( !*(&v23->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(v23, v22);
              v6 = (unsigned int)System_Convert__ToInt32(v25, 0);
              Item = (System_Collections_Generic_Dictionary_object__object__o *)v31;
              if ( !v31 )
                goto LABEL_33;
              Item = (System_Collections_Generic_Dictionary_object__object__o *)CommonReleaseMaster__IsOpen(
                                                                                  v31,
                                                                                  v6,
                                                                                  0,
                                                                                  0,
                                                                                  v26);
              v14 = v24;
              v8 = v20;
              v13 = v19;
              if ( ((unsigned __int8)Item & 1) != 0 )
                break;
            }
          }
        }
      }
      LODWORD(max_length) = v11->max_length;
      if ( (__int64)++v15 >= (int)max_length )
        goto LABEL_27;
    }
    v28 = System_Collections_Generic_Dictionary_object__object___get_Item(v17, *v19, *v8);
    if ( !*(&(*v14)->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(*v14, v27);
    LODWORD(script) = System_Convert__ToInt32(v28, 0);
    v29 = (unsigned int)script & ~((int)script >> 31);
    LOBYTE(script) = (int)script >= 0;
    *jumpSlotIdx = v29;
  }
  return (char)script;
}


bool EventDetailEntity__TryGetReplaceEventBtnImageId(EventDetailEntity_o *this, int32_t *id, const MethodInfo *method)
{
  int32_t IntFromScript; // w0

  if ( (byte_59385D5 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24203/*"replaceEventBtnImageId"*/);
    byte_59385D5 = 1;
  }
  IntFromScript = EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24203/*"replaceEventBtnImageId"*/, method);
  *id = IntFromScript;
  return IntFromScript > 0;
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


void EventDetailEntity_EventRewardInfoOnGrandQuest___ctor(
        EventDetailEntity_EventRewardInfoOnGrandQuest_o *this,
        int32_t commonReleaseId,
        int32_t grandWarId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._CommonReleaseId_k__BackingField = commonReleaseId;
  this->fields._GrandWarId_k__BackingField = grandWarId;
}


int32_t EventDetailEntity_EventRewardInfoOnGrandQuest__get_CommonReleaseId(
        EventDetailEntity_EventRewardInfoOnGrandQuest_o *this,
        const MethodInfo *method)
{
  return this->fields._CommonReleaseId_k__BackingField;
}


int32_t EventDetailEntity_EventRewardInfoOnGrandQuest__get_GrandWarId(
        EventDetailEntity_EventRewardInfoOnGrandQuest_o *this,
        const MethodInfo *method)
{
  return this->fields._GrandWarId_k__BackingField;
}


void EventDetailEntity_EventRewardInfoOnGrandQuest__set_CommonReleaseId(
        EventDetailEntity_EventRewardInfoOnGrandQuest_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommonReleaseId_k__BackingField = value;
}


void EventDetailEntity_EventRewardInfoOnGrandQuest__set_GrandWarId(
        EventDetailEntity_EventRewardInfoOnGrandQuest_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._GrandWarId_k__BackingField = value;
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