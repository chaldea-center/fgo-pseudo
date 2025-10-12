void BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_HashSet_T__o *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattlePerformance_o *perf; // x1
  struct BattleLogic_o *logic; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4C3A47D & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
    sub_1C32C20(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
    byte_4C3A47D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.backgroundList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgmList, (int32_t)v8, v9, v10);
  this->fields.addOrder = 1;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.addTaskList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_HashSet_T__o *)sub_1C32E6C(System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v14,
    (const MethodInfo_364B3A4 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.hashDelType, (int32_t)v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Data_k__BackingField = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Data_k__BackingField, (int32_t)data, v17, v18);
  if ( !data )
    sub_1C32E7C(v19);
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Perf_k__BackingField, (int32_t)perf, v20, v21);
  logic = data->fields.logic;
  this->fields._Logic_k__BackingField = logic;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Logic_k__BackingField, (int32_t)logic, v24, v25);
}


BattleFieldEnvironmentData_BGMData_o *BattleFieldEnvironmentData__AddBGM(
        BattleFieldEnvironmentData_o *this,
        Generator_BGM_o *bgmGenerator,
        int32_t grantType,
        AddBgmArgument_o *arg,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v8; // x19
  __int64 addOrder; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleFieldEnvironmentData_BGMData_o *v12; // x21
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v14; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v16; // x8
  const MethodInfo *v17; // x1
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  BattleFieldEnvironmentData___c_c *v19; // x0
  System_Func_object__bool__o *_9__67_0; // x21
  Il2CppObject *v21; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  BattleFieldEnvironmentData___c_c *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x21
  BattleFieldEnvironmentData_o *v28; // x20
  System_Predicate_object__o *_9__67_1; // x22
  Il2CppObject *v30; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Comparison_T__o *v34; // x21
  System_Collections_Generic_List_object__o *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  BattleFieldEnvironmentData_o *v41; // x1
  Il2CppClass **v42; // x0

  v8 = this;
  if ( (byte_4C3A48D & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1C32C20(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1C32C20(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    sub_1C32C20(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__AddBGM_b__67_0__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__AddBGM_b__67_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A48D = 1;
  }
  addOrder = (unsigned int)v8->fields.addOrder;
  v8->fields.addOrder = addOrder + 1;
  if ( !bgmGenerator )
    goto LABEL_33;
  v12 = (BattleFieldEnvironmentData_BGMData_o *)((__int64 (__fastcall *)(Generator_BGM_o *, __int64, _QWORD, const MethodInfo *, const MethodInfo *))bgmGenerator->klass->vtable._4_Make.methodPtr)(
                                                  bgmGenerator,
                                                  addOrder,
                                                  (unsigned int)grantType,
                                                  bgmGenerator->klass->vtable._4_Make.method,
                                                  method);
  if ( arg )
    AddBgmArgument__ControlOtherBgmPriorityAtOverStageBgm(arg, v8, v12, v11);
  this = (BattleFieldEnvironmentData_o *)v8->fields.bgmList;
  if ( !this )
    goto LABEL_33;
  buffData = this->fields._buffData;
  v14 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_33;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= buffData->fields.resumptionHpFromLossMaxHp )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v12,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v16[4] = (BattleBuffData_c *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
  }
  if ( !v12 )
    goto LABEL_33;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))v12->klass->vtable._5_get_IsTargetBase.methodPtr)(
          v12,
          v12->klass->vtable._5_get_IsTargetBase.method)
      & 1) == 0 )
    goto LABEL_32;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.bgmList;
  v19 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v19 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__67_0 = (System_Func_object__bool__o *)v19->static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__67_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__67_0, v21, Method_BattleFieldEnvironmentData___c__AddBGM_b__67_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__67_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__67_0, (int32_t)_9__67_0, v23, v24);
  }
  v25 = System_Linq_Enumerable__Where_object_(
          bgmList,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  this = (BattleFieldEnvironmentData_o *)System_Linq_Enumerable__ToList_object_(
                                           v25,
                                           (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
  v26 = BattleFieldEnvironmentData___c_TypeInfo;
  v27 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList;
  v28 = this;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v26 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__67_1 = (System_Predicate_object__o *)v26->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v26->static_fields->__9;
    _9__67_1 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(_9__67_1, v30, Method_BattleFieldEnvironmentData___c__AddBGM_b__67_1__, 0);
    v31 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v31->__9__67_1 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__67_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v31->__9__67_1, (int32_t)_9__67_1, v32, v33);
  }
  if ( !v27 )
    goto LABEL_33;
  System_Collections_Generic_List_object___RemoveAll(
    v27,
    (System_Predicate_T__o *)_9__67_1,
    (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v34 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v34, (Il2CppObject *)v8, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !v28
    || (System_Collections_Generic_List_object___Sort_58303104(
          (System_Collections_Generic_List_object__o *)v28,
          v34,
          (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__),
        v35 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList,
        this = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)v28,
                                                 0,
                                                 (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__),
        !v35)
    || (items = v35->fields._items,
        v39 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__,
        ++v35->fields._version,
        !items) )
  {
LABEL_33:
    sub_1C32E7C(this);
  }
  size = v35->fields._size;
  v41 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)this,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v35->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v41;
    sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v41, v36, v37);
  }
LABEL_32:
  BattleFieldEnvironmentData__SortBGM(v8, v17);
  return v8->fields._CurBGM_k__BackingField;
}


BattleFieldEnvironmentData_BackgroundData_o *BattleFieldEnvironmentData__AddBackground(
        BattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
  __int64 addOrder; // x1
  Il2CppObject *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *backgroundList; // x21
  System_Predicate_object__o *v12; // x22
  Il2CppObject *klass; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v18; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v20; // x8
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1

  v6 = this;
  if ( (byte_4C3A48C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_1C32C20(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__AddBackground_b__66_0__);
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A48C = 1;
  }
  addOrder = (unsigned int)v6->fields.addOrder;
  v6->fields.addOrder = addOrder + 1;
  if ( !bgGenerator )
    goto LABEL_20;
  this = (BattleFieldEnvironmentData_o *)((__int64 (__fastcall *)(Generator_Background_o *, __int64, _QWORD, const MethodInfo *))bgGenerator->klass->vtable._4_Make.methodPtr)(
                                           bgGenerator,
                                           addOrder,
                                           (unsigned int)grantType,
                                           bgGenerator->klass->vtable._4_Make.method);
  if ( !this )
    goto LABEL_20;
  v8 = (Il2CppObject *)this;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
          this,
          this->klass->vtable._5_AddBackground.method)
      & 1) != 0 )
  {
    backgroundList = (System_Collections_Generic_List_object__o *)v6->fields.backgroundList;
    this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
    }
    v12 = *(System_Predicate_object__o **)&this[1].fields._CurBGM_k__BackingField[1].fields.isAfterReset;
    if ( !v12 )
    {
      if ( !LODWORD(this[1].fields.baseBgm) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
      }
      klass = (Il2CppObject *)this[1].fields._CurBGM_k__BackingField->klass;
      v12 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
      System_Predicate_object____ctor(v12, klass, Method_BattleFieldEnvironmentData___c__AddBackground_b__66_0__, 0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__66_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v12;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__66_0, (int32_t)v12, v15, v16);
    }
    if ( backgroundList )
    {
      System_Collections_Generic_List_object___RemoveAll(
        backgroundList,
        (System_Predicate_T__o *)v12,
        (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
      goto LABEL_14;
    }
LABEL_20:
    sub_1C32E7C(this);
  }
LABEL_14:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_20;
  buffData = this->fields._buffData;
  v18 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_20;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= buffData->fields.resumptionHpFromLossMaxHp )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v8,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v20[4] = (BattleBuffData_c *)v8;
    sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v8, v9, v10);
  }
  BattleFieldEnvironmentData__SortBackGround(v6, v21);
  BattleFieldEnvironmentData__SortBGM(v6, v22);
  return v6->fields._CurBackGround_k__BackingField;
}


bool BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *changeBgmBuffArray,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w19
  BattleFieldEnvironmentData___c_c *v6; // x0
  System_Func_object__int__o *_9__59_0; // x22
  Il2CppObject *v8; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v12; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v14; // x20
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x20
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  BattleBuffData_ChangeBgmData_o *v28; // x0
  Generator_BGM_o *v29; // x1
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_4C3A485 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__59_0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A485 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)changeBgmBuffArray, 0);
  if ( !IsNullOrEmpty )
  {
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__59_0 = (System_Func_object__int__o *)v6->static_fields->__9__59_0;
    if ( !_9__59_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__59_0 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__59_0,
        v8,
        Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__59_0__,
        0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__59_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__59_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__59_0, (int32_t)_9__59_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)changeBgmBuffArray,
            (System_Func_TSource__TKey__o *)_9__59_0,
            (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    if ( !v12 )
      sub_1C32E7C(0);
    klass = v12->klass;
    v14 = v12;
    v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_15;
      }
      v17 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v17 = sub_1C83438(v12, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v17)(
            v14,
            *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C32E7C(0);
    while ( 1 )
    {
      v19 = *(_QWORD *)v18;
      v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v20;
          v21 += 4;
          if ( !v20 )
            goto LABEL_22;
        }
        v22 = v19 + 16LL * *v21 + 312;
      }
      else
      {
LABEL_22:
        v22 = sub_1C83438(v18, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
        break;
      v23 = *(_QWORD *)v18;
      v24 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
      {
        v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v25 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
        {
          --v24;
          v25 += 4;
          if ( !v24 )
            goto LABEL_29;
        }
        v26 = v23 + 16LL * *v25 + 312;
      }
      else
      {
LABEL_29:
        v26 = sub_1C83438(v18, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
      }
      v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v18, *(_QWORD *)(v26 + 8));
      if ( !v27 )
        sub_1C32E7C(0);
      v28 = *(BattleBuffData_ChangeBgmData_o **)(v27 + 376);
      if ( !v28 )
        sub_1C32E7C(0);
      v29 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(v28, this->fields._Data_k__BackingField, 0);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
        this,
        v29,
        2,
        0,
        this->klass->vtable._6_AddBGM.method);
    }
    v30 = *(_QWORD *)v18;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_38;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_38:
      v33 = sub_1C83438(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v18, *(_QWORD *)(v33 + 8));
  }
  return !IsNullOrEmpty;
}


void BattleFieldEnvironmentData__AddFieldBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool unFixBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buff);
  if ( !BuffData )
    sub_1C32E7C(0);
  BattleBuffData__addBuff(BuffData, buff, 1, unFixBuff, 0);
}


