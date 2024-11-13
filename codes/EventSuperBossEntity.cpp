void __fastcall EventSuperBossEntity___cctor(const MethodInfo *method)
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  int64_t v18; // x1
  struct EventSuperBossEntity_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x1
  struct EventSuperBossEntity_StaticFields *v27; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x1
  struct EventSuperBossEntity_StaticFields *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int64_t v42; // x1
  struct EventSuperBossEntity_StaticFields *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7

  if ( (byte_4B16370 & 1) == 0 )
  {
    sub_1BCA7E0(&EventSuperBossEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_24398/*"ui_start_quest_phase"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_24395/*"ui_end_quest_phase"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_24394/*"ui_end_quest_id"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_24396/*"ui_hidden"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24397/*"ui_start_quest_id"*/, v16, v17);
    byte_4B16370 = 1;
  }
  EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24397/*"ui_start_quest_id"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EventSuperBossEntity_TypeInfo->static_fields,
    StringLiteral_24397/*"ui_start_quest_id"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = StringLiteral_24398/*"ui_start_quest_phase"*/;
  static_fields = EventSuperBossEntity_TypeInfo->static_fields;
  static_fields->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24398/*"ui_start_quest_phase"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->UI_START_QUEST_PHASE_KEY, v18, v20, v21, v22, v23, v24, v25);
  v26 = StringLiteral_24394/*"ui_end_quest_id"*/;
  v27 = EventSuperBossEntity_TypeInfo->static_fields;
  v27->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24394/*"ui_end_quest_id"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v27->UI_END_QUEST_ID_KEY, v26, v28, v29, v30, v31, v32, v33);
  v34 = StringLiteral_24395/*"ui_end_quest_phase"*/;
  v35 = EventSuperBossEntity_TypeInfo->static_fields;
  v35->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24395/*"ui_end_quest_phase"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v35->UI_END_QUEST_PHASE_KEY, v34, v36, v37, v38, v39, v40, v41);
  v42 = StringLiteral_24396/*"ui_hidden"*/;
  v43 = EventSuperBossEntity_TypeInfo->static_fields;
  v43->UI_HIDDEN = (struct System_String_o *)StringLiteral_24396/*"ui_hidden"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v43->UI_HIDDEN, v42, v44, v45, v46, v47, v48, v49);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1636F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B1636F = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4B16369 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id, method);
    byte_4B16369 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_4B16368 & 1) == 0 )
  {
    sub_1BCA7E0(&EventSuperBossEntity_TypeInfo, method, v2);
    byte_4B16368 = 1;
  }
  eventId = this->fields.eventId;
  id = this->fields.id;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, method);
  return EventSuperBossEntity__CreatePK(eventId, id, v2);
}


int32_t __fastcall EventSuperBossEntity__DamageProgressNum(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  UserSuperBossEntity_o *UserSuperBossEntity; // x0
  __int64 v4; // x1
  struct System_Int64_array *splitHp; // x8
  int max_length; // w9
  int64_t damage; // x10

  UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(this, method);
  if ( UserSuperBossEntity )
  {
    splitHp = this->fields.splitHp;
    if ( !splitHp )
      sub_1BCAA3C(UserSuperBossEntity, v4);
    max_length = splitHp->max_length;
    if ( max_length < 1 )
    {
      LODWORD(UserSuperBossEntity) = 0;
    }
    else
    {
      damage = UserSuperBossEntity->fields.damage;
      UserSuperBossEntity = 0LL;
      do
      {
        if ( (unsigned int)UserSuperBossEntity >= max_length )
          sub_1BCAA44(UserSuperBossEntity, v4);
        if ( damage < splitHp->m_Items[(int)UserSuperBossEntity] )
          break;
        UserSuperBossEntity = (UserSuperBossEntity_o *)(unsigned int)((_DWORD)UserSuperBossEntity + 1);
      }
      while ( (int)UserSuperBossEntity < max_length );
    }
  }
  return (int)UserSuperBossEntity;
}


UnityEngine_Color_o __fastcall EventSuperBossEntity__GetBossColor(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  int32_t bossColor; // w8
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  bossColor = this->fields.bossColor;
  v3 = (float)BYTE2(bossColor) / 255.0;
  v4 = (float)BYTE1(bossColor) / 255.0;
  v5 = (float)(unsigned __int8)bossColor / 255.0;
  v6 = 1.0;
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


System_Int64_array *__fastcall EventSuperBossEntity__GetBreakGaugeHpList(
        EventSuperBossEntity_o *this,
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
  __int64 script; // x0
  System_Collections_Generic_List_object__o *v19; // x20
  __int64 methodPtr_low; // x9
  __int64 v21; // x22
  System_Int64_array *v22; // x21
  unsigned __int64 v23; // x19
  __int64 v24; // x1
  Il2CppObject *Item; // x23
  System_Int64_array *result; // x0
  EventSuperBossEntity_o *v27; // x0
  const MethodInfo *v28; // x1

  if ( (byte_4B1636E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&long___TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_17615/*"breakGaugeHp"*/, v16, v17);
    byte_4B1636E = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17615/*"breakGaugeHp"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_21;
    script = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)script,
                        (Il2CppObject *)StringLiteral_17615/*"breakGaugeHp"*/,
                        (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_21;
    v19 = (System_Collections_Generic_List_object__o *)script;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1BCACFC(script);
      EventSuperBossEntity___ctor(v27, v28);
      return result;
    }
    v21 = *(unsigned int *)(script + 24);
    if ( (int)v21 >= 1 )
    {
      v22 = (System_Int64_array *)sub_1BCA888(long___TypeInfo, (unsigned int)v21);
      v23 = 0LL;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v19,
                 v23,
                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v24);
        script = System_Convert__ToInt64(Item, 0LL);
        if ( !v22 )
          break;
        if ( v23 >= v22->max_length )
          goto LABEL_22;
        v22->m_Items[v23++] = script;
        if ( v21 == v23 )
          return v22;
      }
