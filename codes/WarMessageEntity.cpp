void __fastcall WarMessageEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_Collections_Generic_HashSet_T__o *v3; // x19
  struct WarMessageEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5C1E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1B885B0(&WarMessageEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_15492/*"WAR_MESSAGE_{0}_{1}"*/);
    byte_4A5C1E8 = 1;
  }
  WarMessageEntity_TypeInfo->static_fields->SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_15492/*"WAR_MESSAGE_{0}_{1}"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)WarMessageEntity_TypeInfo->static_fields,
    StringLiteral_15492/*"WAR_MESSAGE_{0}_{1}"*/,
    v1,
    v2);
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  static_fields = WarMessageEntity_TypeInfo->static_fields;
  static_fields->checkList = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->checkList, (int32_t)v3, v5, v6);
}


void __fastcall WarMessageEntity___ctor(WarMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1E7 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_string___ctor__);
    byte_4A5C1E7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_311D7AC *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall WarMessageEntity__CheckCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4A5C1E2 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    byte_4A5C1E2 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}


bool __fastcall WarMessageEntity__CheckFrequencyCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  bool v3; // w8
  const MethodInfo *v4; // x1
  System_String_o *SaveKey; // x0
  const MethodInfo *v6; // x1
  WarMessageEntity_c *v7; // x0
  System_Collections_Generic_HashSet_T__o *checkList; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5C1E3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1B885B0(&WarMessageEntity_TypeInfo);
    byte_4A5C1E3 = 1;
  }
  v3 = 1;
  switch ( this->fields.frequencyType )
  {
    case 0:
      return 0;
    case 1:
      if ( !WarMessageEntity__IsNotClearedStartQuest(this, method) )
        return 0;
      SaveKey = WarMessageEntity__get_SaveKey(this, v4);
      return UnityEngine_PlayerPrefs__GetInt(SaveKey, 0, 0LL) == 0;
    case 2:
      if ( WarMessageEntity__IsNotClearedStartQuest(this, method) )
      {
        v7 = WarMessageEntity_TypeInfo;
        if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
          v7 = WarMessageEntity_TypeInfo;
        }
        checkList = (System_Collections_Generic_HashSet_T__o *)v7->static_fields->checkList;
        v9 = (Il2CppObject *)WarMessageEntity__get_SaveKey(this, v6);
        if ( !checkList )
          sub_1B8880C(v9, v10);
        return !System_Collections_Generic_HashSet_object___Contains(
                  checkList,
                  v9,
                  (const MethodInfo_33B9878 *)Method_System_Collections_Generic_HashSet_string__Contains__);
      }
      else
      {
        return 0;
      }
    case 6:
      return WarMessageEntity__IsNotClearedStartQuest(this, method);
    default:
      return v3;
  }
}


bool __fastcall WarMessageEntity__CheckValid(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return WarMessageEntity__CheckCondition(this, method) && WarMessageEntity__CheckFrequencyCondition(this, v3);
}


System_String_o *__fastcall WarMessageEntity__CreatePK(int32_t warId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4A5C1E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4A5C1E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           idx,
           (const MethodInfo_2E7DB2C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarMessageEntity__CreatePrimaryKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t idx; // w19
  int32_t warId; // w20

  if ( (byte_4A5C1E5 & 1) == 0 )
  {
    sub_1B885B0(&WarMessageEntity_TypeInfo);
    byte_4A5C1E5 = 1;
  }
  warId = this->fields.warId;
  idx = this->fields.idx;
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  return WarMessageEntity__CreatePK(warId, idx, v2);
}


bool __fastcall WarMessageEntity__IsNotClearedStartQuest(WarMessageEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int klass; // w8
  int32_t warId; // w19
  void *monitor; // x19

  if ( (byte_4A5C1E4 & 1) == 0 )
  {
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5C1E4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.warId,
                     (const MethodInfo_311D934 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  klass = (int)Instance[5].klass;
  if ( klass == 2 )
  {
    monitor = Instance[5].monitor;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_37596684((int32_t)monitor, -1, 0, 0LL);
  }
  if ( klass != 1 )
    return 1;
  warId = this->fields.warId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsWarStartedId(warId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarMessageEntity__Save(WarMessageEntity_o *this, bool isDecided, const MethodInfo *method)
{
  int32_t frequencyType; // w8
  System_String_o *v6; // x0
  WarMessageEntity_c *v7; // x0
  System_Collections_Generic_HashSet_T__o *checkList; // x20
  Il2CppObject *SaveKey; // x0
  __int64 v10; // x1

  if ( (byte_4A5C1E1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1B885B0(&WarMessageEntity_TypeInfo);
    byte_4A5C1E1 = 1;
  }
  if ( isDecided )
  {
    frequencyType = this->fields.frequencyType;
    if ( frequencyType == 2 )
    {
      v7 = WarMessageEntity_TypeInfo;
      if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
        v7 = WarMessageEntity_TypeInfo;
      }
      checkList = (System_Collections_Generic_HashSet_T__o *)v7->static_fields->checkList;
      SaveKey = (Il2CppObject *)WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      if ( !checkList )
        sub_1B8880C(SaveKey, v10);
      System_Collections_Generic_HashSet_object___Add(
        checkList,
        SaveKey,
        (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_string__Add__);
    }
    else if ( frequencyType == 1 )
    {
      v6 = WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      UnityEngine_PlayerPrefs__SetInt(v6, 1, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
    }
  }
}


int32_t __fastcall WarMessageEntity__get_FrequencyType(WarMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.frequencyType;
}


System_String_o *__fastcall WarMessageEntity__get_SaveKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  WarMessageEntity_c *v6; // x0
  System_String_o *SAVE_KEY_FORMAT; // x20
  Il2CppObject *v8; // x21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5C1E0 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&WarMessageEntity_TypeInfo);
    byte_4A5C1E0 = 1;
  }
  v6 = WarMessageEntity_TypeInfo;
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
    v6 = WarMessageEntity_TypeInfo;
  }
  SAVE_KEY_FORMAT = v6->static_fields->SAVE_KEY_FORMAT;
  warId = this->fields.warId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v2, v3, v4);
  idx = this->fields.idx;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx, v9, v10, v11);
  return System_String__Format_61721404(SAVE_KEY_FORMAT, v8, v12, 0LL);
}