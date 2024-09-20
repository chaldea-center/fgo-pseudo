void __fastcall EventDetailEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3

  if ( (byte_4A5B0C2 & 1) == 0 )
  {
    sub_1B885B0(&EventDetailEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_6210/*"EventServantFatigue/{0}"*/);
    byte_4A5B0C2 = 1;
  }
  EventDetailEntity_TypeInfo->static_fields->DATA_ROOT_FOLDER = (struct System_String_o *)StringLiteral_6210/*"EventServantFatigue/{0}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventDetailEntity_TypeInfo->static_fields,
    StringLiteral_6210/*"EventServantFatigue/{0}"*/,
    v1,
    v2);
  EventDetailEntity_TypeInfo->static_fields->DATA_DEFAULT_ID = 2;
}


void __fastcall EventDetailEntity___ctor(EventDetailEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B0C1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_int___ctor__);
    byte_4A5B0C1 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_311D734 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall EventDetailEntity__CreatePrimaryKey(EventDetailEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


System_String_o *__fastcall EventDetailEntity__GetCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4A5B0B7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22405/*"overwriteRewardMessageCommonReleaseId"*/);
    sub_1B885B0(&StringLiteral_22406/*"overwriteRewardMessageId"*/);
    byte_4A5B0B7 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22405/*"overwriteRewardMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22406/*"overwriteRewardMessageId"*/,
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

  if ( (byte_4A5B0AA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6741/*"FloorRewardPrefabName"*/);
    byte_4A5B0AA = 1;
  }
  return EventDetailEntity__GetStringFromScript(this, (System_String_o *)StringLiteral_6741/*"FloorRewardPrefabName"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationBasePoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0B4 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19588/*"fortificationBasePoint"*/);
    byte_4A5B0B4 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19588/*"fortificationBasePoint"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetFortificationLvPoint(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0B5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19589/*"fortificationLvPoint"*/);
    byte_4A5B0B5 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19589/*"fortificationLvPoint"*/, v2);
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
  System_Func_object__object__o *v4; // x21

  if ( (byte_4A5B0BC & 1) == 0 )
  {
    sub_1B885B0(&Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
    sub_1B885B0(&Method_EntityScriptValueConvertLogic_ObjectListToIntList__);
    sub_1B885B0(&System_Func_List_object___List_int___TypeInfo);
    sub_1B885B0(&StringLiteral_20226/*"ignoreCommandAssistQuestIds"*/);
    byte_4A5B0BC = 1;
  }
  v3 = (System_String_o *)StringLiteral_20226/*"ignoreCommandAssistQuestIds"*/;
  v4 = (System_Func_object__object__o *)sub_1B887FC(System_Func_List_object___List_int___TypeInfo);
  System_Func_object__object____ctor(v4, 0LL, Method_EntityScriptValueConvertLogic_ObjectListToIntList__, 0LL);
  return (System_Collections_Generic_List_int__o *)EntityScriptUtil__GetScriptValue_object__object_(
                                                     this->fields.script,
                                                     v3,
                                                     (System_Func_TSource__TDestination__o *)v4,
                                                     0LL,
                                                     (const MethodInfo_2E885D4 *)Method_EntityScriptUtil_GetScriptValue_List_object___List_int____);
}