LABEL_21:
      sub_1BCAA3C(script, method);
    }
  }
  script = sub_1BCA888(long___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_21;
  v22 = (System_Int64_array *)script;
  if ( !*(_DWORD *)(script + 24) )
LABEL_22:
    sub_1BCAA44(script, method);
  *(_QWORD *)(script + 32) = this->fields.maxHp;
  return v22;
}


UserSuperBossEntity_o *__fastcall EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
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
  Il2CppObject *Master_object; // x20
  UserSuperBossEntity_o *result; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  UserSuperBossEntity_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // d0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1636A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserSuperBossMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&UserSuperBossEntity_TypeInfo, v8, v9);
    byte_4B1636A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v10);
  result = (UserSuperBossEntity_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_object )
    goto LABEL_16;
  if ( UserSuperBossMaster__TryGetEntity(
         (UserSuperBossMaster_o *)Master_object,
         &entity,
         (int64_t)result,
         this->fields.eventId,
         this->fields.id,
         0LL) )
  {
    return entity;
  }
  v17 = (UserSuperBossEntity_o *)sub_1BCAA2C(UserSuperBossEntity_TypeInfo, v14, v15, v16);
  UserSuperBossEntity___ctor(v17, 0LL);
  entity = v17;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v18);
  result = (UserSuperBossEntity_o *)NetworkManager__get_UserId(0LL);
  if ( !v17 || (v17->fields.userId = (int64_t)result, (result = entity) == 0LL) )
LABEL_16:
    sub_1BCAA3C(result, v13);
  v19 = *(_QWORD *)&this->fields.eventId;
  entity->fields.damage = 0LL;
  *(_QWORD *)&result->fields.eventId = v19;
  return result;
}


bool __fastcall EventSuperBossEntity__InUIDisplayPeriod(EventSuperBossEntity_o *this, const MethodInfo *method)
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
  DataManager_o *Instance; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x21
  UserQuestMaster_o *v19; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v20; // x22
  int64_t v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  int32_t *v24; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v26; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v27; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v29; // x21
  __int64 v30; // x2
  __int64 v31; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *v32; // x21
  __int64 v33; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *v34; // x22
  int64_t v35; // x21
  __int64 v36; // x2
  __int64 v37; // x3
  int32_t *v38; // x0
  UserQuestEntity_o *v39; // x0
  UserQuestEntity_o *v40; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v41; // x21
  int32_t v42; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v43; // x19
  __int64 v44; // x2
  __int64 v45; // x3
  EventSuperBossEntity_o *v46; // x0
  const MethodInfo *v47; // x1

  if ( (byte_4B1636C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserQuestMaster___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7);
    sub_1BCA7E0(&EventSuperBossEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&long_TypeInfo, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14, v15);
    byte_4B1636C = 1;
  }
  if ( !this->fields.script )
    goto LABEL_55;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v19 = (UserQuestMaster_o *)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v17);
  if ( !script )
    goto LABEL_57;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_30;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v20 = this->fields.script;
  v21 = (int64_t)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v17);
  if ( !v20 )
    goto LABEL_57;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v20,
                                (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v19 || !Instance )
    goto LABEL_57;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_58;
  v24 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v22, v23);
  EntityFromId = UserQuestMaster__getEntityFromId(v19, v21, *v24, 0LL);
  if ( !EntityFromId )
    goto LABEL_30;
  v26 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v27 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v17);
  if ( !v27 )
    goto LABEL_57;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v27,
         (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v26->fields.questPhase;
    v29 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v17);
    if ( !v29 )
      goto LABEL_57;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v29,
                                  (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_58;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v30, v31) )
      goto LABEL_53;
    goto LABEL_30;
  }
  if ( v26->fields.clearNum <= 0 )
  {
LABEL_30:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v32 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v17);
    if ( v32 )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v32,
              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_55;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v33);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v34 = this->fields.script;
      v35 = (int64_t)Instance;
      if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v17);
      if ( v34 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v34,
                                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v19 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_58;
            v38 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v36, v37);
            v39 = UserQuestMaster__getEntityFromId(v19, v35, *v38, 0LL);
            if ( !v39 )
              return (char)v39;
            v40 = v39;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v41 = this->fields.script;
            if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v17);
            if ( v41 )
            {
              if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                      (System_Collections_Generic_Dictionary_object__object__o *)v41,
                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v40->fields.clearNum )
                  goto LABEL_53;
                goto LABEL_55;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v42 = v40->fields.questPhase;
              v43 = this->fields.script;
              if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v17);
              if ( v43 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)v43,
                                              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v42 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v44, v45) )
                      goto LABEL_53;
