void __fastcall BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_HashSet_T__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattlePerformance_o *perf; // x1
  struct BattleLogic_o *logic; // x1
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_4A5D739 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
    byte_4A5D739 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.backgroundList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bgmList, (int32_t)v8, v9, v10);
  this->fields.addOrder = 1;
  v11 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.addTaskList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v14,
    (const MethodInfo_33B4D00 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.hashDelType, (int32_t)v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Data_k__BackingField = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Data_k__BackingField, (int32_t)data, v17, v18);
  if ( !data )
    sub_1B8880C(v19, v20);
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Perf_k__BackingField, (int32_t)perf, v21, v22);
  logic = data->fields.logic;
  this->fields._Logic_k__BackingField = logic;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Logic_k__BackingField, (int32_t)logic, v25, v26);
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__AddBGM(
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
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  BattleFieldEnvironmentData___c_c *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x21
  BattleFieldEnvironmentData_o *v28; // x20
  System_Predicate_object__o *_9__67_1; // x22
  Il2CppObject *v30; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Comparison_T__o *v34; // x21
  System_Collections_Generic_List_object__o *v35; // x21
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  BattleFieldEnvironmentData_o *v41; // x1
  Il2CppClass **v42; // x0

  v8 = this;
  if ( (byte_4A5D749 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1B885B0(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1B885B0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    sub_1B885B0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__AddBGM_b__67_0__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__AddBGM_b__67_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D749 = 1;
  }
  addOrder = (unsigned int)v8->fields.addOrder;
  v8->fields.addOrder = addOrder + 1;
  if ( !bgmGenerator )
    goto LABEL_33;
  v12 = (BattleFieldEnvironmentData_BGMData_o *)((__int64 (__fastcall *)(Generator_BGM_o *, __int64, _QWORD, void *, const MethodInfo *))bgmGenerator->klass->vtable._4_Make.method)(
                                                  bgmGenerator,
                                                  addOrder,
                                                  (unsigned int)grantType,
                                                  bgmGenerator->klass[1]._1.image,
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
  if ( (unsigned int)Data_k__BackingField_low >= LODWORD(buffData->fields.passiveList) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v12,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v16[4] = (BattleBuffData_c *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v12, v10, (int32_t)v11);
  }
  if ( !v12 )
    goto LABEL_33;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))v12->klass->vtable._5_get_IsTargetBase.method)(
          v12,
          v12->klass->vtable._6_UpdateActive.methodPtr) & 1) == 0 )
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
    _9__67_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__67_0, v21, Method_BattleFieldEnvironmentData___c__AddBGM_b__67_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__67_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_0, (int32_t)_9__67_0, v23, v24);
  }
  v25 = System_Linq_Enumerable__Where_object_(
          bgmList,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  this = (BattleFieldEnvironmentData_o *)System_Linq_Enumerable__ToList_object_(
                                           v25,
                                           (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
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
    _9__67_1 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(_9__67_1, v30, Method_BattleFieldEnvironmentData___c__AddBGM_b__67_1__, 0LL);
    v31 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v31->__9__67_1 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__67_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v31->__9__67_1, (int32_t)_9__67_1, v32, v33);
  }
  if ( !v27 )
    goto LABEL_33;
  System_Collections_Generic_List_object___RemoveAll(
    v27,
    (System_Predicate_T__o *)_9__67_1,
    (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v34 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v34, (Il2CppObject *)v8, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !v28
    || (System_Collections_Generic_List_object___Sort_55571192(
          (System_Collections_Generic_List_object__o *)v28,
          v34,
          (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__),
        v35 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList,
        this = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)v28,
                                                 0,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__),
        !v35)
    || (items = v35->fields._items,
        v39 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__,
        ++v35->fields._version,
        !items) )
  {
LABEL_33:
    sub_1B8880C(this, addOrder);
  }
  size = v35->fields._size;
  v41 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v35,
      (Il2CppObject *)this,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &items->obj.klass + size;
    v35->fields._size = size + 1;
    v42[4] = (Il2CppClass *)v41;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)v41, v36, v37);
  }
LABEL_32:
  BattleFieldEnvironmentData__SortBGM(v8, v17);
  return v8->fields._CurBGM_k__BackingField;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__AddBackground(
        BattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
  __int64 addOrder; // x1
  Il2CppObject *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *backgroundList; // x21
  System_Predicate_object__o *v12; // x22
  Il2CppObject *klass; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v18; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v20; // x8
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1

  v6 = this;
  if ( (byte_4A5D748 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_1B885B0(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__AddBackground_b__66_0__);
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D748 = 1;
  }
  addOrder = (unsigned int)v6->fields.addOrder;
  v6->fields.addOrder = addOrder + 1;
  if ( !bgGenerator )
    goto LABEL_20;
  this = (BattleFieldEnvironmentData_o *)((__int64 (__fastcall *)(Generator_Background_o *, __int64, _QWORD, void *))bgGenerator->klass->vtable._4_Make.method)(
                                           bgGenerator,
                                           addOrder,
                                           (unsigned int)grantType,
                                           bgGenerator->klass[1]._1.image);
  if ( !this )
    goto LABEL_20;
  v8 = (Il2CppObject *)this;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
          this,
          this->klass->vtable._6_AddBGM.methodPtr) & 1) != 0 )
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
      v12 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
      System_Predicate_object____ctor(v12, klass, Method_BattleFieldEnvironmentData___c__AddBackground_b__66_0__, 0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__66_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v12;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__66_0, (int32_t)v12, v15, v16);
    }
    if ( backgroundList )
    {
      System_Collections_Generic_List_object___RemoveAll(
        backgroundList,
        (System_Predicate_T__o *)v12,
        (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
      goto LABEL_14;
    }
LABEL_20:
    sub_1B8880C(this, addOrder);
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
  if ( (unsigned int)Data_k__BackingField_low >= LODWORD(buffData->fields.passiveList) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v20[4] = (BattleBuffData_c *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v8, v9, v10);
  }
  BattleFieldEnvironmentData__SortBackGround(v6, v21);
  BattleFieldEnvironmentData__SortBGM(v6, v22);
  return v6->fields._CurBackGround_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
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
  int32_t v11; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v12; // x0
  __int64 v13; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x20
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  BattleBuffData_ChangeBgmData_o *v31; // x0
  Generator_BGM_o *v32; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0

  if ( (byte_4A5D741 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__59_0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D741 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)changeBgmBuffArray, 0LL);
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
      _9__59_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__59_0,
        v8,
        Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__59_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__59_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__59_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__59_0, (int32_t)_9__59_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)changeBgmBuffArray,
            (System_Func_TSource__TKey__o *)_9__59_0,
            (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    if ( !v12 )
      sub_1B8880C(0LL, v13);
    klass = v12->klass;
    v15 = v12;
    v16 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1BDA590(v12, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
            v15,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_1B8880C(0LL, v19);
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_22;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_22:
        v24 = sub_1BDA590(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v25 = *(_QWORD *)v20;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
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
        v28 = sub_1BDA590(v20, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
      if ( !v29 )
        sub_1B8880C(0LL, v30);
      v31 = *(BattleBuffData_ChangeBgmData_o **)(v29 + 376);
      if ( !v31 )
        sub_1B8880C(0LL, v30);
      v32 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(v31, this->fields._Data_k__BackingField, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v32,
        2LL,
        0LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
    v33 = *(_QWORD *)v20;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_38;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_38:
      v36 = sub_1BDA590(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v36)(v20, *(_QWORD *)(v36 + 8));
  }
  return !IsNullOrEmpty;
}


void __fastcall BattleFieldEnvironmentData__AddFieldBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool unFixBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buff);
  if ( !BuffData )
    sub_1B8880C(0LL, v7);
  BattleBuffData__addBuff(BuffData, buff, 1, unFixBuff, 0LL);
}


void __fastcall BattleFieldEnvironmentData__AddLastInterruptTasks(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *addTaskList; // x0
  struct System_Collections_Generic_List_BattleLogicTask__o *v7; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_4A5D753 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D753 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)logic, 0LL, 0LL) )
  {
    addTaskList = (System_Collections_Generic_List_object__o *)this->fields.addTaskList;
    if ( !addTaskList )
      goto LABEL_15;
    if ( addTaskList->fields._size >= 1 )
    {
      addTaskList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                   addTaskList,
                                                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0LL);
        v7 = this->fields.addTaskList;
        if ( v7 )
        {
          size = v7->fields._size;
          v9 = v7->fields._version + 1;
          v7->fields._size = 0;
          v7->fields._version = v9;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
          addTaskList = (System_Collections_Generic_List_object__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_Int32Enum___Clear(
              (System_Collections_Generic_HashSet_T__o *)addTaskList,
              (const MethodInfo_33B5394 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_15:
      sub_1B8880C(addTaskList, v5);
    }
  }
}


void __fastcall BattleFieldEnvironmentData__AddPlayerServantChangeBgmWhenContinue(
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
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  BattleFieldEnvironmentData___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x20
  System_Func_object__object__o *_9__58_1; // x21
  Il2CppObject *v15; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x1
  const MethodInfo *v21; // x2

  v2 = this;
  if ( (byte_4A5D740 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_0__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D740 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B8880C(this, method);
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
    _9__58_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__58_0,
      v7,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_BattleServantData__bool__o *)_9__58_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v9, v10);
  }
  v11 = System_Linq_Enumerable__Where_object_(
          player_datalist,
          (System_Func_TSource__bool__o *)_9__58_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
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
    _9__58_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_object__object____ctor(
      _9__58_1,
      v15,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_1__,
      0LL);
    v16 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v16->__9__58_1 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__58_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v16->__9__58_1, (int32_t)_9__58_1, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v13,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__58_1,
                                                               (const MethodInfo_2EB2990 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
  v20 = System_Linq_Enumerable__ToArray_object_(
          v19,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v20, v21);
}


void __fastcall BattleFieldEnvironmentData__AddRemoveProcTask(
        BattleFieldEnvironmentData_o *this,
        BattleLogicTask_o *task,
        int32_t addType,
        bool isNotDuplicated,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hashDelType; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array *buckets; // x8
  _QWORD *v13; // x9
  __int64 slots_low; // x10
  __int64 v15; // x8

  if ( (byte_4A5D754 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4A5D754 = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_12;
    if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
           hashDelType,
           addType,
           (const MethodInfo_33B53F4 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_Int32Enum___Add(
          hashDelType,
          addType,
          (const MethodInfo_33B5F04 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.addTaskList) == 0LL)
    || (buckets = hashDelType->fields._buckets,
        v13 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++HIDWORD(hashDelType->fields._slots),
        !buckets) )
  {
LABEL_12:
    sub_1B8880C(hashDelType, task);
  }
  slots_low = SLODWORD(hashDelType->fields._slots);
  if ( (unsigned int)slots_low >= buckets->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)hashDelType,
      (Il2CppObject *)task,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = (__int64)buckets + 8 * slots_low;
    LODWORD(hashDelType->fields._slots) = slots_low + 1;
    *(_QWORD *)(v15 + 32) = task;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)task, v10, v11);
  }
}


void __fastcall BattleFieldEnvironmentData__AddServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Collections_Generic_IEnumerable_T__o *AllValidBGMChangeBuffArray; // x20
  System_Action_object__o *v6; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4A5D759 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__99_0__);
    byte_4A5D759 = 1;
  }
  if ( !svtData || (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(svtData, 0LL)) == 0LL )
    sub_1B8880C(this, svtData);
  AllValidBGMChangeBuffArray = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0LL);
  v6 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(v6, v4, Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__99_0__, 0LL);
  BasicHelper__ForEach_object_(
    AllValidBGMChangeBuffArray,
    (System_Action_T__o *)v6,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateBgmTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  PlayCurrentBgmLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4A5D75B & 1) == 0 )
  {
    sub_1B885B0(&PlayCurrentBgmLogicTask_TypeInfo);
    byte_4A5D75B = 1;
  }
  v3 = (PlayCurrentBgmLogicTask_o *)sub_1B887FC(PlayCurrentBgmLogicTask_TypeInfo);
  PlayCurrentBgmLogicTask___ctor(v3, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 3, 1, v4);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateViewTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  UpdateFieldViewBattleLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4A5D75A & 1) == 0 )
  {
    sub_1B885B0(&UpdateFieldViewBattleLogicTask_TypeInfo);
    byte_4A5D75A = 1;
  }
  v3 = (UpdateFieldViewBattleLogicTask_o *)sub_1B887FC(UpdateFieldViewBattleLogicTask_TypeInfo);
  UpdateFieldViewBattleLogicTask___ctor(v3, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 2, 1, v4);
}


