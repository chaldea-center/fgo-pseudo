void __fastcall EventSuperBossEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  struct EventSuperBossEntity_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  struct EventSuperBossEntity_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w1
  struct EventSuperBossEntity_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  struct EventSuperBossEntity_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_48E298B & 1) == 0 )
  {
    sub_1B00CCC(&EventSuperBossEntity_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_23791/*"ui_start_quest_phase"*/, v4);
    sub_1B00CCC(&StringLiteral_23788/*"ui_end_quest_phase"*/, v5);
    sub_1B00CCC(&StringLiteral_23787/*"ui_end_quest_id"*/, v6);
    sub_1B00CCC(&StringLiteral_23789/*"ui_hidden"*/, v7);
    sub_1B00CCC(&StringLiteral_23790/*"ui_start_quest_id"*/, v8);
    byte_48E298B = 1;
  }
  EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_23790/*"ui_start_quest_id"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)EventSuperBossEntity_TypeInfo->static_fields,
    StringLiteral_23790/*"ui_start_quest_id"*/,
    v2,
    v3);
  v9 = StringLiteral_23791/*"ui_start_quest_phase"*/;
  static_fields = EventSuperBossEntity_TypeInfo->static_fields;
  static_fields->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_23791/*"ui_start_quest_phase"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->UI_START_QUEST_PHASE_KEY, v9, v11, v12);
  v13 = StringLiteral_23787/*"ui_end_quest_id"*/;
  v14 = EventSuperBossEntity_TypeInfo->static_fields;
  v14->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_23787/*"ui_end_quest_id"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->UI_END_QUEST_ID_KEY, v13, v15, v16);
  v17 = StringLiteral_23788/*"ui_end_quest_phase"*/;
  v18 = EventSuperBossEntity_TypeInfo->static_fields;
  v18->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_23788/*"ui_end_quest_phase"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v18->UI_END_QUEST_PHASE_KEY, v17, v19, v20);
  v21 = StringLiteral_23789/*"ui_hidden"*/;
  v22 = EventSuperBossEntity_TypeInfo->static_fields;
  v22->UI_HIDDEN = (struct System_String_o *)StringLiteral_23789/*"ui_hidden"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v22->UI_HIDDEN, v21, v23, v24);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_48E298A & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_string___ctor__, method);
    byte_48E298A = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_2FE68C4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_48E2984 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_48E2984 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_2D60E34 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_48E2983 & 1) == 0 )
  {
    sub_1B00CCC(&EventSuperBossEntity_TypeInfo, method);
    byte_48E2983 = 1;
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
      sub_1B00F28(UserSuperBossEntity, v4);
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
          sub_1B00F30(UserSuperBossEntity, v4);
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
  System_Int64_array *result; // x0
  EventSuperBossEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_48E2989 & 1) == 0 )
  {
    sub_1B00CCC(&System_Convert_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B00CCC(&long___TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Count__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_object__get_Item__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B00CCC(&StringLiteral_17204/*"breakGaugeHp"*/, v9);
    byte_48E2989 = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_17204/*"breakGaugeHp"*/,
         (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_21;
    script = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)script,
                        (Il2CppObject *)StringLiteral_17204/*"breakGaugeHp"*/,
                        (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_21;
    v11 = (System_Collections_Generic_List_object__o *)script;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * methodPtr_low - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_1B011E8(script);
      EventSuperBossEntity___ctor(v18, v19);
      return result;
    }
    v13 = *(unsigned int *)(script + 24);
    if ( (int)v13 >= 1 )
    {
      v14 = (System_Int64_array *)sub_1B00D74(long___TypeInfo, (unsigned int)v13);
      v15 = 0LL;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v15,
                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_object__get_Item__);
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
      sub_1B00F28(script, method);
    }
  }
  script = sub_1B00D74(long___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_21;
  v14 = (System_Int64_array *)script;
  if ( !*(_DWORD *)(script + 24) )
LABEL_22:
    sub_1B00F30(script, method);
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
  Il2CppObject *Master_object; // x20
  UserSuperBossEntity_o *result; // x0
  __int64 v8; // x1
  UserSuperBossEntity_o *v9; // x20
  __int64 v10; // d0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E2985 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_UserSuperBossMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    sub_1B00CCC(&NetworkManager_TypeInfo, v4);
    sub_1B00CCC(&UserSuperBossEntity_TypeInfo, v5);
    byte_48E2985 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserSuperBossMaster___);
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
  v9 = (UserSuperBossEntity_o *)sub_1B00F18(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v9, 0LL);
  entity = v9;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  result = (UserSuperBossEntity_o *)NetworkManager__get_UserId(0LL);
  if ( !v9 || (v9->fields.userId = (int64_t)result, (result = entity) == 0LL) )
