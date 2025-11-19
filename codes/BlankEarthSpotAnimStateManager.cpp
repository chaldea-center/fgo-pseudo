void BlankEarthSpotAnimStateManager___ctor(BlankEarthSpotAnimStateManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BlankEarthSpotAnimStateManager_SpotStateData_o *BlankEarthSpotAnimStateManager__ConvertStrToSpotStateData(
        BlankEarthSpotAnimStateManager_o *this,
        System_String_o *dataString,
        const MethodInfo *method)
{
  System_String_array *v4; // x20
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  Il2CppType *v10; // x21
  System_RuntimeTypeHandle_o v11; // x0
  System_Type_o *TypeFromHandle; // x0
  System_Type_o *v13; // x21
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  _DWORD *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_4CB5D43 & 1) == 0 )
  {
    sub_1C6BA08(&System_Enum_TypeInfo);
    sub_1C6BA08(&CondType_Kind_var);
    sub_1C6BA08(&CondType_Kind_TypeInfo);
    sub_1C6BA08(&BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo);
    this = (BlankEarthSpotAnimStateManager_o *)sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CB5D43 = 1;
  }
  if ( !dataString )
    sub_1C6BC60(this, dataString);
  v4 = System_String__Split(dataString, 0x2Cu, 0, 0);
  v5 = sub_1C6BC54(BlankEarthSpotAnimStateManager_SpotStateData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v4 )
    sub_1C6BC60(v6, v7);
  if ( !LODWORD(v4->max_length) )
    sub_1C6BC68(v6);
  v8 = System_Int32__Parse(v4->m_Items[0], 0);
  if ( !v5 )
    sub_1C6BC60(v8, v9);
  *(_DWORD *)(v5 + 16) = v8;
  if ( LODWORD(v4->max_length) <= 1 )
    sub_1C6BC68(v8);
  *(_DWORD *)(v5 + 20) = System_Int32__Parse(v4->m_Items[1], 0);
  v10 = CondType_Kind_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v11.fields.value = (intptr_t)v10;
  TypeFromHandle = System_Type__GetTypeFromHandle(v11, 0);
  if ( LODWORD(v4->max_length) <= 2 )
    sub_1C6BC68(TypeFromHandle);
  v13 = TypeFromHandle;
  v14 = v4->m_Items[2];
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  v15 = System_Enum__Parse(v13, v14, 0);
  if ( !v15 )
    sub_1C6BC60(0, v16);
  if ( v15->klass->_1.element_class != CondType_Kind_TypeInfo->_1.element_class )
  {
    sub_1C6BFFC(v15);
LABEL_27:
    sub_1C6BC68(v19);
  }
  v19 = (_DWORD *)j_il2cpp_object_unbox_0(v15, CondType_Kind_TypeInfo, v17, v18);
  *(_DWORD *)(v5 + 24) = *v19;
  if ( LODWORD(v4->max_length) <= 3 )
    goto LABEL_27;
  v20 = System_Int32__Parse(v4->m_Items[3], 0);
  *(_DWORD *)(v5 + 28) = v20;
  if ( LODWORD(v4->max_length) <= 4 )
    sub_1C6BC68(v20);
  v21 = System_Int32__Parse(v4->m_Items[4], 0);
  *(_DWORD *)(v5 + 32) = v21;
  if ( LODWORD(v4->max_length) <= 5 )
    sub_1C6BC68(v21);
  *(_DWORD *)(v5 + 36) = System_Int32__Parse(v4->m_Items[5], 0);
  return (BlankEarthSpotAnimStateManager_SpotStateData_o *)v5;
}


