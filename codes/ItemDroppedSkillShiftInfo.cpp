void __fastcall ItemDroppedSkillShiftInfo___ctor(ItemDroppedSkillShiftInfo_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EA504 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo, v5, v6, v7);
    byte_42EA504 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo___ctor__);
  this->fields.servantInfoList = (struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *)v8;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v8, v9, v10, v11, v12, v13, v14);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int64_array *__fastcall ItemDroppedSkillShiftInfo__GetNpcSvtIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  ItemDroppedSkillShiftInfo___c_c *v21; // x0
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__3_0; // x20
  Il2CppObject *v24; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42EA500 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_long___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__, v14, v15, v16);
    sub_B5D5C4(&ItemDroppedSkillShiftInfo___c_TypeInfo, v17, v18, v19);
    byte_42EA500 = 1;
  }
  servantInfoList = this->fields.servantInfoList;
  v21 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  if ( (BYTE3(ItemDroppedSkillShiftInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v21 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__3_0,
      v24,
      Method_ItemDroppedSkillShiftInfo___c__GetNpcSvtIdArray_b__3_0__,
      (const MethodInfo_2C3003C *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long___ctor__);
    v25 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v25->__9__3_0 = _9__3_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__3_0,
      (System_Int32_array **)_9__3_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_1CB32A0 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__long___);
  return System_Linq_Enumerable__ToArray_long_(
           v32,
           (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
}


System_Int32_array *__fastcall ItemDroppedSkillShiftInfo__GetUniqueIdArray(
        ItemDroppedSkillShiftInfo_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x19
  ItemDroppedSkillShiftInfo___c_c *v21; // x0
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__2_0; // x20
  Il2CppObject *v24; // x21
  struct ItemDroppedSkillShiftInfo___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42EA4FF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__, v14, v15, v16);
    sub_B5D5C4(&ItemDroppedSkillShiftInfo___c_TypeInfo, v17, v18, v19);
    byte_42EA4FF = 1;
  }
  servantInfoList = this->fields.servantInfoList;
  v21 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  if ( (BYTE3(ItemDroppedSkillShiftInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ItemDroppedSkillShiftInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ItemDroppedSkillShiftInfo___c_TypeInfo);
    v21 = ItemDroppedSkillShiftInfo___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__2_0,
      v24,
      Method_ItemDroppedSkillShiftInfo___c__GetUniqueIdArray_b__2_0__,
      (const MethodInfo_2C2F87C *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int___ctor__);
    v25 = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
    v25->__9__2_0 = (struct System_Func_ItemDroppedSkillShiftInfo_ServantInfo__int__o *)_9__2_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__2_0,
      (System_Int32_array **)_9__2_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfoList,
                                                               (System_Func_TSource__TResult__o *)_9__2_0,
                                                               (const MethodInfo_1CB2FF4 *)Method_System_Linq_Enumerable_Select_ItemDroppedSkillShiftInfo_ServantInfo__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v32,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool __fastcall ItemDroppedSkillShiftInfo__HasUniqueId(
        ItemDroppedSkillShiftInfo_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *v18; // x21
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_T__o *servantInfoList; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_42EA501 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___, uniqueId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__, v12, v13, v14);
    sub_B5D5C4(&ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo, v15, v16, v17);
    byte_42EA501 = 1;
  }
  v18 = (ItemDroppedSkillShiftInfo___c__DisplayClass4_0_o *)sub_B5D694(ItemDroppedSkillShiftInfo___c__DisplayClass4_0_TypeInfo);
  ItemDroppedSkillShiftInfo___c__DisplayClass4_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.uniqueId = uniqueId;
  servantInfoList = (System_Collections_Generic_List_T__o *)this->fields.servantInfoList;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_ItemDroppedSkillShiftInfo___c__DisplayClass4_0__HasUniqueId_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_ItemDroppedSkillShiftInfo_ServantInfo__bool___ctor__);
  return BasicHelper__Any_WarBoardData_SquareRangeSearch_(
           servantInfoList,
           (System_Func_T__bool__o *)v22,
           (const MethodInfo_1AD6D34 *)Method_BasicHelper_Any_ItemDroppedSkillShiftInfo_ServantInfo___);
}


bool __fastcall ItemDroppedSkillShiftInfo__IsSaveDataAvailable(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9

  if ( !saveData )
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  _BOOL8 HasUniqueId; // x0
  __int64 v10; // x1
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x22
  struct System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__o *servantInfoList; // x20
  int32_t uniqueId; // w21
  ItemDroppedSkillShiftInfo_ServantInfo_o *v15; // x19

  if ( (byte_42EA502 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__,
      (_DWORD)svtData,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo, v6, v7, v8);
    byte_42EA502 = 1;
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
              v15 = (ItemDroppedSkillShiftInfo_ServantInfo_o *)sub_B5D694(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo),
              ItemDroppedSkillShiftInfo_ServantInfo___ctor(v15, uniqueId, npcId, 0LL),
              !servantInfoList) )
        {
          sub_B5D69C(HasUniqueId, v10);
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)servantInfoList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
      }
    }
  }
}


