void __fastcall BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_object__o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_HashSet_T__o *v27; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct BattlePerformance_o *perf; // x1
  struct BattleLogic_o *logic; // x1
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_49FE991 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__, data);
    sub_1B640C8(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo, v11);
    byte_49FE991 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                       data,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.backgroundList, (int32_t)v12, v13, v14);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v17;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgmList, (int32_t)v17, v18, v19);
  this->fields.addOrder = 1;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v20,
                                                       v21);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v22;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.addTaskList, (int32_t)v22, v23, v24);
  v27 = (System_Collections_Generic_HashSet_T__o *)sub_1B64314(
                                                     System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo,
                                                     v25,
                                                     v26);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v27,
    (const MethodInfo_3365B30 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.hashDelType, (int32_t)v27, v28, v29);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Data_k__BackingField = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Data_k__BackingField, (int32_t)data, v30, v31);
  if ( !data )
    sub_1B64324(v32);
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Perf_k__BackingField, (int32_t)perf, v33, v34);
  logic = data->fields.logic;
  this->fields._Logic_k__BackingField = logic;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._Logic_k__BackingField, (int32_t)logic, v37, v38);
}


BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__AddBGM(
        BattleFieldEnvironmentData_o *this,
        Generator_BGM_o *bgmGenerator,
        int32_t grantType,
        AddBgmArgument_o *arg,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 addOrder; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  BattleFieldEnvironmentData_BGMData_o *v24; // x21
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v26; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v28; // x8
  const MethodInfo *v29; // x1
  __int64 v30; // x2
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  BattleFieldEnvironmentData___c_c *v32; // x0
  System_Func_object__bool__o *_9__67_0; // x21
  Il2CppObject *v34; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  BattleFieldEnvironmentData___c_c *v41; // x8
  System_Collections_Generic_List_object__o *v42; // x21
  BattleFieldEnvironmentData_o *v43; // x20
  System_Predicate_object__o *_9__67_1; // x22
  Il2CppObject *v45; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x1
  __int64 v50; // x2
  System_Comparison_T__o *v51; // x21
  System_Collections_Generic_List_object__o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  BattleFieldEnvironmentData_o *v58; // x1
  Il2CppClass **v59; // x0

  v8 = this;
  if ( (byte_49FE9A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleFieldEnvironmentData_CompareData__, bgmGenerator);
    sub_1B640C8(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___, v11);
    sub_1B640C8(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__, v16);
    sub_1B640C8(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v17);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__AddBGM_b__67_0__, v18);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__AddBGM_b__67_1__, v19);
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v20);
    byte_49FE9A1 = 1;
  }
  addOrder = (unsigned int)v8->fields.addOrder;
  v8->fields.addOrder = addOrder + 1;
  if ( !bgmGenerator )
    goto LABEL_33;
  v24 = (BattleFieldEnvironmentData_BGMData_o *)((__int64 (__fastcall *)(Generator_BGM_o *, __int64, _QWORD, void *, const MethodInfo *))bgmGenerator->klass->vtable._4_Make.method)(
                                                  bgmGenerator,
                                                  addOrder,
                                                  (unsigned int)grantType,
                                                  bgmGenerator->klass[1]._1.image,
                                                  method);
  if ( arg )
    AddBgmArgument__ControlOtherBgmPriorityAtOverStageBgm(arg, v8, v24, v23);
  this = (BattleFieldEnvironmentData_o *)v8->fields.bgmList;
  if ( !this )
    goto LABEL_33;
  buffData = this->fields._buffData;
  v26 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_33;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= LODWORD(buffData->fields.passiveList) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v24,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v28[4] = (BattleBuffData_c *)v24;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v24, v22, (int32_t)v23);
  }
  if ( !v24 )
    goto LABEL_33;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))v24->klass->vtable._5_get_IsTargetBase.method)(
          v24,
          v24->klass->vtable._6_UpdateActive.methodPtr) & 1) == 0 )
    goto LABEL_32;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.bgmList;
  v32 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v32 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__67_0 = (System_Func_object__bool__o *)v32->static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v32->static_fields->__9;
    _9__67_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                v29,
                                                v30);
    System_Func_object__bool____ctor(_9__67_0, v34, Method_BattleFieldEnvironmentData___c__AddBGM_b__67_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__67_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__67_0, (int32_t)_9__67_0, v36, v37);
  }
  v38 = System_Linq_Enumerable__Where_object_(
          bgmList,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  this = (BattleFieldEnvironmentData_o *)System_Linq_Enumerable__ToList_object_(
                                           v38,
                                           (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
  v41 = BattleFieldEnvironmentData___c_TypeInfo;
  v42 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList;
  v43 = this;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v41 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__67_1 = (System_Predicate_object__o *)v41->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v41->static_fields->__9;
    _9__67_1 = (System_Predicate_object__o *)sub_1B64314(
                                               System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                               v39,
                                               v40);
    System_Predicate_object____ctor(_9__67_1, v45, Method_BattleFieldEnvironmentData___c__AddBGM_b__67_1__, 0LL);
    v46 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v46->__9__67_1 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__67_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->__9__67_1, (int32_t)_9__67_1, v47, v48);
  }
  if ( !v42 )
    goto LABEL_33;
  System_Collections_Generic_List_object___RemoveAll(
    v42,
    (System_Predicate_T__o *)_9__67_1,
    (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v51 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v49, v50);
  System_Comparison_object____ctor(v51, (Il2CppObject *)v8, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !v43
    || (System_Collections_Generic_List_object___Sort_55243320(
          (System_Collections_Generic_List_object__o *)v43,
          v51,
          (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__),
        v52 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList,
        this = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)v43,
                                                 0,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__),
        !v52)
    || (items = v52->fields._items,
        v56 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__,
        ++v52->fields._version,
        !items) )
  {
LABEL_33:
    sub_1B64324(this);
  }
  size = v52->fields._size;
  v58 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      (Il2CppObject *)this,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v59 = &items->obj.klass + size;
    v52->fields._size = size + 1;
    v59[4] = (Il2CppClass *)v58;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v59 + 4), (int32_t)v58, v53, v54);
  }
LABEL_32:
  BattleFieldEnvironmentData__SortBGM(v8, v29);
  return v8->fields._CurBGM_k__BackingField;
}


BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__AddBackground(
        BattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 addOrder; // x1
  Il2CppObject *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *backgroundList; // x21
  System_Predicate_object__o *v17; // x22
  Il2CppObject *klass; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v23; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v25; // x8
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1

  v6 = this;
  if ( (byte_49FE9A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__, bgGenerator);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, v7);
    sub_1B640C8(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v8);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__AddBackground_b__66_0__, v9);
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v10);
    byte_49FE9A0 = 1;
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
  v12 = (Il2CppObject *)this;
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
    v17 = *(System_Predicate_object__o **)&this[1].fields._CurBGM_k__BackingField[1].fields.isAfterReset;
    if ( !v17 )
    {
      if ( !LODWORD(this[1].fields.baseBgm) )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
      }
      klass = (Il2CppObject *)this[1].fields._CurBGM_k__BackingField->klass;
      v17 = (System_Predicate_object__o *)sub_1B64314(
                                            System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                            v13,
                                            v14);
      System_Predicate_object____ctor(v17, klass, Method_BattleFieldEnvironmentData___c__AddBackground_b__66_0__, 0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__66_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v17;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__66_0, (int32_t)v17, v20, v21);
    }
    if ( backgroundList )
    {
      System_Collections_Generic_List_object___RemoveAll(
        backgroundList,
        (System_Predicate_T__o *)v17,
        (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
      goto LABEL_14;
    }
LABEL_20:
    sub_1B64324(this);
  }
LABEL_14:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_20;
  buffData = this->fields._buffData;
  v23 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_20;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= LODWORD(buffData->fields.passiveList) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v12,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v25[4] = (BattleBuffData_c *)v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v12, v14, v15);
  }
  BattleFieldEnvironmentData__SortBackGround(v6, v26);
  BattleFieldEnvironmentData__SortBGM(v6, v27);
  return v6->fields._CurBackGround_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *changeBgmBuffArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  bool IsNullOrEmpty; // w19
  BattleFieldEnvironmentData___c_c *v15; // x0
  System_Func_object__int__o *_9__59_0; // x22
  Il2CppObject *v17; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x20
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x20
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  BattleBuffData_ChangeBgmData_o *v37; // x0
  Generator_BGM_o *v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0

  if ( (byte_49FE999 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___, changeBgmBuffArray);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__59_0__, v10);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_49FE999 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)changeBgmBuffArray, 0LL);
  if ( !IsNullOrEmpty )
  {
    v15 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v15 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__59_0 = (System_Func_object__int__o *)v15->static_fields->__9__59_0;
    if ( !_9__59_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__59_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__int__TypeInfo, v12, v13);
      System_Func_object__int____ctor(
        _9__59_0,
        v17,
        Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__59_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__59_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__59_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__59_0, (int32_t)_9__59_0, v19, v20);
    }
    v21 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)changeBgmBuffArray,
            (System_Func_TSource__TKey__o *)_9__59_0,
            (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    if ( !v21 )
      sub_1B64324(0LL);
    klass = v21->klass;
    v23 = v21;
    v24 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1BB60A8(v21, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
            v23,
            *(_QWORD *)(p_method + 8));
    if ( !v27 )
      sub_1B64324(0LL);
    while ( 1 )
    {
      v28 = *(_QWORD *)v27;
      v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v29;
          v30 += 4;
          if ( !v29 )
            goto LABEL_22;
        }
        v31 = v28 + 16LL * *v30 + 312;
      }
      else
      {
LABEL_22:
        v31 = sub_1BB60A8(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
        break;
      v32 = *(_QWORD *)v27;
      v33 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v34 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_29;
        }
        v35 = v32 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_29:
        v35 = sub_1BB60A8(v27, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
      if ( !v36 )
        sub_1B64324(0LL);
      v37 = *(BattleBuffData_ChangeBgmData_o **)(v36 + 376);
      if ( !v37 )
        sub_1B64324(0LL);
      v38 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(v37, this->fields._Data_k__BackingField, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v38,
        2LL,
        0LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
    v39 = *(_QWORD *)v27;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_38;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_38:
      v42 = sub_1BB60A8(v27, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v42)(v27, *(_QWORD *)(v42 + 8));
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

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buff);
  if ( !BuffData )
    sub_1B64324(0LL);
  BattleBuffData__addBuff(BuffData, buff, 1, unFixBuff, 0LL);
}


void __fastcall BattleFieldEnvironmentData__AddLastInterruptTasks(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *addTaskList; // x0
  struct System_Collections_Generic_List_BattleLogicTask__o *v10; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_49FE9AB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__, logic);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FE9AB = 1;
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
                                                                   (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0LL);
        v10 = this->fields.addTaskList;
        if ( v10 )
        {
          size = v10->fields._size;
          v12 = v10->fields._version + 1;
          v10->fields._size = 0;
          v10->fields._version = v12;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
          addTaskList = (System_Collections_Generic_List_object__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_Int32Enum___Clear(
              (System_Collections_Generic_HashSet_T__o *)addTaskList,
              (const MethodInfo_33661C4 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_15:
      sub_1B64324(addTaskList);
    }
  }
}


void __fastcall BattleFieldEnvironmentData__AddPlayerServantChangeBgmWhenContinue(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleFieldEnvironmentData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *player_datalist; // x20
  BattleFieldEnvironmentData___c_c *v13; // x0
  System_Func_object__bool__o *_9__58_0; // x21
  Il2CppObject *v15; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  BattleFieldEnvironmentData___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x20
  System_Func_object__object__o *_9__58_1; // x21
  Il2CppObject *v25; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Object_array *v30; // x1
  const MethodInfo *v31; // x2

  v3 = this;
  if ( (byte_49FE998 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v5);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v6);
    sub_1B640C8(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo, v7);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_0__, v8);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_1__, v9);
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v10);
    byte_49FE998 = 1;
  }
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B64324(this);
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField->fields.player_datalist;
  v13 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v13 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__58_0 = (System_Func_object__bool__o *)v13->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__58_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, method, v2);
    System_Func_object__bool____ctor(
      _9__58_0,
      v15,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_BattleServantData__bool__o *)_9__58_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__58_0, (int32_t)_9__58_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          player_datalist,
          (System_Func_TSource__bool__o *)_9__58_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v22 = BattleFieldEnvironmentData___c_TypeInfo;
  v23 = v19;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v22 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__58_1 = (System_Func_object__object__o *)v22->static_fields->__9__58_1;
  if ( !_9__58_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__58_1 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo,
                                                  v20,
                                                  v21);
    System_Func_object__object____ctor(
      _9__58_1,
      v25,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_1__,
      0LL);
    v26 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v26->__9__58_1 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__58_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v26->__9__58_1, (int32_t)_9__58_1, v27, v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v23,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__58_1,
                                                               (const MethodInfo_2E6B930 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          v29,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v3, (BattleBuffData_BuffData_array *)v30, v31);
}


void __fastcall BattleFieldEnvironmentData__AddRemoveProcTask(
        BattleFieldEnvironmentData_o *this,
        BattleLogicTask_o *task,
        int32_t addType,
        bool isNotDuplicated,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_HashSet_T__o *hashDelType; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Int32_array *buckets; // x8
  _QWORD *v15; // x9
  __int64 slots_low; // x10
  __int64 v17; // x8

  if ( (byte_49FE9AC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__, task);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v10);
    byte_49FE9AC = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_12;
    if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
           hashDelType,
           addType,
           (const MethodInfo_3366224 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_Int32Enum___Add(
          hashDelType,
          addType,
          (const MethodInfo_3366D34 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.addTaskList) == 0LL)
    || (buckets = hashDelType->fields._buckets,
        v15 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++HIDWORD(hashDelType->fields._slots),
        !buckets) )
  {
LABEL_12:
    sub_1B64324(hashDelType);
  }
  slots_low = SLODWORD(hashDelType->fields._slots);
  if ( (unsigned int)slots_low >= buckets->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)hashDelType,
      (Il2CppObject *)task,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = (__int64)buckets + 8 * slots_low;
    LODWORD(hashDelType->fields._slots) = slots_low + 1;
    *(_QWORD *)(v17 + 32) = task;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)task, v12, v13);
  }
}


void __fastcall BattleFieldEnvironmentData__AddServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *AllValidBGMChangeBuffArray; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Action_object__o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_49FE9B1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleBuffData_BuffData__TypeInfo, svtData);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v5);
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(
                                             &Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__99_0__,
                                             v6);
    byte_49FE9B1 = 1;
  }
  if ( !svtData || (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(svtData, 0LL)) == 0LL )
    sub_1B64324(this);
  AllValidBGMChangeBuffArray = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0LL);
  v10 = (System_Action_object__o *)sub_1B64314(System_Action_BattleBuffData_BuffData__TypeInfo, v8, v9);
  System_Action_object____ctor(v10, v4, Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__99_0__, 0LL);
  BasicHelper__ForEach_object_(
    AllValidBGMChangeBuffArray,
    (System_Action_T__o *)v10,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateBgmTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  PlayCurrentBgmLogicTask_o *v4; // x20
  const MethodInfo *v5; // x4

  if ( (byte_49FE9B3 & 1) == 0 )
  {
    sub_1B640C8(&PlayCurrentBgmLogicTask_TypeInfo, method);
    byte_49FE9B3 = 1;
  }
  v4 = (PlayCurrentBgmLogicTask_o *)sub_1B64314(PlayCurrentBgmLogicTask_TypeInfo, method, v2);
  PlayCurrentBgmLogicTask___ctor(v4, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v4, 3, 1, v5);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateViewTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UpdateFieldViewBattleLogicTask_o *v4; // x20
  const MethodInfo *v5; // x4

  if ( (byte_49FE9B2 & 1) == 0 )
  {
    sub_1B640C8(&UpdateFieldViewBattleLogicTask_TypeInfo, method);
    byte_49FE9B2 = 1;
  }
  v4 = (UpdateFieldViewBattleLogicTask_o *)sub_1B64314(UpdateFieldViewBattleLogicTask_TypeInfo, method, v2);
  UpdateFieldViewBattleLogicTask___ctor(v4, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v4, 2, 1, v5);
}


bool __fastcall BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_42531456; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  System_Int32_array *BuffIndividualities; // x0

  Individualities_42531456 = buffIndiv;
  if ( opSvt )
    Individualities_42531456 = BattleServantData__getIndividualities_42531456(opSvt, buffIndiv, 0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buffIndiv);
  v8 = BattleFieldEnvironmentData__get_BuffData(this, v7);
  if ( !v8
    || (BuffIndividualities = BattleBuffData__getBuffIndividualities(v8, 1, 0, 0, 0, 0LL),
        v8 = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, System_Int32_array *, Il2CppMethodPointer))this->klass->vtable._4_GetFieldIndividuality.method)(
                                   this,
                                   BuffIndividualities,
                                   this->klass->vtable._5_AddBackground.methodPtr),
        !BuffData) )
  {
    sub_1B64324(v8);
  }
  return BattleBuffData__checkActBuff(BuffData, 105, (System_Int32_array *)v8, Individualities_42531456, 0LL);
}


