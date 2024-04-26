void __fastcall EventSuperBossEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct EventSuperBossEntity_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct EventSuperBossEntity_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct EventSuperBossEntity_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct EventSuperBossEntity_StaticFields *v33; // x0
  System_Int32_array **v34; // x1
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_43556B7 & 1) == 0 )
  {
    sub_B70694(&EventSuperBossEntity_TypeInfo);
    sub_B70694(&StringLiteral_23249/*"ui_start_quest_phase"*/);
    sub_B70694(&StringLiteral_23246/*"ui_end_quest_phase"*/);
    sub_B70694(&StringLiteral_23245/*"ui_end_quest_id"*/);
    sub_B70694(&StringLiteral_23247/*"ui_hidden"*/);
    sub_B70694(&StringLiteral_23248/*"ui_start_quest_id"*/);
    byte_43556B7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_23248/*"ui_start_quest_id"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23248/*"ui_start_quest_id"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = EventSuperBossEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_23249/*"ui_start_quest_phase"*/;
  v9->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_23249/*"ui_start_quest_phase"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->UI_START_QUEST_PHASE_KEY, v10, v11, v12, v13, v14, v15, v16);
  v17 = EventSuperBossEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_23245/*"ui_end_quest_id"*/;
  v17->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_23245/*"ui_end_quest_id"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->UI_END_QUEST_ID_KEY, v18, v19, v20, v21, v22, v23, v24);
  v25 = EventSuperBossEntity_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_23246/*"ui_end_quest_phase"*/;
  v25->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_23246/*"ui_end_quest_phase"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->UI_END_QUEST_PHASE_KEY, v26, v27, v28, v29, v30, v31, v32);
  v33 = EventSuperBossEntity_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_23247/*"ui_hidden"*/;
  v33->UI_HIDDEN = (struct System_String_o *)StringLiteral_23247/*"ui_hidden"*/;
  sub_B70630((BattleServantConfConponent_o *)&v33->UI_HIDDEN, v34, v35, v36, v37, v38, v39, v40);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43556B6 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_string___ctor__);
    byte_43556B6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21C038C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_43556B0 & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_43556B0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_1CA236C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_43556AF & 1) == 0 )
  {
    sub_B70694(&EventSuperBossEntity_TypeInfo);
    byte_43556AF = 1;
  }
  eventId = this->fields.eventId;
  id = this->fields.id;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  return EventSuperBossEntity__CreatePK(eventId, id, v2);
}


int32_t __fastcall EventSuperBossEntity__DamageProgressNum(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  UserSuperBossEntity_o *UserSuperBossEntity; // x0
  __int64 v4; // x1
  struct System_Int64_array *splitHp; // x9
  int max_length; // w10
  int32_t i; // w8
  __int64 v9; // x0

  UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(this, method);
  if ( !UserSuperBossEntity )
    return 0;
  splitHp = this->fields.splitHp;
  if ( !splitHp )
    sub_B7076C(UserSuperBossEntity, v4);
  max_length = splitHp->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = 0; i < max_length; ++i )
  {
    if ( i >= (unsigned int)max_length )
    {
      v9 = sub_B70798(UserSuperBossEntity);
      sub_B70738(v9, 0LL);
    }
    if ( UserSuperBossEntity->fields.damage < splitHp->m_Items[i] )
      break;
  }
  return i;
}


UnityEngine_Color_o __fastcall EventSuperBossEntity__GetBossColor(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  float v2; // s4
  float v3; // s5
  float v4; // s6
  int32_t bossColor; // w8
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  __int64 v10; // [xsp+0h] [xbp-10h] BYREF
  __int64 v11; // [xsp+8h] [xbp-8h]
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  bossColor = this->fields.bossColor;
  v12.fields.a = (float)(unsigned __int8)bossColor;
  v12.fields.r = (float)BYTE2(bossColor) / 255.0;
  v12.fields.g = (float)BYTE1(bossColor) / 255.0;
  v12.fields.b = v12.fields.a / 255.0;
  v10 = 0LL;
  v11 = 0LL;
  UnityEngine_Color___ctor_41064944(v12, v2, v3, v4, (const MethodInfo *)&v10);
  v7 = *((float *)&v10 + 1);
  v6 = *(float *)&v10;
  v9 = *((float *)&v11 + 1);
  v8 = *(float *)&v11;
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}