int32_t __fastcall EventDetailEntity__GetIntFromScript(
        EventDetailEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B0AB & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5B0AB = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( script )
  {
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      v6 = value;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_31C7148 **v6; // x25
  __int64 methodPtr_low; // x10
  System_Object_array *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x8
  Il2CppObject **v11; // x23
  unsigned __int64 v12; // x26
  Il2CppObject **m_Items; // x27
  System_Collections_Generic_Dictionary_object__object__o *v14; // x21
  __int64 v15; // x10
  System_String_o *v16; // x22
  int32_t v17; // w0
  Il2CppObject *v18; // x1
  int32_t v19; // w22
  Il2CppObject **v20; // x29
  const MethodInfo_31C7148 **v21; // x23
  Il2CppObject *v22; // x0
  int32_t v23; // w25
  __int64 v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0

  if ( (byte_4A5B0B0 & 1) == 0 )
  {
    sub_1B885B0(&EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&StringLiteral_18170/*"commonReleaseId"*/);
    sub_1B885B0(&StringLiteral_17814/*"changeLoadAnimations"*/);
    sub_1B885B0(&StringLiteral_16783/*"animationId"*/);
    byte_4A5B0B0 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_17814/*"changeLoadAnimations"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_32;
  v6 = (const MethodInfo_31C7148 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_17814/*"changeLoadAnimations"*/,
                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_32;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    goto LABEL_32;
  if ( (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    goto LABEL_32;
  v8 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)Item,
         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_object__ToArray__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo___ctor__);
  if ( !v8 )
    goto LABEL_32;
  v10 = *(_QWORD *)&v8->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = (Il2CppObject **)&StringLiteral_16783/*"animationId"*/;
    v12 = 0LL;
    m_Items = v8->m_Items;
    do
    {
      if ( v12 >= (unsigned int)v10 )
        sub_1B88814(Item, v4);
      v14 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v12];
      if ( v14 )
      {
        v15 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v15
          && (System_Collections_Generic_Dictionary_string__object__c *)v14->klass->_2.typeHierarchy[v15 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v12],
                                                                              (Il2CppObject *)StringLiteral_18170/*"commonReleaseId"*/,
                                                                              (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                                v14,
                                                                                *v11,
                                                                                (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
            if ( ((unsigned __int8)Item & 1) != 0 )
            {
              Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                  v14,
                                                                                  (Il2CppObject *)StringLiteral_18170/*"commonReleaseId"*/,
                                                                                  *v6);
              if ( !Item )
                goto LABEL_32;
              v16 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                         Item,
                                         Item->klass->vtable._4_unknown.methodPtr);
              if ( !System_Convert_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
              v17 = System_Convert__ToInt32_62363400(v16, 0LL);
              v18 = *v11;
              v19 = v17;
              v20 = v11;
              v21 = v6;
              v22 = System_Collections_Generic_Dictionary_object__object___get_Item(v14, v18, *v6);
              v23 = System_Convert__ToInt32(v22, 0LL);
              v24 = sub_1B887FC(EventDetailEntity_ChangeLoadAnimationInfo_TypeInfo);
              System_Object___ctor((Il2CppObject *)v24, 0LL);
              *(_DWORD *)(v24 + 16) = v19;
              *(_DWORD *)(v24 + 20) = v23;
              if ( !v9 )
                goto LABEL_32;
              items = v9->fields._items;
              v28 = Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__Add__;
              ++v9->fields._version;
              if ( !items )
                goto LABEL_32;
              size = v9->fields._size;
              v6 = v21;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v9,
                  (Il2CppObject *)v24,
                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
              }
              else
              {
                v30 = &items->obj.klass + size;
                v9->fields._size = size + 1;
                v30[4] = (Il2CppClass *)v24;
                sub_1B88554((ServantStatusBattleListViewItem_o *)(v30 + 4), v24, v25, v26);
              }
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
LABEL_32:
    sub_1B8880C(Item, v4);
  return (EventDetailEntity_ChangeLoadAnimationInfo_array *)System_Collections_Generic_List_object___ToArray(
                                                              v9,
                                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventDetailEntity_ChangeLoadAnimationInfo__ToArray__);
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

  if ( (byte_4A5B0B6 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B0B6 = 1;
  }
  v7 = (System_String_o *)StringLiteral_1/*""*/;
  IntFromScript = EventDetailEntity__GetIntFromScript(this, messageCommonReleaseKey, (const MethodInfo *)messageKey);
  if ( !IntFromScript )
    return v7;
  v10 = IntFromScript;
  StringFromScript = EventDetailEntity__GetStringFromScript(this, messageKey, v9);
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  if ( !CondType__IsCommonRelease(v10, 0LL) || System_String__IsNullOrEmpty(StringFromScript, 0LL) )
    return v7;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  return LocalizationManager__Get(StringFromScript, 0LL);
}


int32_t __fastcall EventDetailEntity__GetOverwriteRewardCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0B9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22404/*"overwriteRewardCondCommonReleaseId"*/);
    byte_4A5B0B9 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22404/*"overwriteRewardCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetOverwriteShopCondCommonReleaseId(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0BA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22410/*"overwriteShopCondCommonReleaseId"*/);
    byte_4A5B0BA = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22410/*"overwriteShopCondCommonReleaseId"*/, v2);
}


int32_t __fastcall EventDetailEntity__GetRandomMissionMaxNum(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0B1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22778/*"randomMissionMaxNum"*/);
    byte_4A5B0B1 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_22778/*"randomMissionMaxNum"*/, v2);
}


EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *__fastcall EventDetailEntity__GetReplaceEventRewardBtnLogoInfo(
        EventDetailEntity_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  System_Collections_Generic_Dictionary_object__object__o *v6; // x19
  __int64 methodPtr_low; // x10
  System_String_o *v8; // x20
  int32_t v9; // w20
  Il2CppObject *v10; // x0
  int32_t v11; // w21
  __int64 v12; // x19

  if ( (byte_4A5B0B3 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_19134/*"eventLogoId"*/);
    sub_1B885B0(&StringLiteral_18170/*"commonReleaseId"*/);
    sub_1B885B0(&StringLiteral_22874/*"replaceEventRewardBtnLogoInfo"*/);
    byte_4A5B0B3 = 1;
  }
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_22874/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_22874/*"replaceEventRewardBtnLogoInfo"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0LL;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item
    || (Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                            Item,
                                                                            (Il2CppObject *)StringLiteral_22874/*"replaceEventRewardBtnLogoInfo"*/,
                                                                            (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL
    || (v6 = Item,
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (System_Collections_Generic_Dictionary_string__object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
  {
LABEL_19:
    sub_1B8880C(Item, v4);
  }
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          Item,
          (Il2CppObject *)StringLiteral_18170/*"commonReleaseId"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__)
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v6,
          (Il2CppObject *)StringLiteral_19134/*"eventLogoId"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0LL;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      v6,
                                                                      (Il2CppObject *)StringLiteral_18170/*"commonReleaseId"*/,
                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_19;
  v8 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                            Item,
                            Item->klass->vtable._4_unknown.methodPtr);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v9 = System_Convert__ToInt32_62363400(v8, 0LL);
  v10 = System_Collections_Generic_Dictionary_object__object___get_Item(
          v6,
          (Il2CppObject *)StringLiteral_19134/*"eventLogoId"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = System_Convert__ToInt32(v10, 0LL);
  v12 = sub_1B887FC(EventDetailEntity_ReplaceEventRewardBtnLogoInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = v9;
  *(_DWORD *)(v12 + 20) = v11;
  return (EventDetailEntity_ReplaceEventRewardBtnLogoInfo_o *)v12;
}


System_String_o *__fastcall EventDetailEntity__GetServantFatigueFolder(
        EventDetailEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t ServantFatigueId; // w0
  int DATA_DEFAULT_ID; // w19
  EventDetailEntity_c *v8; // x0
  System_String_o *DATA_ROOT_FOLDER; // x20
  Il2CppObject *v10; // x0
  int v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5B0AE & 1) == 0 )
  {
    sub_1B885B0(&EventDetailEntity_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    byte_4A5B0AE = 1;
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
  return System_String__Format(DATA_ROOT_FOLDER, v10, 0LL);
}


int32_t __fastcall EventDetailEntity__GetServantFatigueId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0AF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12631/*"ServantFatigueId"*/);
    byte_4A5B0AF = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_12631/*"ServantFatigueId"*/, v2);
}


System_String_o *__fastcall EventDetailEntity__GetShopCondMessage(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *OverwriteMessage; // x20

  if ( (byte_4A5B0B8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22412/*"overwriteShopMessageId"*/);
    sub_1B885B0(&StringLiteral_22411/*"overwriteShopMessageCommonReleaseId"*/);
    byte_4A5B0B8 = 1;
  }
  OverwriteMessage = EventDetailEntity__GetOverwriteMessage(
                       this,
                       (System_String_o *)StringLiteral_22411/*"overwriteShopMessageCommonReleaseId"*/,
                       (System_String_o *)StringLiteral_22412/*"overwriteShopMessageId"*/,
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B0AC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5B0AC = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)result,
            (Il2CppObject *)key,
            &value,
            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_1B88ACC(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall EventDetailEntity__GetUseDiceSpotId(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0AD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_24355/*"useDiceSpotId"*/);
    byte_4A5B0AD = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_24355/*"useDiceSpotId"*/, v2);
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

  if ( (byte_4A5B0BD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20788/*"isEventCircleProgress"*/);
    byte_4A5B0BD = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20788/*"isEventCircleProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventCommandAssist(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0BB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20789/*"isEventCommandAssist"*/);
    byte_4A5B0BB = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20789/*"isEventCommandAssist"*/, v2) > 0;
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

  if ( (byte_4A5B0BF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20790/*"isEventHappiness"*/);
    byte_4A5B0BF = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20790/*"isEventHappiness"*/, v2) > 0;
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

  if ( (byte_4A5B0BE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20791/*"isEventRiverProgress"*/);
    byte_4A5B0BE = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20791/*"isEventRiverProgress"*/, v2) > 0;
}