void __fastcall BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v4; // x1
  const MethodInfo *v5; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_1B64324(0LL);
  v4 = BattleBuffData__usedProgressing(BuffData, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v4, 1, v5);
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
    sub_1B64324(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleFieldEnvironmentData___c_c *v7; // x0
  System_Func_object__object__o *_9__57_0; // x20
  Il2CppObject *v9; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FE997 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___, method);
    sub_1B640C8(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo, v4);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__57_0__, v5);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v6);
    byte_49FE997 = 1;
  }
  if ( !servantEnumerable )
    return 0LL;
  v7 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__57_0 = (System_Func_object__object__o *)v7->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__57_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo,
                                                  method,
                                                  v2);
    System_Func_object__object____ctor(
      _9__57_0,
      v9,
      Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__57_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__57_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__57_0, (int32_t)_9__57_0, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                                (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__57_0,
                                                                                (const MethodInfo_2E6B930 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
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
  if ( (byte_49FE9AD & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(
                                             &Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__,
                                             removeBuffInfo);
    byte_49FE9AD = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
    sub_1B64324(this);
  }
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)this,
         (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42420844(
    v6,
    (BattleBuffData_BuffData_array *)v7,
    isAddAfterTask,
    v8);
  return removeBuffInfo;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42420844(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x21
  __int64 v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  BattleFieldEnvironmentData___c_c *v20; // x0
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v22; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_T__o *v26; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  System_Action_object__o *v29; // x22
  const MethodInfo *v30; // x1

  if ( (byte_49FE9AE & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleBuffData_BuffData__TypeInfo, removeBuffArray);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v8);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__87_0__, v10);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__DisplayClass87_0__ExecRemoveBuffAfterProc_b__1__, v11);
    sub_1B640C8(&BattleFieldEnvironmentData___c__DisplayClass87_0_TypeInfo, v12);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v13);
    byte_49FE9AE = 1;
  }
  v14 = sub_1B64314(BattleFieldEnvironmentData___c__DisplayClass87_0_TypeInfo, removeBuffArray, isAddAfterTask);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1B64324(v15);
  *(_QWORD *)(v14 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v16, v17);
  *(_BYTE *)(v14 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0LL) )
  {
    v20 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v20 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__87_0 = (System_Func_object__bool__o *)v20->static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__87_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                  v18,
                                                  v19);
      System_Func_object__bool____ctor(
        _9__87_0,
        v22,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__87_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__87_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__87_0, (int32_t)_9__87_0, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v29 = (System_Action_object__o *)sub_1B64314(System_Action_BattleBuffData_BuffData__TypeInfo, v27, v28);
    System_Action_object____ctor(
      v29,
      (Il2CppObject *)v14,
      Method_BattleFieldEnvironmentData___c__DisplayClass87_0__ExecRemoveBuffAfterProc_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v26,
      (System_Action_T__o *)v29,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v30);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42421448(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_1B64324(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleFieldEnvironmentData___c_c *v8; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  System_Func_object__bool__o *_9__68_0; // x20
  Il2CppObject *v11; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_49FE9A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___, v4);
    sub_1B640C8(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__68_0__, v6);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v7);
    byte_49FE9A2 = 1;
  }
  v8 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v8 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__68_0 = (System_Func_object__bool__o *)v8->static_fields->__9__68_0;
  if ( !_9__68_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__68_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                method,
                                                v2);
    System_Func_object__bool____ctor(
      _9__68_0,
      v11,
      Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__68_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__68_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__68_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__68_0, (int32_t)_9__68_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
          (System_Func_TSource__bool__o *)_9__68_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  return (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)System_Linq_Enumerable__ToList_object_(
                                                                                    v15,
                                                                                    (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
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
    sub_1B64324(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  const MethodInfo *v8; // x1
  void *BuffData; // x0
  __int64 v10; // x1
  int v11; // w8
  void *v12; // x20
  unsigned int v13; // w21
  __int64 v14; // x23

  if ( (byte_49FE99D & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_49FE99D = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v8);
  if ( !BuffData )
    goto LABEL_15;
  BuffData = BattleBuffData__GetFieldChangeArray((BattleBuffData_o *)BuffData, 0LL);
  if ( !BuffData )
    goto LABEL_15;
  v11 = *((_DWORD *)BuffData + 6);
  v12 = BuffData;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= v11 )
        sub_1B6432C(BuffData, v10);
      v14 = *((_QWORD *)v12 + (int)v13 + 4);
      if ( !v14 )
        break;
      BuffData = (void *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v14 + 56), 0LL);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v7,
          *(System_Collections_Generic_IEnumerable_T__o **)(v14 + 56),
          (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1B64324(BuffData);
  }
LABEL_13:
  if ( !v7 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetCommonFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x21
  System_Int32_array *IsNullOrEmpty; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_49FE9B4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, individuality);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_49FE9B4 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   individuality,
                                                   addIndiv);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)individuality,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v11);
    if ( !v9 )
LABEL_11:
      sub_1B64324(IsNullOrEmpty);
  }
  else
  {
    if ( !v9 )
      goto LABEL_11;
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v12);
  }
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v9, v13);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  BattleFieldEnvironmentData___c_c *v15; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x22
  System_Func_object__bool__o *_9__60_0; // x23
  Il2CppObject *v18; // x24
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_T__o *baseBackground; // x0
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  const MethodInfo *v24; // x1
  System_Collections_ICollection_o *QuestCommonIndividuality; // x0
  const MethodInfo *v26; // x1
  System_Int32_array *v27; // x1
  const MethodInfo *v28; // x3

  if ( (byte_49FE99A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____75749264,
      addIndiv);
    sub_1B640C8(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__60_0__, v10);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_49FE99A = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    addIndiv,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = this->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v15 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__60_0 = (System_Func_object__bool__o *)v15->static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__60_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo,
                                                v13,
                                                v14);
    System_Func_object__bool____ctor(
      _9__60_0,
      v18,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__60_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__60_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__60_0, (int32_t)_9__60_0, v20, v21);
  }
  baseBackground = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                                                                    (System_Func_TSource__bool__o *)_9__60_0,
                                                                    (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____75749264);
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
    if ( v12 )
      goto LABEL_17;
LABEL_19:
    sub_1B64324(baseBackground);
  }
  if ( !v12 )
    goto LABEL_19;
  System_Collections_Generic_List_int___AddRange(
    v12,
    monitor,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  QuestCommonIndividuality = (System_Collections_ICollection_o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                   this,
                                                                   v24);
  if ( !BasicHelper__IsNullOrEmpty(QuestCommonIndividuality, 0LL) )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                      this,
                                                                      v26);
LABEL_17:
    System_Collections_Generic_List_int___AddRange(
      v12,
      baseBackground,
      (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v27 = System_Collections_Generic_List_int___ToArray(
          v12,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, v27, addIndiv, v28);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  const MethodInfo *v12; // x1
  BattleBuffData_o *BuffData; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_int__o **v16; // x22
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  System_Predicate_int__o *v20; // x20

  if ( (byte_49FE9B0 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__AddRange__, individualityList);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__RemoveAll__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v8);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__DisplayClass92_0__GetIndividualityExceptDelTarget_b__0__, v9);
    sub_1B640C8(&BattleFieldEnvironmentData___c__DisplayClass92_0_TypeInfo, v10);
    byte_49FE9B0 = 1;
  }
  v11 = sub_1B64314(BattleFieldEnvironmentData___c__DisplayClass92_0_TypeInfo, individualityList, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v12);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0LL, 0LL, 1, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = BuffData;
  v16 = (System_Collections_Generic_List_int__o **)(v11 + 16);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)BuffData, v14, v15);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v17 = *v16;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0LL);
  if ( !v17 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_34900E8 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v16 )
    goto LABEL_13;
  if ( (*v16)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_1B64324(BuffData);
  }
  v20 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v18, v19);
  System_Predicate_int____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_BattleFieldEnvironmentData___c__DisplayClass92_0__GetIndividualityExceptDelTarget_b__0__,
    0LL);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v20,
    (const MethodInfo_34915A4 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleFieldEnvironmentData__GetLinkBuffData(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  BattleData_o *Data_k__BackingField; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x8
  const MethodInfo *v13; // x1
  BattleServantData_o *ServantData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v16; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_object__bool__o *v19; // x21

  if ( (byte_49FE99E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____75749248, uniqueVal);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__DisplayClass64_0__GetLinkBuffData_b__0__, v6);
    sub_1B640C8(&BattleFieldEnvironmentData___c__DisplayClass64_0_TypeInfo, v7);
    byte_49FE99E = 1;
  }
  v8 = sub_1B64314(BattleFieldEnvironmentData___c__DisplayClass64_0_TypeInfo, uniqueVal, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_12;
  *(_QWORD *)(v8 + 16) = uniqueVal;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)uniqueVal, v10, v11);
  v12 = *(_QWORD *)(v8 + 16);
  if ( !v12 )
    goto LABEL_12;
  v13 = (const MethodInfo *)*(unsigned int *)(v12 + 20);
  if ( ((unsigned int)v13 & 0x80000000) == 0 )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( Data_k__BackingField )
    {
      ServantData = BattleData__getServantData(Data_k__BackingField, (int32_t)v13, 0LL);
      if ( ServantData )
      {
        BuffData = BattleServantData__get_BuffData(ServantData, 0LL);
        if ( BuffData )
          goto LABEL_9;
      }
      return 0LL;
    }