bool __fastcall BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_42960956; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  __int64 v9; // x1
  System_Int32_array *BuffIndividualities; // x0

  Individualities_42960956 = buffIndiv;
  if ( opSvt )
    Individualities_42960956 = BattleServantData__getIndividualities_42960956(opSvt, buffIndiv, 1, 0, 0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buffIndiv);
  v8 = BattleFieldEnvironmentData__get_BuffData(this, v7);
  if ( !v8
    || (BuffIndividualities = BattleBuffData__getBuffIndividualities(v8, 1, 0, 0, 0, 0LL, 0LL),
        v8 = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, System_Int32_array *, Il2CppMethodPointer))this->klass->vtable._4_GetFieldIndividuality.method)(
                                   this,
                                   BuffIndividualities,
                                   this->klass->vtable._5_AddBackground.methodPtr),
        !BuffData) )
  {
    sub_1B8880C(v8, v9);
  }
  return BattleBuffData__checkActBuff(BuffData, 105, (System_Int32_array *)v8, Individualities_42960956, 0LL);
}


void __fastcall BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  RemovedBuffInfo_o *v5; // x1
  const MethodInfo *v6; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_1B8880C(0LL, v4);
  v5 = BattleBuffData__usedProgressing(BuffData, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v5, 1, v6);
}


int32_t __fastcall BattleFieldEnvironmentData__CompareData(
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
  v8 = ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer, BattleFieldEnvironmentData_BaseData_o *, const MethodInfo *))a->klass->vtable._4_get_Active.method)(
         a,
         a->klass->vtable._5_get_IsTargetBase.methodPtr,
         b,
         method);
  this = (BattleFieldEnvironmentData_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer))b->klass->vtable._4_get_Active.method)(
                                           b,
                                           b->klass->vtable._5_get_IsTargetBase.methodPtr);
  if ( v8 != (_DWORD)this )
  {
    v14 = ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer))b->klass->vtable._4_get_Active.method)(
            b,
            b->klass->vtable._5_get_IsTargetBase.methodPtr);
    return v14
         - ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BaseData_o *, Il2CppMethodPointer))a->klass->vtable._4_get_Active.method)(
             a,
             a->klass->vtable._5_get_IsTargetBase.methodPtr);
  }
  if ( !comData || !v7 )
LABEL_14:
    sub_1B8880C(this, a);
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


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  System_Func_object__object__o *_9__57_0; // x20
  Il2CppObject *v5; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5D73F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_1B885B0(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__57_0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D73F = 1;
  }
  if ( !servantEnumerable )
    return 0LL;
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
    _9__57_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_object__object____ctor(
      _9__57_0,
      v5,
      Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__57_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__57_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v7, v8);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                                (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__57_0,
                                                                                (const MethodInfo_2EB2990 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
}


RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        RemovedBuffInfo_o *removeBuffInfo,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x21
  System_Object_array *v7; // x0
  const MethodInfo *v8; // x3

  v6 = this;
  if ( (byte_4A5D755 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    byte_4A5D755 = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
    sub_1B8880C(this, removeBuffInfo);
  }
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)this,
         (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42771408(
    v6,
    (BattleBuffData_BuffData_array *)v7,
    isAddAfterTask,
    v8);
  return removeBuffInfo;
}


void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42771408(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  BattleFieldEnvironmentData___c_c *v12; // x0
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v14; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Action_object__o *v19; // x22
  const MethodInfo *v20; // x1

  if ( (byte_4A5D756 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__87_0__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__DisplayClass87_0__ExecRemoveBuffAfterProc_b__1__);
    sub_1B885B0(&BattleFieldEnvironmentData___c__DisplayClass87_0_TypeInfo);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D756 = 1;
  }
  v7 = sub_1B887FC(BattleFieldEnvironmentData___c__DisplayClass87_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_BYTE *)(v7 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0LL) )
  {
    v12 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v12 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__87_0 = (System_Func_object__bool__o *)v12->static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__87_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__87_0,
        v14,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__87_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__87_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v16, v17);
    }
    v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v19 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v19,
      (Il2CppObject *)v7,
      Method_BattleFieldEnvironmentData___c__DisplayClass87_0__ExecRemoveBuffAfterProc_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v18,
      (System_Action_T__o *)v19,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v20);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42772012(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_1B8880C(this, 0LL);
  v7 = BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
         this,
         removeBuff->fields.delAfterProcType,
         (const MethodInfo *)isAddAfterTask);
  if ( v7 )
  {
    v8 = v7;
    ((void (__fastcall *)(FieldBuffDeleteProcess_o *, BattleFieldEnvironmentData_o *, void *))v7->klass->vtable._5_Init.method)(
      v7,
      this,
      v7->klass[1]._1.image);
    ((void (__fastcall *)(FieldBuffDeleteProcess_o *, BattleBuffData_BuffData_o *, bool, Il2CppMethodPointer))v8->klass->vtable._4_Exec.method)(
      v8,
      removeBuff,
      isAddAfterTask,
      v8->klass->vtable._5_Init.methodPtr);
  }
}


