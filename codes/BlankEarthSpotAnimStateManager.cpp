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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_String_array *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x1
  intptr_t v22; // w21
  System_Type_o *TypeFromHandle; // x0
  __int64 v24; // x1
  System_Type_o *v25; // x21
  System_String_o *v26; // x22
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  _DWORD *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x0
  __int64 v36; // x1
  System_RuntimeTypeHandle_o v38; // 0:w0.4

  if ( (byte_4B15CF1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Enum_TypeInfo, dataString, method);
    sub_1BCA7E0(&CondType_Kind_var, v4, v5);
    sub_1BCA7E0(&CondType_Kind_TypeInfo, v6, v7);
    sub_1BCA7E0(&BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo, v8, v9);
    this = (BlankEarthSpotAnimStateManager_o *)sub_1BCA7E0(&System_Type_TypeInfo, v10, v11);
    byte_4B15CF1 = 1;
  }
  if ( !dataString )
    sub_1BCAA3C(this, dataString);
  v12 = System_String__Split(dataString, 0x2Cu, 0, 0LL);
  v16 = sub_1BCAA2C(BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo, v13, v14, v15);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v17, v18);
  if ( !v12->max_length )
    sub_1BCAA44(v17, v18);
  v19 = System_Int32__Parse(v12->m_Items[0], 0LL);
  if ( !v16 )
    sub_1BCAA3C(v19, v20);
  *(_DWORD *)(v16 + 16) = v19;
  if ( v12->max_length <= 1 )
    sub_1BCAA44(v19, v20);
  *(_DWORD *)(v16 + 20) = System_Int32__Parse(v12->m_Items[1], 0LL);
  v22 = (int)CondType_Kind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, v21);
  v38.fields.value = v22;
  TypeFromHandle = System_Type__GetTypeFromHandle(v38, 0LL);
  if ( v12->max_length <= 2 )
    sub_1BCAA44(TypeFromHandle, v24);
  v25 = TypeFromHandle;
  v26 = v12->m_Items[2];
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v24);
  v27 = System_Enum__Parse(v25, v26, 0LL);
  if ( !v27 )
    sub_1BCAA3C(0LL, v28);
  if ( v27->klass->_1.element_class != CondType_Kind_TypeInfo->_1.element_class )
  {
    sub_1BCACFC(v27);
LABEL_27:
    sub_1BCAA44(v31, v32);
  }
  v31 = (_DWORD *)j_il2cpp_object_unbox_0(v27, CondType_Kind_TypeInfo, v29, v30);
  *(_DWORD *)(v16 + 24) = *v31;
  if ( v12->max_length <= 3 )
    goto LABEL_27;
  v33 = System_Int32__Parse(v12->m_Items[3], 0LL);
  *(_DWORD *)(v16 + 28) = v33;
  if ( v12->max_length <= 4 )
    sub_1BCAA44(v33, v34);
  v35 = System_Int32__Parse(v12->m_Items[4], 0LL);
  *(_DWORD *)(v16 + 32) = v35;
  if ( v12->max_length <= 5 )
    sub_1BCAA44(v35, v36);
  *(_DWORD *)(v16 + 36) = System_Int32__Parse(v12->m_Items[5], 0LL);
  return (BlankEarthSpotAnimStateManager_SpotStateData_o *)v16;
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x24
  __int64 v18; // x0
  const MethodInfo *v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SortedSpotStateDataArray; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Func_object__bool__o *v24; // x21
  Il2CppObject *v25; // x0

  if ( (byte_4B15CF2 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___,
      *(_QWORD *)&spotId,
      *(_QWORD *)&beforeClearQuestId);
    sub_1BCA7E0(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__, v13, v14);
    sub_1BCA7E0(&BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo, v15, v16);
    byte_4B15CF2 = 1;
  }
  v17 = sub_1BCAA2C(
          BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo,
          *(_QWORD *)&spotId,
          *(_QWORD *)&beforeClearQuestId,
          isCheckResetFlag);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
  *(_DWORD *)(v17 + 16) = spotId;
  *(_DWORD *)(v17 + 20) = beforeClearQuestId;
  *(_BYTE *)(v17 + 24) = isCheckResetFlag;
  SortedSpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
                                                                                    this,
                                                                                    v19);
  v24 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo,
                                         v21,
                                         v22,
                                         v23);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v17,
    Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__,
    0LL);
  v25 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          SortedSpotStateDataArray,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
  if ( v25 )
    return HIDWORD(v25[2].klass);
  return defaultValue;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__GetSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double inited; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  _QWORD *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  BlankEarthSpotAnimStateManager_SpotStateData_array *v27; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  System_Func_object__object__o *v34; // x21
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B15CF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___, v5, v6);
    sub_1BCA7E0(&Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__, v7, v8);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantStrMaster___, v9, v10);
    sub_1BCA7E0(&DataManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v17, v18);
    sub_1BCA7E0(&System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_3069/*"BLANK_EARTH_SPOT_ANIM_STATE"*/, v21, v22);
    byte_4B15CF0 = 1;
  }
  v23 = Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___;
  entity = 0LL;
  v24 = *((_QWORD *)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 7);
  if ( !v24 )
  {
    sub_1C1C718(Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___, method);
    v24 = v23[7];
  }
  v25 = *(_QWORD *)(v24 + 16);
  if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
    v25 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v25 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v25, method);
  v26 = *(_QWORD *)(v23[7] + 16LL);
  if ( (*(_BYTE *)(v26 + 309) & 1) == 0 )
    v26 = sub_1C1C6BC(inited);
  v27 = **(BlankEarthSpotAnimStateManager_SpotStateData_array ***)(v26 + 184);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  (Il2CppObject *)StringLiteral_3069/*"BLANK_EARTH_SPOT_ANIM_STATE"*/,
                                                                  (const MethodInfo_31B31E8 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__IsNullOrEmpty(
                                                                    (System_String_o *)entity[1].monitor,
                                                                    0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( entity )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity[1].monitor;
        if ( Master_object )
        {
          v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                       (System_String_o *)Master_object,
                                                                       0x2Fu,
                                                                       0,
                                                                       0LL);
          v34 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                   System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo,
                                                   v31,
                                                   v32,
                                                   v33);
          System_Func_object__object____ctor(
            v34,
            (Il2CppObject *)this,
            Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__,
            0LL);
          v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v30,
                                                                 (System_Func_TSource__TResult__o *)v34,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
          v36 = BasicHelper__ExcludeNull_object_(
                  v35,
                  (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
          return (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v36,
                                                                         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
        }
      }
LABEL_21:
      sub_1BCAA3C(Master_object, v29);
    }
  }
  return v27;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  PartyOrganizationUtility_o *p_sortedSpotStateDataArray; // x19
  BlankEarthSpotAnimStateManager_SpotStateData_array *sortedSpotStateDataArray; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *SpotStateDataArray; // x20
  BlankEarthSpotAnimStateManager___c_c *v18; // x8
  System_Func_object__int__o *_9__6_0; // x21
  Il2CppObject *v20; // x22
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  if ( (byte_4B15CEF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v4, v5);
    sub_1BCA7E0(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__, v8, v9);
    sub_1BCA7E0(&BlankEarthSpotAnimStateManager___c_TypeInfo, v10, v11);
    byte_4B15CEF = 1;
  }
  p_sortedSpotStateDataArray = (PartyOrganizationUtility_o *)&this->fields.sortedSpotStateDataArray;
  sortedSpotStateDataArray = this->fields.sortedSpotStateDataArray;
  if ( !sortedSpotStateDataArray )
  {
    SpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
                                                                                this,
                                                                                method);
    v18 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    if ( !BlankEarthSpotAnimStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotAnimStateManager___c_TypeInfo, v14);
      v18 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__int__o *)v18->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18, v14);
        v18 = BlankEarthSpotAnimStateManager___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo,
                                                v14,
                                                v15,
                                                v16);
      System_Func_object__int____ctor(
        _9__6_0,
        v20,
        Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__,
        0LL);
      static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__o *)_9__6_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_0,
        (int64_t)_9__6_0,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
    }
    v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 SpotStateDataArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sortedSpotStateDataArray = (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                                       v28,
                                                                                       (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    p_sortedSpotStateDataArray->klass = (PartyOrganizationUtility_c *)sortedSpotStateDataArray;
    sub_1BCA784(p_sortedSpotStateDataArray, (int64_t)sortedSpotStateDataArray, v29, v30, v31, v32, v33, v34);
  }
  return sortedSpotStateDataArray;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  BlankEarthSpotAnimStateManager_Fields *p_fields; // x19
  struct BlankEarthSpotAnimStateManager_SpotStateData_array *spotStateDataArray; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_fields = &this->fields;
  spotStateDataArray = this->fields.spotStateDataArray;
  if ( !spotStateDataArray )
  {
    spotStateDataArray = BlankEarthSpotAnimStateManager__GetSpotStateDataArray(this, method);
    this->fields.spotStateDataArray = spotStateDataArray;
    sub_1BCA784((PartyOrganizationUtility_o *)p_fields, (int64_t)spotStateDataArray, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_4B15CF3 & 1) == 0 )
  {
    sub_1BCA7E0(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId, isCheckResetFlag);
    byte_4B15CF3 = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15CF4 & 1) == 0 )
  {
    sub_1BCA7E0(&BlankEarthSpotAnimStateManager___c_TypeInfo, v1, v2);
    byte_4B15CF4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BlankEarthSpotAnimStateManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotAnimStateManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.SpotId == this->fields.spotId
      && BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
           x,
           this->fields.beforeClearQuestId,
           this->fields.isCheckResetFlag,
           v3);
}