LABEL_12:
    sub_1B64324(Data_k__BackingField);
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v13);
  if ( BuffData )
  {
LABEL_9:
    v16 = BattleBuffData__AllBuffEnumerable(BuffData, 0LL);
    v19 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v17, v18);
    System_Func_object__bool____ctor(
      v19,
      (Il2CppObject *)v8,
      Method_BattleFieldEnvironmentData___c__DisplayClass64_0__GetLinkBuffData_b__0__,
      0LL);
    return (BattleBuffData_BuffData_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                                          (System_Func_TSource__bool__o *)v19,
                                          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____75749248);
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

  if ( (byte_49FE99F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, uniqueVal);
    byte_49FE99F = 1;
  }
  LinkBuffData = BattleFieldEnvironmentData__GetLinkBuffData(this, uniqueVal, method);
  if ( !LinkBuffData || (result = BattleBuffData_BuffData__GetIndividualty(LinkBuffData, 0, 0, 0, 0LL)) == 0LL )
  {
    v7 = Method_System_Array_Empty_int___;
    v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v8 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v8 = v7[7];
    }
    v9 = *(_QWORD *)(v8 + 16);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BB5FA4(v9);
    if ( !*(_DWORD *)(v9 + 224) )
      j_il2cpp_runtime_class_init_0(v9);
    v10 = *(_QWORD *)(v7[7] + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BB5FA4(v10);
    return **(System_Int32_array ***)(v10 + 184);
  }
  return result;
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetQuestCommonIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x19
  const MethodInfo *v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *QuestPhaseIndividuality; // x20
  Il2CppObject *Value; // x21
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0
  System_Object_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_int__bool__o *v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_49FE99C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v5);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v6);
    sub_1B640C8(&Method_JsonManager_DeserializeArray_RangeValue___, v7);
    sub_1B640C8(&JsonManager_TypeInfo, v8);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__DisplayClass62_0__GetQuestCommonIndividuality_b__0__, v9);
    sub_1B640C8(&BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_3010/*"BG_INDIVIDUALITY_VALUE_RANGE"*/, v11);
    byte_49FE99C = 1;
  }
  v12 = sub_1B64314(BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  QuestPhaseIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                                                                                   this,
                                                                                   v13);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestPhaseIndividuality, 0LL)
    || (Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3010/*"BG_INDIVIDUALITY_VALUE_RANGE"*/, 0LL),
        System_String__IsNullOrEmpty((System_String_o *)Value, 0LL)) )
  {
    v16 = Method_System_Array_Empty_int___;
    v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v17 )
    {
      sub_1BB6000(Method_System_Array_Empty_int___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1BB5FA4(v18);
    if ( !*(_DWORD *)(v18 + 224) )
      j_il2cpp_runtime_class_init_0(v18);
    v19 = *(_QWORD *)(v16[7] + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1BB5FA4(v19);
    return **(System_Int32_array ***)(v19 + 184);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v21 = JsonManager__DeserializeArray_object_(
            Value,
            (const MethodInfo_2E9EEC0 *)Method_JsonManager_DeserializeArray_RangeValue___);
    if ( !v12 )
      sub_1B64324(v21);
    *(_QWORD *)(v12 + 16) = v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)v21, v22, v23);
    v26 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v24, v25);
    System_Func_int__bool____ctor(
      v26,
      (Il2CppObject *)v12,
      Method_BattleFieldEnvironmentData___c__DisplayClass62_0__GetQuestCommonIndividuality_b__0__,
      0LL);
    v27 = System_Linq_Enumerable__Where_int_(
            QuestPhaseIndividuality,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v27,
             (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_49FE99B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_int___, method);
    byte_49FE99B = 1;
  }
  p_questPhaseIndividuality = &this->fields.questPhaseIndividuality;
  result = this->fields.questPhaseIndividuality;
  if ( !result )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1B64324(0LL);
    PrioredIndividuality = BattleData__GetPrioredIndividuality(Data_k__BackingField, 0LL);
    *p_questPhaseIndividuality = PrioredIndividuality;
    sub_1B6406C(
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
        sub_1BB6000(Method_System_Array_Empty_int___);
        v10 = v9[7];
      }
      v11 = *(_QWORD *)(v10 + 16);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1BB5FA4(v11);
      if ( !*(_DWORD *)(v11 + 224) )
        j_il2cpp_runtime_class_init_0(v11);
      v12 = *(_QWORD *)(v9[7] + 16LL);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1BB5FA4(v12);
      return **(System_Int32_array ***)(v12 + 184);
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
FieldBuffDeleteProcess_o *__fastcall BattleFieldEnvironmentData__GetRemoveBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        int32_t delAfterProcType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  _QWORD *v5; // x8
  Il2CppObject *v6; // x19

  if ( (byte_49FE9AF & 1) == 0 )
  {
    sub_1B640C8(&ChangeBgmBuffDeleteProcess_TypeInfo, *(_QWORD *)&delAfterProcType);
    sub_1B640C8(&FieldChangeBuffDeleteProcess_TypeInfo, v4);
    byte_49FE9AF = 1;
  }
  if ( delAfterProcType == 1 )
  {
    v5 = &FieldChangeBuffDeleteProcess_TypeInfo;
  }
  else
  {
    if ( delAfterProcType != 3 )
      return 0LL;
    v5 = &ChangeBgmBuffDeleteProcess_TypeInfo;
  }
  v6 = (Il2CppObject *)sub_1B64314(*v5, *(_QWORD *)&delAfterProcType, method);
  System_Object___ctor(v6, 0LL);
  return (FieldBuffDeleteProcess_o *)v6;
}


