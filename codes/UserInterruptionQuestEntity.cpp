void __fastcall UserInterruptionQuestEntity___ctor(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16F57 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B16F57 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


BattleWaveInfoData_array *__fastcall UserInterruptionQuestEntity__ConvertToBattleWaveInfoDataArray(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_object__o *v21; // x19
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_object__o *waveInfoList; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Il2CppObject *current; // x26
  int64_t v28; // x20
  __int64 v29; // x0
  __int64 v30; // x1
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t monitor; // x1
  int64_t klass; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  __int64 v52; // x0
  __int64 v53; // x1
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  struct System_Object_array *items; // x8
  _QWORD *v61; // x9
  __int64 size; // x10
  Il2CppClass **v63; // x0
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B16F55 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleWaveInfoData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__, v7, v8);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__get_Current__,
      v9,
      v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleWaveInfoData__Add__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__, v17, v18);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo, v19, v20);
    byte_4B16F55 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  v21 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleWaveInfoData__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.waveInfoList, 0LL) )
    UserInterruptionQuestEntity__SetWaveInfoScript(this, v22);
  waveInfoList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoList;
  if ( !waveInfoList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    waveInfoList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__) )
  {
    current = v66.fields._current;
    v28 = sub_1BCAA2C(BattleWaveInfoData_TypeInfo, v24, v25, v26);
    BattleWaveInfoData___ctor((BattleWaveInfoData_o *)v28, 0LL);
    if ( !current )
      sub_1BCAA3C(v29, v30);
    if ( !v28 )
      sub_1BCAA3C(v29, v30);
    *(_QWORD *)(v28 + 16) = current[1].klass;
    monitor = (int64_t)current[1].monitor;
    *(_QWORD *)(v28 + 24) = monitor;
    sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 24), monitor, v31, v32, v33, v34, v35, v36);
    klass = (int64_t)current[2].klass;
    *(_QWORD *)(v28 + 32) = klass;
    sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 32), klass, v39, v40, v41, v42, v43, v44);
    v45 = (int64_t)current[2].monitor;
    *(_QWORD *)(v28 + 40) = v45;
    sub_1BCA784((PartyOrganizationUtility_o *)(v28 + 40), v45, v46, v47, v48, v49, v50, v51);
    *(_DWORD *)(v28 + 48) = current[3].klass;
    if ( !v21 )
      sub_1BCAA3C(v52, v53);
    items = v21->fields._items;
    v61 = Method_System_Collections_Generic_List_BattleWaveInfoData__Add__;
    ++v21->fields._version;
    if ( !items )
      sub_1BCAA3C(v52, v53);
    size = v21->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)v28,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = &items->obj.klass + size;
      v21->fields._size = size + 1;
      v63[4] = (Il2CppClass *)v28;
      sub_1BCA784((PartyOrganizationUtility_o *)(v63 + 4), v28, v54, v55, v56, v57, v58, v59);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
  if ( !v21 )
LABEL_21:
    sub_1BCAA3C(waveInfoList, v22);
  return (BattleWaveInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                       v21,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall UserInterruptionQuestEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4B16F56 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___, *(_QWORD *)&questId, *(_QWORD *)&phase);
    byte_4B16F56 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           phase,
           (const MethodInfo_2F11500 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *__fastcall UserInterruptionQuestEntity__CreatePrimaryKey(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserInterruptionQuestEntity__CreatePK(this->fields.userId, this->fields.questId, this->fields.phase, v2);
}


UserInterruptionQuestEntity_InterruptionInfo_o *__fastcall UserInterruptionQuestEntity__GetInterruptionInfo(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  PartyOrganizationUtility_o *p_optionInfo; // x19
  UserInterruptionQuestEntity_InterruptionInfo_o *optionInfo; // x21
  System_String_o *interruptionInfo; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B16F53 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___,
      method,
      v2);
    sub_1BCA7E0(&Newtonsoft_Json_JsonConvert_TypeInfo, v4, v5);
    byte_4B16F53 = 1;
  }
  p_optionInfo = (PartyOrganizationUtility_o *)&this->fields.optionInfo;
  optionInfo = this->fields.optionInfo;
  if ( !optionInfo )
  {
    interruptionInfo = this->fields.interruptionInfo;
    if ( !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo, method);
    optionInfo = (UserInterruptionQuestEntity_InterruptionInfo_o *)Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
                                                                     interruptionInfo,
                                                                     (const MethodInfo_2F681D0 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    p_optionInfo->klass = (PartyOrganizationUtility_c *)optionInfo;
    sub_1BCA784(p_optionInfo, (int64_t)optionInfo, v9, v10, v11, v12, v13, v14);
  }
  return optionInfo;
}