bool __fastcall EventDetailEntity__IsEventShop(EventDetailEntity_o *this, const MethodInfo *method)
{
  return LOBYTE(this->fields.flag) >> 7;
}


bool __fastcall EventDetailEntity__IsEventUiCushion(EventDetailEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4A5B0B2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_19144/*"eventUiCushion"*/);
    byte_4A5B0B2 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_19144/*"eventUiCushion"*/, v2) > 0;
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

  if ( (byte_4A5B0A9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20804/*"isPersonalRaid"*/);
    byte_4A5B0A9 = 1;
  }
  return EventDetailEntity__GetIntFromScript(this, (System_String_o *)StringLiteral_20804/*"isPersonalRaid"*/, v2) > 0;
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


bool __fastcall EventDetailEntity__TryGetJumpSlotIdx(
        EventDetailEntity_o *this,
        int32_t *jumpSlotIdx,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *Item; // x0
  const MethodInfo_31C7148 **v8; // x25
  __int64 methodPtr_low; // x10
  System_Object_array *v10; // x20
  __int64 v11; // x8
  Il2CppObject **v12; // x26
  System_Convert_c **v13; // x23
  unsigned __int64 v14; // x27
  Il2CppObject **m_Items; // x28
  System_Collections_Generic_Dictionary_object__object__o *v16; // x22
  __int64 v17; // x10
  Il2CppObject **v18; // x21
  const MethodInfo_31C7148 **v19; // x26
  Il2CppObject *v20; // x0
  System_Convert_c *v21; // x8
  System_Convert_c **v22; // x25
  Il2CppObject *v23; // x23
  bool result; // w0
  Il2CppObject *v25; // x20
  int32_t v26; // w0
  int32_t v27; // w9
  CommonReleaseMaster_o *v28; // [xsp+8h] [xbp-68h]

  if ( (byte_4A5B0C0 & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&StringLiteral_18170/*"commonReleaseId"*/);
    sub_1B885B0(&StringLiteral_23372/*"slot"*/);
    sub_1B885B0(&StringLiteral_23087/*"selectSlotOnRewardScene"*/);
    byte_4A5B0C0 = 1;
  }
  *jumpSlotIdx = -1;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)StringLiteral_23087/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    return 0;
  }
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  v8 = (const MethodInfo_31C7148 **)&Method_System_Collections_Generic_Dictionary_string__object__get_Item__;
  if ( !System_Collections_Generic_Dictionary_object__object___get_Item(
          Item,
          (Il2CppObject *)StringLiteral_23087/*"selectSlotOnRewardScene"*/,
          (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__) )
    return 0;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.script;
  if ( !Item )
    goto LABEL_35;
  Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                      Item,
                                                                      (Il2CppObject *)StringLiteral_23087/*"selectSlotOnRewardScene"*/,
                                                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !Item )
    goto LABEL_35;
  methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(Item->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
    || (System_Collections_Generic_List_object__c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
  {
    goto LABEL_35;
  }
  v10 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)Item,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_object__ToArray__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Item = (System_Collections_Generic_Dictionary_object__object__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v28 = (CommonReleaseMaster_o *)Item;
  if ( !v10 )
LABEL_35:
    sub_1B8880C(Item, v6);
  v11 = *(_QWORD *)&v10->max_length;
  if ( (int)v11 < 1 )
    return 0;
  v12 = (Il2CppObject **)&StringLiteral_23372/*"slot"*/;
  v13 = &System_Convert_TypeInfo;
  v14 = 0LL;
  m_Items = v10->m_Items;
  while ( 1 )
  {
    if ( v14 >= (unsigned int)v11 )
      sub_1B88814(Item, v6);
    v16 = (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v14];
    if ( v16 )
    {
      v17 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v17
        && (System_Collections_Generic_Dictionary_string__object__c *)v16->klass->_2.typeHierarchy[v17 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                            (System_Collections_Generic_Dictionary_object__object__o *)m_Items[v14],
                                                                            (Il2CppObject *)StringLiteral_18170/*"commonReleaseId"*/,
                                                                            (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)Item & 1) != 0 )
        {
          Item = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                                              v16,
                                                                              *v12,
                                                                              (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            v18 = v12;
            v19 = v8;
            v20 = System_Collections_Generic_Dictionary_object__object___get_Item(
                    v16,
                    (Il2CppObject *)StringLiteral_18170/*"commonReleaseId"*/,
                    *v8);
            v21 = *v13;
            v22 = v13;
            v23 = v20;
            if ( !v21->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(v21);
            v6 = (unsigned int)System_Convert__ToInt32(v23, 0LL);
            Item = (System_Collections_Generic_Dictionary_object__object__o *)v28;
            if ( !v28 )
              goto LABEL_35;
            Item = (System_Collections_Generic_Dictionary_object__object__o *)CommonReleaseMaster__IsOpen(
                                                                                v28,
                                                                                v6,
                                                                                0LL,
                                                                                0,
                                                                                0LL);
            v13 = v22;
            v8 = v19;
            v12 = v18;
            if ( ((unsigned __int8)Item & 1) != 0 )
              break;
          }
        }
      }
    }
    LODWORD(v11) = v10->max_length;
    if ( (__int64)++v14 >= (int)v11 )
      return 0;
  }
  v25 = System_Collections_Generic_Dictionary_object__object___get_Item(v16, *v18, *v8);
  if ( !(*v13)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v13);
  v26 = System_Convert__ToInt32(v25, 0LL);
  if ( v26 >= 0 )
    v27 = v26;
  else
    v27 = 0;
  result = v26 >= 0;
  *jumpSlotIdx = v27;
  return result;
}


int32_t __fastcall EventDetailEntity__getBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v6; // x20
  bool v7; // cc
  __int64 v8; // x8

  if ( (byte_4A5B0A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0A7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v6 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager__getTime(0LL) <= (__int64)v6[6].klass;
    v8 = 40LL;
    if ( v7 )
      v8 = 36LL;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v8);
  }
  return (int)Entity;
}


int32_t __fastcall EventDetailEntity__getShopBgmId(EventDetailEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v6; // x20
  bool v7; // cc
  __int64 v8; // x8

  if ( (byte_4A5B0A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B0A8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventMaster___)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.eventId,
             (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  if ( Entity )
  {
    v6 = Entity;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager__getTime(0LL) <= (__int64)v6[6].klass;
    v8 = 144LL;
    if ( v7 )
      v8 = 140LL;
    LODWORD(Entity) = *(_DWORD *)((char *)&this->klass + v8);
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