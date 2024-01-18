void __fastcall BlankEarthSpotAnimStateManager___ctor(BlankEarthSpotAnimStateManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BlankEarthSpotAnimStateManager_SpotStateData_o *__fastcall BlankEarthSpotAnimStateManager__ConvertStrToSpotStateData(
        BlankEarthSpotAnimStateManager_o *this,
        System_String_o *dataString,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Char_array *v9; // x0
  System_Char_array *v10; // x1
  System_String_array *v11; // x20
  BlankEarthSpotAnimStateManager_SpotStateData_o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x0
  __int64 v16; // x1
  intptr_t v17; // w21
  System_Type_o *TypeFromHandle; // x0
  System_Type_o *v19; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  int32_t *v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  System_RuntimeTypeHandle_o v34; // 0:w0.4

  if ( (byte_4187D78 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, dataString);
    sub_B2C35C(&System_Enum_TypeInfo, v4);
    sub_B2C35C(&CondType_Kind_var, v5);
    sub_B2C35C(&CondType_Kind_TypeInfo, v6);
    sub_B2C35C(&BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo, v7);
    sub_B2C35C(&System_Type_TypeInfo, v8);
    byte_4187D78 = 1;
  }
  v9 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
  if ( !v9 )
    goto LABEL_23;
  v10 = v9;
  if ( !v9->max_length )
  {
    v27 = sub_B2C460(v9);
    sub_B2C400(v27, 0LL);
  }
  v9->m_Items[2] = 44;
  if ( !dataString )
LABEL_23:
    sub_B2C434(v9, v10);
  v11 = System_String__Split(dataString, v9, 0LL);
  v12 = (BlankEarthSpotAnimStateManager_SpotStateData_o *)sub_B2C42C(BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo);
  BlankEarthSpotAnimStateManager_SpotStateData___ctor(v12, 0LL);
  if ( !v11 )
    sub_B2C434(v13, v14);
  if ( !v11->max_length )
  {
    v28 = sub_B2C460(v13);
    sub_B2C400(v28, 0LL);
  }
  v15 = System_Int32__Parse(v11->m_Items[0], 0LL);
  if ( !v12 )
    sub_B2C434(v15, v16);
  v12->fields.SpotId = v15;
  if ( v11->max_length <= 1 )
  {
    v29 = sub_B2C460(v15);
    sub_B2C400(v29, 0LL);
  }
  v12->fields.Priority = System_Int32__Parse(v11->m_Items[1], 0LL);
  v17 = (int)CondType_Kind_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v34.fields.value = v17;
  TypeFromHandle = System_Type__GetTypeFromHandle(v34, 0LL);
  if ( v11->max_length <= 2 )
  {
    v30 = sub_B2C460(TypeFromHandle);
    sub_B2C400(v30, 0LL);
  }
  v19 = TypeFromHandle;
  v20 = v11->m_Items[2];
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v21 = System_Enum__Parse(v19, v20, 0LL);
  if ( !v21 )
    sub_B2C434(0LL, v22);
  if ( v21->klass->_1.element_class != CondType_Kind_TypeInfo->_1.element_class )
  {
    v23 = (int32_t *)sub_B2C728(v21);
LABEL_32:
    v31 = sub_B2C460(v23);
    sub_B2C400(v31, 0LL);
  }
  v23 = (int32_t *)j_il2cpp_object_unbox_0(v21);
  v12->fields.condTargetType = *v23;
  if ( v11->max_length <= 3 )
    goto LABEL_32;
  v24 = System_Int32__Parse(v11->m_Items[3], 0LL);
  v12->fields.condTargetId = v24;
  if ( v11->max_length <= 4 )
  {
    v32 = sub_B2C460(v24);
    sub_B2C400(v32, 0LL);
  }
  v25 = System_Int32__Parse(v11->m_Items[4], 0LL);
  v12->fields.condTargetNum = v25;
  if ( v11->max_length <= 5 )
  {
    v33 = sub_B2C460(v25);
    sub_B2C400(v33, 0LL);
  }
  v12->fields.InfoValue = System_Int32__Parse(v11->m_Items[5], 0LL);
  return v12;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
        BlankEarthSpotAnimStateManager_o *this,
        int32_t spotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *v15; // x24
  __int64 v16; // x0
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SortedSpotStateDataArray; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  WarBoardData_SquareRangeSearch_o *v20; // x0

  if ( (byte_4187D79 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___,
      *(_QWORD *)&spotId);
    sub_B2C35C(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__, v11);
    sub_B2C35C(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo, v12);
    sub_B2C35C(&Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__, v13);
    sub_B2C35C(&BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo, v14);
    byte_4187D79 = 1;
  }
  v15 = (BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *)sub_B2C42C(BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo);
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B2C434(v16, v17);
  v15->fields.spotId = spotId;
  v15->fields.beforeClearQuestId = beforeClearQuestId;
  v15->fields.isCheckResetFlag = isCheckResetFlag;
  SortedSpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
                                                                                    this,
                                                                                    v17);
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v15,
    Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__);
  v20 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          SortedSpotStateDataArray,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
  if ( v20 )
    return HIDWORD(v20[1].monitor);
  return defaultValue;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__GetSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  _QWORD **v14; // x21
  __int64 v15; // x20
  __int16 v16; // w8
  __int64 v17; // x20
  __int64 v18; // x20
  __int64 v19; // x20
  BlankEarthSpotAnimStateManager_SpotStateData_array *v20; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v22; // x1
  System_String_o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v25; // x21
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  __int64 v29; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187D77 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___, method);
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___, v3);
    sub_B2C35C(&Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__, v4);
    sub_B2C35C(&char___TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantStrMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v10);
    sub_B2C35C(&Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__, v11);
    sub_B2C35C(&System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo, v12);
    sub_B2C35C(&StringLiteral_2579/*"BLANK_EARTH_SPOT_ANIM_STATE"*/, v13);
    byte_4187D77 = 1;
  }
  entity = 0LL;
  v14 = (_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___;
  v15 = **((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6);
  v16 = *(_WORD *)(v15 + 306);
  if ( (v16 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6));
    v16 = *(_WORD *)(v15 + 306);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *v14[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AC505C(*v14[6]);
    if ( !*(_DWORD *)(v17 + 224) )
    {
      v18 = *v14[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AC505C(*v14[6]);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = *v14[6];
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AC505C(*v14[6]);
  v20 = **(BlankEarthSpotAnimStateManager_SpotStateData_array ***)(v19 + 184);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                                                  (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  (System_String_o *)StringLiteral_2579/*"BLANK_EARTH_SPOT_ANIM_STATE"*/,
                                                                  (const MethodInfo_24E4578 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
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
        v23 = *(System_String_o **)&entity->fields.shortCutBannerId;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( Master_WarQuestSelectionMaster )
        {
          v22 = Master_WarQuestSelectionMaster;
          if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
          {
            v29 = sub_B2C460(Master_WarQuestSelectionMaster);
            sub_B2C400(v29, 0LL);
          }
          LOWORD(Master_WarQuestSelectionMaster->fields.list) = 47;
          if ( v23 )
          {
            v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                         v23,
                                                                         (System_Char_array *)Master_WarQuestSelectionMaster,
                                                                         0LL);
            v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
              v25,
              (Il2CppObject *)this,
              Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__,
              (const MethodInfo_2713350 *)Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__);
            v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v24,
                                                                   (System_Func_TSource__TResult__o *)v25,
                                                                   (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
            v27 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                    v26,
                    (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
            return (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                                                           (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
          }
        }
      }
LABEL_27:
      sub_B2C434(Master_WarQuestSelectionMaster, v22);
    }
  }
  return v20;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleServantConfConponent_o *p_sortedSpotStateDataArray; // x19
  System_Int32_array **sortedSpotStateDataArray; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SpotStateDataArray; // x20
  BlankEarthSpotAnimStateManager___c_c *v11; // x8
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x21
  Il2CppObject *v14; // x22
  struct BlankEarthSpotAnimStateManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_4187D76 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v3);
    sub_B2C35C(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__, v4);
    sub_B2C35C(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo, v5);
    sub_B2C35C(&Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__, v6);
    sub_B2C35C(&BlankEarthSpotAnimStateManager___c_TypeInfo, v7);
    byte_4187D76 = 1;
  }
  p_sortedSpotStateDataArray = (BattleServantConfConponent_o *)&this->fields.sortedSpotStateDataArray;
  sortedSpotStateDataArray = (System_Int32_array **)this->fields.sortedSpotStateDataArray;
  if ( !sortedSpotStateDataArray )
  {
    SpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
                                                                                this,
                                                                                method);
    v11 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    if ( (BYTE3(BlankEarthSpotAnimStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthSpotAnimStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotAnimStateManager___c_TypeInfo);
      v11 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v14,
        Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__,
        (const MethodInfo_27127B0 *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__);
      v15 = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      v15->__9__6_0 = (struct System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__o *)_9__6_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v15->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 SpotStateDataArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sortedSpotStateDataArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                        v22,
                                                        (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    p_sortedSpotStateDataArray->klass = (BattleServantConfConponent_c *)sortedSpotStateDataArray;
    sub_B2C2F8(p_sortedSpotStateDataArray, sortedSpotStateDataArray, v23, v24, v25, v26, v27, v28);
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
    sub_B2C2F8(
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
        BlankEarthSpotAnimStateManager_SpotStateData_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condTargetNum; // x21

  if ( (byte_4184E92 & 1) == 0 )
  {
    sub_B2C35C(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4184E92 = 1;
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
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184E91 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthSpotAnimStateManager___c_TypeInfo, v1);
    byte_4184E91 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BlankEarthSpotAnimStateManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotAnimStateManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(this, 0LL);
  return x->fields.SpotId == this->fields.spotId
      && BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
           x,
           this->fields.beforeClearQuestId,
           this->fields.isCheckResetFlag,
           v3);
}