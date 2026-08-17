void EventSuperBossEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EventSuperBossEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EventSuperBossEntity_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EventSuperBossEntity_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct EventSuperBossEntity_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_5970AD8 & 1) == 0 )
  {
    sub_2213A60(&EventSuperBossEntity_TypeInfo);
    sub_2213A60(&StringLiteral_25599/*"ui_start_quest_phase"*/);
    sub_2213A60(&StringLiteral_25596/*"ui_end_quest_phase"*/);
    sub_2213A60(&StringLiteral_25595/*"ui_end_quest_id"*/);
    sub_2213A60(&StringLiteral_25597/*"ui_hidden"*/);
    sub_2213A60(&StringLiteral_25598/*"ui_start_quest_id"*/);
    byte_5970AD8 = 1;
  }
  v7 = StringLiteral_25598/*"ui_start_quest_id"*/;
  EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_25598/*"ui_start_quest_id"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)EventSuperBossEntity_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_25599/*"ui_start_quest_phase"*/;
  static_fields = EventSuperBossEntity_TypeInfo->static_fields;
  static_fields->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_25599/*"ui_start_quest_phase"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->UI_START_QUEST_PHASE_KEY,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_25595/*"ui_end_quest_id"*/;
  v17 = EventSuperBossEntity_TypeInfo->static_fields;
  v17->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_25595/*"ui_end_quest_id"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->UI_END_QUEST_ID_KEY, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_25596/*"ui_end_quest_phase"*/;
  v25 = EventSuperBossEntity_TypeInfo->static_fields;
  v25->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_25596/*"ui_end_quest_phase"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->UI_END_QUEST_PHASE_KEY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_25597/*"ui_hidden"*/;
  v33 = EventSuperBossEntity_TypeInfo->static_fields;
  v33->UI_HIDDEN = (struct System_String_o *)StringLiteral_25597/*"ui_hidden"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v33->UI_HIDDEN, v32, v34, v35, v36, v37, v38, v39);
}


void EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5970AD7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_5970AD7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_5970AD1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5970AD1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventSuperBossEntity__CreatePrimaryKey(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_5970AD0 & 1) == 0 )
  {
    sub_2213A60(&EventSuperBossEntity_TypeInfo);
    byte_5970AD0 = 1;
  }
  eventId = this->fields.eventId;
  id = this->fields.id;
  if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, method);
  return EventSuperBossEntity__CreatePK(eventId, id, v2);
}


UnityEngine_Color_o EventSuperBossEntity__GetBossColor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  float v2; // s3
  unsigned __int64 v3; // d0
  float v4; // s2
  float v5; // s1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = 1.0;
  v3 = vdiv_f32(
         vcvt_f32_s32(
           vand_s8(
             vshl_u32(vdup_n_s32(this->fields.bossColor), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL),
             (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x437F0000u)).n64_u64[0];
  v4 = (float)(unsigned __int8)this->fields.bossColor / 255.0;
  v5 = *((float *)&v3 + 1);
  result.fields.r = *(float *)&v3;
  result.fields.a = v2;
  result.fields.b = v4;
  result.fields.g = v5;
  return result;
}


System_Int64_array *EventSuperBossEntity__GetBreakGaugeHpList(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 script; // x0
  __int64 v4; // x2
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 naturalAligment; // x9
  __int64 v7; // x22
  __int64 v8; // x21
  unsigned __int64 v9; // x19
  __int64 v10; // x1
  Il2CppObject *Item; // x23
  unsigned __int64 v12; // x8
  System_Int64_array *result; // x0
  EventSuperBossEntity_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_5970AD6 & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_2213A60(&System_Collections_Generic_List_object__TypeInfo);
    sub_2213A60(&StringLiteral_18170/*"breakGaugeHp"*/);
    byte_5970AD6 = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_21;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)StringLiteral_18170/*"breakGaugeHp"*/,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_21;
    script = (__int64)System_Collections_Generic_Dictionary_object__object___get_Item(
                        (System_Collections_Generic_Dictionary_object__object__o *)script,
                        (Il2CppObject *)StringLiteral_18170/*"breakGaugeHp"*/,
                        (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_21;
    v5 = (System_Collections_Generic_List_object__o *)script;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 304LL) < (unsigned int)naturalAligment
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * naturalAligment - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_221405C(script, System_Collections_Generic_List_object__TypeInfo, v4);
      EventSuperBossEntity___ctor(v14, v15);
      return result;
    }
    v7 = *(unsigned int *)(script + 24);
    if ( (int)v7 >= 1 )
    {
      v8 = sub_2213B20(long___TypeInfo, (unsigned int)v7);
      v9 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v5,
                 v9,
                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_object__get_Item__);
        if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v10);
        script = System_Convert__ToInt64(Item, 0);
        if ( !v8 )
          break;
        if ( v9 >= *(unsigned int *)(v8 + 24) )
          goto LABEL_22;
        v12 = v8 + 8 * v9++;
        *(_QWORD *)(v12 + 32) = script;
        if ( v7 == v9 )
          return (System_Int64_array *)v8;
      }
