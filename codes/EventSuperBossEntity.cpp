void __fastcall EventSuperBossEntity___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct EventSuperBossEntity_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct EventSuperBossEntity_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  struct EventSuperBossEntity_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  struct EventSuperBossEntity_StaticFields *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  if ( (byte_4BDC6B7 & 1) == 0 )
  {
    sub_1C21E38(&EventSuperBossEntity_TypeInfo);
    sub_1C21E38(&StringLiteral_24581/*"ui_start_quest_phase"*/);
    sub_1C21E38(&StringLiteral_24578/*"ui_end_quest_phase"*/);
    sub_1C21E38(&StringLiteral_24577/*"ui_end_quest_id"*/);
    sub_1C21E38(&StringLiteral_24579/*"ui_hidden"*/);
    sub_1C21E38(&StringLiteral_24580/*"ui_start_quest_id"*/);
    byte_4BDC6B7 = 1;
  }
  EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24580/*"ui_start_quest_id"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EventSuperBossEntity_TypeInfo->static_fields,
    StringLiteral_24580/*"ui_start_quest_id"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_24581/*"ui_start_quest_phase"*/;
  static_fields = EventSuperBossEntity_TypeInfo->static_fields;
  static_fields->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24581/*"ui_start_quest_phase"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->UI_START_QUEST_PHASE_KEY, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_24577/*"ui_end_quest_id"*/;
  v16 = EventSuperBossEntity_TypeInfo->static_fields;
  v16->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24577/*"ui_end_quest_id"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->UI_END_QUEST_ID_KEY, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_24578/*"ui_end_quest_phase"*/;
  v24 = EventSuperBossEntity_TypeInfo->static_fields;
  v24->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24578/*"ui_end_quest_phase"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v24->UI_END_QUEST_PHASE_KEY, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_24579/*"ui_hidden"*/;
  v32 = EventSuperBossEntity_TypeInfo->static_fields;
  v32->UI_HIDDEN = (struct System_String_o *)StringLiteral_24579/*"ui_hidden"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v32->UI_HIDDEN, v31, v33, v34, v35, v36, v37, v38);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC6B6 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_string___ctor__);
    byte_4BDC6B6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_325995C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4BDC6B0 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4BDC6B0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_2FAE028 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_4BDC6AF & 1) == 0 )
  {
    sub_1C21E38(&EventSuperBossEntity_TypeInfo);
    byte_4BDC6AF = 1;
  }
  eventId = this->fields.eventId;
  id = this->fields.id;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
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
      sub_1C22094(UserSuperBossEntity, v4);
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
          sub_1C2209C(UserSuperBossEntity, v4);
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
  __int64 script; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 methodPtr_low; // x9
  __int64 v6; // x22
  System_Int64_array *v7; // x21
  unsigned __int64 v8; // x19
  Il2CppObject *Item; // x23
  System_Int64_array *result; // x0
  EventSuperBossEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4BDC6B5 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C21E38(&StringLiteral_17731/*"breakGaugeHp"*/);
    byte_4BDC6B5 = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17731/*"breakGaugeHp"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_21;
    script = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)script,
                        (Il2CppObject *)StringLiteral_17731/*"breakGaugeHp"*/,
                        (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_21;
    v4 = (System_Collections_Generic_List_object__o *)script;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C22354(script);
      EventSuperBossEntity___ctor(v11, v12);
      return result;
    }
    v6 = *(unsigned int *)(script + 24);
    if ( (int)v6 >= 1 )
    {
      v7 = (System_Int64_array *)sub_1C21EE0(long___TypeInfo, (unsigned int)v6);
      v8 = 0LL;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v4,
                 v8,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        script = System_Convert__ToInt64(Item, 0LL);
        if ( !v7 )
          break;
        if ( v8 >= v7->max_length )
          goto LABEL_22;
        v7->m_Items[v8++] = script;
        if ( v6 == v8 )
          return v7;
      }
LABEL_21:
      sub_1C22094(script, method);
    }
  }
  script = sub_1C21EE0(long___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_21;
  v7 = (System_Int64_array *)script;
  if ( !*(_DWORD *)(script + 24) )
LABEL_22:
    sub_1C2209C(script, method);
  *(_QWORD *)(script + 32) = this->fields.maxHp;
  return v7;
}


UserSuperBossEntity_o *__fastcall EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  UserSuperBossEntity_o *result; // x0
  UserSuperBossEntity_o *v6; // x20
  __int64 v7; // d0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4BDC6B1 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&UserSuperBossEntity_TypeInfo);
    byte_4BDC6B1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_23;
  if ( UserSuperBossMaster__TryGetEntity(
         (UserSuperBossMaster_o *)Master_object,
         &entity,
         *(_QWORD *)(result[3].fields.userId + 64),
         this->fields.eventId,
         this->fields.id,
         0LL) )
  {
    return entity;
  }
  v6 = (UserSuperBossEntity_o *)sub_1C22084(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v6, 0LL);
  entity = v6;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  }
  if ( !v6 || (v6->fields.userId = *(_QWORD *)(result[3].fields.userId + 64), (result = entity) == 0LL) )
LABEL_23:
    sub_1C22094(result, v3);
  v7 = *(_QWORD *)&this->fields.eventId;
  entity->fields.damage = 0LL;
  *(_QWORD *)&result->fields.eventId = v7;
  return result;
}