BattleFieldEnvironmentData_SaveData_o *__fastcall BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *backgroundList; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v12; // x21
  Il2CppObject *v13; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Object_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_49FE98D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__, v6);
    sub_1B640C8(&BattleFieldEnvironmentData_SaveData_TypeInfo, v7);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, v8);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v9);
    byte_49FE98D = 1;
  }
  backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v12 = *(System_Action_object__o **)(*((_QWORD *)backgroundList + 23) + 8LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)backgroundList + 56) )
    {
      j_il2cpp_runtime_class_init_0(backgroundList);
      backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)backgroundList + 23);
    v12 = (System_Action_object__o *)sub_1B64314(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, method, v2);
    System_Action_object____ctor(v12, v13, Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__7_0, (int32_t)v12, v15, v16);
  }
  if ( !bgmList )
    goto LABEL_15;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v12,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v19 = sub_1B64314(BattleFieldEnvironmentData_SaveData_TypeInfo, v17, v18);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_15;
  backgroundList = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)backgroundList,
                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v19
    || (*(_QWORD *)(v19 + 16) = backgroundList,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 16), (int32_t)backgroundList, v20, v21),
        (backgroundList = this->fields.bgmList) == 0LL)
    || (v22 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)backgroundList,
                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v19 + 24) = v22,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 24), (int32_t)v22, v23, v24),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v25)) == 0LL) )
  {
LABEL_15:
    sub_1B64324(backgroundList);
  }
  SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0LL);
  *(_QWORD *)(v19 + 32) = SaveData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)SaveData, v27, v28);
  result = (BattleFieldEnvironmentData_SaveData_o *)v19;
  *(_DWORD *)(v19 + 40) = this->fields.addOrder;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleData_o *Data_k__BackingField; // x20
  StageEntity_o *StageEntity; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  Generator_BGFromQuestPhase_o *v16; // x22
  const MethodInfo *v17; // x3
  StageEntity_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  Generator_BGFromStage_o *v21; // x21
  const MethodInfo *v22; // x2
  BattleData_o *v23; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  __int64 v26; // x1
  __int64 v27; // x2
  Generator_BGM_o *v28; // x23
  const MethodInfo *v29; // x6
  __int64 v30; // x1
  __int64 v31; // x2
  BattleFieldEnvironmentData___c_c *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *backgroundList; // x20
  System_Func_object__bool__o *_9__51_0; // x21
  Il2CppObject *v35; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  __int64 v42; // x1
  __int64 v43; // x2
  BattleFieldEnvironmentData___c_c *v44; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  System_Func_object__bool__o *_9__51_1; // x21
  Il2CppObject *v47; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3

  v2 = this;
  if ( (byte_49FE992 & 1) == 0 )
  {
    sub_1B640C8(&Generator_BGFromQuestPhase_TypeInfo, method);
    sub_1B640C8(&Generator_BGFromStage_TypeInfo, v3);
    sub_1B640C8(&Generator_BGM_TypeInfo, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____75749256, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____75749264, v6);
    sub_1B640C8(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v7);
    sub_1B640C8(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v8);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__InitStageField_b__51_0__, v9);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__InitStageField_b__51_1__, v10);
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_49FE992 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v2->fields._Data_k__BackingField, 0LL),
        v16 = (Generator_BGFromQuestPhase_o *)sub_1B64314(Generator_BGFromQuestPhase_TypeInfo, v14, v15),
        Generator_BGFromQuestPhase___ctor(v16, Data_k__BackingField, StageEntity, v17),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
          v2,
          v16,
          1LL,
          v2->klass->vtable._6_AddBGM.methodPtr),
        (this = (BattleFieldEnvironmentData_o *)v2->fields._Data_k__BackingField) == 0LL)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  v18 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0LL) >= 1 )
  {
    v21 = (Generator_BGFromStage_o *)sub_1B64314(Generator_BGFromStage_TypeInfo, v19, v20);
    Generator_BGFromStage___ctor(v21, v18, v22);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, Il2CppMethodPointer))v2->klass->vtable._5_AddBackground.method)(
      v2,
      v21,
      1LL,
      v2->klass->vtable._6_AddBGM.methodPtr);
  }
  v23 = v2->fields._Data_k__BackingField;
  bgmId = v18->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v18, 0, 0LL);
  v28 = (Generator_BGM_o *)sub_1B64314(Generator_BGM_TypeInfo, v26, v27);
  Generator_BGM___ctor(v28, v23, bgmId, 0, PriorityBgm, 0LL, v29);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))v2->klass->vtable._6_AddBGM.method)(
    v2,
    v28,
    1LL,
    0LL,
    v2->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  v32 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v32 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__51_0 = (System_Func_object__bool__o *)v32->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__51_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo,
                                                v30,
                                                v31);
    System_Func_object__bool____ctor(
      _9__51_0,
      v35,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__51_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__51_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__51_0, (int32_t)_9__51_0, v37, v38);
  }
  v39 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          backgroundList,
          (System_Func_TSource__bool__o *)_9__51_0,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____75749264);
  v2->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v39;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.baseBackground, (int32_t)v39, v40, v41);
  v44 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v44 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__51_1 = (System_Func_object__bool__o *)v44->static_fields->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v44->static_fields->__9;
    _9__51_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                v42,
                                                v43);
    System_Func_object__bool____ctor(
      _9__51_1,
      v47,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__51_1__,
      0LL);
    v48 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v48->__9__51_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__51_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v48->__9__51_1, (int32_t)_9__51_1, v49, v50);
  }
  v51 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
          bgmList,
          (System_Func_TSource__bool__o *)_9__51_1,
          (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____75749256);
  v2->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v51;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.baseBgm, (int32_t)v51, v52, v53);
}


bool __fastcall BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1B64324(this);
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
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_49FE9AA & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, method);
    byte_49FE9AA = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_1B64324(Instance);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int *v11; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v13; // x21
  Il2CppObject *v14; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  BattleFieldEnvironmentData___c_c *v20; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v21; // x20
  System_Func_object__bool__o *_9__69_1; // x21
  Il2CppObject *v23; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *baseBgm; // x1
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8

  if ( (byte_49FE9A3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___, method);
    sub_1B640C8(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v6);
    sub_1B640C8(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v7);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_0__, v8);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_1__, v9);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v10);
    byte_49FE9A3 = 1;
  }
  v11 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v11 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
  }
  v13 = *(System_Predicate_object__o **)(*((_QWORD *)v11 + 23) + 136LL);
  if ( !v13 )
  {
    if ( !v11[56] )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)**((_QWORD **)v11 + 23);
    v13 = (System_Predicate_object__o *)sub_1B64314(
                                          System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                          method,
                                          v2);
    System_Predicate_object____ctor(v13, v14, Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__69_0, (int32_t)v13, v16, v17);
  }
  if ( !bgmList )
    goto LABEL_23;
  System_Collections_Generic_List_object___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)v13,
    (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v20 = BattleFieldEnvironmentData___c_TypeInfo;
  v21 = this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v20 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__69_1 = (System_Func_object__bool__o *)v20->static_fields->__9__69_1;
  if ( !_9__69_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__69_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                v18,
                                                v19);
    System_Func_object__bool____ctor(
      _9__69_1,
      v23,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_1__,
      0LL);
    v24 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v24->__9__69_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__69_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->__9__69_1, (int32_t)_9__69_1, v25, v26);
  }
  if ( System_Linq_Enumerable__Count_object__48591404(
         (System_Collections_Generic_IEnumerable_TSource__o *)v21,
         (System_Func_TSource__bool__o *)_9__69_1,
         (const MethodInfo_2E5722C *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v11 = (int *)this->fields.bgmList;
    if ( v11 )
    {
      baseBgm = (Il2CppObject *)this->fields.baseBgm;
      v31 = *((_QWORD *)v11 + 2);
      v32 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
      ++v11[7];
      if ( v31 )
      {
        v33 = v11[6];
        if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v11,
            baseBgm,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * v33;
          v11[6] = v33 + 1;
          *(_QWORD *)(v34 + 32) = baseBgm;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v34 + 32), (int32_t)baseBgm, v28, v29);
        }
        goto LABEL_22;
      }
    }
LABEL_23:
    sub_1B64324(v11);
  }
LABEL_22:
  BattleFieldEnvironmentData__SortBGM(this, v27);
  return this->fields._CurBGM_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v7; // x21
  __int64 v8; // x0
  const MethodInfo *v9; // x1

  if ( (byte_49FE9A6 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__75_0__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v4);
    sub_1B640C8(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v5);
    byte_49FE9A6 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v7 = (System_Predicate_object__o *)sub_1B64314(
                                       System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                       method,
                                       v2);
  System_Predicate_object____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__75_0__,
    0LL);
  if ( !bgmList )
    sub_1B64324(v8);
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v7,
         (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) >= 1 )
    BattleFieldEnvironmentData__SortBGM(this, v9);
  return BattleFieldEnvironmentData__get_IsChangeBgm(this, v9);
}


