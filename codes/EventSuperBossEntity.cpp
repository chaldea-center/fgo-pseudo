void __fastcall EventSuperBossEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct EventSuperBossEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct EventSuperBossEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct EventSuperBossEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  struct EventSuperBossEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5B2E1 & 1) == 0 )
  {
    sub_1B885B0(&EventSuperBossEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_24146/*"ui_start_quest_phase"*/);
    sub_1B885B0(&StringLiteral_24143/*"ui_end_quest_phase"*/);
    sub_1B885B0(&StringLiteral_24142/*"ui_end_quest_id"*/);
    sub_1B885B0(&StringLiteral_24144/*"ui_hidden"*/);
    sub_1B885B0(&StringLiteral_24145/*"ui_start_quest_id"*/);
    byte_4A5B2E1 = 1;
  }
  EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24145/*"ui_start_quest_id"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EventSuperBossEntity_TypeInfo->static_fields,
    StringLiteral_24145/*"ui_start_quest_id"*/,
    v1,
    v2);
  v3 = StringLiteral_24146/*"ui_start_quest_phase"*/;
  static_fields = EventSuperBossEntity_TypeInfo->static_fields;
  static_fields->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24146/*"ui_start_quest_phase"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->UI_START_QUEST_PHASE_KEY, v3, v5, v6);
  v7 = StringLiteral_24142/*"ui_end_quest_id"*/;
  v8 = EventSuperBossEntity_TypeInfo->static_fields;
  v8->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_24142/*"ui_end_quest_id"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->UI_END_QUEST_ID_KEY, v7, v9, v10);
  v11 = StringLiteral_24143/*"ui_end_quest_phase"*/;
  v12 = EventSuperBossEntity_TypeInfo->static_fields;
  v12->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_24143/*"ui_end_quest_phase"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->UI_END_QUEST_PHASE_KEY, v11, v13, v14);
  v15 = StringLiteral_24144/*"ui_hidden"*/;
  v16 = EventSuperBossEntity_TypeInfo->static_fields;
  v16->UI_HIDDEN = (struct System_String_o *)StringLiteral_24144/*"ui_hidden"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->UI_HIDDEN, v15, v17, v18);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5B2E0 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5B2E0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_4A5B2DA & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5B2DA = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_4A5B2D9 & 1) == 0 )
  {
    sub_1B885B0(&EventSuperBossEntity_TypeInfo);
    byte_4A5B2D9 = 1;
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
      sub_1B8880C(UserSuperBossEntity, v4);
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
          sub_1B88814(UserSuperBossEntity, v4);
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

  if ( (byte_4A5B2DF & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&StringLiteral_17442/*"breakGaugeHp"*/);
    byte_4A5B2DF = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17442/*"breakGaugeHp"*/,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_21;
    script = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)script,
                        (Il2CppObject *)StringLiteral_17442/*"breakGaugeHp"*/,
                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_21;
    v4 = (System_Collections_Generic_List_object__o *)script;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B88ACC(script);
      EventSuperBossEntity___ctor(v11, v12);
      return result;
    }
    v6 = *(unsigned int *)(script + 24);
    if ( (int)v6 >= 1 )
    {
      v7 = (System_Int64_array *)sub_1B88658(long___TypeInfo, (unsigned int)v6);
      v8 = 0LL;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v4,
                 v8,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
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
      sub_1B8880C(script, method);
    }
  }
  script = sub_1B88658(long___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_21;
  v7 = (System_Int64_array *)script;
  if ( !*(_DWORD *)(script + 24) )
LABEL_22:
    sub_1B88814(script, method);
  *(_QWORD *)(script + 32) = this->fields.maxHp;
  return v7;
}


UserSuperBossEntity_o *__fastcall EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  UserSuperBossEntity_o *result; // x0
  __int64 v5; // x1
  UserSuperBossEntity_o *v6; // x20
  __int64 v7; // d0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B2DB & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UserSuperBossEntity_TypeInfo);
    byte_4A5B2DB = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  v6 = (UserSuperBossEntity_o *)sub_1B887FC(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v6, 0LL);
  entity = v6;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  result = (UserSuperBossEntity_o *)NetworkManager__get_UserId(0LL);
  if ( !v6 || (v6->fields.userId = (int64_t)result, (result = entity) == 0LL) )
