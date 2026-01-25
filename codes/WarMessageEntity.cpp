void WarMessageEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  System_Collections_Generic_HashSet_T__o *v7; // x19
  struct WarMessageEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CEF8B8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C7BAE8(&WarMessageEntity_TypeInfo);
    sub_1C7BAE8(&StringLiteral_15537/*"WAR_MESSAGE_{0}_{1}"*/);
    byte_4CEF8B8 = 1;
  }
  WarMessageEntity_TypeInfo->static_fields->SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_15537/*"WAR_MESSAGE_{0}_{1}"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)WarMessageEntity_TypeInfo->static_fields,
    StringLiteral_15537/*"WAR_MESSAGE_{0}_{1}"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = (System_Collections_Generic_HashSet_T__o *)sub_1C7BD34(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v7,
    (const MethodInfo_36EFD64 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  static_fields = WarMessageEntity_TypeInfo->static_fields;
  static_fields->checkList = (struct System_Collections_Generic_HashSet_string__o *)v7;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->checkList, (int32_t)v7, v9, v10, v11, v12, v13, v14);
}


void WarMessageEntity___ctor(WarMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF8B7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF8B7 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


bool WarMessageEntity__CheckCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4CEF8B2 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    byte_4CEF8B2 = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


bool WarMessageEntity__CheckFrequencyCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  bool v3; // w8
  const MethodInfo *v4; // x1
  System_String_o *SaveKey; // x0
  const MethodInfo *v6; // x1
  WarMessageEntity_c *v7; // x0
  System_Collections_Generic_HashSet_T__o *checkList; // x20
  Il2CppObject *v9; // x0
  __int64 v10; // x1

  if ( (byte_4CEF8B3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1C7BAE8(&WarMessageEntity_TypeInfo);
    byte_4CEF8B3 = 1;
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
      return UnityEngine_PlayerPrefs__GetInt(SaveKey, 0, 0) == 0;
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
          sub_1C7BD40(v9, v10);
        return !System_Collections_Generic_HashSet_object___Contains(
                  checkList,
                  v9,
                  (const MethodInfo_36F0458 *)Method_System_Collections_Generic_HashSet_string__Contains__);
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


bool WarMessageEntity__CheckValid(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return WarMessageEntity__CheckCondition(this, method) && WarMessageEntity__CheckFrequencyCondition(this, v3);
}


System_String_o *WarMessageEntity__CreatePK(int32_t warId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4CEF8B6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4CEF8B6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           idx,
           (const MethodInfo_316E57C *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarMessageEntity__CreatePrimaryKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t idx; // w19
  int32_t warId; // w20

  if ( (byte_4CEF8B5 & 1) == 0 )
  {
    sub_1C7BAE8(&WarMessageEntity_TypeInfo);
    byte_4CEF8B5 = 1;
  }
  warId = this->fields.warId;
  idx = this->fields.idx;
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  return WarMessageEntity__CreatePK(warId, idx, v2);
}


bool WarMessageEntity__IsNotClearedStartQuest(WarMessageEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int klass; // w8
  int32_t warId; // w19
  void *monitor; // x19

  if ( (byte_4CEF8B4 & 1) == 0 )
  {
    sub_1C7BAE8(&CondType_TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&TerminalPramsManager_TypeInfo);
    byte_4CEF8B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.warId,
                     (const MethodInfo_342E2FC *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0 )
  {
    sub_1C7BD40(Instance, v4);
  }
  klass = (int)Instance[5].klass;
  if ( klass == 2 )
  {
    monitor = Instance[5].monitor;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_40887944((int32_t)monitor, -1, 0, 0);
  }
  if ( klass != 1 )
    return 1;
  warId = this->fields.warId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  return TerminalPramsManager__IsWarStartedId(warId, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarMessageEntity__Save(WarMessageEntity_o *this, bool isDecided, const MethodInfo *method)
{
  int32_t frequencyType; // w8
  System_String_o *v6; // x0
  WarMessageEntity_c *v7; // x0
  System_Collections_Generic_HashSet_T__o *checkList; // x20
  Il2CppObject *SaveKey; // x0
  __int64 v10; // x1

  if ( (byte_4CEF8B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C7BAE8(&WarMessageEntity_TypeInfo);
    byte_4CEF8B1 = 1;
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
        sub_1C7BD40(SaveKey, v10);
      System_Collections_Generic_HashSet_object___Add(
        checkList,
        SaveKey,
        (const MethodInfo_36F0F48 *)Method_System_Collections_Generic_HashSet_string__Add__);
    }
    else if ( frequencyType == 1 )
    {
      v6 = WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      UnityEngine_PlayerPrefs__SetInt(v6, 1, 0);
      UnityEngine_PlayerPrefs__Save(0);
    }
  }
}


int32_t WarMessageEntity__get_FrequencyType(WarMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.frequencyType;
}


System_String_o *WarMessageEntity__get_SaveKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  WarMessageEntity_c *v3; // x0
  System_String_o *SAVE_KEY_FORMAT; // x20
  Il2CppObject *v5; // x21
  Il2CppObject *v6; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4CEF8B0 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&WarMessageEntity_TypeInfo);
    byte_4CEF8B0 = 1;
  }
  v3 = WarMessageEntity_TypeInfo;
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
    v3 = WarMessageEntity_TypeInfo;
  }
  SAVE_KEY_FORMAT = v3->static_fields->SAVE_KEY_FORMAT;
  warId = this->fields.warId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  idx = this->fields.idx;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  return System_String__Format_64218220(SAVE_KEY_FORMAT, v5, v6, 0);
}