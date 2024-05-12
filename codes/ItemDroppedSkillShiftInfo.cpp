void __fastcall ItemDroppedSkillShiftInfo___ctor(ItemDroppedSkillShiftInfo_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438C982 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
    byte_438C982 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int64_array *__fastcall ItemDroppedSkillShiftInfo__GetNpcSvtIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  ItemDroppedSkillShiftInfo___c_c *v4; // x0
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_0; // x20
  Il2CppObject *v7; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_438C97E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_B775C4(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long___ctor__);
    sub_B775C4(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    sub_B775C4(&Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__);
    sub_B775C4(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_438C97E = 1;
  }
  servantInfoList = this->fields.servantInfoList;
  v4 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  if ( (BYTE3(ItemDroppedSkillShiftInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v4 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B77694(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_0,
      v7,
      Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__,
      (const MethodInfo_29EA630 *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long___ctor__);
    v8 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v8->__9__3_0 = _9__3_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1D38DBC *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
  return System_Linq_Enumerable__ToArray_long_(
           v15,
           (const MethodInfo_1D3D558 *)Method_System_Linq_Enumerable_ToArray_long___);
}


System_Int32_array *__fastcall ItemDroppedSkillShiftInfo__GetUniqueIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  ItemDroppedSkillShiftInfo___c_c *v4; // x0
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_0; // x20
  Il2CppObject *v7; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_438C97D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int___ctor__);
    sub_B775C4(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    sub_B775C4(&Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__);
    sub_B775C4(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_438C97D = 1;
  }
  servantInfoList = this->fields.servantInfoList;
  v4 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  if ( (BYTE3(ItemDroppedSkillShiftInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v4 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_0,
      v7,
      Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int___ctor__);
    v8 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v8->__9__2_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__o *)_9__2_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1D38B10 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v15,
           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall ItemDroppedSkillShiftInfo__HasUniqueId(
        ItemDroppedSkillShiftInfo_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *servantInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x20

  if ( (byte_438C97F & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
    sub_B775C4(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool___ctor__);
    sub_B775C4(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
    sub_B775C4(&Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__);
    sub_B775C4(&ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
    byte_438C97F = 1;
  }
  v5 = (ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *)sub_B77694(ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
  ItemDroppedSkillShiftInfo___c__DisplayClass4_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.uniqueId = uniqueId;
  servantInfoList = (System_Collections_Generic_List_T__o *)this->fields.servantInfoList;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           servantInfoList,
           (System_Func_T__bool__o *)v9,
           (const MethodInfo_1C66144 *)Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
}


bool __fastcall ItemDroppedSkillShiftInfo__IsSaveDataAvailable(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9

  if ( !saveData )
    sub_B7769C(this, 0LL);
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
  _BOOL8 HasUniqueId; // x0
  __int64 v6; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x22
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x20
  int32_t uniqueId; // w21
  ItemDroppedSkillShiftInfo_ServantInfo_o *v11; // x19

  if ( (byte_438C980 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
    sub_B775C4(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
    byte_438C980 = 1;
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
              v11 = (ItemDroppedSkillShiftInfo_ServantInfo_o *)sub_B77694(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo),
              ItemDroppedSkillShiftInfo_ServantInfo___ctor(v11, uniqueId, npcId, 0LL),
              !servantInfoList) )
        {
          sub_B7769C(HasUniqueId, v6);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
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
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9
  __int64 v7; // x10
  il2cpp_array_size_t max_length; // w9
  unsigned __int64 v9; // x25
  struct System_Int64_array *v10; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *servantInfoList; // x21
  int32_t v12; // w23
  int64_t v13; // x24
  ItemDroppedSkillShiftInfo_ServantInfo_o *v14; // x22
  __int64 v15; // x0

  v4 = this;
  if ( (byte_438C981 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
    this = (ItemDroppedSkillShiftInfo_o *)sub_B775C4(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
    byte_438C981 = 1;
  }
  if ( !saveData )
    goto LABEL_16;
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  if ( skillShiftUniqueIds )
  {
    skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds;
    if ( skillShiftNpcSvtIds )
    {
      v7 = *(_QWORD *)&skillShiftUniqueIds->max_length;
      if ( (_DWORD)v7 == skillShiftNpcSvtIds->max_length )
      {
        max_length = *(_QWORD *)&skillShiftUniqueIds->max_length;
        if ( (int)v7 >= 1 )
        {
          v9 = 0LL;
          while ( 1 )
          {
            if ( v9 >= max_length )
              goto LABEL_17;
            v10 = saveData->fields.skillShiftNpcSvtIds;
            if ( !v10 )
              break;
            if ( v9 >= v10->max_length )
            {
LABEL_17:
              v15 = sub_B776C8(this);
              sub_B77668(v15, 0LL);
            }
            servantInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.servantInfoList;
            v12 = skillShiftUniqueIds->m_Items[v9 + 1];
            v13 = v10->m_Items[v9];
            v14 = (ItemDroppedSkillShiftInfo_ServantInfo_o *)sub_B77694(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
            ItemDroppedSkillShiftInfo_ServantInfo___ctor(v14, v12, v13, 0LL);
            if ( !servantInfoList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              servantInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
            skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
            if ( !skillShiftUniqueIds )
              break;
            max_length = skillShiftUniqueIds->max_length;
            if ( (__int64)++v9 >= (int)max_length )
              return;
          }
LABEL_16:
          sub_B7769C(this, saveData);
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
  Il2CppObject *v1; // x19
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4388936 & 1) == 0 )
  {
    sub_B775C4(&ItemDroppedSkillShiftInfo___c_TypeInfo);
    byte_4388936 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ItemDroppedSkillShiftInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ItemDroppedSkillShiftInfo___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return x->fields._npcSvtId_k__BackingField;
}


int32_t __fastcall ItemDroppedSkillShiftInfo___c___GetUniqueIdArray_b__2_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
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
    sub_B7769C(this, 0LL);
  return x->fields._uniqueId_k__BackingField == this->fields.uniqueId;
}