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

  if ( (byte_40FD207 & 1) == 0 )
  {
    sub_B16FFC(&EventSuperBossEntity_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_22779/*"ui_start_quest_phase"*/, v8);
    sub_B16FFC(&StringLiteral_22776/*"ui_end_quest_phase"*/, v9);
    sub_B16FFC(&StringLiteral_22775/*"ui_end_quest_id"*/, v10);
    sub_B16FFC(&StringLiteral_22777/*"ui_hidden"*/, v11);
    sub_B16FFC(&StringLiteral_22778/*"ui_start_quest_id"*/, v12);
    byte_40FD207 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)EventSuperBossEntity_TypeInfo->static_fields;
  v14 = (System_Int32_array **)StringLiteral_22778/*"ui_start_quest_id"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_22778/*"ui_start_quest_id"*/;
  sub_B16F98(static_fields, v14, v2, v3, v4, v5, v6, v7);
  v15 = EventSuperBossEntity_TypeInfo->static_fields;
  v16 = (System_Int32_array **)StringLiteral_22779/*"ui_start_quest_phase"*/;
  v15->UI_START_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_22779/*"ui_start_quest_phase"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v15->UI_START_QUEST_PHASE_KEY, v16, v17, v18, v19, v20, v21, v22);
  v23 = EventSuperBossEntity_TypeInfo->static_fields;
  v24 = (System_Int32_array **)StringLiteral_22775/*"ui_end_quest_id"*/;
  v23->UI_END_QUEST_ID_KEY = (struct System_String_o *)StringLiteral_22775/*"ui_end_quest_id"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v23->UI_END_QUEST_ID_KEY, v24, v25, v26, v27, v28, v29, v30);
  v31 = EventSuperBossEntity_TypeInfo->static_fields;
  v32 = (System_Int32_array **)StringLiteral_22776/*"ui_end_quest_phase"*/;
  v31->UI_END_QUEST_PHASE_KEY = (struct System_String_o *)StringLiteral_22776/*"ui_end_quest_phase"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v31->UI_END_QUEST_PHASE_KEY, v32, v33, v34, v35, v36, v37, v38);
  v39 = EventSuperBossEntity_TypeInfo->static_fields;
  v40 = (System_Int32_array **)StringLiteral_22777/*"ui_hidden"*/;
  v39->UI_HIDDEN = (struct System_String_o *)StringLiteral_22777/*"ui_hidden"*/;
  sub_B16F98((BattleServantConfConponent_o *)&v39->UI_HIDDEN, v40, v41, v42, v43, v44, v45, v46);
}