System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *__fastcall BattleFieldEnvironmentData__GetBaseBgmList(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  System_Func_object__bool__o *_9__68_0; // x20
  Il2CppObject *v6; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A5D74A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1B885B0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__68_0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D74A = 1;
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
    _9__68_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__68_0, v6, Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__68_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__68_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__68_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__68_0, (int32_t)_9__68_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
          (System_Func_TSource__bool__o *)_9__68_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  return (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)System_Linq_Enumerable__ToList_object_(
                                                                                    v10,
                                                                                    (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
}


BuffUniqueValue_o *__fastcall BattleFieldEnvironmentData__GetChangeBuffUniqueVal(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_FieldChangeData_o *fieldChangeData; // x0
  BuffUniqueValue_o *result; // x0
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !buff )
    sub_1B8880C(this, 0LL);
  fieldChangeData = buff->fields.fieldChangeData;
  if ( !fieldChangeData || (result = BattleBuffData_FieldChangeData__get_UniqueVal(fieldChangeData, 0LL)) == 0LL )
  {
    changeBgmData = buff->fields.changeBgmData;
    if ( changeBgmData )
      return changeBgmData->fields.uniqueVal;
    else
      return 0LL;
  }
  return result;
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetChangeFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  const MethodInfo *v4; // x1
  void *BuffData; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21
  __int64 v10; // x23

  if ( (byte_4A5D745 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D745 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v4);
  if ( !BuffData )
    goto LABEL_15;
  BuffData = BattleBuffData__GetFieldChangeArray((BattleBuffData_o *)BuffData, 0LL);
  if ( !BuffData )
    goto LABEL_15;
  v7 = *((_DWORD *)BuffData + 6);
  v8 = BuffData;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1B88814(BuffData, v6);
      v10 = *((_QWORD *)v8 + (int)v9 + 4);
      if ( !v10 )
        break;
      BuffData = (void *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v10 + 56), 0LL);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v3 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v3,
          *(System_Collections_Generic_IEnumerable_T__o **)(v10 + 56),
          (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1B8880C(BuffData, v6);
  }
LABEL_13:
  if ( !v3 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetCommonFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  System_Int32_array *IsNullOrEmpty; // x0
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4A5D75C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5D75C = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)individuality,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v9);
    if ( !v7 )
LABEL_11:
      sub_1B8880C(IsNullOrEmpty, v9);
  }
  else
  {
    if ( !v7 )
      goto LABEL_11;
    System_Collections_Generic_List_int___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v10);
  }
  System_Collections_Generic_List_int___AddRange(
    v7,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v7, v11);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  BattleFieldEnvironmentData___c_c *v6; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x22
  System_Func_object__bool__o *_9__60_0; // x23
  Il2CppObject *v9; // x24
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_IEnumerable_T__o *baseBackground; // x0
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  const MethodInfo *v15; // x1
  System_Collections_ICollection_o *QuestCommonIndividuality; // x0
  const MethodInfo *v17; // x1
  System_Int32_array *v18; // x1
  const MethodInfo *v19; // x3

  if ( (byte_4A5D742 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____76128888);
    sub_1B885B0(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__60_0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D742 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = this->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__60_0 = (System_Func_object__bool__o *)v6->static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__60_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__60_0,
      v9,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__60_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__60_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_0, (int32_t)_9__60_0, v11, v12);
  }
  baseBackground = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                                                                    (System_Func_TSource__bool__o *)_9__60_0,
                                                                    (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____76128888);
  if ( !baseBackground )
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)this->fields.baseBackground;
  if ( !baseBackground )
    goto LABEL_19;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)baseBackground[2].monitor;
  if ( !monitor )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                                                                      this,
                                                                      0LL);
    if ( v5 )
      goto LABEL_17;
LABEL_19:
    sub_1B8880C(baseBackground, monitor);
  }
  if ( !v5 )
    goto LABEL_19;
  System_Collections_Generic_List_int___AddRange(
    v5,
    monitor,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  QuestCommonIndividuality = (System_Collections_ICollection_o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                   this,
                                                                   v15);
  if ( !BasicHelper__IsNullOrEmpty(QuestCommonIndividuality, 0LL) )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                      this,
                                                                      v17);
LABEL_17:
    System_Collections_Generic_List_int___AddRange(
      v5,
      baseBackground,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v18 = System_Collections_Generic_List_int___ToArray(
          v5,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, v18, addIndiv, v19);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x21
  const MethodInfo *v6; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_int__o **v11; // x22
  System_Collections_Generic_List_int__o *v12; // x20
  System_Predicate_int__o *v13; // x20

  if ( (byte_4A5D758 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&System_Predicate_int__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__DisplayClass92_0__GetIndividualityExceptDelTarget_b__0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c__DisplayClass92_0_TypeInfo);
    byte_4A5D758 = 1;
  }
  v5 = sub_1B887FC(BattleFieldEnvironmentData___c__DisplayClass92_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v6);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0LL, 0LL, 1, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = BuffData;
  v11 = (System_Collections_Generic_List_int__o **)(v5 + 16);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)BuffData, v9, v10);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v12 = *v11;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0LL);
  if ( !v12 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v11 )
    goto LABEL_13;
  if ( (*v11)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_1B8880C(BuffData, v8);
  }
  v13 = (System_Predicate_int__o *)sub_1B887FC(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass92_0__GetIndividualityExceptDelTarget_b__0__,
    0LL);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v13,
    (const MethodInfo_34E1E38 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleFieldEnvironmentData__GetLinkBuffData(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x8
  BattleServantData_o *ServantData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v13; // x20
  System_Func_object__bool__o *v14; // x21

  if ( (byte_4A5D746 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____76128864);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__DisplayClass64_0__GetLinkBuffData_b__0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c__DisplayClass64_0_TypeInfo);
    byte_4A5D746 = 1;
  }
  v5 = sub_1B887FC(BattleFieldEnvironmentData___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = uniqueVal;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)uniqueVal, v8, v9);
  v10 = *(_QWORD *)(v5 + 16);
  if ( !v10 )
    goto LABEL_12;
  v7 = (const MethodInfo *)*(unsigned int *)(v10 + 20);
  if ( ((unsigned int)v7 & 0x80000000) == 0 )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( Data_k__BackingField )
    {
      ServantData = BattleData__getServantData(Data_k__BackingField, (int32_t)v7, 0LL);
      if ( ServantData )
      {
        BuffData = BattleServantData__get_BuffData(ServantData, 0LL);
        if ( BuffData )
          goto LABEL_9;
      }
      return 0LL;
    }
LABEL_12:
    sub_1B8880C(Data_k__BackingField, v7);
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v7);
  if ( BuffData )
  {
LABEL_9:
    v13 = BattleBuffData__AllBuffEnumerable(BuffData, 0LL);
    v14 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v14,
      (Il2CppObject *)v5,
      Method_BattleFieldEnvironmentData___c__DisplayClass64_0__GetLinkBuffData_b__0__,
      0LL);
    return (BattleBuffData_BuffData_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                          (System_Func_TSource__bool__o *)v14,
                                          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____76128864);
  }
  return 0LL;
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetLinkBuffIndividuality(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *LinkBuffData; // x0
  System_Int32_array *result; // x0
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0

  if ( (byte_4A5D747 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5D747 = 1;
  }
  LinkBuffData = BattleFieldEnvironmentData__GetLinkBuffData(this, uniqueVal, method);
  if ( !LinkBuffData || (result = BattleBuffData_BuffData__GetIndividualty(LinkBuffData, 0, 0, 0, 0LL)) == 0LL )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BDA48C(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    return **(System_Int32_array ***)(v10 + 184);
  }
  return result;
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetQuestCommonIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  const MethodInfo *v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *QuestPhaseIndividuality; // x20
  Il2CppObject *Value; // x21
  _QWORD *v7; // x19
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  System_Object_array *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Func_int__bool__o *v16; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4A5D744 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&Method_JsonManager_DeserializeArray_RangeValue___);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__DisplayClass62_0__GetQuestCommonIndividuality_b__0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo);
    sub_1B885B0(&StringLiteral_3030/*"BG_INDIVIDUALITY_VALUE_RANGE"*/);
    byte_4A5D744 = 1;
  }
  v3 = sub_1B887FC(BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  QuestPhaseIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                                                                                   this,
                                                                                   v4);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestPhaseIndividuality, 0LL)
    || (Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3030/*"BG_INDIVIDUALITY_VALUE_RANGE"*/, 0LL),
        System_String__IsNullOrEmpty((System_String_o *)Value, 0LL)) )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BDA48C(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    return **(System_Int32_array ***)(v10 + 184);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__DeserializeArray_object_(
            Value,
            (const MethodInfo_2EE5F40 *)Method_JsonManager_DeserializeArray_RangeValue___);
    if ( !v3 )
      sub_1B8880C(v12, v13);
    *(_QWORD *)(v3 + 16) = v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v12, v14, v15);
    v16 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v16,
      (Il2CppObject *)v3,
      Method_BattleFieldEnvironmentData___c__DisplayClass62_0__GetQuestCommonIndividuality_b__0__,
      0LL);
    v17 = System_Linq_Enumerable__Where_int_(
            QuestPhaseIndividuality,
            (System_Func_TSource__bool__o *)v16,
            (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v17,
             (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  System_Int32_array **p_questPhaseIndividuality; // x19
  BattleData_o *Data_k__BackingField; // x0
  System_Int32_array *PrioredIndividuality; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4A5D743 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    byte_4A5D743 = 1;
  }
  p_questPhaseIndividuality = &this->fields.questPhaseIndividuality;
  result = this->fields.questPhaseIndividuality;
  if ( !result )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1B8880C(0LL, method);
    PrioredIndividuality = BattleData__GetPrioredIndividuality(Data_k__BackingField, 0LL);
    *p_questPhaseIndividuality = PrioredIndividuality;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.questPhaseIndividuality,
      (int32_t)PrioredIndividuality,
      v7,
      v8);
    result = *p_questPhaseIndividuality;
    if ( !*p_questPhaseIndividuality )
    {
      v9 = Method_System_Array_Empty_int___;
      v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v10 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v10 = v9[7];
      }
      v11 = *(_QWORD *)(v10 + 16);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1BDA48C(v11);
      if ( !*(_DWORD *)(v11 + 224) )
        j_il2cpp_runtime_class_init_0(v11);
      v12 = *(_QWORD *)(v9[7] + 16LL);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1BDA48C(v12);
      return **(System_Int32_array ***)(v12 + 184);
    }
  }
  return result;
}