System_Int64_array *__fastcall EventSuperBossEntity__GetBreakGaugeHpList(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  __int64 script; // x0
  __int64 v4; // x20
  __int64 v5; // x9
  __int64 v6; // x22
  System_Int64_array *v7; // x21
  __int64 v8; // x23
  Il2CppObject *v9; // x19
  bool v10; // cc
  System_Int64_array *result; // x0
  __int64 v12; // x0
  EventSuperBossEntity_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_43556B5 & 1) == 0 )
  {
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    sub_B70694(&StringLiteral_17184/*"breakGaugeHp"*/);
    byte_43556B5 = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17184/*"breakGaugeHp"*/,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_24;
    script = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                        (System_Type_o *)StringLiteral_17184/*"breakGaugeHp"*/,
                        (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_24;
    v4 = script;
    v5 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 300LL) < (unsigned int)v5
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * v5 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B70A60(script);
      EventSuperBossEntity___ctor(v13, v14);
      return result;
    }
    v6 = *(int *)(script + 24);
    if ( (int)v6 >= 1 )
    {
      v7 = (System_Int64_array *)sub_B706AC(long___TypeInfo, (unsigned int)v6);
      v8 = 4LL;
      while ( 1 )
      {
        if ( v8 - 4 >= (unsigned __int64)*(unsigned int *)(v4 + 24) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        v9 = *(Il2CppObject **)(*(_QWORD *)(v4 + 16) + 8 * v8);
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        script = System_Convert__ToInt64(v9, 0LL);
        if ( !v7 )
          break;
        if ( v8 - 4 >= (unsigned __int64)v7->max_length )
          goto LABEL_25;
        v10 = v8 - 3 < v6;
        *((_QWORD *)&v7->obj.klass + v8++) = script;
        if ( !v10 )
          return v7;
      }
LABEL_24:
      sub_B7076C(script, method);
    }
  }
  script = sub_B706AC(long___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_24;
  v7 = (System_Int64_array *)script;
  if ( !*(_DWORD *)(script + 24) )
  {
LABEL_25:
    v12 = sub_B70798(script);
    sub_B70738(v12, 0LL);
  }
  *(_QWORD *)(script + 32) = this->fields.maxHp;
  return v7;
}


UserSuperBossEntity_o *__fastcall EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  UserSuperBossMaster_o *Master_WarQuestSelectionMaster; // x20
  UserSuperBossEntity_o *result; // x0
  __int64 v5; // x1
  UserSuperBossEntity_o *v6; // x20
  int32_t id; // w8
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43556B1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserSuperBossMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&UserSuperBossEntity_TypeInfo);
    byte_43556B1 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  result = (UserSuperBossEntity_o *)NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( UserSuperBossMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         (int64_t)result,
         this->fields.eventId,
         this->fields.id,
         0LL) )
  {
    return entity;
  }
  v6 = (UserSuperBossEntity_o *)sub_B70764(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v6, 0LL);
  entity = v6;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  result = (UserSuperBossEntity_o *)NetworkManager__get_UserId(0LL);
  if ( !v6 || (v6->fields.userId = (int64_t)result, (result = entity) == 0LL) )