void __fastcall ItemDroppedSkillShiftInfo__SetSaveData(
        ItemDroppedSkillShiftInfo_o *this,
        BattleData_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ItemDroppedSkillShiftInfo_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Int32_array *skillShiftUniqueIds; // x8
  struct System_Int64_array *skillShiftNpcSvtIds; // x9
  __int64 v11; // x10
  il2cpp_array_size_t max_length; // w9
  unsigned __int64 v13; // x25
  struct System_Int64_array *v14; // x9
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *servantInfoList; // x21
  int32_t v16; // w23
  int64_t v17; // x24
  ItemDroppedSkillShiftInfo_ServantInfo_o *v18; // x22
  __int64 v19; // x0

  v5 = this;
  if ( (byte_42EA503 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__,
      (_DWORD)saveData,
      (_DWORD)method,
      v3);
    this = (ItemDroppedSkillShiftInfo_o *)sub_B5D5C4(&ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo, v6, v7, v8);
    byte_42EA503 = 1;
  }
  if ( !saveData )
    goto LABEL_16;
  skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
  if ( skillShiftUniqueIds )
  {
    skillShiftNpcSvtIds = saveData->fields.skillShiftNpcSvtIds;
    if ( skillShiftNpcSvtIds )
    {
      v11 = *(_QWORD *)&skillShiftUniqueIds->max_length;
      if ( (_DWORD)v11 == skillShiftNpcSvtIds->max_length )
      {
        max_length = *(_QWORD *)&skillShiftUniqueIds->max_length;
        if ( (int)v11 >= 1 )
        {
          v13 = 0LL;
          while ( 1 )
          {
            if ( v13 >= max_length )
              goto LABEL_17;
            v14 = saveData->fields.skillShiftNpcSvtIds;
            if ( !v14 )
              break;
            if ( v13 >= v14->max_length )
            {
LABEL_17:
              v19 = sub_B5D6C8(this);
              sub_B5D668(v19, 0LL);
            }
            servantInfoList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.servantInfoList;
            v16 = skillShiftUniqueIds->m_Items[v13 + 1];
            v17 = v14->m_Items[v13];
            v18 = (ItemDroppedSkillShiftInfo_ServantInfo_o *)sub_B5D694(ItemDroppedSkillShiftInfo_ServantInfo_TypeInfo);
            ItemDroppedSkillShiftInfo_ServantInfo___ctor(v18, v16, v17, 0LL);
            if ( !servantInfoList )
              break;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              servantInfoList,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ItemDroppedSkillShiftInfo_ServantInfo__Add__);
            skillShiftUniqueIds = saveData->fields.skillShiftUniqueIds;
            if ( !skillShiftUniqueIds )
              break;
            max_length = skillShiftUniqueIds->max_length;
            if ( (__int64)++v13 >= (int)max_length )
              return;
          }
LABEL_16:
          sub_B5D69C(this, saveData);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ItemDroppedSkillShiftInfo___c_StaticFields *static_fields; // x0

  if ( (byte_42E5702 & 1) == 0 )
  {
    sub_B5D5C4(&ItemDroppedSkillShiftInfo___c_TypeInfo, v1, v2, v3);
    byte_42E5702 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ItemDroppedSkillShiftInfo___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ItemDroppedSkillShiftInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ItemDroppedSkillShiftInfo___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
  return x->fields._npcSvtId_k__BackingField;
}


int32_t __fastcall ItemDroppedSkillShiftInfo___c___GetUniqueIdArray_b__2_0(
        ItemDroppedSkillShiftInfo___c_o *this,
        ItemDroppedSkillShiftInfo_ServantInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields._uniqueId_k__BackingField == this->fields.uniqueId;
}