void __fastcall BattleFieldEnvironmentData__RemoveBgmRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  BattleFieldEnvironmentData___c_c *v18; // x0
  System_Func_object__bool__o *_9__71_0; // x21
  Il2CppObject *v20; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  System_Func_object__object__o *v27; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v28; // x0
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v30; // x20
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v34; // x20
  int i; // w24
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x21
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_Collections_Generic_List_object__o *bgmList; // x22
  __int64 v51; // x1
  __int64 v52; // x2
  System_Predicate_T__o *v53; // x23
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  const MethodInfo *v59; // x1

  if ( (byte_49FE9A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__, buffArray);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v5);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo, v6);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, v10);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v12);
    sub_1B640C8(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v13);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__71_0__, v14);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__DisplayClass71_0__RemoveBgmRelateBuff_b__1__, v15);
    sub_1B640C8(&BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo, v16);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v17);
    byte_49FE9A5 = 1;
  }
  v18 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v18 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__71_0 = (System_Func_object__bool__o *)v18->static_fields->__9__71_0;
  if ( !_9__71_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v18->static_fields->__9;
    _9__71_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                buffArray,
                                                method);
    System_Func_object__bool____ctor(
      _9__71_0,
      v20,
      Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__71_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__71_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__71_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__71_0, (int32_t)_9__71_0, v22, v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__71_0,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v27 = (System_Func_object__object__o *)sub_1B64314(
                                           System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo,
                                           v25,
                                           v26);
  System_Func_object__object____ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__,
    0LL);
  v28 = System_Linq_Enumerable__Select_object__object_(
          v24,
          (System_Func_TSource__TResult__o *)v27,
          (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
  if ( !v28 )
    sub_1B64324(0LL);
  klass = v28->klass;
  v30 = v28;
  v31 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffUniqueValue__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BB60A8(v28, System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v30,
          *(_QWORD *)(p_method + 8));
  if ( !v34 )
    sub_1B64324(0LL);
  for ( i = 0;
        ;
        i += System_Collections_Generic_List_object___RemoveAll(
               bgmList,
               v53,
               (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) )
  {
    v36 = *(_QWORD *)v34;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_22;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_22:
      v39 = sub_1BB60A8(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v34, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v42 = sub_1B64314(BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo, v40, v41);
    System_Object___ctor((Il2CppObject *)v42, 0LL);
    v43 = *(_QWORD *)v34;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffUniqueValue__c **)v45 - 1) != System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_29;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_29:
      v46 = sub_1BB60A8(v34, System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v34, *(_QWORD *)(v46 + 8));
    if ( !v42 )
      sub_1B64324(v47);
    *(_QWORD *)(v42 + 16) = v47;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 16), v47, v48, v49);
    bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
    v53 = (System_Predicate_T__o *)sub_1B64314(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v51, v52);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v53,
      (Il2CppObject *)v42,
      Method_BattleFieldEnvironmentData___c__DisplayClass71_0__RemoveBgmRelateBuff_b__1__,
      0LL);
    if ( !bgmList )
      sub_1B64324(v54);
  }
  v55 = *(_QWORD *)v34;
  v56 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_38;
    }
    v58 = v55 + 16LL * *v57 + 312;
  }
  else
  {
LABEL_38:
    v58 = sub_1BB60A8(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v58)(v34, *(_QWORD *)(v58 + 8));
  if ( i > 0 )
    BattleFieldEnvironmentData__SortBGM(this, v59);
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
  BattleLogic_o *Logic_k__BackingField; // x0

  if ( BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(this, method) )
  {
    Logic_k__BackingField = this->fields._Logic_k__BackingField;
    if ( !Logic_k__BackingField )
      sub_1B64324(0LL);
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
    sub_1B64324(this);
  }
  AllBGMChangeBuffArray = BattleBuffData__GetAllBGMChangeBuffArray((BattleBuffData_o *)this, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42420844(v3, AllBGMChangeBuffArray, 1, v5);
}


void __fastcall BattleFieldEnvironmentData__RemoveRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  BattleFieldEnvironmentData_o *v12; // x0
  const MethodInfo *v13; // x2
  BuffUniqueValue_o *v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *backgroundList; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  System_Predicate_object__o *v20; // x22
  int32_t v21; // w0
  System_Collections_Generic_List_object__o *bgmList; // x22
  int32_t v23; // w21
  __int64 v24; // x1
  __int64 v25; // x2
  System_Predicate_object__o *v26; // x23
  const MethodInfo *v27; // x2

  if ( (byte_49FE9A4 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, buff);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v5);
    sub_1B640C8(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v6);
    sub_1B640C8(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v7);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__0__, v8);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__1__, v9);
    sub_1B640C8(&BattleFieldEnvironmentData___c__DisplayClass70_0_TypeInfo, v10);
    byte_49FE9A4 = 1;
  }
  v11 = sub_1B64314(BattleFieldEnvironmentData___c__DisplayClass70_0_TypeInfo, buff, method);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  v14 = BattleFieldEnvironmentData__GetChangeBuffUniqueVal(v12, buff, v13);
  if ( !v11 )
    goto LABEL_9;
  *(_QWORD *)(v11 + 16) = v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)v14, v15, v16);
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v20 = (System_Predicate_object__o *)sub_1B64314(
                                        System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                        v18,
                                        v19);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__0__,
    0LL);
  if ( !backgroundList
    || (v21 = System_Collections_Generic_List_object___RemoveAll(
                backgroundList,
                (System_Predicate_T__o *)v20,
                (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList,
        v23 = v21,
        v26 = (System_Predicate_object__o *)sub_1B64314(
                                              System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                              v24,
                                              v25),
        System_Predicate_object____ctor(
          v26,
          (Il2CppObject *)v11,
          Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__1__,
          0LL),
        !bgmList) )
  {
LABEL_9:
    sub_1B64324(v14);
  }
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v26,
         (const MethodInfo_34AEDD0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v23 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v27);
}


void __fastcall BattleFieldEnvironmentData__ResetFieldInfo(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  __int64 v3; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x8
  int32_t size; // w2
  int v6; // w9
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x8
  int32_t v8; // w2
  int v9; // w9

  v2 = this;
  if ( (byte_49FE993 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__, method);
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(
                                             &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__,
                                             v3);
    byte_49FE993 = 1;
  }
  backgroundList = v2->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_10;
  size = backgroundList->fields._size;
  v6 = backgroundList->fields._version + 1;
  backgroundList->fields._size = 0;
  backgroundList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)backgroundList->fields._items, 0, size, 0LL);
  bgmList = v2->fields.bgmList;
  if ( !bgmList )
LABEL_10:
    sub_1B64324(this);
  v8 = bgmList->fields._size;
  v9 = bgmList->fields._version + 1;
  bgmList->fields._size = 0;
  bgmList->fields._version = v9;
  if ( v8 >= 1 )
    System_Array__Clear((System_Array_o *)bgmList->fields._items, 0, v8, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SetSaveData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *backgroundList; // x0
  const MethodInfo *v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v16; // x0
  System_Action_object__o *_9__8_0; // x22
  Il2CppObject *v18; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  int32_t v23; // w20
  int32_t v24; // w21
  bool ExistOverwriteBgIndividuality; // w22
  __int64 v26; // x1
  __int64 v27; // x2
  Generator_Background_o *v28; // x23
  const MethodInfo *v29; // x5
  struct BattleData_o *Data_k__BackingField; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v35; // w23
  __int64 v36; // x1
  __int64 v37; // x2
  Generator_BGM_o *v38; // x24
  const MethodInfo *v39; // x6

  if ( (byte_49FE98E & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, sv);
    sub_1B640C8(&Generator_BGM_TypeInfo, v5);
    sub_1B640C8(&Generator_Background_TypeInfo, v6);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__, v9);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, v10);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_49FE98E = 1;
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
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0LL) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v16 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
        v16 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      _9__8_0 = (System_Action_object__o *)v16->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = BattleFieldEnvironmentData___c_TypeInfo;
        }
        v18 = (Il2CppObject *)v16->static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_1B64314(
                                               System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                               v13,
                                               v14);
        System_Action_object____ctor(_9__8_0, v18, Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, 0LL);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v20, v21);
      }
      BasicHelper__ForEach_object_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_object__o *)BattleFieldEnvironmentData__get_BuffData(this, v13);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0LL);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v22);
      return;
    }
LABEL_27:
    sub_1B64324(backgroundList);
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
    v23 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_CurrentGroundType(
                                                                    this->fields._Perf_k__BackingField,
                                                                    0LL);
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_27;
    v24 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(
                                      this->fields._Data_k__BackingField,
                                      0LL);
    v28 = (Generator_Background_o *)sub_1B64314(Generator_Background_TypeInfo, v26, v27);
    Generator_Background___ctor(v28, v23, v24, 0, ExistOverwriteBgIndividuality, v29);
    backgroundList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
                                                                    this,
                                                                    v28,
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
    v35 = allowSubBgmPlaying;
    v38 = (Generator_BGM_o *)sub_1B64314(Generator_BGM_TypeInfo, v36, v37);
    Generator_BGM___ctor(v38, Data_k__BackingField, BgmId_k__BackingField, v35, 0, BgmName_k__BackingField, v39);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
      this,
      v38,
      2LL,
      0LL,
      this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
}


void __fastcall BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v11; // x21
  BattleData_o *v12; // x0
  System_Collections_Generic_List_object__o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Comparison_T__o *v16; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_49FE9A8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, method);
    sub_1B640C8(&Method_BattleFieldEnvironmentData_CompareData__, v4);
    sub_1B640C8(&Method_BattleFieldEnvironmentData__SortBGM_b__78_0__, v5);
    sub_1B640C8(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v9);
    byte_49FE9A8 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v11 = (System_Action_object__o *)sub_1B64314(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, method, v2);
  System_Action_object____ctor(v11, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__78_0__, 0LL);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v11,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v13 = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v16 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v14, v15);
  System_Comparison_object____ctor(v16, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !v13 )
    goto LABEL_9;
  System_Collections_Generic_List_object___Sort_55243320(
    v13,
    v16,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_CurBGM_k__BackingField, (int32_t)baseBgm, v18, v19);
  v12 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v12 )