void __fastcall EventSuperBossEntity___ctor(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FD206 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_string___ctor__, method);
    byte_40FD206 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_266F2D4 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventSuperBossEntity__CreatePK(int32_t eventId, int32_t id, const MethodInfo *method)
{
  if ( (byte_40FD200 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&id);
    byte_40FD200 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           id,
           (const MethodInfo_18C21A0 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventSuperBossEntity__CreatePrimaryKey(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t id; // w19
  int32_t eventId; // w20

  if ( (byte_40FD1FF & 1) == 0 )
  {
    sub_B16FFC(&EventSuperBossEntity_TypeInfo, method);
    byte_40FD1FF = 1;
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
  __int64 v5; // x2
  struct System_Int64_array *splitHp; // x9
  int max_length; // w10
  int32_t i; // w8

  UserSuperBossEntity = EventSuperBossEntity__GetUserSuperBossEntity(this, method);
  if ( !UserSuperBossEntity )
    return 0;
  splitHp = this->fields.splitHp;
  if ( !splitHp )
    sub_B170D4();
  max_length = splitHp->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = 0; i < max_length; ++i )
  {
    if ( i >= (unsigned int)max_length )
    {
      sub_B17100(UserSuperBossEntity, v4, v5);
      sub_B170A0();
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
  UnityEngine_Color___ctor_40666012(v12, v2, v3, v4, (const MethodInfo *)&v10);
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
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x0
  int *Item; // x0
  int *v14; // x20
  __int64 v15; // x9
  __int64 v16; // x22
  System_Int64_array *v17; // x21
  __int64 v18; // x23
  Il2CppObject *v19; // x19
  int64_t v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  bool v23; // cc
  System_Int64_array *result; // x0
  EventSuperBossEntity_o *v25; // x0
  const MethodInfo *v26; // x1

  if ( (byte_40FD205 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B16FFC(&long___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Count__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_object__get_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_16864/*"breakGaugeHp"*/, v9);
    byte_40FD205 = 1;
  }
  script = this->fields.script;
  if ( !script )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_16864/*"breakGaugeHp"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    v12 = this->fields.script;
    if ( !v12 )
      goto LABEL_24;
    Item = (int *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v12,
                    (System_Type_o *)StringLiteral_16864/*"breakGaugeHp"*/,
                    (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_24;
    v14 = Item;
    v15 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 300LL) < (unsigned int)v15
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v15 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
      sub_B173C8(Item);
      EventSuperBossEntity___ctor(v25, v26);
      return result;
    }
    v16 = Item[6];
    if ( (int)v16 >= 1 )
    {
      v17 = (System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v16, v11);
      v18 = 4LL;
      while ( 1 )
      {
        if ( v18 - 4 >= (unsigned __int64)(unsigned int)v14[6] )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v19 = *(Il2CppObject **)(*((_QWORD *)v14 + 2) + 8 * v18);
        if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !System_Convert_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
        }
        v20 = System_Convert__ToInt64(v19, 0LL);
        if ( !v17 )
          break;
        if ( v18 - 4 >= (unsigned __int64)v17->max_length )
          goto LABEL_25;
        v23 = v18 - 3 < v16;
        *((_QWORD *)&v17->obj.klass + v18++) = v20;
        if ( !v23 )
          return v17;
      }
LABEL_24:
      sub_B170D4();
    }
  }
  v20 = sub_B17014(long___TypeInfo, 1LL, v11);
  if ( !v20 )
    goto LABEL_24;
  v17 = (System_Int64_array *)v20;
  if ( !*(_DWORD *)(v20 + 24) )
  {
LABEL_25:
    sub_B17100(v20, v21, v22);
    sub_B170A0();
  }
  *(_QWORD *)(v20 + 32) = this->fields.maxHp;
  return v17;
}


UserSuperBossEntity_o *__fastcall EventSuperBossEntity__GetUserSuperBossEntity(
        EventSuperBossEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UserSuperBossMaster_o *Master_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  UserSuperBossEntity_o *result; // x0
  UserSuperBossEntity_o *v13; // x20
  int64_t v14; // x0
  int32_t id; // w8
  UserSuperBossEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FD201 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserSuperBossMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&NetworkManager_TypeInfo, v4);
    sub_B16FFC(&UserSuperBossEntity_TypeInfo, v5);
    byte_40FD201 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserSuperBossMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserSuperBossMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( UserSuperBossMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         UserId,
         this->fields.eventId,
         this->fields.id,
         0LL) )
  {
    return entity;
  }
  v13 = (UserSuperBossEntity_o *)sub_B170CC(UserSuperBossEntity_TypeInfo, v8, v9, v10, v11);
  UserSuperBossEntity___ctor(v13, 0LL);
  entity = v13;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  v14 = NetworkManager__get_UserId(0LL);
  if ( !v13 || (v13->fields.userId = v14, (result = entity) == 0LL) )
LABEL_18:
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x21
  UserQuestMaster_o *v12; // x20
  int64_t UserId; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v14; // x22
  int64_t v15; // x21
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  int32_t *v17; // x0
  UserQuestEntity_o *EntityFromId; // x0
  UserQuestEntity_o *v19; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v20; // x22
  int32_t questPhase; // w22
  struct System_Collections_Generic_Dictionary_string__object__o *v22; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *v23; // x21
  int64_t v24; // x0
  struct System_Collections_Generic_Dictionary_string__object__o *v25; // x22
  int64_t v26; // x21
  int32_t *v27; // x0
  UserQuestEntity_o *v28; // x0
  UserQuestEntity_o *v29; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v30; // x21
  int32_t v31; // w20
  struct System_Collections_Generic_Dictionary_string__object__o *v32; // x19
  EventSuperBossEntity_o *v33; // x0
  const MethodInfo *v34; // x1

  if ( (byte_40FD203 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserQuestMaster___, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4);
    sub_B16FFC(&EventSuperBossEntity_TypeInfo, v5);
    sub_B16FFC(&long_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40FD203 = 1;
  }
  if ( !this->fields.script )
    goto LABEL_65;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_67;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  script = this->fields.script;
  v12 = (UserQuestMaster_o *)MasterData_WarQuestSelectionMaster;
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
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_35;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  v14 = this->fields.script;
  v15 = UserId;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v14 )
    goto LABEL_67;
  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v14,
           (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_ID_KEY,
           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !v12 || !Item )
    goto LABEL_67;
  if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_68;
  v17 = (int32_t *)j_il2cpp_object_unbox_0(Item);
  EntityFromId = UserQuestMaster__getEntityFromId(v12, v15, *v17, 0LL);
  if ( !EntityFromId )
    goto LABEL_35;
  v19 = EntityFromId;
  v20 = this->fields.script;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v20 )
    goto LABEL_67;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v20,
         (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    questPhase = v19->fields.questPhase;
    v22 = this->fields.script;
    if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    }
    if ( !v22 )
      goto LABEL_67;
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v22,
             (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_END_QUEST_PHASE_KEY,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      goto LABEL_67;
    if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
      goto LABEL_68;
    if ( questPhase >= *(_DWORD *)j_il2cpp_object_unbox_0(Item) )
      goto LABEL_63;
    goto LABEL_35;
  }
  if ( v19->fields.clearNum <= 0 )
  {
LABEL_35:
    v23 = this->fields.script;
    if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
    }
    if ( v23 )
    {
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v23,
              (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
              (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_65;
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      v24 = NetworkManager__get_UserId(0LL);
      v25 = this->fields.script;
      v26 = v24;
      if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
      }
      if ( v25 )
      {
        Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v25,
                 (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_ID_KEY,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( v12 )
        {
          if ( Item )
          {
            if ( Item->klass->_1.element_class != long_TypeInfo->_1.element_class )
              goto LABEL_68;
            v27 = (int32_t *)j_il2cpp_object_unbox_0(Item);
            v28 = UserQuestMaster__getEntityFromId(v12, v26, *v27, 0LL);
            if ( !v28 )
              return (char)v28;
            v29 = v28;
            v30 = this->fields.script;
            if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
            }
            if ( v30 )
            {
              if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v30,
                      (System_Xml_XmlQualifiedName_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                      (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
              {
                if ( !v29->fields.clearNum )
                  goto LABEL_63;
                goto LABEL_65;
              }
              v31 = v29->fields.questPhase;
              v32 = this->fields.script;
              if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
              }
              if ( v32 )
              {
                Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                         (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v32,
                         (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_START_QUEST_PHASE_KEY,
                         (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
                if ( Item )
                {
                  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
                  {
                    if ( v31 < *(_DWORD *)j_il2cpp_object_unbox_0(Item) )
                      goto LABEL_63;
LABEL_65:
                    LOBYTE(v28) = 1;
                    return (char)v28;
                  }
LABEL_68:
                  sub_B173C8(Item);
                  LOBYTE(v28) = EventSuperBossEntity__IsCleard(v33, v34);
                  return (char)v28;
                }
              }
            }
          }
        }
      }
    }
LABEL_67:
    sub_B170D4();
  }
LABEL_63:
  LOBYTE(v28) = 0;
  return (char)v28;
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
  int32_t Int; // w0
  struct System_Int32_array *splitQuestIds; // x8
  UserQuestMaster_o *Master_WarQuestSelectionMaster; // x20
  clsQuestCheck_o *UserId; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  struct System_Int32_array *v22; // x8
  struct System_Int32_array *v24; // x8
  int v25; // [xsp+8h] [xbp-38h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FD202 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserQuestMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&EventSuperBossMaster_TypeInfo, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v7);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v8);
    byte_40FD202 = 1;
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
      v25 = i;
      v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v25);
      v14 = System_String__Format_43739268(SAVE_KEY, v12, v13, 0LL);
      Int = UnityEngine_PlayerPrefs__GetInt(v14, 0, 0LL);
      if ( !Int )
        break;
      if ( Int == this->fields.id )
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
      Master_WarQuestSelectionMaster = (UserQuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserQuestMaster___);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      UserId = (clsQuestCheck_o *)NetworkManager__get_UserId(0LL);
      v22 = this->fields.splitQuestIds;
      if ( v22 )
      {
        if ( !v22->max_length )
          goto LABEL_34;
        if ( Master_WarQuestSelectionMaster )
        {
          if ( UserQuestMaster__getChallengeCountsFromId(
                 Master_WarQuestSelectionMaster,
                 (int64_t)UserId,
                 v22->m_Items[1],
                 0LL) > 0 )
            return 1;
          if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
          }
          UserId = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
          v24 = this->fields.splitQuestIds;
          if ( v24 )
          {
            if ( v24->max_length )
            {
              if ( UserId )
                return clsQuestCheck__IsQuestRelease(UserId, v24->m_Items[1], -1, 0, 0LL);
              goto LABEL_33;
            }
LABEL_34:
            sub_B17100(UserId, v20, v21);
            sub_B170A0();
          }
        }
      }
    }
LABEL_33:
    sub_B170D4();
  }
  return 0;
}


bool __fastcall EventSuperBossEntity__IsHidden(EventSuperBossEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x20
  struct System_Collections_Generic_Dictionary_string__object__o *v7; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  EventSuperBossEntity_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_40FD204 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&EventSuperBossEntity_TypeInfo, v4);
    sub_B16FFC(&long_TypeInfo, v5);
    byte_40FD204 = 1;
  }
  script = this->fields.script;
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
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return 0;
  v7 = this->fields.script;
  if ( (BYTE3(EventSuperBossEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EventSuperBossEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventSuperBossEntity_TypeInfo);
  }
  if ( !v7
    || (Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v7,
                 (System_Type_o *)EventSuperBossEntity_TypeInfo->static_fields->UI_HIDDEN,
                 (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__)) == 0LL )
  {
LABEL_16:
    sub_B170D4();
  }
  if ( Item->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_QWORD *)j_il2cpp_object_unbox_0(Item) == 1LL;
  sub_B173C8(Item);
  return (unsigned __int8)EventSuperBossEntity__GetBreakGaugeHpList(v10, v11);
}