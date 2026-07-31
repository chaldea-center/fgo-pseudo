void BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_object__o *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_BattleLogicTask__c *v26; // x0
  System_Collections_Generic_List_object__o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_HashSet_T__o *v34; // x21
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  _BOOL8 v47; // x0
  __int64 v48; // x1
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  struct BattlePerformance_o *perf; // x1
  struct BattlePerformance_o **p_Perf_k__BackingField; // x21
  struct BattleLogic_o *logic; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  __int64 v64; // x1
  UnityEngine_Object_o *Perf_k__BackingField; // x20
  UnityEngine_Object_o *infoComp; // x20
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct BattleInformationComponent_o *v73; // x8
  struct BattleFieldParamComponent_o *fieldParam; // x1

  if ( (byte_593B2E3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B2E3 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData____ctor__);
  this->fields.cachedApplyBuffEachSvtDictionary = (struct System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___o *)v5;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedApplyBuffEachSvtDictionary,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v12;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.backgroundList,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgmList, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = System_Collections_Generic_List_BattleLogicTask__TypeInfo;
  this->fields.addOrder = 1;
  v27 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v26);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v27;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.addTaskList, (int32_t)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Collections_Generic_HashSet_T__o *)sub_21FFEBC(System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v34,
    (const MethodInfo_4282438 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.hashDelType, (int32_t)v34, v35, v36, v37, v38, v39, v40);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Data_k__BackingField = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)data,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !data )
    goto LABEL_15;
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  p_Perf_k__BackingField = &this->fields._Perf_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Perf_k__BackingField,
    (int32_t)perf,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  logic = data->fields.logic;
  this->fields._Logic_k__BackingField = logic;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Logic_k__BackingField,
    (int32_t)logic,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  Perf_k__BackingField = (UnityEngine_Object_o *)this->fields._Perf_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v64);
  v47 = UnityEngine_Object__op_Inequality(Perf_k__BackingField, 0, 0);
  if ( v47 )
  {
    if ( !*p_Perf_k__BackingField )
      goto LABEL_15;
    infoComp = (UnityEngine_Object_o *)(*p_Perf_k__BackingField)->fields.infoComp;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v48);
    v47 = UnityEngine_Object__op_Inequality(infoComp, 0, 0);
    if ( v47 )
    {
      if ( *p_Perf_k__BackingField )
      {
        v73 = (*p_Perf_k__BackingField)->fields.infoComp;
        if ( v73 )
        {
          fieldParam = v73->fields.fieldParam;
          this->fields._FieldParamComp_k__BackingField = fieldParam;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields._FieldParamComp_k__BackingField,
            (int32_t)fieldParam,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72);
          return;
        }
      }
LABEL_15:
      sub_21FFECC(v47, v48);
    }
  }
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
  System_String_o *v10; // x2
  MethodInfo *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  BattleFieldEnvironmentData_BGMData_o *v16; // x21
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v18; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v20; // x8
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  BattleFieldEnvironmentData___c_c *v23; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__76_0; // x21
  Il2CppObject *v26; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v27; // x0
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  BattleFieldEnvironmentData___c_c *v35; // x8
  System_Collections_Generic_List_object__o *v36; // x21
  BattleFieldEnvironmentData_o *v37; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v38; // x9
  System_Predicate_object__o *_9__76_1; // x22
  Il2CppObject *v40; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Comparison_T__o *v48; // x21
  System_Collections_Generic_List_object__o *v49; // x21
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Object_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  BattleFieldEnvironmentData_o *v59; // x1
  Il2CppClass **v60; // x0

  v8 = this;
  if ( (byte_593B2F3 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_21FFC50(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_21FFC50(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    sub_21FFC50(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__AddBGM_b__76_0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__AddBGM_b__76_1__);
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2F3 = 1;
  }
  addOrder = (unsigned int)v8->fields.addOrder;
  v8->fields.addOrder = addOrder + 1;
  if ( !bgmGenerator )
    goto LABEL_33;
  v16 = (BattleFieldEnvironmentData_BGMData_o *)((__int64 (__fastcall *)(Generator_BGM_o *, __int64, _QWORD, const MethodInfo *, const MethodInfo *))bgmGenerator->klass->vtable._4_Make.methodPtr)(
                                                  bgmGenerator,
                                                  addOrder,
                                                  (unsigned int)grantType,
                                                  bgmGenerator->klass->vtable._4_Make.method,
                                                  method);
  if ( arg )
    AddBgmArgument__ControlOtherBgmPriorityAtOverStageBgm(arg, v8, v16, v11);
  this = (BattleFieldEnvironmentData_o *)v8->fields.bgmList;
  if ( !this )
    goto LABEL_33;
  buffData = this->fields._buffData;
  v18 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_33;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= buffData->fields.resumptionHpFromLossMaxHp )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v16,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v20[4] = (BattleBuffData_c *)v16;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v20 + 4),
      (int32_t)v16,
      v10,
      (System_String_o *)v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v16 )
    goto LABEL_33;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))v16->klass->vtable._5_get_IsTargetBase.methodPtr)(
          v16,
          v16->klass->vtable._5_get_IsTargetBase.method)
      & 1) == 0 )
    goto LABEL_32;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.bgmList;
  v23 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v21);
    v23 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__76_0 = (System_Func_object__bool__o *)static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v21);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__76_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__76_0, v26, Method_BattleFieldEnvironmentData___c__AddBGM_b__76_0__, 0);
    v27 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v27->__9__76_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__76_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v27->__9__76_0, (int32_t)_9__76_0, v28, v29, v30, v31, v32, v33);
  }
  v34 = System_Linq_Enumerable__Where_object_(
          bgmList,
          (System_Func_TSource__bool__o *)_9__76_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  this = (BattleFieldEnvironmentData_o *)System_Linq_Enumerable__ToList_object_(
                                           v34,
                                           (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
  v35 = BattleFieldEnvironmentData___c_TypeInfo;
  v36 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList;
  v37 = this;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, addOrder);
    v35 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v38 = v35->static_fields;
  _9__76_1 = (System_Predicate_object__o *)v38->__9__76_1;
  if ( !_9__76_1 )
  {
    if ( !*(&v35->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v35, addOrder);
      v38 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v40 = (Il2CppObject *)v38->__9;
    _9__76_1 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(_9__76_1, v40, Method_BattleFieldEnvironmentData___c__AddBGM_b__76_1__, 0);
    v41 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v41->__9__76_1 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__76_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v41->__9__76_1, (int32_t)_9__76_1, v42, v43, v44, v45, v46, v47);
  }
  if ( !v36 )
    goto LABEL_33;
  System_Collections_Generic_List_object___RemoveAll(
    v36,
    (System_Predicate_T__o *)_9__76_1,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v48 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v48, (Il2CppObject *)v8, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !v37
    || (System_Collections_Generic_List_object___Sort_71636404(
          (System_Collections_Generic_List_object__o *)v37,
          v48,
          (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__),
        v49 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList,
        this = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)v37,
                                                 0,
                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__),
        !v49)
    || (items = v49->fields._items,
        v57 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__,
        ++v49->fields._version,
        !items) )
  {
LABEL_33:
    sub_21FFECC(this, addOrder);
  }
  size = v49->fields._size;
  v59 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v49,
      (Il2CppObject *)this,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
  }
  else
  {
    v60 = &items->obj.klass + size;
    v49->fields._size = size + 1;
    v60[4] = (Il2CppClass *)v59;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v60 + 4), (int32_t)v59, v50, v51, v52, v53, v54, v55);
  }
LABEL_32:
  BattleFieldEnvironmentData__SortBGM(v8, v21);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *backgroundList; // x21
  void *Data_k__BackingField; // x8
  System_Predicate_object__o *v17; // x22
  Il2CppObject *v18; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v27; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v29; // x8
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1

  v6 = this;
  if ( (byte_593B2F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_21FFC50(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__AddBackground_b__75_0__);
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2F2 = 1;
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
    if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, addOrder);
      this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
    }
    Data_k__BackingField = this[1].fields._Data_k__BackingField;
    v17 = (System_Predicate_object__o *)*((_QWORD *)Data_k__BackingField + 13);
    if ( !v17 )
    {
      if ( !*((_DWORD *)&this[1].fields._IsUpdateBuffWaiting_k__BackingField + 1) )
      {
        j_il2cpp_runtime_class_init_0(this, addOrder);
        Data_k__BackingField = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v18 = *(Il2CppObject **)Data_k__BackingField;
      v17 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
      System_Predicate_object____ctor(v17, v18, Method_BattleFieldEnvironmentData___c__AddBackground_b__75_0__, 0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__75_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v17;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&static_fields->__9__75_0,
        (int32_t)v17,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( backgroundList )
    {
      System_Collections_Generic_List_object___RemoveAll(
        backgroundList,
        (System_Predicate_T__o *)v17,
        (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
      goto LABEL_14;
    }
LABEL_20:
    sub_21FFECC(this, addOrder);
  }
LABEL_14:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_20;
  buffData = this->fields._buffData;
  v27 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_20;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= buffData->fields.resumptionHpFromLossMaxHp )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v8,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v29[4] = (BattleBuffData_c *)v8;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v29 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  BattleFieldEnvironmentData__SortBackGround(v6, v30);
  BattleFieldEnvironmentData__SortBGM(v6, v31);
  return v6->fields._CurBackGround_k__BackingField;
}


bool BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *changeBgmBuffArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  bool IsNullOrEmpty; // w19
  BattleFieldEnvironmentData___c_c *v7; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__68_0; // x22
  Il2CppObject *v10; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v18; // x0
  __int64 v19; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x21
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  BattleBuffData_ChangeBgmData_o *v37; // x0
  Generator_BGM_o *v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v44; // [xsp+18h] [xbp-48h]

  if ( (byte_593B2EB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__68_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2EB = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)changeBgmBuffArray, 0);
  if ( !IsNullOrEmpty )
  {
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v5);
      v7 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__68_0 = (System_Func_object__int__o *)static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v5);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__68_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__68_0,
        v10,
        Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__68_0__,
        0);
      v11 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v11->__9__68_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__68_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__68_0, (int32_t)_9__68_0, v12, v13, v14, v15, v16, v17);
    }
    v18 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)changeBgmBuffArray,
            (System_Func_TSource__TKey__o *)_9__68_0,
            (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    if ( !v18 )
      sub_21FFECC(0, v19);
    klass = v18->klass;
    v21 = v18;
    v22 = *(unsigned __int16 *)&v18->klass->_2.rank;
    if ( *(_WORD *)&v18->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_15;
      }
      v24 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v24 = sub_2237E2C(v18, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
    }
    v25 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v24)(
            v21,
            *(_QWORD *)(v24 + 8));
    v44 = v25;
    while ( 1 )
    {
      if ( !v44 )
        sub_21FFECC(v25, v26);
      v27 = *(_QWORD *)v44;
      v28 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_23;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_23:
        v30 = sub_2237E2C(v44, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v44, *(_QWORD *)(v30 + 8)) & 1) == 0 )
        break;
      v31 = *(_QWORD *)v44;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_30;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_30:
        v34 = sub_2237E2C(v44, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
      }
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v44, *(_QWORD *)(v34 + 8));
      if ( !v35 )
        sub_21FFECC(0, v36);
      v37 = *(BattleBuffData_ChangeBgmData_o **)(v35 + 376);
      if ( !v37 )
        sub_21FFECC(0, v36);
      v38 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(v37, this->fields._Data_k__BackingField, 0);
      v25 = ((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
              this,
              v38,
              2,
              0,
              this->klass->vtable._6_AddBGM.method);
    }
    v39 = *(_QWORD *)v44;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_39;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_39:
      v42 = sub_2237E2C(v44, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v42)(v44, *(_QWORD *)(v42 + 8));
  }
  return !IsNullOrEmpty;
}


void BattleFieldEnvironmentData__AddCachedApplyOtherBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v4; // x20
  const MethodInfo_436CCCC *v5; // x4
  __int64 v6; // x0
  __int64 v7; // x1
  BattleServantData_o *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x21
  Il2CppObject *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-B8h] BYREF
  Il2CppObject *key; // [xsp+30h] [xbp-90h] BYREF
  BattleServantData_o *v24; // [xsp+38h] [xbp-88h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+50h] [xbp-70h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v27; // 0:x0.16

  v4 = this;
  if ( (byte_593B31A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData___Deconstruct__);
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_593B31A = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  key = 0;
  v24 = 0;
  memset(&v26, 0, sizeof(v26));
  if ( !buff )
    goto LABEL_19;
  if ( !BattleBuffData_BuffData__get_IsApplyOther(buff, 0) )
    return;
  this = (BattleFieldEnvironmentData_o *)v4->fields.cachedApplyBuffEachSvtDictionary;
  if ( !this )
LABEL_19:
    sub_21FFECC(this, buff);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___GetEnumerator__);
  v26 = v22;
  v22.fields._dictionary = 0;
  *(_QWORD *)&v22.fields._version = &v26;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v26,
            (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___MoveNext__) )
  {
    current = v26.fields._current;
    v27.fields.key = (Il2CppObject *)&current;
    v27.fields.value = (Il2CppObject *)&v24;
    System_Collections_Generic_KeyValuePair_object__object___Deconstruct(
      v27,
      &key,
      (Il2CppObject **)Method_System_Collections_Generic_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData___Deconstruct__,
      v5);
    v8 = v24;
    if ( !v24 )
      sub_21FFECC(v6, v7);
    v9 = (System_Collections_Generic_List_object__o *)key;
    if ( BattleBuffData_BuffData__IsMatchApplyTarget(buff, v24->fields.isEnemy, 0) )
    {
      v10 = (Il2CppObject *)BattleBuffData_BuffData__CloneApplyBuff(buff, v8, v4, 0);
      v17 = v10;
      if ( !v9
        || (items = v9->fields._items,
            v19 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
            ++v9->fields._version,
            !items) )
      {
        sub_21FFECC(v10, v10);
      }
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v10,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v26,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___Dispose__);
}


void BattleFieldEnvironmentData__AddFieldBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool unFixBuff,
        bool fieldFlag,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buff);
  if ( !BuffData )
    sub_21FFECC(0, v10);
  BattleBuffData__addBuff(BuffData, buff, fieldFlag, unFixBuff, 0);
  BattleFieldEnvironmentData__AddCachedApplyOtherBuff(this, buff, v11);
}


void BattleFieldEnvironmentData__AddFieldChangeMaxHpBuff(
        BattleFieldEnvironmentData_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buff,
        bool isUnFixBuff,
        bool fieldFlag,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x21
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *ApplyTargetSvtAndHpDictionary; // x21
  const MethodInfo *v23; // x4
  __int64 v24; // x1
  long double v25; // q0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x22
  BattleActionEffect_AddFieldBuff_o *v33; // x23
  _QWORD *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x22
  const MethodInfo_436BFB4 *v39; // x4
  __int64 v40; // x0
  __int64 v41; // x1
  BattleServantData_o *v42; // x21
  int32_t v43; // w24
  int v44; // w29
  BattleActionEffect_AddChangeMaxHpFieldBuff_o *v45; // x23
  unsigned int uniqueId; // w24
  __int64 v47; // x0
  __int64 v48; // x1
  BattleActionEffect_Base_o *v49; // x0
  __int64 v50; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+8h] [xbp-D8h] BYREF
  Il2CppObject *key; // [xsp+30h] [xbp-B0h] BYREF
  BattleServantData_o *v53; // [xsp+38h] [xbp-A8h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_KeyValuePair_object__ValueTuple_int__int___o v56; // 0:x0.16

  if ( (byte_593B304 & 1) == 0 )
  {
    sub_21FFC50(&BattleActionEffect_AddChangeMaxHpFieldBuff_TypeInfo);
    sub_21FFC50(&BattleActionEffect_AddFieldBuff_TypeInfo);
    sub_21FFC50(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_21FFC50(&BattleBuffData_BuffData___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__ValueTuple_int__int___Deconstruct__);
    byte_593B304 = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  key = 0;
  v53 = 0;
  memset(&v55, 0, sizeof(v55));
  v11 = sub_21FFD10(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !v11 )
    goto LABEL_34;
  v19 = v11;
  if ( buff )
  {
    v11 = sub_21FFDA4(buff, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
    {
LABEL_36:
      v50 = sub_21FFEF0(v11, v20);
      sub_21FFD90(v50, 0);
    }
  }
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_35;
  *(_QWORD *)(v19 + 32) = buff;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)buff, v13, v14, v15, v16, v17, v18);
  ApplyTargetSvtAndHpDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleFieldEnvironmentData__GetApplyTargetSvtAndHpDictionary(
                                                                                             this,
                                                                                             (BattleBuffData_BuffData_array *)v19,
                                                                                             v21);
  BattleFieldEnvironmentData__AddFieldBuff(this, buff, isUnFixBuff, fieldFlag, v23);
  if ( !ApplyTargetSvtAndHpDictionary )
    goto LABEL_34;
  if ( System_Collections_Generic_Dictionary_object__ValueTuple_int__int____get_Count(
         ApplyTargetSvtAndHpDictionary,
         (const MethodInfo_3FA909C *)Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___get_Count__) < 1 )
    goto LABEL_15;
  v11 = sub_21FFD10(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !v11 )
LABEL_34:
    sub_21FFECC(v11, v12);
  v32 = v11;
  if ( buff )
  {
    v11 = sub_21FFDA4(buff, *(_QWORD *)(*(_QWORD *)v11 + 64LL));
    if ( !v11 )
      goto LABEL_36;
  }
  if ( !*(_DWORD *)(v32 + 24) )
LABEL_35:
    sub_21FFED4(v11);
  *(_QWORD *)(v32 + 32) = buff;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 32), (int32_t)buff, v26, v27, v28, v29, v30, v31);
  v33 = (BattleActionEffect_AddFieldBuff_o *)sub_21FFEBC(BattleActionEffect_AddFieldBuff_TypeInfo);
  BattleActionEffect_AddFieldBuff___ctor(v33, (BattleBuffData_BuffData_array *)v32, 0);
  if ( !actBuffData )
    goto LABEL_34;
  BattleActionData_BuffData__SetActionEffectProc(actBuffData, (BattleActionEffect_Base_o *)v33, 0);
