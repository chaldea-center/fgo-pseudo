void __fastcall ItemDroppedSkillShiftInfo___ctor(ItemDroppedSkillShiftInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_4188FAC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo, v3);
    byte_4188FAC = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *)v4;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v4, v5, v6, v7, v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int64_array *__fastcall ItemDroppedSkillShiftInfo__GetNpcSvtIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  ItemDroppedSkillShiftInfo___c_c *v9; // x0
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_0; // x20
  Il2CppObject *v12; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4188FA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_long___, v3);
    sub_B2C35C(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long___ctor__, v4);
    sub_B2C35C(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo, v5);
    sub_B2C35C(&Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__, v6);
    sub_B2C35C(&ItemDroppedSkillShiftInfo___c_TypeInfo, v7);
    byte_4188FA8 = 1;
  }
  servantInfoList = this->fields.servantInfoList;
  v9 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  if ( (BYTE3(ItemDroppedSkillShiftInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v9 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B2C42C(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_0,
      v12,
      Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__,
      (const MethodInfo_2712F70 *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long___ctor__);
    v13 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v13->__9__3_0 = _9__3_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1A96A94 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
  return System_Linq_Enumerable__ToArray_long_(
           v20,
           (const MethodInfo_1A9AF3C *)Method_System_Linq_Enumerable_ToArray_long___);
}


System_Int32_array *__fastcall ItemDroppedSkillShiftInfo__GetUniqueIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  ItemDroppedSkillShiftInfo___c_c *v9; // x0
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_0; // x20
  Il2CppObject *v12; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4188FA7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v3);
    sub_B2C35C(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int___ctor__, v4);
    sub_B2C35C(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo, v5);
    sub_B2C35C(&Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__, v6);
    sub_B2C35C(&ItemDroppedSkillShiftInfo___c_TypeInfo, v7);
    byte_4188FA7 = 1;
  }
  servantInfoList = this->fields.servantInfoList;
  v9 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  if ( (BYTE3(ItemDroppedSkillShiftInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v9 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_0,
      v12,
      Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int___ctor__);
    v13 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v13->__9__2_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__o *)_9__2_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v20,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ItemDroppedSkillShiftInfo__HasUniqueId(
        ItemDroppedSkillShiftInfo_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_T__o *servantInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4188FA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___, *(_QWORD *)&uniqueId);
    sub_B2C35C(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool___ctor__, v5);
    sub_B2C35C(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo, v6);
    sub_B2C35C(&Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__, v7);
    sub_B2C35C(&ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo, v8);
    byte_4188FA9 = 1;
  }
  v9 = (ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *)sub_B2C42C(ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
  ItemDroppedSkillShiftInfo___c__DisplayClass4_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.uniqueId = uniqueId;
  servantInfoList = (System_Collections_Generic_List_T__o *)this->fields.servantInfoList;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           servantInfoList,
           (System_Func_T__bool__o *)v13,
           (const MethodInfo_17266AC *)Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
}


bool __fastcall ItemDroppedSkillShiftInfo__IsSaveDataAvailable(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9

  if ( !saveData )
    sub_B2C434(this, 0LL);
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
  _BOOL8 HasUniqueId; // x0
  __int64 v7; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x22
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x20
  int32_t uniqueId; // w21
  ItemDroppedSkillShiftInfo_ServantInfo_o *v12; // x19

  if ( (byte_4188FAA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__, svtData);
    sub_B2C35C(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo, v5);
    byte_4188FAA = 1;
  }
  if ( svtData )
  {
    if ( svtData->fields._IsChangeDropItemByShift_k__BackingField )
    {
      HasUniqueId = ItemDroppedSkillShiftInfo__HasUniqueId(this, svtData->fields.uniqueId, method);
      if ( !HasUniqueId )
      {
        deckSvt = svtData->fields.deckSvt;
        if ( !deckSvt
          || (npcId = deckSvt->fields.npcId,
              servantInfoList = this->fields.servantInfoList,
              uniqueId = svtData->fields.uniqueId,
              v12 = (ItemDroppedSkillShiftInfo_ServantInfo_o *)sub_B2C42C(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo),
              ItemDroppedSkillShiftInfo_ServantInfo___ctor(v12, uniqueId, npcId, 0LL),
              !servantInfoList) )
        {
          sub_B2C434(HasUniqueId, v7);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
      }
    }
  }
}


void __fastcall ItemDroppedSkillShiftInfo__SetSaveData(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  ItemDroppedSkillShiftInfo_o *v4; // x20
  __int64 v5; // x1
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9
  __int64 v8; // x10
  il2cpp_array_size_t max_length; // w9
  unsigned __int64 v10; // x25
  struct System_Int64_array *v11; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *servantInfoList; // x21
  int32_t v13; // w23
  int64_t v14; // x24
  ItemDroppedSkillShiftInfo_ServantInfo_o *v15; // x22
  __int64 v16; // x0

  v4 = this;
  if ( (byte_4188FAB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__, saveData);
    this = (ItemDroppedSkillShiftInfo_o *)sub_B2C35C(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo, v5);
    byte_4188FAB = 1;
  }
  if ( !saveData )
    goto LABEL_16;
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  if ( skillShiftUniqueIds )
  {
    skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds;
    if ( skillShiftNpcSvtIds )
    {
      v8 = *(_QWORD *)&skillShiftUniqueIds->max_length;
      if ( (_DWORD)v8 == skillShiftNpcSvtIds->max_length )
      {
        max_length = *(_QWORD *)&skillShiftUniqueIds->max_length;
        if ( (int)v8 >= 1 )
        {
          v10 = 0LL;
          while ( 1 )
          {
            if ( v10 >= max_length )
              goto LABEL_17;
            v11 = saveData->fields.skillShiftNpcSvtIds;
            if ( !v11 )
              break;
            if ( v10 >= v11->max_length )
            {
LABEL_17:
              v16 = sub_B2C460(this);
              sub_B2C400(v16, 0LL);
            }
            servantInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.servantInfoList;
            v13 = skillShiftUniqueIds->m_Items[v10 + 1];
            v14 = v11->m_Items[v10];
            v15 = (ItemDroppedSkillShiftInfo_ServantInfo_o *)sub_B2C42C(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
            ItemDroppedSkillShiftInfo_ServantInfo___ctor(v15, v13, v14, 0LL);
            if ( !servantInfoList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              servantInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
            skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
            if ( !skillShiftUniqueIds )
              break;
            max_length = skillShiftUniqueIds->max_length;
            if ( (__int64)++v10 >= (int)max_length )
              return;
          }
LABEL_16:
          sub_B2C434(this, saveData);
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
  Il2CppObject *v2; // x19
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x0

  if ( (byte_41841FD & 1) == 0 )
  {
    sub_B2C35C(&ItemDroppedSkillShiftInfo___c_TypeInfo, v1);
    byte_41841FD = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ItemDroppedSkillShiftInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ItemDroppedSkillShiftInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields._npcSvtId_k__BackingField;
}


int32_t __fastcall ItemDroppedSkillShiftInfo___c___GetUniqueIdArray_b__2_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields._uniqueId_k__BackingField == this->fields.uniqueId;
}