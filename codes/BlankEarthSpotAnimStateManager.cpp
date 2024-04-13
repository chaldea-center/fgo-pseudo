void __fastcall BlankEarthSpotAnimStateManager___ctor(BlankEarthSpotAnimStateManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BlankEarthSpotAnimStateManager_SpotStateData_o *__fastcall BlankEarthSpotAnimStateManager__ConvertStrToSpotStateData(
        BlankEarthSpotAnimStateManager_o *this,
        System_String_o *dataString,
        const MethodInfo *method)
{
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
  System_Char_array *v20; // x0
  System_Char_array *v21; // x1
  System_String_array *v22; // x20
  BlankEarthSpotAnimStateManager_SpotStateData_o *v23; // x19
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  intptr_t v28; // w21
  System_Type_o *TypeFromHandle; // x0
  System_Type_o *v30; // x21
  System_String_o *v31; // x22
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  int32_t *v34; // x0
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x0
  __int64 v44; // x0
  System_RuntimeTypeHandle_o v45; // 0:w0.4

  if ( (byte_42E8612 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)dataString, (_DWORD)method, v3);
    sub_B5D5C4(&System_Enum_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CondType_Kind_var, v8, v9, v10);
    sub_B5D5C4(&CondType_Kind_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Type_TypeInfo, v17, v18, v19);
    byte_42E8612 = 1;
  }
  v20 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !v20 )
    goto LABEL_23;
  v21 = v20;
  if ( !v20->max_length )
  {
    v38 = sub_B5D6C8(v20);
    sub_B5D668(v38, 0LL);
  }
  v20->m_Items[2] = 44;
  if ( !dataString )
