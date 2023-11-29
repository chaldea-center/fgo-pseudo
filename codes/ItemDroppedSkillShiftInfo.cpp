void __fastcall ItemDroppedSkillShiftInfo___ctor(ItemDroppedSkillShiftInfo_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FC1B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo, v6);
    byte_40FC1B8 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int64_array *__fastcall ItemDroppedSkillShiftInfo__GetNpcSvtIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  ItemDroppedSkillShiftInfo___c_c *v12; // x0
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_0; // x20
  Il2CppObject *v15; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40FC1B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_long___, v6);
    sub_B16FFC(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long___ctor__, v7);
    sub_B16FFC(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo, v8);
    sub_B16FFC(&Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__, v9);
    sub_B16FFC(&ItemDroppedSkillShiftInfo___c_TypeInfo, v10);
    byte_40FC1B4 = 1;
  }
  servantInfoList = this->fields.servantInfoList;
  v12 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  if ( (BYTE3(ItemDroppedSkillShiftInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v12 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B170CC(
                                                                              System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo,
                                                                              method,
                                                                              v2,
                                                                              v3,
                                                                              v4);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_0,
      v15,
      Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__,
      (const MethodInfo_2B6BEAC *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long___ctor__);
    v16 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v16->__9__3_0 = _9__3_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_19C0870 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
  return System_Linq_Enumerable__ToArray_long_(
           v23,
           (const MethodInfo_19C4B40 *)Method_System_Linq_Enumerable_ToArray_long___);
}


System_Int32_array *__fastcall ItemDroppedSkillShiftInfo__GetUniqueIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  ItemDroppedSkillShiftInfo___c_c *v12; // x0
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_0; // x20
  Il2CppObject *v15; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40FC1B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    sub_B16FFC(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int___ctor__, v7);
    sub_B16FFC(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo, v8);
    sub_B16FFC(&Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__, v9);
    sub_B16FFC(&ItemDroppedSkillShiftInfo___c_TypeInfo, v10);
    byte_40FC1B3 = 1;
  }
  servantInfoList = this->fields.servantInfoList;
  v12 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  if ( (BYTE3(ItemDroppedSkillShiftInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v12 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo,
                                                                                method,
                                                                                v2,
                                                                                v3,
                                                                                v4);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_0,
      v15,
      Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int___ctor__);
    v16 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v16->__9__2_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__o *)_9__2_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v23,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemDroppedSkillShiftInfo__HasUniqueId(
        ItemDroppedSkillShiftInfo_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_List_T__o *servantInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40FC1B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___, *(_QWORD *)&uniqueId);
    sub_B16FFC(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool___ctor__, v7);
    sub_B16FFC(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo, v8);
    sub_B16FFC(&Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__, v9);
    sub_B16FFC(&ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo, v10);
    byte_40FC1B5 = 1;
  }
  v11 = (ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *)sub_B170CC(
                                                              ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo,
                                                              *(_QWORD *)&uniqueId,
                                                              method,
                                                              v3,
                                                              v4);
  ItemDroppedSkillShiftInfo___c__DisplayClass4_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.uniqueId = uniqueId;
  servantInfoList = (System_Collections_Generic_List_T__o *)this->fields.servantInfoList;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           servantInfoList,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
}


bool __fastcall ItemDroppedSkillShiftInfo__IsSaveDataAvailable(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9

  if ( !saveData )
    sub_B170D4();
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  return skillShiftUniqueIds
      && (skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds) != 0LL
      && skillShiftUniqueIds->max_length == skillShiftNpcSvtIds->max_length;
}


