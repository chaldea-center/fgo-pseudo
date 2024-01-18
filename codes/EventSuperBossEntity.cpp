void __fastcall EventSuperBossEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v14; // x1
  struct EventSuperBossEntity_StaticFields *v15; // x0
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct EventSuperBossEntity_StaticFields *v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct EventSuperBossEntity_StaticFields *v31; // x0
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct EventSuperBossEntity_StaticFields *v39; // x0
  System_Int32_array **v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_418AA18 & 1) == 0 )
  {
    sub_B2C35C(&EventSuperBossEntity_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_22872/*"ui_start_quest_phase"*/, v8);
    sub_B2C35C(&StringLiteral_22869/*"ui_end_quest_phase"*/, v9);
    sub_B2C35C(&StringLiteral_22868/*"ui_end_quest_id"*/, v10);
    sub_B2C35C(&StringLiteral_22870/*"ui_hidden"*/, v11);
    sub_B2C35C(&StringLiteral_22871/*"ui_start_quest_id"*/, v12);
    byte_418AA18 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossEntity_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_22871/*"ui_start_quest_id"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22871/*"ui_start_quest_id"*/;
  sub_B2C2F8(static_fields, v14, v2, v3, v4, v5, v6, v7);
  v15 = EventSuperBossEntity_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_22872/*"ui_start_quest_phase"*/;
  v15->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_22872/*"ui_start_quest_phase"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v15->UI_START_QUEST_PHASE_KEY, v16, v17, v18, v19, v20, v21, v22);
  v23 = EventSuperBossEntity_TypeInfo->static_fields;
  v24 = (System_Int32_array **)StringLiteral_22868/*"ui_end_quest_id"*/;
  v23->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_22868/*"ui_end_quest_id"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v23->UI_END_QUEST_ID_KEY, v24, v25, v26, v27, v28, v29, v30);
  v31 = EventSuperBossEntity_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_22869/*"ui_end_quest_phase"*/;
  v31->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_22869/*"ui_end_quest_phase"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v31->UI_END_QUEST_PHASE_KEY, v32, v33, v34, v35, v36, v37, v38);
  v39 = EventSuperBossEntity_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_22870/*"ui_hidden"*/;
  v39->UI_HIDDEN = (struct System_String_o *)StringLiteral_22870/*"ui_hidden"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v39->UI_HIDDEN, v40, v41, v42, v43, v44, v45, v46);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418AA17 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_string___ctor__, method);
    byte_418AA17 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_24E401C *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_418AA11 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_418AA11 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_1732908 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_418AA10 & 1) == 0 )
  {
    sub_B2C35C(&EventSuperBossEntity_TypeInfo, method);
    byte_418AA10 = 1;
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
    sub_B2C434(UserSuperBossEntity, v4);
  max_length = splitHp->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = 0; i < max_length; ++i )
  {
    if ( i >= (unsigned int)max_length )
    {
      v9 = sub_B2C460(UserSuperBossEntity);
      sub_B2C400(v9, 0LL);
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
  UnityEngine_Color___ctor_40633184(v12, v2, v3, v4, (const MethodInfo *)&v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 script; // x0
  __int64 v11; // x20
  __int64 v12; // x9
  __int64 v13; // x22
  System_Int64_array *v14; // x21
  __int64 v15; // x23
  Il2CppObject *v16; // x19
  bool v17; // cc
  System_Int64_array *result; // x0
  __int64 v19; // x0
  EventSuperBossEntity_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_418AA16 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B2C35C(&long___TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_object__get_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B2C35C(&StringLiteral_16930/*"breakGaugeHp"*/, v9);
    byte_418AA16 = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16930/*"breakGaugeHp"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_24;
    script = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                        (System_Type_o *)StringLiteral_16930/*"breakGaugeHp"*/,
                        (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_24;
    v11 = script;
    v12 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 300LL) < (unsigned int)v12
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * v12 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B2C728(script);
      EventSuperBossEntity___ctor(v20, v21);
      return result;
    }
    v13 = *(int *)(script + 24);
    if ( (int)v13 >= 1 )
    {
      v14 = (System_Int64_array *)sub_B2C374(long___TypeInfo, (unsigned int)v13);
      v15 = 4LL;
      while ( 1 )
      {
        if ( v15 - 4 >= (unsigned __int64)*(unsigned int *)(v11 + 24) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v16 = *(Il2CppObject **)(*(_QWORD *)(v11 + 16) + 8 * v15);
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        script = System_Convert__ToInt64(v16, 0LL);
        if ( !v14 )
          break;
        if ( v15 - 4 >= (unsigned __int64)v14->max_length )
          goto LABEL_25;
        v17 = v15 - 3 < v13;
        *((_QWORD *)&v14->obj.klass + v15++) = script;
        if ( !v17 )
          return v14;
      }
LABEL_24:
      sub_B2C434(script, method);
    }
  }
  script = sub_B2C374(long___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_24;
  v14 = (System_Int64_array *)script;
  if ( !*(_DWORD *)(script + 24) )
  {
LABEL_25:
    v19 = sub_B2C460(script);
    sub_B2C400(v19, 0LL);
  }
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
  UserSuperBossMaster_o *Master_WarQuestSelectionMaster; // x20
  UserSuperBossEntity_o *result; // x0
  __int64 v8; // x1
  UserSuperBossEntity_o *v9; // x20
  int32_t id; // w8
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418AA12 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserSuperBossMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_TypeInfo, v4);
    sub_B2C35C(&UserSuperBossEntity_TypeInfo, v5);
    byte_418AA12 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserSuperBossMaster___);
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
  v9 = (UserSuperBossEntity_o *)sub_B2C42C(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v9, 0LL);
  entity = v9;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  result = (UserSuperBossEntity_o *)NetworkManager__get_UserId(0LL);
  if ( !v9 || (v9->fields.userId = (int64_t)result, (result = entity) == 0LL) )
