void UserInterruptionQuestEntity___ctor(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59717B1 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59717B1 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  void *monitor; // x1
  Il2CppClass *klass; // d0
  Il2CppClass *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  void *v25; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  void *v32; // x1
  int v33; // w8
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  Il2CppClass *v58; // x1
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_59717AD & 1) == 0 )
  {
    sub_2213A60(&BattleWaveInfoData_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    byte_59717AD = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.waveInfoList, 0) )
    UserInterruptionQuestEntity__SetWaveInfoScript(this, v4);
  waveInfoList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoList;
  if ( !waveInfoList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    waveInfoList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
  v61 = v60;
  v60.fields._list = 0;
  *(_QWORD *)&v60.fields._index = &v61;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__) )
  {
    current = v61.fields._current;
    v7 = sub_2213CCC(BattleWaveInfoData_TypeInfo);
    BattleWaveInfoData___ctor((BattleWaveInfoData_o *)v7, 0);
    if ( !current )
      sub_2213CDC(v8, v9);
    if ( !v7 )
      sub_2213CDC(v8, v9);
    monitor = current[1].monitor;
    klass = current[1].klass;
    *(_QWORD *)(v7 + 24) = monitor;
    *(_QWORD *)(v7 + 16) = klass;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)monitor, v10, v11, v12, v13, v14, v15);
    v18 = current[2].klass;
    *(_QWORD *)(v7 + 32) = v18;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)v18, v19, v20, v21, v22, v23, v24);
    v25 = current[2].monitor;
    *(_QWORD *)(v7 + 40) = v25;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)v25, v26, v27, v28, v29, v30, v31);
    v32 = current[3].monitor;
    v33 = (int)current[3].klass;
    *(_QWORD *)(v7 + 112) = v32;
    *(_DWORD *)(v7 + 48) = v33;
    *(_DWORD *)(v7 + 104) = HIDWORD(current[3].klass);
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 112), (int32_t)v32, v34, v35, v36, v37, v38, v39);
    if ( !v3
      || (items = v3->fields._items,
          v49 = Method_System_Collections_Generic_List_BattleWaveInfoData__Add__,
          ++v3->fields._version,
          !items) )
    {
      sub_2213CDC(v40, v41);
    }
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v7,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v7;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v51 + 4), v7, v42, v43, v44, v45, v46, v47);
    }
    v58 = current[4].klass;
    *(_QWORD *)(v7 + 144) = v58;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 144), (int32_t)v58, v52, v53, v54, v55, v56, v57);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
  if ( !v3 )
LABEL_21:
    sub_2213CDC(waveInfoList, v4);
  return (BattleWaveInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
}


System_String_o *UserInterruptionQuestEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_59717B0 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_59717B0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           phase,
           (const MethodInfo_3854A80 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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

  if ( (byte_59717AF & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
    byte_59717AF = 1;
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
                   (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
  if ( !waveInfoList )
    goto LABEL_16;
  if ( BasicHelper__IsNullOrEmpty(*((System_Collections_ICollection_o **)waveInfoList + 7), 0) )
    return 1;
  waveInfoList = this->fields.waveInfoList;
  if ( !waveInfoList
    || (waveInfoList = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)waveInfoList,
                         v6,
                         (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__)) == 0
    || (v9 = *((_QWORD *)waveInfoList + 7)) == 0 )
  {
LABEL_16:
    sub_2213CDC(waveInfoList, v5);
  }
  return *(_DWORD *)(v9 + 24);
}


UserInterruptionQuestEntity_InterruptionInfo_o *UserInterruptionQuestEntity__GetInterruptionInfo(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_optionInfo; // x19
  UserInterruptionQuestEntity_InterruptionInfo_o *optionInfo; // x21
  System_String_o *interruptionInfo; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_59717AB & 1) == 0 )
  {
    sub_2213A60(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    sub_2213A60(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_59717AB = 1;
  }
  p_optionInfo = (MissionNaviTransitionBoardItem_o *)&this->fields.optionInfo;
  optionInfo = this->fields.optionInfo;
  if ( !optionInfo )
  {
    interruptionInfo = this->fields.interruptionInfo;
    if ( !*(&Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo, method);
    optionInfo = (UserInterruptionQuestEntity_InterruptionInfo_o *)Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
                                                                     interruptionInfo,
                                                                     (const MethodInfo_38C2BC8 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    p_optionInfo->klass = (MissionNaviTransitionBoardItem_c *)optionInfo;
    sub_2213A04(p_optionInfo, (int32_t)optionInfo, v6, v7, v8, v9, v10, v11);
  }
  return optionInfo;
}


int32_t UserInterruptionQuestEntity__GetRestartWave(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  System_Collections_ICollection_o *waveInfoList; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *v7; // x8

  if ( (byte_59717AC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    byte_59717AC = 1;
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
    sub_2213CDC(IsNullOrEmpty, v5);
  return v7->fields._size;
}


int32_t UserInterruptionQuestEntity__GetStartPartyNumber(
        UserInterruptionQuestEntity_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_object__o *waveInfoList; // x0

  if ( (byte_59717AE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
    byte_59717AE = 1;
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
                                                                (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Item__);
  if ( !waveInfoList )
LABEL_12:
    sub_2213CDC(waveInfoList, v5);
  if ( SHIDWORD(waveInfoList[1].monitor) <= 1 )
    return 1;
  else
    return HIDWORD(waveInfoList[1].monitor);
}


void UserInterruptionQuestEntity__SetWaveInfoScript(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  System_String_o *waveInfo; // x20
  Il2CppObject *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_59717AA & 1) == 0 )
  {
    sub_2213A60(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
    sub_2213A60(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_59717AA = 1;
  }
  waveInfo = this->fields.waveInfo;
  if ( !*(&Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo, method);
  v4 = Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
         waveInfo,
         (const MethodInfo_38C2BC8 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
  this->fields.waveInfoList = (struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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


System_Int32_array *UserInterruptionQuestEntity_Wave__get_lastSortieWaves(
        UserInterruptionQuestEntity_Wave_o *this,
        const MethodInfo *method)
{
  return this->fields._lastSortieWaves_k__BackingField;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._battleItemInfos_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._battleItemInfos_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._dropInfos_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._dropInfos_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._equipSkillChargeNum_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._equipSkillChargeNum_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._firstSortieWaves_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._firstSortieWaves_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void UserInterruptionQuestEntity_Wave__set_lastSortieWaves(
        UserInterruptionQuestEntity_Wave_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._lastSortieWaves_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._lastSortieWaves_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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