LABEL_15:
  v34 = Method_System_Array_Empty_BattleBuffData_BuffData___;
  v35 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
  if ( !v35 )
  {
    sub_2237B54(Method_System_Array_Empty_BattleBuffData_BuffData___);
    v35 = v34[7];
  }
  v36 = *(_QWORD *)(v35 + 16);
  if ( (*(_WORD *)(v36 + 309) & 1) == 0 )
    v36 = sub_2237AF8(v25);
  if ( !*(_DWORD *)(v36 + 228) )
    *(__n128 *)&v25 = j_il2cpp_runtime_class_init_0(v36, v24);
  v37 = *(_QWORD *)(v34[7] + 16LL);
  if ( (*(_WORD *)(v37 + 309) & 1) == 0 )
    v37 = sub_2237AF8(v25);
  v38 = **(_QWORD **)(v37 + 184);
  System_Collections_Generic_Dictionary_object__ValueTuple_int__int____GetEnumerator(
    &v51,
    ApplyTargetSvtAndHpDictionary,
    (const MethodInfo_3FA97DC *)Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___GetEnumerator__);
  v55 = v51;
  v51.fields._dictionary = 0;
  *(_QWORD *)&v51.fields._version = &v55;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__ValueTuple_int__int____MoveNext(
            &v55,
            (const MethodInfo_412FDA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___MoveNext__) )
  {
    current = v55.fields._current;
    v56.fields.key = (Il2CppObject *)&current;
    v56.fields.value = (struct System_ValueTuple_int__int__o)&v53;
    System_Collections_Generic_KeyValuePair_object__ValueTuple_int__int____Deconstruct(
      v56,
      &key,
      (System_ValueTuple_int__int__o *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__ValueTuple_int__int___Deconstruct__,
      v39);
    v42 = v53;
    if ( !v53 )
      sub_21FFECC(v40, v41);
    v44 = (int)key;
    v43 = HIDWORD(key);
    BattleServantData__AfterAddBuff(v53, buff, 1, SHIDWORD(key), 0);
    if ( v42->fields.isEntry )
    {
      v45 = (BattleActionEffect_AddChangeMaxHpFieldBuff_o *)sub_21FFEBC(BattleActionEffect_AddChangeMaxHpFieldBuff_TypeInfo);
      BattleActionEffect_AddChangeMaxHpFieldBuff___ctor(v45, v43, 0);
      uniqueId = v42->fields.uniqueId;
      v47 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v42->klass->vtable._13_get_resultHp.methodPtr)(
              v42,
              v42->klass->vtable._13_get_resultHp.method);
      if ( !v45 )
        sub_21FFECC(v47, v48);
      v49 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpFieldBuff_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v45->klass->vtable._7_InitBuff.methodPtr)(
                                           v45,
                                           v38,
                                           uniqueId,
                                           (unsigned int)(v47 - v44),
                                           v45->klass->vtable._7_InitBuff.method);
      if ( !actBuffData )
        sub_21FFECC(v49, v49);
      BattleActionData_BuffData__SetActionEffectProc(actBuffData, v49, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__ValueTuple_int__int____Dispose(
    &v55,
    (const MethodInfo_412FEC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___Dispose__);
}


void BattleFieldEnvironmentData__AddForceBuffArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1
  System_Action_object__o *v8; // x21

  if ( (byte_593B302 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_BattleFieldEnvironmentData_AddCachedApplyOtherBuff__);
    byte_593B302 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffArray, 0) )
  {
    BuffData = BattleFieldEnvironmentData__get_BuffData(this, v5);
    if ( !BuffData )
      sub_21FFECC(0, v7);
    BattleBuffData__AddForceBuff(BuffData, buffArray, 0);
    v8 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v8,
      (Il2CppObject *)this,
      Method_BattleFieldEnvironmentData_AddCachedApplyOtherBuff__,
      0);
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)buffArray,
      (System_Action_T__o *)v8,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
}


void BattleFieldEnvironmentData__AddLastInterruptTasks(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *addTaskList; // x0
  struct System_Collections_Generic_List_BattleLogicTask__o *v7; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_593B2FD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B2FD = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, logic);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)logic, 0, 0) )
  {
    addTaskList = (System_Collections_Generic_List_object__o *)this->fields.addTaskList;
    if ( !addTaskList )
      goto LABEL_15;
    if ( addTaskList->fields._size >= 1 )
    {
      addTaskList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                   addTaskList,
                                                                   (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0);
        v7 = this->fields.addTaskList;
        if ( v7 )
        {
          size = v7->fields._size;
          v9 = v7->fields._version + 1;
          v7->fields._size = 0;
          v7->fields._version = v9;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
          addTaskList = (System_Collections_Generic_List_object__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_Int32Enum___Clear(
              (System_Collections_Generic_HashSet_T__o *)addTaskList,
              (const MethodInfo_4282ADC *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_15:
      sub_21FFECC(addTaskList, v5);
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
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__67_0; // x21
  Il2CppObject *v8; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  BattleFieldEnvironmentData___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v20; // x9
  System_Func_object__object__o *_9__67_1; // x21
  Il2CppObject *v22; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x1
  const MethodInfo *v32; // x2

  v2 = this;
  if ( (byte_593B2EA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_21FFC50(&System_Func_BattleServantData__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__67_0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__67_1__);
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2EA = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_21FFECC(this, method);
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField->fields.player_datalist;
  v5 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v5 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__67_0 = (System_Func_object__bool__o *)static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, method);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__67_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__67_0,
      v8,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__67_0__,
      0);
    v9 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v9->__9__67_0 = (struct System_Func_BattleServantData__bool__o *)_9__67_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__67_0, (int32_t)_9__67_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          player_datalist,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v18 = BattleFieldEnvironmentData___c_TypeInfo;
  v19 = v16;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v17);
    v18 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v20 = v18->static_fields;
  _9__67_1 = (System_Func_object__object__o *)v20->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !*(&v18->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v18, v17);
      v20 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)v20->__9;
    _9__67_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_object__object____ctor(
      _9__67_1,
      v22,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__67_1__,
      0);
    v23 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v23->__9__67_1 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__67_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v23->__9__67_1, (int32_t)_9__67_1, v24, v25, v26, v27, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v19,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__67_1,
                                                               (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
  v31 = System_Linq_Enumerable__ToArray_object_(
          v30,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v31, v32);
}


void BattleFieldEnvironmentData__AddRemoveProcTask(
        BattleFieldEnvironmentData_o *this,
        BattleLogicTask_o *task,
        int32_t addType,
        bool isNotDuplicated,
        const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *hashDelType; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *addTaskList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v18; // x10
  __int64 size; // x11
  Il2CppClass **v20; // x0

  if ( (byte_593B2FE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_593B2FE = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_12;
    if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
           (System_Collections_Generic_HashSet_T__o *)hashDelType,
           addType,
           (const MethodInfo_4282B3C *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = this->fields.hashDelType;
  if ( !hashDelType
    || (hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)System_Collections_Generic_HashSet_Int32Enum___Add(
                                                                                                (System_Collections_Generic_HashSet_T__o *)hashDelType,
                                                                                                addType,
                                                                                                (const MethodInfo_4283678 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (addTaskList = (System_Collections_Generic_List_object__o *)this->fields.addTaskList) == 0)
    || (items = addTaskList->fields._items,
        v18 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++addTaskList->fields._version,
        !items) )
  {
LABEL_12:
    sub_21FFECC(hashDelType, task);
  }
  size = addTaskList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      addTaskList,
      (Il2CppObject *)task,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &items->obj.klass + size;
    addTaskList->fields._size = size + 1;
    v20[4] = (Il2CppClass *)task;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v20 + 4), (int32_t)task, v10, v11, v12, v13, v14, v15);
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
  if ( (byte_593B30E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__122_0__);
    byte_593B30E = 1;
  }
  if ( !svtData || (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(svtData, 0)) == 0 )
    sub_21FFECC(this, svtData);
  AllValidBGMChangeBuffArray = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0);
  v6 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(v6, v4, Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__122_0__, 0);
  BasicHelper__ForEach_object_(
    AllValidBGMChangeBuffArray,
    (System_Action_T__o *)v6,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void BattleFieldEnvironmentData__AddUpdateBgmTask(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  PlayCurrentBgmLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_593B310 & 1) == 0 )
  {
    sub_21FFC50(&PlayCurrentBgmLogicTask_TypeInfo);
    byte_593B310 = 1;
  }
  v3 = (PlayCurrentBgmLogicTask_o *)sub_21FFEBC(PlayCurrentBgmLogicTask_TypeInfo);
  PlayCurrentBgmLogicTask___ctor(v3, 0);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 3, 1, v4);
}


void BattleFieldEnvironmentData__AddUpdateViewTask(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  UpdateFieldViewBattleLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_593B30F & 1) == 0 )
  {
    sub_21FFC50(&UpdateFieldViewBattleLogicTask_TypeInfo);
    byte_593B30F = 1;
  }
  v3 = (UpdateFieldViewBattleLogicTask_o *)sub_21FFEBC(UpdateFieldViewBattleLogicTask_TypeInfo);
  UpdateFieldViewBattleLogicTask___ctor(v3, 0);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 2, 1, v4);
}


void BattleFieldEnvironmentData__AfterApplyOtherBuffRemove(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        BattleActionData_BuffData_o *actBuffData,
        bool isUpdateView,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *ApplyTargetSvtAndHpDictionary; // x0
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *v11; // x24
  int32_t Count; // w23
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  long double v15; // q0
  BattleActionEffect_SubFieldBuff_o *v16; // x23
  _QWORD *v17; // x23
  __int64 v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x23
  const MethodInfo_436BFB4 *v22; // x4
  __int64 v23; // x0
  __int64 v24; // x1
  BattleServantData_o *v25; // x24
  int v26; // w19
  int32_t v27; // w25
  BattleActionEffect_SubChangeMaxHpFieldBuff_o *v28; // x26
  unsigned int uniqueId; // w25
  __int64 v30; // x0
  __int64 v31; // x1
  BattleActionEffect_Base_o *v32; // x1
  __int64 v33; // x1
  UnityEngine_Object_o *Perf_k__BackingField; // x20
  BattleFieldEnvironmentData_o *v35; // [xsp+0h] [xbp-E0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-D8h] BYREF
  Il2CppObject *key; // [xsp+30h] [xbp-B0h] BYREF
  BattleServantData_o *v38; // [xsp+38h] [xbp-A8h] BYREF
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // [xsp+40h] [xbp-A0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v40; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_KeyValuePair_object__ValueTuple_int__int___o v41; // 0:x0.16

  if ( (byte_593B308 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__ValueTuple_int__int___Deconstruct__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&BattleActionEffect_SubChangeMaxHpFieldBuff_TypeInfo);
    sub_21FFC50(&BattleActionEffect_SubFieldBuff_TypeInfo);
    byte_593B308 = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  key = 0;
  v38 = 0;
  memset(&v40, 0, sizeof(v40));
  ApplyTargetSvtAndHpDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BattleFieldEnvironmentData__GetApplyTargetSvtAndHpDictionary(
                                                                                             this,
                                                                                             removeBuffArray,
                                                                                             (const MethodInfo *)actBuffData);
  if ( !ApplyTargetSvtAndHpDictionary )
    goto LABEL_34;
  v11 = ApplyTargetSvtAndHpDictionary;
  Count = System_Collections_Generic_Dictionary_object__ValueTuple_int__int____get_Count(
            ApplyTargetSvtAndHpDictionary,
            (const MethodInfo_3FA909C *)Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___get_Count__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_53145360(this, removeBuffArray, 1, v13);
  if ( actBuffData && Count >= 1 )
  {
    v16 = (BattleActionEffect_SubFieldBuff_o *)sub_21FFEBC(BattleActionEffect_SubFieldBuff_TypeInfo);
    BattleActionEffect_SubFieldBuff___ctor(v16, removeBuffArray, 0);
    BattleActionData_BuffData__SetActionEffectProc(actBuffData, (BattleActionEffect_Base_o *)v16, 0);
  }
  v17 = Method_System_Array_Empty_BattleBuffData_BuffData___;
  v18 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
  if ( !v18 )
  {
    sub_2237B54(Method_System_Array_Empty_BattleBuffData_BuffData___);
    v18 = v17[7];
  }
  v19 = *(_QWORD *)(v18 + 16);
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_2237AF8(v15);
  if ( !*(_DWORD *)(v19 + 228) )
    *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(v19, v14);
  v20 = *(_QWORD *)(v17[7] + 16LL);
  v35 = this;
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_2237AF8(v15);
  v21 = **(_QWORD **)(v20 + 184);
  System_Collections_Generic_Dictionary_object__ValueTuple_int__int____GetEnumerator(
    &v36,
    v11,
    (const MethodInfo_3FA97DC *)Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___GetEnumerator__);
  v40 = v36;
  v36.fields._dictionary = 0;
  *(_QWORD *)&v36.fields._version = &v40;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__ValueTuple_int__int____MoveNext(
            &v40,
            (const MethodInfo_412FDA0 *)Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___MoveNext__) )
  {
    current = v40.fields._current;
    v41.fields.key = (Il2CppObject *)&current;
    v41.fields.value = (struct System_ValueTuple_int__int__o)&v38;
    System_Collections_Generic_KeyValuePair_object__ValueTuple_int__int____Deconstruct(
      v41,
      &key,
      (System_ValueTuple_int__int__o *)Method_System_Collections_Generic_KeyValuePair_BattleServantData__ValueTuple_int__int___Deconstruct__,
      v22);
    v25 = v38;
    if ( !v38 )
      sub_21FFECC(v23, v24);
    v26 = (int)key;
    v27 = HIDWORD(key);
    BattleServantData__checkUpdateUpdownHp(v38, SHIDWORD(key), 0, 0);
    BattleServantData__FixHpWhenHpBaseBuffReleased(v25, 0, 0);
    BattleServantData__ResetBaseHpBuffActivedTimeHealValue(v25, 0);
    if ( v25->fields.isEntry )
    {
      v28 = (BattleActionEffect_SubChangeMaxHpFieldBuff_o *)sub_21FFEBC(BattleActionEffect_SubChangeMaxHpFieldBuff_TypeInfo);
      BattleActionEffect_SubChangeMaxHpFieldBuff___ctor(v28, v27, 0);
      uniqueId = v25->fields.uniqueId;
      v30 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *))v25->klass->vtable._13_get_resultHp.methodPtr)(
              v25,
              v25->klass->vtable._13_get_resultHp.method);
      if ( !v28 )
        sub_21FFECC(v30, v31);
      v32 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpFieldBuff_o *, __int64, _QWORD, _QWORD, const MethodInfo *))v28->klass->vtable._7_InitBuff.methodPtr)(
                                           v28,
                                           v21,
                                           uniqueId,
                                           (unsigned int)(v30 - v26),
                                           v28->klass->vtable._7_InitBuff.method);
      if ( actBuffData )
        BattleActionData_BuffData__SetActionEffectProc(actBuffData, v32, 0);
      if ( isUpdateView )
        BattleServantData__updateHp(v25, 1, 0);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__ValueTuple_int__int____Dispose(
    &v40,
    (const MethodInfo_412FEC0 *)Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__ValueTuple_int__int___Dispose__);
  if ( isUpdateView && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0) )
  {
    Perf_k__BackingField = (UnityEngine_Object_o *)v35->fields._Perf_k__BackingField;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v33);
    if ( UnityEngine_Object__op_Inequality(Perf_k__BackingField, 0, 0) )
    {
      ApplyTargetSvtAndHpDictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v35->fields._Perf_k__BackingField;
      if ( ApplyTargetSvtAndHpDictionary )
      {
        BattlePerformance__UpdateFieldView((BattlePerformance_o *)ApplyTargetSvtAndHpDictionary, 0);
        return;
      }
LABEL_34:
      sub_21FFECC(ApplyTargetSvtAndHpDictionary, v10);
    }
  }
}


void BattleFieldEnvironmentData__AfterSubBuffFromIndividuality(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        BattleActionData_BuffData_o *actBuffData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  BattleFieldEnvironmentData__AfterApplyOtherBuffRemove(this, removeBuffArray, actBuffData, 0, v4);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v5; // x0
  __int64 v6; // x1
  BattleFieldEnvironmentData___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__139_0; // x20
  Il2CppObject *v11; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_593B31C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__AllApplyOtherBuffEnumerable_b__139_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B31C = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_21FFECC(0, v4);
  v5 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
  v7 = BattleFieldEnvironmentData___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v6);
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__139_0 = (System_Func_object__bool__o *)static_fields->__9__139_0;
  if ( !_9__139_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__139_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__139_0,
      v11,
      Method_BattleFieldEnvironmentData___c__AllApplyOtherBuffEnumerable_b__139_0__,
      0);
    v12 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v12->__9__139_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__139_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__139_0, (int32_t)_9__139_0, v13, v14, v15, v16, v17, v18);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__Where_object_(
                                                                                v8,
                                                                                (System_Func_TSource__bool__o *)_9__139_0,
                                                                                (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
}


bool BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_53379132; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x3
  System_Int32_array *FieldAndBuffIndividuality; // x0
  __int64 v9; // x1

  Individualities_53379132 = buffIndiv;
  if ( opSvt )
    Individualities_53379132 = BattleServantData__getIndividualities_53379132(opSvt, buffIndiv, 1, 0, 0);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buffIndiv);
  FieldAndBuffIndividuality = BattleFieldEnvironmentData__GetFieldAndBuffIndividuality(this, 1, 0, v7);
  if ( !BuffData )
    sub_21FFECC(FieldAndBuffIndividuality, v9);
  return BattleBuffData__checkActBuff(BuffData, 105, FieldAndBuffIndividuality, Individualities_53379132, 0, 0);
}


void BattleFieldEnvironmentData__CheckFieldBuff(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *fieldSvtIds,
        FieldAliveServantData_o *aliveSvtData,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_593B312 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass127_0__CheckFieldBuff_b__0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass127_0_TypeInfo);
    byte_593B312 = 1;
  }
  v9 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass127_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = fieldSvtIds;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 24), (int32_t)fieldSvtIds, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = aliveSvtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)aliveSvtData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v9 + 40) = logic;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)logic, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v9,
    Method_BattleFieldEnvironmentData___c__DisplayClass127_0__CheckFieldBuff_b__0__,
    0);
  BattleFieldEnvironmentData__ReflectChangedBuffStateApplyOther(this, v36, v37);
}


void BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  RemovedBuffInfo_o *v5; // x1
  const MethodInfo *v6; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_21FFECC(0, v4);
  v5 = BattleBuffData__usedProgressing(BuffData, 1, 0, 0);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v5, 1, v6);
}