FieldBuffDeleteProcess_o *__fastcall BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        int32_t delAfterProcType,
        const MethodInfo *method)
{
  _QWORD *v4; // x8
  Il2CppObject *v5; // x19

  if ( (byte_4A5D757 & 1) == 0 )
  {
    sub_1B885B0(&ChangeBgmBuffDeleteProcess_TypeInfo);
    sub_1B885B0(&FieldChangeBuffDeleteProcess_TypeInfo);
    byte_4A5D757 = 1;
  }
  if ( delAfterProcType == 1 )
  {
    v4 = &FieldChangeBuffDeleteProcess_TypeInfo;
  }
  else
  {
    if ( delAfterProcType != 3 )
      return 0LL;
    v4 = &ChangeBgmBuffDeleteProcess_TypeInfo;
  }
  v5 = (Il2CppObject *)sub_1B887FC(*v4);
  System_Object___ctor(v5, 0LL);
  return (FieldBuffDeleteProcess_o *)v5;
}


BattleFieldEnvironmentData_SaveData_o *__fastcall BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  void *backgroundList; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Object_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_4A5D735 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__);
    sub_1B885B0(&BattleFieldEnvironmentData_SaveData_TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D735 = 1;
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
    v5 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Action_object____ctor(v5, v6, Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v5, v8, v9);
  }
  if ( !bgmList )
    goto LABEL_15;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v5,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v10 = sub_1B887FC(BattleFieldEnvironmentData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_15;
  backgroundList = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)backgroundList,
                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v10
    || (*(_QWORD *)(v10 + 16) = backgroundList,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)backgroundList, v11, v12),
        (backgroundList = this->fields.bgmList) == 0LL)
    || (v13 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)backgroundList,
                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v10 + 24) = v13,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)v13, v14, v15),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v16)) == 0LL) )
  {
LABEL_15:
    sub_1B8880C(backgroundList, method);
  }
  SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0LL);
  *(_QWORD *)(v10 + 32) = SaveData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 32), (int32_t)SaveData, v18, v19);
  result = (BattleFieldEnvironmentData_SaveData_o *)v10;
  *(_DWORD *)(v10 + 40) = this->fields.addOrder;
  return result;
}


// attributes: thunk
void __fastcall BattleFieldEnvironmentData__InitBG(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData__InitStageField(this, method);
}


void __fastcall BattleFieldEnvironmentData__InitStageField(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
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
  int32_t v21; // w3
  Il2CppObject *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  BattleFieldEnvironmentData___c_c *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  System_Func_object__bool__o *_9__51_1; // x21
  Il2CppObject *v28; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  v2 = this;
  if ( (byte_4A5D73A & 1) == 0 )
  {
    sub_1B885B0(&Generator_BGFromQuestPhase_TypeInfo);
    sub_1B885B0(&Generator_BGFromStage_TypeInfo);
    sub_1B885B0(&Generator_BGM_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____76128880);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____76128888);
    sub_1B885B0(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__InitStageField_b__51_0__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__InitStageField_b__51_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D73A = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v2->fields._Data_k__BackingField, 0LL),
        v5 = (Generator_BGFromQuestPhase_o *)sub_1B887FC(Generator_BGFromQuestPhase_TypeInfo),
        Generator_BGFromQuestPhase___ctor(v5, Data_k__BackingField, StageEntity, v6),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
          v2,
          v5,
          1LL,
          v2->klass->vtable._6_AddBGM.methodPtr),
        (this = (BattleFieldEnvironmentData_o *)v2->fields._Data_k__BackingField) == 0LL)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
    sub_1B8880C(this, method);
  }
  v7 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0LL) >= 1 )
  {
    v8 = (Generator_BGFromStage_o *)sub_1B887FC(Generator_BGFromStage_TypeInfo);
    Generator_BGFromStage___ctor(v8, v7, v9);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
      v2,
      v8,
      1LL,
      v2->klass->vtable._6_AddBGM.methodPtr);
  }
  v10 = v2->fields._Data_k__BackingField;
  bgmId = v7->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v7, 0, 0LL);
  v13 = (Generator_BGM_o *)sub_1B887FC(Generator_BGM_TypeInfo);
  Generator_BGM___ctor(v13, v10, bgmId, 0, PriorityBgm, 0LL, v14);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))v2->klass->vtable._6_AddBGM.method)(
    v2,
    v13,
    1LL,
    0LL,
    v2->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
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
    _9__51_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__51_0,
      v18,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__51_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__51_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v20, v21);
  }
  v22 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          backgroundList,
          (System_Func_TSource__bool__o *)_9__51_0,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____76128888);
  v2->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.baseBackground, (int32_t)v22, v23, v24);
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
    _9__51_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__51_1,
      v28,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__51_1__,
      0LL);
    v29 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v29->__9__51_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__51_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->__9__51_1, (int32_t)_9__51_1, v30, v31);
  }
  v32 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          bgmList,
          (System_Func_TSource__bool__o *)_9__51_1,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____76128880);
  v2->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.baseBgm, (int32_t)v32, v33, v34);
}


bool __fastcall BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B8880C(this, method);
  if ( Data_k__BackingField->fields.wavecount >= 1 )
  {
    BattleFieldEnvironmentData__ResetFieldInfo(this, method);
    BattleFieldEnvironmentData__InitStageField(this, v4);
    BattleFieldEnvironmentData__TakeOverChangeField(this, v5);
    BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(this, v6);
  }
  return BattleFieldEnvironmentData__get_IsNeedChangeBG(this, method);
}


bool __fastcall BattleFieldEnvironmentData__IsNeedChangeField(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_4A5D752 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5D752 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_1B8880C(Instance, v4);
    BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0LL);
    if ( BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0LL) )
      return 0;
  }
  return 1;
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__RemoveAfterResetBGM(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  int *v3; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  BattleFieldEnvironmentData___c_c *v10; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v11; // x20
  System_Func_object__bool__o *_9__69_1; // x21
  Il2CppObject *v13; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8

  if ( (byte_4A5D74B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___);
    sub_1B885B0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1B885B0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_0__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_1__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D74B = 1;
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
    v5 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)v5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__69_0, (int32_t)v5, v8, v9);
  }
  if ( !bgmList )
    goto LABEL_23;
  System_Collections_Generic_List_object___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)v5,
    (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
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
    _9__69_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__69_1,
      v13,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_1__,
      0LL);
    v14 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v14->__9__69_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__69_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->__9__69_1, (int32_t)_9__69_1, v15, v16);
  }
  if ( System_Linq_Enumerable__Count_object__48881560(
         (System_Collections_Generic_IEnumerable_TSource__o *)v11,
         (System_Func_TSource__bool__o *)_9__69_1,
         (const MethodInfo_2E9DF98 *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v3 = (int *)this->fields.bgmList;
    if ( v3 )
    {
      method = (const MethodInfo *)this->fields.baseBgm;
      v19 = *((_QWORD *)v3 + 2);
      v20 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
      ++v3[7];
      if ( v19 )
      {
        v21 = v3[6];
        if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v3,
            (Il2CppObject *)method,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = v19 + 8 * v21;
          v3[6] = v21 + 1;
          *(_QWORD *)(v22 + 32) = method;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)method, v17, v18);
        }
        goto LABEL_22;
      }
    }
LABEL_23:
    sub_1B8880C(v3, method);
  }
LABEL_22:
  BattleFieldEnvironmentData__SortBGM(this, method);
  return this->fields._CurBGM_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4A5D74E & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__75_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1B885B0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    byte_4A5D74E = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v4 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Predicate_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__75_0__,
    0LL);
  if ( !bgmList )
    sub_1B8880C(v5, v6);
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v4,
         (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) >= 1 )
    BattleFieldEnvironmentData__SortBGM(this, v7);
  return BattleFieldEnvironmentData__get_IsChangeBgm(this, v7);
}