LABEL_16:
    sub_1B8880C(result, v5);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x22
  int64_t v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  int32_t *v11; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v13; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *v19; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v20; // x22
  int64_t v21; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  int32_t *v24; // x0
  UserQuestEntity_o *v25; // x0
  UserQuestEntity_o *v26; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v27; // x21
  int32_t v28; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v29; // x19
  __int64 v30; // x2
  __int64 v31; // x3
  EventSuperBossEntity_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_4A5B2DD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&EventSuperBossEntity_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5B2DD = 1;
  }
  if ( !this->fields.script )
    goto LABEL_55;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v6 = (UserQuestMaster_o *)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !script )
    goto LABEL_57;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_30;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v7 = this->fields.script;
  v8 = (int64_t)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v7 )
    goto LABEL_57;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v6 || !Instance )
    goto LABEL_57;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_58;
  v11 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v9, v10);
  EntityFromId = UserQuestMaster__getEntityFromId(v6, v8, *v11, 0LL);
  if ( !EntityFromId )
    goto LABEL_30;
  v13 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v14 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v14 )
    goto LABEL_57;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v14,
         (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v13->fields.questPhase;
    v16 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( !v16 )
      goto LABEL_57;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v16,
                                  (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_58;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v17, v18) )
      goto LABEL_53;
    goto LABEL_30;
  }
  if ( v13->fields.clearNum <= 0 )
  {
LABEL_30:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v19 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( v19 )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v19,
              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_55;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v20 = this->fields.script;
      v21 = (int64_t)Instance;
      if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      if ( v20 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v20,
                                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v6 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_58;
            v24 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v22, v23);
            v25 = UserQuestMaster__getEntityFromId(v6, v21, *v24, 0LL);
            if ( !v25 )
              return (char)v25;
            v26 = v25;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v27 = this->fields.script;
            if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            if ( v27 )
            {
              if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                      (System_Collections_Generic_Dictionary_object__object__o *)v27,
                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v26->fields.clearNum )
                  goto LABEL_53;
                goto LABEL_55;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v28 = v26->fields.questPhase;
              v29 = this->fields.script;
              if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              if ( v29 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)v29,
                                              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v28 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v30, v31) )
                      goto LABEL_53;
LABEL_55:
                    LOBYTE(v25) = 1;
                    return (char)v25;
                  }
LABEL_58:
                  sub_1B88ACC(Instance);
                  LOBYTE(v25) = EventSuperBossEntity__IsCleard(v32, v33);
                  return (char)v25;
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_1B8880C(Instance, v4);
  }
LABEL_53:
  LOBYTE(v25) = 0;
  return (char)v25;
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
  int64_t Int; // x0
  __int64 v16; // x1
  struct System_Int32_array *splitQuestIds; // x8
  Il2CppObject *Master_object; // x20
  struct System_Int32_array *v20; // x8
  struct System_Int32_array *v22; // x8
  int v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5B2DC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&EventSuperBossMaster_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4A5B2DC = 1;
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
      v14 = System_String__Format_61721404(SAVE_KEY, v9, v13, 0LL);
      Int = UnityEngine_PlayerPrefs__GetInt(v14, 0, 0LL);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Int = NetworkManager__get_UserId(0LL);
      v20 = this->fields.splitQuestIds;
      if ( v20 )
      {
        if ( !v20->max_length )
          goto LABEL_28;
        if ( Master_object )
        {
          if ( UserQuestMaster__getChallengeCountsFromId((UserQuestMaster_o *)Master_object, Int, v20->m_Items[1], 0LL) > 0 )
            return 1;
          Int = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v22 = this->fields.splitQuestIds;
          if ( v22 )
          {
            if ( v22->max_length )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Int, v22->m_Items[1], -1, 0, 0LL);
              goto LABEL_27;
            }
LABEL_28:
            sub_1B88814(Int, v16);
          }
        }
      }
    }
LABEL_27:
    sub_1B8880C(Int, v16);
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

  if ( (byte_4A5B2DE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&EventSuperBossEntity_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    byte_4A5B2DE = 1;
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
          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v5 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v5
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v5,
                 (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_1B8880C(Item, method);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v6, v7) == 1LL;
  sub_1B88ACC(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v9, v10);
}