void UserInterruptionQuestEntity___ctor(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CC82F0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_string___ctor__);
    byte_4CC82F0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3406A14 *)Method_DataEntityBase_string___ctor__);
}


BattleWaveInfoData_array *UserInterruptionQuestEntity__ConvertToBattleWaveInfoDataArray(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_object__o *waveInfoList; // x0
  Il2CppObject *current; // x26
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  void *monitor; // x1
  Il2CppClass *klass; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  void *v24; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  void *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct System_Object_array *items; // x8
  _QWORD *v47; // x9
  __int64 size; // x10
  Il2CppClass **v49; // x0
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC82EC & 1) == 0 )
  {
    sub_1C713B0(&BattleWaveInfoData_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleWaveInfoData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    byte_4CC82EC = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.waveInfoList, 0) )
    UserInterruptionQuestEntity__SetWaveInfoScript(this, v4);
  waveInfoList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoList;
  if ( !waveInfoList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    waveInfoList,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__) )
  {
    current = v52.fields._current;
    v7 = sub_1C715FC(BattleWaveInfoData_TypeInfo);
    BattleWaveInfoData___ctor((BattleWaveInfoData_o *)v7, 0);
    if ( !current )
      sub_1C71608(v8, v9);
    if ( !v7 )
      sub_1C71608(v8, v9);
    *(_QWORD *)(v7 + 16) = current[1].klass;
    monitor = current[1].monitor;
    *(_QWORD *)(v7 + 24) = monitor;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)monitor, v10, v11, v12, v13, v14, v15);
    klass = current[2].klass;
    *(_QWORD *)(v7 + 32) = klass;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)klass, v18, v19, v20, v21, v22, v23);
    v24 = current[2].monitor;
    *(_QWORD *)(v7 + 40) = v24;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)v24, v25, v26, v27, v28, v29, v30);
    *(_DWORD *)(v7 + 48) = current[3].klass;
    *(_DWORD *)(v7 + 104) = HIDWORD(current[3].klass);
    v31 = current[3].monitor;
    *(_QWORD *)(v7 + 112) = v31;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 112), (int32_t)v31, v32, v33, v34, v35, v36, v37);
    if ( !v3 )
      sub_1C71608(v38, v39);
    items = v3->fields._items;
    v47 = Method_System_Collections_Generic_List_BattleWaveInfoData__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1C71608(v38, v39);
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v7,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
    }
    else
    {
      v49 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v49[4] = (Il2CppClass *)v7;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v49 + 4), v7, v40, v41, v42, v43, v44, v45);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
  if ( !v3 )
LABEL_21:
    sub_1C71608(waveInfoList, v4);
  return (BattleWaveInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
}


System_String_o *UserInterruptionQuestEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4CC82EF & 1) == 0 )
  {
    sub_1C713B0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4CC82EF = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           phase,
           (const MethodInfo_31498E0 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
}


System_String_o *UserInterruptionQuestEntity__CreatePrimaryKey(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  return UserInterruptionQuestEntity__CreatePK(this->fields.userId, this->fields.questId, this->fields.phase, v2);
}


int32_t UserInterruptionQuestEntity__GetAlreadySortiePartyNum(
        UserInterruptionQuestEntity_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t v6; // w21
  void *waveInfoList; // x0
  __int64 v9; // x8

  if ( (byte_4CC82EE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
    byte_4CC82EE = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.waveInfoList, 0) )
    UserInterruptionQuestEntity__SetWaveInfoScript(this, v5);
  v6 = wave - 1;
  if ( wave == 1 )
    return 0;
  waveInfoList = this->fields.waveInfoList;
  if ( !waveInfoList )
    goto LABEL_16;
  if ( *((_DWORD *)waveInfoList + 6) < wave )
    return 1;
  waveInfoList = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)waveInfoList,
                   v6,
                   (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
  if ( !waveInfoList )
    goto LABEL_16;
  if ( BasicHelper__IsNullOrEmpty(*((System_Collections_ICollection_o **)waveInfoList + 7), 0) )
    return 1;
  waveInfoList = this->fields.waveInfoList;
  if ( !waveInfoList
    || (waveInfoList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)waveInfoList,
                         v6,
                         (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__)) == 0
    || (v9 = *((_QWORD *)waveInfoList + 7)) == 0 )
  {
LABEL_16:
    sub_1C71608(waveInfoList, v5);
  }
  return *(_DWORD *)(v9 + 24);
}