void __fastcall BattleFieldEnvironmentData__RemoveBgmRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v4; // x0
  System_Func_object__bool__o *_9__71_0; // x21
  Il2CppObject *v6; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_object__object__o *v11; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v15; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x20
  int i; // w24
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x21
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_object__o *bgmList; // x22
  System_Predicate_T__o *v35; // x23
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  const MethodInfo *v42; // x1

  if ( (byte_4A5D74D & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1B885B0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__71_0__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__DisplayClass71_0__RemoveBgmRelateBuff_b__1__);
    sub_1B885B0(&BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D74D = 1;
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
    _9__71_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__71_0,
      v6,
      Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__71_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__71_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__71_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__71_0, (int32_t)_9__71_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__71_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v11 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
  System_Func_object__object____ctor(
    v11,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__,
    0LL);
  v12 = System_Linq_Enumerable__Select_object__object_(
          v10,
          (System_Func_TSource__TResult__o *)v11,
          (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
  if ( !v12 )
    sub_1B8880C(0LL, v13);
  klass = v12->klass;
  v15 = v12;
  v16 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffUniqueValue__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BDA590(v12, System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  if ( !v20 )
    sub_1B8880C(0LL, v19);
  for ( i = 0;
        ;
        i += System_Collections_Generic_List_object___RemoveAll(
               bgmList,
               v35,
               (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) )
  {
    v22 = *(_QWORD *)v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_22;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_22:
      v25 = sub_1BDA590(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = sub_1B887FC(BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0LL);
    v27 = *(_QWORD *)v20;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffUniqueValue__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_29;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_29:
      v30 = sub_1BDA590(v20, System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v20, *(_QWORD *)(v30 + 8));
    if ( !v26 )
      sub_1B8880C(v31, v31);
    *(_QWORD *)(v26 + 16) = v31;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 16), v31, v32, v33);
    bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
    v35 = (System_Predicate_T__o *)sub_1B887FC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v35,
      (Il2CppObject *)v26,
      Method_BattleFieldEnvironmentData___c__DisplayClass71_0__RemoveBgmRelateBuff_b__1__,
      0LL);
    if ( !bgmList )
      sub_1B8880C(v36, v37);
  }
  v38 = *(_QWORD *)v20;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_38;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_38:
    v41 = sub_1BDA590(v20, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v20, *(_QWORD *)(v41 + 8));
  if ( i > 0 )
    BattleFieldEnvironmentData__SortBGM(this, v42);
}


void __fastcall BattleFieldEnvironmentData__RemoveBgmThenAddUpdateTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(this, method) )
    BattleFieldEnvironmentData__AddUpdateBgmTask(this, v3);
}


void __fastcall BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleLogic_o *Logic_k__BackingField; // x0

  if ( BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(this, method) )
  {
    Logic_k__BackingField = this->fields._Logic_k__BackingField;
    if ( !Logic_k__BackingField )
      sub_1B8880C(0LL, v3);
    BattleLogic__PlayLoadCurrentBgm(Logic_k__BackingField, 0LL, 0.0, 0LL);
  }
}


void __fastcall BattleFieldEnvironmentData__RemoveDeadServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *deadSvtData,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v3; // x19
  BattleBuffData_BuffData_array *AllBGMChangeBuffArray; // x1
  const MethodInfo *v5; // x3

  if ( !deadSvtData
    || (v3 = this, (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(deadSvtData, 0LL)) == 0LL) )
  {
    sub_1B8880C(this, deadSvtData);
  }
  AllBGMChangeBuffArray = BattleBuffData__GetAllBGMChangeBuffArray((BattleBuffData_o *)this, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42771408(v3, AllBGMChangeBuffArray, 1, v5);
}


void __fastcall BattleFieldEnvironmentData__RemoveRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleFieldEnvironmentData_o *v6; // x0
  const MethodInfo *v7; // x2
  BuffUniqueValue_o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *backgroundList; // x21
  System_Predicate_object__o *v13; // x22
  int32_t v14; // w0
  System_Collections_Generic_List_object__o *bgmList; // x22
  int32_t v16; // w21
  System_Predicate_object__o *v17; // x23
  const MethodInfo *v18; // x2

  if ( (byte_4A5D74C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1B885B0(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1B885B0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__0__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__1__);
    sub_1B885B0(&BattleFieldEnvironmentData___c__DisplayClass70_0_TypeInfo);
    byte_4A5D74C = 1;
  }
  v5 = sub_1B887FC(BattleFieldEnvironmentData___c__DisplayClass70_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v8 = BattleFieldEnvironmentData__GetChangeBuffUniqueVal(v6, buff, v7);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v8, v10, v11);
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v13 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Predicate_object____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__0__,
    0LL);
  if ( !backgroundList
    || (v14 = System_Collections_Generic_List_object___RemoveAll(
                backgroundList,
                (System_Predicate_T__o *)v13,
                (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList,
        v16 = v14,
        v17 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo),
        System_Predicate_object____ctor(
          v17,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__1__,
          0LL),
        !bgmList) )
  {
LABEL_9:
    sub_1B8880C(v8, v9);
  }
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v17,
         (const MethodInfo_34FEE90 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v16 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v18);
}


void __fastcall BattleFieldEnvironmentData__ResetFieldInfo(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x8
  int32_t v7; // w2
  int v8; // w9

  v2 = this;
  if ( (byte_4A5D73B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__);
    byte_4A5D73B = 1;
  }
  backgroundList = v2->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_10;
  size = backgroundList->fields._size;
  v5 = backgroundList->fields._version + 1;
  backgroundList->fields._size = 0;
  backgroundList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)backgroundList->fields._items, 0, size, 0LL);
  bgmList = v2->fields.bgmList;
  if ( !bgmList )
LABEL_10:
    sub_1B8880C(this, method);
  v7 = bgmList->fields._size;
  v8 = bgmList->fields._version + 1;
  bgmList->fields._size = 0;
  bgmList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)bgmList->fields._items, 0, v7, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SetSaveData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *backgroundList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v9; // x0
  System_Action_object__o *_9__8_0; // x22
  Il2CppObject *v11; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x2
  int32_t v16; // w20
  int32_t v17; // w21
  bool ExistOverwriteBgIndividuality; // w22
  Generator_Background_o *v19; // x23
  const MethodInfo *v20; // x5
  struct BattleData_o *Data_k__BackingField; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v26; // w23
  Generator_BGM_o *v27; // x24
  const MethodInfo *v28; // x6

  if ( (byte_4A5D736 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Generator_BGM_TypeInfo);
    sub_1B885B0(&Generator_Background_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D736 = 1;
  }
  if ( sv )
  {
    BattleFieldEnvironmentData__ResetFieldInfo(this, (const MethodInfo *)sv);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.backgroundData, 0LL) )
    {
      backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
      if ( !backgroundList )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.backgroundData,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0LL) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v9 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
        v9 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      _9__8_0 = (System_Action_object__o *)v9->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          v9 = BattleFieldEnvironmentData___c_TypeInfo;
        }
        v11 = (Il2CppObject *)v9->static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
        System_Action_object____ctor(_9__8_0, v11, Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, 0LL);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v13, v14);
      }
      BasicHelper__ForEach_object_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_object__o *)BattleFieldEnvironmentData__get_BuffData(this, v7);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0LL);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v15);
      return;
    }
LABEL_27:
    sub_1B8880C(backgroundList, v5);
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
                                                                    0LL);
    if ( !this->fields._Perf_k__BackingField )
      goto LABEL_27;
    v16 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_CurrentGroundType(
                                                                    this->fields._Perf_k__BackingField,
                                                                    0LL);
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_27;
    v17 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(
                                      this->fields._Data_k__BackingField,
                                      0LL);
    v19 = (Generator_Background_o *)sub_1B887FC(Generator_Background_TypeInfo);
    Generator_Background___ctor(v19, v16, v17, 0, ExistOverwriteBgIndividuality, v20);
    backgroundList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
                                                                    this,
                                                                    v19,
                                                                    2LL,
                                                                    this->klass->vtable._6_AddBGM.methodPtr);
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
                           0LL);
    BgmName_k__BackingField = overwriteBgmData_k__BackingField->fields._BgmName_k__BackingField;
    v26 = allowSubBgmPlaying;
    v27 = (Generator_BGM_o *)sub_1B887FC(Generator_BGM_TypeInfo);
    Generator_BGM___ctor(v27, Data_k__BackingField, BgmId_k__BackingField, v26, 0, BgmName_k__BackingField, v28);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
      this,
      v27,
      2LL,
      0LL,
      this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
}


void __fastcall BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v4; // x21
  BattleData_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  System_Comparison_T__o *v8; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_4A5D750 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData__SortBGM_b__78_0__);
    sub_1B885B0(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_4A5D750 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v4 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__78_0__, 0LL);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v4,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v7 = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v8 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v8, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !v7 )
    goto LABEL_9;
  System_Collections_Generic_List_object___Sort_55571192(
    v7,
    v8,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_CurBGM_k__BackingField, (int32_t)baseBgm, v10, v11);
  v5 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v5 )