int32_t BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
        BlankEarthSpotAnimStateManager_o *this,
        int32_t spotId,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SortedSpotStateDataArray; // x20
  System_Func_object__bool__o *v15; // x21
  Il2CppObject *v16; // x0

  if ( (byte_4CB5D44 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_1C6BA08(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo);
    sub_1C6BA08(&Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__);
    sub_1C6BA08(&BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo);
    byte_4CB5D44 = 1;
  }
  v11 = sub_1C6BC54(BlankEarthSpotAnimStateManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C6BC60(v12, v13);
  *(_DWORD *)(v11 + 16) = spotId;
  *(_DWORD *)(v11 + 20) = beforeClearQuestId;
  *(_BYTE *)(v11 + 24) = isCheckResetFlag;
  SortedSpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
                                                                                    this,
                                                                                    v13);
  v15 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_BlankEarthSpotAnimStateManager_SpotStateData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_BlankEarthSpotAnimStateManager___c__DisplayClass10_0__GetCurrentAnimIndex_b__0__,
    0);
  v16 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
          SortedSpotStateDataArray,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_BlankEarthSpotAnimStateManager_SpotStateData___);
  if ( v16 )
    return HIDWORD(v16[2].klass);
  return defaultValue;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *BlankEarthSpotAnimStateManager__GetSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x20
  __int64 v5; // x8
  __int64 v6; // x0
  __int64 v7; // x0
  BlankEarthSpotAnimStateManager_SpotStateData_array *v8; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x20
  System_Func_object__object__o *v12; // x21
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CB5D42 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_1C6BA08(&Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__);
    sub_1C6BA08(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_1C6BA08(&System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo);
    sub_1C6BA08(&StringLiteral_2936/*"BLANK_EARTH_SPOT_ANIM_STATE"*/);
    byte_4CB5D42 = 1;
  }
  v4 = Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___;
  entity = 0;
  v5 = *((_QWORD *)Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___ + 7);
  if ( !v5 )
  {
    sub_1C41AF8(Method_System_Array_Empty_BlankEarthSpotAnimStateManager_SpotStateData___);
    v5 = v4[7];
  }
  v6 = *(_QWORD *)(v5 + 16);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C41A9C(inited);
  if ( !*(_DWORD *)(v6 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v6);
  v7 = *(_QWORD *)(v4[7] + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C41A9C(inited);
  v8 = **(BlankEarthSpotAnimStateManager_SpotStateData_array ***)(v7 + 184);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !Master_object )
    goto LABEL_21;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__object___TryGetEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  (Il2CppObject *)StringLiteral_2936/*"BLANK_EARTH_SPOT_ANIM_STATE"*/,
                                                                  (const MethodInfo_33FDBE0 *)Method_DataMasterBase_ConstantStrMaster__ConstantStrEntity__string__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__IsNullOrEmpty(
                                                                    (System_String_o *)entity[1].monitor,
                                                                    0);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
    {
      if ( entity )
      {
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity[1].monitor;
        if ( Master_object )
        {
          v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(
                                                                       (System_String_o *)Master_object,
                                                                       0x2Fu,
                                                                       0,
                                                                       0);
          v12 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_string__BlankEarthSpotAnimStateManager_SpotStateData__TypeInfo);
          System_Func_object__object____ctor(
            v12,
            (Il2CppObject *)this,
            Method_BlankEarthSpotAnimStateManager_ConvertStrToSpotStateData__,
            0);
          v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v11,
                                                                 (System_Func_TSource__TResult__o *)v12,
                                                                 (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_string__BlankEarthSpotAnimStateManager_SpotStateData___);
          v14 = BasicHelper__ExcludeNull_object_(
                  v13,
                  (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData___);
          return (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                                         (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
        }
      }
LABEL_21:
      sub_1C6BC60(Master_object, v10);
    }
  }
  return v8;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *BlankEarthSpotAnimStateManager__get_SortedSpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_sortedSpotStateDataArray; // x19
  BlankEarthSpotAnimStateManager_SpotStateData_array *sortedSpotStateDataArray; // x21
  System_Collections_Generic_IEnumerable_TSource__o *SpotStateDataArray; // x20
  BlankEarthSpotAnimStateManager___c_c *v6; // x8
  System_Func_object__int__o *_9__6_0; // x21
  Il2CppObject *v8; // x22
  struct BlankEarthSpotAnimStateManager___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB5D41 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    sub_1C6BA08(&System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo);
    sub_1C6BA08(&Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__);
    sub_1C6BA08(&BlankEarthSpotAnimStateManager___c_TypeInfo);
    byte_4CB5D41 = 1;
  }
  p_sortedSpotStateDataArray = (CGThumbnailListItem_o *)&this->fields.sortedSpotStateDataArray;
  sortedSpotStateDataArray = this->fields.sortedSpotStateDataArray;
  if ( !sortedSpotStateDataArray )
  {
    SpotStateDataArray = (System_Collections_Generic_IEnumerable_TSource__o *)BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
                                                                                this,
                                                                                method);
    v6 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    if ( !BlankEarthSpotAnimStateManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BlankEarthSpotAnimStateManager___c_TypeInfo);
      v6 = BlankEarthSpotAnimStateManager___c_TypeInfo;
    }
    _9__6_0 = (System_Func_object__int__o *)v6->static_fields->__9__6_0;
    if ( !_9__6_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BlankEarthSpotAnimStateManager___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__6_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_0,
        v8,
        Method_BlankEarthSpotAnimStateManager___c__get_SortedSpotStateDataArray_b__6_0__,
        0);
      static_fields = BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields;
      static_fields->__9__6_0 = (struct System_Func_BlankEarthSpotAnimStateManager_SpotStateData__int__o *)_9__6_0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v10, v11);
    }
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 SpotStateDataArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_0,
                                                                 (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_BlankEarthSpotAnimStateManager_SpotStateData__int___);
    sortedSpotStateDataArray = (BlankEarthSpotAnimStateManager_SpotStateData_array *)System_Linq_Enumerable__ToArray_object_(
                                                                                       v12,
                                                                                       (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_BlankEarthSpotAnimStateManager_SpotStateData___);
    p_sortedSpotStateDataArray->klass = (CGThumbnailListItem_c *)sortedSpotStateDataArray;
    sub_1C6B9AC(p_sortedSpotStateDataArray, (int32_t)sortedSpotStateDataArray, v13, v14);
  }
  return sortedSpotStateDataArray;
}


