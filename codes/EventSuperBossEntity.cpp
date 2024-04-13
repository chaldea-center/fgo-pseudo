void __fastcall EventSuperBossEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v24; // x1
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
  struct EventSuperBossEntity_StaticFields *v41; // x0
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct EventSuperBossEntity_StaticFields *v49; // x0
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7

  if ( (byte_42EC0DC & 1) == 0 )
  {
    sub_B5D5C4(&EventSuperBossEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_23177/*"ui_start_quest_phase"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_23174/*"ui_end_quest_phase"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_23173/*"ui_end_quest_id"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23175/*"ui_hidden"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_23176/*"ui_start_quest_id"*/, v20, v21, v22);
    byte_42EC0DC = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossEntity_TypeInfo->static_fields;
  v24 = (System_Int32_array **)StringLiteral_23176/*"ui_start_quest_id"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_23176/*"ui_start_quest_id"*/;
  sub_B5D560(static_fields, v24, v2, v3, v4, v5, v6, v7);
  v25 = EventSuperBossEntity_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_23177/*"ui_start_quest_phase"*/;
  v25->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_23177/*"ui_start_quest_phase"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v25->UI_START_QUEST_PHASE_KEY, v26, v27, v28, v29, v30, v31, v32);
  v33 = EventSuperBossEntity_TypeInfo->static_fields;
  v34 = (System_Int32_array **)StringLiteral_23173/*"ui_end_quest_id"*/;
  v33->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_23173/*"ui_end_quest_id"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v33->UI_END_QUEST_ID_KEY, v34, v35, v36, v37, v38, v39, v40);
  v41 = EventSuperBossEntity_TypeInfo->static_fields;
  v42 = (System_Int32_array **)StringLiteral_23174/*"ui_end_quest_phase"*/;
  v41->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_23174/*"ui_end_quest_phase"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v41->UI_END_QUEST_PHASE_KEY, v42, v43, v44, v45, v46, v47, v48);
  v49 = EventSuperBossEntity_TypeInfo->static_fields;
  v50 = (System_Int32_array **)StringLiteral_23175/*"ui_hidden"*/;
  v49->UI_HIDDEN = (struct System_String_o *)StringLiteral_23175/*"ui_hidden"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v49->UI_HIDDEN, v50, v51, v52, v53, v54, v55, v56);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EC0DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EC0DB = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EC0D5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, id, (_DWORD)method, v3);
    byte_42EC0D5 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_42EC0D4 & 1) == 0 )
  {
    sub_B5D5C4(&EventSuperBossEntity_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EC0D4 = 1;
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
    sub_B5D69C(UserSuperBossEntity, v4);
  max_length = splitHp->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = 0; i < max_length; ++i )
  {
    if ( i >= (unsigned int)max_length )
    {
      v9 = sub_B5D6C8(UserSuperBossEntity);
      sub_B5D668(v9, 0LL);
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
  UnityEngine_Color___ctor_41567816(v12, v2, v3, v4, (const MethodInfo *)&v10);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  __int64 script; // x0
  __int64 v27; // x20
  __int64 v28; // x9
  __int64 v29; // x22
  System_Int64_array *v30; // x21
  __int64 v31; // x23
  Il2CppObject *v32; // x19
  bool v33; // cc
  System_Int64_array *result; // x0
  __int64 v35; // x0
  EventSuperBossEntity_o *v36; // x0
  const MethodInfo *v37; // x1

  if ( (byte_42EC0DA & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9, v10);
    sub_B5D5C4(&long___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__get_Item__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_17138/*"breakGaugeHp"*/, v23, v24, v25);
    byte_42EC0DA = 1;
  }
  script = (__int64)this->fields.script;
  if ( !script )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17138/*"breakGaugeHp"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    script = (__int64)this->fields.script;
    if ( !script )
      goto LABEL_24;
    script = (__int64)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                        (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)script,
                        (System_Type_o *)StringLiteral_17138/*"breakGaugeHp"*/,
                        (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !script )
      goto LABEL_24;
    v27 = script;
    v28 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)script + 300LL) < (unsigned int)v28
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)script + 200LL) + 8 * v28 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B5D990(script);
      EventSuperBossEntity___ctor(v36, v37);
      return result;
    }
    v29 = *(int *)(script + 24);
    if ( (int)v29 >= 1 )
    {
      v30 = (System_Int64_array *)sub_B5D5DC(long___TypeInfo, (unsigned int)v29);
      v31 = 4LL;
      while ( 1 )
      {
        if ( v31 - 4 >= (unsigned __int64)*(unsigned int *)(v27 + 24) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v32 = *(Il2CppObject **)(*(_QWORD *)(v27 + 16) + 8 * v31);
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        script = System_Convert__ToInt64(v32, 0LL);
        if ( !v30 )
          break;
        if ( v31 - 4 >= (unsigned __int64)v30->max_length )
          goto LABEL_25;
        v33 = v31 - 3 < v29;
        *((_QWORD *)&v30->obj.klass + v31++) = script;
        if ( !v33 )
          return v30;
      }
LABEL_24:
      sub_B5D69C(script, method);
    }
  }
  script = sub_B5D5DC(long___TypeInfo, 1LL);
  if ( !script )
    goto LABEL_24;
  v30 = (System_Int64_array *)script;
  if ( !*(_DWORD *)(script + 24) )
  {
LABEL_25:
    v35 = sub_B5D6C8(script);
    sub_B5D668(v35, 0LL);
  }
  *(_QWORD *)(script + 32) = this->fields.maxHp;
  return v30;
}


