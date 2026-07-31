void WarMessageEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  System_Collections_Generic_HashSet_object__o *v8; // x19
  struct WarMessageEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5939A55 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_string__TypeInfo);
    sub_21FFC50(&WarMessageEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_16060/*"WAR_MESSAGE_{0}_{1}"*/);
    byte_5939A55 = 1;
  }
  v7 = StringLiteral_16060/*"WAR_MESSAGE_{0}_{1}"*/;
  WarMessageEntity_TypeInfo->static_fields->SAVE_KEY_FORMAT = (struct System_String_o *)StringLiteral_16060/*"WAR_MESSAGE_{0}_{1}"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)WarMessageEntity_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v8,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  static_fields = WarMessageEntity_TypeInfo->static_fields;
  static_fields->checkList = (struct System_Collections_Generic_HashSet_string__o *)v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->checkList, (int32_t)v8, v10, v11, v12, v13, v14, v15);
}


void WarMessageEntity___ctor(WarMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5939A54 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5939A54 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


bool WarMessageEntity__CheckCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int32_t condType; // w20
  int32_t condId; // w21
  int64_t condNum; // x19

  if ( (byte_5939A4F & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    byte_5939A4F = 1;
  }
  condType = this->fields.condType;
  condId = this->fields.condId;
  condNum = this->fields.condNum;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, method);
  return CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
}


bool WarMessageEntity__CheckFrequencyCondition(WarMessageEntity_o *this, const MethodInfo *method)
{
  int32_t frequencyType; // w9
  bool v4; // w8
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v8; // x1
  WarMessageEntity_c *v9; // x0
  System_Collections_Generic_HashSet_object__o *checkList; // x20
  Il2CppObject *SaveKey; // x0
  __int64 v12; // x1

  if ( (byte_5939A50 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string__Contains__);
    sub_21FFC50(&WarMessageEntity_TypeInfo);
    byte_5939A50 = 1;
  }
  frequencyType = this->fields.frequencyType;
  v4 = 1;
  if ( frequencyType > 1 )
  {
    if ( frequencyType == 2 )
    {
      if ( WarMessageEntity__IsNotClearedStartQuest(this, method) )
      {
        v9 = WarMessageEntity_TypeInfo;
        if ( !*(&WarMessageEntity_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, v8);
          v9 = WarMessageEntity_TypeInfo;
        }
        checkList = (System_Collections_Generic_HashSet_object__o *)v9->static_fields->checkList;
        SaveKey = (Il2CppObject *)WarMessageEntity__get_SaveKey(this, v8);
        if ( !checkList )
          sub_21FFECC(SaveKey, v12);
        return !System_Collections_Generic_HashSet_object___Contains(
                  checkList,
                  SaveKey,
                  (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_string__Contains__);
      }
      return 0;
    }
    if ( frequencyType == 6 )
      return WarMessageEntity__IsNotClearedStartQuest(this, method);
  }
  else
  {
    if ( !frequencyType )
      return 0;
    if ( frequencyType == 1 )
    {
      if ( WarMessageEntity__IsNotClearedStartQuest(this, method) )
      {
        v6 = WarMessageEntity__get_SaveKey(this, v5);
        return UnityEngine_PlayerPrefs__GetInt(v6, 0, 0) == 0;
      }
      return 0;
    }
  }
  return v4;
}


bool WarMessageEntity__CheckValid(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return WarMessageEntity__CheckCondition(this, method) && WarMessageEntity__CheckFrequencyCondition(this, v3);
}


System_String_o *WarMessageEntity__CreatePK(int32_t warId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5939A53 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5939A53 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           warId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *WarMessageEntity__CreatePrimaryKey(WarMessageEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t idx; // w19
  int32_t warId; // w20

  if ( (byte_5939A52 & 1) == 0 )
  {
    sub_21FFC50(&WarMessageEntity_TypeInfo);
    byte_5939A52 = 1;
  }
  warId = this->fields.warId;
  idx = this->fields.idx;
  if ( !*(&WarMessageEntity_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, method);
  return WarMessageEntity__CreatePK(warId, idx, v2);
}


bool WarMessageEntity__IsNotClearedStartQuest(WarMessageEntity_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  int klass; // w8
  int32_t warId; // w19
  void *monitor; // x19

  if ( (byte_5939A51 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarMaster___);
    sub_21FFC50(&Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5939A51 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___)) == 0
    || (Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     this->fields.warId,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_WarMaster__WarEntity__int__GetEntity__)) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  klass = (int)Instance[5].klass;
  if ( klass == 2 )
  {
    monitor = Instance[5].monitor;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v4);
    return !CondType__IsQuestClear_47254560((int32_t)monitor, -1, 0, 0);
  }
  if ( klass != 1 )
    return 1;
  warId = this->fields.warId;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  return TerminalPramsManager__IsWarStartedId(warId, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarMessageEntity__Save(WarMessageEntity_o *this, bool isDecided, const MethodInfo *method)
{
  int32_t frequencyType; // w8
  System_String_o *v6; // x0
  WarMessageEntity_c *v7; // x0
  System_Collections_Generic_HashSet_object__o *checkList; // x20
  Il2CppObject *SaveKey; // x0
  __int64 v10; // x1

  if ( (byte_5939A4E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string__Add__);
    sub_21FFC50(&WarMessageEntity_TypeInfo);
    byte_5939A4E = 1;
  }
  if ( isDecided )
  {
    frequencyType = this->fields.frequencyType;
    if ( frequencyType == 2 )
    {
      v7 = WarMessageEntity_TypeInfo;
      if ( !*(&WarMessageEntity_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, isDecided);
        v7 = WarMessageEntity_TypeInfo;
      }
      checkList = (System_Collections_Generic_HashSet_object__o *)v7->static_fields->checkList;
      SaveKey = (Il2CppObject *)WarMessageEntity__get_SaveKey(this, (const MethodInfo *)isDecided);
      if ( !checkList )
        sub_21FFECC(SaveKey, v10);
      System_Collections_Generic_HashSet_object___Add(
        checkList,
        SaveKey,
        (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_string__Add__);
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

  if ( (byte_5939A4D & 1) == 0 )
  {
    sub_21FFC50(&WarMessageEntity_TypeInfo);
    byte_5939A4D = 1;
  }
  v3 = WarMessageEntity_TypeInfo;
  if ( !*(&WarMessageEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo, method);
    v3 = WarMessageEntity_TypeInfo;
  }
  SAVE_KEY_FORMAT = v3->static_fields->SAVE_KEY_FORMAT;
  warId = this->fields.warId;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &warId);
  idx = this->fields.idx;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &idx);
  return System_String__Format_75484576(SAVE_KEY_FORMAT, v5, v6, 0);
}