void __fastcall ItemDroppedSkillShiftInfo__Register(
        ItemDroppedSkillShiftInfo_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x22
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x20
  int32_t uniqueId; // w21
  ItemDroppedSkillShiftInfo_ServantInfo_o *v14; // x19

  if ( (byte_40FC1B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__, svtData);
    sub_B16FFC(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo, v5);
    byte_40FC1B6 = 1;
  }
  if ( svtData
    && svtData->fields._IsChangeDropItemByShift_k__BackingField
    && !ItemDroppedSkillShiftInfo__HasUniqueId(this, svtData->fields.uniqueId, method) )
  {
    deckSvt = svtData->fields.deckSvt;
    if ( !deckSvt
      || (npcId = deckSvt->fields.npcId,
          servantInfoList = this->fields.servantInfoList,
          uniqueId = svtData->fields.uniqueId,
          v14 = (ItemDroppedSkillShiftInfo_ServantInfo_o *)sub_B170CC(
                                                             ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo,
                                                             v6,
                                                             v7,
                                                             v8,
                                                             v9),
          ItemDroppedSkillShiftInfo_ServantInfo___ctor(v14, uniqueId, npcId, 0LL),
          !servantInfoList) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantInfoList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
  }
}


void __fastcall ItemDroppedSkillShiftInfo__SetSaveData(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  ItemDroppedSkillShiftInfo_o *v6; // x20
  __int64 v7; // x1
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9
  __int64 v10; // x10
  il2cpp_array_size_t max_length; // w9
  unsigned __int64 v12; // x25
  struct System_Int64_array *v13; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *servantInfoList; // x21
  int32_t v15; // w23
  int64_t v16; // x24
  ItemDroppedSkillShiftInfo_ServantInfo_o *v17; // x22

  v6 = this;
  if ( (byte_40FC1B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__, saveData);
    this = (ItemDroppedSkillShiftInfo_o *)sub_B16FFC(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo, v7);
    byte_40FC1B7 = 1;
  }
  if ( !saveData )
    goto LABEL_16;
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  if ( skillShiftUniqueIds )
  {
    skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds;
    if ( skillShiftNpcSvtIds )
    {
      v10 = *(_QWORD *)&skillShiftUniqueIds->max_length;
      if ( (_DWORD)v10 == skillShiftNpcSvtIds->max_length )
      {
        max_length = *(_QWORD *)&skillShiftUniqueIds->max_length;
        if ( (int)v10 >= 1 )
        {
          v12 = 0LL;
          while ( 1 )
          {
            if ( v12 >= max_length )
              goto LABEL_17;
            v13 = saveData->fields.skillShiftNpcSvtIds;
            if ( !v13 )
              break;
            if ( v12 >= v13->max_length )
            {
LABEL_17:
              sub_B17100(this, saveData, method);
              sub_B170A0();
            }
            servantInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v6->fields.servantInfoList;
            v15 = skillShiftUniqueIds->m_Items[v12 + 1];
            v16 = v13->m_Items[v12];
            v17 = (ItemDroppedSkillShiftInfo_ServantInfo_o *)sub_B170CC(
                                                               ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo,
                                                               saveData,
                                                               method,
                                                               v3,
                                                               v4);
            ItemDroppedSkillShiftInfo_ServantInfo___ctor(v17, v15, v16, 0LL);
            if ( !servantInfoList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              servantInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
            skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
            if ( !skillShiftUniqueIds )
              break;
            max_length = skillShiftUniqueIds->max_length;
            if ( (__int64)++v12 >= (int)max_length )
              return;
          }
LABEL_16:
          sub_B170D4();
        }
      }
    }
  }
}


void __fastcall ItemDroppedSkillShiftInfo_ServantInfo___ctor(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int32_t uniqueId,
        int64_t shiftNpcId,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._uniqueId_k__BackingField = uniqueId;
  this->fields._npcSvtId_k__BackingField = shiftNpcId;
}


int64_t __fastcall ItemDroppedSkillShiftInfo_ServantInfo__get_npcSvtId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._npcSvtId_k__BackingField;
}


int32_t __fastcall ItemDroppedSkillShiftInfo_ServantInfo__get_uniqueId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._uniqueId_k__BackingField;
}


void __fastcall ItemDroppedSkillShiftInfo_ServantInfo__set_npcSvtId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._npcSvtId_k__BackingField = value;
}


void __fastcall ItemDroppedSkillShiftInfo_ServantInfo__set_uniqueId(
        ItemDroppedSkillShiftInfo_ServantInfo_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._uniqueId_k__BackingField = value;
}


void __fastcall ItemDroppedSkillShiftInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F68E7 & 1) == 0 )
  {
    sub_B16FFC(&ItemDroppedSkillShiftInfo___c_TypeInfo, v1);
    byte_40F68E7 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ItemDroppedSkillShiftInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall ItemDroppedSkillShiftInfo___c___ctor(ItemDroppedSkillShiftInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall ItemDroppedSkillShiftInfo___c___GetNpcSvtIdArray_b__3_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields._npcSvtId_k__BackingField;
}


int32_t __fastcall ItemDroppedSkillShiftInfo___c___GetUniqueIdArray_b__2_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields._uniqueId_k__BackingField;
}


void __fastcall ItemDroppedSkillShiftInfo___c__DisplayClass4_0___ctor(
        ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ItemDroppedSkillShiftInfo___c__DisplayClass4_0___HasUniqueId_b__0(
        ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields._uniqueId_k__BackingField == this->fields.uniqueId;
}