LABEL_55:
                    LOBYTE(v39) = 1;
                    return (char)v39;
                  }
LABEL_58:
                  sub_1BCACFC(Instance);
                  LOBYTE(v39) = EventSuperBossEntity__IsCleard(v46, v47);
                  return (char)v39;
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_1BCAA3C(Instance, v17);
  }
LABEL_53:
  LOBYTE(v39) = 0;
  return (char)v39;
}


bool __fastcall EventSuperBossEntity__IsCleard(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  UserSuperBossEntity_o *UserSuperBossEntity; // x0

  UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(this, method);
  if ( UserSuperBossEntity )
    LOBYTE(UserSuperBossEntity) = UserSuperBossEntity->fields.damage >= this->fields.maxHp;
  return (char)UserSuperBossEntity;
}


bool __fastcall EventSuperBossEntity__IsEncounted(EventSuperBossEntity_o *this, const MethodInfo *method)
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
  int i; // w22
  EventSuperBossMaster_c *v16; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  int64_t Int; // x0
  struct System_Int32_array *splitQuestIds; // x8
  __int64 v24; // x1
  Il2CppObject *Master_object; // x20
  struct System_Int32_array *v26; // x8
  struct System_Int32_array *v28; // x8
  int v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1636B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserQuestMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&EventSuperBossMaster_TypeInfo, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v12, v13);
    byte_4B1636B = 1;
  }
  if ( EventSuperBossEntity__InUIDisplayPeriod(this, method) )
  {
    for ( i = 0; ; ++i )
    {
      v16 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo, v14);
        v16 = EventSuperBossMaster_TypeInfo;
      }
      SAVE_KEY = v16->static_fields->SAVE_KEY;
      eventId = this->fields.eventId;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
      v29 = i;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
      v20 = System_String__Format_62415592(SAVE_KEY, v18, v19, 0LL);
      Int = UnityEngine_PlayerPrefs__GetInt(v20, 0, 0LL);
      if ( !(_DWORD)Int )
        break;
      if ( (_DWORD)Int == this->fields.id )
        return 1;
    }
    splitQuestIds = this->fields.splitQuestIds;
    if ( splitQuestIds )
    {
      if ( !*(_QWORD *)&splitQuestIds->max_length )
        return 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      Int = NetworkManager__get_UserId(0LL);
      v26 = this->fields.splitQuestIds;
      if ( v26 )
      {
        if ( !v26->max_length )
          goto LABEL_28;
        if ( Master_object )
        {
          if ( UserQuestMaster__getChallengeCountsFromId((UserQuestMaster_o *)Master_object, Int, v26->m_Items[1], 0LL) > 0 )
            return 1;
          Int = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_37DEF34 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v28 = this->fields.splitQuestIds;
          if ( v28 )
          {
            if ( v28->max_length )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Int, v28->m_Items[1], -1, 0, 0LL);
              goto LABEL_27;
            }
LABEL_28:
            sub_1BCAA44(Int, v14);
          }
        }
      }
    }
LABEL_27:
    sub_1BCAA3C(Int, v14);
  }
  return 0;
}


bool __fastcall EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x19
  __int64 v13; // x2
  __int64 v14; // x3
  EventSuperBossEntity_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4B1636D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    sub_1BCA7E0(&EventSuperBossEntity_TypeInfo, v6, v7);
    sub_1BCA7E0(&long_TypeInfo, v8, v9);
    byte_4B1636D = 1;
  }
  Item = EventSuperBossEntity_TypeInfo;
  script = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, method);
  if ( !script )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v12 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, method);
  if ( !v12
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v12,
                 (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_1BCAA3C(Item, method);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v13, v14) == 1LL;
  sub_1BCACFC(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v16, v17);
}