LABEL_16:
    sub_1B00F28(result, v8);
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
  struct System_Collections_Generic_Dictionary_string__object__o *v13; // x22
  int64_t v14; // x21
  __int64 v15; // x2
  __int64 v16; // x3
  int32_t *v17; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v19; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v20; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v22; // x21
  __int64 v23; // x2
  __int64 v24; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *v25; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v26; // x22
  int64_t v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  int32_t *v30; // x0
  UserQuestEntity_o *v31; // x0
  UserQuestEntity_o *v32; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v33; // x21
  int32_t v34; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v35; // x19
  __int64 v36; // x2
  __int64 v37; // x3
  EventSuperBossEntity_o *v38; // x0
  const MethodInfo *v39; // x1

  if ( (byte_48E2987 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_1B00CCC(&EventSuperBossEntity_TypeInfo, v5);
    sub_1B00CCC(&long_TypeInfo, v6);
    sub_1B00CCC(&NetworkManager_TypeInfo, v7);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_48E2987 = 1;
  }
  if ( !this->fields.script )
    goto LABEL_55;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v12 = (UserQuestMaster_o *)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !script )
    goto LABEL_57;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_30;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v13 = this->fields.script;
  v14 = (int64_t)Instance;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v13 )
    goto LABEL_57;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v13,
                                (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v12 || !Instance )
    goto LABEL_57;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_58;
  v17 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v15, v16);
  EntityFromId = UserQuestMaster__getEntityFromId(v12, v14, *v17, 0LL);
  if ( !EntityFromId )
    goto LABEL_30;
  v19 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v20 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v20 )
    goto LABEL_57;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v20,
         (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v19->fields.questPhase;
    v22 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( !v22 )
      goto LABEL_57;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v22,
                                  (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_57;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_58;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v23, v24) )
      goto LABEL_53;
    goto LABEL_30;
  }
  if ( v19->fields.clearNum <= 0 )
  {
LABEL_30:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v25 = this->fields.script;
    if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    if ( v25 )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v25,
              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_55;
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v26 = this->fields.script;
      v27 = (int64_t)Instance;
      if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      if ( v26 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v26,
                                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v12 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_58;
            v30 = (int32_t *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v28, v29);
            v31 = UserQuestMaster__getEntityFromId(v12, v27, *v30, 0LL);
            if ( !v31 )
              return (char)v31;
            v32 = v31;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v33 = this->fields.script;
            if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            if ( v33 )
            {
              if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                      (System_Collections_Generic_Dictionary_object__object__o *)v33,
                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v32->fields.clearNum )
                  goto LABEL_53;
                goto LABEL_55;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v34 = v32->fields.questPhase;
              v35 = this->fields.script;
              if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              if ( v35 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)v35,
                                              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v34 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance, long_TypeInfo, v36, v37) )
                      goto LABEL_53;
LABEL_55:
                    LOBYTE(v31) = 1;
                    return (char)v31;
                  }
LABEL_58:
                  sub_1B011E8(Instance);
                  LOBYTE(v31) = EventSuperBossEntity__IsCleard(v38, v39);
                  return (char)v31;
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_1B00F28(Instance, v10);
  }
LABEL_53:
  LOBYTE(v31) = 0;
  return (char)v31;
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
  int64_t Int; // x0
  __int64 v21; // x1
  struct System_Int32_array *splitQuestIds; // x8
  Il2CppObject *Master_object; // x20
  struct System_Int32_array *v25; // x8
  struct System_Int32_array *v27; // x8
  int v28; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_48E2986 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_UserQuestMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    sub_1B00CCC(&EventSuperBossMaster_TypeInfo, v4);
    sub_1B00CCC(&int_TypeInfo, v5);
    sub_1B00CCC(&NetworkManager_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    byte_48E2986 = 1;
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
      v28 = i;
      v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v15, v16, v17);
      v19 = System_String__Format_60340120(SAVE_KEY, v14, v18, 0LL);
      Int = UnityEngine_PlayerPrefs__GetInt(v19, 0, 0LL);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Int = NetworkManager__get_UserId(0LL);
      v25 = this->fields.splitQuestIds;
      if ( v25 )
      {
        if ( !v25->max_length )
          goto LABEL_28;
        if ( Master_object )
        {
          if ( UserQuestMaster__getChallengeCountsFromId((UserQuestMaster_o *)Master_object, Int, v25->m_Items[1], 0LL) > 0 )
            return 1;
          Int = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v27 = this->fields.splitQuestIds;
          if ( v27 )
          {
            if ( v27->max_length )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Int, v27->m_Items[1], -1, 0, 0LL);
              goto LABEL_27;
            }
LABEL_28:
            sub_1B00F30(Int, v21);
          }
        }
      }
    }
LABEL_27:
    sub_1B00F28(Int, v21);
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

  if ( (byte_48E2988 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_1B00CCC(&EventSuperBossEntity_TypeInfo, v4);
    sub_1B00CCC(&long_TypeInfo, v5);
    byte_48E2988 = 1;
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
          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v8 = this->fields.script;
  if ( !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  if ( !v8
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v8,
                 (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_308D9C8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_14:
    sub_1B00F28(Item, method);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item, long_TypeInfo, v9, v10) == 1LL;
  sub_1B011E8(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v12, v13);
}