void BattleFieldEnvironmentData__AddLastInterruptTasks(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *addTaskList; // x0
  struct System_Collections_Generic_List_BattleLogicTask__o *v6; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_4C3A497 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3A497 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)logic, 0, 0) )
  {
    addTaskList = (System_Collections_Generic_List_object__o *)this->fields.addTaskList;
    if ( !addTaskList )
      goto LABEL_15;
    if ( addTaskList->fields._size >= 1 )
    {
      addTaskList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                   addTaskList,
                                                                   (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0);
        v6 = this->fields.addTaskList;
        if ( v6 )
        {
          size = v6->fields._size;
          v8 = v6->fields._version + 1;
          v6->fields._size = 0;
          v6->fields._version = v8;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)v6->fields._items, 0, size, 0);
          addTaskList = (System_Collections_Generic_List_object__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_Int32Enum___Clear(
              (System_Collections_Generic_HashSet_T__o *)addTaskList,
              (const MethodInfo_364BA38 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_15:
      sub_1C32E7C(addTaskList);
    }
  }
}


void BattleFieldEnvironmentData__AddPlayerServantChangeBgmWhenContinue(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *player_datalist; // x20
  BattleFieldEnvironmentData___c_c *v5; // x0
  System_Func_object__bool__o *_9__58_0; // x21
  Il2CppObject *v7; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  BattleFieldEnvironmentData___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__object__o *_9__58_1; // x21
  Il2CppObject *v15; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x1
  const MethodInfo *v21; // x2

  v2 = this;
  if ( (byte_4C3A484 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_0__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A484 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C32E7C(this);
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField->fields.player_datalist;
  v5 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v5 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__58_0 = (System_Func_object__bool__o *)v5->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__58_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__58_0,
      v7,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_BattleServantData__bool__o *)_9__58_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Where_object_(
          player_datalist,
          (System_Func_TSource__bool__o *)_9__58_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v12 = BattleFieldEnvironmentData___c_TypeInfo;
  v13 = v11;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v12 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__58_1 = (System_Func_object__object__o *)v12->static_fields->__9__58_1;
  if ( !_9__58_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__58_1 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_object__object____ctor(
      _9__58_1,
      v15,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_1__,
      0);
    v16 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v16->__9__58_1 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__58_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v16->__9__58_1, (int32_t)_9__58_1, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v13,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__58_1,
                                                               (const MethodInfo_31168AC *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v20, v21);
}


void BattleFieldEnvironmentData__AddRemoveProcTask(
        BattleFieldEnvironmentData_o *this,
        BattleLogicTask_o *task,
        int32_t addType,
        bool isNotDuplicated,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hashDelType; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Int32_array *buckets; // x8
  _QWORD *v13; // x9
  __int64 slots_low; // x10
  __int64 v15; // x8

  if ( (byte_4C3A498 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4C3A498 = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_12;
    if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
           hashDelType,
           addType,
           (const MethodInfo_364BA98 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_Int32Enum___Add(
          hashDelType,
          addType,
          (const MethodInfo_364C5A8 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.addTaskList) == 0)
    || (buckets = hashDelType->fields._buckets,
        v13 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++HIDWORD(hashDelType->fields._slots),
        !buckets) )
  {
LABEL_12:
    sub_1C32E7C(hashDelType);
  }
  slots_low = SLODWORD(hashDelType->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)hashDelType,
      (Il2CppObject *)task,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = (__int64)buckets + 8 * slots_low;
    LODWORD(hashDelType->fields._slots) = slots_low + 1;
    *(_QWORD *)(v15 + 32) = task;
    sub_1C32BC4((CGThumbnailListItem_o *)(v15 + 32), (int32_t)task, v10, v11);
  }
}


void BattleFieldEnvironmentData__AddServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Collections_Generic_IEnumerable_T__o *AllValidBGMChangeBuffArray; // x20
  System_Action_object__o *v6; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4C3A49D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__99_0__);
    byte_4C3A49D = 1;
  }
  if ( !svtData || (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(svtData, 0)) == 0 )
    sub_1C32E7C(this);
  AllValidBGMChangeBuffArray = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0);
  v6 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(v6, v4, Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__99_0__, 0);
  BasicHelper__ForEach_object_(
    AllValidBGMChangeBuffArray,
    (System_Action_T__o *)v6,
    (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void BattleFieldEnvironmentData__AddUpdateBgmTask(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  PlayCurrentBgmLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4C3A49F & 1) == 0 )
  {
    sub_1C32C20(&PlayCurrentBgmLogicTask_TypeInfo);
    byte_4C3A49F = 1;
  }
  v3 = (PlayCurrentBgmLogicTask_o *)sub_1C32E6C(PlayCurrentBgmLogicTask_TypeInfo);
  PlayCurrentBgmLogicTask___ctor(v3, 0);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 3, 1, v4);
}


void BattleFieldEnvironmentData__AddUpdateViewTask(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  UpdateFieldViewBattleLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4C3A49E & 1) == 0 )
  {
    sub_1C32C20(&UpdateFieldViewBattleLogicTask_TypeInfo);
    byte_4C3A49E = 1;
  }
  v3 = (UpdateFieldViewBattleLogicTask_o *)sub_1C32E6C(UpdateFieldViewBattleLogicTask_TypeInfo);
  UpdateFieldViewBattleLogicTask___ctor(v3, 0);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 2, 1, v4);
}


bool BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_46197176; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  System_Int32_array *BuffIndividualities; // x0

  Individualities_46197176 = buffIndiv;
  if ( opSvt )
    Individualities_46197176 = BattleServantData__getIndividualities_46197176(opSvt, buffIndiv, 1, 0, 0);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buffIndiv);
  v8 = BattleFieldEnvironmentData__get_BuffData(this, v7);
  if ( !v8
    || (BuffIndividualities = BattleBuffData__getBuffIndividualities(v8, 1, 0, 0, 0, 0, 0),
        v8 = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, System_Int32_array *, __int64, const MethodInfo *))this->klass->vtable._4_GetFieldIndividuality.methodPtr)(
                                   this,
                                   BuffIndividualities,
                                   1,
                                   this->klass->vtable._4_GetFieldIndividuality.method),
        !BuffData) )
  {
    sub_1C32E7C(v8);
  }
  return BattleBuffData__checkActBuff(BuffData, 105, (System_Int32_array *)v8, Individualities_46197176, 0);
}


void BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v4; // x1
  const MethodInfo *v5; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_1C32E7C(0);
  v4 = BattleBuffData__usedProgressing(BuffData, 0);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v4, 1, v5);
}


int32_t BattleFieldEnvironmentData__CompareData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BaseData_o *a,
        BattleFieldEnvironmentData_BaseData_o *b,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x22
  struct BattleFieldEnvironmentData_CommonData_o *v7; // x23
  int v8; // w21
  int notOverwrite; // w8
  int32_t v10; // w9
  int32_t result; // w0
  int32_t addOrder; // w8
  int32_t v13; // w9
  int v14; // w20
  int32_t priority; // w8
  int32_t v16; // w9

  if ( !a || !b )
    goto LABEL_14;
  comData = a->fields.comData;
  v7 = b->fields.comData;
  v8 = ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, const MethodInfo *, BattleFieldEnvironmentData_BaseData_o *, const MethodInfo *))a->klass->vtable._4_get_Active.methodPtr)(
         a,
         a->klass->vtable._4_get_Active.method,
         b,
         method);
  this = (BattleFieldEnvironmentData_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, const MethodInfo *))b->klass->vtable._4_get_Active.methodPtr)(
                                           b,
                                           b->klass->vtable._4_get_Active.method);
  if ( v8 != (_DWORD)this )
  {
    v14 = ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, const MethodInfo *))b->klass->vtable._4_get_Active.methodPtr)(
            b,
            b->klass->vtable._4_get_Active.method);
    return v14
         - ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, const MethodInfo *))a->klass->vtable._4_get_Active.methodPtr)(
             a,
             a->klass->vtable._4_get_Active.method);
  }
  if ( !comData || !v7 )
LABEL_14:
    sub_1C32E7C(this);
  notOverwrite = comData->fields.notOverwrite;
  v10 = v7->fields.notOverwrite;
  result = v10 - notOverwrite;
  if ( v10 == notOverwrite )
  {
    if ( notOverwrite < 1 )
    {
      priority = comData->fields.priority;
      v16 = v7->fields.priority;
      result = v16 - priority;
      if ( v16 != priority )
        return result;
      addOrder = v7->fields.addOrder;
      v13 = comData->fields.addOrder;
    }
    else
    {
      addOrder = comData->fields.addOrder;
      v13 = v7->fields.addOrder;
    }
    return addOrder - v13;
  }
  return result;
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  System_Func_object__object__o *_9__57_0; // x20
  Il2CppObject *v5; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3A483 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_1C32C20(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__57_0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A483 = 1;
  }
  if ( !servantEnumerable )
    return 0;
  v3 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v3 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__57_0 = (System_Func_object__object__o *)v3->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__57_0 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_object__object____ctor(
      _9__57_0,
      v5,
      Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__57_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__57_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v7, v8);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                                (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__57_0,
                                                                                (const MethodInfo_31168AC *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
}


void BattleFieldEnvironmentData__ExecRemoveAllBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v4; // x0
  System_Object_array *v5; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4C3A4A1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    byte_4C3A4A1 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData
    || (v4 = BattleBuffData__AllBuffEnumerable(BuffData, 0),
        v5 = System_Linq_Enumerable__ToArray_object_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v4,
               (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___),
        BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_45984452(this, (BattleBuffData_BuffData_array *)v5, 1, v6),
        (BuffData = BattleFieldEnvironmentData__get_BuffData(this, v7)) == 0) )
  {
    sub_1C32E7C(BuffData);
  }
  BattleBuffData__Initialize(BuffData, 0);
}


RemovedBuffInfo_o *BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        RemovedBuffInfo_o *removeBuffInfo,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x21
  System_Object_array *v7; // x0
  const MethodInfo *v8; // x3

  v6 = this;
  if ( (byte_4C3A499 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    byte_4C3A499 = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0 )
  {
    sub_1C32E7C(this);
  }
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)this,
         (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_45984452(
    v6,
    (BattleBuffData_BuffData_array *)v7,
    isAddAfterTask,
    v8);
  return removeBuffInfo;
}


void BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_45984452(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleFieldEnvironmentData___c_c *v11; // x0
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v13; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  System_Action_object__o *v18; // x22
  const MethodInfo *v19; // x1

  if ( (byte_4C3A49A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__87_0__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__DisplayClass87_0__ExecRemoveBuffAfterProc_b__1__);
    sub_1C32C20(&BattleFieldEnvironmentData___c__DisplayClass87_0_TypeInfo);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A49A = 1;
  }
  v7 = sub_1C32E6C(BattleFieldEnvironmentData___c__DisplayClass87_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C32E7C(v8);
  *(_QWORD *)(v7 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_BYTE *)(v7 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0) )
  {
    v11 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v11 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__87_0 = (System_Func_object__bool__o *)v11->static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__87_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__87_0,
        v13,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__87_0__,
        0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__87_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v15, v16);
    }
    v17 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v18 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v18,
      (Il2CppObject *)v7,
      Method_BattleFieldEnvironmentData___c__DisplayClass87_0__ExecRemoveBuffAfterProc_b__1__,
      0);
    BasicHelper__ForEach_object_(
      v17,
      (System_Action_T__o *)v18,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_45985056(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_1C32E7C(this);
  v7 = BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
         this,
         removeBuff->fields.delAfterProcType,
         (const MethodInfo *)isAddAfterTask);
  if ( v7 )
  {
    v8 = v7;
    ((void (__fastcall *)(FieldBuffDeleteProcess_o *, BattleFieldEnvironmentData_o *, const MethodInfo *))v7->klass->vtable._5_Init.methodPtr)(
      v7,
      this,
      v7->klass->vtable._5_Init.method);
    ((void (__fastcall *)(FieldBuffDeleteProcess_o *, BattleBuffData_BuffData_o *, bool, const MethodInfo *))v8->klass->vtable._4_Exec.methodPtr)(
      v8,
      removeBuff,
      isAddAfterTask,
      v8->klass->vtable._4_Exec.method);
  }
}