LABEL_21:
      sub_2213CDC(script, method);
    }
  }
  script = sub_2213B20(long___TypeInfo, 1);
  if ( !script )
    goto LABEL_21;
  v8 = script;
  if ( !*(_DWORD *)(script + 24) )
LABEL_22:
    sub_2213CE4(script);
  *(_QWORD *)(script + 32) = this->fields.maxHp;
  return (System_Int64_array *)v8;
}


UserSuperBossEntity_o *EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  int v3; // w8
  __int64 v4; // x1
  Il2CppObject *Master_object; // x20
  UserSuperBossEntity_o *result; // x0
  UserSuperBossEntity_o *v7; // x20
  int64_t userId; // x8
  __int64 v9; // d0
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5970AD2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&UserSuperBossEntity_TypeInfo);
    byte_5970AD2 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
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
  v7 = (UserSuperBossEntity_o *)sub_2213CCC(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v7, 0);
  entity = v7;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    result = (UserSuperBossEntity_o *)NetworkManager_TypeInfo;
  }
  if ( !v7 || (userId = result[3].fields.userId, result = entity, v7->fields.userId = *(_QWORD *)(userId + 64), !result) )
LABEL_23:
    sub_2213CDC(result, v4);
  v9 = *(_QWORD *)&this->fields.eventId;
  result->fields.damage = 0;
  *(_QWORD *)&result->fields.eventId = v9;
  return result;
}


bool EventSuperBossEntity__InUIDisplayPeriod(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x21
  UserQuestMaster_o *v6; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x22
  int64_t v8; // x21
  __int64 v9; // x2
  __int64 v10; // x1
  int32_t *v11; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v13; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v17; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x22
  int64_t v19; // x21
  int32_t *v20; // x0
  UserQuestEntity_o *v21; // x0
  UserQuestEntity_o *v22; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v23; // x21
  int32_t v24; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v25; // x19
  EventSuperBossEntity_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_5970AD4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&EventSuperBossEntity_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970AD4 = 1;
  }
  if ( !this->fields.script )
    goto LABEL_63;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_65;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v6 = (UserQuestMaster_o *)Instance;
  if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v4);
  if ( !script )
    goto LABEL_65;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_34;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  v7 = this->fields.script;
  v8 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v4);
  if ( !v7 )
    goto LABEL_65;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                (System_Collections_Generic_Dictionary_object__object__o *)v7,
                                (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v6 || !Instance )
    goto LABEL_65;
  v10 = qword_5984368;
  if ( Instance->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
    goto LABEL_66;
  v11 = (int32_t *)j_il2cpp_object_unbox_0(Instance, qword_5984368, v9);
  EntityFromId = UserQuestMaster__getEntityFromId(v6, v8, *v11, 0);
  if ( !EntityFromId )
    goto LABEL_34;
  v13 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v14 = this->fields.script;
  if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v4);
  if ( !v14 )
    goto LABEL_65;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v14,
         (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v13->fields.questPhase;
    v16 = this->fields.script;
    if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v4);
    if ( !v16 )
      goto LABEL_65;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v16,
                                  (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_65;
    v10 = qword_5984368;
    if ( Instance->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
      goto LABEL_66;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance, qword_5984368, v9) )
      goto LABEL_61;
    goto LABEL_34;
  }
  if ( v13->fields.clearNum <= 0 )
  {
LABEL_34:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v17 = this->fields.script;
    if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v4);
    if ( v17 )
    {
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)v17,
              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_63;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
        Instance = (DataManager_o *)NetworkManager_TypeInfo;
      }
      v18 = this->fields.script;
      v19 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
      if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v4);
      if ( v18 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                      (System_Collections_Generic_Dictionary_object__object__o *)v18,
                                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v6 )
        {
          if ( Instance )
          {
            v10 = qword_5984368;
            if ( Instance->klass->_1.element_class != *(Il2CppClass **)(qword_5984368 + 64) )
              goto LABEL_66;
            v20 = (int32_t *)j_il2cpp_object_unbox_0(Instance, qword_5984368, v9);
            v21 = UserQuestMaster__getEntityFromId(v6, v19, *v20, 0);
            if ( !v21 )
              return (char)v21;
            v22 = v21;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v23 = this->fields.script;
            if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v4);
            if ( v23 )
            {
              if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                      (System_Collections_Generic_Dictionary_object__object__o *)v23,
                      (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v22->fields.clearNum )
                  goto LABEL_61;
                goto LABEL_63;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v24 = v22->fields.questPhase;
              v25 = this->fields.script;
              if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, v4);
              if ( v25 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)v25,
                                              (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  v10 = qword_5984368;
                  if ( Instance->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
                  {
                    if ( v24 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance, qword_5984368, v9) )
                      goto LABEL_61;
LABEL_63:
                    LOBYTE(v21) = 1;
                    return (char)v21;
                  }
LABEL_66:
                  sub_221405C(Instance, v10, v9);
                  LOBYTE(v21) = EventSuperBossEntity__IsCleard(v26, v27);
                  return (char)v21;
                }
              }
            }
          }
        }
      }
    }
