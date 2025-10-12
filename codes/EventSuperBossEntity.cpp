void EventSuperBossEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct EventSuperBossEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct EventSuperBossEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct EventSuperBossEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct EventSuperBossEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C37B45 & 1) == 0 )
  {
    sub_1C32C20(&EventSuperBossEntity_TypeInfo);
    sub_1C32C20(&StringLiteral_24279/*"ui_start_quest_phase"*/);
    sub_1C32C20(&StringLiteral_24276/*"ui_end_quest_phase"*/);
    sub_1C32C20(&StringLiteral_24275/*"ui_end_quest_id"*/);
    sub_1C32C20(&StringLiteral_24277/*"ui_hidden"*/);
    sub_1C32C20(&StringLiteral_24278/*"ui_start_quest_id"*/);
    byte_4C37B45 = 1;
  }
  EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24278/*"ui_start_quest_id"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)EventSuperBossEntity_TypeInfo->static_fields, StringLiteral_24278/*"ui_start_quest_id"*/, v1, v2);
  v3 = StringLiteral_24279/*"ui_start_quest_phase"*/;
  static_fields = EventSuperBossEntity_TypeInfo->static_fields;
  static_fields->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24279/*"ui_start_quest_phase"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->UI_START_QUEST_PHASE_KEY, v3, v5, v6);
  v7 = StringLiteral_24275/*"ui_end_quest_id"*/;
  v8 = EventSuperBossEntity_TypeInfo->static_fields;
  v8->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24275/*"ui_end_quest_id"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->UI_END_QUEST_ID_KEY, v7, v9, v10);
  v11 = StringLiteral_24276/*"ui_end_quest_phase"*/;
  v12 = EventSuperBossEntity_TypeInfo->static_fields;
  v12->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24276/*"ui_end_quest_phase"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->UI_END_QUEST_PHASE_KEY, v11, v13, v14);
  v15 = StringLiteral_24277/*"ui_hidden"*/;
  v16 = EventSuperBossEntity_TypeInfo->static_fields;
  v16->UI_HIDDEN = (struct System_String_o *)StringLiteral_24277/*"ui_hidden"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v16->UI_HIDDEN, v15, v17, v18);
}


void EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C37B44 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_string___ctor__);
    byte_4C37B44 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_33943CC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4C37B3E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C37B3E = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_30DB578 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventSuperBossEntity__CreatePrimaryKey(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_4C37B3D & 1) == 0 )
  {
    sub_1C32C20(&EventSuperBossEntity_TypeInfo);
    byte_4C37B3D = 1;
  }
  eventId = this->fields.eventId;
  id = this->fields.id;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  return EventSuperBossEntity__CreatePK(eventId, id, v2);
}


int32_t EventSuperBossEntity__DamageProgressNum(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  UserSuperBossEntity_o *UserSuperBossEntity; // x0
  struct System_Int64_array *splitHp; // x8
  int max_length; // w9
  int64_t damage; // x10

  UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(this, method);
  if ( UserSuperBossEntity )
  {
    splitHp = this->fields.splitHp;
    if ( !splitHp )
      sub_1C32E7C(UserSuperBossEntity);
    max_length = splitHp->max_length;
    if ( max_length < 1 )
    {
      LODWORD(UserSuperBossEntity) = 0;
    }
    else
    {
      damage = UserSuperBossEntity->fields.damage;
      UserSuperBossEntity = 0;
      do
      {
        if ( (unsigned int)UserSuperBossEntity >= max_length )
          sub_1C32E84(UserSuperBossEntity);
        if ( damage < splitHp->m_Items[(int)UserSuperBossEntity] )
          break;
        UserSuperBossEntity = (UserSuperBossEntity_o *)(unsigned int)((_DWORD)UserSuperBossEntity + 1);
      }
      while ( (int)UserSuperBossEntity < max_length );
    }
  }
  return (int)UserSuperBossEntity;
}


UnityEngine_Color_o EventSuperBossEntity__GetBossColor(EventSuperBossEntity_o *this, const MethodInfo *method)
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


System_Int64_array *EventSuperBossEntity__GetBreakGaugeHpList(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 script; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  __int64 naturalAligment; // x9
  __int64 v6; // x22
  __int64 v7; // x21
  unsigned __int64 v8; // x19
  Il2CppObject *Item; // x23
  System_Int64_array *result; // x0
  EventSuperBossEntity_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C37B43 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&StringLiteral_17410/*"breakGaugeHp"*/);
    byte_4C37B43 = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17410/*"breakGaugeHp"*/,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_21;
    script = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)script,
                        (Il2CppObject *)StringLiteral_17410/*"breakGaugeHp"*/,
                        (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_21;
    v4 = (System_Collections_Generic_List_object__o *)script;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 304LL) < (unsigned int)naturalAligment
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * naturalAligment - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1C3313C(script);
      EventSuperBossEntity___ctor(v11, v12);
      return result;
    }
    v6 = *(unsigned int *)(script + 24);
    if ( (int)v6 >= 1 )
    {
      v7 = sub_1C32CC8(long___TypeInfo, (unsigned int)v6);
      v8 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v4,
                 v8,
                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        script = System_Convert__ToInt64(Item, 0);
        if ( !v7 )
          break;
        if ( v8 >= *(unsigned int *)(v7 + 24) )
          goto LABEL_22;
        *(_QWORD *)(v7 + 32 + 8 * v8++) = script;
        if ( v6 == v8 )
          return (System_Int64_array *)v7;
      }