int32_t __fastcall UserInterruptionQuestEntity__GetRestartWave(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_ICollection_o *waveInfoList; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *v8; // x8

  if ( (byte_4B16F54 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__, method, v2);
    byte_4B16F54 = 1;
  }
  waveInfoList = (System_Collections_ICollection_o *)this->fields.waveInfoList;
  if ( !waveInfoList )
  {
    UserInterruptionQuestEntity__SetWaveInfoScript(this, method);
    waveInfoList = (System_Collections_ICollection_o *)this->fields.waveInfoList;
    if ( !waveInfoList )
      return 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(waveInfoList, 0LL);
  if ( IsNullOrEmpty )
    return 1;
  v8 = this->fields.waveInfoList;
  if ( !v8 )
    sub_1BCAA3C(IsNullOrEmpty, v6);
  return v8->fields._size;
}


void __fastcall UserInterruptionQuestEntity__SetWaveInfoScript(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *waveInfo; // x20
  Il2CppObject *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B16F52 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____,
      method,
      v2);
    sub_1BCA7E0(&Newtonsoft_Json_JsonConvert_TypeInfo, v4, v5);
    byte_4B16F52 = 1;
  }
  waveInfo = this->fields.waveInfo;
  if ( !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo, method);
  v7 = Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
         waveInfo,
         (const MethodInfo_2F681D0 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
  this->fields.waveInfoList = (struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
}


void __fastcall UserInterruptionQuestEntity_InterruptionInfo___ctor(
        UserInterruptionQuestEntity_InterruptionInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall UserInterruptionQuestEntity_Wave___ctor(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleWaveInfoData_BattleItemInfo_array *__fastcall UserInterruptionQuestEntity_Wave__get_battleItemInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._battleItemInfos_k__BackingField;
}


DropInfo_array *__fastcall UserInterruptionQuestEntity_Wave__get_dropInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._dropInfos_k__BackingField;
}


System_Int32_array *__fastcall UserInterruptionQuestEntity_Wave__get_equipSkillChargeNum(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._equipSkillChargeNum_k__BackingField;
}


int32_t __fastcall UserInterruptionQuestEntity_Wave__get_star(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._star_k__BackingField;
}


int32_t __fastcall UserInterruptionQuestEntity_Wave__get_turn(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._turn_k__BackingField;
}


int32_t __fastcall UserInterruptionQuestEntity_Wave__get_wave(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._wave_k__BackingField;
}


void __fastcall UserInterruptionQuestEntity_Wave__set_battleItemInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        BattleWaveInfoData_BattleItemInfo_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._battleItemInfos_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._battleItemInfos_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_dropInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        DropInfo_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._dropInfos_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._dropInfos_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_equipSkillChargeNum(
        UserInterruptionQuestEntity_Wave_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._equipSkillChargeNum_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._equipSkillChargeNum_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_star(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._star_k__BackingField = value;
}


void __fastcall UserInterruptionQuestEntity_Wave__set_turn(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._turn_k__BackingField = value;
}


void __fastcall UserInterruptionQuestEntity_Wave__set_wave(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._wave_k__BackingField = value;
}