System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *BattleFieldEnvironmentData__GetBaseBgmList(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  System_Func_object__bool__o *_9__68_0; // x20
  Il2CppObject *v6; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4C3A48E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1C32C20(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__68_0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A48E = 1;
  }
  v3 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v3 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__68_0 = (System_Func_object__bool__o *)v3->static_fields->__9__68_0;
  if ( !_9__68_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__68_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__68_0, v6, Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__68_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__68_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__68_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__68_0, (int32_t)_9__68_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
          (System_Func_TSource__bool__o *)_9__68_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  return (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)System_Linq_Enumerable__ToList_object_(
                                                                                    v10,
                                                                                    (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
}


BuffUniqueValue_o *BattleFieldEnvironmentData__GetChangeBuffUniqueVal(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_FieldChangeData_o *fieldChangeData; // x0
  BuffUniqueValue_o *result; // x0
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !buff )
    sub_1C32E7C(this);
  fieldChangeData = buff->fields.fieldChangeData;
  if ( !fieldChangeData || (result = BattleBuffData_FieldChangeData__get_UniqueVal(fieldChangeData, 0)) == 0 )
  {
    changeBgmData = buff->fields.changeBgmData;
    if ( changeBgmData )
      return changeBgmData->fields.uniqueVal;
    else
      return 0;
  }
  return result;
}


System_Int32_array *BattleFieldEnvironmentData__GetChangeFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  const MethodInfo *v4; // x1
  BattleBuffData_o *BuffData; // x0
  int resumptionHpFromLossMaxHp; // w8
  BattleBuffData_o *v7; // x20
  unsigned int v8; // w21
  __int64 v9; // x23

  if ( (byte_4C3A489 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3A489 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v4);
  if ( !BuffData )
    goto LABEL_15;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetFieldChangeArray(BuffData, 0);
  if ( !BuffData )
    goto LABEL_15;
  resumptionHpFromLossMaxHp = BuffData->fields.resumptionHpFromLossMaxHp;
  v7 = BuffData;
  if ( resumptionHpFromLossMaxHp >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= resumptionHpFromLossMaxHp )
        sub_1C32E84(BuffData);
      v9 = *((_QWORD *)&v7->fields.passiveList + (int)v8);
      if ( !v9 )
        break;
      BuffData = (BattleBuffData_o *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v9 + 56), 0);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v3 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v3,
          *(System_Collections_Generic_IEnumerable_T__o **)(v9 + 56),
          (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      resumptionHpFromLossMaxHp = v7->fields.resumptionHpFromLossMaxHp;
      if ( (int)++v8 >= resumptionHpFromLossMaxHp )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C32E7C(BuffData);
  }
LABEL_13:
  if ( !v3 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *BattleFieldEnvironmentData__GetCommonFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        System_Int32_array *addIndiv,
        bool exceptDelTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v9; // x22
  System_Int32_array *IsNullOrEmpty; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C3A4A0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3A4A0 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)individuality, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v11);
    if ( !v9 )
LABEL_13:
      sub_1C32E7C(IsNullOrEmpty);
  }
  else
  {
    if ( !v9 )
      goto LABEL_13;
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v12);
  }
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0) )
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( exceptDelTarget )
    return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v9, v13);
  else
    return System_Collections_Generic_List_int___ToArray(
             v9,
             (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        bool exceptDelTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  BattleFieldEnvironmentData___c_c *v8; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x23
  System_Func_object__bool__o *_9__60_0; // x24
  Il2CppObject *v11; // x25
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_T__o *baseBackground; // x0
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  const MethodInfo *v17; // x1
  System_Collections_ICollection_o *QuestCommonIndividuality; // x0
  const MethodInfo *v19; // x1
  System_Int32_array *v20; // x0
  const MethodInfo *v21; // x4

  if ( (byte_4C3A486 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____78102088);
    sub_1C32C20(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__60_0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A486 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = this->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v8 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__60_0 = (System_Func_object__bool__o *)v8->static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__60_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__60_0,
      v11,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__60_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__60_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__60_0, (int32_t)_9__60_0, v13, v14);
  }
  baseBackground = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                                                                    (System_Func_TSource__bool__o *)_9__60_0,
                                                                    (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____78102088);
  if ( !baseBackground )
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)this->fields.baseBackground;
  if ( !baseBackground )
    goto LABEL_19;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)baseBackground[2].monitor;
  if ( !monitor )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                                                                      this,
                                                                      0);
    if ( v7 )
      goto LABEL_17;
LABEL_19:
    sub_1C32E7C(baseBackground);
  }
  if ( !v7 )
    goto LABEL_19;
  System_Collections_Generic_List_int___AddRange(
    v7,
    monitor,
    (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  QuestCommonIndividuality = (System_Collections_ICollection_o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                   this,
                                                                   v17);
  if ( !BasicHelper__IsNullOrEmpty(QuestCommonIndividuality, 0) )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                      this,
                                                                      v19);
LABEL_17:
    System_Collections_Generic_List_int___AddRange(
      v7,
      baseBackground,
      (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v20 = System_Collections_Generic_List_int___ToArray(
          v7,
          (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, v20, addIndiv, exceptDelTarget, v21);
}


System_Int32_array *BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x1
  BattleBuffData_o *BuffData; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_int__o **v10; // x22
  System_Collections_Generic_List_int__o *v11; // x20
  System_Predicate_int__o *v12; // x20

  if ( (byte_4C3A49C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C32C20(&System_Predicate_int__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__DisplayClass92_0__GetIndividualityExceptDelTarget_b__0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c__DisplayClass92_0_TypeInfo);
    byte_4C3A49C = 1;
  }
  v5 = sub_1C32E6C(BattleFieldEnvironmentData___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v6);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0, 0, 0, 1, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = BuffData;
  v10 = (System_Collections_Generic_List_int__o **)(v5 + 16);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)BuffData, v8, v9);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v11 = *v10;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0);
  if ( !v11 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_377B9A4 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v10 )
    goto LABEL_13;
  if ( (*v10)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_1C32E7C(BuffData);
  }
  v12 = (System_Predicate_int__o *)sub_1C32E6C(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass92_0__GetIndividualityExceptDelTarget_b__0__,
    0);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v12,
    (const MethodInfo_377CDC0 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_377D250 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *BattleFieldEnvironmentData__GetLinkBuffData(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattleData_o *Data_k__BackingField; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x8
  const MethodInfo *v10; // x1
  BattleServantData_o *ServantData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4C3A48A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____78102056);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__DisplayClass64_0__GetLinkBuffData_b__0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c__DisplayClass64_0_TypeInfo);
    byte_4C3A48A = 1;
  }
  v5 = sub_1C32E6C(BattleFieldEnvironmentData___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = uniqueVal;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)uniqueVal, v7, v8);
  v9 = *(_QWORD *)(v5 + 16);
  if ( !v9 )
    goto LABEL_12;
  v10 = (const MethodInfo *)*(unsigned int *)(v9 + 20);
  if ( ((unsigned int)v10 & 0x80000000) == 0 )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( Data_k__BackingField )
    {
      ServantData = BattleData__getServantData(Data_k__BackingField, (int32_t)v10, 0);
      if ( ServantData )
      {
        BuffData = BattleServantData__get_BuffData(ServantData, 0);
        if ( BuffData )
          goto LABEL_9;
      }
      return 0;
    }
LABEL_12:
    sub_1C32E7C(Data_k__BackingField);
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v10);
  if ( BuffData )
  {
LABEL_9:
    v13 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
    v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_BattleFieldEnvironmentData___c__DisplayClass64_0__GetLinkBuffData_b__0__,
      0);
    return (BattleBuffData_BuffData_o *)System_Linq_Enumerable__FirstOrDefault_object__51408536(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                          (System_Func_TSource__bool__o *)v14,
                                          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____78102056);
  }
  return 0;
}