void BattleFieldEnvironmentData__ClearCachedApplyOtherBuff(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___o *cachedApplyBuffEachSvtDictionary; // x0

  if ( (byte_593B31B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___Clear__);
    byte_593B31B = 1;
  }
  cachedApplyBuffEachSvtDictionary = this->fields.cachedApplyBuffEachSvtDictionary;
  if ( !cachedApplyBuffEachSvtDictionary )
    sub_21FFECC(0, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)cachedApplyBuffEachSvtDictionary,
    (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___Clear__);
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
    sub_21FFECC(this, a);
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


void BattleFieldEnvironmentData__DecrementIntervalTurn(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  int resumptionHpFromLossMaxHp; // w8
  BattleBuffData_o *v6; // x20
  unsigned int v7; // w21
  __int64 v8; // x22
  bool IsUpdateBuffWaiting_k__BackingField; // w21

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_12;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetAllIntervalBuffArray(BuffData, 0);
  if ( !BuffData )
    goto LABEL_12;
  resumptionHpFromLossMaxHp = BuffData->fields.resumptionHpFromLossMaxHp;
  v6 = BuffData;
  if ( resumptionHpFromLossMaxHp >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= resumptionHpFromLossMaxHp )
        sub_21FFED4(BuffData);
      v8 = *((_QWORD *)&v6->fields.passiveList + (int)v7);
      if ( !v8 )
        break;
      BuffData = *(BattleBuffData_o **)(v8 + 360);
      if ( !BuffData )
        break;
      BattleBuffData_IntervalData__DecrementTurn((BattleBuffData_IntervalData_o *)BuffData, 0);
      BuffData = *(BattleBuffData_o **)(v8 + 632);
      if ( BuffData )
        BattleBuffData_BuffData_ApplyBuffManager__ReflectIntervalToApplyOther(
          (BattleBuffData_BuffData_ApplyBuffManager_o *)BuffData,
          0);
      resumptionHpFromLossMaxHp = v6->fields.resumptionHpFromLossMaxHp;
      if ( (int)++v7 >= resumptionHpFromLossMaxHp )
        goto LABEL_11;
    }
LABEL_12:
    sub_21FFECC(BuffData, v4);
  }
LABEL_11:
  IsUpdateBuffWaiting_k__BackingField = this->fields._IsUpdateBuffWaiting_k__BackingField;
  this->fields._IsUpdateBuffWaiting_k__BackingField = IsUpdateBuffWaiting_k__BackingField
                                                    | !BasicHelper__IsNullOrEmpty(
                                                         (System_Collections_ICollection_o *)v6,
                                                         0);
}


void BattleFieldEnvironmentData__DelForceBuffArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  BattleFieldEnvironmentData___c_c *v9; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__101_0; // x20
  Il2CppObject *v12; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593B303 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DelForceBuffArray_b__101_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B303 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffArray, 0) )
  {
    BuffData = BattleFieldEnvironmentData__get_BuffData(this, v5);
    if ( !BuffData )
      sub_21FFECC(0, v7);
    BattleBuffData__DelForceBuff(BuffData, buffArray, 0);
    v9 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v8);
      v9 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v9->static_fields;
    _9__101_0 = (System_Action_object__o *)static_fields->__9__101_0;
    if ( !_9__101_0 )
    {
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, v8);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__101_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__101_0,
        v12,
        Method_BattleFieldEnvironmentData___c__DelForceBuffArray_b__101_0__,
        0);
      v13 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v13->__9__101_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__101_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v13->__9__101_0,
        (int32_t)_9__101_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    BasicHelper__ForEach_object_(
      (System_Collections_Generic_IEnumerable_T__o *)buffArray,
      (System_Action_T__o *)_9__101_0,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__66_0; // x20
  Il2CppObject *v6; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593B2E9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_21FFC50(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__66_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2E9 = 1;
  }
  if ( !servantEnumerable )
    return 0;
  v3 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v3 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__66_0 = (System_Func_object__object__o *)static_fields->__9__66_0;
  if ( !_9__66_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__66_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_object__object____ctor(
      _9__66_0,
      v6,
      Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__66_0__,
      0);
    v7 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v7->__9__66_0 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__66_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v7->__9__66_0, (int32_t)_9__66_0, v8, v9, v10, v11, v12, v13);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                                (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__66_0,
                                                                                (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
}


void BattleFieldEnvironmentData__ExecRemoveAllBuffAfterProc(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v5; // x0
  System_Object_array *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_593B315 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    byte_593B315 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_21FFECC(0, v4);
  v5 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
  v6 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_53145360(this, (BattleBuffData_BuffData_array *)v6, 1, v7);
  BattleFieldEnvironmentData__InitializeBuffData(this, v8);
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
  if ( (byte_593B2FF & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    byte_593B2FF = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0 )
  {
    sub_21FFECC(this, removeBuffInfo);
  }
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)this,
         (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_53145360(
    v6,
    (BattleBuffData_BuffData_array *)v7,
    isAddAfterTask,
    v8);
  return removeBuffInfo;
}


void BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_53145360(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x1
  BattleFieldEnvironmentData___c_c *v17; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__96_2; // x22
  Il2CppObject *v20; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x22
  __int64 v30; // x9
  int32_t *p_offset; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  BattleBuffData_BuffData_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x1
  BattleFieldEnvironmentData___c_c *v50; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *v51; // x8
  System_Func_object__bool__o *_9__96_0; // x22
  Il2CppObject *v53; // x23
  MissionNaviTransitionBoardItem_o *v54; // x0
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_Collections_Generic_IEnumerable_T__o *v61; // x20
  System_Action_object__o *v62; // x22
  const MethodInfo *v63; // x1
  __int64 v64; // [xsp+18h] [xbp-48h]

  if ( (byte_593B300 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__96_0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__96_2__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass96_0__ExecRemoveBuffAfterProc_b__1__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass96_0_TypeInfo);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B300 = 1;
  }
  v7 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_51;
  *(_QWORD *)(v7 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 24) = isAddAfterTask;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0) )
    return;
  v17 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v16);
    v17 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__96_2 = (System_Func_object__bool__o *)static_fields->__9__96_2;
  if ( !_9__96_2 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v16);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__96_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__96_2,
      v20,
      Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__96_2__,
      0);
    v21 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v21->__9__96_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__96_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__96_2, (int32_t)_9__96_2, v22, v23, v24, v25, v26, v27);
  }
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
         (System_Func_TSource__bool__o *)_9__96_2,
         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v8 )
LABEL_51:
    sub_21FFECC(v8, v9);
  klass = v8->klass;
  v29 = v8;
  v30 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v30;
      p_offset += 4;
      if ( !v30 )
        goto LABEL_16;
    }
    v32 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_16:
    v32 = sub_2237E2C(v8, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v32)(
          v29,
          *(_QWORD *)(v32 + 8));
  v64 = v33;
  while ( 1 )
  {
    if ( !v64 )
      sub_21FFECC(v33, v34);
    v35 = *(_QWORD *)v64;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_24;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_24:
      v38 = sub_2237E2C(v64, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v64, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v64;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v41 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_31;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_31:
      v42 = sub_2237E2C(v64, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
    }
    v43 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v64, *(_QWORD *)(v42 + 8));
    if ( !v43 )
      sub_21FFECC(0, v44);
    BattleBuffData_BuffData__SetOriginalApplyManagerRemoved(v43, 0);
  }
  v45 = *(_QWORD *)v64;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
  {
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_39;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_39:
    v48 = sub_2237E2C(v64, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v64, *(_QWORD *)(v48 + 8));
  v50 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v49);
    v50 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v51 = v50->static_fields;
  _9__96_0 = (System_Func_object__bool__o *)v51->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !*(&v50->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v50, v49);
      v51 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v53 = (Il2CppObject *)v51->__9;
    _9__96_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__96_0,
      v53,
      Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__96_0__,
      0);
    v54 = (MissionNaviTransitionBoardItem_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v54[1].klass = (MissionNaviTransitionBoardItem_c *)_9__96_0;
    sub_21FFBF4(v54 + 1, (int32_t)_9__96_0, v55, v56, v57, v58, v59, v60);
  }
  v61 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                         (System_Func_TSource__bool__o *)_9__96_0,
                                                         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v62 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v62,
    (Il2CppObject *)v7,
    Method_BattleFieldEnvironmentData___c__DisplayClass96_0__ExecRemoveBuffAfterProc_b__1__,
    0);
  BasicHelper__ForEach_object_(
    v61,
    (System_Action_T__o *)v62,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddUpdateViewTask(this, v63);
}


// local variable allocation has failed, the output may be wrong!
void BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_53146744(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x21

  if ( !removeBuff )
    sub_21FFECC(this, 0);
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


System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___o *BattleFieldEnvironmentData__GetApplyTargetSvtAndHpDictionary(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v5; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__103_0; // x21
  Il2CppObject *v8; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x20
  const MethodInfo *v18; // x3
  BattleServantData_array *ApplyTargetSvtArray; // x0
  __int64 v20; // x1
  BattleFieldEnvironmentData___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  struct BattleFieldEnvironmentData___c_StaticFields *v23; // x9
  System_Func_object__object__o *_9__103_1; // x20
  Il2CppObject *v25; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct BattleFieldEnvironmentData___c_StaticFields *v33; // x9
  System_Func_T__TResult__o *_9__103_2; // x21
  Il2CppObject *v35; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v44; // x19

  if ( (byte_593B305 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__ValueTuple_int__int____);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_21FFC50(&System_Func_BattleServantData__BattleServantData__TypeInfo);
    sub_21FFC50(&System_Func_BattleServantData__ValueTuple_int__int___TypeInfo);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__GetApplyTargetSvtAndHpDictionary_b__103_0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__GetApplyTargetSvtAndHpDictionary_b__103_1__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__GetApplyTargetSvtAndHpDictionary_b__103_2__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B305 = 1;
  }
  v5 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, buffArray);
    v5 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__103_0 = (System_Func_object__bool__o *)static_fields->__9__103_0;
  if ( !_9__103_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, buffArray);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__103_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__103_0,
      v8,
      Method_BattleFieldEnvironmentData___c__GetApplyTargetSvtAndHpDictionary_b__103_0__,
      0);
    v9 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v9->__9__103_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__103_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__103_0, (int32_t)_9__103_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__103_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v17 = System_Linq_Enumerable__ToArray_object_(
          v16,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v17,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_BattleBuffData_BuffData___) )
  {
    ApplyTargetSvtArray = BattleFieldEnvironmentData__GetApplyTargetSvtArray(
                            this,
                            (BattleBuffData_BuffData_array *)v17,
                            1,
                            v18);
    v21 = BattleFieldEnvironmentData___c_TypeInfo;
    v22 = (System_Collections_Generic_IEnumerable_TSource__o *)ApplyTargetSvtArray;
    if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v20);
      v21 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v23 = v21->static_fields;
    _9__103_1 = (System_Func_object__object__o *)v23->__9__103_1;
    if ( !_9__103_1 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v20);
        v23 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v25 = (Il2CppObject *)v23->__9;
      _9__103_1 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleServantData__BattleServantData__TypeInfo);
      System_Func_object__object____ctor(
        _9__103_1,
        v25,
        Method_BattleFieldEnvironmentData___c__GetApplyTargetSvtAndHpDictionary_b__103_1__,
        0);
      v26 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v26->__9__103_1 = (struct System_Func_BattleServantData__BattleServantData__o *)_9__103_1;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v26->__9__103_1,
        (int32_t)_9__103_1,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v21 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      v21 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v33 = v21->static_fields;
    _9__103_2 = (System_Func_T__TResult__o *)v33->__9__103_2;
    if ( !_9__103_2 )
    {
      if ( !*(&v21->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v21, v20);
        v33 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)v33->__9;
      _9__103_2 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_BattleServantData__ValueTuple_int__int___TypeInfo);
      System_Func_object__ValueTuple_int__int_____ctor(
        _9__103_2,
        v35,
        Method_BattleFieldEnvironmentData___c__GetApplyTargetSvtAndHpDictionary_b__103_2__,
        0);
      v36 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v36->__9__103_2 = (struct System_Func_BattleServantData__ValueTuple_int__int___o *)_9__103_2;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v36->__9__103_2,
        (int32_t)_9__103_2,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    return (System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___o *)System_Linq_Enumerable__ToDictionary_object__object__ValueTuple_int__int__(
                                                                                                 v22,
                                                                                                 (System_Func_TSource__TKey__o *)_9__103_1,
                                                                                                 (System_Func_TSource__TElement__o *)_9__103_2,
                                                                                                 (const MethodInfo_3869100 *)Method_System_Linq_Enumerable_ToDictionary_BattleServantData__BattleServantData__ValueTuple_int__int____);
  }
  else
  {
    v44 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___TypeInfo);
    System_Collections_Generic_Dictionary_object__ValueTuple_int__int_____ctor(
      v44,
      (const MethodInfo_3FA8A54 *)Method_System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int____ctor__);
    return (System_Collections_Generic_Dictionary_BattleServantData__ValueTuple_int__int___o *)v44;
  }
}


BattleServantData_array *BattleFieldEnvironmentData__GetApplyTargetSvtArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        bool isIncludeSubMember,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  int32_t FieldBuffApplyTargetType; // w1
  const MethodInfo *v10; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buffArray);
  if ( !BuffData )
    sub_21FFECC(0, v8);
  FieldBuffApplyTargetType = BattleBuffData__GetFieldBuffApplyTargetType(BuffData, buffArray, 0);
  return BattleFieldEnvironmentData__GetApplyTargetSvtArray_53150100(
           this,
           FieldBuffApplyTargetType,
           isIncludeSubMember,
           v10);
}


// local variable allocation has failed, the output may be wrong!
BattleServantData_array *BattleFieldEnvironmentData__GetApplyTargetSvtArray_53150100(
        BattleFieldEnvironmentData_o *this,
        int32_t applyTargetType,
        bool isIncludeSubMember,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_BattleServantData__o *ApplyTargetServantArray; // x0

  if ( (byte_593B306 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    byte_593B306 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&applyTargetType);
  if ( !BuffData )
    sub_21FFECC(0, v8);
  ApplyTargetServantArray = BattleBuffData__GetApplyTargetServantArray(
                              BuffData,
                              this->fields._Data_k__BackingField,
                              applyTargetType,
                              isIncludeSubMember,
                              0);
  return (BattleServantData_array *)System_Linq_Enumerable__ToArray_object_(
                                      (System_Collections_Generic_IEnumerable_TSource__o *)ApplyTargetServantArray,
                                      (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x20
  void *cachedApplyBuffEachSvtDictionary; // x0
  Il2CppObject *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  long double v20; // q0
  Il2CppObject *v21; // x19
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__140_0; // x20
  Il2CppObject *v24; // x21
  MissionNaviTransitionBoardItem_o *p__9__140_0; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v32; // x19
  _QWORD *v33; // x19
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  System_Collections_Generic_Dictionary_K__V__o *v37; // x21
  System_Func_T__TResult__o *v38; // x22
  struct System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___o *v39; // x21
  Il2CppObject *v40; // x22
  const MethodInfo *v41; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v42; // x19
  System_Func_object__bool__o *v43; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x19
  System_Func_object__object__o *v45; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593B31D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_BasicHelper_Remove_BattleServantData__List_BattleBuffData_BuffData____);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___set_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_21FFC50(&System_Func_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData____bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_21FFC50(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__GetApplyToSelfBuffEnumerable_b__140_0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass140_0__GetApplyToSelfBuffEnumerable_b__1__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass140_0__GetApplyToSelfBuffEnumerable_b__2__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass140_0__GetApplyToSelfBuffEnumerable_b__3__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass140_0_TypeInfo);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B31D = 1;
  }
  value = 0;
  v5 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass140_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)svtData, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v7 = *(Il2CppObject **)(v5 + 16);
  if ( v7 )
  {
    cachedApplyBuffEachSvtDictionary = this->fields.cachedApplyBuffEachSvtDictionary;
    if ( cachedApplyBuffEachSvtDictionary )
    {
      if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
             (System_Collections_Generic_Dictionary_object__object__o *)cachedApplyBuffEachSvtDictionary,
             v7,
             &value,
             (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___TryGetValue__) )
      {
        v21 = value;
        cachedApplyBuffEachSvtDictionary = BattleFieldEnvironmentData___c_TypeInfo;
        if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v7);
          cachedApplyBuffEachSvtDictionary = BattleFieldEnvironmentData___c_TypeInfo;
        }
        static_fields = (struct BattleFieldEnvironmentData___c_StaticFields *)*((_QWORD *)cachedApplyBuffEachSvtDictionary
                                                                              + 23);
        _9__140_0 = (System_Predicate_object__o *)static_fields->__9__140_0;
        if ( !_9__140_0 )
        {
          if ( !*((_DWORD *)cachedApplyBuffEachSvtDictionary + 57) )
          {
            j_il2cpp_runtime_class_init_0(cachedApplyBuffEachSvtDictionary, v7);
            static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
          }
          v24 = (Il2CppObject *)static_fields->__9;
          _9__140_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_object____ctor(
            _9__140_0,
            v24,
            Method_BattleFieldEnvironmentData___c__GetApplyToSelfBuffEnumerable_b__140_0__,
            0);
          p__9__140_0 = (MissionNaviTransitionBoardItem_o *)&BattleFieldEnvironmentData___c_TypeInfo->static_fields->__9__140_0;
          p__9__140_0->klass = (MissionNaviTransitionBoardItem_c *)_9__140_0;
          sub_21FFBF4(p__9__140_0, (int32_t)_9__140_0, v26, v27, v28, v29, v30, v31);
        }
        if ( v21 )
        {
          System_Collections_Generic_List_object___RemoveAll(
            (System_Collections_Generic_List_object__o *)v21,
            (System_Predicate_T__o *)_9__140_0,
            (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)value;
        }
      }
      else
      {
        v37 = (System_Collections_Generic_Dictionary_K__V__o *)this->fields.cachedApplyBuffEachSvtDictionary;
        v38 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData____bool__TypeInfo);
        System_Func_KeyValuePair_object__object___bool____ctor(
          v38,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass140_0__GetApplyToSelfBuffEnumerable_b__1__,
          0);
        BasicHelper__Remove_object__object_(
          v37,
          (System_Func_KeyValuePair_K__V___bool__o *)v38,
          (const MethodInfo_37E20C8 *)Method_BasicHelper_Remove_BattleServantData__List_BattleBuffData_BuffData____);
        v39 = this->fields.cachedApplyBuffEachSvtDictionary;
        v40 = *(Il2CppObject **)(v5 + 16);
        v42 = BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(this, v41);
        v43 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v43,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass140_0__GetApplyToSelfBuffEnumerable_b__2__,
          0);
        v44 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v42,
                (System_Func_TSource__bool__o *)v43,
                (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
        v45 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
        System_Func_object__object____ctor(
          v45,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass140_0__GetApplyToSelfBuffEnumerable_b__3__,
          0);
        v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                     v44,
                                                                     (System_Func_TSource__TResult__o *)v45,
                                                                     (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
        cachedApplyBuffEachSvtDictionary = System_Linq_Enumerable__ToList_object_(
                                             v46,
                                             (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
        if ( v39 )
        {
          v32 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)cachedApplyBuffEachSvtDictionary;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v39,
            v40,
            (Il2CppObject *)cachedApplyBuffEachSvtDictionary,
            (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___set_Item__);
          return v32;
        }
      }
    }
LABEL_27:
    sub_21FFECC(cachedApplyBuffEachSvtDictionary, v7);
  }
  v33 = Method_System_Array_Empty_BattleBuffData_BuffData___;
  v34 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
  if ( !v34 )
  {
    sub_2237B54(Method_System_Array_Empty_BattleBuffData_BuffData___);
    v34 = v33[7];
  }
  v35 = *(_QWORD *)(v34 + 16);
  if ( (*(_WORD *)(v35 + 309) & 1) == 0 )
    v35 = sub_2237AF8(v20);
  if ( !*(_DWORD *)(v35 + 228) )
    *(__n128 *)&v20 = j_il2cpp_runtime_class_init_0(v35, v7);
  v36 = *(_QWORD *)(v33[7] + 16LL);
  if ( (*(_WORD *)(v36 + 309) & 1) == 0 )
    v36 = sub_2237AF8(v20);
  return **(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o ***)(v36 + 184);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_53160220(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        int32_t buffGroup,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_593B31E & 1) == 0 )
  {
    sub_21FFC50(&BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_TypeInfo);
    byte_593B31E = 1;
  }
  v7 = sub_21FFEBC(BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v7 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 56) = svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 56), (int32_t)svtData, v14, v15, v16, v17, v18, v19);
  result = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v7;
  *(_DWORD *)(v7 + 68) = buffGroup;
  return result;
}