UserSuperBossEntity_o *__fastcall EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UserSuperBossMaster_o *Master_WarQuestSelectionMaster; // x20
  UserSuperBossEntity_o *result; // x0
  __int64 v16; // x1
  UserSuperBossEntity_o *v17; // x20
  int32_t id; // w8
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EC0D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserSuperBossMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&NetworkManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UserSuperBossEntity_TypeInfo, v11, v12, v13);
    byte_42EC0D6 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserSuperBossMaster___);
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
  v17 = (UserSuperBossEntity_o *)sub_B5D694(UserSuperBossEntity_TypeInfo);
  UserSuperBossEntity___ctor(v17, 0LL);
  entity = v17;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  result = (UserSuperBossEntity_o *)NetworkManager__get_UserId(0LL);
  if ( !v17 || (v17->fields.userId = (int64_t)result, (result = entity) == 0LL) )
LABEL_18:
    sub_B5D69C(result, v16);
  entity->fields.eventId = this->fields.eventId;
  id = this->fields.id;
  result->fields.damage = 0LL;
  result->fields.superBossId = id;
  return result;
}


bool __fastcall EventSuperBossEntity__InUIDisplayPeriod(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  DataManager_o *Instance; // x0
  __int64 v24; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x21
  UserQuestMaster_o *v26; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v27; // x22
  int64_t v28; // x21
  int32_t *v29; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v31; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v32; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v34; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v35; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v36; // x22
  int64_t v37; // x21
  int32_t *v38; // x0
  UserQuestEntity_o *v39; // x0
  UserQuestEntity_o *v40; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v41; // x21
  int32_t v42; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v43; // x19
  EventSuperBossEntity_o *v44; // x0
  const MethodInfo *v45; // x1

  if ( (byte_42EC0D8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8, v9, v10);
    sub_B5D5C4(&EventSuperBossEntity_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&long_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&NetworkManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42EC0D8 = 1;
  }
  if ( !this->fields.script )
    goto LABEL_65;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v26 = (UserQuestMaster_o *)Instance;
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
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_35;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  v27 = this->fields.script;
  v28 = (int64_t)Instance;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v27 )
    goto LABEL_67;
  Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v27,
                                (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
                                (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v26 || !Instance )
    goto LABEL_67;
  if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_68;
  v29 = (int32_t *)j_il2cpp_object_unbox_0(Instance);
  EntityFromId = UserQuestMaster__getEntityFromId(v26, v28, *v29, 0LL);
  if ( !EntityFromId )
    goto LABEL_35;
  v31 = EntityFromId;
  Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
  v32 = this->fields.script;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v32 )
    goto LABEL_67;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v32,
         (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    questPhase = v31->fields.questPhase;
    v34 = this->fields.script;
    if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    }
    if ( !v34 )
      goto LABEL_67;
    Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v34,
                                  (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Instance )
      goto LABEL_67;
    if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_68;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Instance) )
      goto LABEL_63;
    goto LABEL_35;
  }
  if ( v31->fields.clearNum <= 0 )
  {
LABEL_35:
    Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
    v35 = this->fields.script;
    if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    }
    if ( v35 )
    {
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v35,
              (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_65;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
      v36 = this->fields.script;
      v37 = (int64_t)Instance;
      if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      }
      if ( v36 )
      {
        Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                      (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v36,
                                      (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                                      (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v26 )
        {
          if ( Instance )
          {
            if ( Instance->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_68;
            v38 = (int32_t *)j_il2cpp_object_unbox_0(Instance);
            v39 = UserQuestMaster__getEntityFromId(v26, v37, *v38, 0LL);
            if ( !v39 )
              return (char)v39;
            v40 = v39;
            Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
            v41 = this->fields.script;
            if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            }
            if ( v41 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v41,
                      (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v40->fields.clearNum )
                  goto LABEL_63;
                goto LABEL_65;
              }
              Instance = (DataManager_o *)EventSuperBossEntity_TypeInfo;
              v42 = v40->fields.questPhase;
              v43 = this->fields.script;
              if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              }
              if ( v43 )
              {
                Instance = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v43,
                                              (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Instance )
                {
                  if ( Instance->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v42 < *(_DWORD *)j_il2cpp_object_unbox_0(Instance) )
                      goto LABEL_63;
LABEL_65:
                    LOBYTE(v39) = 1;
                    return (char)v39;
                  }
LABEL_68:
                  sub_B5D990(Instance);
                  LOBYTE(v39) = EventSuperBossEntity__IsCleard(v44, v45);
                  return (char)v39;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_B5D69C(Instance, v24);
  }
LABEL_63:
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int i; // w22
  EventSuperBossMaster_c *v24; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v26; // x21
  Il2CppObject *v27; // x0
  System_String_o *v28; // x0
  int64_t Int; // x0
  __int64 v30; // x1
  struct System_Int32_array *splitQuestIds; // x8
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x20
  struct System_Int32_array *v34; // x8
  struct System_Int32_array *v36; // x8
  __int64 v37; // x0
  int v38; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42EC0D7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserQuestMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&EventSuperBossMaster_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v20, v21, v22);
    byte_42EC0D7 = 1;
  }
  if ( EventSuperBossEntity__InUIDisplayPeriod(this, method) )
  {
    for ( i = 0; ; ++i )
    {
      v24 = EventSuperBossMaster_TypeInfo;
      if ( (BYTE3(EventSuperBossMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSuperBossMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossMaster_TypeInfo);
        v24 = EventSuperBossMaster_TypeInfo;
      }
      SAVE_KEY = v24->static_fields->SAVE_KEY;
      eventId = this->fields.eventId;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
      v38 = i;
      v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
      v28 = System_String__Format_44573324(SAVE_KEY, v26, v27, 0LL);
      Int = UnityEngine_PlayerPrefs__GetInt(v28, 0, 0LL);
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
      Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Int = NetworkManager__get_UserId(0LL);
      v34 = this->fields.splitQuestIds;
      if ( v34 )
      {
        if ( !v34->max_length )
          goto LABEL_34;
        if ( Master_WarQuestSelectionMaster )
        {
          if ( UserQuestMaster__getChallengeCountsFromId(Master_WarQuestSelectionMaster, Int, v34->m_Items[1], 0LL) > 0 )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          Int = (int64_t)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v36 = this->fields.splitQuestIds;
          if ( v36 )
          {
            if ( v36->max_length )
            {
              if ( Int )
                return clsQuestCheck__IsQuestRelease((clsQuestCheck_o *)Int, v36->m_Items[1], -1, 0, 0LL);
              goto LABEL_33;
            }
LABEL_34:
            v37 = sub_B5D6C8(Int);
            sub_B5D668(v37, 0LL);
          }
        }
      }
    }
LABEL_33:
    sub_B5D69C(Int, v30);
  }
  return 0;
}


bool __fastcall EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  void *Item; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x19
  EventSuperBossEntity_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_42EC0D9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    sub_B5D5C4(&EventSuperBossEntity_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&long_TypeInfo, v11, v12, v13);
    byte_42EC0D9 = 1;
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
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  Item = EventSuperBossEntity_TypeInfo;
  v16 = this->fields.script;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v16
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v16,
                 (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_16:
    sub_B5D69C(Item, method);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)Item + 64LL) == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item) == 1LL;
  sub_B5D990(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v18, v19);
}