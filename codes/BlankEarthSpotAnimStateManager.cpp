void __fastcall BlankEarthSpotAnimStateManager___ctor(BlankEarthSpotAnimStateManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BlankEarthSpotAnimStateManager_SpotStateData_o *__fastcall BlankEarthSpotAnimStateManager__ConvertStrToSpotStateData(
        BlankEarthSpotAnimStateManager_o *this,
        System_String_o *dataString,
        const MethodInfo *method)
{
  System_Char_array *v4; // x0
  System_Char_array *v5; // x1
  System_String_array *v6; // x20
  BlankEarthSpotAnimStateManager_SpotStateData_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x1
  intptr_t v12; // w21
  System_Type_o *TypeFromHandle; // x0
  System_Type_o *v14; // x21
  System_String_o *v15; // x22
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  int32_t *v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  System_RuntimeTypeHandle_o v29; // 0:w0.4

  if ( (byte_435164D & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&System_Enum_TypeInfo);
    sub_B70694(&CondType_Kind_var);
    sub_B70694(&CondType_Kind_TypeInfo);
    sub_B70694(&BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo);
    sub_B70694(&System_Type_TypeInfo);
    byte_435164D = 1;
  }
  v4 = (System_Char_array *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v4 )
    goto LABEL_23;
  v5 = v4;
  if ( !v4->max_length )
  {
    v22 = sub_B70798(v4);
    sub_B70738(v22, 0LL);
  }
  v4->m_Items[2] = 44;
  if ( !dataString )
LABEL_23:
    sub_B7076C(v4, v5);
  v6 = System_String__Split(dataString, v4, 0LL);
  v7 = (BlankEarthSpotAnimStateManager_SpotStateData_o *)sub_B70764(BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo);
  BlankEarthSpotAnimStateManager_SpotStateData___ctor(v7, 0LL);
  if ( !v6 )
    sub_B7076C(v8, v9);
  if ( !v6->max_length )
  {
    v23 = sub_B70798(v8);
    sub_B70738(v23, 0LL);
  }
  v10 = System_Int32__Parse(v6->m_Items[0], 0LL);
  if ( !v7 )
    sub_B7076C(v10, v11);
  v7->fields.SpotId = v10;
  if ( v6->max_length <= 1 )
  {
    v24 = sub_B70798(v10);
    sub_B70738(v24, 0LL);
  }
  v7->fields.Priority = System_Int32__Parse(v6->m_Items[1], 0LL);
  v12 = (int)CondType_Kind_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v29.fields.value = v12;
  TypeFromHandle = System_Type__GetTypeFromHandle(v29, 0LL);
  if ( v6->max_length <= 2 )
  {
    v25 = sub_B70798(TypeFromHandle);
    sub_B70738(v25, 0LL);
  }
  v14 = TypeFromHandle;
  v15 = v6->m_Items[2];
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v16 = System_Enum__Parse(v14, v15, 0LL);
  if ( !v16 )
    sub_B7076C(0LL, v17);
  if ( v16->klass->_1.element_class != CondType_Kind_TypeInfo->_1.element_class )
  {
    v18 = (int32_t *)sub_B70A60(v16);
LABEL_32:
    v26 = sub_B70798(v18);
    sub_B70738(v26, 0LL);
  }
  v18 = (int32_t *)j_il2cpp_object_unbox_0(v16);
  v7->fields.condTargetType = *v18;
  if ( v6->max_length <= 3 )
    goto LABEL_32;
  v19 = System_Int32__Parse(v6->m_Items[3], 0LL);
  v7->fields.condTargetId = v19;
  if ( v6->max_length <= 4 )
  {
    v27 = sub_B70798(v19);
    sub_B70738(v27, 0LL);
  }
  v20 = System_Int32__Parse(v6->m_Items[4], 0LL);
  v7->fields.condTargetNum = v20;
  if ( v6->max_length <= 5 )
  {
    v28 = sub_B70798(v20);
    sub_B70738(v28, 0LL);
  }
  v7->fields.InfoValue = System_Int32__Parse(v6->m_Items[5], 0LL);
  return v7;
}


int32_t __fastcall BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
        BlankEarthSpotAnimStateManager_o *this,
        int32_t spotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        int32_t defaultValue,
        const MethodInfo *method)
{
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *v11; // x24
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SortedSpotStateDataArray; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x21
  WarBoardData_SquareRangeSearch_o *v16; // x0

  if ( (byte_435164E & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_B70694(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__);
    sub_B70694(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo);
    sub_B70694(&Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__);
    sub_B70694(&BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo);
    byte_435164E = 1;
  }
  v11 = (BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *)sub_B70764(BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo);
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B7076C(v12, v13);
  v11->fields.spotId = spotId;
  v11->fields.beforeClearQuestId = beforeClearQuestId;
  v11->fields.isCheckResetFlag = isCheckResetFlag;
  SortedSpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
                                                                                    this,
                                                                                    v13);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__);
  v16 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          SortedSpotStateDataArray,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1CBD194 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
  if ( v16 )
    return HIDWORD(v16[1].monitor);
  return defaultValue;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__GetSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  _QWORD **v3; // x21
  __int64 v4; // x20
  __int16 v5; // w8
  __int64 v6; // x20
  __int64 v7; // x20
  __int64 v8; // x20
  BlankEarthSpotAnimStateManager_SpotStateData_array *v9; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v11; // x1
  System_String_o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v14; // x21
  System_Collections_Generic_IEnumerable_T__o *v15; // x0
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  __int64 v18; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_435164C & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_B70694(&Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_B70694(&Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_B70694(&Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__);
    sub_B70694(&System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo);
    sub_B70694(&StringLiteral_2641/*"BLANK_EARTH_SPOT_ANIM_STATE"*/);
    byte_435164C = 1;
  }
  entity = 0LL;
  v3 = (_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___;
  v4 = **((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6);
  v5 = *(_WORD *)(v4 + 306);
  if ( (v5 & 1) == 0 )
  {
    sub_B08394(**((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6));
    v5 = *(_WORD *)(v4 + 306);
  }
  if ( (v5 & 0x400) != 0 )
  {
    v6 = *v3[6];
    if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
      sub_B08394(*v3[6]);
    if ( !*(_DWORD *)(v6 + 224) )
    {
      v7 = *v3[6];
      if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
        sub_B08394(*v3[6]);
      j_il2cpp_runtime_class_init_0(v7);
    }
  }
  v8 = *v3[6];
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_B08394(*v3[6]);
  v9 = **(BlankEarthSpotAnimStateManager_SpotStateData_array ***)(v8 + 184);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                                                  (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  (System_String_o *)StringLiteral_2641/*"BLANK_EARTH_SPOT_ANIM_STATE"*/,
                                                                  (const MethodInfo_21C08E8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_27;
    Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_String__IsNullOrEmpty(
                                                                    *(System_String_o **)&entity->fields.shortCutBannerId,
                                                                    0LL);
    if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    {
      if ( entity )
      {
        v12 = *(System_String_o **)&entity->fields.shortCutBannerId;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B706AC(char___TypeInfo, 1LL);
        if ( Master_WarQuestSelectionMaster )
        {
          v11 = Master_WarQuestSelectionMaster;
          if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
          {
            v18 = sub_B70798(Master_WarQuestSelectionMaster);
            sub_B70738(v18, 0LL);
          }
          LOWORD(Master_WarQuestSelectionMaster->fields.list) = 47;
          if ( v12 )
          {
            v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                         v12,
                                                                         (System_Char_array *)Master_WarQuestSelectionMaster,
                                                                         0LL);
            v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
              v14,
              (Il2CppObject *)this,
              Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__,
              (const MethodInfo_29ADCC4 *)Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__);
            v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v13,
                                                                   (System_Func_TSource__TResult__o *)v14,
                                                                   (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
            v16 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                    v15,
                    (const MethodInfo_1BDCE20 *)Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
            return (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                                                           (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
          }
        }
      }
LABEL_27:
      sub_B7076C(Master_WarQuestSelectionMaster, v11);
    }
  }
  return v9;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_sortedSpotStateDataArray; // x19
  System_Int32_array **sortedSpotStateDataArray; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SpotStateDataArray; // x20
  BlankEarthSpotAnimStateManager___c_c *v6; // x8
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x21
  Il2CppObject *v9; // x22
  struct BlankEarthSpotAnimStateManager___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_435164B & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_B70694(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__);
    sub_B70694(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo);
    sub_B70694(&Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__);
    sub_B70694(&BlankEarthSpotAnimStateManager___c_TypeInfo);
    byte_435164B = 1;
  }
  p_sortedSpotStateDataArray = (BattleServantConfConponent_o *)&this->fields.sortedSpotStateDataArray;
  sortedSpotStateDataArray = (System_Int32_array **)this->fields.sortedSpotStateDataArray;
  if ( !sortedSpotStateDataArray )
  {
    SpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
                                                                                this,
                                                                                method);
    v6 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    if ( (BYTE3(BlankEarthSpotAnimStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthSpotAnimStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotAnimStateManager___c_TypeInfo);
      v6 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v9,
        Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__,
        (const MethodInfo_29AD124 *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__);
      v10 = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      v10->__9__6_0 = (struct System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__o *)_9__6_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v10->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 SpotStateDataArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_1CBFB4C *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sortedSpotStateDataArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                        v17,
                                                        (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    p_sortedSpotStateDataArray->klass = (BattleServantConfConponent_c *)sortedSpotStateDataArray;
    sub_B70630(p_sortedSpotStateDataArray, sortedSpotStateDataArray, v18, v19, v20, v21, v22, v23);
  }
  return (BlankEarthSpotAnimStateManager_SpotStateData_array *)sortedSpotStateDataArray;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  BlankEarthSpotAnimStateManager_Fields *p_fields; // x19
  struct BlankEarthSpotAnimStateManager_SpotStateData_array *spotStateDataArray; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  p_fields = &this->fields;
  spotStateDataArray = this->fields.spotStateDataArray;
  if ( !spotStateDataArray )
  {
    spotStateDataArray = BlankEarthSpotAnimStateManager__GetSpotStateDataArray(this, method);
    this->fields.spotStateDataArray = spotStateDataArray;
    sub_B70630(
      (BattleServantConfConponent_o *)p_fields,
      (System_Int32_array **)spotStateDataArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return spotStateDataArray;
}


void __fastcall BlankEarthSpotAnimStateManager_SpotStateData___ctor(
        BlankEarthSpotAnimStateManager_SpotStateData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
        BlankEarthSpotAnimStateManager_SpotStateData_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condTargetNum; // x21

  if ( (byte_434ED35 & 1) == 0 )
  {
    sub_B70694(&CondType_TypeInfo);
    byte_434ED35 = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  return CondType__IsOpenExcludeBeforeClearQuest(
           condTargetType,
           condTargetId,
           condTargetNum,
           beforeClearQuestId,
           isCheckResetFlag,
           0LL);
}


void __fastcall BlankEarthSpotAnimStateManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x0

  if ( (byte_434ED34 & 1) == 0 )
  {
    sub_B70694(&BlankEarthSpotAnimStateManager___c_TypeInfo);
    byte_434ED34 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(BlankEarthSpotAnimStateManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotAnimStateManager___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall BlankEarthSpotAnimStateManager___c___ctor(
        BlankEarthSpotAnimStateManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BlankEarthSpotAnimStateManager___c___get_SortedSpotStateDataArray_b__6_0(
        BlankEarthSpotAnimStateManager___c_o *this,
        BlankEarthSpotAnimStateManager_SpotStateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return -x->fields.Priority;
}


void __fastcall BlankEarthSpotAnimStateManager___c__DisplayClass10_0___ctor(
        BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BlankEarthSpotAnimStateManager___c__DisplayClass10_0___GetCurrentAnimIndex_b__0(
        BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *this,
        BlankEarthSpotAnimStateManager_SpotStateData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_B7076C(this, 0LL);
  return x->fields.SpotId == this->fields.spotId
      && BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
           x,
           this->fields.beforeClearQuestId,
           this->fields.isCheckResetFlag,
           v3);
}