BlankEarthSpotAnimStateManager_SpotStateData_array *BlankEarthSpotAnimStateManager__get_SpotStateDataArray(
        BlankEarthSpotAnimStateManager_o *this,
        const MethodInfo *method)
{
  BlankEarthSpotAnimStateManager_Fields *p_fields; // x19
  struct BlankEarthSpotAnimStateManager_SpotStateData_array *spotStateDataArray; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_fields = &this->fields;
  spotStateDataArray = this->fields.spotStateDataArray;
  if ( !spotStateDataArray )
  {
    spotStateDataArray = BlankEarthSpotAnimStateManager__GetSpotStateDataArray(this, method);
    this->fields.spotStateDataArray = spotStateDataArray;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_fields, (int32_t)spotStateDataArray, v5, v6);
  }
  return spotStateDataArray;
}


void BlankEarthSpotAnimStateManager_SpotStateData___ctor(
        BlankEarthSpotAnimStateManager_SpotStateData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
        BlankEarthSpotAnimStateManager_SpotStateData_o *this,
        int32_t beforeClearQuestId,
        bool isCheckResetFlag,
        const MethodInfo *method)
{
  int32_t condTargetId; // w22
  int32_t condTargetType; // w23
  int64_t condTargetNum; // x21

  if ( (byte_4CB5D45 & 1) == 0 )
  {
    sub_1C6BA08(&CondType_TypeInfo);
    byte_4CB5D45 = 1;
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
           0);
}


void BlankEarthSpotAnimStateManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5D46 & 1) == 0 )
  {
    sub_1C6BA08(&BlankEarthSpotAnimStateManager___c_TypeInfo);
    byte_4CB5D46 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BlankEarthSpotAnimStateManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields->__9 = (struct BlankEarthSpotAnimStateManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BlankEarthSpotAnimStateManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BlankEarthSpotAnimStateManager___c___ctor(BlankEarthSpotAnimStateManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BlankEarthSpotAnimStateManager___c___get_SortedSpotStateDataArray_b__6_0(
        BlankEarthSpotAnimStateManager___c_o *this,
        BlankEarthSpotAnimStateManager_SpotStateData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return -x->fields.Priority;
}


void BlankEarthSpotAnimStateManager___c__DisplayClass10_0___ctor(
        BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BlankEarthSpotAnimStateManager___c__DisplayClass10_0___GetCurrentAnimIndex_b__0(
        BlankEarthSpotAnimStateManager___c__DisplayClass10_0_o *this,
        BlankEarthSpotAnimStateManager_SpotStateData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.SpotId == this->fields.spotId
      && BlankEarthSpotAnimStateManager_SpotStateData__IsOpen(
           x,
           this->fields.beforeClearQuestId,
           this->fields.isCheckResetFlag,
           v3);
}