System_Int32_array *BattleFieldEnvironmentData__GetLinkBuffIndividuality(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *LinkBuffData; // x0
  long double inited; // q0
  System_Int32_array *result; // x0
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  if ( (byte_4C3A48B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    byte_4C3A48B = 1;
  }
  LinkBuffData = BattleFieldEnvironmentData__GetLinkBuffData(this, uniqueVal, method);
  if ( !LinkBuffData || (result = BattleBuffData_BuffData__GetIndividualty(LinkBuffData, 0, 0, 0, 0)) == 0 )
  {
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_1C83390(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C83334(inited);
    return **(System_Int32_array ***)(v11 + 184);
  }
  return result;
}


System_Int32_array *BattleFieldEnvironmentData__GetQuestCommonIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *QuestPhaseIndividuality; // x20
  long double inited; // q0
  Il2CppObject *Value; // x21
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0
  System_Object_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Func_int__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4C3A488 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&Method_JsonManager_DeserializeArray_RangeValue___);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__DisplayClass62_0__GetQuestCommonIndividuality_b__0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo);
    sub_1C32C20(&StringLiteral_2928/*"BG_INDIVIDUALITY_VALUE_RANGE"*/);
    byte_4C3A488 = 1;
  }
  v3 = sub_1C32E6C(BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  QuestPhaseIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                                                                                   this,
                                                                                   v4);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestPhaseIndividuality, 0)
    || (Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_2928/*"BG_INDIVIDUALITY_VALUE_RANGE"*/, 0),
        System_String__IsNullOrEmpty((System_String_o *)Value, 0)) )
  {
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_1C83390(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C83334(inited);
    return **(System_Int32_array ***)(v11 + 184);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__DeserializeArray_object_(
            Value,
            (const MethodInfo_314C85C *)Method_JsonManager_DeserializeArray_RangeValue___);
    if ( !v3 )
      sub_1C32E7C(v13);
    *(_QWORD *)(v3 + 16) = v13;
    sub_1C32BC4((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v13, v14, v15);
    v16 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v16,
      (Il2CppObject *)v3,
      Method_BattleFieldEnvironmentData___c__DisplayClass62_0__GetQuestCommonIndividuality_b__0__,
      0);
    v17 = System_Linq_Enumerable__Where_int_(
            QuestPhaseIndividuality,
            (System_Func_TSource__bool__o *)v16,
            (const MethodInfo_3123600 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v17,
             (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


System_Int32_array *BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  System_Int32_array **p_questPhaseIndividuality; // x19
  BattleData_o *Data_k__BackingField; // x0
  System_Int32_array *PrioredIndividuality; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  long double inited; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  if ( (byte_4C3A487 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_int___);
    byte_4C3A487 = 1;
  }
  p_questPhaseIndividuality = &this->fields.questPhaseIndividuality;
  result = this->fields.questPhaseIndividuality;
  if ( !result )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1C32E7C(0);
    PrioredIndividuality = BattleData__GetPrioredIndividuality(Data_k__BackingField, 0);
    *p_questPhaseIndividuality = PrioredIndividuality;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.questPhaseIndividuality, (int32_t)PrioredIndividuality, v7, v8);
    result = *p_questPhaseIndividuality;
    if ( !*p_questPhaseIndividuality )
    {
      v10 = Method_System_Array_Empty_int___;
      v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v11 )
      {
        sub_1C83390(Method_System_Array_Empty_int___);
        v11 = v10[7];
      }
      v12 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C83334(inited);
      if ( !*(_DWORD *)(v12 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v12);
      v13 = *(_QWORD *)(v10[7] + 16LL);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C83334(inited);
      return **(System_Int32_array ***)(v13 + 184);
    }
  }
  return result;
}


FieldBuffDeleteProcess_o *BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        int32_t delAfterProcType,
        const MethodInfo *method)
{
  _QWORD *v4; // x8
  Il2CppObject *v5; // x19

  if ( (byte_4C3A49B & 1) == 0 )
  {
    sub_1C32C20(&ChangeBgmBuffDeleteProcess_TypeInfo);
    sub_1C32C20(&FieldChangeBuffDeleteProcess_TypeInfo);
    byte_4C3A49B = 1;
  }
  if ( delAfterProcType == 1 )
  {
    v4 = &FieldChangeBuffDeleteProcess_TypeInfo;
  }
  else
  {
    if ( delAfterProcType != 3 )
      return 0;
    v4 = &ChangeBgmBuffDeleteProcess_TypeInfo;
  }
  v5 = (Il2CppObject *)sub_1C32E6C(*v4);
  System_Object___ctor(v5, 0);
  return (FieldBuffDeleteProcess_o *)v5;
}


BattleFieldEnvironmentData_SaveData_o *BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  void *backgroundList; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Object_array *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_4C3A479 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__);
    sub_1C32C20(&BattleFieldEnvironmentData_SaveData_TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A479 = 1;
  }
  backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v5 = *(System_Action_object__o **)(*((_QWORD *)backgroundList + 23) + 8LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)backgroundList + 56) )
    {
      j_il2cpp_runtime_class_init_0(backgroundList);
      backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)backgroundList + 23);
    v5 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Action_object____ctor(v5, v6, Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)v5, v8, v9);
  }
  if ( !bgmList )
    goto LABEL_15;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v5,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v10 = sub_1C32E6C(BattleFieldEnvironmentData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_15;
  backgroundList = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)backgroundList,
                     (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = backgroundList,
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 16), (int32_t)backgroundList, v11, v12),
        (backgroundList = this->fields.bgmList) == 0)
    || (v13 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)backgroundList,
                (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v10 + 24) = v13,
        sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 24), (int32_t)v13, v14, v15),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v16)) == 0) )
  {
LABEL_15:
    sub_1C32E7C(backgroundList);
  }
  SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0);
  *(_QWORD *)(v10 + 32) = SaveData;
  sub_1C32BC4((CGThumbnailListItem_o *)(v10 + 32), (int32_t)SaveData, v18, v19);
  result = (BattleFieldEnvironmentData_SaveData_o *)v10;
  *(_DWORD *)(v10 + 40) = this->fields.addOrder;
  return result;
}


// attributes: thunk
void BattleFieldEnvironmentData__InitBG(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData__InitStageField(this, method);
}


void BattleFieldEnvironmentData__InitStageField(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  BattleData_o *Data_k__BackingField; // x20
  StageEntity_o *StageEntity; // x21
  Generator_BGFromQuestPhase_o *v5; // x22
  const MethodInfo *v6; // x3
  StageEntity_o *v7; // x20
  Generator_BGFromStage_o *v8; // x21
  const MethodInfo *v9; // x2
  BattleData_o *v10; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  Generator_BGM_o *v13; // x23
  const MethodInfo *v14; // x6
  BattleFieldEnvironmentData___c_c *v15; // x0
  System_Collections_Generic_IEnumerable_TSource__o *backgroundList; // x20
  System_Func_object__bool__o *_9__51_0; // x21
  Il2CppObject *v18; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleFieldEnvironmentData___c_c *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  System_Func_object__bool__o *_9__51_1; // x21
  Il2CppObject *v28; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  v2 = this;
  if ( (byte_4C3A47E & 1) == 0 )
  {
    sub_1C32C20(&Generator_BGFromQuestPhase_TypeInfo);
    sub_1C32C20(&Generator_BGFromStage_TypeInfo);
    sub_1C32C20(&Generator_BGM_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____78102080);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____78102088);
    sub_1C32C20(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_1C32C20(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__InitStageField_b__51_0__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__InitStageField_b__51_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A47E = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v2->fields._Data_k__BackingField, 0),
        v5 = (Generator_BGFromQuestPhase_o *)sub_1C32E6C(Generator_BGFromQuestPhase_TypeInfo),
        Generator_BGFromQuestPhase___ctor(v5, Data_k__BackingField, StageEntity, v6),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, const MethodInfo *))v2->klass->vtable._5_AddBackground.methodPtr)(
          v2,
          v5,
          1,
          v2->klass->vtable._5_AddBackground.method),
        (this = (BattleFieldEnvironmentData_o *)v2->fields._Data_k__BackingField) == 0)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0)) == 0 )
  {
    sub_1C32E7C(this);
  }
  v7 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0) >= 1 )
  {
    v8 = (Generator_BGFromStage_o *)sub_1C32E6C(Generator_BGFromStage_TypeInfo);
    Generator_BGFromStage___ctor(v8, v7, v9);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, const MethodInfo *))v2->klass->vtable._5_AddBackground.methodPtr)(
      v2,
      v8,
      1,
      v2->klass->vtable._5_AddBackground.method);
  }
  v10 = v2->fields._Data_k__BackingField;
  bgmId = v7->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v7, 0, 0);
  v13 = (Generator_BGM_o *)sub_1C32E6C(Generator_BGM_TypeInfo);
  Generator_BGM___ctor(v13, v10, bgmId, 0, PriorityBgm, 0, v14);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))v2->klass->vtable._6_AddBGM.methodPtr)(
    v2,
    v13,
    1,
    0,
    v2->klass->vtable._6_AddBGM.method);
  v15 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v15 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__51_0 = (System_Func_object__bool__o *)v15->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__51_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__51_0, v18, Method_BattleFieldEnvironmentData___c__InitStageField_b__51_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__51_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v20, v21);
  }
  v22 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          backgroundList,
          (System_Func_TSource__bool__o *)_9__51_0,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____78102088);
  v2->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v22;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.baseBackground, (int32_t)v22, v23, v24);
  v25 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v25 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__51_1 = (System_Func_object__bool__o *)v25->static_fields->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__51_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__51_1, v28, Method_BattleFieldEnvironmentData___c__InitStageField_b__51_1__, 0);
    v29 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v29->__9__51_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__51_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v29->__9__51_1, (int32_t)_9__51_1, v30, v31);
  }
  v32 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
          bgmList,
          (System_Func_TSource__bool__o *)_9__51_1,
          (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____78102080);
  v2->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v32;
  sub_1C32BC4((CGThumbnailListItem_o *)&v2->fields.baseBgm, (int32_t)v32, v33, v34);
}


bool BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C32E7C(this);
  if ( Data_k__BackingField->fields.wavecount >= 1 )
  {
    BattleFieldEnvironmentData__ResetFieldInfo(this, method);
    BattleFieldEnvironmentData__InitStageField(this, v4);
    BattleFieldEnvironmentData__TakeOverChangeField(this, v5);
    BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(this, v6);
  }
  return BattleFieldEnvironmentData__get_IsNeedChangeBG(this, method);
}


bool BattleFieldEnvironmentData__IsNeedChangeField(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_4C3A496 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C3A496 = 1;
  }
  Instance = (Il2CppObject *)BattleFieldEnvironmentData__get_IsNeedChangeBG(this, method);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    CurBGM_k__BackingField = this->fields._CurBGM_k__BackingField;
    if ( !CurBGM_k__BackingField )
      goto LABEL_10;
    BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
    if ( !BgmData_k__BackingField )
      return 0;
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_1C32E7C(Instance);
    BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0);
    if ( BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0) )
      return 0;
  }
  return 1;
}


BattleFieldEnvironmentData_BGMData_o *BattleFieldEnvironmentData__RemoveAfterResetBGM(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  int *v3; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleFieldEnvironmentData___c_c *v10; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v11; // x20
  System_Func_object__bool__o *_9__69_1; // x21
  Il2CppObject *v13; // x22
  CGThumbnailListItem_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *baseBgm; // x1
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  __int64 v24; // x8

  if ( (byte_4C3A48F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___);
    sub_1C32C20(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C32C20(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_0__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_1__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A48F = 1;
  }
  v3 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v3 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
  }
  v5 = *(System_Predicate_object__o **)(*((_QWORD *)v3 + 23) + 136LL);
  if ( !v5 )
  {
    if ( !v3[56] )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)v3 + 23);
    v5 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)v5;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__69_0, (int32_t)v5, v8, v9);
  }
  if ( !bgmList )
    goto LABEL_23;
  System_Collections_Generic_List_object___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)v5,
    (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v10 = BattleFieldEnvironmentData___c_TypeInfo;
  v11 = this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v10 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__69_1 = (System_Func_object__bool__o *)v10->static_fields->__9__69_1;
  if ( !_9__69_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__69_1 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__69_1,
      v13,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_1__,
      0);
    v14 = (CGThumbnailListItem_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v14[1].klass = (CGThumbnailListItem_c *)_9__69_1;
    sub_1C32BC4(v14 + 1, (int32_t)_9__69_1, v15, v16);
  }
  if ( System_Linq_Enumerable__Count_object__51376204(
         (System_Collections_Generic_IEnumerable_TSource__o *)v11,
         (System_Func_TSource__bool__o *)_9__69_1,
         (const MethodInfo_30FF04C *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v3 = (int *)this->fields.bgmList;
    if ( v3 )
    {
      baseBgm = (Il2CppObject *)this->fields.baseBgm;
      v21 = *((_QWORD *)v3 + 2);
      v22 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
      ++v3[7];
      if ( v21 )
      {
        v23 = v3[6];
        if ( (unsigned int)v23 >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v3,
            baseBgm,
            *(const MethodInfo_37987BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * v23;
          v3[6] = v23 + 1;
          *(_QWORD *)(v24 + 32) = baseBgm;
          sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 32), (int32_t)baseBgm, v18, v19);
        }
        goto LABEL_22;
      }
    }
LABEL_23:
    sub_1C32E7C(v3);
  }
LABEL_22:
  BattleFieldEnvironmentData__SortBGM(this, v17);
  return this->fields._CurBGM_k__BackingField;
}


bool BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C3A492 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__75_0__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C32C20(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    byte_4C3A492 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v4 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Predicate_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__75_0__,
    0);
  if ( !bgmList )
    sub_1C32E7C(v5);
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v4,
         (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) >= 1 )
    BattleFieldEnvironmentData__SortBGM(this, v6);
  return BattleFieldEnvironmentData__get_IsChangeBgm(this, v6);
}