LABEL_9:
    sub_1B8880C(v5, v6);
  BattleData__SetOverrideBgmData(v5, *p_CurBGM_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SortBGM_42755904(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *targetBgmList,
        const MethodInfo *method)
{
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Comparison_T__o *v8; // x21

  if ( (byte_4A5D751 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData__SortBGM_b__79_0__);
    sub_1B885B0(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_4A5D751 = 1;
  }
  v5 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__79_0__, 0LL);
  if ( !targetBgmList )
    sub_1B8880C(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    (System_Action_T__o *)v5,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v8 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v8, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  System_Collections_Generic_List_object___Sort_55571192(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    v8,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
}


void __fastcall BattleFieldEnvironmentData__SortBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *backgroundList; // x20
  System_Comparison_T__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5D74F & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1B885B0(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
    byte_4A5D74F = 1;
  }
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v4 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Comparison_object____ctor(v4, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !backgroundList )
    sub_1B8880C(v5, v6);
  System_Collections_Generic_List_object___Sort_55571192(
    backgroundList,
    v4,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_2EA3600 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._CurBackGround_k__BackingField,
    (int32_t)baseBackground,
    v8,
    v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__SortFieldData(
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


RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  BattleBuffData_o *v9; // x21
  int32_t Value; // w22
  int32_t Value2; // w24
  RemovedBuffInfo_o *v12; // x1
  const MethodInfo *v13; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)individuality);
  if ( !baseVals
    || (v9 = BuffData,
        Value = DataVals__GetValue(baseVals, 0LL),
        Value2 = DataVals__GetValue2(baseVals, 0LL),
        BuffData = (BattleBuffData_o *)DataVals__isParam(baseVals, 89, 0LL),
        !v9) )
  {
    sub_1B8880C(BuffData, v8);
  }
  v12 = BattleBuffData__subBuffFromIndividualites(
          v9,
          individuality,
          Value,
          Value2,
          1,
          (unsigned __int8)BuffData & 1,
          0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v12, 1, v13);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
        BattleFieldEnvironmentData_o *this,
        int32_t deadActorId,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  RemovedBuffInfo_o *v7; // x1
  const MethodInfo *v8; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&deadActorId);
  if ( !BuffData )
    sub_1B8880C(0LL, v6);
  v7 = BattleBuffData__SubBuffFromDeadActorId(BuffData, deadActorId, 0, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v7, 1, v8);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromType(
        BattleFieldEnvironmentData_o *this,
        int32_t buffId,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  RemovedBuffInfo_o *v9; // x0
  const MethodInfo *v10; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&buffId);
  if ( !BuffData )
    sub_1B8880C(0LL, v8);
  v9 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v9, isAddAfterTask, v10);
}


void __fastcall BattleFieldEnvironmentData__TakeOverChangeField(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  BattleBuffData_FieldChangeData_array *v5; // x0
  BattleFieldEnvironmentData___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *_9__54_0; // x21
  Il2CppObject *v9; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v14; // x19
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x19
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  BattleBuffData_FieldChangeData_o *v30; // x21
  Generator_BGFromFieldChangeBGBuff_o *v31; // x22
  const MethodInfo *v32; // x2
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v34; // x22
  const MethodInfo *v35; // x3
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_4A5D73C & 1) == 0 )
  {
    sub_1B885B0(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    sub_1B885B0(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
    sub_1B885B0(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__54_0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D73C = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_45;
  v5 = BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
  v6 = BattleFieldEnvironmentData___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__54_0 = (System_Func_object__bool__o *)v6->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__54_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__54_0,
      v9,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__54_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__54_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v11, v12);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_object_(
                                   v7,
                                   (System_Func_TSource__bool__o *)_9__54_0,
                                   (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_45:
    sub_1B8880C(BuffData, v4);
  klass = BuffData->klass;
  v14 = BuffData;
  v15 = *(unsigned __int16 *)(&BuffData->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&BuffData->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_15;
    }
    v17 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v17 = sub_1BDA590(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v17)(v14, *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_1B8880C(0LL, v18);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
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
      v23 = sub_1BDA590(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_29;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_29:
      v27 = sub_1BDA590(v19, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v30 = (BattleBuffData_FieldChangeData_o *)v28;
    if ( !v28 )
      sub_1B8880C(0LL, v29);
    if ( *(int *)(v28 + 24) >= 1 )
    {
      v31 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1B887FC(Generator_BGFromFieldChangeBGBuff_TypeInfo);
      Generator_BGFromFieldChangeBGBuff___ctor(v31, v30, v32);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
        this,
        v31,
        2LL,
        this->klass->vtable._6_AddBGM.methodPtr);
    }
    if ( v30->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v30->fields.bgmName, 0LL) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v34 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1B887FC(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
      Generator_BGMFromFieldChangeBGBuff___ctor(v34, Data_k__BackingField, v30, v35);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v34,
        2LL,
        0LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
  }
  v36 = *(_QWORD *)v19;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_41;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_41:
    v39 = sub_1BDA590(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v19, *(_QWORD *)(v39 + 8));
}


void __fastcall BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(
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
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_BattleServantData__o *v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v16; // x0
  System_Object_array *v17; // x1
  const MethodInfo *v18; // x2

  v2 = this;
  if ( (byte_4A5D73D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__55_0__);
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D73D = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (this = (BattleFieldEnvironmentData_o *)Data_k__BackingField->fields.player_datalist) == 0LL
    || (v4 = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___ToArray(
                                               (System_Collections_Generic_List_object__o *)this,
                                               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__),
        BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(v4, (BattleServantData_array *)v4, v5),
        (v6 = v2->fields._Data_k__BackingField) == 0LL) )
  {
    sub_1B8880C(this, method);
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
    _9__55_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__55_0,
      v10,
      Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__55_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Func_BattleServantData__bool__o *)_9__55_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0, (int32_t)_9__55_0, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                         player_datalist,
                                                                         (System_Func_TSource__bool__o *)_9__55_0,
                                                                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v16 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(v14, v15);
  v17 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v17, v18);
}


void __fastcall BattleFieldEnvironmentData__TurnProgressing(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  BattleBuffData_BuffData_array *v9; // x1
  const MethodInfo *v10; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)logic);
  if ( !BuffData )
    sub_1B8880C(0LL, v8);
  v9 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42771408(this, v9, 1, v10);
}


void __fastcall BattleFieldEnvironmentData__UpdateAllView(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf_k__BackingField; // x0
  struct BattlePerformance_o *v4; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (BattlePerformance__UpdateFieldView(Perf_k__BackingField, 0LL), (v4 = this->fields._Perf_k__BackingField) == 0LL)
    || (Perf_k__BackingField = (BattlePerformance_o *)v4->fields.logic) == 0LL
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Perf_k__BackingField, 0LL),
        (Perf_k__BackingField = this->fields._Perf_k__BackingField) == 0LL) )
  {
    sub_1B8880C(Perf_k__BackingField, method);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
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
  int32_t v11; // w3

  if ( (byte_4A5D73E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__56_0__);
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D73E = 1;
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
      _9__56_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__56_0,
        v8,
        Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__56_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__56_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v10, v11);
    }
    BasicHelper__ForEach_object_(
      v5,
      (System_Action_T__o *)_9__56_0,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
}


void __fastcall BattleFieldEnvironmentData___AddServantChangeBgm_b__99_0(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v3; // x19
  Generator_BGM_o *v4; // x1

  if ( !buff || (v3 = this, (this = (BattleFieldEnvironmentData_o *)buff->fields.changeBgmData) == 0LL) )
    sub_1B8880C(this, buff);
  v4 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(
         (BattleBuffData_ChangeBgmData_o *)this,
         v3->fields._Data_k__BackingField,
         0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))v3->klass->vtable._6_AddBGM.method)(
    v3,
    v4,
    2LL,
    0LL,
    v3->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___RemoveBgmNotExistsChangeBgmBuff_b__75_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleFieldEnvironmentData_BGMData__IsRemove(x, this->fields._Data_k__BackingField, method);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__78_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, BattleFieldEnvironmentData_o *, void *))x->klass->vtable._6_UpdateActive.method)(
    x,
    this,
    x->klass[1]._1.image);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__79_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, BattleFieldEnvironmentData_o *, void *))x->klass->vtable._6_UpdateActive.method)(
    x,
    this,
    x->klass[1]._1.image);
}


System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *__fastcall BattleFieldEnvironmentData__get_BgmList(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields.bgmList;
}


