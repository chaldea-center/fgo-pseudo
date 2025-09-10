void WarMessageEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_HashSet_T__o *v3; // x19
  struct WarMessageEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C2852E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_1C2D490(&WarMessageEntity_TypeInfo);
    sub_1C2D490(&StringLiteral_15477/*"WAR_MESSAGE_{0}_{1}"*/);
    byte_4C2852E = 1;
  }
  WarMessageEntity_TypeInfo->static_fields->SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_15477/*"WAR_MESSAGE_{0}_{1}"*/;
  sub_1C2D434((CGThumbnailListItem_o *)WarMessageEntity_TypeInfo->static_fields, StringLiteral_15477/*"WAR_MESSAGE_{0}_{1}"*/, v1, v2);
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  static_fields = WarMessageEntity_TypeInfo->static_fields;
  static_fields->checkList = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->checkList, (int32_t)v3, v5, v6);
}


void WarMessageEntity___ctor(WarMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C2852D & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_string___ctor__);
    byte_4C2852D = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_338592C *)Method_DataEntityBase_string___ctor__);
}


bool WarMessageEntity__CheckCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4C28528 & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    byte_4C28528 = 1;
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

  if ( (byte_4C28529 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_1C2D490(&WarMessageEntity_TypeInfo);
    byte_4C28529 = 1;
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
          sub_1C2D6EC(v9, v10);
        return !System_Collections_Generic_HashSet_object___Contains(
                  checkList,
                  v9,
                  (const MethodInfo_364147C *)Method_System_Collections_Generic_HashSet_string__Contains__);
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
  if ( (byte_4C2852C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4C2852C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           idx,
           (const MethodInfo_30CCAD8 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarMessageEntity__CreatePrimaryKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t idx; // w19
  int32_t warId; // w20

  if ( (byte_4C2852B & 1) == 0 )
  {
    sub_1C2D490(&WarMessageEntity_TypeInfo);
    byte_4C2852B = 1;
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

  if ( (byte_4C2852A & 1) == 0 )
  {
    sub_1C2D490(&CondType_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C2D490(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&TerminalPramsManager_TypeInfo);
    byte_4C2852A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_WarMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.warId,
                     (const MethodInfo_3387D98 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0 )
  {
    sub_1C2D6EC(Instance, v4);
  }
  klass = (int)Instance[5].klass;
  if ( klass == 2 )
  {
    monitor = Instance[5].monitor;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_40102980((int32_t)monitor, -1, 0, 0);
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

  if ( (byte_4C28527 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_1C2D490(&WarMessageEntity_TypeInfo);
    byte_4C28527 = 1;
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
        sub_1C2D6EC(SaveKey, v10);
      System_Collections_Generic_HashSet_object___Add(
        checkList,
        SaveKey,
        (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_string__Add__);
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

  if ( (byte_4C28526 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&WarMessageEntity_TypeInfo);
    byte_4C28526 = 1;
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
  return System_String__Format_63499156(SAVE_KEY_FORMAT, v8, v12, 0);
}