LABEL_65:
    sub_2213CDC(Instance, v4);
  }
LABEL_61:
  LOBYTE(v21) = 0;
  return (char)v21;
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
  __int64 v3; // x1
  int i; // w24
  EventSuperBossMaster_c *v5; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x0
  clsQuestCheck_o *Int; // x0
  struct System_Int32_array *splitQuestIds; // x8
  Il2CppObject *Master_object; // x20
  struct System_Int32_array *v14; // x8
  struct System_Int32_array *v16; // x8
  int v17; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5970AD3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&EventSuperBossMaster_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_5970AD3 = 1;
  }
  if ( EventSuperBossEntity__InUIDisplayPeriod(this, method) )
  {
    for ( i = 0; ; ++i )
    {
      v5 = EventSuperBossMaster_TypeInfo;
      if ( !*(&EventSuperBossMaster_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo, v3);
        v5 = EventSuperBossMaster_TypeInfo;
      }
      SAVE_KEY = v5->static_fields->SAVE_KEY;
      eventId = this->fields.eventId;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &eventId);
      v17 = i;
      v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v17);
      v9 = System_String__Format_75697880(SAVE_KEY, v7, v8, 0);
      Int = (clsQuestCheck_o *)UnityEngine_PlayerPrefs__GetInt(v9, 0, 0);
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
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
      if ( !byte_5969EF2 )
      {
        sub_2213A60(&NetworkManager_TypeInfo);
        byte_5969EF2 = 1;
      }
      Int = (clsQuestCheck_o *)NetworkManager_TypeInfo;
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v3);
        Int = (clsQuestCheck_o *)NetworkManager_TypeInfo;
      }
      v14 = this->fields.splitQuestIds;
      if ( v14 )
      {
        if ( !LODWORD(v14->max_length) )
          goto LABEL_32;
        if ( Master_object )
        {
          if ( UserQuestMaster__getChallengeCountsFromId(
                 (UserQuestMaster_o *)Master_object,
                 *(_QWORD *)&Int[5].fields.cQuestReleaseListP[1].fields._size,
                 v14->m_Items[0],
                 0) > 0 )
            return 1;
          Int = (clsQuestCheck_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v16 = this->fields.splitQuestIds;
          if ( v16 )
          {
            if ( LODWORD(v16->max_length) )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease(Int, v16->m_Items[0], -1, 0, 0);
              goto LABEL_31;
            }
LABEL_32:
            sub_2213CE4(Int);
          }
        }
      }
    }
LABEL_31:
    sub_2213CDC(Int, v3);
  }
  return 0;
}


bool EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x19
  __int64 v6; // x2
  EventSuperBossEntity_o *v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_5970AD5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_2213A60(&EventSuperBossEntity_TypeInfo);
    byte_5970AD5 = 1;
  }
  Item = EventSuperBossEntity_TypeInfo;
  script = this->fields.script;
  if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, method);
  if ( !script )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v5 = this->fields.script;
  if ( !*(&EventSuperBossEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo, method);
  if ( !v5
    || (Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 (System_Collections_Generic_Dictionary_object__object__o *)v5,
                 (Il2CppObject *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0 )
  {
LABEL_14:
    sub_2213CDC(Item, method);
  }
  if ( *(_QWORD *)(*(_QWORD *)Item + 64LL) == *(_QWORD *)(qword_5984368 + 64) )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item, qword_5984368, v6) == 1;
  sub_221405C(Item, qword_5984368, v6);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v8, v9);
}