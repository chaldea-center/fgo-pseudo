void EventDetailEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3

  if ( (byte_4C2721B & 1) == 0 )
  {
    sub_1C2D490(&EventDetailEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_6241/*"EventServantFatigue/{0}"*/);
    byte_4C2721B = 1;
  }
  EventDetailEntity_TypeInfo->static_fields->DATA_ROOT_FOLDER = (struct System_String_o *)StringLiteral_6241/*"EventServantFatigue/{0}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)EventDetailEntity_TypeInfo->static_fields, StringLiteral_6241/*"EventServantFatigue/{0}"*/, v1, v2);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2721A & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_int___ctor__);
    byte_4C2721A = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_33858B4 *)Method_DataEntityBase_int___ctor__);
}


int32_t EventDetailEntity__CreatePrimaryKey(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


System_String_o *EventDetailEntity__GetCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4C2720C & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22558/*"overwriteRewardMessageCommonReleaseId"*/);
    sub_1C2D490(&StringLiteral_22559/*"overwriteRewardMessageId"*/);
    byte_4C2720C = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22558/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22559/*"overwriteRewardMessageId"*/,
                       v2);
  if ( System_String__IsNullOrEmpty(OverwriteMessage, 0) )
    return this->fields.condMessage;
  return OverwriteMessage;
}


System_String_o *EventDetailEntity__GetFloorRewardPrefabName(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C271FF & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_6770/*"FloorRewardPrefabName"*/);
    byte_4C271FF = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6770/*"FloorRewardPrefabName"*/, v2);
}


int32_t EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27209 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19609/*"fortificationBasePoint"*/);
    byte_4C27209 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19609/*"fortificationBasePoint"*/, v2);
}


int32_t EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C2720A & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19610/*"fortificationLvPoint"*/);
    byte_4C2720A = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19610/*"fortificationLvPoint"*/, v2);
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

  if ( (byte_4C27211 & 1) == 0 )
  {
    sub_1C2D490(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1C2D490(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1C2D490(&System_Func_List_object___List_int___TypeInfo);
    sub_1C2D490(&StringLiteral_20263/*"ignoreCommandAssistQuestIds"*/);
    byte_4C27211 = 1;
  }
  v3 = (System_String_o *)StringLiteral_20263/*"ignoreCommandAssistQuestIds"*/;
  v4 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v4, 0, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v3,
                                                     (System_Func_TSource__TDestination__o *)v4,
                                                     0,
                                                     (const MethodInfo_30D50E8 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t EventDetailEntity__GetIntFromScript(EventDetailEntity_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C27200 & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C27200 = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_344A2A8 **v6; // x25
  __int64 naturalAligment; // x10
  System_Object_array *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // x8
  Il2CppObject **v12; // x23
  unsigned __int64 v13; // x26
  Il2CppObject **m_Items; // x27
  System_Collections_Generic_Dictionary_object__object__o *v15; // x21
  __int64 v16; // x10
  System_String_o *v17; // x22
  int32_t v18; // w0
  Il2CppObject *v19; // x1
  int32_t v20; // w22
  Il2CppObject **v21; // x29
  const MethodInfo_344A2A8 **v22; // x23
  Il2CppObject *v23; // x0
  int32_t v24; // w25
  __int64 v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4C27205 & 1) == 0 )
  {
    sub_1C2D490(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&StringLiteral_18168/*"commonReleaseId"*/);
    sub_1C2D490(&StringLiteral_17807/*"changeLoadAnimations"*/);
    sub_1C2D490(&StringLiteral_16780/*"animationId"*/);
    byte_4C27205 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_17807/*"changeLoadAnimations"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_32;
  v6 = (const MethodInfo_344A2A8 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17807/*"changeLoadAnimations"*/,
                                                                      (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_32;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment )
    goto LABEL_32;
  if ( (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_32;
  v8 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)Item,
         (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_object__ToArray__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
  if ( !v8 )
    goto LABEL_32;
  max_length = v8->max_length;
  if ( (int)max_length >= 1 )
  {
    v12 = (Il2CppObject **)&StringLiteral_16780/*"animationId"*/;
    v13 = 0;
    m_Items = v8->m_Items;
    do
    {
      if ( v13 >= (unsigned int)max_length )
        sub_1C2D6F4(Item, v4, v10);
      v15 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v13];
      if ( v15 )
      {
        v16 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
        if ( v15->klass->_2.naturalAligment >= (unsigned int)v16
          && (System_Collections_Generic_Dictionary_string__object__c *)v15->klass->_2.typeHierarchy[v16 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v13],
                                                                              (Il2CppObject *)StringLiteral_18168/*"commonReleaseId"*/,
                                                                              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                v15,
                                                                                *v12,
                                                                                (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v15,
                                                                                  (Il2CppObject *)StringLiteral_18168/*"commonReleaseId"*/,
                                                                                  *v6);
              if ( !Item )
                goto LABEL_32;
              v17 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Item->klass->vtable._3_ToString.methodPtr)(
                                         Item,
                                         Item->klass->vtable._3_ToString.method);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v18 = System_Convert__ToInt32_64546208(v17, 0);
              v19 = *v12;
              v20 = v18;
              v21 = v12;
              v22 = v6;
              v23 = System_Collections_Generic_Dictionary_object__object___get_Item(v15, v19, *v6);
              v24 = System_Convert__ToInt32(v23, 0);
              v25 = sub_1C2D6DC(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v25, 0);
              *(_DWORD *)(v25 + 16) = v20;
              *(_DWORD *)(v25 + 20) = v24;
              if ( !v9 )
                goto LABEL_32;
              items = v9->fields._items;
              v29 = Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__;
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
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
              }
              else
              {
                v31 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v31[4] = (Il2CppClass *)v25;
                sub_1C2D434((CGThumbnailListItem_o *)(v31 + 4), v25, v26, v27);
              }
              v12 = v21;
            }
          }
        }
      }
      LODWORD(max_length) = v8->max_length;
    }
    while ( (__int64)++v13 < (int)max_length );
  }
  if ( !v9 )