BattleBuffData_o *__fastcall BattleFieldEnvironmentData__get_BuffData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_fields; // x19
  BattleBuffData_o *v4; // x20
  struct BattleBuffData_o *buffData; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D737 & 1) == 0 )
  {
    sub_1B885B0(&BattleBuffData_TypeInfo);
    byte_4A5D737 = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  v4 = buffData;
  if ( !buffData )
  {
    v4 = (BattleBuffData_o *)sub_1B887FC(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0LL);
    p_fields->klass = (ServantStatusBattleListViewItem_c *)v4;
    sub_1B88554(p_fields, (int32_t)v4, v6, v7);
  }
  return v4;
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__get_CurBGM(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurBGM_k__BackingField;
}


System_String_o *__fastcall BattleFieldEnvironmentData__get_CurBGMName(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8

  CurBGM_k__BackingField = this->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    sub_1B8880C(this, method);
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
    return BgmData_k__BackingField->fields._BgmName_k__BackingField;
  else
    return 0LL;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__get_CurBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._CurBackGround_k__BackingField;
}


BattleData_o *__fastcall BattleFieldEnvironmentData__get_Data(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._Data_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__get_IsChangeBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  v2 = this;
  if ( (byte_4A5D738 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4A5D738 = 1;
  }
  CurBGM_k__BackingField = v2->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    goto LABEL_8;
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
  {
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    this = (BattleFieldEnvironmentData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( this )
    {
      BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
      LOBYTE(BgmData_k__BackingField) = !BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0LL);
      return (unsigned __int8)BgmData_k__BackingField & 1;
    }
LABEL_8:
    sub_1B8880C(this, method);
  }
  return (unsigned __int8)BgmData_k__BackingField & 1;
}


bool __fastcall BattleFieldEnvironmentData__get_IsNeedChangeBG(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_BackgroundData_o *CurBackGround_k__BackingField; // x0
  int comData; // w20
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
                                                                                   0LL);
  if ( !CurBackGround_k__BackingField )
    goto LABEL_12;
  if ( comData == LODWORD(CurBackGround_k__BackingField->fields.comData) )
  {
    CurBackGround_k__BackingField = this->fields._CurBackGround_k__BackingField;
    if ( CurBackGround_k__BackingField )
    {
      CurBackGround_k__BackingField = (BattleFieldEnvironmentData_BackgroundData_o *)BattleFieldEnvironmentData_BackgroundData__get_BgResource(
                                                                                       CurBackGround_k__BackingField,
                                                                                       method);
      if ( CurBackGround_k__BackingField )
      {
        Perf_k__BackingField = this->fields._Perf_k__BackingField;
        if ( Perf_k__BackingField )
        {
          comData_high = HIDWORD(CurBackGround_k__BackingField->fields.comData);
          CurBackGround_k__BackingField = (BattleFieldEnvironmentData_BackgroundData_o *)BattlePerformance__get_BgResource(
                                                                                           Perf_k__BackingField,
                                                                                           0LL);
          if ( CurBackGround_k__BackingField )
            return comData_high != HIDWORD(CurBackGround_k__BackingField->fields.comData);
        }
      }
    }
LABEL_12:
    sub_1B8880C(CurBackGround_k__BackingField, method);
  }
  return 1;
}


BattleLogic_o *__fastcall BattleFieldEnvironmentData__get_Logic(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._Logic_k__BackingField;
}


BattlePerformance_o *__fastcall BattleFieldEnvironmentData__get_Perf(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._Perf_k__BackingField;
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__get_QuestCommonIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array **p_questCommonIndividualityCache; // x19
  struct System_Int32_array *questCommonIndividualityCache; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  p_questCommonIndividualityCache = &this->fields.questCommonIndividualityCache;
  questCommonIndividualityCache = this->fields.questCommonIndividualityCache;
  if ( !questCommonIndividualityCache )
  {
    questCommonIndividualityCache = BattleFieldEnvironmentData__GetQuestCommonIndividuality(this, method);
    this->fields.questCommonIndividualityCache = questCommonIndividualityCache;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)p_questCommonIndividualityCache,
      (int32_t)questCommonIndividualityCache,
      v5,
      v6);
  }
  return questCommonIndividualityCache;
}


void __fastcall BattleFieldEnvironmentData__set_CurBGM(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._CurBGM_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._CurBGM_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleFieldEnvironmentData__set_CurBackGround(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._CurBackGround_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._CurBackGround_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleFieldEnvironmentData__set_Data(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Data_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleFieldEnvironmentData__set_Logic(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Logic_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Logic_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleFieldEnvironmentData__set_Perf(
        BattleFieldEnvironmentData_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Perf_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Perf_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleFieldEnvironmentData_BGMData___ctor(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData_BGMData___ctor_42752124(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmData_k__BackingField = bgmData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._BgmData_k__BackingField, (int32_t)bgmData, v5, v6);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_cachedBuffIndividuality; // x19
  System_Int32_array *cachedBuffIndividuality; // x21
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  int32_t v9; // w3

  p_cachedBuffIndividuality = (ServantStatusBattleListViewItem_o *)&this->fields.cachedBuffIndividuality;
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
      sub_1B8880C(comData, fieldEnv);
    }
    cachedBuffIndividuality = BattleFieldEnvironmentData__GetLinkBuffIndividuality(
                                fieldEnv,
                                (BuffUniqueValue_o *)comData,
                                v7);
    p_cachedBuffIndividuality->klass = (ServantStatusBattleListViewItem_c *)cachedBuffIndividuality;
    sub_1B88554(p_cachedBuffIndividuality, (int32_t)cachedBuffIndividuality, v8, v9);
  }
  return cachedBuffIndividuality;
}


bool __fastcall BattleFieldEnvironmentData_BGMData__IsRemove(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x19
  const MethodInfo *v6; // x1
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x8
  BattleServantData_o *ServantData; // x0
  System_Object_array *AllBGMChangeBuffArray; // x20
  System_Func_object__bool__o *v13; // x21

  if ( (byte_4A5D75F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleBuffData_BuffData____76089160);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__);
    sub_1B885B0(&BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo);
    byte_4A5D75F = 1;
  }
  v5 = sub_1B887FC(BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_14;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleFieldEnvironmentData_CommonData__get_UniqueVal(comData, v6);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = comData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)comData, v8, v9);
  v10 = *(_QWORD *)(v5 + 16);
  if ( !v10 )
    goto LABEL_14;
  v6 = (const MethodInfo *)*(unsigned int *)(v10 + 20);
  if ( ((unsigned int)v6 & 0x80000000) != 0 )
    return 0;
  if ( !data )
    goto LABEL_14;
  ServantData = BattleData__getServantData(data, (int32_t)v6, 0LL);
  if ( !ServantData )
    return 1;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleServantData__get_BuffData(ServantData, 0LL);
  if ( !comData )
LABEL_14:
    sub_1B8880C(comData, v6);
  AllBGMChangeBuffArray = (System_Object_array *)BattleBuffData__GetAllBGMChangeBuffArray(
                                                   (BattleBuffData_o *)comData,
                                                   0LL);
  v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__,
    0LL);
  return !BasicHelper__Any_object__48672124(
            AllBGMChangeBuffArray,
            (System_Func_T__bool__o *)v13,
            (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_BattleBuffData_BuffData____76089160);
}


void __fastcall BattleFieldEnvironmentData_BGMData__PreGetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  v3 = OverwriteBattleBgmData__ConvertToSaveData(this->fields._BgmData_k__BackingField, 0LL);
  this->fields.bgmSaveData = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.bgmSaveData, (int32_t)v3, v4, v5);
}


void __fastcall BattleFieldEnvironmentData_BGMData__PreSetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  int32_t v4; // w2
  int32_t v5; // w3

  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(this->fields.bgmSaveData, 0LL);
  this->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BgmData_k__BackingField,
    (int32_t)InstanceFromSaveData,
    v4,
    v5);
}