System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *BattleFieldEnvironmentData__GetBaseBgmList(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__77_0; // x20
  Il2CppObject *v7; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_593B2F4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_21FFC50(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__77_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2F4 = 1;
  }
  v3 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = this->fields.bgmList;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v3 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__77_0 = (System_Func_object__bool__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__77_0, v7, Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__77_0__, 0);
    v8 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v8->__9__77_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__77_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__77_0, (int32_t)_9__77_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
          (System_Func_TSource__bool__o *)_9__77_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  return (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)System_Linq_Enumerable__ToList_object_(
                                                                                    v15,
                                                                                    (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
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
    sub_21FFECC(this, 0);
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
  __int64 v6; // x1
  int resumptionHpFromLossMaxHp; // w8
  BattleBuffData_o *v8; // x20
  unsigned int v9; // w22
  __int64 v10; // x23

  if ( (byte_593B2EF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593B2EF = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v4);
  if ( !BuffData )
    goto LABEL_15;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetFieldChangeArray(BuffData, 0);
  if ( !BuffData )
    goto LABEL_15;
  resumptionHpFromLossMaxHp = BuffData->fields.resumptionHpFromLossMaxHp;
  v8 = BuffData;
  if ( resumptionHpFromLossMaxHp >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= resumptionHpFromLossMaxHp )
        sub_21FFED4(BuffData);
      v10 = *((_QWORD *)&v8->fields.passiveList + (int)v9);
      if ( !v10 )
        break;
      BuffData = (BattleBuffData_o *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v10 + 56), 0);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v3 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v3,
          *(System_Collections_Generic_IEnumerable_T__o **)(v10 + 56),
          (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      resumptionHpFromLossMaxHp = v8->fields.resumptionHpFromLossMaxHp;
      if ( (int)++v9 >= resumptionHpFromLossMaxHp )
        goto LABEL_13;
    }
LABEL_15:
    sub_21FFECC(BuffData, v6);
  }
LABEL_13:
  if ( !v3 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_593B314 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593B314 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)individuality, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v11);
    if ( !v9 )
LABEL_13:
      sub_21FFECC(IsNullOrEmpty, v11);
  }
  else
  {
    if ( !v9 )
      goto LABEL_13;
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v12);
  }
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0) )
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( exceptDelTarget )
    return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v9, v13);
  else
    return System_Collections_Generic_List_int___ToArray(
             v9,
             (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *BattleFieldEnvironmentData__GetFieldAndBuffIndividuality(
        BattleFieldEnvironmentData_o *this,
        bool isActiveOnly,
        bool isIgnoreUnRemovableIndividuality,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  System_Int32_array *BuffIndividualities; // x0

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)isActiveOnly);
  if ( !BuffData )
    sub_21FFECC(0, v8);
  BuffIndividualities = BattleBuffData__getBuffIndividualities(
                          BuffData,
                          isActiveOnly,
                          0,
                          isIgnoreUnRemovableIndividuality,
                          0,
                          0,
                          0);
  return (System_Int32_array *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, System_Int32_array *, __int64, const MethodInfo *))this->klass->vtable._4_GetFieldIndividuality.methodPtr)(
                                 this,
                                 BuffIndividualities,
                                 1,
                                 this->klass->vtable._4_GetFieldIndividuality.method);
}


System_Int32_array *BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        bool exceptDelTarget,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x22
  __int64 v8; // x1
  BattleFieldEnvironmentData___c_c *v9; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__69_0; // x24
  Il2CppObject *v13; // x25
  struct BattleFieldEnvironmentData___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_T__o *baseBackground; // x0
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  const MethodInfo *v23; // x1
  System_Collections_ICollection_o *QuestCommonIndividuality; // x0
  const MethodInfo *v25; // x1
  System_Int32_array *v26; // x1
  const MethodInfo *v27; // x4

  if ( (byte_593B2EC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____91526752);
    sub_21FFC50(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__69_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2EC = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = this->fields.backgroundList;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v8);
    v9 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__69_0 = (System_Func_object__bool__o *)static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__69_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__69_0,
      v13,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__69_0__,
      0);
    v14 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v14->__9__69_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__69_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__69_0, (int32_t)_9__69_0, v15, v16, v17, v18, v19, v20);
  }
  baseBackground = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                                                                    (System_Func_TSource__bool__o *)_9__69_0,
                                                                    (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____91526752);
  if ( !baseBackground )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)this->fields.baseBackground;
    if ( !baseBackground )
      goto LABEL_18;
  }
  monitor = (System_Collections_Generic_IEnumerable_T__o *)baseBackground[2].monitor;
  if ( !monitor )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                                                                      this,
                                                                      0);
    if ( v7 )
      goto LABEL_16;
LABEL_18:
    sub_21FFECC(baseBackground, monitor);
  }
  if ( !v7 )
    goto LABEL_18;
  System_Collections_Generic_List_int___AddRange(
    v7,
    monitor,
    (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
  QuestCommonIndividuality = (System_Collections_ICollection_o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                   this,
                                                                   v23);
  if ( !BasicHelper__IsNullOrEmpty(QuestCommonIndividuality, 0) )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                      this,
                                                                      v25);
LABEL_16:
    System_Collections_Generic_List_int___AddRange(
      v7,
      baseBackground,
      (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v26 = System_Collections_Generic_List_int___ToArray(
          v7,
          (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, v26, addIndiv, exceptDelTarget, v27);
}


System_Int32_array *BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
        const MethodInfo *method)
{
  __int64 v5; // x20
  const MethodInfo *v6; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_int__o **v15; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  System_Predicate_int__o *v17; // x21

  if ( (byte_593B307 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&System_Predicate_int__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass108_0__GetIndividualityExceptDelTarget_b__0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass108_0_TypeInfo);
    byte_593B307 = 1;
  }
  v5 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass108_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v6);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0, 0, 0, 1, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = BuffData;
  v15 = (System_Collections_Generic_List_int__o **)(v5 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)BuffData, v9, v10, v11, v12, v13, v14);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v16 = *v15;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0);
  if ( !v16 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v15 )
    goto LABEL_13;
  if ( (*v15)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_21FFECC(BuffData, v8);
  }
  v17 = (System_Predicate_int__o *)sub_21FFEBC(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass108_0__GetIndividualityExceptDelTarget_b__0__,
    0);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v17,
    (const MethodInfo_443472C *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *BattleFieldEnvironmentData__GetLinkBuffData(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x8
  BattleServantData_o *ServantData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x20
  System_Func_object__bool__o *v18; // x21

  if ( (byte_593B2F0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____91526712);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass73_0__GetLinkBuffData_b__0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass73_0_TypeInfo);
    byte_593B2F0 = 1;
  }
  v5 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = uniqueVal;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)uniqueVal, v8, v9, v10, v11, v12, v13);
  v14 = *(_QWORD *)(v5 + 16);
  if ( !v14 )
    goto LABEL_12;
  v7 = (const MethodInfo *)*(unsigned int *)(v14 + 20);
  if ( ((unsigned int)v7 & 0x80000000) == 0 )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( Data_k__BackingField )
    {
      ServantData = BattleData__getServantData(Data_k__BackingField, (int32_t)v7, 0);
      if ( ServantData )
      {
        BuffData = BattleServantData__get_BuffData(ServantData, 0);
        if ( BuffData )
          goto LABEL_9;
      }
      return 0;
    }
LABEL_12:
    sub_21FFECC(Data_k__BackingField, v7);
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v7);
  if ( BuffData )
  {
LABEL_9:
    v17 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
    v18 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_BattleFieldEnvironmentData___c__DisplayClass73_0__GetLinkBuffData_b__0__,
      0);
    return (BattleBuffData_BuffData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                          (System_Func_TSource__bool__o *)v18,
                                          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____91526712);
  }
  return 0;
}


System_Int32_array *BattleFieldEnvironmentData__GetLinkBuffIndividuality(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *LinkBuffData; // x0
  __int64 v6; // x1
  long double v7; // q0
  System_Int32_array *result; // x0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_593B2F1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_593B2F1 = 1;
  }
  LinkBuffData = BattleFieldEnvironmentData__GetLinkBuffData(this, uniqueVal, method);
  if ( !LinkBuffData || (result = BattleBuffData_BuffData__GetIndividualty(LinkBuffData, 0, 0, 0, 0)) == 0 )
  {
    v9 = Method_System_Array_Empty_int___;
    v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v10 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_2237AF8(v7);
    if ( !*(_DWORD *)(v11 + 228) )
      *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(v11, v6);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_2237AF8(v7);
    return **(System_Int32_array ***)(v12 + 184);
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
  __int64 v6; // x1
  long double v7; // q0
  Il2CppObject *Value; // x21
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0
  System_Object_array *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Func_int__bool__o *v22; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_593B2EE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&Method_JsonManager_DeserializeArray_RangeValue___);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass71_0__GetQuestCommonIndividuality_b__0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo);
    sub_21FFC50(&StringLiteral_3046/*"BG_INDIVIDUALITY_VALUE_RANGE"*/);
    byte_593B2EE = 1;
  }
  v3 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  QuestPhaseIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                                                                                   this,
                                                                                   v4);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestPhaseIndividuality, 0)
    || (Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3046/*"BG_INDIVIDUALITY_VALUE_RANGE"*/, 0),
        System_String__IsNullOrEmpty((System_String_o *)Value, 0)) )
  {
    v9 = Method_System_Array_Empty_int___;
    v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v10 )
    {
      sub_2237B54(Method_System_Array_Empty_int___);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
      v11 = sub_2237AF8(v7);
    if ( !*(_DWORD *)(v11 + 228) )
      *(__n128 *)&v7 = j_il2cpp_runtime_class_init_0(v11, v6);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_2237AF8(v7);
    return **(System_Int32_array ***)(v12 + 184);
  }
  else
  {
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6);
    v14 = JsonManager__DeserializeArray_object_(
            Value,
            (const MethodInfo_38A056C *)Method_JsonManager_DeserializeArray_RangeValue___);
    if ( !v3 )
      sub_21FFECC(v14, v15);
    *(_QWORD *)(v3 + 16) = v14;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)v14, v16, v17, v18, v19, v20, v21);
    v22 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v22,
      (Il2CppObject *)v3,
      Method_BattleFieldEnvironmentData___c__DisplayClass71_0__GetQuestCommonIndividuality_b__0__,
      0);
    v23 = System_Linq_Enumerable__Where_int_(
            QuestPhaseIndividuality,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_386F9A8 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v23,
             (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  long double v14; // q0
  _QWORD *v15; // x19
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0

  if ( (byte_593B2ED & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    byte_593B2ED = 1;
  }
  p_questPhaseIndividuality = &this->fields.questPhaseIndividuality;
  result = this->fields.questPhaseIndividuality;
  if ( !result )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_21FFECC(0, method);
    PrioredIndividuality = BattleData__GetPrioredIndividuality(Data_k__BackingField, 0);
    *p_questPhaseIndividuality = PrioredIndividuality;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.questPhaseIndividuality,
      (int32_t)PrioredIndividuality,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    result = *p_questPhaseIndividuality;
    if ( !*p_questPhaseIndividuality )
    {
      v15 = Method_System_Array_Empty_int___;
      v16 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v16 )
      {
        sub_2237B54(Method_System_Array_Empty_int___);
        v16 = v15[7];
      }
      v17 = *(_QWORD *)(v16 + 16);
      if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
        v17 = sub_2237AF8(v14);
      if ( !*(_DWORD *)(v17 + 228) )
        *(__n128 *)&v14 = j_il2cpp_runtime_class_init_0(v17, v13);
      v18 = *(_QWORD *)(v15[7] + 16LL);
      if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
        v18 = sub_2237AF8(v14);
      return **(System_Int32_array ***)(v18 + 184);
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

  if ( (byte_593B301 & 1) == 0 )
  {
    sub_21FFC50(&ChangeBgmBuffDeleteProcess_TypeInfo);
    sub_21FFC50(&FieldChangeBuffDeleteProcess_TypeInfo);
    byte_593B301 = 1;
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
  v5 = (Il2CppObject *)sub_21FFEBC(*v4);
  System_Object___ctor(v5, 0);
  return (FieldBuffDeleteProcess_o *)v5;
}


BattleFieldEnvironmentData_SaveData_o *BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  void *backgroundList; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__7_0; // x21
  Il2CppObject *v7; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x20
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Object_array *v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  const MethodInfo *v29; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_593B2DF & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__);
    sub_21FFC50(&BattleFieldEnvironmentData_SaveData_TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2DF = 1;
  }
  backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = (struct BattleFieldEnvironmentData___c_StaticFields *)*((_QWORD *)backgroundList + 23);
  _9__7_0 = (System_Action_object__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*((_DWORD *)backgroundList + 57) )
    {
      j_il2cpp_runtime_class_init_0(backgroundList, method);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Action_object____ctor(_9__7_0, v7, Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, 0);
    v8 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v8->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__7_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__7_0, (int32_t)_9__7_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !bgmList )
    goto LABEL_15;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)_9__7_0,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v15 = sub_21FFEBC(BattleFieldEnvironmentData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_15;
  backgroundList = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)backgroundList,
                     (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v15
    || (*(_QWORD *)(v15 + 16) = backgroundList,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v15 + 16),
          (int32_t)backgroundList,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21),
        (backgroundList = this->fields.bgmList) == 0)
    || (v22 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)backgroundList,
                (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v15 + 24) = v22,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 24), (int32_t)v22, v23, v24, v25, v26, v27, v28),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v29)) == 0) )
  {
LABEL_15:
    sub_21FFECC(backgroundList, method);
  }
  SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0);
  *(_QWORD *)(v15 + 32) = SaveData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 32), (int32_t)SaveData, v31, v32, v33, v34, v35, v36);
  result = (BattleFieldEnvironmentData_SaveData_o *)v15;
  *(_DWORD *)(v15 + 40) = this->fields.addOrder;
  return result;
}


BattleBuffData_BuffData_array *BattleFieldEnvironmentData__GetUsedApplyBuffArray(
        BattleFieldEnvironmentData_o *this,
        System_Func_BattleBuffData_BuffData__bool__o *funcFilter,
        const MethodInfo *method)
{
  __int64 v5; // x21
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x19
  System_Func_object__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_593B316 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass132_0__GetUsedApplyBuffArray_b__0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass132_0_TypeInfo);
    byte_593B316 = 1;
  }
  v5 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass132_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = funcFilter,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)funcFilter, v8, v9, v10, v11, v12, v13),
        (BuffData = BattleFieldEnvironmentData__get_BuffData(this, v14)) == 0) )
  {
    sub_21FFECC(BuffData, v7);
  }
  v15 = BattleBuffData__AllBuffValidEnumerablePriorActive(BuffData, 1, 0, 0);
  v16 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass132_0__GetUsedApplyBuffArray_b__0__,
    0);
  v17 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_object_(
                                            v17,
                                            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


// attributes: thunk
void BattleFieldEnvironmentData__InitBG(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData__InitStageField(this, method);
}


void BattleFieldEnvironmentData__InitStageField(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleData_o *Data_k__BackingField; // x0
  StageEntity_o *StageEntity; // x0
  BattleData_o *v5; // x21
  StageEntity_o *v6; // x20
  Generator_BGFromQuestPhase_o *v7; // x22
  const MethodInfo *v8; // x3
  int32_t v9; // w21
  int32_t v10; // w22
  int32_t PriorityBG; // w23
  Generator_Background_o *v12; // x24
  const MethodInfo *v13; // x5
  BattleData_o *v14; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  Generator_BGM_o *v17; // x23
  const MethodInfo *v18; // x6
  __int64 v19; // x1
  BattleFieldEnvironmentData___c_c *v20; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__60_0; // x21
  Il2CppObject *v24; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  Il2CppObject *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  __int64 v39; // x1
  BattleFieldEnvironmentData___c_c *v40; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v42; // x8
  System_Func_object__bool__o *_9__60_1; // x21
  Il2CppObject *v44; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppObject *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t stageBgType[2]; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593B2E4 & 1) == 0 )
  {
    sub_21FFC50(&Generator_BGFromQuestPhase_TypeInfo);
    sub_21FFC50(&Generator_BGM_TypeInfo);
    sub_21FFC50(&Generator_Background_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____91526744);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____91526752);
    sub_21FFC50(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__InitStageField_b__60_0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__InitStageField_b__60_1__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2E4 = 1;
  }
  Data_k__BackingField = this->fields._Data_k__BackingField;
  *(_QWORD *)stageBgType = 0;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(Data_k__BackingField, 0),
        v5 = this->fields._Data_k__BackingField,
        v6 = StageEntity,
        v7 = (Generator_BGFromQuestPhase_o *)sub_21FFEBC(Generator_BGFromQuestPhase_TypeInfo),
        Generator_BGFromQuestPhase___ctor(v7, v5, v6, v8),
        Data_k__BackingField = (BattleData_o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
                                                 this,
                                                 v7,
                                                 1,
                                                 this->klass->vtable._5_AddBackground.method),
        !v6) )
  {
    sub_21FFECC(Data_k__BackingField, method);
  }
  if ( StageEntity__TryGetChangeBgData(v6, &stageBgType[1], stageBgType, this->fields._Data_k__BackingField, 0) )
  {
    v10 = stageBgType[0];
    v9 = stageBgType[1];
    PriorityBG = StageEntity__GetPriorityBG(v6, 0, 0);
    v12 = (Generator_Background_o *)sub_21FFEBC(Generator_Background_TypeInfo);
    Generator_Background___ctor(v12, v9, v10, PriorityBG, 1, v13);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
      this,
      v12,
      1,
      this->klass->vtable._5_AddBackground.method);
  }
  v14 = this->fields._Data_k__BackingField;
  bgmId = v6->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v6, 0, 0);
  v17 = (Generator_BGM_o *)sub_21FFEBC(Generator_BGM_TypeInfo);
  Generator_BGM___ctor(v17, v14, bgmId, 0, PriorityBgm, 0, v18);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
    this,
    v17,
    1,
    0,
    this->klass->vtable._6_AddBGM.method);
  v20 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = this->fields.backgroundList;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v19);
    v20 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v20->static_fields;
  _9__60_0 = (System_Func_object__bool__o *)static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__60_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__60_0, v24, Method_BattleFieldEnvironmentData___c__InitStageField_b__60_0__, 0);
    v25 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v25->__9__60_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__60_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->__9__60_0, (int32_t)_9__60_0, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
          (System_Func_TSource__bool__o *)_9__60_0,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____91526752);
  this->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.baseBackground,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v40 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = this->fields.bgmList;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v39);
    v40 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v42 = v40->static_fields;
  _9__60_1 = (System_Func_object__bool__o *)v42->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( !*(&v40->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v40, v39);
      v42 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v44 = (Il2CppObject *)v42->__9;
    _9__60_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__60_1, v44, Method_BattleFieldEnvironmentData___c__InitStageField_b__60_1__, 0);
    v45 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v45->__9__60_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__60_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v45->__9__60_1, (int32_t)_9__60_1, v46, v47, v48, v49, v50, v51);
  }
  v52 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
          (System_Func_TSource__bool__o *)_9__60_1,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____91526744);
  this->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v52;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.baseBgm, (int32_t)v52, v53, v54, v55, v56, v57, v58);
}