LABEL_32:
    sub_1C2D6EC(Item, v4);
  return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v9,
                                                              (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
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

  if ( (byte_4C2720B & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2720B = 1;
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

  if ( (byte_4C2720E & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22557/*"overwriteRewardCondCommonReleaseId"*/);
    byte_4C2720E = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22557/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t EventDetailEntity__GetOverwriteShopCondCommonReleaseId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C2720F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22564/*"overwriteShopCondCommonReleaseId"*/);
    byte_4C2720F = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22564/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27206 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22934/*"randomMissionMaxNum"*/);
    byte_4C27206 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22934/*"randomMissionMaxNum"*/, v2);
}


int32_t EventDetailEntity__GetRefreshWarBySelectBonus(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27219 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22987/*"refreshWarBySelectBonus"*/);
    byte_4C27219 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22987/*"refreshWarBySelectBonus"*/, v2);
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
  System_String_o *v8; // x20
  int32_t v9; // w20
  Il2CppObject *v10; // x0
  int32_t v11; // w21
  __int64 v12; // x19

  if ( (byte_4C27208 & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_19135/*"eventLogoId"*/);
    sub_1C2D490(&StringLiteral_18168/*"commonReleaseId"*/);
    sub_1C2D490(&StringLiteral_23026/*"replaceEventRewardBtnLogoInfo"*/);
    byte_4C27208 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23026/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23026/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_23026/*"replaceEventRewardBtnLogoInfo"*/,
                                                                            (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0
    || (v6 = Item,
        naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
        Item->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_19:
    sub_1C2D6EC(Item, v4);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          Item,
          (Il2CppObject *)StringLiteral_18168/*"commonReleaseId"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v6,
          (Il2CppObject *)StringLiteral_19135/*"eventLogoId"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      v6,
                                                                      (Il2CppObject *)StringLiteral_18168/*"commonReleaseId"*/,
                                                                      (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_19;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))Item->klass->vtable._3_ToString.methodPtr)(
                            Item,
                            Item->klass->vtable._3_ToString.method);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToInt32_64546208(v8, 0);
  v10 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v6,
          (Il2CppObject *)StringLiteral_19135/*"eventLogoId"*/,
          (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = System_Convert__ToInt32(v10, 0);
  v12 = sub_1C2D6DC(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0);
  *(_DWORD *)(v12 + 16) = v9;
  *(_DWORD *)(v12 + 20) = v11;
  return (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)v12;
}


System_String_o *EventDetailEntity__GetServantFatigueFolder(EventDetailEntity_o *entity, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t ServantFatigueId; // w0
  int32_t DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v8; // x0
  System_String_o *DATA_ROOT_FOLDER; // x20
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C27203 & 1) == 0 )
  {
    sub_1C2D490(&EventDetailEntity_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C27203 = 1;
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
      j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo);
      v8 = EventDetailEntity_TypeInfo;
    }
    DATA_DEFAULT_ID = v8->static_fields->DATA_DEFAULT_ID;
  }
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = EventDetailEntity_TypeInfo;
  }
  DATA_ROOT_FOLDER = v8->static_fields->DATA_ROOT_FOLDER;
  v12 = DATA_DEFAULT_ID;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v2, v3, v4);
  return System_String__Format(DATA_ROOT_FOLDER, v10, 0);
}