void BattleFieldEnvironmentData__RemoveBgmRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v4; // x0
  System_Func_object__bool__o *_9__71_0; // x21
  Il2CppObject *v6; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_object__object__o *v11; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x20
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x20
  int i; // w24
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_object__o *bgmList; // x22
  System_Predicate_T__o *v33; // x23
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  const MethodInfo *v39; // x1

  if ( (byte_4C3A491 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C32C20(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__71_0__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__DisplayClass71_0__RemoveBgmRelateBuff_b__1__);
    sub_1C32C20(&BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A491 = 1;
  }
  v4 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v4 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__71_0 = (System_Func_object__bool__o *)v4->static_fields->__9__71_0;
  if ( !_9__71_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__71_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__71_0,
      v6,
      Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__71_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__71_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__71_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__71_0, (int32_t)_9__71_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__71_0,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v11 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
  System_Func_object__object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__,
    0);
  v12 = System_Linq_Enumerable__Select_object__object_(
          v10,
          (System_Func_TSource__TResult__o *)v11,
          (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
  if ( !v12 )
    sub_1C32E7C(0);
  klass = v12->klass;
  v14 = v12;
  v15 = *(unsigned __int16 *)&v12->klass->_2.rank;
  if ( *(_WORD *)&v12->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffUniqueValue__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_14;
    }
    v17 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v17 = sub_1C83438(v12, System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v17)(
          v14,
          *(_QWORD *)(v17 + 8));
  if ( !v18 )
    sub_1C32E7C(0);
  for ( i = 0;
        ;
        i += System_Collections_Generic_List_object___RemoveAll(
               bgmList,
               v33,
               (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) )
  {
    v20 = *(_QWORD *)v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_22;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_22:
      v23 = sub_1C83438(v18, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v18, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = sub_1C32E6C(BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v24, 0);
    v25 = *(_QWORD *)v18;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffUniqueValue__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_29;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_29:
      v28 = sub_1C83438(v18, System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v18, *(_QWORD *)(v28 + 8));
    if ( !v24 )
      sub_1C32E7C(v29);
    *(_QWORD *)(v24 + 16) = v29;
    sub_1C32BC4((CGThumbnailListItem_o *)(v24 + 16), v29, v30, v31);
    bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
    v33 = (System_Predicate_T__o *)sub_1C32E6C(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v33,
      (Il2CppObject *)v24,
      Method_BattleFieldEnvironmentData___c__DisplayClass71_0__RemoveBgmRelateBuff_b__1__,
      0);
    if ( !bgmList )
      sub_1C32E7C(v34);
  }
  v35 = *(_QWORD *)v18;
  v36 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_38;
    }
    v38 = v35 + 16LL * *v37 + 312;
  }
  else
  {
LABEL_38:
    v38 = sub_1C83438(v18, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v38)(v18, *(_QWORD *)(v38 + 8));
  if ( i > 0 )
    BattleFieldEnvironmentData__SortBGM(this, v39);
}


void BattleFieldEnvironmentData__RemoveBgmThenAddUpdateTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(this, method) )
    BattleFieldEnvironmentData__AddUpdateBgmTask(this, v3);
}


void BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleLogic_o *Logic_k__BackingField; // x0

  if ( BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(this, method) )
  {
    Logic_k__BackingField = this->fields._Logic_k__BackingField;
    if ( !Logic_k__BackingField )
      sub_1C32E7C(0);
    BattleLogic__PlayLoadCurrentBgm(Logic_k__BackingField, 0, 0.0, 0);
  }
}


void BattleFieldEnvironmentData__RemoveDeadServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *deadSvtData,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v3; // x19
  BattleBuffData_BuffData_array *AllBGMChangeBuffArray; // x1
  const MethodInfo *v5; // x3

  if ( !deadSvtData
    || (v3 = this, (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(deadSvtData, 0)) == 0) )
  {
    sub_1C32E7C(this);
  }
  AllBGMChangeBuffArray = BattleBuffData__GetAllBGMChangeBuffArray((BattleBuffData_o *)this, 0);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_45984452(v3, AllBGMChangeBuffArray, 1, v5);
}


void BattleFieldEnvironmentData__RemoveRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleFieldEnvironmentData_o *v6; // x0
  const MethodInfo *v7; // x2
  BuffUniqueValue_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *backgroundList; // x21
  System_Predicate_object__o *v12; // x22
  int32_t v13; // w0
  System_Collections_Generic_List_object__o *bgmList; // x22
  int32_t v15; // w21
  System_Predicate_object__o *v16; // x23
  const MethodInfo *v17; // x2

  if ( (byte_4C3A490 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C32C20(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1C32C20(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__0__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__1__);
    sub_1C32C20(&BattleFieldEnvironmentData___c__DisplayClass70_0_TypeInfo);
    byte_4C3A490 = 1;
  }
  v5 = sub_1C32E6C(BattleFieldEnvironmentData___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v8 = BattleFieldEnvironmentData__GetChangeBuffUniqueVal(v6, buff, v7);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v8;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v8, v9, v10);
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v12 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Predicate_object____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__0__,
    0);
  if ( !backgroundList
    || (v13 = System_Collections_Generic_List_object___RemoveAll(
                backgroundList,
                (System_Predicate_T__o *)v12,
                (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList,
        v15 = v13,
        v16 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo),
        System_Predicate_object____ctor(
          v16,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__1__,
          0),
        !bgmList) )
  {
LABEL_9:
    sub_1C32E7C(v8);
  }
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v16,
         (const MethodInfo_3799E18 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v15 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v17);
}


void BattleFieldEnvironmentData__ResetFieldInfo(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x8
  int32_t v7; // w2
  int v8; // w9

  v2 = this;
  if ( (byte_4C3A47F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__);
    byte_4C3A47F = 1;
  }
  backgroundList = v2->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_10;
  size = backgroundList->fields._size;
  v5 = backgroundList->fields._version + 1;
  backgroundList->fields._size = 0;
  backgroundList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)backgroundList->fields._items, 0, size, 0);
  bgmList = v2->fields.bgmList;
  if ( !bgmList )
LABEL_10:
    sub_1C32E7C(this);
  v7 = bgmList->fields._size;
  v8 = bgmList->fields._version + 1;
  bgmList->fields._size = 0;
  bgmList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)bgmList->fields._items, 0, v7, 0);
}


void BattleFieldEnvironmentData__SetSaveData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_SaveData_o *sv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *backgroundList; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v8; // x0
  System_Action_object__o *_9__8_0; // x22
  Il2CppObject *v10; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  int32_t v15; // w20
  int32_t v16; // w21
  bool ExistOverwriteBgIndividuality; // w22
  Generator_Background_o *v18; // x23
  const MethodInfo *v19; // x5
  struct BattleData_o *Data_k__BackingField; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v25; // w23
  Generator_BGM_o *v26; // x24
  const MethodInfo *v27; // x6

  if ( (byte_4C3A47A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Generator_BGM_TypeInfo);
    sub_1C32C20(&Generator_Background_TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A47A = 1;
  }
  if ( sv )
  {
    BattleFieldEnvironmentData__ResetFieldInfo(this, (const MethodInfo *)sv);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.backgroundData, 0) )
    {
      backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
      if ( !backgroundList )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.backgroundData,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v8 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
        v8 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      _9__8_0 = (System_Action_object__o *)v8->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v8->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v8);
          v8 = BattleFieldEnvironmentData___c_TypeInfo;
        }
        v10 = (Il2CppObject *)v8->static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
        System_Action_object____ctor(_9__8_0, v10, Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, 0);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v12, v13);
      }
      BasicHelper__ForEach_object_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_object__o *)BattleFieldEnvironmentData__get_BuffData(this, v6);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v14);
      return;
    }
LABEL_27:
    sub_1C32E7C(backgroundList);
  }
  backgroundList = (System_Collections_Generic_List_object__o *)BattleFieldEnvironmentData__get_IsNeedChangeBG(
                                                                  this,
                                                                  (const MethodInfo *)sv);
  if ( ((unsigned __int8)backgroundList & 1) != 0 )
  {
    backgroundList = (System_Collections_Generic_List_object__o *)this->fields._Perf_k__BackingField;
    if ( !backgroundList )
      goto LABEL_27;
    backgroundList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_CurrentGroundNo(
                                                                    (BattlePerformance_o *)backgroundList,
                                                                    0);
    if ( !this->fields._Perf_k__BackingField )
      goto LABEL_27;
    v15 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_CurrentGroundType(
                                                                    this->fields._Perf_k__BackingField,
                                                                    0);
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_27;
    v16 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(this->fields._Data_k__BackingField, 0);
    v18 = (Generator_Background_o *)sub_1C32E6C(Generator_Background_TypeInfo);
    Generator_Background___ctor(v18, v15, v16, 0, ExistOverwriteBgIndividuality, v19);
    backgroundList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
                                                                    this,
                                                                    v18,
                                                                    2,
                                                                    this->klass->vtable._5_AddBackground.method);
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    goto LABEL_27;
  overwriteBgmData_k__BackingField = Data_k__BackingField->fields._overwriteBgmData_k__BackingField;
  if ( overwriteBgmData_k__BackingField )
  {
    BgmId_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmId_k__BackingField;
    allowSubBgmPlaying = OverwriteBattleBgmData__get_allowSubBgmPlaying(
                           Data_k__BackingField->fields._overwriteBgmData_k__BackingField,
                           0);
    BgmName_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmName_k__BackingField;
    v25 = allowSubBgmPlaying;
    v26 = (Generator_BGM_o *)sub_1C32E6C(Generator_BGM_TypeInfo);
    Generator_BGM___ctor(v26, Data_k__BackingField, BgmId_k__BackingField, v25, 0, BgmName_k__BackingField, v27);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
      this,
      v26,
      2,
      0,
      this->klass->vtable._6_AddBGM.method);
  }
}


void BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v4; // x21
  BattleData_o *v5; // x0
  System_Collections_Generic_List_object__o *v6; // x20
  System_Comparison_T__o *v7; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_4C3A494 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData__SortBGM_b__78_0__);
    sub_1C32C20(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_4C3A494 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v4 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__78_0__, 0);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v4,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v6 = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v7 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v7, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !v6 )
    goto LABEL_9;
  System_Collections_Generic_List_object___Sort_58303104(
    v6,
    v7,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_3105AF4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_1C32BC4((CGThumbnailListItem_o *)p_CurBGM_k__BackingField, (int32_t)baseBgm, v9, v10);
  v5 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v5 )
LABEL_9:
    sub_1C32E7C(v5);
  BattleData__SetOverrideBgmData(v5, *p_CurBGM_k__BackingField, 0);
}


void BattleFieldEnvironmentData__SortBGM_45968884(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *targetBgmList,
        const MethodInfo *method)
{
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  System_Comparison_T__o *v7; // x21

  if ( (byte_4C3A495 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData__SortBGM_b__79_0__);
    sub_1C32C20(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_4C3A495 = 1;
  }
  v5 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__79_0__, 0);
  if ( !targetBgmList )
    sub_1C32E7C(v6);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    (System_Action_T__o *)v5,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v7 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v7, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  System_Collections_Generic_List_object___Sort_58303104(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    v7,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
}


void BattleFieldEnvironmentData__SortBackGround(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *backgroundList; // x20
  System_Comparison_T__o *v4; // x21
  __int64 v5; // x0
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3A493 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1C32C20(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
    byte_4C3A493 = 1;
  }
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v4 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Comparison_object____ctor(v4, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !backgroundList )
    sub_1C32E7C(v5);
  System_Collections_Generic_List_object___Sort_58303104(
    backgroundList,
    v4,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_3105AF4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._CurBackGround_k__BackingField, (int32_t)baseBackground, v7, v8);
}


// local variable allocation has failed, the output may be wrong!
void BattleFieldEnvironmentData__SortFieldData(
        BattleFieldEnvironmentData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  char v3; // w20
  const MethodInfo *v5; // x1

  v3 = type;
  if ( (type & 1) != 0 )
  {
    BattleFieldEnvironmentData__SortBackGround(this, *(const MethodInfo **)&type);
    BattleFieldEnvironmentData__SortBGM(this, v5);
  }
  if ( (v3 & 2) != 0 )
    BattleFieldEnvironmentData__SortBGM(this, *(const MethodInfo **)&type);
}


RemovedBuffInfo_o *BattleFieldEnvironmentData__SubBuffFromIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_o *v8; // x21
  int32_t Value; // w22
  int32_t Value2; // w24
  RemovedBuffInfo_o *v11; // x1
  const MethodInfo *v12; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)individuality);
  if ( !baseVals
    || (v8 = BuffData,
        Value = DataVals__GetValue(baseVals, 0),
        Value2 = DataVals__GetValue2(baseVals, 0),
        BuffData = (BattleBuffData_o *)DataVals__isParam(baseVals, 90, 0),
        !v8) )
  {
    sub_1C32E7C(BuffData);
  }
  v11 = BattleBuffData__subBuffFromIndividualites(v8, individuality, Value, Value2, 1, (unsigned __int8)BuffData & 1, 0);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v11, 1, v12);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
        BattleFieldEnvironmentData_o *this,
        int32_t deadActorId,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v6; // x1
  const MethodInfo *v7; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&deadActorId);
  if ( !BuffData )
    sub_1C32E7C(0);
  v6 = BattleBuffData__SubBuffFromDeadActorId(BuffData, deadActorId, 0, 0);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v6, 1, v7);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *BattleFieldEnvironmentData__SubBuffFromType(
        BattleFieldEnvironmentData_o *this,
        int32_t buffId,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v8; // x0
  const MethodInfo *v9; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&buffId);
  if ( !BuffData )
    sub_1C32E7C(0);
  v8 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v8, isAddAfterTask, v9);
}


void BattleFieldEnvironmentData__TakeOverChangeField(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_FieldChangeData_array *v4; // x0
  BattleFieldEnvironmentData___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__bool__o *_9__54_0; // x21
  Il2CppObject *v8; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v13; // x19
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x19
  __int64 v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  BattleBuffData_FieldChangeData_o *v27; // x21
  Generator_BGFromFieldChangeBGBuff_o *v28; // x22
  const MethodInfo *v29; // x2
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v31; // x22
  const MethodInfo *v32; // x3
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0

  if ( (byte_4C3A480 & 1) == 0 )
  {
    sub_1C32C20(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    sub_1C32C20(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
    sub_1C32C20(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__54_0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A480 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_45;
  v4 = BattleBuffData__GetFieldChangeArray(BuffData, 0);
  v5 = BattleFieldEnvironmentData___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)v4;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v5 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__54_0 = (System_Func_object__bool__o *)v5->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__54_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__54_0,
      v8,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__54_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__54_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v10, v11);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_object_(
                                   v6,
                                   (System_Func_TSource__bool__o *)_9__54_0,
                                   (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_45:
    sub_1C32E7C(BuffData);
  klass = BuffData->klass;
  v13 = BuffData;
  v14 = *(unsigned __int16 *)&BuffData->klass->_2.rank;
  if ( *(_WORD *)&BuffData->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_15;
    }
    v16 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_15:
    v16 = sub_1C83438(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v16)(v13, *(_QWORD *)(v16 + 8));
  if ( !v17 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v18 = *(_QWORD *)v17;
    v19 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v20 = (int *)(*(_QWORD *)(v18 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_22;
      }
      v21 = v18 + 16LL * *v20 + 312;
    }
    else
    {
LABEL_22:
      v21 = sub_1C83438(v17, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v21)(v17, *(_QWORD *)(v21 + 8)) & 1) == 0 )
      break;
    v22 = *(_QWORD *)v17;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_29;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_29:
      v25 = sub_1C83438(v17, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v17, *(_QWORD *)(v25 + 8));
    v27 = (BattleBuffData_FieldChangeData_o *)v26;
    if ( !v26 )
      sub_1C32E7C(0);
    if ( *(int *)(v26 + 24) >= 1 )
    {
      v28 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1C32E6C(Generator_BGFromFieldChangeBGBuff_TypeInfo);
      Generator_BGFromFieldChangeBGBuff___ctor(v28, v27, v29);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
        this,
        v28,
        2,
        this->klass->vtable._5_AddBackground.method);
    }
    if ( v27->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v27->fields.bgmName, 0) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v31 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1C32E6C(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
      Generator_BGMFromFieldChangeBGBuff___ctor(v31, Data_k__BackingField, v27, v32);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
        this,
        v31,
        2,
        0,
        this->klass->vtable._6_AddBGM.method);
    }
  }
  v33 = *(_QWORD *)v17;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_41;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_41:
    v36 = sub_1C83438(v17, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v17, *(_QWORD *)(v36 + 8));
}


void BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct BattleData_o *Data_k__BackingField; // x8
  BattleFieldEnvironmentData_o *v4; // x0
  const MethodInfo *v5; // x2
  struct BattleData_o *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *player_datalist; // x20
  BattleFieldEnvironmentData___c_c *v8; // x0
  System_Func_object__bool__o *_9__55_0; // x21
  Il2CppObject *v10; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_BattleServantData__o *v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v16; // x0
  System_Object_array *v17; // x1
  const MethodInfo *v18; // x2

  v2 = this;
  if ( (byte_4C3A481 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C32C20(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__55_0__);
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A481 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (this = (BattleFieldEnvironmentData_o *)Data_k__BackingField->fields.player_datalist) == 0
    || (v4 = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___ToArray(
                                               (System_Collections_Generic_List_object__o *)this,
                                               (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__),
        BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(v4, (BattleServantData_array *)v4, v5),
        (v6 = v2->fields._Data_k__BackingField) == 0) )
  {
    sub_1C32E7C(this);
  }
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.player_datalist;
  v8 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v8 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__55_0 = (System_Func_object__bool__o *)v8->static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__55_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__55_0,
      v10,
      Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__55_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Func_BattleServantData__bool__o *)_9__55_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__55_0, (int32_t)_9__55_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                         player_datalist,
                                                                         (System_Func_TSource__bool__o *)_9__55_0,
                                                                         (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v16 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(v14, v15);
  v17 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v17, v18);
}


void BattleFieldEnvironmentData__TurnProgressing(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_BuffData_array *v8; // x1
  const MethodInfo *v9; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)logic);
  if ( !BuffData )
    sub_1C32E7C(0);
  v8 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0, 0);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_45984452(this, v8, 1, v9);
}


void BattleFieldEnvironmentData__UpdateAllView(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf_k__BackingField; // x0
  struct BattlePerformance_o *v4; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (BattlePerformance__UpdateFieldView(Perf_k__BackingField, 0), (v4 = this->fields._Perf_k__BackingField) == 0)
    || (Perf_k__BackingField = (BattlePerformance_o *)v4->fields.logic) == 0
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Perf_k__BackingField, 0, 0),
        (Perf_k__BackingField = this->fields._Perf_k__BackingField) == 0) )
  {
    sub_1C32E7C(Perf_k__BackingField);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0);
}


void BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v4; // x0
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  BattleFieldEnvironmentData___c_c *v6; // x0
  System_Action_object__o *_9__56_0; // x20
  Il2CppObject *v8; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3A482 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C32C20(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__56_0__);
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A482 = 1;
  }
  v4 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
         (System_Collections_Generic_IEnumerable_BattleServantData__o *)servantArray,
         (const MethodInfo *)servantArray);
  if ( v4 )
  {
    v5 = (System_Collections_Generic_IEnumerable_T__o *)v4;
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__56_0 = (System_Action_object__o *)v6->static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__56_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__56_0,
        v8,
        Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__56_0__,
        0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__56_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v10, v11);
    }
    BasicHelper__ForEach_object_(
      v5,
      (System_Action_T__o *)_9__56_0,
      (const MethodInfo_30C93B0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
}


void BattleFieldEnvironmentData___AddServantChangeBgm_b__99_0(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v3; // x19
  Generator_BGM_o *v4; // x1

  if ( !buff || (v3 = this, (this = (BattleFieldEnvironmentData_o *)buff->fields.changeBgmData) == 0) )
    sub_1C32E7C(this);
  v4 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(
         (BattleBuffData_ChangeBgmData_o *)this,
         v3->fields._Data_k__BackingField,
         0);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))v3->klass->vtable._6_AddBGM.methodPtr)(
    v3,
    v4,
    2,
    0,
    v3->klass->vtable._6_AddBGM.method);
}


bool BattleFieldEnvironmentData___RemoveBgmNotExistsChangeBgmBuff_b__75_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleFieldEnvironmentData_BGMData__IsRemove(x, this->fields._Data_k__BackingField, method);
}


void BattleFieldEnvironmentData___SortBGM_b__78_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  ((void (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, BattleFieldEnvironmentData_o *, const MethodInfo *))x->klass->vtable._6_UpdateActive.methodPtr)(
    x,
    this,
    x->klass->vtable._6_UpdateActive.method);
}


