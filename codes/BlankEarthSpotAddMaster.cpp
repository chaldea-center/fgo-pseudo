void __fastcall BlankEarthSpotAddMaster___ctor(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_42AFE88 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
    byte_42AFE88 = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    19,
    (const MethodInfo_23E268C *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotAddEntity_o *__fastcall BlankEarthSpotAddMaster__GetEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  System_String_o *PK; // x1

  if ( (byte_42AFE89 & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
    byte_42AFE89 = 1;
  }
  PK = BlankEarthSpotAddEntity__CreatePK(
         blankEarthSpotId,
         priority,
         overwriteType,
         *(const MethodInfo **)&overwriteType);
  return (BlankEarthSpotAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23E2728 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
}


BlankEarthSpotAddEntity_o *__fastcall BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t type,
        int32_t blankEarthSpotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  BlankEarthSpotAddMaster___c__DisplayClass1_0_o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  BlankEarthSpotAddMaster___c_c *v17; // x8
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_1; // x21
  Il2CppObject *v20; // x22
  struct BlankEarthSpotAddMaster___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v29; // x21

  if ( (byte_42AFE87 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
    sub_B52984(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
    sub_B52984(&Method_System_Func_BlankEarthSpotAddEntity__int___ctor__);
    sub_B52984(&Method_System_Func_BlankEarthSpotAddEntity__bool___ctor__);
    sub_B52984(&System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
    sub_B52984(&System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    sub_B52984(&Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__);
    sub_B52984(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__);
    sub_B52984(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__);
    sub_B52984(&BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
    sub_B52984(&BlankEarthSpotAddMaster___c_TypeInfo);
    byte_42AFE87 = 1;
  }
  v11 = (BlankEarthSpotAddMaster___c__DisplayClass1_0_o *)sub_B52A54(BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
  BlankEarthSpotAddMaster___c__DisplayClass1_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B52A5C(v12, v13);
  v11->fields.typeAsInt = type;
  v11->fields.beforeClearQuestId = beforeClearQuestId;
  v11->fields.blankEarthSpotId = blankEarthSpotId;
  v11->fields.isCheckResetFlag = isCheckResetFlag;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BlankEarthSpotAddEntity__bool___ctor__);
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v14,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
  v17 = BlankEarthSpotAddMaster___c_TypeInfo;
  if ( (BYTE3(BlankEarthSpotAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotAddMaster___c_TypeInfo);
    v17 = BlankEarthSpotAddMaster___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B52A54(System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_1,
      v20,
      Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__,
      (const MethodInfo_2BC9C68 *)Method_System_Func_BlankEarthSpotAddEntity__int___ctor__);
    v21 = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    v21->__9__1_1 = (struct System_Func_BlankEarthSpotAddEntity__int__o *)_9__1_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v21->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v16,
                                                               (System_Func_TSource__TKey__o *)_9__1_1,
                                                               (const MethodInfo_1B66330 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
  v29 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v29,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__,
    (const MethodInfo_2BC90BC *)Method_System_Func_BlankEarthSpotAddEntity__bool___ctor__);
  return (BlankEarthSpotAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        v28,
                                        (System_Func_TSource__bool__o *)v29,
                                        (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
}


bool __fastcall BlankEarthSpotAddMaster__HasAnyRecord(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42AFE86 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    byte_42AFE86 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B52A5C(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2B98558 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthSpotAddMaster__TryGetEntity(
        BlankEarthSpotAddMaster_o *this,
        BlankEarthSpotAddEntity_o **entity,
        int32_t blankEarthSpotId,
        int32_t priority,
        int32_t overwriteType,
        const MethodInfo *method)
{
  System_String_o *PK; // x2

  if ( (byte_42AFE8A & 1) == 0 )
  {
    sub_B52984(&Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
    byte_42AFE8A = 1;
  }
  PK = BlankEarthSpotAddEntity__CreatePK(blankEarthSpotId, priority, overwriteType, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23E2780 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
}


void __fastcall BlankEarthSpotAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42AD661 & 1) == 0 )
  {
    sub_B52984(&BlankEarthSpotAddMaster___c_TypeInfo);
    byte_42AD661 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(BlankEarthSpotAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotAddMaster___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall BlankEarthSpotAddMaster___c___ctor(BlankEarthSpotAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotAddMaster___c___GetPrioredAvailableEntity_b__1_1(
        BlankEarthSpotAddMaster___c_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return -x->fields.priority;
}


void __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___ctor(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__0(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields.blankEarthSpotId == this->fields.blankEarthSpotId
      && x->fields.overwriteType == this->fields.typeAsInt;
}


bool __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__2(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return BlankEarthSpotAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, 0LL);
}