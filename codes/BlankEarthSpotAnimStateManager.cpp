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
  System_String_array *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x0
  __int64 v15; // x1
  intptr_t v16; // w21
  System_Type_o *TypeFromHandle; // x0
  __int64 v18; // x1
  System_Type_o *v19; // x21
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  _DWORD *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  System_RuntimeTypeHandle_o v31; // 0:w0.4

  if ( (byte_49FBF2A & 1) == 0 )
  {
    sub_1B640C8(&System_Enum_TypeInfo, dataString);
    sub_1B640C8(&CondType_Kind_var, v4);
    sub_1B640C8(&CondType_Kind_TypeInfo, v5);
    sub_1B640C8(&BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo, v6);
    this = (BlankEarthSpotAnimStateManager_o *)sub_1B640C8(&System_Type_TypeInfo, v7);
    byte_49FBF2A = 1;
  }
  if ( !dataString )
    sub_1B64324(this);
  v8 = System_String__Split(dataString, 0x2Cu, 0, 0LL);
  v11 = sub_1B64314(BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo, v9, v10);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v8 )
    sub_1B64324(v12);
  if ( !v8->max_length )
    sub_1B6432C(v12, v13);
  v14 = System_Int32__Parse(v8->m_Items[0], 0LL);
  if ( !v11 )
    sub_1B64324(v14);
  *(_DWORD *)(v11 + 16) = v14;
  if ( v8->max_length <= 1 )
    sub_1B6432C(v14, v15);
  *(_DWORD *)(v11 + 20) = System_Int32__Parse(v8->m_Items[1], 0LL);
  v16 = (int)CondType_Kind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v31.fields.value = v16;
  TypeFromHandle = System_Type__GetTypeFromHandle(v31, 0LL);
  if ( v8->max_length <= 2 )
    sub_1B6432C(TypeFromHandle, v18);
  v19 = TypeFromHandle;
  v20 = v8->m_Items[2];
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v21 = System_Enum__Parse(v19, v20, 0LL);
  if ( !v21 )
    sub_1B64324(0LL);
  if ( v21->klass->_1.element_class != CondType_Kind_TypeInfo->_1.element_class )
  {
    sub_1B645E4(v21);
LABEL_27:
    sub_1B6432C(v24, v25);
  }
  v24 = (_DWORD *)j_il2cpp_object_unbox_0(v21, CondType_Kind_TypeInfo, v22, v23);
  *(_DWORD *)(v11 + 24) = *v24;
  if ( v8->max_length <= 3 )
    goto LABEL_27;
  v26 = System_Int32__Parse(v8->m_Items[3], 0LL);
  *(_DWORD *)(v11 + 28) = v26;
  if ( v8->max_length <= 4 )
    sub_1B6432C(v26, v27);
  v28 = System_Int32__Parse(v8->m_Items[4], 0LL);
  *(_DWORD *)(v11 + 32) = v28;
  if ( v8->max_length <= 5 )
    sub_1B6432C(v28, v29);
  *(_DWORD *)(v11 + 36) = System_Int32__Parse(v8->m_Items[5], 0LL);
  return (BlankEarthSpotAnimStateManager_SpotStateData_o *)v11;
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
  __int64 v14; // x24
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SortedSpotStateDataArray; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Func_object__bool__o *v20; // x21
  Il2CppObject *v21; // x0

  if ( (byte_49FBF2B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___,
      *(_QWORD *)&spotId);
    sub_1B640C8(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo, v11);
    sub_1B640C8(&Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__, v12);
    sub_1B640C8(&BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo, v13);
    byte_49FBF2B = 1;
  }
  v14 = sub_1B64314(
          BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo,
          *(_QWORD *)&spotId,
          *(_QWORD *)&beforeClearQuestId);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1B64324(v15);
  *(_DWORD *)(v14 + 16) = spotId;
  *(_DWORD *)(v14 + 20) = beforeClearQuestId;
  *(_BYTE *)(v14 + 24) = isCheckResetFlag;
  SortedSpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
                                                                                    this,
                                                                                    v16);
  v20 = (System_Func_object__bool__o *)sub_1B64314(
                                         System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo,
                                         v18,
                                         v19);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v14,
    Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__,
    0LL);
  v21 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          SortedSpotStateDataArray,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
  if ( v21 )
    return HIDWORD(v21[2].klass);
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
  _QWORD *v12; // x20
  __int64 v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0
  BlankEarthSpotAnimStateManager_SpotStateData_array *v16; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_object__object__o *v21; // x21
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Collections_Generic_IEnumerable_T__o *v23; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FBF29 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___, method);
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___, v3);
    sub_1B640C8(&Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_ConstantStrMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v9);
    sub_1B640C8(&System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo, v10);
    sub_1B640C8(&StringLiteral_3027/*"BLANK_EARTH_SPOT_ANIM_STATE"*/, v11);
    byte_49FBF29 = 1;
  }
  v12 = Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___;
  entity = 0LL;
  v13 = *((_QWORD *)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 7);
  if ( !v13 )
  {
    sub_1BB6000(Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___);
    v13 = v12[7];
  }
  v14 = *(_QWORD *)(v13 + 16);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BB5FA4(v14);
  if ( !*(_DWORD *)(v14 + 224) )
    j_il2cpp_runtime_class_init_0(v14);
  v15 = *(_QWORD *)(v12[7] + 16LL);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1BB5FA4(v15);
  v16 = **(BlankEarthSpotAnimStateManager_SpotStateData_array ***)(v15 + 184);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  (Il2CppObject *)StringLiteral_3027/*"BLANK_EARTH_SPOT_ANIM_STATE"*/,
                                                                  (const MethodInfo_30D424C *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
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
          v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                       (System_String_o *)Master_object,
                                                                       0x2Fu,
                                                                       0,
                                                                       0LL);
          v21 = (System_Func_object__object__o *)sub_1B64314(
                                                   System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo,
                                                   v19,
                                                   v20);
          System_Func_object__object____ctor(
            v21,
            (Il2CppObject *)this,
            Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__,
            0LL);
          v22 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v18,
                                                                 (System_Func_TSource__TResult__o *)v21,
                                                                 (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
          v23 = BasicHelper__ExcludeNull_object_(
                  v22,
                  (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
          return (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                                                                         (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
        }
      }
LABEL_21:
      sub_1B64324(Master_object);
    }
  }
  return v16;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ServantStatusBattleListViewItem_o *p_sortedSpotStateDataArray; // x19
  BlankEarthSpotAnimStateManager_SpotStateData_array *sortedSpotStateDataArray; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_TSource__o *SpotStateDataArray; // x20
  BlankEarthSpotAnimStateManager___c_c *v12; // x8
  System_Func_object__int__o *_9__6_0; // x21
  Il2CppObject *v14; // x22
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3

  if ( (byte_49FBF28 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___, v3);
    sub_1B640C8(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo, v4);
    sub_1B640C8(&Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__, v5);
    sub_1B640C8(&BlankEarthSpotAnimStateManager___c_TypeInfo, v6);
    byte_49FBF28 = 1;
  }
  p_sortedSpotStateDataArray = (ServantStatusBattleListViewItem_o *)&this->fields.sortedSpotStateDataArray;
  sortedSpotStateDataArray = this->fields.sortedSpotStateDataArray;
  if ( !sortedSpotStateDataArray )
  {
    SpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
                                                                                this,
                                                                                method);
    v12 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    if ( !BlankEarthSpotAnimStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotAnimStateManager___c_TypeInfo);
      v12 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__int__o *)v12->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BlankEarthSpotAnimStateManager___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_1B64314(
                                                System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo,
                                                v9,
                                                v10);
      System_Func_object__int____ctor(
        _9__6_0,
        v14,
        Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__,
        0LL);
      static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__o *)_9__6_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v16, v17);
    }
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 SpotStateDataArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sortedSpotStateDataArray = (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                                       v18,
                                                                                       (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    p_sortedSpotStateDataArray->klass = (ServantStatusBattleListViewItem_c *)sortedSpotStateDataArray;
    sub_1B6406C(p_sortedSpotStateDataArray, (int32_t)sortedSpotStateDataArray, v19, v20);
  }
  return sortedSpotStateDataArray;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *__fastcall BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_fields; // x19
  struct BlankEarthSpotAnimStateManager_SpotStateData_array *spotStateDataArray; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  spotStateDataArray = this->fields.spotStateDataArray;
  if ( !spotStateDataArray )
  {
    spotStateDataArray = BlankEarthSpotAnimStateManager__GetSpotStateDataArray(this, method);
    this->fields.spotStateDataArray = spotStateDataArray;
    sub_1B6406C(p_fields, (int32_t)spotStateDataArray, v5, v6);
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

  if ( (byte_49FBF2C & 1) == 0 )
  {
    sub_1B640C8(&CondType_TypeInfo, *(_QWORD *)&beforeClearQuestId);
    byte_49FBF2C = 1;
  }
  condTargetType = this->fields.condTargetType;
  condTargetId = this->fields.condTargetId;
  condTargetNum = this->fields.condTargetNum;
  if ( !CondType_TypeInfo->_2.cctor_finished )
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
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBF2D & 1) == 0 )
  {
    sub_1B640C8(&BlankEarthSpotAnimStateManager___c_TypeInfo, v1);
    byte_49FBF2D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BlankEarthSpotAnimStateManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotAnimStateManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.SpotId == this->fields.spotId
      && BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
           x,
           this->fields.beforeClearQuestId,
           this->fields.isCheckResetFlag,
           v3);
}