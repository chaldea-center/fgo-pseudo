void __fastcall UserInterruptionQuestEntity___ctor(UserInterruptionQuestEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BEA2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5BEA2 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


BattleWaveInfoData_array *__fastcall UserInterruptionQuestEntity__ConvertToBattleWaveInfoDataArray(
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
  void *monitor; // x1
  Il2CppClass *klass; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  void *v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5BEA0 & 1) == 0 )
  {
    sub_1B885B0(&BattleWaveInfoData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleWaveInfoData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
    byte_4A5BEA0 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleWaveInfoData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleWaveInfoData___ctor__);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.waveInfoList, 0LL) )
    UserInterruptionQuestEntity__SetWaveInfoScript(this, v4);
  waveInfoList = (System_Collections_Generic_List_object__o *)this->fields.waveInfoList;
  if ( !waveInfoList )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    waveInfoList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__MoveNext__) )
  {
    current = v29.fields._current;
    v7 = sub_1B887FC(BattleWaveInfoData_TypeInfo);
    BattleWaveInfoData___ctor((BattleWaveInfoData_o *)v7, 0LL);
    if ( !current )
      sub_1B8880C(v8, v9);
    if ( !v7 )
      sub_1B8880C(v8, v9);
    *(_QWORD *)(v7 + 16) = current[1].klass;
    monitor = current[1].monitor;
    *(_QWORD *)(v7 + 24) = monitor;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)monitor, v10, v11);
    klass = current[2].klass;
    *(_QWORD *)(v7 + 32) = klass;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)klass, v14, v15);
    v16 = current[2].monitor;
    *(_QWORD *)(v7 + 40) = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)v16, v17, v18);
    *(_DWORD *)(v7 + 48) = current[3].klass;
    if ( !v3 )
      sub_1B8880C(v19, v20);
    items = v3->fields._items;
    v24 = Method_System_Collections_Generic_List_BattleWaveInfoData__Add__;
    ++v3->fields._version;
    if ( !items )
      sub_1B8880C(v19, v20);
    size = v3->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)v7,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v7;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), v7, v21, v22);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_UserInterruptionQuestEntity_Wave__Dispose__);
  if ( !v3 )
LABEL_21:
    sub_1B8880C(waveInfoList, v4);
  return (BattleWaveInfoData_array *)System_Collections_Generic_List_object___ToArray(
                                       v3,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleWaveInfoData__ToArray__);
}


System_String_o *__fastcall UserInterruptionQuestEntity__CreatePK(
        int64_t userId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  if ( (byte_4A5BEA1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_long__int__int___);
    byte_4A5BEA1 = 1;
  }
  return DataEntityBase__CreateMultiplePK_long__int__int_(
           userId,
           questId,
           phase,
           (const MethodInfo_2E7E178 *)Method_DataEntityBase_CreateMultiplePK_long__int__int___);
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
  ServantStatusBattleListViewItem_o *p_optionInfo; // x19
  UserInterruptionQuestEntity_InterruptionInfo_o *optionInfo; // x21
  System_String_o *interruptionInfo; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5BE9E & 1) == 0 )
  {
    sub_1B885B0(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    sub_1B885B0(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_4A5BE9E = 1;
  }
  p_optionInfo = (ServantStatusBattleListViewItem_o *)&this->fields.optionInfo;
  optionInfo = this->fields.optionInfo;
  if ( !optionInfo )
  {
    interruptionInfo = this->fields.interruptionInfo;
    if ( !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo);
    optionInfo = (UserInterruptionQuestEntity_InterruptionInfo_o *)Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
                                                                     interruptionInfo,
                                                                     (const MethodInfo_2ED48E8 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_UserInterruptionQuestEntity_InterruptionInfo___);
    p_optionInfo->klass = (ServantStatusBattleListViewItem_c *)optionInfo;
    sub_1B88554(p_optionInfo, (int32_t)optionInfo, v6, v7);
  }
  return optionInfo;
}


int32_t __fastcall UserInterruptionQuestEntity__GetRestartWave(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *waveInfoList; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *v7; // x8

  if ( (byte_4A5BE9F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__get_Count__);
    byte_4A5BE9F = 1;
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
  v7 = this->fields.waveInfoList;
  if ( !v7 )
    sub_1B8880C(IsNullOrEmpty, v5);
  return v7->fields._size;
}


void __fastcall UserInterruptionQuestEntity__SetWaveInfoScript(
        UserInterruptionQuestEntity_o *this,
        const MethodInfo *method)
{
  System_String_o *waveInfo; // x20
  Il2CppObject *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5BE9D & 1) == 0 )
  {
    sub_1B885B0(&Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
    sub_1B885B0(&Newtonsoft_Json_JsonConvert_TypeInfo);
    byte_4A5BE9D = 1;
  }
  waveInfo = this->fields.waveInfo;
  if ( !Newtonsoft_Json_JsonConvert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Newtonsoft_Json_JsonConvert_TypeInfo);
  v4 = Newtonsoft_Json_JsonConvert__DeserializeObject_object_(
         waveInfo,
         (const MethodInfo_2ED48E8 *)Method_Newtonsoft_Json_JsonConvert_DeserializeObject_List_UserInterruptionQuestEntity_Wave____);
  this->fields.waveInfoList = (struct System_Collections_Generic_List_UserInterruptionQuestEntity_Wave__o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
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

  this->fields._battleItemInfos_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._battleItemInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_dropInfos(
        UserInterruptionQuestEntity_Wave_o *this,
        DropInfo_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._dropInfos_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._dropInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall UserInterruptionQuestEntity_Wave__set_equipSkillChargeNum(
        UserInterruptionQuestEntity_Wave_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._equipSkillChargeNum_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._equipSkillChargeNum_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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