void __fastcall BattleFieldEnvironmentData_BGMData__UpdateActive(
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
  if ( (comData->fields.linkBuffUid & 0x80000000) != 0 )
    goto LABEL_7;
  if ( !fieldEnv
    || (CurBackGround_k__BackingField = fieldEnv->fields._CurBackGround_k__BackingField) == 0LL
    || (this = (BattleFieldEnvironmentData_BGMData_o *)CurBackGround_k__BackingField->fields.comData) == 0LL )
  {
LABEL_10:
    sub_1B8880C(this, fieldEnv);
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


OverwriteBattleBgmData_o *__fastcall BattleFieldEnvironmentData_BGMData__get_BgmData(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  return this->fields._BgmData_k__BackingField;
}


void __fastcall BattleFieldEnvironmentData_BGMData__set_BgmData(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._BgmData_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BgmData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0___ctor(
        BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0___IsRemove_b__0(
        BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !x
    || (changeBgmData = x->fields.changeBgmData) == 0LL
    || (this = (BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_o *)this->fields.val) == 0LL )
  {
    sub_1B8880C(this, x);
  }
  return BuffUniqueValue__IsMatch((BuffUniqueValue_o *)this, changeBgmData->fields.uniqueVal, 0LL);
}


void __fastcall BattleFieldEnvironmentData_BackgroundData___ctor(
        BattleFieldEnvironmentData_BackgroundData_o *this,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BgResourceData_o *__fastcall BattleFieldEnvironmentData_BackgroundData__get_BgResource(
        BattleFieldEnvironmentData_BackgroundData_o *this,
        const MethodInfo *method)
{
  BgResourceData_o *cachedBgResource; // x21
  int32_t v4; // w22
  int32_t id; // w23
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A5D75E & 1) == 0 )
  {
    sub_1B885B0(&BgResourceData_TypeInfo);
    byte_4A5D75E = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    v4 = *((_DWORD *)&this->fields.isActive + 1);
    id = this->fields.id;
    cachedBgResource = (BgResourceData_o *)sub_1B887FC(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, v4, id, 0LL);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cachedBgResource, (int32_t)cachedBgResource, v6, v7);
  }
  return cachedBgResource;
}


void __fastcall BattleFieldEnvironmentData_BaseData___ctor(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData_BaseData__UpdateActive(
        BattleFieldEnvironmentData_BaseData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall BattleFieldEnvironmentData_BaseData__get_Active(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  return this->fields.isActive;
}


int32_t __fastcall BattleFieldEnvironmentData_BaseData__get_GrantType(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_1B8880C(this, method);
  return comData->fields.grantType;
}


bool __fastcall BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_1B8880C(this, method);
  return comData->fields.linkBuffUid == -1;
}


void __fastcall BattleFieldEnvironmentData_CommonData___ctor(
        BattleFieldEnvironmentData_CommonData_o *this,
        const MethodInfo *method)
{
  this->fields.linkBuffUid = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData_CommonData__IsMatch(
        BattleFieldEnvironmentData_CommonData_o *this,
        BuffUniqueValue_o *val,
        const MethodInfo *method)
{
  BuffUniqueValue_o *UniqueVal; // x0
  __int64 v5; // x1

  if ( !val )
    return 0;
  UniqueVal = BattleFieldEnvironmentData_CommonData__get_UniqueVal(this, (const MethodInfo *)val);
  if ( !UniqueVal )
    sub_1B8880C(0LL, v5);
  return BuffUniqueValue__IsMatch(UniqueVal, val, 0LL);
}


void __fastcall BattleFieldEnvironmentData_CommonData__PreAddSetInfo(
        BattleFieldEnvironmentData_CommonData_o *this,
        int32_t addOrder,
        int32_t grantType,
        const MethodInfo *method)
{
  this->fields.addOrder = addOrder;
  this->fields.grantType = grantType;
}


BuffUniqueValue_o *__fastcall BattleFieldEnvironmentData_CommonData__get_UniqueVal(
        BattleFieldEnvironmentData_CommonData_o *this,
        const MethodInfo *method)
{
  BuffUniqueValue_o *cachedUniqueVal; // x21
  int32_t linkBuffUid; // w22
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5D75D & 1) == 0 )
  {
    sub_1B885B0(&BuffUniqueValue_TypeInfo);
    byte_4A5D75D = 1;
  }
  cachedUniqueVal = this->fields.cachedUniqueVal;
  if ( !cachedUniqueVal )
  {
    linkBuffUid = this->fields.linkBuffUid;
    cachedUniqueVal = (BuffUniqueValue_o *)sub_1B887FC(BuffUniqueValue_TypeInfo);
    BuffUniqueValue___ctor_42619804(cachedUniqueVal, linkBuffUid, -1, 0LL);
    this->fields.cachedUniqueVal = cachedUniqueVal;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.cachedUniqueVal, (int32_t)cachedUniqueVal, v5, v6);
  }
  return cachedUniqueVal;
}


void __fastcall BattleFieldEnvironmentData_SaveData___ctor(
        BattleFieldEnvironmentData_SaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D760 & 1) == 0 )
  {
    sub_1B885B0(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4A5D760 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleFieldEnvironmentData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleFieldEnvironmentData___c_TypeInfo->static_fields->__9 = (struct BattleFieldEnvironmentData___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall BattleFieldEnvironmentData___c___ctor(BattleFieldEnvironmentData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c___AddBGM_b__67_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___AddBGM_b__67_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___AddBackground_b__66_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BackgroundData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


int32_t __fastcall BattleFieldEnvironmentData___c___AddBgmFromChangeBgmBuffArray_b__59_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !buff || (changeBgmData = buff->fields.changeBgmData) == 0LL )
    sub_1B8880C(this, buff);
  return changeBgmData->fields.addBgmOrder;
}


bool __fastcall BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__58_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B8880C(this, 0LL);
  return !BattleServantData__isAlive(svt, 0, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__58_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1B8880C(this, svt);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleFieldEnvironmentData___c___EnumerateValidBgmChangeBuff_b__57_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1B8880C(this, svt);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0LL);
}


bool __fastcall BattleFieldEnvironmentData___c___ExecRemoveBuffAfterProc_b__87_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistDelProc(x, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c___GetBaseBgmList_b__68_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___GetFieldIndividuality_b__60_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BackgroundData_o *, Il2CppMethodPointer))x->klass->vtable._5_get_IsTargetBase.method)(
           x,
           x->klass->vtable._6_UpdateActive.methodPtr);
}


void __fastcall BattleFieldEnvironmentData___c___GetSaveData_b__7_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( !x )
    sub_1B8880C(this, 0LL);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0LL);
  x->fields.bgmSaveData = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&x->fields.bgmSaveData, (int32_t)v4, v5, v6);
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1B8880C(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__51_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1B8880C(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__69_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1B8880C(this, 0LL);
  return bgm->fields.isAfterReset;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__69_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))bgm->klass->vtable._5_get_IsTargetBase.method)(
           bgm,
           bgm->klass->vtable._6_UpdateActive.methodPtr);
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveBgmRelateBuff_b__71_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___SetSaveData_b__8_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( !x )
    sub_1B8880C(this, 0LL);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0LL);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&x->fields._BgmData_k__BackingField,
    (int32_t)InstanceFromSaveData,
    v5,
    v6);
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverChangeField_b__54_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_FieldChangeData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.isTakeOverNextWave;
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverPlayerServantChangeBgm_b__55_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___UpdateBgmBuffPriorityOnInitWave_b__56_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleFieldEnvironmentData___c_o *)x->fields.changeBgmData) == 0LL )
    sub_1B8880C(this, x);
  BattleBuffData_ChangeBgmData__UpdatePriorityForWaveStart((BattleBuffData_ChangeBgmData_o *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass62_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass62_0___GetQuestCommonIndividuality_b__0(
        BattleFieldEnvironmentData___c__DisplayClass62_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *bgRangeArray; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4A5D761 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_RangeValue___);
    sub_1B885B0(&System_Func_RangeValue__bool__TypeInfo);
    sub_1B885B0(&Method_BattleFieldEnvironmentData___c__DisplayClass62_1__GetQuestCommonIndividuality_b__1__);
    sub_1B885B0(&BattleFieldEnvironmentData___c__DisplayClass62_1_TypeInfo);
    byte_4A5D761 = 1;
  }
  v5 = sub_1B887FC(BattleFieldEnvironmentData___c__DisplayClass62_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = x;
  bgRangeArray = (System_Object_array *)this->fields.bgRangeArray;
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RangeValue__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass62_1__GetQuestCommonIndividuality_b__1__,
    0LL);
  return !BasicHelper__Any_object__48672124(
            bgRangeArray,
            (System_Func_T__bool__o *)v9,
            (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_RangeValue___);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass62_1___ctor(
        BattleFieldEnvironmentData___c__DisplayClass62_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass62_1___GetQuestCommonIndividuality_b__1(
        BattleFieldEnvironmentData___c__DisplayClass62_1_o *this,
        RangeValue_o *range,
        const MethodInfo *method)
{
  if ( !range )
    sub_1B8880C(this, 0LL);
  return RangeValue__IsInRange(range, this->fields.x, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass64_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass64_0___GetLinkBuffData_b__0(
        BattleFieldEnvironmentData___c__DisplayClass64_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BuffUniqueValue_o *uniqueVal; // x8

  if ( !buff || (uniqueVal = this->fields.uniqueVal) == 0LL )
    sub_1B8880C(this, buff);
  return buff->fields.addOrder == uniqueVal->fields.buffUniqueId;
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass70_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass70_0___RemoveRelateBuff_b__0(
        BattleFieldEnvironmentData___c__DisplayClass70_0_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1B8880C(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass70_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass70_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1B8880C(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass71_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass71_0___RemoveBgmRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass71_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1B8880C(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass87_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass87_0___ExecRemoveBuffAfterProc_b__1(
        BattleFieldEnvironmentData___c__DisplayClass87_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_1B8880C(this, x);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42772012(
    this->fields.__4__this,
    x,
    this->fields.isAddAfterTask,
    v3);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass92_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass92_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleFieldEnvironmentData___c__DisplayClass92_0___GetIndividualityExceptDelTarget_b__0(
        BattleFieldEnvironmentData___c__DisplayClass92_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *subList; // x0

  if ( (byte_4A5D762 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5D762 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_1B8880C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
}