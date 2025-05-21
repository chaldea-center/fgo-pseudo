void __fastcall EventSuperBossEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  struct EventSuperBossEntity_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct EventSuperBossEntity_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct EventSuperBossEntity_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct EventSuperBossEntity_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B44BF1 & 1) == 0 )
  {
    sub_1BDB878(&EventSuperBossEntity_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_24336/*"ui_start_quest_phase"*/, v4);
    sub_1BDB878(&StringLiteral_24333/*"ui_end_quest_phase"*/, v5);
    sub_1BDB878(&StringLiteral_24332/*"ui_end_quest_id"*/, v6);
    sub_1BDB878(&StringLiteral_24334/*"ui_hidden"*/, v7);
    sub_1BDB878(&StringLiteral_24335/*"ui_start_quest_id"*/, v8);
    byte_4B44BF1 = 1;
  }
  EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24335/*"ui_start_quest_id"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)EventSuperBossEntity_TypeInfo->static_fields, StringLiteral_24335/*"ui_start_quest_id"*/, v2, v3);
  v9 = StringLiteral_24336/*"ui_start_quest_phase"*/;
  static_fields = EventSuperBossEntity_TypeInfo->static_fields;
  static_fields->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24336/*"ui_start_quest_phase"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->UI_START_QUEST_PHASE_KEY, v9, v11, v12);
  v13 = StringLiteral_24332/*"ui_end_quest_id"*/;
  v14 = EventSuperBossEntity_TypeInfo->static_fields;
  v14->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24332/*"ui_end_quest_id"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v14->UI_END_QUEST_ID_KEY, v13, v15, v16);
  v17 = StringLiteral_24333/*"ui_end_quest_phase"*/;
  v18 = EventSuperBossEntity_TypeInfo->static_fields;
  v18->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24333/*"ui_end_quest_phase"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v18->UI_END_QUEST_PHASE_KEY, v17, v19, v20);
  v21 = StringLiteral_24334/*"ui_hidden"*/;
  v22 = EventSuperBossEntity_TypeInfo->static_fields;
  v22->UI_HIDDEN = (struct System_String_o *)StringLiteral_24334/*"ui_hidden"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v22->UI_HIDDEN, v21, v23, v24);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44BF0 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44BF0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4B44BEA & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_4B44BEA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_4B44BE9 & 1) == 0 )
  {
    sub_1BDB878(&EventSuperBossEntity_TypeInfo, method);
    byte_4B44BE9 = 1;
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
  __int64 v5; // x2
  struct System_Int64_array *splitHp; // x8
  int max_length; // w9
  int64_t damage; // x10

  UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(this, method);
  if ( UserSuperBossEntity )
  {
    splitHp = this->fields.splitHp;
    if ( !splitHp )
      sub_1BDBAD4(UserSuperBossEntity, v4);
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
          sub_1BDBADC(UserSuperBossEntity, v4, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 script; // x0
  System_Collections_Generic_List_object__o *v11; // x20
  __int64 methodPtr_low; // x9
  __int64 v13; // x22
  System_Int64_array *v14; // x21
  unsigned __int64 v15; // x19
  Il2CppObject *Item; // x23
  __int64 v17; // x2
  System_Int64_array *result; // x0
  EventSuperBossEntity_o *v19; // x0
  const MethodInfo *v20; // x1

  if ( (byte_4B44BEF & 1) == 0 )
  {
    sub_1BDB878(&System_Convert_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BDB878(&long___TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__get_Count__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__get_Item__, v7);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BDB878(&StringLiteral_17427/*"breakGaugeHp"*/, v9);
    byte_4B44BEF = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17427/*"breakGaugeHp"*/,
         (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_21;
    script = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)script,
                        (Il2CppObject *)StringLiteral_17427/*"breakGaugeHp"*/,
                        (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_21;
    v11 = (System_Collections_Generic_List_object__o *)script;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1BDBD94(script);
      EventSuperBossEntity___ctor(v19, v20);
      return result;
    }
    v13 = *(unsigned int *)(script + 24);
    if ( (int)v13 >= 1 )
    {
      v14 = (System_Int64_array *)sub_1BDB920(long___TypeInfo, (unsigned int)v13);
      v15 = 0LL;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v15,
                 (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !System_Convert_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        script = System_Convert__ToInt64(Item, 0LL);
        if ( !v14 )
          break;
        if ( v15 >= v14->max_length )
          goto LABEL_22;
        v14->m_Items[v15++] = script;
        if ( v13 == v15 )
          return v14;
      }
LABEL_21:
      sub_1BDBAD4(script, method);
    }
  }
  script = sub_1BDB920(long___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_21;
  v14 = (System_Int64_array *)script;
  if ( !*(_DWORD *)(script + 24) )
LABEL_22:
    sub_1BDBADC(script, method, v17);
  *(_QWORD *)(script + 32) = this->fields.maxHp;
  return v14;
}