void BattleFieldEnvironmentData___SortBGM_b__79_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  ((void (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, BattleFieldEnvironmentData_o *, const MethodInfo *))x->klass->vtable._6_UpdateActive.methodPtr)(
    x,
    this,
    x->klass->vtable._6_UpdateActive.method);
}


System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *BattleFieldEnvironmentData__get_BgmList(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields.bgmList;
}


BattleBuffData_o *BattleFieldEnvironmentData__get_BuffData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_fields; // x19
  BattleBuffData_o *v4; // x20
  struct BattleBuffData_o *buffData; // t1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3A47B & 1) == 0 )
  {
    sub_1C32C20(&BattleBuffData_TypeInfo);
    byte_4C3A47B = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  v4 = buffData;
  if ( !buffData )
  {
    v4 = (BattleBuffData_o *)sub_1C32E6C(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0);
    p_fields->klass = (CGThumbnailListItem_c *)v4;
    sub_1C32BC4(p_fields, (int32_t)v4, v6, v7);
  }
  return v4;
}


BattleFieldEnvironmentData_BGMData_o *BattleFieldEnvironmentData__get_CurBGM(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurBGM_k__BackingField;
}


System_String_o *BattleFieldEnvironmentData__get_CurBGMName(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  CurBGM_k__BackingField = this->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    sub_1C32E7C(this);
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
    return BgmData_k__BackingField->fields._BgmName_k__BackingField;
  else
    return 0;
}


BattleFieldEnvironmentData_BackgroundData_o *BattleFieldEnvironmentData__get_CurBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurBackGround_k__BackingField;
}


BattleData_o *BattleFieldEnvironmentData__get_Data(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool BattleFieldEnvironmentData__get_IsChangeBgm(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  v2 = this;
  if ( (byte_4C3A47C & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1C32C20(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4C3A47C = 1;
  }
  CurBGM_k__BackingField = v2->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    goto LABEL_8;
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
  {
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    this = (BattleFieldEnvironmentData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( this )
    {
      BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0);
      LOBYTE(BgmData_k__BackingField) = !BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0);
      return (unsigned __int8)BgmData_k__BackingField & 1;
    }
LABEL_8:
    sub_1C32E7C(this);
  }
  return (unsigned __int8)BgmData_k__BackingField & 1;
}


bool BattleFieldEnvironmentData__get_IsNeedChangeBG(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x0
  int comData; // w20
  const MethodInfo *v5; // x1
  BattlePerformance_o *Perf_k__BackingField; // x8
  int comData_high; // w19

  CurBackGround_k__BackingField = this->fields._CurBackGround_k__BackingField;
  if ( !CurBackGround_k__BackingField )
    goto LABEL_12;
  CurBackGround_k__BackingField = (BattleFieldEnvironmentData_BackgroundData_o *)BattleFieldEnvironmentData_BackgroundData__get_BgResource(
                                                                                   CurBackGround_k__BackingField,
                                                                                   method);
  if ( !CurBackGround_k__BackingField )
    goto LABEL_12;
  if ( !this->fields._Perf_k__BackingField )
    goto LABEL_12;
  comData = (int)CurBackGround_k__BackingField->fields.comData;
  CurBackGround_k__BackingField = (BattleFieldEnvironmentData_BackgroundData_o *)BattlePerformance__get_BgResource(
                                                                                   this->fields._Perf_k__BackingField,
                                                                                   0);
  if ( !CurBackGround_k__BackingField )
    goto LABEL_12;
  if ( comData == LODWORD(CurBackGround_k__BackingField->fields.comData) )
  {
    CurBackGround_k__BackingField = this->fields._CurBackGround_k__BackingField;
    if ( CurBackGround_k__BackingField )
    {
      CurBackGround_k__BackingField = (BattleFieldEnvironmentData_BackgroundData_o *)BattleFieldEnvironmentData_BackgroundData__get_BgResource(
                                                                                       CurBackGround_k__BackingField,
                                                                                       v5);
      if ( CurBackGround_k__BackingField )
      {
        Perf_k__BackingField = this->fields._Perf_k__BackingField;
        if ( Perf_k__BackingField )
        {
          comData_high = HIDWORD(CurBackGround_k__BackingField->fields.comData);
          CurBackGround_k__BackingField = (BattleFieldEnvironmentData_BackgroundData_o *)BattlePerformance__get_BgResource(
                                                                                           Perf_k__BackingField,
                                                                                           0);
          if ( CurBackGround_k__BackingField )
            return comData_high != HIDWORD(CurBackGround_k__BackingField->fields.comData);
        }
      }
    }
LABEL_12:
    sub_1C32E7C(CurBackGround_k__BackingField);
  }
  return 1;
}


BattleLogic_o *BattleFieldEnvironmentData__get_Logic(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  return this->fields._Logic_k__BackingField;
}


BattlePerformance_o *BattleFieldEnvironmentData__get_Perf(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


System_Int32_array *BattleFieldEnvironmentData__get_QuestCommonIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array **p_questCommonIndividualityCache; // x19
  struct System_Int32_array *questCommonIndividualityCache; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_questCommonIndividualityCache = &this->fields.questCommonIndividualityCache;
  questCommonIndividualityCache = this->fields.questCommonIndividualityCache;
  if ( !questCommonIndividualityCache )
  {
    questCommonIndividualityCache = BattleFieldEnvironmentData__GetQuestCommonIndividuality(this, method);
    this->fields.questCommonIndividualityCache = questCommonIndividualityCache;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)p_questCommonIndividualityCache,
      (int32_t)questCommonIndividualityCache,
      v5,
      v6);
  }
  return questCommonIndividualityCache;
}


void BattleFieldEnvironmentData__set_CurBGM(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CurBGM_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._CurBGM_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleFieldEnvironmentData__set_CurBackGround(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._CurBackGround_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._CurBackGround_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleFieldEnvironmentData__set_Data(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Data_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Data_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleFieldEnvironmentData__set_Logic(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Logic_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Logic_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleFieldEnvironmentData__set_Perf(
        BattleFieldEnvironmentData_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Perf_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._Perf_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleFieldEnvironmentData_BGMData___ctor(BattleFieldEnvironmentData_BGMData_o *this, const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData_BGMData___ctor_45965016(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BgmData_k__BackingField = bgmData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BgmData_k__BackingField, (int32_t)bgmData, v5, v6);
}


System_Int32_array *BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_cachedBuffIndividuality; // x19
  System_Int32_array *cachedBuffIndividuality; // x21
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  p_cachedBuffIndividuality = (CGThumbnailListItem_o *)&this->fields.cachedBuffIndividuality;
  cachedBuffIndividuality = this->fields.cachedBuffIndividuality;
  if ( !cachedBuffIndividuality )
  {
    comData = this->fields.comData;
    if ( !comData
      || (comData = (BattleFieldEnvironmentData_CommonData_o *)BattleFieldEnvironmentData_CommonData__get_UniqueVal(
                                                                 comData,
                                                                 (const MethodInfo *)fieldEnv),
          !fieldEnv) )
    {
      sub_1C32E7C(comData);
    }
    cachedBuffIndividuality = BattleFieldEnvironmentData__GetLinkBuffIndividuality(
                                fieldEnv,
                                (BuffUniqueValue_o *)comData,
                                v7);
    p_cachedBuffIndividuality->klass = (CGThumbnailListItem_c *)cachedBuffIndividuality;
    sub_1C32BC4(p_cachedBuffIndividuality, (int32_t)cachedBuffIndividuality, v8, v9);
  }
  return cachedBuffIndividuality;
}


bool BattleFieldEnvironmentData_BGMData__IsRemove(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  const MethodInfo *v6; // x1
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x8
  int32_t v11; // w1
  BattleServantData_o *ServantData; // x0
  System_Object_array *AllBGMChangeBuffArray; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4C3A4A4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_BattleBuffData_BuffData____78062600);
    sub_1C32C20(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__);
    sub_1C32C20(&BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo);
    byte_4C3A4A4 = 1;
  }
  v5 = sub_1C32E6C(BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_14;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleFieldEnvironmentData_CommonData__get_UniqueVal(comData, v6);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = comData;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)comData, v8, v9);
  v10 = *(_QWORD *)(v5 + 16);
  if ( !v10 )
    goto LABEL_14;
  v11 = *(_DWORD *)(v10 + 20);
  if ( v11 < 0 )
    return 0;
  if ( !data )
    goto LABEL_14;
  ServantData = BattleData__getServantData(data, v11, 0);
  if ( !ServantData )
    return 1;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleServantData__get_BuffData(ServantData, 0);
  if ( !comData )
LABEL_14:
    sub_1C32E7C(comData);
  AllBGMChangeBuffArray = (System_Object_array *)BattleBuffData__GetAllBGMChangeBuffArray(
                                                   (BattleBuffData_o *)comData,
                                                   0);
  v14 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__,
    0);
  return !BasicHelper__Any_object__51144764(
            AllBGMChangeBuffArray,
            (System_Func_T__bool__o *)v14,
            (const MethodInfo_30C683C *)Method_BasicHelper_Any_BattleBuffData_BuffData____78062600);
}


void BattleFieldEnvironmentData_BGMData__PreGetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  v3 = OverwriteBattleBgmData__ConvertToSaveData(this->fields._BgmData_k__BackingField, 0);
  this->fields.bgmSaveData = v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.bgmSaveData, (int32_t)v3, v4, v5);
}


void BattleFieldEnvironmentData_BGMData__PreSetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(this->fields.bgmSaveData, 0);
  this->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BgmData_k__BackingField, (int32_t)InstanceFromSaveData, v4, v5);
}


void BattleFieldEnvironmentData_BGMData__UpdateActive(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x20
  BattleFieldEnvironmentData_BGMData_o *v4; // x19
  struct BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x8
  BuffUniqueValue_o *UniqueVal; // x0
  const MethodInfo *v7; // x2
  bool enableBgm; // w8

  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_10;
  v4 = this;
  if ( comData->fields.linkBuffUid < 0 )
    goto LABEL_7;
  if ( !fieldEnv
    || (CurBackGround_k__BackingField = fieldEnv->fields._CurBackGround_k__BackingField) == 0
    || (this = (BattleFieldEnvironmentData_BGMData_o *)CurBackGround_k__BackingField->fields.comData) == 0 )
  {
LABEL_10:
    sub_1C32E7C(this);
  }
  UniqueVal = BattleFieldEnvironmentData_CommonData__get_UniqueVal(
                (BattleFieldEnvironmentData_CommonData_o *)this,
                (const MethodInfo *)fieldEnv);
  if ( !BattleFieldEnvironmentData_CommonData__IsMatch(comData, UniqueVal, v7) )
  {
    enableBgm = v4->fields.enableBgm;
    goto LABEL_9;
  }
LABEL_7:
  enableBgm = 1;
LABEL_9:
  v4->fields.isActive = enableBgm;
}