bool BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_21FFECC(this, method);
  if ( Data_k__BackingField->fields.wavecount >= 1 )
  {
    BattleFieldEnvironmentData__ResetFieldInfo(this, method);
    BattleFieldEnvironmentData__InitStageField(this, v4);
    BattleFieldEnvironmentData__TakeOverChangeField(this, v5);
    BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(this, v6);
  }
  return BattleFieldEnvironmentData__get_IsNeedChangeBG(this, method);
}


void BattleFieldEnvironmentData__InitializeBuffData(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_21FFECC(0, v4);
  BattleBuffData__Initialize(BuffData, 0);
  BattleFieldEnvironmentData__ClearCachedApplyOtherBuff(this, v5);
}


bool BattleFieldEnvironmentData__IsNeedChangeField(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_593B2FC & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_593B2FC = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_21FFECC(Instance, v4);
    BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0);
    if ( BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0) )
      return 0;
  }
  return 1;
}


// local variable allocation has failed, the output may be wrong!
void BattleFieldEnvironmentData__ProgressApplyBuffAfterServantUse(
        BattleFieldEnvironmentData_o *this,
        bool isUpdateBuffView,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v5; // x0
  __int64 v6; // x1
  BattleFieldEnvironmentData___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__134_0; // x22
  Il2CppObject *v11; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Collections_Generic_IEnumerable_T__o *v20; // x21
  System_Action_object__o *v21; // x22
  const MethodInfo *v22; // x1

  if ( (byte_593B318 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_BattleFieldEnvironmentData_UsedApplySourceBuff__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__ProgressApplyBuffAfterServantUse_b__134_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B318 = 1;
  }
  v5 = BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(this, (const MethodInfo *)isUpdateBuffView);
  v7 = BattleFieldEnvironmentData___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v6);
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__134_0 = (System_Func_object__bool__o *)static_fields->__9__134_0;
  if ( !_9__134_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__134_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__134_0,
      v11,
      Method_BattleFieldEnvironmentData___c__ProgressApplyBuffAfterServantUse_b__134_0__,
      0);
    v12 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v12->__9__134_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__134_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__134_0, (int32_t)_9__134_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)_9__134_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                         v19,
                                                         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v21 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(v21, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_UsedApplySourceBuff__, 0);
  BasicHelper__ForEach_object_(
    v20,
    (System_Action_T__o *)v21,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  if ( isUpdateBuffView )
    BattleFieldEnvironmentData__UpdateBuffIfChanged(this, v22);
}


void BattleFieldEnvironmentData__ReflectAgainApplyBuff(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_593B30B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass117_0__ReflectAgainApplyBuff_b__0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass117_0_TypeInfo);
    byte_593B30B = 1;
  }
  v5 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass117_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !svtData || !v5 )
    sub_21FFECC(v6, v7);
  *(_DWORD *)(v5 + 16) = svtData->fields.uniqueId;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(this, v7);
  v9 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass117_0__ReflectAgainApplyBuff_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void BattleFieldEnvironmentData__ReflectChangedBuffStateApplyOther(
        BattleFieldEnvironmentData_o *this,
        System_Action_o *changeBuffStateAction,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *ActUniqueIds_128_0; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  if ( (byte_593B313 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    byte_593B313 = 1;
  }
  ActUniqueIds_128_0 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData___ReflectChangedBuffStateApplyOther_g__MakeActUniqueIds_128_0(
                                                                              this,
                                                                              (const MethodInfo *)changeBuffStateAction);
  ActionExtensions__Call(changeBuffStateAction, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData___ReflectChangedBuffStateApplyOther_g__MakeActUniqueIds_128_0(
                                                              this,
                                                              v6);
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          ActUniqueIds_128_0,
          v7,
          (const MethodInfo_3860F84 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
    this->fields._IsUpdateBuffWaiting_k__BackingField = 1;
}


BattleFieldEnvironmentData_BGMData_o *BattleFieldEnvironmentData__RemoveAfterResetBGM(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  int *v3; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__78_0; // x21
  Il2CppObject *v7; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  BattleFieldEnvironmentData___c_c *v16; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v17; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *v18; // x8
  System_Func_object__bool__o *_9__78_1; // x21
  Il2CppObject *v20; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8

  if ( (byte_593B2F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___);
    sub_21FFC50(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_21FFC50(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__78_0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__78_1__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2F5 = 1;
  }
  v3 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v3 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = (struct BattleFieldEnvironmentData___c_StaticFields *)*((_QWORD *)v3 + 23);
  _9__78_0 = (System_Predicate_object__o *)static_fields->__9__78_0;
  if ( !_9__78_0 )
  {
    if ( !v3[57] )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__78_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(
      _9__78_0,
      v7,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__78_0__,
      0);
    v8 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v8->__9__78_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__78_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__78_0, (int32_t)_9__78_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !bgmList )
    goto LABEL_23;
  System_Collections_Generic_List_object___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)_9__78_0,
    (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v16 = BattleFieldEnvironmentData___c_TypeInfo;
  v17 = this->fields.bgmList;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v15);
    v16 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v18 = v16->static_fields;
  _9__78_1 = (System_Func_object__bool__o *)v18->__9__78_1;
  if ( !_9__78_1 )
  {
    if ( !*(&v16->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v16, v15);
      v18 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__78_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_1,
      v20,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__78_1__,
      0);
    v21 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v21->__9__78_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__78_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->__9__78_1, (int32_t)_9__78_1, v22, v23, v24, v25, v26, v27);
  }
  if ( System_Linq_Enumerable__Count_object__59013780(
         (System_Collections_Generic_IEnumerable_TSource__o *)v17,
         (System_Func_TSource__bool__o *)_9__78_1,
         (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v3 = (int *)this->fields.bgmList;
    if ( v3 )
    {
      v34 = *((_QWORD *)v3 + 2);
      method = (const MethodInfo *)this->fields.baseBgm;
      v35 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
      ++v3[7];
      if ( v34 )
      {
        v36 = v3[6];
        if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v3,
            (Il2CppObject *)method,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = v34 + 8 * v36;
          v3[6] = v36 + 1;
          *(_QWORD *)(v37 + 32) = method;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v37 + 32), (int32_t)method, v28, v29, v30, v31, v32, v33);
        }
        goto LABEL_22;
      }
    }
LABEL_23:
    sub_21FFECC(v3, method);
  }
LABEL_22:
  BattleFieldEnvironmentData__SortBGM(this, method);
  return this->fields._CurBGM_k__BackingField;
}


bool BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_593B2F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__84_0__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_21FFC50(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    byte_593B2F8 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v4 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Predicate_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__84_0__,
    0);
  if ( !bgmList )
    sub_21FFECC(v5, v6);
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v4,
         (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) >= 1 )
    BattleFieldEnvironmentData__SortBGM(this, v7);
  return BattleFieldEnvironmentData__get_IsChangeBgm(this, v7);
}


void BattleFieldEnvironmentData__RemoveBgmRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v5; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__80_0; // x21
  Il2CppObject *v8; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_object__object__o *v17; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v21; // x20
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x20
  int i; // w23
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  const MethodInfo *v33; // x1
  __int64 v34; // x20
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  System_Collections_Generic_List_object__o *bgmList; // x21
  System_Predicate_T__o *v49; // x22
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // [xsp+18h] [xbp-68h]

  if ( (byte_593B2F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_21FFC50(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__80_0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass80_0__RemoveBgmRelateBuff_b__1__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass80_0_TypeInfo);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2F7 = 1;
  }
  v5 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, buffArray);
    v5 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__80_0 = (System_Func_object__bool__o *)static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, buffArray);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__80_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__80_0,
      v8,
      Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__80_0__,
      0);
    v9 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v9->__9__80_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__80_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__80_0, (int32_t)_9__80_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__80_0,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v17 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
  System_Func_object__object____ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__,
    0);
  v18 = System_Linq_Enumerable__Select_object__object_(
          v16,
          (System_Func_TSource__TResult__o *)v17,
          (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
  if ( !v18 )
    sub_21FFECC(0, v19);
  klass = v18->klass;
  v21 = v18;
  v22 = *(unsigned __int16 *)&v18->klass->_2.rank;
  if ( *(_WORD *)&v18->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffUniqueValue__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_14;
    }
    v24 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v24 = sub_2237E2C(v18, System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v24)(
          v21,
          *(_QWORD *)(v24 + 8));
  v56 = v25;
  if ( !v25 )
    sub_21FFECC(v25, v26);
  v27 = v25;
  for ( i = 0;
        ;
        i += System_Collections_Generic_List_object___RemoveAll(
               bgmList,
               v49,
               (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) )
  {
    v29 = *(_QWORD *)v27;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
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
      v32 = sub_2237E2C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v27, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v34 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass80_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0);
    if ( !v56 )
      sub_21FFECC(v35, v36);
    v37 = *(_QWORD *)v56;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffUniqueValue__c **)v39 - 1) != System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_30;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_30:
      v40 = sub_2237E2C(v56, System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, 0);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v56, *(_QWORD *)(v40 + 8));
    if ( !v34 )
      sub_21FFECC(v41, v41);
    *(_QWORD *)(v34 + 16) = v41;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 16), v41, v42, v43, v44, v45, v46, v47);
    bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
    v49 = (System_Predicate_T__o *)sub_21FFEBC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v49,
      (Il2CppObject *)v34,
      Method_BattleFieldEnvironmentData___c__DisplayClass80_0__RemoveBgmRelateBuff_b__1__,
      0);
    if ( !bgmList )
      sub_21FFECC(v50, v51);
    v27 = v56;
  }
  if ( v56 )
  {
    v52 = *(_QWORD *)v56;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_40;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_40:
      v55 = sub_2237E2C(v56, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v55)(v56, *(_QWORD *)(v55 + 8));
  }
  if ( i > 0 )
    BattleFieldEnvironmentData__SortBGM(this, v33);
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
  __int64 v3; // x1
  BattleLogic_o *Logic_k__BackingField; // x0

  if ( BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(this, method) )
  {
    Logic_k__BackingField = this->fields._Logic_k__BackingField;
    if ( Logic_k__BackingField )
    {
      if ( BattleLogic__CheckCurrentBgmNameAndTryToPlayBgmName(Logic_k__BackingField, 0, 0) )
        return;
      Logic_k__BackingField = this->fields._Logic_k__BackingField;
      if ( Logic_k__BackingField )
      {
        BattleLogic__PlayLoadCurrentBgm(Logic_k__BackingField, 0, 0.0, 0);
        return;
      }
    }
    sub_21FFECC(Logic_k__BackingField, v3);
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
    sub_21FFECC(this, deadSvtData);
  }
  AllBGMChangeBuffArray = BattleBuffData__GetAllBGMChangeBuffArray((BattleBuffData_o *)this, 0);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_53145360(v3, AllBGMChangeBuffArray, 1, v5);
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
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *backgroundList; // x21
  System_Predicate_object__o *v17; // x22
  int32_t v18; // w0
  System_Collections_Generic_List_object__o *bgmList; // x22
  int32_t v20; // w21
  System_Predicate_object__o *v21; // x23
  const MethodInfo *v22; // x2

  if ( (byte_593B2F6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_21FFC50(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_21FFC50(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass79_0__RemoveRelateBuff_b__0__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass79_0__RemoveRelateBuff_b__1__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass79_0_TypeInfo);
    byte_593B2F6 = 1;
  }
  v5 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v8 = BattleFieldEnvironmentData__GetChangeBuffUniqueVal(v6, buff, v7);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v8, v10, v11, v12, v13, v14, v15);
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v17 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass79_0__RemoveRelateBuff_b__0__,
    0);
  if ( !backgroundList
    || (v18 = System_Collections_Generic_List_object___RemoveAll(
                backgroundList,
                (System_Predicate_T__o *)v17,
                (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList,
        v20 = v18,
        v21 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo),
        System_Predicate_object____ctor(
          v21,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass79_0__RemoveRelateBuff_b__1__,
          0),
        !bgmList) )
  {
LABEL_9:
    sub_21FFECC(v8, v9);
  }
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v21,
         (const MethodInfo_4451158 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v20 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v22);
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
  if ( (byte_593B2E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__);
    byte_593B2E5 = 1;
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
    sub_21FFECC(this, method);
  v7 = bgmList->fields._size;
  v8 = bgmList->fields._version + 1;
  bgmList->fields._size = 0;
  bgmList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)bgmList->fields._items, 0, v7, 0);
}


void BattleFieldEnvironmentData__RevertUnusedApplyBuffSubMember(
        BattleFieldEnvironmentData_o *this,
        System_Func_BattleBuffData_BuffData__bool__o *funcFilter,
        const MethodInfo *method)
{
  __int64 v5; // x21
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_HashSet_int__o **v14; // x22
  const MethodInfo *v15; // x1
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v17; // x23
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x23
  BattleData_o *Data_k__BackingField; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x25
  System_Collections_Generic_HashSet_int__o *v36; // x24
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  BattleBuffData_BuffData_ApplyBuffManager_o *v43; // x23
  System_Func_object__bool__o *v44; // x24
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v55; // [xsp+18h] [xbp-68h]

  if ( (byte_593B317 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass133_0__RevertUnusedApplyBuffSubMember_b__0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass133_0_TypeInfo);
    byte_593B317 = 1;
  }
  v5 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass133_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = 0,
        v14 = (System_Collections_Generic_HashSet_int__o **)(v5 + 16),
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), 0, v8, v9, v10, v11, v12, v13),
        (BuffData = BattleFieldEnvironmentData__get_BuffData(this, v15)) == 0)
    || (BuffData = (BattleBuffData_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(BuffData, 1, 0, 0)) == 0 )
  {
    sub_21FFECC(BuffData, v7);
  }
  klass = BuffData->klass;
  v17 = BuffData;
  v18 = *(unsigned __int16 *)&BuffData->klass->_2.rank;
  if ( *(_WORD *)&BuffData->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_10;
    }
    v20 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_10:
    v20 = sub_2237E2C(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v20)(v17, *(_QWORD *)(v20 + 8));
  v55 = v21;
  while ( 1 )
  {
    if ( !v55 )
      sub_21FFECC(v21, v22);
    v23 = *(_QWORD *)v55;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_18:
      v26 = sub_2237E2C(v55, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v55, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v55;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_25;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_25:
      v30 = sub_2237E2C(v55, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v55, *(_QWORD *)(v30 + 8));
    if ( !funcFilter )
      sub_21FFECC(v31, v32);
    v33 = v31;
    v21 = ((__int64 (__fastcall *)(intptr_t, __int64, intptr_t))funcFilter->fields.invoke_impl)(
            funcFilter->fields.method_code,
            v31,
            funcFilter->fields.method);
    if ( (v21 & 1) != 0 )
    {
      if ( !*v14 )
      {
        Data_k__BackingField = this->fields._Data_k__BackingField;
        if ( !Data_k__BackingField )
          sub_21FFECC(0, v22);
        v35 = (System_Collections_Generic_IEnumerable_T__o *)BattleData__AllFieldServantIdEnumerable(
                                                               Data_k__BackingField,
                                                               1,
                                                               0);
        v36 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor_69731156(
          v36,
          v35,
          (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
        *v14 = v36;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v36, v37, v38, v39, v40, v41, v42);
      }
      if ( !v33 )
        sub_21FFECC(v21, v22);
      v43 = *(BattleBuffData_BuffData_ApplyBuffManager_o **)(v33 + 632);
      if ( v43 )
      {
        v44 = *(System_Func_object__bool__o **)(v5 + 24);
        if ( !v44 )
        {
          v44 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v44,
            (Il2CppObject *)v5,
            Method_BattleFieldEnvironmentData___c__DisplayClass133_0__RevertUnusedApplyBuffSubMember_b__0__,
            0);
          *(_QWORD *)(v5 + 24) = v44;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v44, v45, v46, v47, v48, v49, v50);
        }
        BattleBuffData_BuffData_ApplyBuffManager__RevertUnusedApplyBuff(
          v43,
          (System_Func_BattleBuffData_BuffData__bool__o *)v44,
          0);
      }
    }
  }
  v51 = *(_QWORD *)v55;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v55 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v55 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_41;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_41:
    v54 = sub_2237E2C(v55, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v54)(v55, *(_QWORD *)(v54 + 8));
}


void BattleFieldEnvironmentData__SetSaveData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_SaveData_o *sv,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *backgroundList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v9; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__8_0; // x22
  Il2CppObject *v12; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  int32_t v22; // w20
  int32_t v23; // w21
  bool ExistOverwriteBgIndividuality; // w22
  Generator_Background_o *v25; // x23
  const MethodInfo *v26; // x5
  struct BattleData_o *Data_k__BackingField; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w23
  System_String_o *BgmName_k__BackingField; // x21
  Generator_BGM_o *v32; // x24
  const MethodInfo *v33; // x6

  if ( (byte_593B2E0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Generator_BGM_TypeInfo);
    sub_21FFC50(&Generator_Background_TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2E0 = 1;
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
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v9 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v7);
        v9 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__8_0 = (System_Action_object__o *)static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !*(&v9->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v9, v7);
          static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
        System_Action_object____ctor(_9__8_0, v12, Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, 0);
        v13 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        v13->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__8_0, (int32_t)_9__8_0, v14, v15, v16, v17, v18, v19);
      }
      BasicHelper__ForEach_object_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_object__o *)BattleFieldEnvironmentData__get_BuffData(this, v7);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0);
      BattleFieldEnvironmentData__ClearCachedApplyOtherBuff(this, v20);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v21);
      return;
    }