UserInterruptionQuestEntity_InterruptionInfo_o *UserInterruptionQuestEntity__GetInterruptionInfo(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *p_optionInfo; // x19
  UserInterruptionQuestEntity_InterruptionInfo_o *optionInfo; // x21
  System_String_o *interruptionInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CC82EA & 1) == 0 )
  {
    sub_1C713B0(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    sub_1C713B0(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_4CC82EA = 1;
  }
  p_optionInfo = (GrandQuestFolderBoardItem_o *)&this->fields.optionInfo;
  optionInfo = this->fields.optionInfo;
  if ( !optionInfo )
  {
    interruptionInfo = this->fields.interruptionInfo;
    if ( !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo);
    optionInfo = (UserInterruptionQuestEntity_InterruptionInfo_o *)Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
                                                                     interruptionInfo,
                                                                     (const MethodInfo_31A9808 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    p_optionInfo->klass = (GrandQuestFolderBoardItem_c *)optionInfo;
    sub_1C71354(p_optionInfo, (int32_t)optionInfo, v6, v7, v8, v9, v10, v11);
  }
  return optionInfo;
}


int32_t UserInterruptionQuestEntity__GetRestartWave(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *waveInfoList; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *v7; // x8

  if ( (byte_4CC82EB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    byte_4CC82EB = 1;
  }
  waveInfoList = (System_Collections_ICollection_o *)this->fields.waveInfoList;
  if ( !waveInfoList )
  {
    UserInterruptionQuestEntity__SetWaveInfoScript(this, method);
    waveInfoList = (System_Collections_ICollection_o *)this->fields.waveInfoList;
    if ( !waveInfoList )
      return 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(waveInfoList, 0);
  if ( IsNullOrEmpty )
    return 1;
  v7 = this->fields.waveInfoList;
  if ( !v7 )
    sub_1C71608(IsNullOrEmpty, v5);
  return v7->fields._size;
}


int32_t UserInterruptionQuestEntity__GetStartPartyNumber(
        UserInterruptionQuestEntity_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *waveInfoList; // x0

  if ( (byte_4CC82ED & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_1C713B0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
    byte_4CC82ED = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.waveInfoList, 0) )
    UserInterruptionQuestEntity__SetWaveInfoScript(this, v5);
  waveInfoList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoList;
  if ( !waveInfoList )
    goto LABEL_12;
  if ( waveInfoList->fields._size < wave )
    return 1;
  waveInfoList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                waveInfoList,
                                                                wave - 1,
                                                                (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
  if ( !waveInfoList )
LABEL_12:
    sub_1C71608(waveInfoList, v5);
  if ( SHIDWORD(waveInfoList[1].monitor) <= 1 )
    return 1;
  else
    return HIDWORD(waveInfoList[1].monitor);
}


void UserInterruptionQuestEntity__SetWaveInfoScript(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  System_String_o *waveInfo; // x20
  Il2CppObject *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CC82E9 & 1) == 0 )
  {
    sub_1C713B0(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
    sub_1C713B0(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_4CC82E9 = 1;
  }
  waveInfo = this->fields.waveInfo;
  if ( !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo);
  v4 = Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
         waveInfo,
         (const MethodInfo_31A9808 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
  this->fields.waveInfoList = (struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *)v4;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void UserInterruptionQuestEntity_InterruptionInfo___ctor(
        UserInterruptionQuestEntity_InterruptionInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void UserInterruptionQuestEntity_Wave___ctor(UserInterruptionQuestEntity_Wave_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleWaveInfoData_BattleItemInfo_array *UserInterruptionQuestEntity_Wave__get_battleItemInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._battleItemInfos_k__BackingField;
}


DropInfo_array *UserInterruptionQuestEntity_Wave__get_dropInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._dropInfos_k__BackingField;
}


System_Int32_array *UserInterruptionQuestEntity_Wave__get_equipSkillChargeNum(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._equipSkillChargeNum_k__BackingField;
}


System_Int32_array *UserInterruptionQuestEntity_Wave__get_firstSortieWaves(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._firstSortieWaves_k__BackingField;
}


int32_t UserInterruptionQuestEntity_Wave__get_star(UserInterruptionQuestEntity_Wave_o *this, const MethodInfo *method)
{
  return this->fields._star_k__BackingField;
}


int32_t UserInterruptionQuestEntity_Wave__get_startPartyId(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._startPartyId_k__BackingField;
}


int32_t UserInterruptionQuestEntity_Wave__get_turn(UserInterruptionQuestEntity_Wave_o *this, const MethodInfo *method)
{
  return this->fields._turn_k__BackingField;
}


int32_t UserInterruptionQuestEntity_Wave__get_wave(UserInterruptionQuestEntity_Wave_o *this, const MethodInfo *method)
{
  return this->fields._wave_k__BackingField;
}


void UserInterruptionQuestEntity_Wave__set_battleItemInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        BattleWaveInfoData_BattleItemInfo_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._battleItemInfos_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._battleItemInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserInterruptionQuestEntity_Wave__set_dropInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        DropInfo_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._dropInfos_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._dropInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserInterruptionQuestEntity_Wave__set_equipSkillChargeNum(
        UserInterruptionQuestEntity_Wave_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._equipSkillChargeNum_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._equipSkillChargeNum_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserInterruptionQuestEntity_Wave__set_firstSortieWaves(
        UserInterruptionQuestEntity_Wave_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._firstSortieWaves_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._firstSortieWaves_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserInterruptionQuestEntity_Wave__set_star(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._star_k__BackingField = value;
}


void UserInterruptionQuestEntity_Wave__set_startPartyId(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._startPartyId_k__BackingField = value;
}


void UserInterruptionQuestEntity_Wave__set_turn(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._turn_k__BackingField = value;
}


void UserInterruptionQuestEntity_Wave__set_wave(
        UserInterruptionQuestEntity_Wave_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._wave_k__BackingField = value;
}