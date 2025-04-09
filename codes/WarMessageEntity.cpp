void __fastcall WarMessageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_T__o *v7; // x19
  struct WarMessageEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_49BBFE1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_string___ctor__, v1);
    sub_1B4CF90(&System_Collections_Generic_HashSet_string__TypeInfo, v4);
    sub_1B4CF90(&WarMessageEntity_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_15191/*"WAR_MESSAGE_{0}_{1}"*/, v6);
    byte_49BBFE1 = 1;
  }
  WarMessageEntity_TypeInfo->static_fields->SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_15191/*"WAR_MESSAGE_{0}_{1}"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)WarMessageEntity_TypeInfo->static_fields, StringLiteral_15191/*"WAR_MESSAGE_{0}_{1}"*/, v2, v3);
  v7 = (System_Collections_Generic_HashSet_T__o *)sub_1B4D1DC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v7,
    (const MethodInfo_3444800 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  static_fields = WarMessageEntity_TypeInfo->static_fields;
  static_fields->checkList = (struct System_Collections_Generic_HashSet_string__o *)v7;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->checkList, (int32_t)v7, v9, v10);
}


void __fastcall WarMessageEntity___ctor(WarMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49BBFE0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_string___ctor__, method);
    byte_49BBFE0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_319B530 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall WarMessageEntity__CheckCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_49BBFDB & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, method);
    byte_49BBFDB = 1;
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
  __int64 v3; // x1
  bool v4; // w8
  const MethodInfo *v5; // x1
  System_String_o *SaveKey; // x0
  const MethodInfo *v7; // x1
  WarMessageEntity_c *v8; // x0
  System_Collections_Generic_HashSet_T__o *checkList; // x20
  Il2CppObject *v10; // x0
  __int64 v11; // x1

  if ( (byte_49BBFDC & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_string__Contains__, method);
    sub_1B4CF90(&WarMessageEntity_TypeInfo, v3);
    byte_49BBFDC = 1;
  }
  v4 = 1;
  switch ( this->fields.frequencyType )
  {
    case 0:
      return 0;
    case 1:
      if ( !WarMessageEntity__IsNotClearedStartQuest(this, method) )
        return 0;
      SaveKey = WarMessageEntity__get_SaveKey(this, v5);
      return UnityEngine_PlayerPrefs__GetInt(SaveKey, 0, 0LL) == 0;
    case 2:
      if ( WarMessageEntity__IsNotClearedStartQuest(this, method) )
      {
        v8 = WarMessageEntity_TypeInfo;
        if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
          v8 = WarMessageEntity_TypeInfo;
        }
        checkList = (System_Collections_Generic_HashSet_T__o *)v8->static_fields->checkList;
        v10 = (Il2CppObject *)WarMessageEntity__get_SaveKey(this, v7);
        if ( !checkList )
          sub_1B4D1EC(v10, v11);
        return !System_Collections_Generic_HashSet_object___Contains(
                  checkList,
                  v10,
                  (const MethodInfo_3444EF4 *)Method_System_Collections_Generic_HashSet_string__Contains__);
      }
      else
      {
        return 0;
      }
    case 6:
      return WarMessageEntity__IsNotClearedStartQuest(this, method);
    default:
      return v4;
  }
}


bool __fastcall WarMessageEntity__CheckValid(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return WarMessageEntity__CheckCondition(this, method) && WarMessageEntity__CheckFrequencyCondition(this, v3);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarMessageEntity__CreatePK(int32_t warId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_49BBFDF & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_49BBFDF = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           idx,
           (const MethodInfo_2EFFCAC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarMessageEntity__CreatePrimaryKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t idx; // w19
  int32_t warId; // w20

  if ( (byte_49BBFDE & 1) == 0 )
  {
    sub_1B4CF90(&WarMessageEntity_TypeInfo, method);
    byte_49BBFDE = 1;
  }
  warId = this->fields.warId;
  idx = this->fields.idx;
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  return WarMessageEntity__CreatePK(warId, idx, v2);
}


bool __fastcall WarMessageEntity__IsNotClearedStartQuest(WarMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  int klass; // w8
  int32_t warId; // w19
  void *monitor; // x19

  if ( (byte_49BBFDD & 1) == 0 )
  {
    sub_1B4CF90(&CondType_TypeInfo, method);
    sub_1B4CF90(&Method_DataManager_GetMasterData_WarMaster___, v3);
    sub_1B4CF90(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v4);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v6);
    byte_49BBFDD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.warId,
                     (const MethodInfo_319D99C *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B4D1EC(Instance, v8);
  }
  klass = (int)Instance[5].klass;
  if ( klass == 2 )
  {
    monitor = Instance[5].monitor;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    return !CondType__IsQuestClear_38126524((int32_t)monitor, -1, 0, 0LL);
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
  __int64 v5; // x1
  int32_t frequencyType; // w8
  System_String_o *v7; // x0
  WarMessageEntity_c *v8; // x0
  System_Collections_Generic_HashSet_T__o *checkList; // x20
  Il2CppObject *SaveKey; // x0
  __int64 v11; // x1

  if ( (byte_49BBFDA & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_HashSet_string__Add__, isDecided);
    sub_1B4CF90(&WarMessageEntity_TypeInfo, v5);
    byte_49BBFDA = 1;
  }
  if ( isDecided )
  {
    frequencyType = this->fields.frequencyType;
    if ( frequencyType == 2 )
    {
      v8 = WarMessageEntity_TypeInfo;
      if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
        v8 = WarMessageEntity_TypeInfo;
      }
      checkList = (System_Collections_Generic_HashSet_T__o *)v8->static_fields->checkList;
      SaveKey = (Il2CppObject *)WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      if ( !checkList )
        sub_1B4D1EC(SaveKey, v11);
      System_Collections_Generic_HashSet_object___Add(
        checkList,
        SaveKey,
        (const MethodInfo_34459E4 *)Method_System_Collections_Generic_HashSet_string__Add__);
    }
    else if ( frequencyType == 1 )
    {
      v7 = WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      UnityEngine_PlayerPrefs__SetInt(v7, 1, 0LL);
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
  __int64 v6; // x1
  WarMessageEntity_c *v7; // x0
  System_String_o *SAVE_KEY_FORMAT; // x20
  Il2CppObject *v9; // x21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49BBFD9 & 1) == 0 )
  {
    sub_1B4CF90(&int_TypeInfo, method);
    sub_1B4CF90(&WarMessageEntity_TypeInfo, v6);
    byte_49BBFD9 = 1;
  }
  v7 = WarMessageEntity_TypeInfo;
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
    v7 = WarMessageEntity_TypeInfo;
  }
  SAVE_KEY_FORMAT = v7->static_fields->SAVE_KEY_FORMAT;
  warId = this->fields.warId;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v2, v3, v4);
  idx = this->fields.idx;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx, v10, v11, v12);
  return System_String__Format_61134760(SAVE_KEY_FORMAT, v9, v13, 0LL);
}