LABEL_18:
    sub_B7076C(result, v5);
  entity->fields.eventId = this->fields.eventId;
  id = this->fields.id;
  result->fields.damage = 0LL;
  result->fields.superBossId = id;
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
  int32_t *v9; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v11; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v15; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x22
  int64_t v17; // x21
  int32_t *v18; // x0
  UserQuestEntity_o *v19; // x0
  UserQuestEntity_o *v20; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v21; // x21
  int32_t v22; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v23; // x19
  EventSuperBossEntity_o *v24; // x0
  const MethodInfo *v25; // x1

  if ( (byte_43556B3 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&EventSuperBossEntity_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43556B3 = 1;
  }
  if ( !this->fields.script )
    goto LABEL_65;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v6 = (UserQuestMaster_o *)Instance;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !script )
    goto LABEL_67;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_35;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v7 = this->fields.script;
  v8 = (int64_t)Instance;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v7 )
    goto LABEL_67;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                                (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v6 || !Instance )
    goto LABEL_67;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_68;
  v9 = (int32_t *)j_il2cpp_object_unbox_0(Instance);
  EntityFromId = UserQuestMaster__getEntityFromId(v6, v8, *v9, 0LL);
  if ( !EntityFromId )
    goto LABEL_35;
  v11 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v12 = this->fields.script;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v12 )
    goto LABEL_67;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v12,
         (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v11->fields.questPhase;
    v14 = this->fields.script;
    if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    }
    if ( !v14 )
      goto LABEL_67;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
                                  (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_67;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_68;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance) )
      goto LABEL_63;
    goto LABEL_35;
  }
  if ( v11->fields.clearNum <= 0 )
  {
LABEL_35:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v15 = this->fields.script;
    if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    }
    if ( v15 )
    {
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v15,
              (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_65;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v16 = this->fields.script;
      v17 = (int64_t)Instance;
      if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      }
      if ( v16 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v16,
                                      (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v6 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_68;
            v18 = (int32_t *)j_il2cpp_object_unbox_0(Instance);
            v19 = UserQuestMaster__getEntityFromId(v6, v17, *v18, 0LL);
            if ( !v19 )
              return (char)v19;
            v20 = v19;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v21 = this->fields.script;
            if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            }
            if ( v21 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
                      (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v20->fields.clearNum )
                  goto LABEL_63;
                goto LABEL_65;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v22 = v20->fields.questPhase;
              v23 = this->fields.script;
              if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              }
              if ( v23 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v23,
                                              (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v22 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance) )
                      goto LABEL_63;
LABEL_65:
                    LOBYTE(v19) = 1;
                    return (char)v19;
                  }
LABEL_68:
                  sub_B70A60(Instance);
                  LOBYTE(v19) = EventSuperBossEntity__IsCleard(v24, v25);
                  return (char)v19;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_B7076C(Instance, v4);
  }
LABEL_63:
  LOBYTE(v19) = 0;
  return (char)v19;
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
  int i; // w22
  EventSuperBossMaster_c *v5; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v7; // x21
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int64_t Int; // x0
  __int64 v12; // x1
  struct System_Int32_array *splitQuestIds; // x8
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x20
  struct System_Int32_array *v16; // x8
  struct System_Int32_array *v18; // x8
  __int64 v19; // x0
  int v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_43556B2 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserQuestMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&EventSuperBossMaster_TypeInfo);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_43556B2 = 1;
  }
  if ( EventSuperBossEntity__InUIDisplayPeriod(this, method) )
  {
    for ( i = 0; ; ++i )
    {
      v5 = EventSuperBossMaster_TypeInfo;
      if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v5 = EventSuperBossMaster_TypeInfo;
      }
      SAVE_KEY = v5->static_fields->SAVE_KEY;
      eventId = this->fields.eventId;
      v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v3);
      v20 = i;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v8);
      v10 = System_String__Format_44753704(SAVE_KEY, v7, v9, 0LL);
      Int = UnityEngine_PlayerPrefs__GetInt(v10, 0, 0LL);
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
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Int = NetworkManager__get_UserId(0LL);
      v16 = this->fields.splitQuestIds;
      if ( v16 )
      {
        if ( !v16->max_length )
          goto LABEL_34;
        if ( Master_WarQuestSelectionMaster )
        {
          if ( UserQuestMaster__getChallengeCountsFromId(Master_WarQuestSelectionMaster, Int, v16->m_Items[1], 0LL) > 0 )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          Int = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v18 = this->fields.splitQuestIds;
          if ( v18 )
          {
            if ( v18->max_length )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Int, v18->m_Items[1], -1, 0, 0LL);
              goto LABEL_33;
            }
LABEL_34:
            v19 = sub_B70798(Int);
            sub_B70738(v19, 0LL);
          }
        }
      }
    }
LABEL_33:
    sub_B7076C(Int, v12);
  }
  return 0;
}


bool __fastcall EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v5; // x19
  EventSuperBossEntity_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_43556B4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B70694(&EventSuperBossEntity_TypeInfo);
    sub_B70694(&long_TypeInfo);
    byte_43556B4 = 1;
  }
  script = this->fields.script;
  Item = EventSuperBossEntity_TypeInfo;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !script )
    goto LABEL_16;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v5 = this->fields.script;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v5
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v5,
                 (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_16:
    sub_B7076C(Item, method);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item) == 1LL;
  sub_B70A60(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v7, v8);
}