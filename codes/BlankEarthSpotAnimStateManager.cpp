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
  __int64 v10; // x2
  System_String_array *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  BlankEarthSpotAnimStateManager_SpotStateData_o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  intptr_t v23; // w21
  System_Type_o *TypeFromHandle; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Type_o *v27; // x21
  System_String_o *v28; // x22
  Il2CppObject *v29; // x0
  int32_t *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_RuntimeTypeHandle_o v40; // 0:w0.4

  if ( (byte_40FB0A7 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, dataString);
    sub_B16FFC(&System_Enum_TypeInfo, v4);
    sub_B16FFC(&CondType_Kind_var, v5);
    sub_B16FFC(&CondType_Kind_TypeInfo, v6);
    sub_B16FFC(&BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo, v7);
    sub_B16FFC(&System_Type_TypeInfo, v8);
    byte_40FB0A7 = 1;
  }
  v9 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v9 )
    goto LABEL_23;
  if ( !v9->max_length )
  {
    sub_B17100(v9, v9, v10);
    sub_B170A0();
  }
  v9->m_Items[2] = 44;
  if ( !dataString )
LABEL_23:
    sub_B170D4();
  v11 = System_String__Split(dataString, v9, 0LL);
  v16 = (BlankEarthSpotAnimStateManager_SpotStateData_o *)sub_B170CC(
                                                            BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo,
                                                            v12,
                                                            v13,
                                                            v14,
                                                            v15);
  BlankEarthSpotAnimStateManager_SpotStateData___ctor(v16, 0LL);
  if ( !v11 )
    sub_B170D4();
  if ( !v11->max_length )
  {
    sub_B17100(v17, v18, v19);
    sub_B170A0();
  }
  v20 = System_Int32__Parse(v11->m_Items[0], 0LL);
  if ( !v16 )
    sub_B170D4();
  v16->fields.SpotId = v20;
  if ( v11->max_length <= 1 )
  {
    sub_B17100(v20, v21, v22);
    sub_B170A0();
  }
  v16->fields.Priority = System_Int32__Parse(v11->m_Items[1], 0LL);
  v23 = (int)CondType_Kind_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v40.fields.value = v23;
  TypeFromHandle = System_Type__GetTypeFromHandle(v40, 0LL);
  if ( v11->max_length <= 2 )
  {
    sub_B17100(TypeFromHandle, v25, v26);
    sub_B170A0();
  }
  v27 = TypeFromHandle;
  v28 = v11->m_Items[2];
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v29 = System_Enum__Parse(v27, v28, 0LL);
  if ( !v29 )
    sub_B170D4();
  if ( v29->klass->_1.element_class != CondType_Kind_TypeInfo->_1.element_class )
  {
    v30 = (int32_t *)sub_B173C8(v29);
LABEL_32:
    sub_B17100(v30, v31, v32);
    sub_B170A0();
  }
  v30 = (int32_t *)j_il2cpp_object_unbox_0(v29);
  v16->fields.condTargetType = *v30;
  if ( v11->max_length <= 3 )
    goto LABEL_32;
  v33 = System_Int32__Parse(v11->m_Items[3], 0LL);
  v16->fields.condTargetId = v33;
  if ( v11->max_length <= 4 )
  {
    sub_B17100(v33, v34, v35);
    sub_B170A0();
  }
  v36 = System_Int32__Parse(v11->m_Items[4], 0LL);
  v16->fields.condTargetNum = v36;
  if ( v11->max_length <= 5 )
  {
    sub_B17100(v36, v37, v38);
    sub_B170A0();
  }
  v16->fields.InfoValue = System_Int32__Parse(v11->m_Items[5], 0LL);
  return v16;
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
  int32_t v6; // w19
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *v15; // x24
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SortedSpotStateDataArray; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x21
  WarBoardData_SquareRangeSearch_o *v23; // x0

  v6 = defaultValue;
  if ( (byte_40FB0A8 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___,
      *(_QWORD *)&spotId);
    sub_B16FFC(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__, v11);
    sub_B16FFC(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__, v13);
    sub_B16FFC(&BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo, v14);
    byte_40FB0A8 = 1;
  }
  v15 = (BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *)sub_B170CC(
                                                                    BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo,
                                                                    *(_QWORD *)&spotId,
                                                                    *(_QWORD *)&beforeClearQuestId,
                                                                    isCheckResetFlag,
                                                                    *(_QWORD *)&defaultValue);
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0___ctor(v15, 0LL);
  if ( !v15 )
    sub_B170D4();
  v15->fields.spotId = spotId;
  v15->fields.beforeClearQuestId = beforeClearQuestId;
  v15->fields.isCheckResetFlag = isCheckResetFlag;
  SortedSpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
                                                                                    this,
                                                                                    v16);
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo,
                                                                             v18,
                                                                             v19,
                                                                             v20,
                                                                             v21);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__);
  v23 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          SortedSpotStateDataArray,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
  if ( v23 )
    return HIDWORD(v23[1].monitor);
  return v6;
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
  DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *Master_WarQuestSelectionMaster; // x0
  __int64 v22; // x2
  System_String_o *v23; // x20
  System_Char_array *v24; // x0
  __int64 v25; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v31; // x21
  System_Collections_Generic_IEnumerable_T__o *v32; // x0
  System_Collections_Generic_IEnumerable_T__o *v33; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FB0A6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___, method);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___, v3);
    sub_B16FFC(&Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__, v4);
    sub_B16FFC(&char___TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantStrMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v10);
    sub_B16FFC(&Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__, v11);
    sub_B16FFC(&System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo, v12);
    sub_B16FFC(&StringLiteral_2568/*"BLANK_EARTH_SPOT_ANIM_STATE"*/, v13);
    byte_40FB0A6 = 1;
  }
  entity = 0LL;
  v14 = (_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___;
  v15 = **((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6);
  v16 = *(_WORD *)(v15 + 306);
  if ( (v16 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6));
    v16 = *(_WORD *)(v15 + 306);
  }
  if ( (v16 & 0x400) != 0 )
  {
    v17 = *v14[6];
    if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
      sub_AAFCFC(*v14[6]);
    if ( !*(_DWORD *)(v17 + 224) )
    {
      v18 = *v14[6];
      if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
        sub_AAFCFC(*v14[6]);
      j_il2cpp_runtime_class_init_0(v18);
    }
  }
  v19 = *v14[6];
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AAFCFC(*v14[6]);
  v20 = **(BlankEarthSpotAnimStateManager_SpotStateData_array ***)(v19 + 184);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  if ( DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         (System_String_o *)StringLiteral_2568/*"BLANK_EARTH_SPOT_ANIM_STATE"*/,
         (const MethodInfo_266F830 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_27;
    if ( !System_String__IsNullOrEmpty(*(System_String_o **)&entity->fields.shortCutBannerId, 0LL) )
    {
      if ( entity )
      {
        v23 = *(System_String_o **)&entity->fields.shortCutBannerId;
        v24 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v22);
        if ( v24 )
        {
          if ( !v24->max_length )
          {
            sub_B17100(v24, v24, v25);
            sub_B170A0();
          }
          v24->m_Items[2] = 47;
          if ( v23 )
          {
            v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(v23, v24, 0LL);
            v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                    System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo,
                                                                                                    v27,
                                                                                                    v28,
                                                                                                    v29,
                                                                                                    v30);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
              v31,
              (Il2CppObject *)this,
              Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__,
              (const MethodInfo_2B6C28C *)Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__);
            v32 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v26,
                                                                   (System_Func_TSource__TResult__o *)v31,
                                                                   (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
            v33 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                    v32,
                    (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
            return (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v33,
                                                                           (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
          }
        }
      }
LABEL_27:
      sub_B170D4();
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_IEnumerable_TSource__o *SpotStateDataArray; // x20
  BlankEarthSpotAnimStateManager___c_c *v15; // x8
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x21
  Il2CppObject *v18; // x22
  struct BlankEarthSpotAnimStateManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_40FB0A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v3);
    sub_B16FFC(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__, v4);
    sub_B16FFC(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo, v5);
    sub_B16FFC(&Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__, v6);
    sub_B16FFC(&BlankEarthSpotAnimStateManager___c_TypeInfo, v7);
    byte_40FB0A5 = 1;
  }
  p_sortedSpotStateDataArray = (BattleServantConfConponent_o *)&this->fields.sortedSpotStateDataArray;
  sortedSpotStateDataArray = (System_Int32_array **)this->fields.sortedSpotStateDataArray;
  if ( !sortedSpotStateDataArray )
  {
    SpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
                                                                                this,
                                                                                method);
    v15 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    if ( (BYTE3(BlankEarthSpotAnimStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthSpotAnimStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotAnimStateManager___c_TypeInfo);
      v15 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    }
    static_fields = v15->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      }
      v18 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo,
                                                                                  v10,
                                                                                  v11,
                                                                                  v12,
                                                                                  v13);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v18,
        Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__,
        (const MethodInfo_2B6B6EC *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__);
      v19 = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      v19->__9__6_0 = (struct System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__o *)_9__6_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v19->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 SpotStateDataArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sortedSpotStateDataArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                        v26,
                                                        (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    p_sortedSpotStateDataArray->klass = (BattleServantConfConponent_c *)sortedSpotStateDataArray;
    sub_B16F98(p_sortedSpotStateDataArray, sortedSpotStateDataArray, v27, v28, v29, v30, v31, v32);
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
    sub_B16F98(
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

  if ( (byte_40F708A & 1) == 0 )
  {
    sub_B16FFC(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_40F708A = 1;
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

  if ( (byte_40F7089 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthSpotAnimStateManager___c_TypeInfo, v1);
    byte_40F7089 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BlankEarthSpotAnimStateManager___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.SpotId == this->fields.spotId
      && BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
           x,
           this->fields.beforeClearQuestId,
           this->fields.isCheckResetFlag,
           v3);
}