LABEL_23:
    sub_B5D69C(v20, v21);
  v22 = System_String__Split(dataString, v20, 0LL);
  v23 = (BlankEarthSpotAnimStateManager_SpotStateData_o *)sub_B5D694(BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo);
  BlankEarthSpotAnimStateManager_SpotStateData___ctor(v23, 0LL);
  if ( !v22 )
    sub_B5D69C(v24, v25);
  if ( !v22->max_length )
  {
    v39 = sub_B5D6C8(v24);
    sub_B5D668(v39, 0LL);
  }
  v26 = System_Int32__Parse(v22->m_Items[0], 0LL);
  if ( !v23 )
    sub_B5D69C(v26, v27);
  v23->fields.SpotId = v26;
  if ( v22->max_length <= 1 )
  {
    v40 = sub_B5D6C8(v26);
    sub_B5D668(v40, 0LL);
  }
  v23->fields.Priority = System_Int32__Parse(v22->m_Items[1], 0LL);
  v28 = (int)CondType_Kind_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v45.fields.value = v28;
  TypeFromHandle = System_Type__GetTypeFromHandle(v45, 0LL);
  if ( v22->max_length <= 2 )
  {
    v41 = sub_B5D6C8(TypeFromHandle);
    sub_B5D668(v41, 0LL);
  }
  v30 = TypeFromHandle;
  v31 = v22->m_Items[2];
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v32 = System_Enum__Parse(v30, v31, 0LL);
  if ( !v32 )
    sub_B5D69C(0LL, v33);
  if ( v32->klass->_1.element_class != CondType_Kind_TypeInfo->_1.element_class )
  {
    v34 = (int32_t *)sub_B5D990(v32);
LABEL_32:
    v42 = sub_B5D6C8(v34);
    sub_B5D668(v42, 0LL);
  }
  v34 = (int32_t *)j_il2cpp_object_unbox_0(v32);
  v23->fields.condTargetType = *v34;
  if ( v22->max_length <= 3 )
    goto LABEL_32;
  v35 = System_Int32__Parse(v22->m_Items[3], 0LL);
  v23->fields.condTargetId = v35;
  if ( v22->max_length <= 4 )
  {
    v43 = sub_B5D6C8(v35);
    sub_B5D668(v43, 0LL);
  }
  v36 = System_Int32__Parse(v22->m_Items[4], 0LL);
  v23->fields.condTargetNum = v36;
  if ( v22->max_length <= 5 )
  {
    v44 = sub_B5D6C8(v36);
    sub_B5D668(v44, 0LL);
  }
  v23->fields.InfoValue = System_Int32__Parse(v22->m_Items[5], 0LL);
  return v23;
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
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *v23; // x24
  __int64 v24; // x0
  const MethodInfo *v25; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SortedSpotStateDataArray; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v27; // x21
  WarBoardData_SquareRangeSearch_o *v28; // x0

  if ( (byte_42E8613 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___,
      spotId,
      beforeClearQuestId,
      isCheckResetFlag);
    sub_B5D5C4(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__, v17, v18, v19);
    sub_B5D5C4(&BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo, v20, v21, v22);
    byte_42E8613 = 1;
  }
  v23 = (BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *)sub_B5D694(BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo);
  BlankEarthSpotAnimStateManager___c__DisplayClass10_0___ctor(v23, 0LL);
  if ( !v23 )
    sub_B5D69C(v24, v25);
  v23->fields.spotId = spotId;
  v23->fields.beforeClearQuestId = beforeClearQuestId;
  v23->fields.isCheckResetFlag = isCheckResetFlag;
  SortedSpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
                                                                                    this,
                                                                                    v25);
  v27 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v27,
    (Il2CppObject *)v23,
    Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool___ctor__);
  v28 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          SortedSpotStateDataArray,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
  if ( v28 )
    return HIDWORD(v28[1].monitor);
  return defaultValue;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__GetSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
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
  _QWORD **v38; // x21
  __int64 v39; // x20
  __int16 v40; // w8
  __int64 v41; // x20
  __int64 v42; // x20
  __int64 v43; // x20
  BlankEarthSpotAnimStateManager_SpotStateData_array *v44; // x20
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v46; // x1
  System_String_o *v47; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v49; // x21
  System_Collections_Generic_IEnumerable_T__o *v50; // x0
  System_Collections_Generic_IEnumerable_T__o *v51; // x0
  __int64 v53; // x0
  WarQuestSelectionEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8611 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___, v5, v6, v7);
    sub_B5D5C4(&Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__, v8, v9, v10);
    sub_B5D5C4(&char___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantStrMaster___, v14, v15, v16);
    sub_B5D5C4(&DataManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_2633/*"BLANK_EARTH_SPOT_ANIM_STATE"*/, v35, v36, v37);
    byte_42E8611 = 1;
  }
  entity = 0LL;
  v38 = (_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___;
  v39 = **((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6);
  v40 = *(_WORD *)(v39 + 306);
  if ( (v40 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 6));
    v40 = *(_WORD *)(v39 + 306);
  }
  if ( (v40 & 0x400) != 0 )
  {
    v41 = *v38[6];
    if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
      sub_AF52C4(*v38[6]);
    if ( !*(_DWORD *)(v41 + 224) )
    {
      v42 = *v38[6];
      if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
        sub_AF52C4(*v38[6]);
      j_il2cpp_runtime_class_init_0(v42);
    }
  }
  v43 = *v38[6];
  if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
    sub_AF52C4(*v38[6]);
  v44 = **(BlankEarthSpotAnimStateManager_SpotStateData_array ***)(v43 + 184);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_27;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string___TryGetEntity(
                                                                  (DataMasterBase_WarQuestSelectionMaster__WarQuestSelectionEntity__string__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  (System_String_o *)StringLiteral_2633/*"BLANK_EARTH_SPOT_ANIM_STATE"*/,
                                                                  (const MethodInfo_23FB2B8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
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
        v47 = *(System_String_o **)&entity->fields.shortCutBannerId;
        Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( Master_WarQuestSelectionMaster )
        {
          v46 = Master_WarQuestSelectionMaster;
          if ( !LODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
          {
            v53 = sub_B5D6C8(Master_WarQuestSelectionMaster);
            sub_B5D668(v53, 0LL);
          }
          LOWORD(Master_WarQuestSelectionMaster->fields.list) = 47;
          if ( v47 )
          {
            v48 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                         v47,
                                                                         (System_Char_array *)Master_WarQuestSelectionMaster,
                                                                         0LL);
            v49 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
              v49,
              (Il2CppObject *)this,
              Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__,
              (const MethodInfo_2C3041C *)Method_System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData___ctor__);
            v50 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v48,
                                                                   (System_Func_TSource__TResult__o *)v49,
                                                                   (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
            v51 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                    v50,
                    (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
            return (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v51,
                                                                           (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
          }
        }
      }
LABEL_27:
      sub_B5D69C(Master_WarQuestSelectionMaster, v46);
    }
  }
  return v44;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
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
  BattleServantConfConponent_o *p_sortedSpotStateDataArray; // x19
  System_Int32_array **sortedSpotStateDataArray; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SpotStateDataArray; // x20
  BlankEarthSpotAnimStateManager___c_c *v23; // x8
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__6_0; // x21
  Il2CppObject *v26; // x22
  struct BlankEarthSpotAnimStateManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42E8610 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__, v14, v15, v16);
    sub_B5D5C4(&BlankEarthSpotAnimStateManager___c_TypeInfo, v17, v18, v19);
    byte_42E8610 = 1;
  }
  p_sortedSpotStateDataArray = (BattleServantConfConponent_o *)&this->fields.sortedSpotStateDataArray;
  sortedSpotStateDataArray = (System_Int32_array **)this->fields.sortedSpotStateDataArray;
  if ( !sortedSpotStateDataArray )
  {
    SpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
                                                                                this,
                                                                                method);
    v23 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    if ( (BYTE3(BlankEarthSpotAnimStateManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BlankEarthSpotAnimStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotAnimStateManager___c_TypeInfo);
      v23 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    }
    static_fields = v23->static_fields;
    _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      }
      v26 = (Il2CppObject *)static_fields->__9;
      _9__6_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo);
      System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
        _9__6_0,
        v26,
        Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__,
        (const MethodInfo_2C2F87C *)Method_System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int___ctor__);
      v27 = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      v27->__9__6_0 = (struct System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__o *)_9__6_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v27->__9__6_0,
        (System_Int32_array **)_9__6_0,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                                                 SpotStateDataArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_1CAF208 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sortedSpotStateDataArray = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                        v34,
                                                        (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    p_sortedSpotStateDataArray->klass = (BattleServantConfConponent_c *)sortedSpotStateDataArray;
    sub_B5D560(p_sortedSpotStateDataArray, sortedSpotStateDataArray, v35, v36, v37, v38, v39, v40);
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
    sub_B5D560(
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

  if ( (byte_42E5E1A & 1) == 0 )
  {
    sub_B5D5C4(&CondType_TypeInfo, beforeClearQuestId, isCheckResetFlag, method);
    byte_42E5E1A = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E19 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthSpotAnimStateManager___c_TypeInfo, v1, v2, v3);
    byte_42E5E19 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BlankEarthSpotAnimStateManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct BlankEarthSpotAnimStateManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.SpotId == this->fields.spotId
      && BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
           x,
           this->fields.beforeClearQuestId,
           this->fields.isCheckResetFlag,
           v3);
}