LABEL_27:
    sub_21FFECC(backgroundList, v5);
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
    v22 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_CurrentGroundType(
                                                                    this->fields._Perf_k__BackingField,
                                                                    0);
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_27;
    v23 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(this->fields._Data_k__BackingField, 0);
    v25 = (Generator_Background_o *)sub_21FFEBC(Generator_Background_TypeInfo);
    Generator_Background___ctor(v25, v22, v23, 0, ExistOverwriteBgIndividuality, v26);
    backgroundList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
                                                                    this,
                                                                    v25,
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
    v32 = (Generator_BGM_o *)sub_21FFEBC(Generator_BGM_TypeInfo);
    Generator_BGM___ctor(
      v32,
      Data_k__BackingField,
      BgmId_k__BackingField,
      allowSubBgmPlaying,
      0,
      BgmName_k__BackingField,
      v33);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
      this,
      v32,
      2,
      0,
      this->klass->vtable._6_AddBGM.method);
  }
}


void BattleFieldEnvironmentData__SetUpdateBuffWaiting(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  this->fields._IsUpdateBuffWaiting_k__BackingField = 1;
}


void BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v4; // x21
  BattleData_o *v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  System_Comparison_T__o *v8; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_593B2FA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData__SortBGM_b__87_0__);
    sub_21FFC50(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_593B2FA = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v4 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__87_0__, 0);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v4,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v7 = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v8 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v8, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !v7 )
    goto LABEL_9;
  System_Collections_Generic_List_object___Sort_71636404(
    v7,
    v8,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)p_CurBGM_k__BackingField,
    (int32_t)baseBgm,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v5 = (BattleData_o *)*(p_CurBGM_k__BackingField - 6);
  if ( !v5 )
LABEL_9:
    sub_21FFECC(v5, v6);
  BattleData__SetOverrideBgmData(v5, *p_CurBGM_k__BackingField, 0);
}


void BattleFieldEnvironmentData__SortBGM_53129232(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *targetBgmList,
        const MethodInfo *method)
{
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Comparison_T__o *v8; // x21

  if ( (byte_593B2FB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData__SortBGM_b__88_0__);
    sub_21FFC50(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_593B2FB = 1;
  }
  v5 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__88_0__, 0);
  if ( !targetBgmList )
    sub_21FFECC(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    (System_Action_T__o *)v5,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v8 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v8, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  System_Collections_Generic_List_object___Sort_71636404(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    v8,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
}


void BattleFieldEnvironmentData__SortBackGround(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *backgroundList; // x20
  System_Comparison_T__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593B2F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_21FFC50(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
    byte_593B2F9 = 1;
  }
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v4 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Comparison_object____ctor(v4, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !backgroundList )
    sub_21FFECC(v5, v6);
  System_Collections_Generic_List_object___Sort_71636404(
    backgroundList,
    v4,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurBackGround_k__BackingField,
    (int32_t)baseBackground,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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


RemovedBuffInfo_o *BattleFieldEnvironmentData__SubAllBuffFromIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  RemovedBuffInfo_o *v7; // x1
  const MethodInfo *v8; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)individuality);
  if ( !BuffData )
    sub_21FFECC(0, v6);
  v7 = BattleBuffData__subBuffFromIndividualites(BuffData, individuality, 0, 0, 0, 0, 0);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v7, 1, v8);
}


RemovedBuffInfo_o *BattleFieldEnvironmentData__SubBuffFromIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1
  BattleBuffData_o *v8; // x20
  int32_t Value; // w21
  int32_t Value2; // w23

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)individuality);
  if ( !baseVals
    || (v8 = BuffData,
        Value = DataVals__GetValue(baseVals, 0),
        Value2 = DataVals__GetValue2(baseVals, 0),
        BuffData = (BattleBuffData_o *)DataVals__isParam(baseVals, 93, 0),
        !v8) )
  {
    sub_21FFECC(BuffData, v7);
  }
  return BattleBuffData__subBuffFromIndividualites(
           v8,
           individuality,
           Value,
           Value2,
           1,
           (unsigned __int8)BuffData & 1,
           0);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *BattleFieldEnvironmentData__SubBuffFromRelateDeadActor(
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
    sub_21FFECC(0, v6);
  v7 = BattleBuffData__SubBuffFromDeadActorId(BuffData, deadActorId, 0, 0);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v7, 1, v8);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *BattleFieldEnvironmentData__SubBuffFromType(
        BattleFieldEnvironmentData_o *this,
        int32_t buffId,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  RemovedBuffInfo_o *v9; // x1
  const MethodInfo *v10; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&buffId);
  if ( !BuffData )
    sub_21FFECC(0, v8);
  v9 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v9, isAddAfterTask, v10);
}


void BattleFieldEnvironmentData__TakeOverChangeField(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  BattleBuffData_FieldChangeData_array *v5; // x0
  __int64 v6; // x1
  BattleFieldEnvironmentData___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__63_0; // x21
  Il2CppObject *v11; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v20; // x20
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 i; // x20
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  BattleBuffData_FieldChangeData_o *v39; // x20
  Generator_BGFromFieldChangeBGBuff_o *v40; // x21
  const MethodInfo *v41; // x2
  BattleData_o *Data_k__BackingField; // x22
  Generator_BGMFromFieldChangeBGBuff_o *v43; // x21
  const MethodInfo *v44; // x3
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // [xsp+18h] [xbp-48h]

  if ( (byte_593B2E6 & 1) == 0 )
  {
    sub_21FFC50(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    sub_21FFC50(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
    sub_21FFC50(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__63_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2E6 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_52;
  v5 = BattleBuffData__GetFieldChangeArray(BuffData, 0);
  v7 = BattleFieldEnvironmentData___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v6);
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__63_0 = (System_Func_object__bool__o *)static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__63_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__63_0,
      v11,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__63_0__,
      0);
    v12 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v12->__9__63_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__63_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__63_0, (int32_t)_9__63_0, v13, v14, v15, v16, v17, v18);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_object_(
                                   v8,
                                   (System_Func_TSource__bool__o *)_9__63_0,
                                   (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_52:
    sub_21FFECC(BuffData, v4);
  klass = BuffData->klass;
  v20 = BuffData;
  v21 = *(unsigned __int16 *)&BuffData->klass->_2.rank;
  if ( *(_WORD *)&BuffData->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_15;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_15:
    v23 = sub_2237E2C(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  v49 = v24;
  if ( !v24 )
    sub_21FFECC(0, v25);
  for ( i = v24; ; i = v49 )
  {
    v27 = *(_QWORD *)i;
    v28 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_23;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_23:
      v30 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(i, *(_QWORD *)(v30 + 8));
    if ( (v31 & 1) == 0 )
      break;
    if ( !v49 )
      sub_21FFECC(v31, v32);
    v33 = *(_QWORD *)v49;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_31;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_31:
      v36 = sub_2237E2C(v49, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v49, *(_QWORD *)(v36 + 8));
    v39 = (BattleBuffData_FieldChangeData_o *)v37;
    if ( !v37 )
      sub_21FFECC(0, v38);
    if ( *(int *)(v37 + 24) >= 1 )
    {
      v40 = (Generator_BGFromFieldChangeBGBuff_o *)sub_21FFEBC(Generator_BGFromFieldChangeBGBuff_TypeInfo);
      Generator_BGFromFieldChangeBGBuff___ctor(v40, v39, v41);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
        this,
        v40,
        2,
        this->klass->vtable._5_AddBackground.method);
    }
    if ( v39->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v39->fields.bgmName, 0) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v43 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_21FFEBC(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
      Generator_BGMFromFieldChangeBGBuff___ctor(v43, Data_k__BackingField, v39, v44);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
        this,
        v43,
        2,
        0,
        this->klass->vtable._6_AddBGM.method);
    }
  }
  if ( v49 )
  {
    v45 = *(_QWORD *)v49;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_46;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_46:
      v48 = sub_2237E2C(v49, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v48)(v49, *(_QWORD *)(v48 + 8));
  }
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
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__64_0; // x21
  Il2CppObject *v11; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_BattleServantData__o *v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v21; // x0
  System_Object_array *v22; // x1
  const MethodInfo *v23; // x2

  v2 = this;
  if ( (byte_593B2E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_21FFC50(&System_Func_BattleServantData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__64_0__);
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2E7 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (this = (BattleFieldEnvironmentData_o *)Data_k__BackingField->fields.player_datalist) == 0
    || (v4 = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___ToArray(
                                               (System_Collections_Generic_List_object__o *)this,
                                               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__),
        BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(v4, (BattleServantData_array *)v4, v5),
        (v6 = v2->fields._Data_k__BackingField) == 0) )
  {
    sub_21FFECC(this, method);
  }
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.player_datalist;
  v8 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v8 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__64_0 = (System_Func_object__bool__o *)static_fields->__9__64_0;
  if ( !_9__64_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, method);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__64_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__64_0,
      v11,
      Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__64_0__,
      0);
    v12 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v12->__9__64_0 = (struct System_Func_BattleServantData__bool__o *)_9__64_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__64_0, (int32_t)_9__64_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                         player_datalist,
                                                                         (System_Func_TSource__bool__o *)_9__64_0,
                                                                         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v21 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(v19, v20);
  v22 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v22, v23);
}


void BattleFieldEnvironmentData__TurnBuffProgressingIncrease(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v6; // x0
  __int64 v7; // x1
  BattleFieldEnvironmentData___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__119_0; // x20
  Il2CppObject *v12; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593B30D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__TurnBuffProgressingIncrease_b__119_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B30D = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_21FFECC(0, v4);
  BattleBuffData__turnProgressingIncrease(BuffData, 0);
  v6 = BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(this, v5);
  v8 = BattleFieldEnvironmentData___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_T__o *)v6;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v7);
    v8 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__119_0 = (System_Action_object__o *)static_fields->__9__119_0;
  if ( !_9__119_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v7);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__119_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      _9__119_0,
      v12,
      Method_BattleFieldEnvironmentData___c__TurnBuffProgressingIncrease_b__119_0__,
      0);
    v13 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v13->__9__119_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__119_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__119_0, (int32_t)_9__119_0, v14, v15, v16, v17, v18, v19);
  }
  BasicHelper__ForEach_object_(
    v9,
    (System_Action_T__o *)_9__119_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void BattleFieldEnvironmentData__TurnProgressing(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  __int64 BuffData; // x0
  __int64 v8; // x1
  BattleBuffData_BuffData_array *v9; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x8
  __int64 v13; // x23
  __int64 v14; // x9
  int *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x23
  int v20; // w27
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  const MethodInfo *v25; // x4
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x22
  BattleBuffData_BuffData_ApplyBuffManager_o *v33; // x23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  System_Object_array *v50; // x0
  const MethodInfo *v51; // x3
  BattleServantData_array *ApplyTargetSvtArray; // x0
  const MethodInfo *v53; // x3
  __int64 v54; // [xsp+18h] [xbp-58h]

  if ( (byte_593B309 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    byte_593B309 = 1;
  }
  BuffData = (__int64)BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)logic);
  if ( !BuffData )
    goto LABEL_53;
  v9 = BattleBuffData__CommonTurnProgressing((BattleBuffData_o *)BuffData, logic, isEndEnemyTurn, 0, 0, 0);
  v10 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  BuffData = (__int64)BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(this, v11);
  if ( !BuffData )
    goto LABEL_53;
  v12 = *(_QWORD *)BuffData;
  v13 = BuffData;
  v14 = *(unsigned __int16 *)(*(_QWORD *)BuffData + 302LL);
  if ( *(_WORD *)(*(_QWORD *)BuffData + 302LL) )
  {
    v15 = (int *)(*(_QWORD *)(v12 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)v15 - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v14;
      v15 += 4;
      if ( !v14 )
        goto LABEL_9;
    }
    v16 = v12 + 16LL * *v15 + 312;
  }
  else
  {
LABEL_9:
    v16 = sub_2237E2C(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))v16)(v13, *(_QWORD *)(v16 + 8));
  v54 = v17;
  if ( !v17 )
    sub_21FFECC(v17, v18);
  v19 = v17;
  v20 = isEndEnemyTurn;
  while ( 1 )
  {
    v21 = *(_QWORD *)v19;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_17:
      v24 = sub_2237E2C(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    BuffData = (*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v19, *(_QWORD *)(v24 + 8));
    if ( (BuffData & 1) == 0 )
      break;
    if ( !v54 )
      sub_21FFECC(BuffData, v8);
    v26 = *(_QWORD *)v54;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v28 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_25;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_25:
      v29 = sub_2237E2C(v54, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v54, *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      sub_21FFECC(0, v31);
    v33 = *(BattleBuffData_BuffData_ApplyBuffManager_o **)(v30 + 632);
    if ( v33 )
    {
      BattleBuffData_BuffData_ApplyBuffManager__ReflectBuffTurnToApplyOther(
        *(BattleBuffData_BuffData_ApplyBuffManager_o **)(v30 + 632),
        0);
      if ( *(unsigned __int8 *)(v32 + 180) == v20 )
      {
        v34 = BattleBuffData_BuffData_ApplyBuffManager__ReflectBuffRemoveToApplyOther(v33, 0, -1, 0);
        if ( v34 )
        {
          if ( !v10
            || (items = v10->fields._items,
                v43 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
                ++v10->fields._version,
                !items) )
          {
            sub_21FFECC(v34, v35);
          }
          size = v10->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v10,
              (Il2CppObject *)v32,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &items->obj.klass + size;
            v10->fields._size = size + 1;
            v45[4] = (Il2CppClass *)v32;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 4), v32, v36, v37, v38, v39, v40, v41);
          }
        }
      }
    }
    v19 = v54;
  }
  if ( v54 )
  {
    v46 = *(_QWORD *)v54;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v54 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v54 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_43;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_43:
      v49 = sub_2237E2C(v54, System_IDisposable_TypeInfo, 0);
    }
    BuffData = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v54, *(_QWORD *)(v49 + 8));
  }
  if ( !v10 )
LABEL_53:
    sub_21FFECC(BuffData, v8);
  if ( v10->fields._size >= 1 )
  {
    v50 = System_Collections_Generic_List_object___ToArray(
            v10,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    ApplyTargetSvtArray = BattleFieldEnvironmentData__GetApplyTargetSvtArray(
                            this,
                            (BattleBuffData_BuffData_array *)v50,
                            0,
                            v51);
    BattleFieldEnvironmentData__UpdateDisableApplyBuff(this, ApplyTargetSvtArray, 1, v53);
  }
  BattleFieldEnvironmentData__AfterApplyOtherBuffRemove(this, v9, 0, 1, v25);
}


void BattleFieldEnvironmentData__UpdateActorBuffLoopEffect(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Perf_k__BackingField; // x21
  BattleFieldEnvironmentData___c_c *v6; // x0
  __int64 v7; // x1
  BattlePerformance_o *v8; // x19
  int32_t uniqueId; // w20
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__116_0; // x21
  Il2CppObject *v12; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_593B30A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleActorControl__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__UpdateActorBuffLoopEffect_b__116_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B30A = 1;
  }
  Perf_k__BackingField = (UnityEngine_Object_o *)this->fields._Perf_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, svtData);
  v6 = (BattleFieldEnvironmentData___c_c *)UnityEngine_Object__op_Inequality(Perf_k__BackingField, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !svtData )
      goto LABEL_16;
    v8 = this->fields._Perf_k__BackingField;
    uniqueId = svtData->fields.uniqueId;
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v7);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__116_0 = (System_Action_object__o *)static_fields->__9__116_0;
    if ( !_9__116_0 )
    {
      if ( !*(&v6->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v6, v7);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)static_fields->__9;
      _9__116_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleActorControl__TypeInfo);
      System_Action_object____ctor(
        _9__116_0,
        v12,
        Method_BattleFieldEnvironmentData___c__UpdateActorBuffLoopEffect_b__116_0__,
        0);
      v13 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v13->__9__116_0 = (struct System_Action_BattleActorControl__o *)_9__116_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v13->__9__116_0,
        (int32_t)_9__116_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( !v8 )
LABEL_16:
      sub_21FFECC(v6, v7);
    BattlePerformance__ExecActionServantActor(v8, uniqueId, (System_Action_BattleActorControl__o *)_9__116_0, 0);
  }
}


void BattleFieldEnvironmentData__UpdateAllView(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattlePerformance_o *Perf_k__BackingField; // x0
  struct BattlePerformance_o *v4; // x8

  Perf_k__BackingField = this->fields._Perf_k__BackingField;
  if ( !Perf_k__BackingField
    || (BattlePerformance__UpdateFieldView(Perf_k__BackingField, 0), (v4 = this->fields._Perf_k__BackingField) == 0)
    || (Perf_k__BackingField = (BattlePerformance_o *)v4->fields.logic) == 0
    || (BattleLogic__updateConditionsBuffAll((BattleLogic_o *)Perf_k__BackingField, 0, 0, 0),
        (Perf_k__BackingField = this->fields._Perf_k__BackingField) == 0) )
  {
    sub_21FFECC(Perf_k__BackingField, method);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0);
}


void BattleFieldEnvironmentData__UpdateAttachCardBuffTargetCardIndex(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *ApplyToSelfBuffEnumerable_53160220; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v9; // x20
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 i; // x20
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  BattleBuffData_BuffData_o *v27; // x2
  __int64 v28; // x8
  __int64 v29; // x8
  BattleBuffData_ApplyBuffSetAtInitData_o *v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // [xsp+18h] [xbp-28h]

  if ( (byte_593B31F & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593B31F = 1;
  }
  if ( targetSvtData )
  {
    ApplyToSelfBuffEnumerable_53160220 = BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_53160220(
                                           this,
                                           targetSvtData,
                                           0,
                                           v3);
    if ( !ApplyToSelfBuffEnumerable_53160220 )
      sub_21FFECC(0, v7);
    klass = ApplyToSelfBuffEnumerable_53160220->klass;
    v9 = ApplyToSelfBuffEnumerable_53160220;
    v10 = *(unsigned __int16 *)&ApplyToSelfBuffEnumerable_53160220->klass->_2.rank;
    if ( *(_WORD *)&ApplyToSelfBuffEnumerable_53160220->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_9;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v12 = sub_2237E2C(
              ApplyToSelfBuffEnumerable_53160220,
              System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo,
              0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))v12)(
            v9,
            *(_QWORD *)(v12 + 8));
    v35 = v13;
    if ( !v13 )
      sub_21FFECC(v13, v14);
    for ( i = v13; ; i = v35 )
    {
      v16 = *(_QWORD *)i;
      v17 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
      if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
      {
        v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          v18 += 4;
          if ( !v17 )
            goto LABEL_17;
        }
        v19 = v16 + 16LL * *v18 + 312;
      }
      else
      {
LABEL_17:
        v19 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD))v19)(i, *(_QWORD *)(v19 + 8));
      if ( (v20 & 1) == 0 )
        break;
      if ( !v35 )
        sub_21FFECC(v20, v21);
      v22 = *(_QWORD *)v35;
      v23 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v24 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
        {
          --v23;
          v24 += 4;
          if ( !v23 )
            goto LABEL_25;
        }
        v25 = v22 + 16LL * *v24 + 312;
      }
      else
      {
LABEL_25:
        v25 = sub_2237E2C(v35, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
      }
      v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v35, *(_QWORD *)(v25 + 8));
      v27 = (BattleBuffData_BuffData_o *)v26;
      if ( v26 )
      {
        v28 = *(_QWORD *)(v26 + 640);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 32);
          if ( v29 )
          {
            v30 = *(BattleBuffData_ApplyBuffSetAtInitData_o **)(v29 + 528);
            if ( v30 )
            {
              if ( (v30->fields.attachCondCardIndividuality & 0x80000000) == 0 )
                BattleBuffData_ApplyBuffSetAtInitData__UpdateAttachCardIdIndexArray(v30, targetSvtData, v27, 0);
            }
          }
        }
      }
    }
    if ( v35 )
    {
      v31 = *(_QWORD *)v35;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_40;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_40:
        v34 = sub_2237E2C(v35, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v34)(v35, *(_QWORD *)(v34 + 8));
    }
  }
}


void BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *v6; // x19
  BattleFieldEnvironmentData___c_c *v7; // x0
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__65_0; // x20
  Il2CppObject *v10; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593B2E8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__65_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B2E8 = 1;
  }
  v4 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
         (System_Collections_Generic_IEnumerable_BattleServantData__o *)servantArray,
         (const MethodInfo *)servantArray);
  if ( v4 )
  {
    v6 = (System_Collections_Generic_IEnumerable_T__o *)v4;
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v5);
      v7 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__65_0 = (System_Action_object__o *)static_fields->__9__65_0;
    if ( !_9__65_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v5);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__65_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__65_0,
        v10,
        Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__65_0__,
        0);
      v11 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      v11->__9__65_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__65_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__65_0, (int32_t)_9__65_0, v12, v13, v14, v15, v16, v17);
    }
    BasicHelper__ForEach_object_(
      v6,
      (System_Action_T__o *)_9__65_0,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
}


void BattleFieldEnvironmentData__UpdateBuffIfChanged(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FieldParamComp_k__BackingField; // x20
  const MethodInfo *v4; // x1
  BattleFieldParamComponent_o *v5; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1

  if ( (byte_593B311 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B311 = 1;
  }
  FieldParamComp_k__BackingField = (UnityEngine_Object_o *)this->fields._FieldParamComp_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(FieldParamComp_k__BackingField, 0, 0)
    && this->fields._IsUpdateBuffWaiting_k__BackingField )
  {
    v5 = this->fields._FieldParamComp_k__BackingField;
    BuffData = BattleFieldEnvironmentData__get_BuffData(this, v4);
    if ( !v5 )
      sub_21FFECC(BuffData, v7);
    BattleFieldParamComponent__updateBuffIcon(v5, BuffData, 0);
    this->fields._IsUpdateBuffWaiting_k__BackingField = 0;
  }
}


void BattleFieldEnvironmentData__UpdateDisableApplyBuff(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_array *svtArray,
        bool isUsedProgress,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x22
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  int max_length; // w8
  unsigned int v10; // w29
  Il2CppClass **v11; // x8
  Il2CppObject *v12; // x23
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  BattleFieldEnvironmentData___c_c *v23; // x8
  BattleBuffData_o *v24; // x24
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__118_0; // x25
  Il2CppObject *v27; // x26
  struct BattleFieldEnvironmentData___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  const MethodInfo *v35; // x2
  _BOOL8 v36; // x0
  __int64 v37; // x1
  Il2CppObject *current; // x19
  BattleBuffData_o *v39; // x0
  __int64 v40; // x1
  RemovedBuffInfo_o *v41; // x0
  __int64 v42; // x1
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_593B30C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleServantData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_BattleServantData__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__UpdateDisableApplyBuff_b__118_0__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B30C = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v6 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !svtArray )
    goto LABEL_36;
  max_length = svtArray->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_21FFED4(BuffData);
      v11 = &svtArray->obj.klass + (int)v10;
      v12 = (Il2CppObject *)v11[4];
      if ( !v12 )
        break;
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v11[4], 0);
      if ( !BuffData )
        break;
      BuffData = (BattleBuffData_o *)BattleBuffData__DisableApplyBuffByAvoidBuff(BuffData, 0);
      if ( ((unsigned __int8)BuffData & 1) != 0 )
      {
        if ( !v6 )
          break;
        items = v6->fields._items;
        v20 = Method_System_Collections_Generic_List_BattleServantData__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            v12,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v12;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
        }
      }
      BuffData = BattleServantData__get_BuffData((BattleServantData_o *)v12, 0);
      v23 = BattleFieldEnvironmentData___c_TypeInfo;
      v24 = BuffData;
      if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v8);
        v23 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      static_fields = v23->static_fields;
      _9__118_0 = (System_Func_object__bool__o *)static_fields->__9__118_0;
      if ( !_9__118_0 )
      {
        if ( !*(&v23->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v23, v8);
          static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        }
        v27 = (Il2CppObject *)static_fields->__9;
        _9__118_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__118_0,
          v27,
          Method_BattleFieldEnvironmentData___c__UpdateDisableApplyBuff_b__118_0__,
          0);
        v28 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        v28->__9__118_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__118_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v28->__9__118_0,
          (int32_t)_9__118_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      if ( !v24 )
        break;
      BuffData = (BattleBuffData_o *)BattleBuffData__ExistSatisfyCondApplyToSelfBuff(
                                       v24,
                                       (System_Func_BattleBuffData_BuffData__bool__o *)_9__118_0,
                                       0);
      if ( ((unsigned __int8)BuffData & 1) != 0 )
        BattleFieldEnvironmentData__UpdateActorBuffLoopEffect(this, (BattleServantData_o *)v12, v35);
      max_length = svtArray->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_25;
    }
LABEL_36:
    sub_21FFECC(BuffData, v8);
  }
LABEL_25:
  if ( isUsedProgress )
  {
    if ( !v6 )
      goto LABEL_36;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v44,
      v6,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
    v45 = v44;
    v44.fields._list = 0;
    *(_QWORD *)&v44.fields._index = &v45;
    while ( 1 )
    {
      v36 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v45,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
      if ( !v36 )
        break;
      current = v45.fields._current;
      if ( !v45.fields._current )
        sub_21FFECC(v36, v37);
      v39 = BattleServantData__get_BuffData((BattleServantData_o *)v45.fields._current, 0);
      if ( !v39 )
        sub_21FFECC(0, v40);
      v41 = BattleBuffData__usedProgressing(v39, 1, 0, 0);
      if ( !v41 )
        sub_21FFECC(0, v42);
      if ( RemovedBuffInfo__get_ExistRemoveBuff(v41, 0) )
        BattleServantData__updateBuff((BattleServantData_o *)current, 1, 1, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v45,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  }
}


void BattleFieldEnvironmentData__UsedApplySourceBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *applySourceBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v6; // x1
  _BOOL4 IsUpdateBuffWaiting_k__BackingField; // w23
  const MethodInfo *v8; // x1
  BattleBuffData_o *v9; // x21
  BattleBuffData_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  RemovedBuffInfo_o *v19; // x21
  const MethodInfo *v20; // x3
  bool v21; // w8
  BattleBuffData_BuffData_ApplyBuffManager_o *OriginalApplyManager_k__BackingField; // x0
  __int64 v23; // x0

  if ( (byte_593B319 & 1) == 0 )
  {
    sub_21FFC50(&BattleBuffData_BuffData___TypeInfo);
    byte_593B319 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)applySourceBuff);
  if ( !applySourceBuff )
    goto LABEL_12;
  BattleBuffData_BuffData__ForceUsed(applySourceBuff, BuffData, 0, 0);
  IsUpdateBuffWaiting_k__BackingField = this->fields._IsUpdateBuffWaiting_k__BackingField;
  v9 = BattleFieldEnvironmentData__get_BuffData(this, v8);
  BuffData = (BattleBuffData_o *)sub_21FFD10(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !BuffData )
    goto LABEL_12;
  v10 = BuffData;
  v11 = sub_21FFDA4(applySourceBuff, BuffData->klass->_1.element_class);
  if ( !v11 )
  {
    v23 = sub_21FFEF0(0, v12);
    sub_21FFD90(v23, 0);
  }
  if ( !v10->fields.resumptionHpFromLossMaxHp )
    sub_21FFED4(v11);
  v10->fields.passiveList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)applySourceBuff;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.passiveList,
    (int32_t)applySourceBuff,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !v9
    || (v19 = BattleBuffData__UsedProgressing(v9, (BattleBuffData_BuffData_array *)v10, 0),
        BuffData = (BattleBuffData_o *)BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v19, 1, v20),
        !v19) )
  {
LABEL_12:
    sub_21FFECC(BuffData, v6);
  }
  v21 = RemovedBuffInfo__get_ExistRemoveBuff(v19, 0);
  OriginalApplyManager_k__BackingField = applySourceBuff->fields._OriginalApplyManager_k__BackingField;
  this->fields._IsUpdateBuffWaiting_k__BackingField = IsUpdateBuffWaiting_k__BackingField || v21;
  if ( OriginalApplyManager_k__BackingField )
    BattleBuffData_BuffData_ApplyBuffManager__AfterApplySourceBuffUsed(OriginalApplyManager_k__BackingField, 0);
}


void BattleFieldEnvironmentData___AddServantChangeBgm_b__122_0(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v3; // x19
  Generator_BGM_o *v4; // x1

  if ( !buff || (v3 = this, (this = (BattleFieldEnvironmentData_o *)buff->fields.changeBgmData) == 0) )
    sub_21FFECC(this, buff);
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


System_Int32_array *BattleFieldEnvironmentData___ReflectChangedBuffStateApplyOther_g__MakeActUniqueIds_128_0(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v5; // x0
  __int64 v6; // x1
  BattleFieldEnvironmentData___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__128_1; // x20
  Il2CppObject *v11; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_593B320 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__ReflectChangedBuffStateApplyOther_b__128_1__);
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B320 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_21FFECC(0, v4);
  v5 = BattleBuffData__AllBuffValidEnumerablePriorActive(BuffData, 1, 0, 0);
  v7 = BattleFieldEnvironmentData___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !*(&BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v6);
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__128_1 = (System_Func_object__int__o *)static_fields->__9__128_1;
  if ( !_9__128_1 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__128_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__128_1,
      v11,
      Method_BattleFieldEnvironmentData___c__ReflectChangedBuffStateApplyOther_b__128_1__,
      0);
    v12 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v12->__9__128_1 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__128_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__128_1, (int32_t)_9__128_1, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)_9__128_1,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v19,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool BattleFieldEnvironmentData___RemoveBgmNotExistsChangeBgmBuff_b__84_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleFieldEnvironmentData_BGMData__IsRemove(x, this->fields._Data_k__BackingField, method);
}


void BattleFieldEnvironmentData___SortBGM_b__87_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  ((void (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, BattleFieldEnvironmentData_o *, const MethodInfo *))x->klass->vtable._6_UpdateActive.methodPtr)(
    x,
    this,
    x->klass->vtable._6_UpdateActive.method);
}


void BattleFieldEnvironmentData___SortBGM_b__88_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
  MissionNaviTransitionBoardItem_o *p_fields; // x19
  BattleBuffData_o *v4; // x20
  struct BattleBuffData_o *buffData; // t1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593B2E1 & 1) == 0 )
  {
    sub_21FFC50(&BattleBuffData_TypeInfo);
    byte_593B2E1 = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  v4 = buffData;
  if ( !buffData )
  {
    v4 = (BattleBuffData_o *)sub_21FFEBC(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0);
    p_fields->klass = (MissionNaviTransitionBoardItem_c *)v4;
    sub_21FFBF4(p_fields, (int32_t)v4, v6, v7, v8, v9, v10, v11);
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
    sub_21FFECC(this, method);
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


BattleFieldParamComponent_o *BattleFieldEnvironmentData__get_FieldParamComp(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  return this->fields._FieldParamComp_k__BackingField;
}


bool BattleFieldEnvironmentData__get_IsChangeBgm(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v2; // x19
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  v2 = this;
  if ( (byte_593B2E2 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_593B2E2 = 1;
  }
  CurBGM_k__BackingField = v2->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    goto LABEL_8;
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
  {
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    this = (BattleFieldEnvironmentData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( this )
    {
      BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0);
      LOBYTE(BgmData_k__BackingField) = !BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0);
      return (unsigned __int8)BgmData_k__BackingField & 1;
    }
LABEL_8:
    sub_21FFECC(this, method);
  }
  return (unsigned __int8)BgmData_k__BackingField & 1;
}


bool BattleFieldEnvironmentData__get_IsNeedChangeBG(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
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
                                                                                       method);
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
    sub_21FFECC(CurBackGround_k__BackingField, method);
  }
  return 1;
}


bool BattleFieldEnvironmentData__get_IsUpdateBuffWaiting(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  return this->fields._IsUpdateBuffWaiting_k__BackingField;
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  p_questCommonIndividualityCache = &this->fields.questCommonIndividualityCache;
  questCommonIndividualityCache = this->fields.questCommonIndividualityCache;
  if ( !questCommonIndividualityCache )
  {
    questCommonIndividualityCache = BattleFieldEnvironmentData__GetQuestCommonIndividuality(this, method);
    this->fields.questCommonIndividualityCache = questCommonIndividualityCache;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)p_questCommonIndividualityCache,
      (int32_t)questCommonIndividualityCache,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return questCommonIndividualityCache;
}


void BattleFieldEnvironmentData__set_CurBGM(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CurBGM_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurBGM_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleFieldEnvironmentData__set_CurBackGround(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CurBackGround_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurBackGround_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleFieldEnvironmentData__set_Data(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Data_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleFieldEnvironmentData__set_IsUpdateBuffWaiting(
        BattleFieldEnvironmentData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUpdateBuffWaiting_k__BackingField = value;
}


void BattleFieldEnvironmentData__set_Logic(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Logic_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Logic_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleFieldEnvironmentData__set_Perf(
        BattleFieldEnvironmentData_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Perf_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Perf_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleFieldEnvironmentData_BGMData___ctor(BattleFieldEnvironmentData_BGMData_o *this, const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData_BGMData___ctor_53125480(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BgmData_k__BackingField = bgmData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BgmData_k__BackingField,
    (int32_t)bgmData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


System_Int32_array *BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_cachedBuffIndividuality; // x19
  System_Int32_array *cachedBuffIndividuality; // x21
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  const MethodInfo *v7; // x2
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  p_cachedBuffIndividuality = (MissionNaviTransitionBoardItem_o *)&this->fields.cachedBuffIndividuality;
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
      sub_21FFECC(comData, fieldEnv);
    }
    cachedBuffIndividuality = BattleFieldEnvironmentData__GetLinkBuffIndividuality(
                                fieldEnv,
                                (BuffUniqueValue_o *)comData,
                                v7);
    p_cachedBuffIndividuality->klass = (MissionNaviTransitionBoardItem_c *)cachedBuffIndividuality;
    sub_21FFBF4(p_cachedBuffIndividuality, (int32_t)cachedBuffIndividuality, v8, v9, v10, v11, v12, v13);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x8
  BattleServantData_o *ServantData; // x0
  System_Object_array *AllBGMChangeBuffArray; // x20
  System_Func_object__bool__o *v17; // x21

  if ( (byte_593B323 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_BattleBuffData_BuffData____91485480);
    sub_21FFC50(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__);
    sub_21FFC50(&BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo);
    byte_593B323 = 1;
  }
  v5 = sub_21FFEBC(BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_14;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleFieldEnvironmentData_CommonData__get_UniqueVal(comData, v6);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = comData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)comData, v8, v9, v10, v11, v12, v13);
  v14 = *(_QWORD *)(v5 + 16);
  if ( !v14 )
    goto LABEL_14;
  v6 = (const MethodInfo *)*(unsigned int *)(v14 + 20);
  if ( ((unsigned int)v6 & 0x80000000) != 0 )
    return 0;
  if ( !data )
    goto LABEL_14;
  ServantData = BattleData__getServantData(data, (int32_t)v6, 0);
  if ( !ServantData )
    return 1;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleServantData__get_BuffData(ServantData, 0);
  if ( !comData )
LABEL_14:
    sub_21FFECC(comData, v6);
  AllBGMChangeBuffArray = (System_Object_array *)BattleBuffData__GetAllBGMChangeBuffArray(
                                                   (BattleBuffData_o *)comData,
                                                   0);
  v17 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__,
    0);
  return !BasicHelper__Any_object__58575580(
            AllBGMChangeBuffArray,
            (System_Func_T__bool__o *)v17,
            (const MethodInfo_37DCADC *)Method_BasicHelper_Any_BattleBuffData_BuffData____91485480);
}


void BattleFieldEnvironmentData_BGMData__PreGetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  v3 = OverwriteBattleBgmData__ConvertToSaveData(this->fields._BgmData_k__BackingField, 0);
  this->fields.bgmSaveData = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgmSaveData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void BattleFieldEnvironmentData_BGMData__PreSetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(this->fields.bgmSaveData, 0);
  this->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BgmData_k__BackingField,
    (int32_t)InstanceFromSaveData,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_21FFECC(this, fieldEnv);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._BgmData_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._BgmData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, x);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_593B322 & 1) == 0 )
  {
    sub_21FFC50(&BgResourceData_TypeInfo);
    byte_593B322 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    v4 = *((_DWORD *)&this->fields.isActive + 1);
    id = this->fields.id;
    cachedBgResource = (BgResourceData_o *)sub_21FFEBC(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, v4, id, 0);
    this->fields.cachedBgResource = cachedBgResource;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cachedBgResource,
      (int32_t)cachedBgResource,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
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
    sub_21FFECC(this, method);
  return comData->fields.grantType;
}


bool BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_21FFECC(this, method);
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
  __int64 v5; // x1

  if ( !val )
    return 0;
  UniqueVal = BattleFieldEnvironmentData_CommonData__get_UniqueVal(this, (const MethodInfo *)val);
  if ( !UniqueVal )
    sub_21FFECC(0, v5);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_593B321 & 1) == 0 )
  {
    sub_21FFC50(&BuffUniqueValue_TypeInfo);
    byte_593B321 = 1;
  }
  cachedUniqueVal = this->fields.cachedUniqueVal;
  if ( !cachedUniqueVal )
  {
    linkBuffUid = this->fields.linkBuffUid;
    cachedUniqueVal = (BuffUniqueValue_o *)sub_21FFEBC(BuffUniqueValue_TypeInfo);
    BuffUniqueValue___ctor_53007256(cachedUniqueVal, linkBuffUid, -1, 0);
    this->fields.cachedUniqueVal = cachedUniqueVal;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.cachedUniqueVal,
      (int32_t)cachedUniqueVal,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return cachedUniqueVal;
}