int32_t EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27204 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12726/*"ServantFatigueId"*/);
    byte_4C27204 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12726/*"ServantFatigueId"*/, v2);
}


System_String_o *EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4C2720D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22566/*"overwriteShopMessageId"*/);
    sub_1C2D490(&StringLiteral_22565/*"overwriteShopMessageCommonReleaseId"*/);
    byte_4C2720D = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22565/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22566/*"overwriteShopMessageId"*/,
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

  if ( (byte_4C27201 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C2D490(&string_TypeInfo);
    byte_4C27201 = 1;
  }
  value = 0;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1C2D9AC(value);
      return 0;
    }
  }
  return result;
}


int32_t EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27202 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_24456/*"useDiceSpotId"*/);
    byte_4C27202 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24456/*"useDiceSpotId"*/, v2);
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

  if ( (byte_4C27212 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20900/*"isEventCircleProgress"*/);
    byte_4C27212 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20900/*"isEventCircleProgress"*/, v2) > 0;
}


bool EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27210 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20901/*"isEventCommandAssist"*/);
    byte_4C27210 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20901/*"isEventCommandAssist"*/, v2) > 0;
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

  if ( (byte_4C27215 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20902/*"isEventEquipSkillParts"*/);
    byte_4C27215 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20902/*"isEventEquipSkillParts"*/, v2) > 0;
}


bool EventDetailEntity__IsEventHappiness(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27214 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20903/*"isEventHappiness"*/);
    byte_4C27214 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20903/*"isEventHappiness"*/, v2) > 0;
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

  if ( (byte_4C27213 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20904/*"isEventRiverProgress"*/);
    byte_4C27213 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20904/*"isEventRiverProgress"*/, v2) > 0;
}


