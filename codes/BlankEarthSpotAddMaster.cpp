void __fastcall BlankEarthSpotAddMaster___ctor(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E860D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E860D = 1;
  }
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string____ctor(
    (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
    19,
    (const MethodInfo_23FB1C4 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string___ctor__);
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

  if ( (byte_42E860E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__,
      blankEarthSpotId,
      priority,
      *(_QWORD *)&overwriteType);
    byte_42E860E = 1;
  }
  PK = BlankEarthSpotAddEntity__CreatePK(
         blankEarthSpotId,
         priority,
         overwriteType,
         *(const MethodInfo **)&overwriteType);
  return (BlankEarthSpotAddEntity_o *)DataMasterBase_WarMessageMaster__WarMessageEntity__string___GetEntity(
                                        (DataMasterBase_WarMessageMaster__WarMessageEntity__string__o *)this,
                                        PK,
                                        (const MethodInfo_23FB260 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
BlankEarthSpotAddEntity_o *__fastcall BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
        BlankEarthSpotAddMaster_o *this,
        int32_t type,
        int32_t blankEarthSpotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  BlankEarthSpotAddMaster___c__DisplayClass1_0_o *v47; // x19
  __int64 v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v51; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x20
  BlankEarthSpotAddMaster___c_c *v53; // x8
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__1_1; // x21
  Il2CppObject *v56; // x22
  struct BlankEarthSpotAddMaster___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x21

  if ( (byte_42E860C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___,
      type,
      blankEarthSpotId,
      *(_QWORD *)&beforeClearQuestId);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_BlankEarthSpotAddEntity__int___ctor__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Func_BlankEarthSpotAddEntity__bool___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Func_BlankEarthSpotAddEntity__bool__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Func_BlankEarthSpotAddEntity__int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__, v32, v33, v34);
    sub_B5D5C4(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__, v35, v36, v37);
    sub_B5D5C4(&Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__, v38, v39, v40);
    sub_B5D5C4(&BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&BlankEarthSpotAddMaster___c_TypeInfo, v44, v45, v46);
    byte_42E860C = 1;
  }
  v47 = (BlankEarthSpotAddMaster___c__DisplayClass1_0_o *)sub_B5D694(BlankEarthSpotAddMaster___c__DisplayClass1_0_TypeInfo);
  BlankEarthSpotAddMaster___c__DisplayClass1_0___ctor(v47, 0LL);
  if ( !v47 )
    sub_B5D69C(v48, v49);
  v47->fields.typeAsInt = type;
  v47->fields.beforeClearQuestId = beforeClearQuestId;
  v47->fields.blankEarthSpotId = blankEarthSpotId;
  v47->fields.isCheckResetFlag = isCheckResetFlag;
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_BlankEarthSpotAddEntity___);
  v51 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v51,
    (Il2CppObject *)v47,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BlankEarthSpotAddEntity__bool___ctor__);
  v52 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v50,
          (System_Func_TSource__bool__o *)v51,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BlankEarthSpotAddEntity___);
  v53 = BlankEarthSpotAddMaster___c_TypeInfo;
  if ( (BYTE3(BlankEarthSpotAddMaster___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BlankEarthSpotAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BlankEarthSpotAddMaster___c_TypeInfo);
    v53 = BlankEarthSpotAddMaster___c_TypeInfo;
  }
  static_fields = v53->static_fields;
  _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( (BYTE3(v53->vtable._0_Equals.methodPtr) & 4) != 0 && !v53->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v53);
      static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)static_fields->__9;
    _9__1_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BlankEarthSpotAddEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__1_1,
      v56,
      Method_BlankEarthSpotAddMaster___c__GetPrioredAvailableEntity_b__1_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_BlankEarthSpotAddEntity__int___ctor__);
    v57 = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
    v57->__9__1_1 = (struct System_Func_BlankEarthSpotAddEntity__int__o *)_9__1_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v57->__9__1_1,
      (System_Int32_array **)_9__1_1,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                               v52,
                                                               (System_Func_TSource__TKey__o *)_9__1_1,
                                                               (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAddEntity__int___);
  v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BlankEarthSpotAddEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v65,
    (Il2CppObject *)v47,
    Method_BlankEarthSpotAddMaster___c__DisplayClass1_0__GetPrioredAvailableEntity_b__2__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BlankEarthSpotAddEntity__bool___ctor__);
  return (BlankEarthSpotAddEntity_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        v64,
                                        (System_Func_TSource__bool__o *)v65,
                                        (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAddEntity___);
}


bool __fastcall BlankEarthSpotAddMaster__HasAnyRecord(BlankEarthSpotAddMaster_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *list; // x0

  if ( (byte_42E860B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, (_DWORD)method, v2, v3);
    byte_42E860B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_UnicastIPAddressInformation__o *)this->fields.list;
  if ( !list )
    sub_B5D69C(0LL, method);
  return System_Collections_ObjectModel_Collection_UnicastIPAddressInformation___get_Count(
           list,
           (const MethodInfo_2BB85C4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__) > 0;
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

  if ( (byte_42E860F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__,
      (_DWORD)entity,
      blankEarthSpotId,
      *(_QWORD *)&priority);
    byte_42E860F = 1;
  }
  PK = BlankEarthSpotAddEntity__CreatePK(blankEarthSpotId, priority, overwriteType, *(const MethodInfo **)&priority);
  return DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
           (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)this,
           (WarQuestSelectionEntity_o **)entity,
           PK,
           (const MethodInfo_23FB2B8 *)Method_DataMasterBase_BlankEarthSpotAddMaster__BlankEarthSpotAddEntity__string__TryGetEntity__);
}


void __fastcall BlankEarthSpotAddMaster___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BlankEarthSpotAddMaster___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E18 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotAddMaster___c_TypeInfo, v1, v2, v3);
    byte_42E5E18 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BlankEarthSpotAddMaster___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BlankEarthSpotAddMaster___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotAddMaster___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.blankEarthSpotId == this->fields.blankEarthSpotId
      && x->fields.overwriteType == this->fields.typeAsInt;
}


bool __fastcall BlankEarthSpotAddMaster___c__DisplayClass1_0___GetPrioredAvailableEntity_b__2(
        BlankEarthSpotAddMaster___c__DisplayClass1_0_o *this,
        BlankEarthSpotAddEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BlankEarthSpotAddEntity__IsOpen(x, this->fields.beforeClearQuestId, this->fields.isCheckResetFlag, 0LL);
}