void BattleFieldEnvironmentData_SaveData___ctor(BattleFieldEnvironmentData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141___ctor(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141__MoveNext(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *v3; // x20
  int32_t _1__state; // w8
  BattleFieldEnvironmentData_o *_4__this; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *ApplyToSelfBuffEnumerable; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v8; // x19
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c *v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  const MethodInfo *v25; // x1
  struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *v26; // x19
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  BattleBuffData_BuffData_o *v32; // x19
  int32_t buffGroup; // w20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  bool result; // w0
  BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *v47; // [xsp+18h] [xbp-38h]

  v3 = this;
  v47 = this;
  if ( (byte_593B32B & 1) == 0 )
  {
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    this = (BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *)sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_593B32B = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(0, method);
    ApplyToSelfBuffEnumerable = BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable(
                                  _4__this,
                                  v3->fields.svtData,
                                  v2);
    v8 = ApplyToSelfBuffEnumerable;
    if ( !ApplyToSelfBuffEnumerable )
      sub_21FFECC(0, v7);
    klass = ApplyToSelfBuffEnumerable->klass;
    v10 = *(unsigned __int16 *)&ApplyToSelfBuffEnumerable->klass->_2.rank;
    if ( *(_WORD *)&ApplyToSelfBuffEnumerable->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_2237E2C(
              ApplyToSelfBuffEnumerable,
              System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo,
              0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))v12)(
            v8,
            *(_QWORD *)(v12 + 8));
    v47->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v47->fields.__7__wrap1, v13, v14, v15, v16, v17, v18, v19);
    v3 = v47;
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_35:
    sub_21FFECC(this, method);
  while ( 1 )
  {
    v21 = _7__wrap1->klass;
    v22 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_19;
      }
      v24 = (__int64)&v21->vtable[*v23];
    }
    else
    {
LABEL_19:
      v24 = sub_2237E2C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *, _QWORD))v24)(
            _7__wrap1,
            *(_QWORD *)(v24 + 8))
        & 1) == 0 )
    {
      BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141____m__Finally1(v47, v25);
      v47->fields.__7__wrap1 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v47->fields.__7__wrap1, 0, v40, v41, v42, v43, v44, v45);
      return 0;
    }
    v26 = v47->fields.__7__wrap1;
    if ( !v26 )
      sub_21FFECC(v47, v25);
    v27 = v26->klass;
    v28 = *(unsigned __int16 *)&v26->klass->_2.rank;
    if ( *(_WORD *)&v26->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_27;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_27:
      v30 = sub_2237E2C(
              v47->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo,
              0);
    }
    v32 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *, _QWORD))v30)(
                                         v26,
                                         *(_QWORD *)(v30 + 8));
    buffGroup = v47->fields.buffGroup;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v31);
    this = (BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *)BattleDataDefine__IsMatchBuffGroup(
                                                                                  buffGroup,
                                                                                  v32,
                                                                                  0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v32 )
        sub_21FFECC(this, method);
      if ( !v32->fields._IsRemoveApplyToSelf_k__BackingField )
        break;
    }
    _7__wrap1 = v47->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_35;
  }
  v47->fields.__2__current = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v47->fields.__2__current, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  result = 1;
  v47->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *v10; // x20
  int32_t CurrentManagedThreadId; // w0
  struct BattleFieldEnvironmentData_o *_4__this; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct BattleServantData_o *_3__svtData; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_593B32D & 1) == 0 )
  {
    sub_21FFC50(&BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_TypeInfo);
    byte_593B32D = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *)sub_21FFEBC(BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    v10->fields.__4__this = _4__this;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v10->fields.__4__this,
      (int32_t)_4__this,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  _3__svtData = this->fields.__3__svtData;
  v10->fields.svtData = _3__svtData;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields.svtData, (int32_t)_3__svtData, v4, v5, v6, v7, v8, v9);
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v10;
  v10->fields.buffGroup = this->fields.__3__buffGroup;
  return result;
}


BattleBuffData_BuffData_o *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141__System_Collections_IEnumerator_Reset(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141__System_Collections_IEnumerator_get_Current(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141__System_IDisposable_Dispose(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141____m__Finally1(this, method);
}


void BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141____m__Finally1(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__141_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_593B32C & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    byte_593B32C = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_2237E2C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleFieldEnvironmentData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B324 & 1) == 0 )
  {
    sub_21FFC50(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_593B324 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleFieldEnvironmentData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleFieldEnvironmentData___c_TypeInfo->static_fields->__9 = (struct BattleFieldEnvironmentData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleFieldEnvironmentData___c___ctor(BattleFieldEnvironmentData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c___AddBGM_b__76_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


bool BattleFieldEnvironmentData___c___AddBGM_b__76_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


bool BattleFieldEnvironmentData___c___AddBackground_b__75_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BackgroundData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


int32_t BattleFieldEnvironmentData___c___AddBgmFromChangeBgmBuffArray_b__68_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8

  if ( !buff || (changeBgmData = buff->fields.changeBgmData) == 0 )
    sub_21FFECC(this, buff);
  return changeBgmData->fields.addBgmOrder;
}


bool BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__67_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_21FFECC(this, 0);
  return !BattleServantData__isAlive(svt, 0, 0);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__67_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_21FFECC(this, svt);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0);
}


bool BattleFieldEnvironmentData___c___AllApplyOtherBuffEnumerable_b__139_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__get_IsApplyOther(x, 0);
}


void BattleFieldEnvironmentData___c___DelForceBuffArray_b__101_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  BattleBuffData_BuffData__SetOriginalApplyManagerRemoved(x, 0);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData___c___EnumerateValidBgmChangeBuff_b__66_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_21FFECC(this, svt);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0);
}


bool BattleFieldEnvironmentData___c___ExecRemoveBuffAfterProc_b__96_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__get_ExistDelProc(x, 0);
}


bool BattleFieldEnvironmentData___c___ExecRemoveBuffAfterProc_b__96_2(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__get_IsApplyOther(x, 0);
}


bool BattleFieldEnvironmentData___c___GetApplyTargetSvtAndHpDictionary_b__103_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  int32_t BuffType; // w19

  if ( (byte_593B325 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData___c_o *)sub_21FFC50(&BuffList_TypeInfo);
    byte_593B325 = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  BuffType = BattleBuffData_BuffData__get_BuffType(x, 0);
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v4);
  return BuffList__CheckUpdateHp(BuffType, 0);
}


BattleServantData_o *BattleFieldEnvironmentData___c___GetApplyTargetSvtAndHpDictionary_b__103_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  return svt;
}


System_ValueTuple_int__int__o BattleFieldEnvironmentData___c___GetApplyTargetSvtAndHpDictionary_b__103_2(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  int32_t v4; // w20
  int32_t MaxHp; // w2
  System_ValueTuple_int__int__o v6; // x0
  System_ValueTuple_int__int__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593B326 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData___c_o *)sub_21FFC50(&Method_System_ValueTuple_int__int___ctor__);
    byte_593B326 = 1;
  }
  if ( !svt )
    sub_21FFECC(this, svt);
  v4 = ((__int64 (__fastcall *)(BattleServantData_o *, const MethodInfo *, const MethodInfo *))svt->klass->vtable._13_get_resultHp.methodPtr)(
         svt,
         svt->klass->vtable._13_get_resultHp.method,
         method);
  MaxHp = BattleServantData__getMaxHp(svt, 0);
  v6 = (System_ValueTuple_int__int__o)&v8;
  v8 = 0;
  System_ValueTuple_int__int____ctor(
    v6,
    v4,
    MaxHp,
    (const MethodInfo_3CBA4BC *)Method_System_ValueTuple_int__int___ctor__);
  return v8;
}


bool BattleFieldEnvironmentData___c___GetApplyToSelfBuffEnumerable_b__140_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__IsApplySourceRemoved(x, 0) || BattleBuffData_BuffData__IsCompletelyExpired(x, 0);
}


bool BattleFieldEnvironmentData___c___GetBaseBgmList_b__77_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
           x,
           x->klass->vtable._5_get_IsTargetBase.method);
}


bool BattleFieldEnvironmentData___c___GetFieldIndividuality_b__69_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( !x )
    sub_21FFECC(this, 0);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0);
  x->fields.bgmSaveData = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&x->fields.bgmSaveData, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


bool BattleFieldEnvironmentData___c___InitStageField_b__60_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_21FFECC(this, x);
  return comData->fields.grantType == 1;
}


bool BattleFieldEnvironmentData___c___InitStageField_b__60_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_21FFECC(this, x);
  return comData->fields.grantType == 1;
}


bool BattleFieldEnvironmentData___c___ProgressApplyBuffAfterServantUse_b__134_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleBuffData_BuffData_ApplyBuffManager_o *OriginalApplyManager_k__BackingField; // x8

  if ( !x )
    sub_21FFECC(this, 0);
  OriginalApplyManager_k__BackingField = x->fields._OriginalApplyManager_k__BackingField;
  return OriginalApplyManager_k__BackingField
      && OriginalApplyManager_k__BackingField->fields._IsProgressAfterServantUse_k__BackingField;
}


int32_t BattleFieldEnvironmentData___c___ReflectChangedBuffStateApplyOther_b__128_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.addOrder;
}


bool BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__78_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_21FFECC(this, 0);
  return bgm->fields.isAfterReset;
}


bool BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__78_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_21FFECC(this, 0);
  return ((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *))bgm->klass->vtable._5_get_IsTargetBase.methodPtr)(
           bgm,
           bgm->klass->vtable._5_get_IsTargetBase.method);
}


bool BattleFieldEnvironmentData___c___RemoveBgmRelateBuff_b__80_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0);
}


void BattleFieldEnvironmentData___c___SetSaveData_b__8_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( !x )
    sub_21FFECC(this, 0);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&x->fields._BgmData_k__BackingField,
    (int32_t)InstanceFromSaveData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool BattleFieldEnvironmentData___c___TakeOverChangeField_b__63_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_FieldChangeData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.isTakeOverNextWave;
}


bool BattleFieldEnvironmentData___c___TakeOverPlayerServantChangeBgm_b__64_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleServantData__isAlive(x, 0, 0);
}


void BattleFieldEnvironmentData___c___TurnBuffProgressingIncrease_b__119_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_ApplyBuffManager_o *OriginalApplyManager_k__BackingField; // x0

  if ( !x )
    sub_21FFECC(this, 0);
  OriginalApplyManager_k__BackingField = x->fields._OriginalApplyManager_k__BackingField;
  if ( OriginalApplyManager_k__BackingField )
    BattleBuffData_BuffData_ApplyBuffManager__ReflectAddedBuffParamToApplyOther(OriginalApplyManager_k__BackingField, 0);
}


void BattleFieldEnvironmentData___c___UpdateActorBuffLoopEffect_b__116_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  if ( !actor )
    sub_21FFECC(this, 0);
  BattleActorControl__updateBuffLoopEffect(actor, 0);
}


void BattleFieldEnvironmentData___c___UpdateBgmBuffPriorityOnInitWave_b__65_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleFieldEnvironmentData___c_o *)x->fields.changeBgmData) == 0 )
    sub_21FFECC(this, x);
  BattleBuffData_ChangeBgmData__UpdatePriorityForWaveStart((BattleBuffData_ChangeBgmData_o *)this, 0);
}


bool BattleFieldEnvironmentData___c___UpdateDisableApplyBuff_b__118_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__isEffectBuff(buff, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass108_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleFieldEnvironmentData___c__DisplayClass108_0___GetIndividualityExceptDelTarget_b__0(
        BattleFieldEnvironmentData___c__DisplayClass108_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *subList; // x0

  if ( (byte_593B327 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    byte_593B327 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_21FFECC(0, *(_QWORD *)&x);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
}


void BattleFieldEnvironmentData___c__DisplayClass117_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass117_0___ReflectAgainApplyBuff_b__0(
        BattleFieldEnvironmentData___c__DisplayClass117_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  if ( x->fields._OriginalApplyManager_k__BackingField )
    BattleBuffData_BuffData_ApplyBuffManager__ReflectBuffRemoveToApplyOther(
      x->fields._OriginalApplyManager_k__BackingField,
      0,
      this->fields.svtUniqueId,
      0);
}


void BattleFieldEnvironmentData___c__DisplayClass127_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass127_0___CheckFieldBuff_b__0(
        BattleFieldEnvironmentData___c__DisplayClass127_0_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *_4__this; // x0
  BattleBuffData_BuffData_array *v4; // [xsp+0h] [xbp-20h] BYREF
  BattleBuffData_BuffData_array *onList; // [xsp+8h] [xbp-18h] BYREF

  _4__this = this->fields.__4__this;
  v4 = 0;
  onList = 0;
  if ( !_4__this
    || (_4__this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(_4__this, method)) == 0 )
  {
    sub_21FFECC(_4__this, method);
  }
  BattleBuffData__checkFieldBuff(
    (BattleBuffData_o *)_4__this,
    this->fields.fieldSvtIds,
    this->fields.aliveSvtData,
    &onList,
    &v4,
    this->fields.logic,
    0);
}


void BattleFieldEnvironmentData___c__DisplayClass132_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass132_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass132_0___GetUsedApplyBuffArray_b__0(
        BattleFieldEnvironmentData___c__DisplayClass132_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_ApplyBuffManager_o *OriginalApplyManager_k__BackingField; // x8

  if ( !x )
    sub_21FFECC(this, 0);
  OriginalApplyManager_k__BackingField = x->fields._OriginalApplyManager_k__BackingField;
  return OriginalApplyManager_k__BackingField
      && BattleBuffData_BuffData_ApplyBuffManager__IsUsedApplyOtherBuff(
           OriginalApplyManager_k__BackingField,
           this->fields.funcFilter,
           0);
}


void BattleFieldEnvironmentData___c__DisplayClass133_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass133_0___RevertUnusedApplyBuffSubMember_b__0(
        BattleFieldEnvironmentData___c__DisplayClass133_0_o *this,
        BattleBuffData_BuffData_o *targetBuff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c__DisplayClass133_0_o *v4; // x20

  v4 = this;
  if ( (byte_593B328 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData___c__DisplayClass133_0_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_593B328 = 1;
  }
  if ( !targetBuff
    || (this = (BattleFieldEnvironmentData___c__DisplayClass133_0_o *)v4->fields.hashFieldSvtUniqueId) == 0 )
  {
    sub_21FFECC(this, targetBuff);
  }
  return !System_Collections_Generic_HashSet_int___Contains(
            (System_Collections_Generic_HashSet_int__o *)this,
            targetBuff->fields._ApplyBuffOwnedSvtUniqueId_k__BackingField,
            (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


void BattleFieldEnvironmentData___c__DisplayClass140_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass140_0___GetApplyToSelfBuffEnumerable_b__1(
        BattleFieldEnvironmentData___c__DisplayClass140_0_o *this,
        System_Collections_Generic_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData___o x,
        const MethodInfo *method)
{
  BattleServantData_o *key; // x19
  BattleFieldEnvironmentData___c__DisplayClass140_0_o *v4; // x20
  struct BattleServantData_o *svtData; // x8

  key = x.fields.key;
  v4 = this;
  if ( (byte_593B329 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData___c__DisplayClass140_0_o *)sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData___get_Key__);
    byte_593B329 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData || !key )
    sub_21FFECC(this, x.fields.key);
  return BattleServantData__checkID(key, svtData->fields.uniqueId, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass140_0___GetApplyToSelfBuffEnumerable_b__2(
        BattleFieldEnvironmentData___c__DisplayClass140_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *svtData; // x8

  svtData = this->fields.svtData;
  if ( !svtData || !x )
    sub_21FFECC(this, x);
  return BattleBuffData_BuffData__IsMatchApplyTarget(x, svtData->fields.isEnemy, 0);
}


BattleBuffData_BuffData_o *BattleFieldEnvironmentData___c__DisplayClass140_0___GetApplyToSelfBuffEnumerable_b__3(
        BattleFieldEnvironmentData___c__DisplayClass140_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleBuffData_BuffData__CloneApplyBuff(x, this->fields.svtData, this->fields.__4__this, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass71_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass71_0___GetQuestCommonIndividuality_b__0(
        BattleFieldEnvironmentData___c__DisplayClass71_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Object_array *bgRangeArray; // x20
  System_Func_object__bool__o *v9; // x19

  if ( (byte_593B32A & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_RangeValue___);
    sub_21FFC50(&System_Func_RangeValue__bool__TypeInfo);
    sub_21FFC50(&Method_BattleFieldEnvironmentData___c__DisplayClass71_1__GetQuestCommonIndividuality_b__1__);
    sub_21FFC50(&BattleFieldEnvironmentData___c__DisplayClass71_1_TypeInfo);
    byte_593B32A = 1;
  }
  v5 = sub_21FFEBC(BattleFieldEnvironmentData___c__DisplayClass71_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  bgRangeArray = (System_Object_array *)this->fields.bgRangeArray;
  *(_DWORD *)(v5 + 16) = x;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RangeValue__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass71_1__GetQuestCommonIndividuality_b__1__,
    0);
  return !BasicHelper__Any_object__58575580(
            bgRangeArray,
            (System_Func_T__bool__o *)v9,
            (const MethodInfo_37DCADC *)Method_BasicHelper_Any_RangeValue___);
}


void BattleFieldEnvironmentData___c__DisplayClass71_1___ctor(
        BattleFieldEnvironmentData___c__DisplayClass71_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass71_1___GetQuestCommonIndividuality_b__1(
        BattleFieldEnvironmentData___c__DisplayClass71_1_o *this,
        RangeValue_o *range,
        const MethodInfo *method)
{
  if ( !range )
    sub_21FFECC(this, 0);
  return RangeValue__IsInRange(range, this->fields.x, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass73_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass73_0___GetLinkBuffData_b__0(
        BattleFieldEnvironmentData___c__DisplayClass73_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BuffUniqueValue_o *uniqueVal; // x8

  if ( !buff || (uniqueVal = this->fields.uniqueVal) == 0 )
    sub_21FFECC(this, buff);
  return buff->fields.addOrder == uniqueVal->fields.buffUniqueId;
}


void BattleFieldEnvironmentData___c__DisplayClass79_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass79_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass79_0___RemoveRelateBuff_b__0(
        BattleFieldEnvironmentData___c__DisplayClass79_0_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_21FFECC(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


bool BattleFieldEnvironmentData___c__DisplayClass79_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass79_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_21FFECC(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


void BattleFieldEnvironmentData___c__DisplayClass80_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass80_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass80_0___RemoveBgmRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass80_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_21FFECC(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


void BattleFieldEnvironmentData___c__DisplayClass96_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass96_0___ExecRemoveBuffAfterProc_b__1(
        BattleFieldEnvironmentData___c__DisplayClass96_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !this->fields.__4__this )
    sub_21FFECC(this, x);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_53146744(
    this->fields.__4__this,
    x,
    this->fields.isAddAfterTask,
    v3);
}