LABEL_21:
      sub_1C32E7C(script);
    }
  }
  script = sub_1C32CC8(long___TypeInfo, 1);
  if ( !script )
    goto LABEL_21;
  v7 = script;
  if ( !*(_DWORD *)(script + 24) )
LABEL_22:
    sub_1C32E84(script);
  *(_QWORD *)(script + 32) = this->fields.maxHp;
  return (System_Int64_array *)v7;
}


UserSuperBossEntity_o *EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  UserSuperBossEntity_o *result; // x0
  UserSuperBossEntity_o *v5; // x20
  __int64 v6; // d0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C37B3F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UserSuperBossEntity_TypeInfo);
    byte_4C37B3F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
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
         0) )
  {
    return entity;
  }
  v5 = (UserSuperBossEntity_o *)sub_1C32E6C(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v5, 0);
  entity = v5;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  }
  if ( !v5 || (v5->fields.userId = *(_QWORD *)(result[3].fields.userId + 64), (result = entity) == 0) )
LABEL_23:
    sub_1C32E7C(result);
  v6 = *(_QWORD *)&this->fields.eventId;
  entity->fields.damage = 0;
  *(_QWORD *)&result->fields.eventId = v6;
  return result;
}


bool EventSuperBossEntity__InUIDisplayPeriod(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x21
  UserQuestMaster_o *v5; // x20
  NetworkManager_c *v6; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x22
  int64_t userIdNumber; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  int32_t *v12; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v14; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *v20; // x21
  NetworkManager_c *v21; // x0
  struct NetworkManager_StaticFields *v22; // x8
  struct System_Collections_Generic_Dictionary_string__object__o *v23; // x22
  int64_t v24; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  int32_t *v27; // x0
  UserQuestEntity_o *v28; // x0
  UserQuestEntity_o *v29; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v30; // x21
  int32_t v31; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v32; // x19
  __int64 v33; // x2
  __int64 v34; // x3
  EventSuperBossEntity_o *v35; // x0
  const MethodInfo *v36; // x1

  if ( (byte_4C37B41 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&EventSuperBossEntity_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C37B41 = 1;
  }
  if ( !this->fields.script )
    goto LABEL_63;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v5 = (UserQuestMaster_o *)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !script )
    goto LABEL_65;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  static_fields = v6->static_fields;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v8 = this->fields.script;
  userIdNumber = static_fields->userIdNumber;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v8 )
    goto LABEL_65;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v8,
                                (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v5 || !Instance )
    goto LABEL_65;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_66;
  v12 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v10, v11);
  EntityFromId = UserQuestMaster__getEntityFromId(v5, userIdNumber, *v12, 0);
  if ( !EntityFromId )
    goto LABEL_34;
  v14 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v15 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v15 )
    goto LABEL_65;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v15,
         (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v14->fields.questPhase;
    v17 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( !v17 )
      goto LABEL_65;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v17,
                                  (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_65;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_66;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v18, v19) )
      goto LABEL_61;
    goto LABEL_34;
  }
  if ( v14->fields.clearNum <= 0 )
  {
LABEL_34:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v20 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( v20 )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v20,
              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_63;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      v21 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v21 = NetworkManager_TypeInfo;
      }
      v22 = v21->static_fields;
      Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
      v23 = this->fields.script;
      v24 = v22->userIdNumber;
      if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      if ( v23 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v23,
                                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v5 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_66;
            v27 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v25, v26);
            v28 = UserQuestMaster__getEntityFromId(v5, v24, *v27, 0);
            if ( !v28 )
              return (char)v28;
            v29 = v28;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v30 = this->fields.script;
            if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            if ( v30 )
            {
              if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                      (System_Collections_Generic_Dictionary_object__object__o *)v30,
                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v29->fields.clearNum )
                  goto LABEL_61;
                goto LABEL_63;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v31 = v29->fields.questPhase;
              v32 = this->fields.script;
              if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              if ( v32 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)v32,
                                              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v31 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v33, v34) )
                      goto LABEL_61;