bool EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C27207 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_19145/*"eventUiCushion"*/);
    byte_4C27207 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19145/*"eventUiCushion"*/, v2) > 0;
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

  if ( (byte_4C27218 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20917/*"isMakeFarm"*/);
    byte_4C27218 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20917/*"isMakeFarm"*/, v2) > 0;
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

  if ( (byte_4C271FE & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20925/*"isPersonalRaid"*/);
    byte_4C271FE = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20925/*"isPersonalRaid"*/, v2) > 0;
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

  if ( (byte_4C27217 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20933/*"isRefreshableEventUiByAfterAction"*/);
    byte_4C27217 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20933/*"isRefreshableEventUiByAfterAction"*/, v2) > 0;
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
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_344A2A8 **v8; // x25
  __int64 naturalAligment; // x10
  System_Object_array *v10; // x20
  __int64 v11; // x2
  il2cpp_array_size_t max_length; // x8
  Il2CppObject **v13; // x26
  System_Convert_c **v14; // x23
  unsigned __int64 v15; // x27
  Il2CppObject **m_Items; // x28
  System_Collections_Generic_Dictionary_object__object__o *v17; // x22
  __int64 v18; // x10
  Il2CppObject **v19; // x21
  const MethodInfo_344A2A8 **v20; // x26
  Il2CppObject *v21; // x0
  System_Convert_c *v22; // x8
  System_Convert_c **v23; // x25
  Il2CppObject *v24; // x23
  bool result; // w0
  Il2CppObject *v26; // x20
  int32_t v27; // w0
  int32_t v28; // w9
  CommonReleaseMaster_o *v29; // [xsp+8h] [xbp-68h]

  if ( (byte_4C27216 & 1) == 0 )
  {
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&StringLiteral_18168/*"commonReleaseId"*/);
    sub_1C2D490(&StringLiteral_23526/*"slot"*/);
    sub_1C2D490(&StringLiteral_23235/*"selectSlotOnRewardScene"*/);
    byte_4C27216 = 1;
  }
  *jumpSlotIdx = -1;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23235/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  v8 = (const MethodInfo_344A2A8 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23235/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23235/*"selectSlotOnRewardScene"*/,
                                                                      (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_35;
  naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
  if ( Item->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_35;
  }
  v10 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Item,
          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_object__ToArray__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v29 = (CommonReleaseMaster_o *)Item;
  if ( !v10 )
LABEL_35:
    sub_1C2D6EC(Item, v6);
  max_length = v10->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v13 = (Il2CppObject **)&StringLiteral_23526/*"slot"*/;
  v14 = &System_Convert_TypeInfo;
  v15 = 0;
  m_Items = v10->m_Items;
  while ( 1 )
  {
    if ( v15 >= (unsigned int)max_length )
      sub_1C2D6F4(Item, v6, v11);
    v17 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v15];
    if ( v17 )
    {
      v18 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment >= (unsigned int)v18
        && (System_Collections_Generic_Dictionary_string__object__c *)v17->klass->_2.typeHierarchy[v18 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v15],
                                                                            (Il2CppObject *)StringLiteral_18168/*"commonReleaseId"*/,
                                                                            (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              v17,
                                                                              *v13,
                                                                              (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            v19 = v13;
            v20 = v8;
            v21 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    v17,
                    (Il2CppObject *)StringLiteral_18168/*"commonReleaseId"*/,
                    *v8);
            v22 = *v14;
            v23 = v14;
            v24 = v21;
            if ( !v22->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v22);
            v6 = (unsigned int)System_Convert__ToInt32(v24, 0);
            Item = (System_Collections_Generic_Dictionary_object__object__o *)v29;
            if ( !v29 )
              goto LABEL_35;
            Item = (System_Collections_Generic_Dictionary_object__object__o *)CommonReleaseMaster__IsOpen(
                                                                                v29,
                                                                                v6,
                                                                                0,
                                                                                0,
                                                                                0);
            v14 = v23;
            v8 = v20;
            v13 = v19;
            if ( ((unsigned __int8)Item & 1) != 0 )
              break;
          }
        }
      }
    }
    LODWORD(max_length) = v10->max_length;
    if ( (__int64)++v15 >= (int)max_length )
      return 0;
  }
  v26 = System_Collections_Generic_Dictionary_object__object___get_Item(v17, *v19, *v8);
  if ( !(*v14)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v14);
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
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v6; // x20
  bool v7; // cc
  __int64 v8; // x8

  if ( (byte_4C271FC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C271FC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v6 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager__getTime(0) <= (__int64)v6[6].klass;
    v8 = 40;
    if ( v7 )
      v8 = 36;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v8);
  }
  return (int)Entity;
}


int32_t EventDetailEntity__getShopBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v6; // x20
  bool v7; // cc
  __int64 v8; // x8

  if ( (byte_4C271FD & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C271FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v6 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager__getTime(0) <= (__int64)v6[6].klass;
    v8 = 144;
    if ( v7 )
      v8 = 140;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v8);
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