LABEL_18:
    sub_B2C434(result, v8);
  entity->fields.eventId = this->fields.eventId;
  id = this->fields.id;
  result->fields.damage = 0LL;
  result->fields.superBossId = id;
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
  int32_t *v15; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v17; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v18; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v20; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v21; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v22; // x22
  int64_t v23; // x21
  int32_t *v24; // x0
  UserQuestEntity_o *v25; // x0
  UserQuestEntity_o *v26; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v27; // x21
  int32_t v28; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v29; // x19
  EventSuperBossEntity_o *v30; // x0
  const MethodInfo *v31; // x1

  if ( (byte_418AA14 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B2C35C(&EventSuperBossEntity_TypeInfo, v5);
    sub_B2C35C(&long_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418AA14 = 1;
  }
  if ( !this->fields.script )
    goto LABEL_65;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v12 = (UserQuestMaster_o *)Instance;
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
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_35;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v13 = this->fields.script;
  v14 = (int64_t)Instance;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v13 )
    goto LABEL_67;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v13,
                                (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v12 || !Instance )
    goto LABEL_67;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_68;
  v15 = (int32_t *)j_il2cpp_object_unbox_0(Instance);
  EntityFromId = UserQuestMaster__getEntityFromId(v12, v14, *v15, 0LL);
  if ( !EntityFromId )
    goto LABEL_35;
  v17 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v18 = this->fields.script;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v18 )
    goto LABEL_67;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v18,
         (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v17->fields.questPhase;
    v20 = this->fields.script;
    if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    }
    if ( !v20 )
      goto LABEL_67;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v20,
                                  (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_67;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_68;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance) )
      goto LABEL_63;
    goto LABEL_35;
  }
  if ( v17->fields.clearNum <= 0 )
  {
LABEL_35:
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
              (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_65;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v22 = this->fields.script;
      v23 = (int64_t)Instance;
      if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      }
      if ( v22 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v22,
                                      (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v12 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_68;
            v24 = (int32_t *)j_il2cpp_object_unbox_0(Instance);
            v25 = UserQuestMaster__getEntityFromId(v12, v23, *v24, 0LL);
            if ( !v25 )
              return (char)v25;
            v26 = v25;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v27 = this->fields.script;
            if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            }
            if ( v27 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v27,
                      (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v26->fields.clearNum )
                  goto LABEL_63;
                goto LABEL_65;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v28 = v26->fields.questPhase;
              v29 = this->fields.script;
              if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              }
              if ( v29 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v29,
                                              (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v28 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance) )
                      goto LABEL_63;
LABEL_65:
                    LOBYTE(v25) = 1;
                    return (char)v25;
                  }
LABEL_68:
                  sub_B2C728(Instance);
                  LOBYTE(v25) = EventSuperBossEntity__IsCleard(v30, v31);
                  return (char)v25;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_B2C434(Instance, v10);
  }
LABEL_63:
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int i; // w22
  EventSuperBossMaster_c *v10; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  int64_t Int; // x0
  __int64 v16; // x1
  struct System_Int32_array *splitQuestIds; // x8
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x20
  struct System_Int32_array *v20; // x8
  struct System_Int32_array *v22; // x8
  __int64 v23; // x0
  int v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418AA13 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserQuestMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&EventSuperBossMaster_TypeInfo, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    byte_418AA13 = 1;
  }
  if ( EventSuperBossEntity__InUIDisplayPeriod(this, method) )
  {
    for ( i = 0; ; ++i )
    {
      v10 = EventSuperBossMaster_TypeInfo;
      if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v10 = EventSuperBossMaster_TypeInfo;
      }
      SAVE_KEY = v10->static_fields->SAVE_KEY;
      eventId = this->fields.eventId;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
      v24 = i;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
      v14 = System_String__Format_44301068(SAVE_KEY, v12, v13, 0LL);
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
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Int = NetworkManager__get_UserId(0LL);
      v20 = this->fields.splitQuestIds;
      if ( v20 )
      {
        if ( !v20->max_length )
          goto LABEL_34;
        if ( Master_WarQuestSelectionMaster )
        {
          if ( UserQuestMaster__getChallengeCountsFromId(Master_WarQuestSelectionMaster, Int, v20->m_Items[1], 0LL) > 0 )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          Int = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v22 = this->fields.splitQuestIds;
          if ( v22 )
          {
            if ( v22->max_length )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Int, v22->m_Items[1], -1, 0, 0LL);
              goto LABEL_33;
            }
LABEL_34:
            v23 = sub_B2C460(Int);
            sub_B2C400(v23, 0LL);
          }
        }
      }
    }
LABEL_33:
    sub_B2C434(Int, v16);
  }
  return 0;
}


bool __fastcall EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v8; // x19
  EventSuperBossEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_418AA15 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B2C35C(&EventSuperBossEntity_TypeInfo, v4);
    sub_B2C35C(&long_TypeInfo, v5);
    byte_418AA15 = 1;
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
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v8 = this->fields.script;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v8
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8,
                 (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_16:
    sub_B2C434(Item, method);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item) == 1LL;
  sub_B2C728(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v10, v11);
}