OverwriteBattleBgmData_o *BattleFieldEnvironmentData_BGMData__get_BgmData(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  return this->fields._BgmData_k__BackingField;
}


void BattleFieldEnvironmentData_BGMData__set_BgmData(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BgmData_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._BgmData_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0___ctor(
        BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0___IsRemove_b__0(
        BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !x
    || (changeBgmData = x->fields.changeBgmData) == 0
    || (this = (BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_o *)this->fields.val) == 0 )
  {
    sub_1C32E7C(this);
  }
  return BuffUniqueValue__IsMatch((BuffUniqueValue_o *)this, changeBgmData->fields.uniqueVal, 0);
}


void BattleFieldEnvironmentData_BackgroundData___ctor(
        BattleFieldEnvironmentData_BackgroundData_o *this,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


BgResourceData_o *BattleFieldEnvironmentData_BackgroundData__get_BgResource(
        BattleFieldEnvironmentData_BackgroundData_o *this,
        const MethodInfo *method)
{
  BgResourceData_o *cachedBgResource; // x21
  int32_t v4; // w22
  int32_t id; // w23
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3A4A3 & 1) == 0 )
  {
    sub_1C32C20(&BgResourceData_TypeInfo);
    byte_4C3A4A3 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    v4 = *((_DWORD *)&this->fields.isActive + 1);
    id = this->fields.id;
    cachedBgResource = (BgResourceData_o *)sub_1C32E6C(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, v4, id, 0);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cachedBgResource, (int32_t)cachedBgResource, v6, v7);
  }
  return cachedBgResource;
}


void BattleFieldEnvironmentData_BaseData___ctor(BattleFieldEnvironmentData_BaseData_o *this, const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData_BaseData__UpdateActive(
        BattleFieldEnvironmentData_BaseData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  ;
}


int32_t BattleFieldEnvironmentData_BaseData__get_Active(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  return this->fields.isActive;
}


int32_t BattleFieldEnvironmentData_BaseData__get_GrantType(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_1C32E7C(this);
  return comData->fields.grantType;
}


bool BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_1C32E7C(this);
  return comData->fields.linkBuffUid == -1;
}


void BattleFieldEnvironmentData_CommonData___ctor(
        BattleFieldEnvironmentData_CommonData_o *this,
        const MethodInfo *method)
{
  this->fields.linkBuffUid = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData_CommonData__IsMatch(
        BattleFieldEnvironmentData_CommonData_o *this,
        BuffUniqueValue_o *val,
        const MethodInfo *method)
{
  BuffUniqueValue_o *UniqueVal; // x0

  if ( !val )
    return 0;
  UniqueVal = BattleFieldEnvironmentData_CommonData__get_UniqueVal(this, (const MethodInfo *)val);
  if ( !UniqueVal )
    sub_1C32E7C(0);
  return BuffUniqueValue__IsMatch(UniqueVal, val, 0);
}


void BattleFieldEnvironmentData_CommonData__PreAddSetInfo(
        BattleFieldEnvironmentData_CommonData_o *this,
        int32_t addOrder,
        int32_t grantType,
        const MethodInfo *method)
{
  this->fields.addOrder = addOrder;
  this->fields.grantType = grantType;
}


BuffUniqueValue_o *BattleFieldEnvironmentData_CommonData__get_UniqueVal(
        BattleFieldEnvironmentData_CommonData_o *this,
        const MethodInfo *method)
{
  BuffUniqueValue_o *cachedUniqueVal; // x21
  int32_t linkBuffUid; // w22
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3A4A2 & 1) == 0 )
  {
    sub_1C32C20(&BuffUniqueValue_TypeInfo);
    byte_4C3A4A2 = 1;
  }
  cachedUniqueVal = this->fields.cachedUniqueVal;
  if ( !cachedUniqueVal )
  {
    linkBuffUid = this->fields.linkBuffUid;
    cachedUniqueVal = (BuffUniqueValue_o *)sub_1C32E6C(BuffUniqueValue_TypeInfo);
    BuffUniqueValue___ctor_45707852(cachedUniqueVal, linkBuffUid, -1, 0);
    this->fields.cachedUniqueVal = cachedUniqueVal;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.cachedUniqueVal, (int32_t)cachedUniqueVal, v5, v6);
  }
  return cachedUniqueVal;
}


void BattleFieldEnvironmentData_SaveData___ctor(BattleFieldEnvironmentData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3A4A5 & 1) == 0 )
  {
    sub_1C32C20(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4C3A4A5 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleFieldEnvironmentData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleFieldEnvironmentData___c_TypeInfo->static_fields->__9 = (struct BattleFieldEnvironmentData___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleFieldEnvironmentData___c___ctor(BattleFieldEnvironmentData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c___AddBGM_b__67_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


bool BattleFieldEnvironmentData___c___AddBGM_b__67_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


bool BattleFieldEnvironmentData___c___AddBackground_b__66_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BackgroundData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


int32_t BattleFieldEnvironmentData___c___AddBgmFromChangeBgmBuffArray_b__59_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !buff || (changeBgmData = buff->fields.changeBgmData) == 0 )
    sub_1C32E7C(this);
  return changeBgmData->fields.addBgmOrder;
}


bool BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__58_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1C32E7C(this);
  return !BattleServantData__isAlive(svt, 0, 0);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__58_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_1C32E7C(this);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData___c___EnumerateValidBgmChangeBuff_b__57_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_1C32E7C(this);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0);
}


bool BattleFieldEnvironmentData___c___ExecRemoveBuffAfterProc_b__87_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleBuffData_BuffData__get_ExistDelProc(x, 0);
}


bool BattleFieldEnvironmentData___c___GetBaseBgmList_b__68_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


bool BattleFieldEnvironmentData___c___GetFieldIndividuality_b__60_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BackgroundData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


void BattleFieldEnvironmentData___c___GetSaveData_b__7_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !x )
    sub_1C32E7C(this);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0);
  x->fields.bgmSaveData = v4;
  sub_1C32BC4((CGThumbnailListItem_o *)&x->fields.bgmSaveData, (int32_t)v4, v5, v6);
}


bool BattleFieldEnvironmentData___c___InitStageField_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_1C32E7C(this);
  return comData->fields.grantType == 1;
}


bool BattleFieldEnvironmentData___c___InitStageField_b__51_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_1C32E7C(this);
  return comData->fields.grantType == 1;
}


bool BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__69_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1C32E7C(this);
  return bgm->fields.isAfterReset;
}


bool BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__69_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1C32E7C(this);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))bgm->klass->vtable._5_get_IsTargetBase.methodPtr)(
           bgm,
           bgm->klass->vtable._5_get_IsTargetBase.method);
}


bool BattleFieldEnvironmentData___c___RemoveBgmRelateBuff_b__71_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0);
}


void BattleFieldEnvironmentData___c___SetSaveData_b__8_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( !x )
    sub_1C32E7C(this);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1C32BC4((CGThumbnailListItem_o *)&x->fields._BgmData_k__BackingField, (int32_t)InstanceFromSaveData, v5, v6);
}


bool BattleFieldEnvironmentData___c___TakeOverChangeField_b__54_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_FieldChangeData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.isTakeOverNextWave;
}


bool BattleFieldEnvironmentData___c___TakeOverPlayerServantChangeBgm_b__55_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return BattleServantData__isAlive(x, 0, 0);
}


void BattleFieldEnvironmentData___c___UpdateBgmBuffPriorityOnInitWave_b__56_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleFieldEnvironmentData___c_o *)x->fields.changeBgmData) == 0 )
    sub_1C32E7C(this);
  BattleBuffData_ChangeBgmData__UpdatePriorityForWaveStart((BattleBuffData_ChangeBgmData_o *)this, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass62_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass62_0___GetQuestCommonIndividuality_b__0(
        BattleFieldEnvironmentData___c__DisplayClass62_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_Object_array *bgRangeArray; // x19
  System_Func_object__bool__o *v8; // x20

  if ( (byte_4C3A4A6 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_RangeValue___);
    sub_1C32C20(&System_Func_RangeValue__bool__TypeInfo);
    sub_1C32C20(&Method_BattleFieldEnvironmentData___c__DisplayClass62_1__GetQuestCommonIndividuality_b__1__);
    sub_1C32C20(&BattleFieldEnvironmentData___c__DisplayClass62_1_TypeInfo);
    byte_4C3A4A6 = 1;
  }
  v5 = sub_1C32E6C(BattleFieldEnvironmentData___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C32E7C(v6);
  *(_DWORD *)(v5 + 16) = x;
  bgRangeArray = (System_Object_array *)this->fields.bgRangeArray;
  v8 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_RangeValue__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass62_1__GetQuestCommonIndividuality_b__1__,
    0);
  return !BasicHelper__Any_object__51144764(
            bgRangeArray,
            (System_Func_T__bool__o *)v8,
            (const MethodInfo_30C683C *)Method_BasicHelper_Any_RangeValue___);
}


void BattleFieldEnvironmentData___c__DisplayClass62_1___ctor(
        BattleFieldEnvironmentData___c__DisplayClass62_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass62_1___GetQuestCommonIndividuality_b__1(
        BattleFieldEnvironmentData___c__DisplayClass62_1_o *this,
        RangeValue_o *range,
        const MethodInfo *method)
{
  if ( !range )
    sub_1C32E7C(this);
  return RangeValue__IsInRange(range, this->fields.x, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass64_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass64_0___GetLinkBuffData_b__0(
        BattleFieldEnvironmentData___c__DisplayClass64_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BuffUniqueValue_o *uniqueVal; // x8

  if ( !buff || (uniqueVal = this->fields.uniqueVal) == 0 )
    sub_1C32E7C(this);
  return buff->fields.addOrder == uniqueVal->fields.buffUniqueId;
}


void BattleFieldEnvironmentData___c__DisplayClass70_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass70_0___RemoveRelateBuff_b__0(
        BattleFieldEnvironmentData___c__DisplayClass70_0_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_1C32E7C(this);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


bool BattleFieldEnvironmentData___c__DisplayClass70_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass70_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_1C32E7C(this);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


void BattleFieldEnvironmentData___c__DisplayClass71_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass71_0___RemoveBgmRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass71_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_1C32E7C(this);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


void BattleFieldEnvironmentData___c__DisplayClass87_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass87_0___ExecRemoveBuffAfterProc_b__1(
        BattleFieldEnvironmentData___c__DisplayClass87_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_45985056(
    this->fields.__4__this,
    x,
    this->fields.isAddAfterTask,
    v3);
}


void BattleFieldEnvironmentData___c__DisplayClass92_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass92_0___GetIndividualityExceptDelTarget_b__0(
        BattleFieldEnvironmentData___c__DisplayClass92_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *subList; // x0

  if ( (byte_4C3A4A7 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C3A4A7 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_1C32E7C(0);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
}