LABEL_63:
                    LOBYTE(v28) = 1;
                    return (char)v28;
                  }
LABEL_66:
                  sub_1C3313C(Instance);
                  LOBYTE(v28) = EventSuperBossEntity__IsCleard(v35, v36);
                  return (char)v28;
                }
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_1C32E7C(Instance);
  }
LABEL_61:
  LOBYTE(v28) = 0;
  return (char)v28;
}


bool EventSuperBossEntity__IsCleard(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  UserSuperBossEntity_o *UserSuperBossEntity; // x0

  UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(this, method);
  if ( UserSuperBossEntity )
    LOBYTE(UserSuperBossEntity) = UserSuperBossEntity->fields.damage >= this->fields.maxHp;
  return (char)UserSuperBossEntity;
}


bool EventSuperBossEntity__IsEncounted(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  int i; // w22
  EventSuperBossMaster_c *v10; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v12; // x21
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  clsQuestCheck_o *Int; // x0
  struct System_Int32_array *splitQuestIds; // x8
  Il2CppObject *Master_object; // x20
  struct System_Int32_array *v25; // x8
  struct System_Int32_array *v27; // x8
  int v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C37B40 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&EventSuperBossMaster_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C37B40 = 1;
  }
  if ( EventSuperBossEntity__InUIDisplayPeriod(this, method) )
  {
    for ( i = 0; ; ++i )
    {
      v10 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v10 = EventSuperBossMaster_TypeInfo;
      }
      SAVE_KEY = v10->static_fields->SAVE_KEY;
      eventId = this->fields.eventId;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v3, v4, v5, v6, v7, v8);
      v28 = i;
      v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v13, v14, v15, v16, v17, v18);
      v20 = System_String__Format_63559836(SAVE_KEY, v12, v19, 0);
      Int = (clsQuestCheck_o *)UnityEngine_PlayerPrefs__GetInt(v20, 0, 0);
      if ( !(_DWORD)Int )
        break;
      if ( (_DWORD)Int == this->fields.id )
        return 1;
    }
    splitQuestIds = this->fields.splitQuestIds;
    if ( splitQuestIds )
    {
      if ( !splitQuestIds->max_length )
        return 1;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4C31812 )
      {
        sub_1C32C20(&NetworkManager_TypeInfo);
        byte_4C31812 = 1;
      }
      Int = (clsQuestCheck_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Int = (clsQuestCheck_o *)NetworkManager_TypeInfo;
      }
      v25 = this->fields.splitQuestIds;
      if ( v25 )
      {
        if ( !LODWORD(v25->max_length) )
          goto LABEL_32;
        if ( Master_object )
        {
          if ( UserQuestMaster__getChallengeCountsFromId(
                 (UserQuestMaster_o *)Master_object,
                 *(_QWORD *)&Int[5].fields.cQuestReleaseListP[1].fields._size,
                 v25->m_Items[0],
                 0) > 0 )
            return 1;
          Int = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39E2DF4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v27 = this->fields.splitQuestIds;
          if ( v27 )
          {
            if ( LODWORD(v27->max_length) )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease(Int, v27->m_Items[0], -1, 0, 0);
              goto LABEL_31;
            }
LABEL_32:
            sub_1C32E84(Int);
          }
        }
      }
    }
LABEL_31:
    sub_1C32E7C(Int);
  }
  return 0;
}


bool EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x19
  __int64 v6; // x2
  __int64 v7; // x3
  EventSuperBossEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  if ( (byte_4C37B42 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&EventSuperBossEntity_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    byte_4C37B42 = 1;
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
          (const MethodInfo_3458FBC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v5 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v5
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v5,
                 (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_14:
    sub_1C32E7C(Item);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7) == 1;
  sub_1C3313C(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v9, v10);
}