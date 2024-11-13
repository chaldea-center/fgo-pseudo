void __fastcall WarMessageEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_HashSet_T__o *v17; // x19
  struct WarMessageEntity_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B172A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_string__TypeInfo, v8, v9);
    sub_1BCA7E0(&WarMessageEntity_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_15659/*"WAR_MESSAGE_{0}_{1}"*/, v12, v13);
    byte_4B172A1 = 1;
  }
  WarMessageEntity_TypeInfo->static_fields->SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_15659/*"WAR_MESSAGE_{0}_{1}"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarMessageEntity_TypeInfo->static_fields,
    StringLiteral_15659/*"WAR_MESSAGE_{0}_{1}"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v17 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_string__TypeInfo,
                                                     v14,
                                                     v15,
                                                     v16);
  System_Collections_Generic_HashSet_object____ctor(
    v17,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  static_fields = WarMessageEntity_TypeInfo->static_fields;
  static_fields->checkList = (struct System_Collections_Generic_HashSet_string__o *)v17;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->checkList, (int64_t)v17, v19, v20, v21, v22, v23, v24);
}


void __fastcall WarMessageEntity___ctor(WarMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B172A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_string___ctor__, method, v2);
    byte_4B172A0 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_31B2CB8 *)Method_DataEntityBase_string___ctor__);
}


bool __fastcall WarMessageEntity__CheckCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t condId; // w20
  int32_t condType; // w21
  int64_t condNum; // x19

  if ( (byte_4B1729B & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    byte_4B1729B = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL);
}


bool __fastcall WarMessageEntity__CheckFrequencyCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  bool v6; // w8
  const MethodInfo *v7; // x1
  System_String_o *SaveKey; // x0
  const MethodInfo *v9; // x1
  WarMessageEntity_c *v10; // x0
  System_Collections_Generic_HashSet_T__o *checkList; // x20
  Il2CppObject *v12; // x0
  __int64 v13; // x1

  if ( (byte_4B1729C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__Contains__, method, v2);
    sub_1BCA7E0(&WarMessageEntity_TypeInfo, v4, v5);
    byte_4B1729C = 1;
  }
  v6 = 1;
  switch ( this->fields.frequencyType )
  {
    case 0:
      return 0;
    case 1:
      if ( !WarMessageEntity__IsNotClearedStartQuest(this, method) )
        return 0;
      SaveKey = WarMessageEntity__get_SaveKey(this, v7);
      return UnityEngine_PlayerPrefs__GetInt(SaveKey, 0, 0LL) == 0;
    case 2:
      if ( WarMessageEntity__IsNotClearedStartQuest(this, method) )
      {
        v10 = WarMessageEntity_TypeInfo;
        if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, v9);
          v10 = WarMessageEntity_TypeInfo;
        }
        checkList = (System_Collections_Generic_HashSet_T__o *)v10->static_fields->checkList;
        v12 = (Il2CppObject *)WarMessageEntity__get_SaveKey(this, v9);
        if ( !checkList )
          sub_1BCAA3C(v12, v13);
        return !System_Collections_Generic_HashSet_object___Contains(
                  checkList,
                  v12,
                  (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_string__Contains__);
      }
      else
      {
        return 0;
      }
    case 6:
      return WarMessageEntity__IsNotClearedStartQuest(this, method);
    default:
      return v6;
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
  if ( (byte_4B1729F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx, method);
    byte_4B1729F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           idx,
           (const MethodInfo_2F10EB4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall WarMessageEntity__CreatePrimaryKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t idx; // w19
  int32_t warId; // w20

  if ( (byte_4B1729E & 1) == 0 )
  {
    sub_1BCA7E0(&WarMessageEntity_TypeInfo, method, v2);
    byte_4B1729E = 1;
  }
  warId = this->fields.warId;
  idx = this->fields.idx;
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, method);
  return WarMessageEntity__CreatePK(warId, idx, v2);
}


bool __fastcall WarMessageEntity__IsNotClearedStartQuest(WarMessageEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  int klass; // w8
  int32_t warId; // w19
  void *monitor; // x19

  if ( (byte_4B1729D & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_WarMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B1729D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_WarMaster___)) == 0LL
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.warId,
                     (const MethodInfo_31B2E40 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0LL )
  {
    sub_1BCAA3C(Instance, v13);
  }
  klass = (int)Instance[5].klass;
  if ( klass == 2 )
  {
    monitor = Instance[5].monitor;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
    return !CondType__IsQuestClear_38310172((int32_t)monitor, -1, 0, 0LL);
  }
  if ( klass != 1 )
    return 1;
  warId = this->fields.warId;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v13);
  return TerminalPramsManager__IsWarStartedId(warId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarMessageEntity__Save(WarMessageEntity_o *this, bool isDecided, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t frequencyType; // w8
  System_String_o *v8; // x0
  WarMessageEntity_c *v9; // x0
  System_Collections_Generic_HashSet_T__o *checkList; // x20
  Il2CppObject *SaveKey; // x0
  __int64 v12; // x1

  if ( (byte_4B1729A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_string__Add__, isDecided, method);
    sub_1BCA7E0(&WarMessageEntity_TypeInfo, v5, v6);
    byte_4B1729A = 1;
  }
  if ( isDecided )
  {
    frequencyType = this->fields.frequencyType;
    if ( frequencyType == 2 )
    {
      v9 = WarMessageEntity_TypeInfo;
      if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, isDecided);
        v9 = WarMessageEntity_TypeInfo;
      }
      checkList = (System_Collections_Generic_HashSet_T__o *)v9->static_fields->checkList;
      SaveKey = (Il2CppObject *)WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      if ( !checkList )
        sub_1BCAA3C(SaveKey, v12);
      System_Collections_Generic_HashSet_object___Add(
        checkList,
        SaveKey,
        (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_string__Add__);
    }
    else if ( frequencyType == 1 )
    {
      v8 = WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      UnityEngine_PlayerPrefs__SetInt(v8, 1, 0LL);
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
  __int64 v4; // x1
  __int64 v5; // x2
  WarMessageEntity_c *v6; // x0
  System_String_o *SAVE_KEY_FORMAT; // x20
  Il2CppObject *v8; // x21
  Il2CppObject *v9; // x0
  int32_t idx; // [xsp+8h] [xbp-28h] BYREF
  int32_t warId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B17299 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&WarMessageEntity_TypeInfo, v4, v5);
    byte_4B17299 = 1;
  }
  v6 = WarMessageEntity_TypeInfo;
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, method);
    v6 = WarMessageEntity_TypeInfo;
  }
  SAVE_KEY_FORMAT = v6->static_fields->SAVE_KEY_FORMAT;
  warId = this->fields.warId;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
  idx = this->fields.idx;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &idx);
  return System_String__Format_62415592(SAVE_KEY_FORMAT, v8, v9, 0LL);
}