LABEL_9:
    sub_1B64324(v12);
  BattleData__SetOverrideBgmData(v12, *p_CurBGM_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SortBGM_42405060(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *targetBgmList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Action_object__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Comparison_T__o *v14; // x21

  if ( (byte_49FE9A9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, targetBgmList);
    sub_1B640C8(&Method_BattleFieldEnvironmentData_CompareData__, v5);
    sub_1B640C8(&Method_BattleFieldEnvironmentData__SortBGM_b__79_0__, v6);
    sub_1B640C8(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v9);
    byte_49FE9A9 = 1;
  }
  v10 = (System_Action_object__o *)sub_1B64314(
                                     System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                     targetBgmList,
                                     method);
  System_Action_object____ctor(v10, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__79_0__, 0LL);
  if ( !targetBgmList )
    sub_1B64324(v11);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    (System_Action_T__o *)v10,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v14 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v12, v13);
  System_Comparison_object____ctor(v14, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  System_Collections_Generic_List_object___Sort_55243320(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    v14,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
}


void __fastcall BattleFieldEnvironmentData__SortBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *backgroundList; // x20
  System_Comparison_T__o *v8; // x21
  __int64 v9; // x0
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49FE9A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleFieldEnvironmentData_CompareData__, method);
    sub_1B640C8(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__, v6);
    byte_49FE9A7 = 1;
  }
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v8 = (System_Comparison_T__o *)sub_1B64314(
                                   System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                   method,
                                   v2);
  System_Comparison_object____ctor(v8, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !backgroundList )
    sub_1B64324(v9);
  System_Collections_Generic_List_object___Sort_55243320(
    backgroundList,
    v8,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields._CurBackGround_k__BackingField,
    (int32_t)baseBackground,
    v11,
    v12);
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
  BattleBuffData_o *v8; // x21
  int32_t Value; // w22
  int32_t Value2; // w24
  RemovedBuffInfo_o *v11; // x1
  const MethodInfo *v12; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)individuality);
  if ( !baseVals
    || (v8 = BuffData,
        Value = DataVals__GetValue(baseVals, 0LL),
        Value2 = DataVals__GetValue2(baseVals, 0LL),
        BuffData = (BattleBuffData_o *)DataVals__isParam(baseVals, 89, 0LL),
        !v8) )
  {
    sub_1B64324(BuffData);
  }
  v11 = BattleBuffData__subBuffFromIndividualites(
          v8,
          individuality,
          Value,
          Value2,
          1,
          (unsigned __int8)BuffData & 1,
          0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v11, 1, v12);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
        BattleFieldEnvironmentData_o *this,
        int32_t deadActorId,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  RemovedBuffInfo_o *v6; // x1
  const MethodInfo *v7; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&deadActorId);
  if ( !BuffData )
    sub_1B64324(0LL);
  v6 = BattleBuffData__SubBuffFromDeadActorId(BuffData, deadActorId, 0, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v6, 1, v7);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleFieldEnvironmentData__SubBuffFromType(
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
    sub_1B64324(0LL);
  v8 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v8, isAddAfterTask, v9);
}


void __fastcall BattleFieldEnvironmentData__TakeOverChangeField(
        BattleFieldEnvironmentData_o *this,
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
  BattleBuffData_o *BuffData; // x0
  BattleBuffData_FieldChangeData_array *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  BattleFieldEnvironmentData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__bool__o *_9__54_0; // x21
  Il2CppObject *v19; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v24; // x19
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x19
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  BattleBuffData_FieldChangeData_o *v40; // x21
  Generator_BGFromFieldChangeBGBuff_o *v41; // x22
  const MethodInfo *v42; // x2
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v44; // x22
  const MethodInfo *v45; // x3
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0

  if ( (byte_49FE994 & 1) == 0 )
  {
    sub_1B640C8(&Generator_BGFromFieldChangeBGBuff_TypeInfo, method);
    sub_1B640C8(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___, v4);
    sub_1B640C8(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, v8);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__54_0__, v10);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v11);
    byte_49FE994 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_45;
  v13 = BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
  v16 = BattleFieldEnvironmentData___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v16 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__54_0 = (System_Func_object__bool__o *)v16->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__54_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo,
                                                v14,
                                                v15);
    System_Func_object__bool____ctor(
      _9__54_0,
      v19,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__54_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__54_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__54_0, (int32_t)_9__54_0, v21, v22);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_object_(
                                   v17,
                                   (System_Func_TSource__bool__o *)_9__54_0,
                                   (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_45:
    sub_1B64324(BuffData);
  klass = BuffData->klass;
  v24 = BuffData;
  v25 = *(unsigned __int16 *)(&BuffData->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&BuffData->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_15;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v27 = sub_1BB60A8(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  if ( !v28 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_22;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_22:
      v32 = sub_1BB60A8(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_29;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_29:
      v36 = sub_1BB60A8(v28, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    v40 = (BattleBuffData_FieldChangeData_o *)v37;
    if ( !v37 )
      sub_1B64324(0LL);
    if ( *(int *)(v37 + 24) >= 1 )
    {
      v41 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1B64314(Generator_BGFromFieldChangeBGBuff_TypeInfo, v38, v39);
      Generator_BGFromFieldChangeBGBuff___ctor(v41, v40, v42);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
        this,
        v41,
        2LL,
        this->klass->vtable._6_AddBGM.methodPtr);
    }
    if ( v40->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v40->fields.bgmName, 0LL) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v44 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1B64314(Generator_BGMFromFieldChangeBGBuff_TypeInfo, v38, v39);
      Generator_BGMFromFieldChangeBGBuff___ctor(v44, Data_k__BackingField, v40, v45);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v44,
        2LL,
        0LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
  }
  v46 = *(_QWORD *)v28;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_41;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_41:
    v49 = sub_1BB60A8(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v28, *(_QWORD *)(v49 + 8));
}


void __fastcall BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleData_o *Data_k__BackingField; // x8
  BattleFieldEnvironmentData_o *v9; // x0
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct BattleData_o *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *player_datalist; // x20
  BattleFieldEnvironmentData___c_c *v15; // x0
  System_Func_object__bool__o *_9__55_0; // x21
  Il2CppObject *v17; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_BattleServantData__o *v21; // x0
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v23; // x0
  System_Object_array *v24; // x1
  const MethodInfo *v25; // x2

  v2 = this;
  if ( (byte_49FE995 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_BattleServantData___, v3);
    sub_1B640C8(&System_Func_BattleServantData__bool__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v5);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__55_0__, v6);
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v7);
    byte_49FE995 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (this = (BattleFieldEnvironmentData_o *)Data_k__BackingField->fields.player_datalist) == 0LL
    || (v9 = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___ToArray(
                                               (System_Collections_Generic_List_object__o *)this,
                                               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_BattleServantData__ToArray__),
        BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(v9, (BattleServantData_array *)v9, v10),
        (v13 = v2->fields._Data_k__BackingField) == 0LL) )
  {
    sub_1B64324(this);
  }
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v13->fields.player_datalist;
  v15 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v15 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__55_0 = (System_Func_object__bool__o *)v15->static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v15->static_fields->__9;
    _9__55_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleServantData__bool__TypeInfo, v11, v12);
    System_Func_object__bool____ctor(
      _9__55_0,
      v17,
      Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__55_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Func_BattleServantData__bool__o *)_9__55_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__55_0, (int32_t)_9__55_0, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                         player_datalist,
                                                                         (System_Func_TSource__bool__o *)_9__55_0,
                                                                         (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v23 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(v21, v22);
  v24 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v24, v25);
}


