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
  System_String_array *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  BlankEarthSpotAnimStateManager_SpotStateData_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x0
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x0
  System_Type_o *v18; // x21
  System_String_o *v19; // x22
  Il2CppObject *v20; // x0
  int32_t *v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  System_RuntimeTypeHandle_o v32; // 0:w0.4

  if ( (byte_4214B96 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, dataString);
    sub_B0D8A4(&System_Enum_TypeInfo, v4);
    sub_B0D8A4(&CondType_Kind_var, v5);
    sub_B0D8A4(&CondType_Kind_TypeInfo, v6);
    sub_B0D8A4(&BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo, v7);
    sub_B0D8A4(&System_Type_TypeInfo, v8);
    byte_4214B96 = 1;
  }
  v9 = (System_Char_array *)sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !v9 )
    goto LABEL_23;
  if ( !v9->max_length )
  {
    v25 = sub_B0D9A8(v9);
    sub_B0D948(v25, 0LL);
  }
  v9->m_Items[2] = 44;
  if ( !dataString )
LABEL_23:
    sub_B0D97C(v9);
  v10 = System_String__Split(dataString, v9, 0LL);
  v13 = (BlankEarthSpotAnimStateManager_SpotStateData_o *)sub_B0D974(
                                                            BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo,
                                                            v11,
                                                            v12);
  BlankEarthSpotAnimStateManager_SpotStateData___ctor(v13, 0LL);
  if ( !v10 )
    sub_B0D97C(v14);
  if ( !v10->max_length )
  {
    v26 = sub_B0D9A8(v14);
    sub_B0D948(v26, 0LL);
  }
  v15 = System_Int32__Parse(v10->m_Items[0], 0LL);
  if ( !v13 )
    sub_B0D97C(v15);
  v13->fields.SpotId = v15;
  if ( v10->max_length <= 1 )
  {
    v27 = sub_B0D9A8(v15);
    sub_B0D948(v27, 0LL);
  }
  v13->fields.Priority = System_Int32__Parse(v10->m_Items[1], 0LL);
  v16 = (int)CondType_Kind_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v32.fields.value = v16;
  TypeFromHandle = System_Type__GetTypeFromHandle(v32, 0LL);
  if ( v10->max_length <= 2 )
  {
    v28 = sub_B0D9A8(TypeFromHandle);
    sub_B0D948(v28, 0LL);
  }
  v18 = TypeFromHandle;
  v19 = v10->m_Items[2];
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v20 = System_Enum__Parse(v18, v19, 0LL);
  if ( !v20 )
    sub_B0D97C(0LL);
  if ( v20->klass->_1.element_class != CondType_Kind_TypeInfo->_1.element_class )
  {
    v21 = (int32_t *)sub_B0DC70(v20);
LABEL_32:
    v29 = sub_B0D9A8(v21);
    sub_B0D948(v29, 0LL);
  }
  v21 = (int32_t *)j_il2cpp_object_unbox_0(v20);
  v13->fields.condTargetType = *v21;
  if ( v10->max_length <= 3 )
    goto LABEL_32;
  v22 = System_Int32__Parse(v10->m_Items[3], 0LL);
  v13->fields.condTargetId = v22;
  if ( v10->max_length <= 4 )
  {
    v30 = sub_B0D9A8(v22);
    sub_B0D948(v30, 0LL);
  }
  v23 = System_Int32__Parse(v10->m_Items[4], 0LL);
  v13->fields.condTargetNum = v23;
  if ( v10->max_length <= 5 )
  {
    v31 = sub_B0D9A8(v23);
    sub_B0D948(v31, 0LL);
  }
  v13->fields.InfoValue = System_Int32__Parse(v10->m_Items[5], 0LL);
  return v13;
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
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  WarBoardData_SquareRangeSearch_o *v22; // x0

  if ( (byte_4214B97 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___,
      *(_QWORD *)&spotId);
    sub_B0D8A4(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__, v13);
    sub_B0D8A4(&BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo, v14);
    byte_4214B97 = 1;
  }
  v15 = (BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *)sub_B0D974(
                                                                    BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo,
                                                                    *(_QWORD *)&spotId,
                                                                    *(_QWORD *)&beforeClearQuestId);
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B0D97C(v16);
  v15->fields.spotId = spotId;
  v15->fields.beforeClearQuestId = beforeClearQuestId;
  v15->fields.isCheckResetFlag = isCheckResetFlag;
  SortedSpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
                                                                                    this,
                                                                                    v17);
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__);
  v22 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          SortedSpotStateDataArray,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
  if ( v22 )
    return HIDWORD(v22[1].monitor);
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
  System_String_o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v26; // x21
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  __int64 v30; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214B95 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___, method);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___, v3);
    sub_B0D8A4(&Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__, v4);
    sub_B0D8A4(&char___TypeInfo, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ConstantStrMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v10);
    sub_B0D8A4(&Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__, v11);
    sub_B0D8A4(&System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_2590/*"BLANK_EARTH_SPOT_ANIM_STATE"*/, v13);
    byte_4214B95 = 1;
  }
  entity = 0LL;
  v14 = (_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___;
  v15 = **((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6);
  v16 = *(_WORD *)(v15 + 306);
  if ( (v16 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6));
    v16 = *(_WORD *)(v15 + 306);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *v14[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AA65A4(*v14[6]);
    if ( !*(_DWORD *)(v17 + 224) )
    {
      v18 = *v14[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AA65A4(*v14[6]);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = *v14[6];
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AA65A4(*v14[6]);
  v20 = **(BlankEarthSpotAnimStateManager_SpotStateData_array ***)(v19 + 184);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                                                  (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  (System_String_o *)StringLiteral_2590/*"BLANK_EARTH_SPOT_ANIM_STATE"*/,
                                                                  (const MethodInfo_266A07C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
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
        v22 = *(System_String_o **)&entity->fields.shortCutBannerId;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B0D8BC(char___TypeInfo, 1LL);
        if ( Master_WarQuestSelectionMaster )
        {
          if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
          {
            v30 = sub_B0D9A8(Master_WarQuestSelectionMaster);
            sub_B0D948(v30, 0LL);
          }
          LOWORD(Master_WarQuestSelectionMaster->fields.list) = 47;
          if ( v22 )
          {
            v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                         v22,
                                                                         (System_Char_array *)Master_WarQuestSelectionMaster,
                                                                         0LL);
            v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                    System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo,
                                                                                                    v24,
                                                                                                    v25);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
              v26,
              (Il2CppObject *)this,
              Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__,
              (const MethodInfo_261A104 *)Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__);
            v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v23,
                                                                   (System_Func_TSource__TResult__o *)v26,
                                                                   (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
            v28 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                    v27,
                    (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
            return (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v28,
                                                                           (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
          }
        }
      }
LABEL_27:
      sub_B0D97C(Master_WarQuestSelectionMaster);
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
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *SpotStateDataArray; // x20
  BlankEarthSpotAnimStateManager___c_c *v13; // x8
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x21
  Il2CppObject *v16; // x22
  struct BlankEarthSpotAnimStateManager___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4214B94 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v3);
    sub_B0D8A4(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__, v4);
    sub_B0D8A4(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo, v5);
    sub_B0D8A4(&Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__, v6);
    sub_B0D8A4(&BlankEarthSpotAnimStateManager___c_TypeInfo, v7);
    byte_4214B94 = 1;
  }
  p_sortedSpotStateDataArray = (BattleServantConfConponent_o *)&this->fields.sortedSpotStateDataArray;
  sortedSpotStateDataArray = (System_Int32_array **)this->fields.sortedSpotStateDataArray;
  if ( !sortedSpotStateDataArray )
  {
    SpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
                                                                                this,
                                                                                method);
    v13 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    if ( (BYTE3(BlankEarthSpotAnimStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthSpotAnimStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotAnimStateManager___c_TypeInfo);
      v13 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo,
                                                                                  v10,
                                                                                  v11);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v16,
        Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__,
        (const MethodInfo_2619564 *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__);
      v17 = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      v17->__9__6_0 = (struct System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__o *)_9__6_0;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v17->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 SpotStateDataArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sortedSpotStateDataArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                        v24,
                                                        (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    p_sortedSpotStateDataArray->klass = (BattleServantConfConponent_c *)sortedSpotStateDataArray;
    sub_B0D840(p_sortedSpotStateDataArray, sortedSpotStateDataArray, v25, v26, v27, v28, v29, v30);
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
    sub_B0D840(
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

  if ( (byte_4211DC1 & 1) == 0 )
  {
    sub_B0D8A4(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_4211DC1 = 1;
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211DC0 & 1) == 0 )
  {
    sub_B0D8A4(&BlankEarthSpotAnimStateManager___c_TypeInfo, v1);
    byte_4211DC0 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(BlankEarthSpotAnimStateManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotAnimStateManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.SpotId == this->fields.spotId
      && BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
           x,
           this->fields.beforeClearQuestId,
           this->fields.isCheckResetFlag,
           v3);
}