UserSuperBossEntity_o *__fastcall EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x20
  UserSuperBossEntity_o *result; // x0
  UserSuperBossEntity_o *v9; // x20
  __int64 v10; // d0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B44BEB & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserSuperBossMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&NetworkManager_TypeInfo, v4);
    sub_1BDB878(&UserSuperBossEntity_TypeInfo, v5);
    byte_4B44BEB = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v6);
    byte_4B3ED56 = 1;
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
  v9 = (UserSuperBossEntity_o *)sub_1BDBAC4(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v9, 0LL);
  entity = v9;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v6);
    byte_4B3ED56 = 1;
  }
  result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  }
  if ( !v9 || (v9->fields.userId = *(_QWORD *)(result[3].fields.userId + 64), (result = entity) == 0LL) )
LABEL_23:
    sub_1BDBAD4(result, v6);
  v10 = *(_QWORD *)&this->fields.eventId;
  entity->fields.damage = 0LL;
  *(_QWORD *)&result->fields.eventId = v10;
  return result;
}


bool __fastcall EventSuperBossEntity__InUIDisplayPeriod(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x21
  UserQuestMaster_o *v12; // x20
  NetworkManager_c *v13; // x0
  struct NetworkManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x22
  int64_t userIdNumber; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  int32_t *v19; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v21; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v22; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v24; // x21
  __int64 v25; // x2
  __int64 v26; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *v27; // x21
  NetworkManager_c *v28; // x0
  struct NetworkManager_StaticFields *v29; // x8
  struct System_Collections_Generic_Dictionary_string__object__o *v30; // x22
  int64_t v31; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  int32_t *v34; // x0
  UserQuestEntity_o *v35; // x0
  UserQuestEntity_o *v36; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v37; // x21
  int32_t v38; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v39; // x19
  __int64 v40; // x2
  __int64 v41; // x3
  EventSuperBossEntity_o *v42; // x0
  const MethodInfo *v43; // x1

  if ( (byte_4B44BED & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1BDB878(&EventSuperBossEntity_TypeInfo, v5);
    sub_1BDB878(&long_TypeInfo, v6);
    sub_1BDB878(&NetworkManager_TypeInfo, v7);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4B44BED = 1;
  }
  if ( !this->fields.script )
    goto LABEL_63;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v12 = (UserQuestMaster_o *)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !script )
    goto LABEL_65;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
          (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    byte_4B3ED56 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v15 = this->fields.script;
  userIdNumber = static_fields->userIdNumber;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v15 )
    goto LABEL_65;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v15,
                                (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v12 || !Instance )
    goto LABEL_65;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_66;
  v19 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v17, v18);
  EntityFromId = UserQuestMaster__getEntityFromId(v12, userIdNumber, *v19, 0LL);
  if ( !EntityFromId )
    goto LABEL_34;
  v21 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v22 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v22 )
    goto LABEL_65;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v22,
         (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v21->fields.questPhase;
    v24 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( !v24 )
      goto LABEL_65;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v24,
                                  (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_65;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_66;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v25, v26) )
      goto LABEL_61;
    goto LABEL_34;
  }
  if ( v21->fields.clearNum <= 0 )
  {
LABEL_34:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v27 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( v27 )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v27,
              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_63;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v10);
        byte_4B3ED56 = 1;
      }
      v28 = NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        v28 = NetworkManager_TypeInfo;
      }
      v29 = v28->static_fields;
      Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
      v30 = this->fields.script;
      v31 = v29->userIdNumber;
      if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      if ( v30 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v30,
                                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v12 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_66;
            v34 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v32, v33);
            v35 = UserQuestMaster__getEntityFromId(v12, v31, *v34, 0LL);
            if ( !v35 )
              return (char)v35;
            v36 = v35;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v37 = this->fields.script;
            if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            if ( v37 )
            {
              if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                      (System_Collections_Generic_Dictionary_object__object__o *)v37,
                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v36->fields.clearNum )
                  goto LABEL_61;
                goto LABEL_63;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v38 = v36->fields.questPhase;
              v39 = this->fields.script;
              if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              if ( v39 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)v39,
                                              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v38 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v40, v41) )
                      goto LABEL_61;