void __fastcall BattleFieldEnvironmentData__TurnProgressing(
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
    sub_1B64324(0LL);
  v8 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42420844(this, v8, 1, v9);
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
    sub_1B64324(Perf_k__BackingField);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_T__o *v10; // x19
  BattleFieldEnvironmentData___c_c *v11; // x0
  System_Action_object__o *_9__56_0; // x20
  Il2CppObject *v13; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FE996 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_BattleBuffData_BuffData__TypeInfo, servantArray);
    sub_1B640C8(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v4);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__56_0__, v5);
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v6);
    byte_49FE996 = 1;
  }
  v7 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
         (System_Collections_Generic_IEnumerable_BattleServantData__o *)servantArray,
         (const MethodInfo *)servantArray);
  if ( v7 )
  {
    v10 = (System_Collections_Generic_IEnumerable_T__o *)v7;
    v11 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v11 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__56_0 = (System_Action_object__o *)v11->static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__56_0 = (System_Action_object__o *)sub_1B64314(System_Action_BattleBuffData_BuffData__TypeInfo, v8, v9);
      System_Action_object____ctor(
        _9__56_0,
        v13,
        Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__56_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__56_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__56_0, (int32_t)_9__56_0, v15, v16);
    }
    BasicHelper__ForEach_object_(
      v10,
      (System_Action_T__o *)_9__56_0,
      (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return BattleFieldEnvironmentData_BGMData__IsRemove(x, this->fields._Data_k__BackingField, method);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__78_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
  __int64 v2; // x2
  ServantStatusBattleListViewItem_o *p_fields; // x19
  BattleBuffData_o *v5; // x20
  struct BattleBuffData_o *buffData; // t1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FE98F & 1) == 0 )
  {
    sub_1B640C8(&BattleBuffData_TypeInfo, method);
    byte_49FE98F = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (ServantStatusBattleListViewItem_o *)&this->fields;
  v5 = buffData;
  if ( !buffData )
  {
    v5 = (BattleBuffData_o *)sub_1B64314(BattleBuffData_TypeInfo, method, v2);
    BattleBuffData___ctor(v5, 0LL);
    p_fields->klass = (ServantStatusBattleListViewItem_c *)v5;
    sub_1B6406C(p_fields, (int32_t)v5, v7, v8);
  }
  return v5;
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
    sub_1B64324(this);
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
  if ( (byte_49FE990 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1B640C8(
                                             &Method_SingletonMonoBehaviour_BgmManager__get_Instance__,
                                             method);
    byte_49FE990 = 1;
  }
  CurBGM_k__BackingField = v2->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    goto LABEL_8;
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
  {
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    this = (BattleFieldEnvironmentData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( this )
    {
      BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
      LOBYTE(BgmData_k__BackingField) = !BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0LL);
      return (unsigned __int8)BgmData_k__BackingField & 1;
    }
LABEL_8:
    sub_1B64324(this);
  }
  return (unsigned __int8)BgmData_k__BackingField & 1;
}


bool __fastcall BattleFieldEnvironmentData__get_IsNeedChangeBG(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
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
                                                                                       v5);
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
    sub_1B64324(CurBackGround_k__BackingField);
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
    sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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
  sub_1B6406C(
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


void __fastcall BattleFieldEnvironmentData_BGMData___ctor_42401280(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmData_k__BackingField = bgmData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._BgmData_k__BackingField, (int32_t)bgmData, v5, v6);
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
      sub_1B64324(comData);
    }
    cachedBuffIndividuality = BattleFieldEnvironmentData__GetLinkBuffIndividuality(
                                fieldEnv,
                                (BuffUniqueValue_o *)comData,
                                v7);
    p_cachedBuffIndividuality->klass = (ServantStatusBattleListViewItem_c *)cachedBuffIndividuality;
    sub_1B6406C(p_cachedBuffIndividuality, (int32_t)cachedBuffIndividuality, v8, v9);
  }
  return cachedBuffIndividuality;
}


bool __fastcall BattleFieldEnvironmentData_BGMData__IsRemove(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  const MethodInfo *v9; // x1
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  int32_t v14; // w1
  BattleServantData_o *ServantData; // x0
  System_Object_array *AllBGMChangeBuffArray; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Func_object__bool__o *v19; // x21

  if ( (byte_49FE9B7 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleBuffData_BuffData____75709752, data);
    sub_1B640C8(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__, v6);
    sub_1B640C8(&BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo, v7);
    byte_49FE9B7 = 1;
  }
  v8 = sub_1B64314(BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo, data, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_14;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleFieldEnvironmentData_CommonData__get_UniqueVal(comData, v9);
  if ( !v8 )
    goto LABEL_14;
  *(_QWORD *)(v8 + 16) = comData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)comData, v11, v12);
  v13 = *(_QWORD *)(v8 + 16);
  if ( !v13 )
    goto LABEL_14;
  v14 = *(_DWORD *)(v13 + 20);
  if ( (v14 & 0x80000000) != 0 )
    return 0;
  if ( !data )
    goto LABEL_14;
  ServantData = BattleData__getServantData(data, v14, 0LL);
  if ( !ServantData )
    return 1;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleServantData__get_BuffData(ServantData, 0LL);
  if ( !comData )
LABEL_14:
    sub_1B64324(comData);
  AllBGMChangeBuffArray = (System_Object_array *)BattleBuffData__GetAllBGMChangeBuffArray(
                                                   (BattleBuffData_o *)comData,
                                                   0LL);
  v19 = (System_Func_object__bool__o *)sub_1B64314(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v17, v18);
  System_Func_object__bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__,
    0LL);
  return !BasicHelper__Any_object__48384284(
            AllBGMChangeBuffArray,
            (System_Func_T__bool__o *)v19,
            (const MethodInfo_2E2491C *)Method_BasicHelper_Any_BattleBuffData_BuffData____75709752);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgmSaveData, (int32_t)v3, v4, v5);
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
  sub_1B6406C(
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
    sub_1B64324(this);
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
  sub_1B6406C(
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
    sub_1B64324(this);
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
  __int64 v2; // x2
  BgResourceData_o *cachedBgResource; // x21
  int32_t v5; // w22
  int32_t id; // w23
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FE9B6 & 1) == 0 )
  {
    sub_1B640C8(&BgResourceData_TypeInfo, method);
    byte_49FE9B6 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    v5 = *((_DWORD *)&this->fields.isActive + 1);
    id = this->fields.id;
    cachedBgResource = (BgResourceData_o *)sub_1B64314(BgResourceData_TypeInfo, method, v2);
    BgResourceData___ctor(cachedBgResource, v5, id, 0LL);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cachedBgResource, (int32_t)cachedBgResource, v7, v8);
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
    sub_1B64324(this);
  return comData->fields.grantType;
}


bool __fastcall BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_1B64324(this);
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

  if ( !val )
    return 0;
  UniqueVal = BattleFieldEnvironmentData_CommonData__get_UniqueVal(this, (const MethodInfo *)val);
  if ( !UniqueVal )
    sub_1B64324(0LL);
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
  __int64 v2; // x2
  BuffUniqueValue_o *cachedUniqueVal; // x21
  int32_t linkBuffUid; // w22
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FE9B5 & 1) == 0 )
  {
    sub_1B640C8(&BuffUniqueValue_TypeInfo, method);
    byte_49FE9B5 = 1;
  }
  cachedUniqueVal = this->fields.cachedUniqueVal;
  if ( !cachedUniqueVal )
  {
    linkBuffUid = this->fields.linkBuffUid;
    cachedUniqueVal = (BuffUniqueValue_o *)sub_1B64314(BuffUniqueValue_TypeInfo, method, v2);
    BuffUniqueValue___ctor_42310840(cachedUniqueVal, linkBuffUid, -1, 0LL);
    this->fields.cachedUniqueVal = cachedUniqueVal;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.cachedUniqueVal, (int32_t)cachedUniqueVal, v6, v7);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE9B8 & 1) == 0 )
  {
    sub_1B640C8(&BattleFieldEnvironmentData___c_TypeInfo, v1);
    byte_49FE9B8 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleFieldEnvironmentData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleFieldEnvironmentData___c_TypeInfo->static_fields->__9 = (struct BattleFieldEnvironmentData___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return changeBgmData->fields.addBgmOrder;
}


bool __fastcall BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__58_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B64324(this);
  return !BattleServantData__isAlive(svt, 0, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__58_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return BattleBuffData_BuffData__get_ExistDelProc(x, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c___GetBaseBgmList_b__68_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0LL);
  x->fields.bgmSaveData = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&x->fields.bgmSaveData, (int32_t)v4, v5, v6);
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1B64324(this);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__51_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1B64324(this);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__69_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1B64324(this);
  return bgm->fields.isAfterReset;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__69_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0LL);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1B6406C(
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
    sub_1B64324(this);
  return x->fields.isTakeOverNextWave;
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverPlayerServantChangeBgm_b__55_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return BattleServantData__isAlive(x, 0, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___UpdateBgmBuffPriorityOnInitWave_b__56_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleFieldEnvironmentData___c_o *)x->fields.changeBgmData) == 0LL )
    sub_1B64324(this);
  BattleBuffData_ChangeBgmData__UpdatePriorityForWaveStart((BattleBuffData_ChangeBgmData_o *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c__DisplayClass62_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleFieldEnvironmentData___c__DisplayClass62_0___GetQuestCommonIndividuality_b__0(
        BattleFieldEnvironmentData___c__DisplayClass62_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Object_array *bgRangeArray; // x19
  System_Func_object__bool__o *v13; // x20

  if ( (byte_49FE9B9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_RangeValue___, *(_QWORD *)&x);
    sub_1B640C8(&System_Func_RangeValue__bool__TypeInfo, v5);
    sub_1B640C8(&Method_BattleFieldEnvironmentData___c__DisplayClass62_1__GetQuestCommonIndividuality_b__1__, v6);
    sub_1B640C8(&BattleFieldEnvironmentData___c__DisplayClass62_1_TypeInfo, v7);
    byte_49FE9B9 = 1;
  }
  v8 = sub_1B64314(BattleFieldEnvironmentData___c__DisplayClass62_1_TypeInfo, *(_QWORD *)&x, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B64324(v9);
  *(_DWORD *)(v8 + 16) = x;
  bgRangeArray = (System_Object_array *)this->fields.bgRangeArray;
  v13 = (System_Func_object__bool__o *)sub_1B64314(System_Func_RangeValue__bool__TypeInfo, v10, v11);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_BattleFieldEnvironmentData___c__DisplayClass62_1__GetQuestCommonIndividuality_b__1__,
    0LL);
  return !BasicHelper__Any_object__48384284(
            bgRangeArray,
            (System_Func_T__bool__o *)v13,
            (const MethodInfo_2E2491C *)Method_BasicHelper_Any_RangeValue___);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass70_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass70_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_42421448(
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

  if ( (byte_49FE9BA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&x);
    byte_49FE9BA = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_1B64324(0LL);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
}