bool __fastcall EventSuperBossEntity__InUIDisplayPeriod(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x21
  UserQuestMaster_o *v6; // x20
  NetworkManager_c *v7; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_Dictionary_string__object__o *v9; // x22
  int64_t userIdNumber; // x21
  __int64 v11; // x2
  __int64 v12; // x3
  int32_t *v13; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v15; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *v21; // x21
  NetworkManager_c *v22; // x0
  struct NetworkManager_StaticFields *v23; // x8
  struct System_Collections_Generic_Dictionary_string__object__o *v24; // x22
  int64_t v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  int32_t *v28; // x0
  UserQuestEntity_o *v29; // x0
  UserQuestEntity_o *v30; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v31; // x21
  int32_t v32; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v33; // x19
  __int64 v34; // x2
  __int64 v35; // x3
  EventSuperBossEntity_o *v36; // x0
  const MethodInfo *v37; // x1

  if ( (byte_4BDC6B3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&EventSuperBossEntity_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDC6B3 = 1;
  }
  if ( !this->fields.script )
    goto LABEL_63;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v6 = (UserQuestMaster_o *)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !script )
    goto LABEL_65;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v7 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v7 = NetworkManager_TypeInfo;
  }
  static_fields = v7->static_fields;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v9 = this->fields.script;
  userIdNumber = static_fields->userIdNumber;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v9 )
    goto LABEL_65;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v9,
                                (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v6 || !Instance )
    goto LABEL_65;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_66;
  v13 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v11, v12);
  EntityFromId = UserQuestMaster__getEntityFromId(v6, userIdNumber, *v13, 0LL);
  if ( !EntityFromId )
    goto LABEL_34;
  v15 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v16 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v16 )
    goto LABEL_65;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v16,
         (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v15->fields.questPhase;
    v18 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( !v18 )
      goto LABEL_65;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                  (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_65;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_66;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v19, v20) )
      goto LABEL_61;
    goto LABEL_34;
  }
  if ( v15->fields.clearNum <= 0 )
  {
LABEL_34:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v21 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( v21 )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v21,
              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_63;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      v22 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v22 = NetworkManager_TypeInfo;
      }
      v23 = v22->static_fields;
      Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
      v24 = this->fields.script;
      v25 = v23->userIdNumber;
      if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      if ( v24 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v24,
                                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v6 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_66;
            v28 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v26, v27);
            v29 = UserQuestMaster__getEntityFromId(v6, v25, *v28, 0LL);
            if ( !v29 )
              return (char)v29;
            v30 = v29;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v31 = this->fields.script;
            if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            if ( v31 )
            {
              if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                      (System_Collections_Generic_Dictionary_object__object__o *)v31,
                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v30->fields.clearNum )
                  goto LABEL_61;
                goto LABEL_63;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v32 = v30->fields.questPhase;
              v33 = this->fields.script;
              if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              if ( v33 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)v33,
                                              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v32 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v34, v35) )
                      goto LABEL_61;
LABEL_63:
                    LOBYTE(v29) = 1;
                    return (char)v29;
                  }
LABEL_66:
                  sub_1C22354(Instance);
                  LOBYTE(v29) = EventSuperBossEntity__IsCleard(v36, v37);
                  return (char)v29;
                }
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_1C22094(Instance, v4);
  }
LABEL_61:
  LOBYTE(v29) = 0;
  return (char)v29;
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
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  int i; // w22
  EventSuperBossMaster_c *v7; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  clsQuestCheck_o *Int; // x0
  __int64 v16; // x1
  struct System_Int32_array *splitQuestIds; // x8
  Il2CppObject *Master_object; // x20
  struct System_Int32_array *v20; // x8
  struct System_Int32_array *v22; // x8
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDC6B2 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&EventSuperBossMaster_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4BDC6B2 = 1;
  }
  if ( EventSuperBossEntity__InUIDisplayPeriod(this, method) )
  {
    for ( i = 0; ; ++i )
    {
      v7 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v7 = EventSuperBossMaster_TypeInfo;
      }
      SAVE_KEY = v7->static_fields->SAVE_KEY;
      eventId = this->fields.eventId;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v3, v4, v5);
      v23 = i;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v10, v11, v12);
      v14 = System_String__Format_63129848(SAVE_KEY, v9, v13, 0LL);
      Int = (clsQuestCheck_o *)UnityEngine_PlayerPrefs__GetInt(v14, 0, 0LL);
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
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4BD6FF5 )
      {
        sub_1C21E38(&NetworkManager_TypeInfo);
        byte_4BD6FF5 = 1;
      }
      Int = (clsQuestCheck_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Int = (clsQuestCheck_o *)NetworkManager_TypeInfo;
      }
      v20 = this->fields.splitQuestIds;
      if ( v20 )
      {
        if ( !v20->max_length )
          goto LABEL_32;
        if ( Master_object )
        {
          if ( UserQuestMaster__getChallengeCountsFromId(
                 (UserQuestMaster_o *)Master_object,
                 *(_QWORD *)&Int[5].fields.cQuestReleaseListP[1].fields._size,
                 v20->m_Items[1],
                 0LL) > 0 )
            return 1;
          Int = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_388D478 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v22 = this->fields.splitQuestIds;
          if ( v22 )
          {
            if ( v22->max_length )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease(Int, v22->m_Items[1], -1, 0, 0LL);
              goto LABEL_31;
            }
LABEL_32:
            sub_1C2209C(Int, v16);
          }
        }
      }
    }
LABEL_31:
    sub_1C22094(Int, v16);
  }
  return 0;
}


bool __fastcall EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x19
  __int64 v6; // x2
  __int64 v7; // x3
  EventSuperBossEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4BDC6B4 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&EventSuperBossEntity_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    byte_4BDC6B4 = 1;
  }
  Item = EventSuperBossEntity_TypeInfo;
  script = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !script )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v5 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v5
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v5,
                 (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_1C22094(Item, method);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7) == 1LL;
  sub_1C22354(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v9, v10);
}