LABEL_63:
                    LOBYTE(v35) = 1;
                    return (char)v35;
                  }
LABEL_66:
                  sub_1BDBD94(Instance);
                  LOBYTE(v35) = EventSuperBossEntity__IsCleard(v42, v43);
                  return (char)v35;
                }
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_1BDBAD4(Instance, v10);
  }
LABEL_61:
  LOBYTE(v35) = 0;
  return (char)v35;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  int i; // w22
  EventSuperBossMaster_c *v12; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x0
  clsQuestCheck_o *Int; // x0
  __int64 v21; // x1
  struct System_Int32_array *splitQuestIds; // x8
  __int64 v24; // x2
  Il2CppObject *Master_object; // x20
  struct System_Int32_array *v26; // x8
  struct System_Int32_array *v28; // x8
  int v29; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B44BEC & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserQuestMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&EventSuperBossMaster_TypeInfo, v4);
    sub_1BDB878(&int_TypeInfo, v5);
    sub_1BDB878(&NetworkManager_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    byte_4B44BEC = 1;
  }
  if ( EventSuperBossEntity__InUIDisplayPeriod(this, method) )
  {
    for ( i = 0; ; ++i )
    {
      v12 = EventSuperBossMaster_TypeInfo;
      if ( !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v12 = EventSuperBossMaster_TypeInfo;
      }
      SAVE_KEY = v12->static_fields->SAVE_KEY;
      eventId = this->fields.eventId;
      v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v8, v9, v10);
      v29 = i;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29, v15, v16, v17);
      v19 = System_String__Format_62613552(SAVE_KEY, v14, v18, 0LL);
      Int = (clsQuestCheck_o *)UnityEngine_PlayerPrefs__GetInt(v19, 0, 0LL);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      if ( !byte_4B3ED56 )
      {
        sub_1BDB878(&NetworkManager_TypeInfo, v21);
        byte_4B3ED56 = 1;
      }
      Int = (clsQuestCheck_o *)NetworkManager_TypeInfo;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Int = (clsQuestCheck_o *)NetworkManager_TypeInfo;
      }
      v26 = this->fields.splitQuestIds;
      if ( v26 )
      {
        if ( !v26->max_length )
          goto LABEL_32;
        if ( Master_object )
        {
          if ( UserQuestMaster__getChallengeCountsFromId(
                 (UserQuestMaster_o *)Master_object,
                 *(_QWORD *)&Int[5].fields.cQuestReleaseListP[1].fields._size,
                 v26->m_Items[1],
                 0LL) > 0 )
            return 1;
          Int = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39166A8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v28 = this->fields.splitQuestIds;
          if ( v28 )
          {
            if ( v28->max_length )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease(Int, v28->m_Items[1], -1, 0, 0LL);
              goto LABEL_31;
            }
LABEL_32:
            sub_1BDBADC(Int, v21, v24);
          }
        }
      }
    }
LABEL_31:
    sub_1BDBAD4(Int, v21);
  }
  return 0;
}


bool __fastcall EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  __int64 v9; // x2
  __int64 v10; // x3
  EventSuperBossEntity_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_4B44BEE & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1BDB878(&EventSuperBossEntity_TypeInfo, v4);
    sub_1BDB878(&long_TypeInfo, v5);
    byte_4B44BEE = 1;
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
          (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v8 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v8
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v8,
                 (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_1BDBAD4(Item, method);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10) == 1LL;
  sub_1BDBD94(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v12, v13);
}