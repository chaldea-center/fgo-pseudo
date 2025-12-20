void BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_List_object__o *v26; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_HashSet_T__o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  _BOOL8 v46; // x0
  __int64 v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct BattlePerformance_o *perf; // x1
  struct BattlePerformance_o **p_Perf_k__BackingField; // x21
  struct BattleLogic_o *logic; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  UnityEngine_Object_o *Perf_k__BackingField; // x20
  UnityEngine_Object_o *infoComp; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  struct BattleInformationComponent_o *v71; // x8
  struct BattleFieldParamComponent_o *fieldParam; // x1

  if ( (byte_4D2F3ED & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData____ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_BattleLogicTask__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F3ED = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData____ctor__);
  this->fields.cachedApplyBuffEachSvtDictionary = (struct System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___o *)v5;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedApplyBuffEachSvtDictionary,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v12;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.backgroundList, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v19;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgmList, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  this->fields.addOrder = 1;
  v26 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleLogicTask__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v26;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.addTaskList, (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v33,
    (const MethodInfo_371A508 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v33;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.hashDelType, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._Data_k__BackingField = data;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)data,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( !data )
    goto LABEL_15;
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  p_Perf_k__BackingField = &this->fields._Perf_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Perf_k__BackingField,
    (int32_t)perf,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  logic = data->fields.logic;
  this->fields._Logic_k__BackingField = logic;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Logic_k__BackingField,
    (int32_t)logic,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  Perf_k__BackingField = (UnityEngine_Object_o *)this->fields._Perf_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v46 = UnityEngine_Object__op_Inequality(Perf_k__BackingField, 0, 0);
  if ( v46 )
  {
    if ( !*p_Perf_k__BackingField )
      goto LABEL_15;
    infoComp = (UnityEngine_Object_o *)(*p_Perf_k__BackingField)->fields.infoComp;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v46 = UnityEngine_Object__op_Inequality(infoComp, 0, 0);
    if ( v46 )
    {
      if ( *p_Perf_k__BackingField )
      {
        v71 = (*p_Perf_k__BackingField)->fields.infoComp;
        if ( v71 )
        {
          fieldParam = v71->fields.fieldParam;
          this->fields._FieldParamComp_k__BackingField = fieldParam;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&this->fields._FieldParamComp_k__BackingField,
            (int32_t)fieldParam,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
          return;
        }
      }
LABEL_15:
      sub_1C942F0(v46, v47);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BattleFieldEnvironmentData_BGMData_o *v16; // x21
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v18; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v20; // x8
  const MethodInfo *v21; // x1
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  BattleFieldEnvironmentData___c_c *v23; // x0
  System_Func_object__bool__o *_9__76_0; // x21
  Il2CppObject *v25; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  BattleFieldEnvironmentData___c_c *v34; // x8
  System_Collections_Generic_List_object__o *v35; // x21
  BattleFieldEnvironmentData_o *v36; // x20
  System_Predicate_object__o *_9__76_1; // x22
  Il2CppObject *v38; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Comparison_T__o *v46; // x21
  System_Collections_Generic_List_object__o *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  BattleFieldEnvironmentData_o *v57; // x1
  Il2CppClass **v58; // x0

  v8 = this;
  if ( (byte_4D2F3FD & 1) == 0 )
  {
    sub_1C94098(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1C94098(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1C94098(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    sub_1C94098(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__AddBGM_b__76_0__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__AddBGM_b__76_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3FD = 1;
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
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v20[4] = (BattleBuffData_c *)v16;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, (int32_t)v11, v12, v13, v14, v15);
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
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v23 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__76_0 = (System_Func_object__bool__o *)v23->static_fields->__9__76_0;
  if ( !_9__76_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v23->static_fields->__9;
    _9__76_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__76_0, v25, Method_BattleFieldEnvironmentData___c__AddBGM_b__76_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__76_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__76_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__76_0,
      (int32_t)_9__76_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = System_Linq_Enumerable__Where_object_(
          bgmList,
          (System_Func_TSource__bool__o *)_9__76_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  this = (BattleFieldEnvironmentData_o *)System_Linq_Enumerable__ToList_object_(
                                           v33,
                                           (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
  v34 = BattleFieldEnvironmentData___c_TypeInfo;
  v35 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList;
  v36 = this;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v34 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__76_1 = (System_Predicate_object__o *)v34->static_fields->__9__76_1;
  if ( !_9__76_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v34->static_fields->__9;
    _9__76_1 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(_9__76_1, v38, Method_BattleFieldEnvironmentData___c__AddBGM_b__76_1__, 0);
    v39 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v39->__9__76_1 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__76_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v39->__9__76_1, (int32_t)_9__76_1, v40, v41, v42, v43, v44, v45);
  }
  if ( !v35 )
    goto LABEL_33;
  System_Collections_Generic_List_object___RemoveAll(
    v35,
    (System_Predicate_T__o *)_9__76_1,
    (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v46 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v46, (Il2CppObject *)v8, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !v36
    || (System_Collections_Generic_List_object___Sort_59164920(
          (System_Collections_Generic_List_object__o *)v36,
          v46,
          (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__),
        v47 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList,
        this = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)v36,
                                                 0,
                                                 (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__),
        !v47)
    || (items = v47->fields._items,
        v55 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__,
        ++v47->fields._version,
        !items) )
  {
LABEL_33:
    sub_1C942F0(this, addOrder);
  }
  size = v47->fields._size;
  v57 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v47,
      (Il2CppObject *)this,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v58 = &items->obj.klass + size;
    v47->fields._size = size + 1;
    v58[4] = (Il2CppClass *)v57;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v57, v48, v49, v50, v51, v52, v53);
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
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *backgroundList; // x21
  struct System_Collections_Generic_List_int__o *questIndividuality; // x22
  Il2CppObject *klass; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v26; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v28; // x8
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1

  v6 = this;
  if ( (byte_4D2F3FC & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_1C94098(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__AddBackground_b__75_0__);
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3FC = 1;
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
    questIndividuality = this[1].fields._Data_k__BackingField->fields.questIndividuality;
    if ( !questIndividuality )
    {
      if ( !*(_DWORD *)&this[1].fields._IsUpdateBuffWaiting_k__BackingField )
      {
        j_il2cpp_runtime_class_init_0(this);
        this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
      }
      klass = (Il2CppObject *)this[1].fields._Data_k__BackingField->klass;
      questIndividuality = (struct System_Collections_Generic_List_int__o *)sub_1C942E4(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
      System_Predicate_object____ctor(
        (System_Predicate_object__o *)questIndividuality,
        klass,
        Method_BattleFieldEnvironmentData___c__AddBackground_b__75_0__,
        0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__75_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)questIndividuality;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__75_0,
        (int32_t)questIndividuality,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    if ( backgroundList )
    {
      System_Collections_Generic_List_object___RemoveAll(
        backgroundList,
        (System_Predicate_T__o *)questIndividuality,
        (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
      goto LABEL_14;
    }
LABEL_20:
    sub_1C942F0(this, addOrder);
  }
LABEL_14:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_20;
  buffData = this->fields._buffData;
  v26 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_20;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= buffData->fields.resumptionHpFromLossMaxHp )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v8,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v28[4] = (BattleBuffData_c *)v8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)v8, v9, v10, v11, v12, v13, v14);
  }
  BattleFieldEnvironmentData__SortBackGround(v6, v29);
  BattleFieldEnvironmentData__SortBGM(v6, v30);
  return v6->fields._CurBackGround_k__BackingField;
}


bool BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *changeBgmBuffArray,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w19
  BattleFieldEnvironmentData___c_c *v6; // x0
  System_Func_object__int__o *_9__68_0; // x22
  Il2CppObject *v8; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x20
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  BattleBuffData_ChangeBgmData_o *v35; // x0
  Generator_BGM_o *v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( (byte_4D2F3F5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__68_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3F5 = 1;
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
    _9__68_0 = (System_Func_object__int__o *)v6->static_fields->__9__68_0;
    if ( !_9__68_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__68_0 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__68_0,
        v8,
        Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__68_0__,
        0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__68_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__68_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__68_0,
        (int32_t)_9__68_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)changeBgmBuffArray,
            (System_Func_TSource__TKey__o *)_9__68_0,
            (const MethodInfo_31CC104 *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    if ( !v16 )
      sub_1C942F0(0, v17);
    klass = v16->klass;
    v19 = v16;
    v20 = *(unsigned __int16 *)&v16->klass->_2.rank;
    if ( *(_WORD *)&v16->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_15;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_15:
      v22 = sub_1C6A420(v16, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v22)(
            v19,
            *(_QWORD *)(v22 + 8));
    if ( !v24 )
      sub_1C942F0(0, v23);
    while ( 1 )
    {
      v25 = *(_QWORD *)v24;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_22;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_22:
        v28 = sub_1C6A420(v24, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
        break;
      v29 = *(_QWORD *)v24;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_29;
        }
        v32 = v29 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_29:
        v32 = sub_1C6A420(v24, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
      }
      v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
      if ( !v33 )
        sub_1C942F0(0, v34);
      v35 = *(BattleBuffData_ChangeBgmData_o **)(v33 + 376);
      if ( !v35 )
        sub_1C942F0(0, v34);
      v36 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(v35, this->fields._Data_k__BackingField, 0);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
        this,
        v36,
        2,
        0,
        this->klass->vtable._6_AddBGM.method);
    }
    v37 = *(_QWORD *)v24;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_38;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_38:
      v40 = sub_1C6A420(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v24, *(_QWORD *)(v40 + 8));
  }
  return !IsNullOrEmpty;
}


void BattleFieldEnvironmentData__AddCachedApplyOtherBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v4; // x20
  const MethodInfo_37C8158 *v5; // x4
  __int64 v6; // x0
  __int64 v7; // x1
  BattleServantData_o *v8; // x22
  System_Collections_Generic_List_object__o *v9; // x21
  Il2CppObject *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
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
  if ( (byte_4D2F417 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData___Deconstruct__);
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__);
    byte_4D2F417 = 1;
  }
  current = (struct System_Collections_Generic_KeyValuePair_TKey__TValue__o)0LL;
  key = 0;
  v24 = 0;
  memset(&v26, 0, sizeof(v26));
  if ( !buff )
    goto LABEL_20;
  if ( !BattleBuffData_BuffData__get_IsApplyOther(buff, 0) )
    return;
  this = (BattleFieldEnvironmentData_o *)v4->fields.cachedApplyBuffEachSvtDictionary;
  if ( !this )
LABEL_20:
    sub_1C942F0(this, buff);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___GetEnumerator__);
  v26 = v22;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v26,
            (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___MoveNext__) )
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
      sub_1C942F0(v6, v7);
    v9 = (System_Collections_Generic_List_object__o *)key;
    if ( BattleBuffData_BuffData__IsMatchApplyTarget(buff, v24->fields.isEnemy, 0) )
    {
      v10 = (Il2CppObject *)BattleBuffData_BuffData__CloneApplyBuff(buff, v8, v4, 0);
      v17 = v10;
      if ( !v9 )
        sub_1C942F0(v10, v10);
      items = v9->fields._items;
      v19 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
      ++v9->fields._version;
      if ( !items )
        sub_1C942F0(v10, v10);
      size = v9->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          v10,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v26,
    (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_BattleServantData__List_BattleBuffData_BuffData___Dispose__);
}


void BattleFieldEnvironmentData__AddFieldBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool unFixBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buff);
  if ( !BuffData )
    sub_1C942F0(0, v8);
  BattleBuffData__addBuff(BuffData, buff, 1, unFixBuff, 0);
  BattleFieldEnvironmentData__AddCachedApplyOtherBuff(this, buff, v9);
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

  if ( (byte_4D2F407 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F407 = 1;
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
                                                                   (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
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
              (const MethodInfo_371AB9C *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_15:
      sub_1C942F0(addTaskList, v5);
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
  System_Func_object__bool__o *_9__67_0; // x21
  Il2CppObject *v7; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  BattleFieldEnvironmentData___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__object__o *_9__67_1; // x21
  Il2CppObject *v19; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Object_array *v28; // x1
  const MethodInfo *v29; // x2

  v2 = this;
  if ( (byte_4D2F3F4 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C94098(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C94098(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__67_0__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__67_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3F4 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C942F0(this, method);
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField->fields.player_datalist;
  v5 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v5 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__67_0 = (System_Func_object__bool__o *)v5->static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__67_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__67_0,
      v7,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__67_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = (struct System_Func_BattleServantData__bool__o *)_9__67_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__67_0,
      (int32_t)_9__67_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          player_datalist,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v16 = BattleFieldEnvironmentData___c_TypeInfo;
  v17 = v15;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v16 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__67_1 = (System_Func_object__object__o *)v16->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__67_1 = (System_Func_object__object__o *)sub_1C942E4(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_object__object____ctor(
      _9__67_1,
      v19,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__67_1__,
      0);
    v20 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v20->__9__67_1 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__67_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v20->__9__67_1, (int32_t)_9__67_1, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__67_1,
                                                               (const MethodInfo_31D5F64 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
  v28 = System_Linq_Enumerable__ToArray_object_(
          v27,
          (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v28, v29);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Int32_array *buckets; // x8
  _QWORD *v17; // x9
  __int64 slots_low; // x10
  __int64 v19; // x8

  if ( (byte_4D2F408 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleLogicTask__Add__);
    byte_4D2F408 = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_12;
    if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
           hashDelType,
           addType,
           (const MethodInfo_371ABFC *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_Int32Enum___Add(
          hashDelType,
          addType,
          (const MethodInfo_371B70C *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.addTaskList) == 0)
    || (buckets = hashDelType->fields._buckets,
        v17 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++HIDWORD(hashDelType->fields._slots),
        !buckets) )
  {
LABEL_12:
    sub_1C942F0(hashDelType, task);
  }
  slots_low = SLODWORD(hashDelType->fields._slots);
  if ( (unsigned int)slots_low >= LODWORD(buckets->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)hashDelType,
      (Il2CppObject *)task,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = (__int64)buckets + 8 * slots_low;
    LODWORD(hashDelType->fields._slots) = slots_low + 1;
    *(_QWORD *)(v19 + 32) = task;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 32), (int32_t)task, v10, v11, v12, v13, v14, v15);
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
  if ( (byte_4D2F40E & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__110_0__);
    byte_4D2F40E = 1;
  }
  if ( !svtData || (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(svtData, 0)) == 0 )
    sub_1C942F0(this, svtData);
  AllValidBGMChangeBuffArray = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0);
  v6 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(v6, v4, Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__110_0__, 0);
  BasicHelper__ForEach_object_(
    AllValidBGMChangeBuffArray,
    (System_Action_T__o *)v6,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void BattleFieldEnvironmentData__AddUpdateBgmTask(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  PlayCurrentBgmLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4D2F410 & 1) == 0 )
  {
    sub_1C94098(&PlayCurrentBgmLogicTask_TypeInfo);
    byte_4D2F410 = 1;
  }
  v3 = (PlayCurrentBgmLogicTask_o *)sub_1C942E4(PlayCurrentBgmLogicTask_TypeInfo);
  PlayCurrentBgmLogicTask___ctor(v3, 0);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 3, 1, v4);
}


void BattleFieldEnvironmentData__AddUpdateViewTask(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  UpdateFieldViewBattleLogicTask_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4D2F40F & 1) == 0 )
  {
    sub_1C94098(&UpdateFieldViewBattleLogicTask_TypeInfo);
    byte_4D2F40F = 1;
  }
  v3 = (UpdateFieldViewBattleLogicTask_o *)sub_1C942E4(UpdateFieldViewBattleLogicTask_TypeInfo);
  UpdateFieldViewBattleLogicTask___ctor(v3, 0);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v3, 2, 1, v4);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v5; // x0
  BattleFieldEnvironmentData___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *_9__124_0; // x20
  Il2CppObject *v9; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4D2F419 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__AllApplyOtherBuffEnumerable_b__124_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F419 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_1C942F0(0, v4);
  v5 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
  v6 = BattleFieldEnvironmentData___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__124_0 = (System_Func_object__bool__o *)v6->static_fields->__9__124_0;
  if ( !_9__124_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__124_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__124_0,
      v9,
      Method_BattleFieldEnvironmentData___c__AllApplyOtherBuffEnumerable_b__124_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__124_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__124_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__124_0,
      (int32_t)_9__124_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__Where_object_(
                                                                                v7,
                                                                                (System_Func_TSource__bool__o *)_9__124_0,
                                                                                (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
}


bool BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_47092000; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x3
  System_Int32_array *FieldAndBuffIndividuality; // x0
  __int64 v9; // x1

  Individualities_47092000 = buffIndiv;
  if ( opSvt )
    Individualities_47092000 = BattleServantData__getIndividualities_47092000(opSvt, buffIndiv, 1, 0, 0);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)buffIndiv);
  FieldAndBuffIndividuality = BattleFieldEnvironmentData__GetFieldAndBuffIndividuality(this, 1, 0, v7);
  if ( !BuffData )
    sub_1C942F0(FieldAndBuffIndividuality, v9);
  return BattleBuffData__checkActBuff(BuffData, 105, FieldAndBuffIndividuality, Individualities_47092000, 0);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4D2F412 & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass115_0__CheckFieldBuff_b__0__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass115_0_TypeInfo);
    byte_4D2F412 = 1;
  }
  v9 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass115_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C942F0(v10, v11);
  *(_QWORD *)(v9 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = fieldSvtIds;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)fieldSvtIds, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v9 + 32) = aliveSvtData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)aliveSvtData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v9 + 40) = logic;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)logic, v30, v31, v32, v33, v34, v35);
  v36 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v9,
    Method_BattleFieldEnvironmentData___c__DisplayClass115_0__CheckFieldBuff_b__0__,
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
    sub_1C942F0(0, v4);
  v5 = BattleBuffData__usedProgressing(BuffData, 0);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v5, 1, v6);
}


void BattleFieldEnvironmentData__ClearCachedApplyOtherBuff(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___o *cachedApplyBuffEachSvtDictionary; // x0

  if ( (byte_4D2F418 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___Clear__);
    byte_4D2F418 = 1;
  }
  cachedApplyBuffEachSvtDictionary = this->fields.cachedApplyBuffEachSvtDictionary;
  if ( !cachedApplyBuffEachSvtDictionary )
    sub_1C942F0(0, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)cachedApplyBuffEachSvtDictionary,
    (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___Clear__);
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
    sub_1C942F0(this, a);
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
  unsigned int v7; // w22
  __int64 v8; // x23
  BattleBuffData_BuffData_ApplyBuffManager_o *v9; // x8
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
        sub_1C942F8(BuffData);
      v8 = *((_QWORD *)&v6->fields.passiveList + (int)v7);
      if ( !v8 )
        break;
      BuffData = *(BattleBuffData_o **)(v8 + 360);
      if ( !BuffData )
        break;
      BattleBuffData_IntervalData__DecrementTurn((BattleBuffData_IntervalData_o *)BuffData, 0);
      v9 = *(BattleBuffData_BuffData_ApplyBuffManager_o **)(v8 + 600);
      if ( v9 )
        BattleBuffData_BuffData_ApplyBuffManager__ReflectIntervalToApplyOther(v9, 0);
      resumptionHpFromLossMaxHp = v6->fields.resumptionHpFromLossMaxHp;
      if ( (int)++v7 >= resumptionHpFromLossMaxHp )
        goto LABEL_11;
    }
LABEL_12:
    sub_1C942F0(BuffData, v4);
  }
LABEL_11:
  IsUpdateBuffWaiting_k__BackingField = this->fields._IsUpdateBuffWaiting_k__BackingField;
  this->fields._IsUpdateBuffWaiting_k__BackingField = IsUpdateBuffWaiting_k__BackingField
                                                    | !BasicHelper__IsNullOrEmpty(
                                                         (System_Collections_ICollection_o *)v6,
                                                         0);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
        System_Collections_Generic_IEnumerable_BattleServantData__o *servantEnumerable,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  System_Func_object__object__o *_9__66_0; // x20
  Il2CppObject *v5; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2F3F3 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
    sub_1C94098(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__66_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3F3 = 1;
  }
  if ( !servantEnumerable )
    return 0;
  v3 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v3 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__66_0 = (System_Func_object__object__o *)v3->static_fields->__9__66_0;
  if ( !_9__66_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__66_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo);
    System_Func_object__object____ctor(
      _9__66_0,
      v5,
      Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__66_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__66_0 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__66_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__66_0, (int32_t)_9__66_0, v7, v8, v9, v10, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                                (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__66_0,
                                                                                (const MethodInfo_31D5F64 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
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

  if ( (byte_4D2F415 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    byte_4D2F415 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_1C942F0(0, v4);
  v5 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
  v6 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_46924748(this, (BattleBuffData_BuffData_array *)v6, 1, v7);
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
  if ( (byte_4D2F409 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    byte_4D2F409 = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0 )
  {
    sub_1C942F0(this, removeBuffInfo);
  }
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)this,
         (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_46924748(
    v6,
    (BattleBuffData_BuffData_array *)v7,
    isAddAfterTask,
    v8);
  return removeBuffInfo;
}


void BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_46924748(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  BattleFieldEnvironmentData___c_c *v16; // x0
  System_Func_object__bool__o *_9__96_2; // x22
  Il2CppObject *v18; // x23
  GrandQuestFolderBoardItem_o *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x22
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x22
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  BattleBuffData_BuffData_ApplyBuffManager_o *v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  BattleFieldEnvironmentData___c_c *v48; // x8
  System_Func_object__bool__o *_9__96_0; // x22
  Il2CppObject *v50; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Collections_Generic_IEnumerable_T__o *v58; // x20
  System_Action_object__o *v59; // x22
  const MethodInfo *v60; // x1

  if ( (byte_4D2F40A & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__96_0__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__96_2__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass96_0__ExecRemoveBuffAfterProc_b__1__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass96_0_TypeInfo);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F40A = 1;
  }
  v7 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass96_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_50;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_BYTE *)(v7 + 24) = isAddAfterTask;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0) )
    return;
  v16 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v16 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__96_2 = (System_Func_object__bool__o *)v16->static_fields->__9__96_2;
  if ( !_9__96_2 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__96_2 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__96_2,
      v18,
      Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__96_2__,
      0);
    static_fields = (GrandQuestFolderBoardItem_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields[1].klass = (GrandQuestFolderBoardItem_c *)_9__96_2;
    sub_1C9403C(static_fields + 1, (int32_t)_9__96_2, v20, v21, v22, v23, v24, v25);
  }
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
         (System_Func_TSource__bool__o *)_9__96_2,
         (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v8 )
LABEL_50:
    sub_1C942F0(v8, v9);
  klass = v8->klass;
  v27 = v8;
  v28 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_16;
    }
    v30 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_16:
    v30 = sub_1C6A420(v8, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v30)(
          v27,
          *(_QWORD *)(v30 + 8));
  if ( !v32 )
    sub_1C942F0(0, v31);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_23;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_23:
      v36 = sub_1C6A420(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v39 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
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
      v40 = sub_1C6A420(v32, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    if ( !v41 )
      sub_1C942F0(0, v42);
    v43 = *(BattleBuffData_BuffData_ApplyBuffManager_o **)(v41 + 600);
    if ( v43 )
      BattleBuffData_BuffData_ApplyBuffManager__SetRemoved(v43, 0);
  }
  v44 = *(_QWORD *)v32;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_39;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_39:
    v47 = sub_1C6A420(v32, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v32, *(_QWORD *)(v47 + 8));
  v48 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v48 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__96_0 = (System_Func_object__bool__o *)v48->static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v50 = (Il2CppObject *)v48->static_fields->__9;
    _9__96_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__96_0,
      v50,
      Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__96_0__,
      0);
    v51 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v51->__9__96_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__96_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v51->__9__96_0, (int32_t)_9__96_0, v52, v53, v54, v55, v56, v57);
  }
  v58 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                         (System_Func_TSource__bool__o *)_9__96_0,
                                                         (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v59 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v59,
    (Il2CppObject *)v7,
    Method_BattleFieldEnvironmentData___c__DisplayClass96_0__ExecRemoveBuffAfterProc_b__1__,
    0);
  BasicHelper__ForEach_object_(
    v58,
    (System_Action_T__o *)v59,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddUpdateViewTask(this, v60);
}


// local variable allocation has failed, the output may be wrong!
void BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_46926232(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_1C942F0(this, 0);
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


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  void *cachedApplyBuffEachSvtDictionary; // x0
  Il2CppObject *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  long double inited; // q0
  Il2CppObject *v21; // x19
  System_Predicate_object__o *v22; // x20
  Il2CppObject *v23; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v31; // x19
  _QWORD *v32; // x19
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0
  System_Collections_Generic_Dictionary_K__V__o *v36; // x20
  System_Func_T__TResult__o *v37; // x22
  struct System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___o *v38; // x20
  Il2CppObject *v39; // x22
  const MethodInfo *v40; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v41; // x19
  System_Func_object__bool__o *v42; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x19
  System_Func_object__object__o *v44; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2F41A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_BattleBuffData_BuffData___);
    sub_1C94098(&Method_BasicHelper_Remove_BattleServantData__List_BattleBuffData_BuffData____);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___set_Item__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C94098(&System_Func_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData____bool__TypeInfo);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
    sub_1C94098(&System_Predicate_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__GetApplyToSelfBuffEnumerable_b__125_0__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass125_0__GetApplyToSelfBuffEnumerable_b__1__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass125_0__GetApplyToSelfBuffEnumerable_b__2__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass125_0__GetApplyToSelfBuffEnumerable_b__3__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass125_0_TypeInfo);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F41A = 1;
  }
  value = 0;
  v5 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass125_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_27;
  *(_QWORD *)(v5 + 16) = svtData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)svtData, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
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
             (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___TryGetValue__) )
      {
        v21 = value;
        cachedApplyBuffEachSvtDictionary = BattleFieldEnvironmentData___c_TypeInfo;
        if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
          cachedApplyBuffEachSvtDictionary = BattleFieldEnvironmentData___c_TypeInfo;
        }
        v22 = *(System_Predicate_object__o **)(*((_QWORD *)cachedApplyBuffEachSvtDictionary + 23) + 208LL);
        if ( !v22 )
        {
          if ( !*((_DWORD *)cachedApplyBuffEachSvtDictionary + 56) )
          {
            j_il2cpp_runtime_class_init_0(cachedApplyBuffEachSvtDictionary);
            cachedApplyBuffEachSvtDictionary = BattleFieldEnvironmentData___c_TypeInfo;
          }
          v23 = (Il2CppObject *)**((_QWORD **)cachedApplyBuffEachSvtDictionary + 23);
          v22 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_object____ctor(
            v22,
            v23,
            Method_BattleFieldEnvironmentData___c__GetApplyToSelfBuffEnumerable_b__125_0__,
            0);
          static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
          static_fields->__9__125_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v22;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__125_0,
            (int32_t)v22,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30);
        }
        if ( v21 )
        {
          System_Collections_Generic_List_object___RemoveAll(
            (System_Collections_Generic_List_object__o *)v21,
            (System_Predicate_T__o *)v22,
            (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)value;
        }
      }
      else
      {
        v36 = (System_Collections_Generic_Dictionary_K__V__o *)this->fields.cachedApplyBuffEachSvtDictionary;
        v37 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData____bool__TypeInfo);
        System_Func_KeyValuePair_object__object___bool____ctor(
          v37,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass125_0__GetApplyToSelfBuffEnumerable_b__1__,
          0);
        BasicHelper__Remove_object__object_(
          v36,
          (System_Func_KeyValuePair_K__V___bool__o *)v37,
          (const MethodInfo_318AE8C *)Method_BasicHelper_Remove_BattleServantData__List_BattleBuffData_BuffData____);
        v38 = this->fields.cachedApplyBuffEachSvtDictionary;
        v39 = *(Il2CppObject **)(v5 + 16);
        v41 = BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(this, v40);
        v42 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v42,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass125_0__GetApplyToSelfBuffEnumerable_b__2__,
          0);
        v43 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v41,
                (System_Func_TSource__bool__o *)v42,
                (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
        v44 = (System_Func_object__object__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
        System_Func_object__object____ctor(
          v44,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass125_0__GetApplyToSelfBuffEnumerable_b__3__,
          0);
        v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                     v43,
                                                                     (System_Func_TSource__TResult__o *)v44,
                                                                     (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
        cachedApplyBuffEachSvtDictionary = System_Linq_Enumerable__ToList_object_(
                                             v45,
                                             (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
        if ( v38 )
        {
          v31 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)cachedApplyBuffEachSvtDictionary;
          System_Collections_Generic_Dictionary_object__object___set_Item(
            (System_Collections_Generic_Dictionary_object__object__o *)v38,
            v39,
            (Il2CppObject *)cachedApplyBuffEachSvtDictionary,
            (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_BattleServantData__List_BattleBuffData_BuffData___set_Item__);
          return v31;
        }
      }
    }
LABEL_27:
    sub_1C942F0(cachedApplyBuffEachSvtDictionary, v7);
  }
  v32 = Method_System_Array_Empty_BattleBuffData_BuffData___;
  v33 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_BuffData___ + 7);
  if ( !v33 )
  {
    sub_1C6A188(Method_System_Array_Empty_BattleBuffData_BuffData___);
    v33 = v32[7];
  }
  v34 = *(_QWORD *)(v33 + 16);
  if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
    v34 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v34 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v34);
  v35 = *(_QWORD *)(v32[7] + 16LL);
  if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
    v35 = sub_1C6A12C(inited);
  return **(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o ***)(v35 + 184);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_46931876(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        int32_t buffGroup,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2F41B & 1) == 0 )
  {
    sub_1C94098(&BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_TypeInfo);
    byte_4D2F41B = 1;
  }
  v7 = sub_1C942E4(BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = -2;
  *(_DWORD *)(v7 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 56) = svtData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 56), (int32_t)svtData, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v7 + 68) = buffGroup;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v7;
}


System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *BattleFieldEnvironmentData__GetBaseBgmList(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v3; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  System_Func_object__bool__o *_9__77_0; // x20
  Il2CppObject *v6; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2F3FE & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1C94098(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__77_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3FE = 1;
  }
  v3 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v3 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__77_0 = (System_Func_object__bool__o *)v3->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__77_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__77_0, v6, Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__77_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__77_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__77_0, (int32_t)_9__77_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
          (System_Func_TSource__bool__o *)_9__77_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  return (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)System_Linq_Enumerable__ToList_object_(
                                                                                    v14,
                                                                                    (const MethodInfo_31E1548 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
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
    sub_1C942F0(this, 0);
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
  unsigned int v9; // w21
  __int64 v10; // x23

  if ( (byte_4D2F3F9 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2F3F9 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
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
        sub_1C942F8(BuffData);
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
          (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      resumptionHpFromLossMaxHp = v8->fields.resumptionHpFromLossMaxHp;
      if ( (int)++v9 >= resumptionHpFromLossMaxHp )
        goto LABEL_13;
    }
LABEL_15:
    sub_1C942F0(BuffData, v6);
  }
LABEL_13:
  if ( !v3 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4D2F414 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2F414 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)individuality, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v11);
    if ( !v9 )
LABEL_13:
      sub_1C942F0(IsNullOrEmpty, v11);
  }
  else
  {
    if ( !v9 )
      goto LABEL_13;
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v12);
  }
  System_Collections_Generic_List_int___AddRange(
    v9,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0) )
    System_Collections_Generic_List_int___AddRange(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( exceptDelTarget )
    return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v9, v13);
  else
    return System_Collections_Generic_List_int___ToArray(
             v9,
             (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
    sub_1C942F0(0, v8);
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
  BattleFieldEnvironmentData___c_c *v8; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x23
  System_Func_object__bool__o *_9__69_0; // x24
  Il2CppObject *v11; // x25
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_IEnumerable_T__o *baseBackground; // x0
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  const MethodInfo *v21; // x1
  System_Collections_ICollection_o *QuestCommonIndividuality; // x0
  const MethodInfo *v23; // x1
  System_Int32_array *v24; // x0
  const MethodInfo *v25; // x4

  if ( (byte_4D2F3F6 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____79087944);
    sub_1C94098(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__69_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3F6 = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
  v8 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = this->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v8 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__69_0 = (System_Func_object__bool__o *)v8->static_fields->__9__69_0;
  if ( !_9__69_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__69_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__69_0,
      v11,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__69_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__69_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__69_0,
      (int32_t)_9__69_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  baseBackground = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__FirstOrDefault_object__52191056(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                                                                    (System_Func_TSource__bool__o *)_9__69_0,
                                                                    (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____79087944);
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
    sub_1C942F0(baseBackground, monitor);
  }
  if ( !v7 )
    goto LABEL_19;
  System_Collections_Generic_List_int___AddRange(
    v7,
    monitor,
    (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  QuestCommonIndividuality = (System_Collections_ICollection_o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                   this,
                                                                   v21);
  if ( !BasicHelper__IsNullOrEmpty(QuestCommonIndividuality, 0) )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                      this,
                                                                      v23);
LABEL_17:
    System_Collections_Generic_List_int___AddRange(
      v7,
      baseBackground,
      (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v24 = System_Collections_Generic_List_int___ToArray(
          v7,
          (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, v24, addIndiv, exceptDelTarget, v25);
}


System_Int32_array *BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
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
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_int__o **v15; // x22
  System_Collections_Generic_List_int__o *v16; // x20
  System_Predicate_int__o *v17; // x20

  if ( (byte_4D2F40C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&System_Predicate_int__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass102_0__GetIndividualityExceptDelTarget_b__0__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass102_0_TypeInfo);
    byte_4D2F40C = 1;
  }
  v5 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v6);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0, 0, 0, 1, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = BuffData;
  v15 = (System_Collections_Generic_List_int__o **)(v5 + 16);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)BuffData, v9, v10, v11, v12, v13, v14);
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
    (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v15 )
    goto LABEL_13;
  if ( (*v15)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_1C942F0(BuffData, v8);
  }
  v17 = (System_Predicate_int__o *)sub_1C942E4(System_Predicate_int__TypeInfo);
  System_Predicate_int____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass102_0__GetIndividualityExceptDelTarget_b__0__,
    0);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v17,
    (const MethodInfo_384F438 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *BattleFieldEnvironmentData__GetLinkBuffData(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  __int64 v5; // x19
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x8
  BattleServantData_o *ServantData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x20
  System_Func_object__bool__o *v18; // x21

  if ( (byte_4D2F3FA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____79087912);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass73_0__GetLinkBuffData_b__0__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass73_0_TypeInfo);
    byte_4D2F3FA = 1;
  }
  v5 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass73_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = uniqueVal;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)uniqueVal, v8, v9, v10, v11, v12, v13);
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
    sub_1C942F0(Data_k__BackingField, v7);
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v7);
  if ( BuffData )
  {
LABEL_9:
    v17 = BattleBuffData__AllBuffEnumerable(BuffData, 0);
    v18 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_BattleFieldEnvironmentData___c__DisplayClass73_0__GetLinkBuffData_b__0__,
      0);
    return (BattleBuffData_BuffData_o *)System_Linq_Enumerable__FirstOrDefault_object__52191056(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                          (System_Func_TSource__bool__o *)v18,
                                          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____79087912);
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

  if ( (byte_4D2F3FB & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    byte_4D2F3FB = 1;
  }
  LinkBuffData = BattleFieldEnvironmentData__GetLinkBuffData(this, uniqueVal, method);
  if ( !LinkBuffData || (result = BattleBuffData_BuffData__GetIndividualty(LinkBuffData, 0, 0, 0, 0)) == 0 )
  {
    v8 = Method_System_Array_Empty_int___;
    v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v9 )
    {
      sub_1C6A188(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C6A12C(inited);
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
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Func_int__bool__o *v21; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0

  if ( (byte_4D2F3F8 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C94098(&System_Func_int__bool__TypeInfo);
    sub_1C94098(&Method_JsonManager_DeserializeArray_RangeValue___);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass71_0__GetQuestCommonIndividuality_b__0__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo);
    sub_1C94098(&StringLiteral_2928/*"BG_INDIVIDUALITY_VALUE_RANGE"*/);
    byte_4D2F3F8 = 1;
  }
  v3 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo);
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
      sub_1C6A188(Method_System_Array_Empty_int___);
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v10 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C6A12C(inited);
    return **(System_Int32_array ***)(v11 + 184);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v13 = JsonManager__DeserializeArray_object_(
            Value,
            (const MethodInfo_320C67C *)Method_JsonManager_DeserializeArray_RangeValue___);
    if ( !v3 )
      sub_1C942F0(v13, v14);
    *(_QWORD *)(v3 + 16) = v13;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v13, v15, v16, v17, v18, v19, v20);
    v21 = (System_Func_int__bool__o *)sub_1C942E4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v21,
      (Il2CppObject *)v3,
      Method_BattleFieldEnvironmentData___c__DisplayClass71_0__GetQuestCommonIndividuality_b__0__,
      0);
    v22 = System_Linq_Enumerable__Where_int_(
            QuestPhaseIndividuality,
            (System_Func_TSource__bool__o *)v21,
            (const MethodInfo_31E3420 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v22,
             (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  long double inited; // q0
  _QWORD *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x0
  __int64 v17; // x0

  if ( (byte_4D2F3F7 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    byte_4D2F3F7 = 1;
  }
  p_questPhaseIndividuality = &this->fields.questPhaseIndividuality;
  result = this->fields.questPhaseIndividuality;
  if ( !result )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1C942F0(0, method);
    PrioredIndividuality = BattleData__GetPrioredIndividuality(Data_k__BackingField, 0);
    *p_questPhaseIndividuality = PrioredIndividuality;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.questPhaseIndividuality,
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
      v14 = Method_System_Array_Empty_int___;
      v15 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v15 )
      {
        sub_1C6A188(Method_System_Array_Empty_int___);
        v15 = v14[7];
      }
      v16 = *(_QWORD *)(v15 + 16);
      if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
        v16 = sub_1C6A12C(inited);
      if ( !*(_DWORD *)(v16 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v16);
      v17 = *(_QWORD *)(v14[7] + 16LL);
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1C6A12C(inited);
      return **(System_Int32_array ***)(v17 + 184);
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

  if ( (byte_4D2F40B & 1) == 0 )
  {
    sub_1C94098(&ChangeBgmBuffDeleteProcess_TypeInfo);
    sub_1C94098(&FieldChangeBuffDeleteProcess_TypeInfo);
    byte_4D2F40B = 1;
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
  v5 = (Il2CppObject *)sub_1C942E4(*v4);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Object_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  const MethodInfo *v28; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_4D2F3E9 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__);
    sub_1C94098(&BattleFieldEnvironmentData_SaveData_TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3E9 = 1;
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
    v5 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Action_object____ctor(v5, v6, Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)v5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
  if ( !bgmList )
    goto LABEL_15;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v5,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v14 = sub_1C942E4(BattleFieldEnvironmentData_SaveData_TypeInfo);
  System_Object___ctor((Il2CppObject *)v14, 0);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_15;
  backgroundList = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)backgroundList,
                     (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v14
    || (*(_QWORD *)(v14 + 16) = backgroundList,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v14 + 16), (int32_t)backgroundList, v15, v16, v17, v18, v19, v20),
        (backgroundList = this->fields.bgmList) == 0)
    || (v21 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)backgroundList,
                (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v14 + 24) = v21,
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v14 + 24), (int32_t)v21, v22, v23, v24, v25, v26, v27),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v28)) == 0) )
  {
LABEL_15:
    sub_1C942F0(backgroundList, method);
  }
  SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0);
  *(_QWORD *)(v14 + 32) = SaveData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v14 + 32), (int32_t)SaveData, v30, v31, v32, v33, v34, v35);
  result = (BattleFieldEnvironmentData_SaveData_o *)v14;
  *(_DWORD *)(v14 + 40) = this->fields.addOrder;
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
  StageEntity_o *v6; // x20
  Generator_BGFromStage_o *v7; // x21
  BattleData_o *v8; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  Generator_BGM_o *v11; // x23
  BattleFieldEnvironmentData___c_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *backgroundList; // x20
  System_Func_object__bool__o *_9__60_0; // x21
  Il2CppObject *v15; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  BattleFieldEnvironmentData___c_c *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  System_Func_object__bool__o *_9__60_1; // x21
  Il2CppObject *v33; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  Il2CppObject *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7

  v2 = this;
  if ( (byte_4D2F3EE & 1) == 0 )
  {
    sub_1C94098(&Generator_BGFromQuestPhase_TypeInfo);
    sub_1C94098(&Generator_BGFromStage_TypeInfo);
    sub_1C94098(&Generator_BGM_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____79087936);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____79087944);
    sub_1C94098(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    sub_1C94098(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__InitStageField_b__60_0__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__InitStageField_b__60_1__);
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3EE = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v2->fields._Data_k__BackingField, 0),
        v5 = (Generator_BGFromQuestPhase_o *)sub_1C942E4(Generator_BGFromQuestPhase_TypeInfo),
        Generator_BGFromQuestPhase___ctor(v5, Data_k__BackingField, StageEntity, 0),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, const MethodInfo *))v2->klass->vtable._5_AddBackground.methodPtr)(
          v2,
          v5,
          1,
          v2->klass->vtable._5_AddBackground.method),
        (this = (BattleFieldEnvironmentData_o *)v2->fields._Data_k__BackingField) == 0)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0)) == 0 )
  {
    sub_1C942F0(this, method);
  }
  v6 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0) >= 1 )
  {
    v7 = (Generator_BGFromStage_o *)sub_1C942E4(Generator_BGFromStage_TypeInfo);
    Generator_BGFromStage___ctor(v7, v6, 0);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, const MethodInfo *))v2->klass->vtable._5_AddBackground.methodPtr)(
      v2,
      v7,
      1,
      v2->klass->vtable._5_AddBackground.method);
  }
  v8 = v2->fields._Data_k__BackingField;
  bgmId = v6->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v6, 0, 0);
  v11 = (Generator_BGM_o *)sub_1C942E4(Generator_BGM_TypeInfo);
  Generator_BGM___ctor(v11, v8, bgmId, 0, PriorityBgm, 0, 0);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))v2->klass->vtable._6_AddBGM.methodPtr)(
    v2,
    v11,
    1,
    0,
    v2->klass->vtable._6_AddBGM.method);
  v12 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v12 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__60_0 = (System_Func_object__bool__o *)v12->static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__60_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__60_0, v15, Method_BattleFieldEnvironmentData___c__InitStageField_b__60_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__60_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__60_0,
      (int32_t)_9__60_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
          backgroundList,
          (System_Func_TSource__bool__o *)_9__60_0,
          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____79087944);
  v2->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v23;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.baseBackground, (int32_t)v23, v24, v25, v26, v27, v28, v29);
  v30 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v30 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__60_1 = (System_Func_object__bool__o *)v30->static_fields->__9__60_1;
  if ( !_9__60_1 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__60_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__60_1, v33, Method_BattleFieldEnvironmentData___c__InitStageField_b__60_1__, 0);
    v34 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v34->__9__60_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__60_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v34->__9__60_1, (int32_t)_9__60_1, v35, v36, v37, v38, v39, v40);
  }
  v41 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
          bgmList,
          (System_Func_TSource__bool__o *)_9__60_1,
          (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____79087936);
  v2->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v41;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v2->fields.baseBgm, (int32_t)v41, v42, v43, v44, v45, v46, v47);
}


bool BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1C942F0(this, method);
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
    sub_1C942F0(0, v4);
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

  if ( (byte_4D2F406 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2F406 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_1C942F0(Instance, v4);
    BgmName = BgmManager__get_BgmName((BgmManager_o *)Instance, 0);
    if ( BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0) )
      return 0;
  }
  return 1;
}


void BattleFieldEnvironmentData__ReflectChangedBuffStateApplyOther(
        BattleFieldEnvironmentData_o *this,
        System_Action_o *changeBuffStateAction,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *ActUniqueIds_116_1; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  BattleFieldEnvironmentData___c_c *v10; // x8
  System_Action_object__o *_9__116_0; // x20
  Il2CppObject *v12; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2F413 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Linq_Enumerable_SequenceEqual_int___);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__ReflectChangedBuffStateApplyOther_b__116_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F413 = 1;
  }
  ActUniqueIds_116_1 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData___ReflectChangedBuffStateApplyOther_g__MakeActUniqueIds_116_1(
                                                                              this,
                                                                              (const MethodInfo *)changeBuffStateAction);
  ActionExtensions__Call(changeBuffStateAction, 0);
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData___ReflectChangedBuffStateApplyOther_g__MakeActUniqueIds_116_1(
                                                              this,
                                                              v6);
  if ( !System_Linq_Enumerable__SequenceEqual_int_(
          ActUniqueIds_116_1,
          v7,
          (const MethodInfo_31D66A0 *)Method_System_Linq_Enumerable_SequenceEqual_int___) )
  {
    this->fields._IsUpdateBuffWaiting_k__BackingField = 1;
    v9 = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(
                                                          this,
                                                          v8);
    v10 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
      v10 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__116_0 = (System_Action_object__o *)v10->static_fields->__9__116_0;
    if ( !_9__116_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__116_0 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__116_0,
        v12,
        Method_BattleFieldEnvironmentData___c__ReflectChangedBuffStateApplyOther_b__116_0__,
        0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__116_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__116_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__116_0,
        (int32_t)_9__116_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    BasicHelper__ForEach_object_(
      v9,
      (System_Action_T__o *)_9__116_0,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleFieldEnvironmentData___c_c *v14; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v15; // x20
  System_Func_object__bool__o *_9__78_1; // x21
  Il2CppObject *v17; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8

  if ( (byte_4D2F3FF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___);
    sub_1C94098(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C94098(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__78_0__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__78_1__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3FF = 1;
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
    v5 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(v5, v6, Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__78_0__, 0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__78_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)v5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__78_0, (int32_t)v5, v8, v9, v10, v11, v12, v13);
  }
  if ( !bgmList )
    goto LABEL_23;
  System_Collections_Generic_List_object___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)v5,
    (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v14 = BattleFieldEnvironmentData___c_TypeInfo;
  v15 = this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v14 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__78_1 = (System_Func_object__bool__o *)v14->static_fields->__9__78_1;
  if ( !_9__78_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__78_1 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__78_1,
      v17,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__78_1__,
      0);
    v18 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v18->__9__78_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__78_1;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v18->__9__78_1, (int32_t)_9__78_1, v19, v20, v21, v22, v23, v24);
  }
  if ( System_Linq_Enumerable__Count_object__52158724(
         (System_Collections_Generic_IEnumerable_TSource__o *)v15,
         (System_Func_TSource__bool__o *)_9__78_1,
         (const MethodInfo_31BE104 *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v3 = (int *)this->fields.bgmList;
    if ( v3 )
    {
      method = (const MethodInfo *)this->fields.baseBgm;
      v31 = *((_QWORD *)v3 + 2);
      v32 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
      ++v3[7];
      if ( v31 )
      {
        v33 = v3[6];
        if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v3,
            (Il2CppObject *)method,
            *(const MethodInfo_386AE34 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = v31 + 8 * v33;
          v3[6] = v33 + 1;
          *(_QWORD *)(v34 + 32) = method;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v34 + 32), (int32_t)method, v25, v26, v27, v28, v29, v30);
        }
        goto LABEL_22;
      }
    }
LABEL_23:
    sub_1C942F0(v3, method);
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

  if ( (byte_4D2F402 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__84_0__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C94098(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    byte_4D2F402 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v4 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Predicate_object____ctor(
    v4,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__84_0__,
    0);
  if ( !bgmList )
    sub_1C942F0(v5, v6);
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v4,
         (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) >= 1 )
    BattleFieldEnvironmentData__SortBGM(this, v7);
  return BattleFieldEnvironmentData__get_IsChangeBgm(this, v7);
}


void BattleFieldEnvironmentData__RemoveBgmRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData___c_c *v4; // x0
  System_Func_object__bool__o *_9__80_0; // x21
  Il2CppObject *v6; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__object__o *v15; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v19; // x20
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  int i; // w24
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_List_object__o *bgmList; // x22
  System_Predicate_T__o *v43; // x23
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  const MethodInfo *v50; // x1

  if ( (byte_4D2F401 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C94098(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__80_0__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass80_0__RemoveBgmRelateBuff_b__1__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass80_0_TypeInfo);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F401 = 1;
  }
  v4 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v4 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__80_0 = (System_Func_object__bool__o *)v4->static_fields->__9__80_0;
  if ( !_9__80_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__80_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__80_0,
      v6,
      Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__80_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__80_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__80_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__80_0, (int32_t)_9__80_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__80_0,
          (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v15 = (System_Func_object__object__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo);
  System_Func_object__object____ctor(
    v15,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__,
    0);
  v16 = System_Linq_Enumerable__Select_object__object_(
          v14,
          (System_Func_TSource__TResult__o *)v15,
          (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
  if ( !v16 )
    sub_1C942F0(0, v17);
  klass = v16->klass;
  v19 = v16;
  v20 = *(unsigned __int16 *)&v16->klass->_2.rank;
  if ( *(_WORD *)&v16->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffUniqueValue__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v22 = sub_1C6A420(v16, System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))v22)(
          v19,
          *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1C942F0(0, v23);
  for ( i = 0;
        ;
        i += System_Collections_Generic_List_object___RemoveAll(
               bgmList,
               v43,
               (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) )
  {
    v26 = *(_QWORD *)v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_22;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_22:
      v29 = sub_1C6A420(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v24, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass80_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v30, 0);
    v31 = *(_QWORD *)v24;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffUniqueValue__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_29;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_29:
      v34 = sub_1C6A420(v24, System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, 0);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v24, *(_QWORD *)(v34 + 8));
    if ( !v30 )
      sub_1C942F0(v35, v35);
    *(_QWORD *)(v30 + 16) = v35;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v30 + 16), v35, v36, v37, v38, v39, v40, v41);
    bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
    v43 = (System_Predicate_T__o *)sub_1C942E4(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v43,
      (Il2CppObject *)v30,
      Method_BattleFieldEnvironmentData___c__DisplayClass80_0__RemoveBgmRelateBuff_b__1__,
      0);
    if ( !bgmList )
      sub_1C942F0(v44, v45);
  }
  v46 = *(_QWORD *)v24;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_38;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_38:
    v49 = sub_1C6A420(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v24, *(_QWORD *)(v49 + 8));
  if ( i > 0 )
    BattleFieldEnvironmentData__SortBGM(this, v50);
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
    if ( !Logic_k__BackingField )
      sub_1C942F0(0, v3);
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
    sub_1C942F0(this, deadSvtData);
  }
  AllBGMChangeBuffArray = BattleBuffData__GetAllBGMChangeBuffArray((BattleBuffData_o *)this, 0);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_46924748(v3, AllBGMChangeBuffArray, 1, v5);
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *backgroundList; // x21
  System_Predicate_object__o *v17; // x22
  int32_t v18; // w0
  System_Collections_Generic_List_object__o *bgmList; // x22
  int32_t v20; // w21
  System_Predicate_object__o *v21; // x23
  const MethodInfo *v22; // x2

  if ( (byte_4D2F400 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
    sub_1C94098(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1C94098(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass79_0__RemoveRelateBuff_b__0__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass79_0__RemoveRelateBuff_b__1__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass79_0_TypeInfo);
    byte_4D2F400 = 1;
  }
  v5 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass79_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v8 = BattleFieldEnvironmentData__GetChangeBuffUniqueVal(v6, buff, v7);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = v8;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v8, v10, v11, v12, v13, v14, v15);
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v17 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass79_0__RemoveRelateBuff_b__0__,
    0);
  if ( !backgroundList
    || (v18 = System_Collections_Generic_List_object___RemoveAll(
                backgroundList,
                (System_Predicate_T__o *)v17,
                (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList,
        v20 = v18,
        v21 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo),
        System_Predicate_object____ctor(
          v21,
          (Il2CppObject *)v5,
          Method_BattleFieldEnvironmentData___c__DisplayClass79_0__RemoveRelateBuff_b__1__,
          0),
        !bgmList) )
  {
LABEL_9:
    sub_1C942F0(v8, v9);
  }
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v21,
         (const MethodInfo_386C490 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
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
  if ( (byte_4D2F3EF & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__);
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__);
    byte_4D2F3EF = 1;
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
    sub_1C942F0(this, method);
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
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  int32_t v21; // w20
  int32_t v22; // w21
  bool ExistOverwriteBgIndividuality; // w22
  Generator_Background_o *v24; // x23
  struct BattleData_o *Data_k__BackingField; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v30; // w23
  Generator_BGM_o *v31; // x24

  if ( (byte_4D2F3EA & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Generator_BGM_TypeInfo);
    sub_1C94098(&Generator_Background_TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3EA = 1;
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
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0) )
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
        _9__8_0 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
        System_Action_object____ctor(_9__8_0, v11, Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, 0);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
          (int32_t)_9__8_0,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
      }
      BasicHelper__ForEach_object_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_386B040 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_object__o *)BattleFieldEnvironmentData__get_BuffData(this, v7);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0);
      BattleFieldEnvironmentData__ClearCachedApplyOtherBuff(this, v19);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v20);
      return;
    }
LABEL_27:
    sub_1C942F0(backgroundList, v5);
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
    v21 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_CurrentGroundType(
                                                                    this->fields._Perf_k__BackingField,
                                                                    0);
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_27;
    v22 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(this->fields._Data_k__BackingField, 0);
    v24 = (Generator_Background_o *)sub_1C942E4(Generator_Background_TypeInfo);
    Generator_Background___ctor(v24, v21, v22, 0, ExistOverwriteBgIndividuality, 0);
    backgroundList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
                                                                    this,
                                                                    v24,
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
    v30 = allowSubBgmPlaying;
    v31 = (Generator_BGM_o *)sub_1C942E4(Generator_BGM_TypeInfo);
    Generator_BGM___ctor(v31, Data_k__BackingField, BgmId_k__BackingField, v30, 0, BgmName_k__BackingField, 0);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
      this,
      v31,
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_4D2F404 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1C94098(&Method_BattleFieldEnvironmentData__SortBGM_b__87_0__);
    sub_1C94098(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_4D2F404 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v4 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_object____ctor(v4, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__87_0__, 0);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v4,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v7 = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v8 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v8, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !v7 )
    goto LABEL_9;
  System_Collections_Generic_List_object___Sort_59164920(
    v7,
    v8,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_31C4BAC *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)p_CurBGM_k__BackingField, (int32_t)baseBgm, v10, v11, v12, v13, v14, v15);
  v5 = (BattleData_o *)*(p_CurBGM_k__BackingField - 6);
  if ( !v5 )
LABEL_9:
    sub_1C942F0(v5, v6);
  BattleData__SetOverrideBgmData(v5, *p_CurBGM_k__BackingField, 0);
}


void BattleFieldEnvironmentData__SortBGM_46908496(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *targetBgmList,
        const MethodInfo *method)
{
  System_Action_object__o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Comparison_T__o *v8; // x21

  if ( (byte_4D2F405 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1C94098(&Method_BattleFieldEnvironmentData__SortBGM_b__88_0__);
    sub_1C94098(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
    byte_4D2F405 = 1;
  }
  v5 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Action_object____ctor(v5, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__88_0__, 0);
  if ( !targetBgmList )
    sub_1C942F0(v6, v7);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    (System_Action_T__o *)v5,
    (const MethodInfo_386B874 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v8 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo);
  System_Comparison_object____ctor(v8, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  System_Collections_Generic_List_object___Sort_59164920(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    v8,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
}


void BattleFieldEnvironmentData__SortBackGround(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *backgroundList; // x20
  System_Comparison_T__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2F403 & 1) == 0 )
  {
    sub_1C94098(&Method_BattleFieldEnvironmentData_CompareData__);
    sub_1C94098(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
    byte_4D2F403 = 1;
  }
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v4 = (System_Comparison_T__o *)sub_1C942E4(System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo);
  System_Comparison_object____ctor(v4, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0);
  if ( !backgroundList )
    sub_1C942F0(v5, v6);
  System_Collections_Generic_List_object___Sort_59164920(
    backgroundList,
    v4,
    (const MethodInfo_386C8F8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_31C4BAC *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurBackGround_k__BackingField,
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


RemovedBuffInfo_o *BattleFieldEnvironmentData__SubBuffFromIndividuality(
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
        Value = DataVals__GetValue(baseVals, 0),
        Value2 = DataVals__GetValue2(baseVals, 0),
        BuffData = (BattleBuffData_o *)DataVals__isParam(baseVals, 90, 0),
        !v9) )
  {
    sub_1C942F0(BuffData, v8);
  }
  v12 = BattleBuffData__subBuffFromIndividualites(v9, individuality, Value, Value2, 1, (unsigned __int8)BuffData & 1, 0);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v12, 1, v13);
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
    sub_1C942F0(0, v6);
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
  RemovedBuffInfo_o *v9; // x0
  const MethodInfo *v10; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, *(const MethodInfo **)&buffId);
  if ( !BuffData )
    sub_1C942F0(0, v8);
  v9 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v9, isAddAfterTask, v10);
}


void BattleFieldEnvironmentData__TakeOverChangeField(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  BattleBuffData_FieldChangeData_array *v5; // x0
  BattleFieldEnvironmentData___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__bool__o *_9__63_0; // x21
  Il2CppObject *v9; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v18; // x19
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x19
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  BattleBuffData_FieldChangeData_o *v34; // x21
  Generator_BGFromFieldChangeBGBuff_o *v35; // x22
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v37; // x22
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_4D2F3F0 & 1) == 0 )
  {
    sub_1C94098(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    sub_1C94098(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
    sub_1C94098(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__63_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3F0 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_45;
  v5 = BattleBuffData__GetFieldChangeArray(BuffData, 0);
  v6 = BattleFieldEnvironmentData___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__63_0 = (System_Func_object__bool__o *)v6->static_fields->__9__63_0;
  if ( !_9__63_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__63_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__63_0,
      v9,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__63_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__63_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__63_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__63_0,
      (int32_t)_9__63_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_object_(
                                   v7,
                                   (System_Func_TSource__bool__o *)_9__63_0,
                                   (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_45:
    sub_1C942F0(BuffData, v4);
  klass = BuffData->klass;
  v18 = BuffData;
  v19 = *(unsigned __int16 *)&BuffData->klass->_2.rank;
  if ( *(_WORD *)&BuffData->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_15;
    }
    v21 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_15:
    v21 = sub_1C6A420(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v21)(v18, *(_QWORD *)(v21 + 8));
  if ( !v23 )
    sub_1C942F0(0, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_22;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_22:
      v27 = sub_1C6A420(v23, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_29;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_29:
      v31 = sub_1C6A420(v23, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v34 = (BattleBuffData_FieldChangeData_o *)v32;
    if ( !v32 )
      sub_1C942F0(0, v33);
    if ( *(int *)(v32 + 24) >= 1 )
    {
      v35 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1C942E4(Generator_BGFromFieldChangeBGBuff_TypeInfo);
      Generator_BGFromFieldChangeBGBuff___ctor(v35, v34, 0);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, const MethodInfo *))this->klass->vtable._5_AddBackground.methodPtr)(
        this,
        v35,
        2,
        this->klass->vtable._5_AddBackground.method);
    }
    if ( v34->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v34->fields.bgmName, 0) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v37 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1C942E4(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
      Generator_BGMFromFieldChangeBGBuff___ctor(v37, Data_k__BackingField, v34, 0);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, _QWORD, const MethodInfo *))this->klass->vtable._6_AddBGM.methodPtr)(
        this,
        v37,
        2,
        0,
        this->klass->vtable._6_AddBGM.method);
    }
  }
  v38 = *(_QWORD *)v23;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_41;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_41:
    v41 = sub_1C6A420(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v41)(v23, *(_QWORD *)(v41 + 8));
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
  System_Func_object__bool__o *_9__64_0; // x21
  Il2CppObject *v10; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_IEnumerable_BattleServantData__o *v18; // x0
  const MethodInfo *v19; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v20; // x0
  System_Object_array *v21; // x1
  const MethodInfo *v22; // x2

  v2 = this;
  if ( (byte_4D2F3F1 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_BattleServantData___);
    sub_1C94098(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__64_0__);
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3F1 = 1;
  }
  Data_k__BackingField = v2->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (this = (BattleFieldEnvironmentData_o *)Data_k__BackingField->fields.player_datalist) == 0
    || (v4 = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___ToArray(
                                               (System_Collections_Generic_List_object__o *)this,
                                               (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__),
        BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(v4, (BattleServantData_array *)v4, v5),
        (v6 = v2->fields._Data_k__BackingField) == 0) )
  {
    sub_1C942F0(this, method);
  }
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v6->fields.player_datalist;
  v8 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v8 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__64_0 = (System_Func_object__bool__o *)v8->static_fields->__9__64_0;
  if ( !_9__64_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__64_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__64_0,
      v10,
      Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__64_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__64_0 = (struct System_Func_BattleServantData__bool__o *)_9__64_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__64_0,
      (int32_t)_9__64_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  v18 = (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                         player_datalist,
                                                                         (System_Func_TSource__bool__o *)_9__64_0,
                                                                         (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v20 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(v18, v19);
  v21 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v2, (BattleBuffData_BuffData_array *)v21, v22);
}


void BattleFieldEnvironmentData__TurnBuffProgressingIncrease(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v6; // x0
  BattleFieldEnvironmentData___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_object__o *_9__107_0; // x20
  Il2CppObject *v10; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2F40D & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__TurnBuffProgressingIncrease_b__107_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F40D = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_1C942F0(0, v4);
  BattleBuffData__turnProgressingIncrease(BuffData, 0);
  v6 = BattleFieldEnvironmentData__AllApplyOtherBuffEnumerable(this, v5);
  v7 = BattleFieldEnvironmentData___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)v6;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v7 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__107_0 = (System_Action_object__o *)v7->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__107_0 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      _9__107_0,
      v10,
      Method_BattleFieldEnvironmentData___c__TurnBuffProgressingIncrease_b__107_0__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__107_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__107_0,
      (int32_t)_9__107_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)_9__107_0,
    (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void BattleFieldEnvironmentData__TurnProgressing(
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
    sub_1C942F0(0, v8);
  v9 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0, 0);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_46924748(this, v9, 1, v10);
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
    sub_1C942F0(Perf_k__BackingField, method);
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
  System_Action_object__o *_9__65_0; // x20
  Il2CppObject *v8; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2F3F2 & 1) == 0 )
  {
    sub_1C94098(&System_Action_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__65_0__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F3F2 = 1;
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
    _9__65_0 = (System_Action_object__o *)v6->static_fields->__9__65_0;
    if ( !_9__65_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__65_0 = (System_Action_object__o *)sub_1C942E4(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__65_0,
        v8,
        Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__65_0__,
        0);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__65_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__65_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__65_0,
        (int32_t)_9__65_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    BasicHelper__ForEach_object_(
      v5,
      (System_Action_T__o *)_9__65_0,
      (const MethodInfo_3188088 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
}


void BattleFieldEnvironmentData__UpdateBuffIfChanged(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *FieldParamComp_k__BackingField; // x20
  const MethodInfo *v4; // x1
  BattleFieldParamComponent_o *v5; // x20
  BattleBuffData_o *BuffData; // x0
  __int64 v7; // x1

  if ( (byte_4D2F411 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F411 = 1;
  }
  FieldParamComp_k__BackingField = (UnityEngine_Object_o *)this->fields._FieldParamComp_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(FieldParamComp_k__BackingField, 0, 0)
    && this->fields._IsUpdateBuffWaiting_k__BackingField )
  {
    v5 = this->fields._FieldParamComp_k__BackingField;
    BuffData = BattleFieldEnvironmentData__get_BuffData(this, v4);
    if ( !v5 )
      sub_1C942F0(BuffData, v7);
    BattleFieldParamComponent__updateBuffIcon(v5, BuffData, 0);
    this->fields._IsUpdateBuffWaiting_k__BackingField = 0;
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  RemovedBuffInfo_o *v18; // x20
  const MethodInfo *v19; // x3
  __int64 v20; // x0

  if ( (byte_4D2F416 & 1) == 0 )
  {
    sub_1C94098(&BattleBuffData_BuffData___TypeInfo);
    byte_4D2F416 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, (const MethodInfo *)applySourceBuff);
  if ( !applySourceBuff )
    goto LABEL_10;
  BattleBuffData_BuffData__ForceUsed(applySourceBuff, BuffData, 0, 0);
  IsUpdateBuffWaiting_k__BackingField = this->fields._IsUpdateBuffWaiting_k__BackingField;
  v9 = BattleFieldEnvironmentData__get_BuffData(this, v8);
  BuffData = (BattleBuffData_o *)sub_1C94140(BattleBuffData_BuffData___TypeInfo, 1);
  if ( !BuffData )
    goto LABEL_10;
  v10 = BuffData;
  v11 = sub_1C941D4(applySourceBuff, BuffData->klass->_1.element_class);
  if ( !v11 )
  {
    v20 = sub_1C94314(0);
    sub_1C941C0(v20, 0);
  }
  if ( !v10->fields.resumptionHpFromLossMaxHp )
    sub_1C942F8(v11);
  v10->fields.passiveList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)applySourceBuff;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v10->fields.passiveList,
    (int32_t)applySourceBuff,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !v9
    || (v18 = BattleBuffData__UsedProgressing(v9, (BattleBuffData_BuffData_array *)v10, 0),
        BuffData = (BattleBuffData_o *)BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v18, 1, v19),
        !v18) )
  {
LABEL_10:
    sub_1C942F0(BuffData, v6);
  }
  this->fields._IsUpdateBuffWaiting_k__BackingField = IsUpdateBuffWaiting_k__BackingField
                                                    | RemovedBuffInfo__get_ExistRemoveBuff(v18, 0);
}


void BattleFieldEnvironmentData___AddServantChangeBgm_b__110_0(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v3; // x19
  Generator_BGM_o *v4; // x1

  if ( !buff || (v3 = this, (this = (BattleFieldEnvironmentData_o *)buff->fields.changeBgmData) == 0) )
    sub_1C942F0(this, buff);
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


System_Int32_array *BattleFieldEnvironmentData___ReflectChangedBuffStateApplyOther_g__MakeActUniqueIds_116_1(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v5; // x0
  BattleFieldEnvironmentData___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__116_2; // x20
  Il2CppObject *v9; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4D2F41C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__int__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__ReflectChangedBuffStateApplyOther_b__116_2__);
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F41C = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_1C942F0(0, v4);
  v5 = BattleBuffData__AllBuffValidEnumerablePriorActive(BuffData, 1, 0, 0);
  v6 = BattleFieldEnvironmentData___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo);
    v6 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__116_2 = (System_Func_object__int__o *)v6->static_fields->__9__116_2;
  if ( !_9__116_2 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__116_2 = (System_Func_object__int__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__116_2,
      v9,
      Method_BattleFieldEnvironmentData___c__ReflectChangedBuffStateApplyOther_b__116_2__,
      0);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__116_2 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__116_2;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__116_2,
      (int32_t)_9__116_2,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__116_2,
                                                               (const MethodInfo_31D2810 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__int___);
  return System_Linq_Enumerable__ToArray_int_(
           v17,
           (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
}


bool BattleFieldEnvironmentData___RemoveBgmNotExistsChangeBgmBuff_b__84_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BattleFieldEnvironmentData_BGMData__IsRemove(x, this->fields._Data_k__BackingField, method);
}


void BattleFieldEnvironmentData___SortBGM_b__87_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
  GrandQuestFolderBoardItem_o *p_fields; // x19
  BattleBuffData_o *v4; // x20
  struct BattleBuffData_o *buffData; // t1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2F3EB & 1) == 0 )
  {
    sub_1C94098(&BattleBuffData_TypeInfo);
    byte_4D2F3EB = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (GrandQuestFolderBoardItem_o *)&this->fields;
  v4 = buffData;
  if ( !buffData )
  {
    v4 = (BattleBuffData_o *)sub_1C942E4(BattleBuffData_TypeInfo);
    BattleBuffData___ctor(v4, 0);
    p_fields->klass = (GrandQuestFolderBoardItem_c *)v4;
    sub_1C9403C(p_fields, (int32_t)v4, v6, v7, v8, v9, v10, v11);
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
    sub_1C942F0(this, method);
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
  if ( (byte_4D2F3EC & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1C94098(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    byte_4D2F3EC = 1;
  }
  CurBGM_k__BackingField = v2->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    goto LABEL_8;
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
  {
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    this = (BattleFieldEnvironmentData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( this )
    {
      BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0);
      LOBYTE(BgmData_k__BackingField) = !BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0);
      return (unsigned __int8)BgmData_k__BackingField & 1;
    }
LABEL_8:
    sub_1C942F0(this, method);
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
    sub_1C942F0(CurBackGround_k__BackingField, method);
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  p_questCommonIndividualityCache = &this->fields.questCommonIndividualityCache;
  questCommonIndividualityCache = this->fields.questCommonIndividualityCache;
  if ( !questCommonIndividualityCache )
  {
    questCommonIndividualityCache = BattleFieldEnvironmentData__GetQuestCommonIndividuality(this, method);
    this->fields.questCommonIndividualityCache = questCommonIndividualityCache;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)p_questCommonIndividualityCache,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CurBGM_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurBGM_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._CurBackGround_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._CurBackGround_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Data_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Data_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Logic_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Logic_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Perf_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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


void BattleFieldEnvironmentData_BGMData___ctor_46932952(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._BgmData_k__BackingField = bgmData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BgmData_k__BackingField,
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
  GrandQuestFolderBoardItem_o *p_cachedBuffIndividuality; // x19
  System_Int32_array *cachedBuffIndividuality; // x21
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  const MethodInfo *v7; // x2
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  p_cachedBuffIndividuality = (GrandQuestFolderBoardItem_o *)&this->fields.cachedBuffIndividuality;
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
      sub_1C942F0(comData, fieldEnv);
    }
    cachedBuffIndividuality = BattleFieldEnvironmentData__GetLinkBuffIndividuality(
                                fieldEnv,
                                (BuffUniqueValue_o *)comData,
                                v7);
    p_cachedBuffIndividuality->klass = (GrandQuestFolderBoardItem_c *)cachedBuffIndividuality;
    sub_1C9403C(p_cachedBuffIndividuality, (int32_t)cachedBuffIndividuality, v8, v9, v10, v11, v12, v13);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x8
  BattleServantData_o *ServantData; // x0
  System_Object_array *AllBGMChangeBuffArray; // x20
  System_Func_object__bool__o *v17; // x21

  if ( (byte_4D2F41F & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_BattleBuffData_BuffData____79048064);
    sub_1C94098(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__);
    sub_1C94098(&BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo);
    byte_4D2F41F = 1;
  }
  v5 = sub_1C942E4(BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_14;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleFieldEnvironmentData_CommonData__get_UniqueVal(comData, v6);
  if ( !v5 )
    goto LABEL_14;
  *(_QWORD *)(v5 + 16) = comData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)comData, v8, v9, v10, v11, v12, v13);
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
    sub_1C942F0(comData, v6);
  AllBGMChangeBuffArray = (System_Object_array *)BattleBuffData__GetAllBGMChangeBuffArray(
                                                   (BattleBuffData_o *)comData,
                                                   0);
  v17 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__,
    0);
  return !BasicHelper__Any_object__51926292(
            AllBGMChangeBuffArray,
            (System_Func_T__bool__o *)v17,
            (const MethodInfo_3185514 *)Method_BasicHelper_Any_BattleBuffData_BuffData____79048064);
}


void BattleFieldEnvironmentData_BGMData__PreGetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  v3 = OverwriteBattleBgmData__ConvertToSaveData(this->fields._BgmData_k__BackingField, 0);
  this->fields.bgmSaveData = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgmSaveData, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void BattleFieldEnvironmentData_BGMData__PreSetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(this->fields.bgmSaveData, 0);
  this->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BgmData_k__BackingField,
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
    sub_1C942F0(this, fieldEnv);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._BgmData_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._BgmData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
    sub_1C942F0(this, x);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D2F41E & 1) == 0 )
  {
    sub_1C94098(&BgResourceData_TypeInfo);
    byte_4D2F41E = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    v4 = *((_DWORD *)&this->fields.isActive + 1);
    id = this->fields.id;
    cachedBgResource = (BgResourceData_o *)sub_1C942E4(BgResourceData_TypeInfo);
    BgResourceData___ctor(cachedBgResource, v4, id, 0);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.cachedBgResource,
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
    sub_1C942F0(this, method);
  return comData->fields.grantType;
}


bool BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_1C942F0(this, method);
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
    sub_1C942F0(0, v5);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4D2F41D & 1) == 0 )
  {
    sub_1C94098(&BuffUniqueValue_TypeInfo);
    byte_4D2F41D = 1;
  }
  cachedUniqueVal = this->fields.cachedUniqueVal;
  if ( !cachedUniqueVal )
  {
    linkBuffUid = this->fields.linkBuffUid;
    cachedUniqueVal = (BuffUniqueValue_o *)sub_1C942E4(BuffUniqueValue_TypeInfo);
    BuffUniqueValue___ctor_46732340(cachedUniqueVal, linkBuffUid, -1, 0);
    this->fields.cachedUniqueVal = cachedUniqueVal;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.cachedUniqueVal,
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


void BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126___ctor(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126__MoveNext(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *v3; // x20
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
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
  BattleBuffData_BuffData_o *v31; // x19
  int32_t buffGroup; // w20
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  bool IsMatchBuffGroup; // w8
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  bool result; // w0
  BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *v47; // [xsp+18h] [xbp-38h]

  v3 = this;
  v47 = this;
  if ( (byte_4D2F424 & 1) == 0 )
  {
    sub_1C94098(&BattleDataDefine_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo);
    this = (BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *)sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    byte_4D2F424 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C942F0(0, method);
    ApplyToSelfBuffEnumerable = BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable(
                                  _4__this,
                                  v3->fields.svtData,
                                  v2);
    v8 = ApplyToSelfBuffEnumerable;
    if ( !ApplyToSelfBuffEnumerable )
      sub_1C942F0(0, v7);
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
      v12 = sub_1C6A420(
              ApplyToSelfBuffEnumerable,
              System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo,
              0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))v12)(
            v8,
            *(_QWORD *)(v12 + 8));
    v47->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v13;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v47->fields.__7__wrap1, v13, v14, v15, v16, v17, v18, v19);
    v3 = v47;
  }
  _7__wrap1 = v3->fields.__7__wrap1;
  v3->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_33:
    sub_1C942F0(this, method);
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
      v24 = sub_1C6A420(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *, _QWORD))v24)(
            _7__wrap1,
            *(_QWORD *)(v24 + 8))
        & 1) == 0 )
    {
      BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126____m__Finally1(v47, v25);
      v47->fields.__7__wrap1 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v47->fields.__7__wrap1, 0, v40, v41, v42, v43, v44, v45);
      return 0;
    }
    v26 = v47->fields.__7__wrap1;
    if ( !v26 )
      sub_1C942F0(v47, v25);
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
      v30 = sub_1C6A420(
              v47->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo,
              0);
    }
    v31 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *, _QWORD))v30)(
                                         v26,
                                         *(_QWORD *)(v30 + 8));
    buffGroup = v47->fields.buffGroup;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    IsMatchBuffGroup = BattleDataDefine__IsMatchBuffGroup(buffGroup, v31, 0);
    this = v47;
    if ( IsMatchBuffGroup )
      break;
    _7__wrap1 = v47->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_33;
  }
  v47->fields.__2__current = v31;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v47->fields.__2__current, (int32_t)v31, v33, v34, v35, v36, v37, v38);
  result = 1;
  v47->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *v10; // x20
  struct BattleFieldEnvironmentData_o *_4__this; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct BattleServantData_o *_3__svtData; // x1
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_4D2F426 & 1) == 0 )
  {
    sub_1C94098(&BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_TypeInfo);
    byte_4D2F426 = 1;
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
    v10 = (BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *)sub_1C942E4(BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->fields.__4__this, (int32_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__svtData = this->fields.__3__svtData;
  v10->fields.svtData = _3__svtData;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->fields.svtData, (int32_t)_3__svtData, v4, v5, v6, v7, v8, v9);
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v10;
  v10->fields.buffGroup = this->fields.__3__buffGroup;
  return result;
}


BattleBuffData_BuffData_o *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126__System_Collections_IEnumerator_Reset(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126__System_Collections_IEnumerator_get_Current(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126__System_IDisposable_Dispose(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126____m__Finally1(this, method);
}


void BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126____m__Finally1(
        BattleFieldEnvironmentData__GetApplyToSelfBuffEnumerable_d__126_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2F425 & 1) == 0 )
  {
    sub_1C94098(&System_IDisposable_TypeInfo);
    byte_4D2F425 = 1;
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
      v7 = sub_1C6A420(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void BattleFieldEnvironmentData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F420 & 1) == 0 )
  {
    sub_1C94098(&BattleFieldEnvironmentData___c_TypeInfo);
    byte_4D2F420 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleFieldEnvironmentData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleFieldEnvironmentData___c_TypeInfo->static_fields->__9 = (struct BattleFieldEnvironmentData___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, buff);
  return changeBgmData->fields.addBgmOrder;
}


bool BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__67_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1C942F0(this, 0);
  return !BattleServantData__isAlive(svt, 0, 0);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__67_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_1C942F0(this, svt);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0);
}


bool BattleFieldEnvironmentData___c___AllApplyOtherBuffEnumerable_b__124_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BattleBuffData_BuffData__get_IsApplyOther(x, 0);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *BattleFieldEnvironmentData___c___EnumerateValidBgmChangeBuff_b__66_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0)) == 0 )
    sub_1C942F0(this, svt);
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
    sub_1C942F0(this, 0);
  return BattleBuffData_BuffData__get_ExistDelProc(x, 0);
}


bool BattleFieldEnvironmentData___c___ExecRemoveBuffAfterProc_b__96_2(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BattleBuffData_BuffData__get_IsApplyOther(x, 0);
}


bool BattleFieldEnvironmentData___c___GetApplyToSelfBuffEnumerable_b__125_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BattleBuffData_BuffData__IsApplySourceRemoved(x, 0);
}


bool BattleFieldEnvironmentData___c___GetBaseBgmList_b__77_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
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
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( !x )
    sub_1C942F0(this, 0);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0);
  x->fields.bgmSaveData = v4;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&x->fields.bgmSaveData, (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


bool BattleFieldEnvironmentData___c___InitStageField_b__60_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_1C942F0(this, x);
  return comData->fields.grantType == 1;
}


bool BattleFieldEnvironmentData___c___InitStageField_b__60_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_1C942F0(this, x);
  return comData->fields.grantType == 1;
}


void BattleFieldEnvironmentData___c___ReflectChangedBuffStateApplyOther_b__116_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_ApplyBuffManager_o *OriginalApplyManager_k__BackingField; // x0

  if ( !x )
    sub_1C942F0(this, 0);
  OriginalApplyManager_k__BackingField = x->fields._OriginalApplyManager_k__BackingField;
  if ( OriginalApplyManager_k__BackingField )
    BattleBuffData_BuffData_ApplyBuffManager__ReflectBuffStateToApplyOther(OriginalApplyManager_k__BackingField, 0);
}


int32_t BattleFieldEnvironmentData___c___ReflectChangedBuffStateApplyOther_b__116_2(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.addOrder;
}


bool BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__78_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1C942F0(this, 0);
  return bgm->fields.isAfterReset;
}


bool BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__78_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0);
}


void BattleFieldEnvironmentData___c___SetSaveData_b__8_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( !x )
    sub_1C942F0(this, 0);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&x->fields._BgmData_k__BackingField,
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
    sub_1C942F0(this, 0);
  return x->fields.isTakeOverNextWave;
}


bool BattleFieldEnvironmentData___c___TakeOverPlayerServantChangeBgm_b__64_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return BattleServantData__isAlive(x, 0, 0);
}


void BattleFieldEnvironmentData___c___TurnBuffProgressingIncrease_b__107_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_ApplyBuffManager_o *OriginalApplyManager_k__BackingField; // x0

  if ( !x )
    sub_1C942F0(this, 0);
  OriginalApplyManager_k__BackingField = x->fields._OriginalApplyManager_k__BackingField;
  if ( OriginalApplyManager_k__BackingField )
    BattleBuffData_BuffData_ApplyBuffManager__ReflectAddedBuffParamToApplyOther(OriginalApplyManager_k__BackingField, 0);
}


void BattleFieldEnvironmentData___c___UpdateBgmBuffPriorityOnInitWave_b__65_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleFieldEnvironmentData___c_o *)x->fields.changeBgmData) == 0 )
    sub_1C942F0(this, x);
  BattleBuffData_ChangeBgmData__UpdatePriorityForWaveStart((BattleBuffData_ChangeBgmData_o *)this, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass102_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleFieldEnvironmentData___c__DisplayClass102_0___GetIndividualityExceptDelTarget_b__0(
        BattleFieldEnvironmentData___c__DisplayClass102_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *subList; // x0

  if ( (byte_4D2F421 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D2F421 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_1C942F0(0, *(_QWORD *)&x);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__);
}


void BattleFieldEnvironmentData___c__DisplayClass115_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleFieldEnvironmentData___c__DisplayClass115_0___CheckFieldBuff_b__0(
        BattleFieldEnvironmentData___c__DisplayClass115_0_o *this,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *_4__this; // x0
  BattleBuffData_BuffData_array *v4; // [xsp+0h] [xbp-20h] BYREF
  BattleBuffData_BuffData_array *onList; // [xsp+8h] [xbp-18h] BYREF

  v4 = 0;
  onList = 0;
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (_4__this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData__get_BuffData(_4__this, method)) == 0 )
  {
    sub_1C942F0(_4__this, method);
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


void BattleFieldEnvironmentData___c__DisplayClass125_0___ctor(
        BattleFieldEnvironmentData___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass125_0___GetApplyToSelfBuffEnumerable_b__1(
        BattleFieldEnvironmentData___c__DisplayClass125_0_o *this,
        System_Collections_Generic_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData___o x,
        const MethodInfo *method)
{
  BattleServantData_o *key; // x19
  BattleFieldEnvironmentData___c__DisplayClass125_0_o *v4; // x20
  struct BattleServantData_o *svtData; // x8

  key = x.fields.key;
  v4 = this;
  if ( (byte_4D2F422 & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData___c__DisplayClass125_0_o *)sub_1C94098(&Method_System_Collections_Generic_KeyValuePair_BattleServantData__List_BattleBuffData_BuffData___get_Key__);
    byte_4D2F422 = 1;
  }
  svtData = v4->fields.svtData;
  if ( !svtData || !key )
    sub_1C942F0(this, x.fields.key);
  return BattleServantData__checkID(key, svtData->fields.uniqueId, 0);
}


bool BattleFieldEnvironmentData___c__DisplayClass125_0___GetApplyToSelfBuffEnumerable_b__2(
        BattleFieldEnvironmentData___c__DisplayClass125_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *svtData; // x8

  svtData = this->fields.svtData;
  if ( !svtData || !x )
    sub_1C942F0(this, x);
  return BattleBuffData_BuffData__IsMatchApplyTarget(x, svtData->fields.isEnemy, 0);
}


BattleBuffData_BuffData_o *BattleFieldEnvironmentData___c__DisplayClass125_0___GetApplyToSelfBuffEnumerable_b__3(
        BattleFieldEnvironmentData___c__DisplayClass125_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
  System_Object_array *bgRangeArray; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2F423 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_RangeValue___);
    sub_1C94098(&System_Func_RangeValue__bool__TypeInfo);
    sub_1C94098(&Method_BattleFieldEnvironmentData___c__DisplayClass71_1__GetQuestCommonIndividuality_b__1__);
    sub_1C94098(&BattleFieldEnvironmentData___c__DisplayClass71_1_TypeInfo);
    byte_4D2F423 = 1;
  }
  v5 = sub_1C942E4(BattleFieldEnvironmentData___c__DisplayClass71_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C942F0(v6, v7);
  *(_DWORD *)(v5 + 16) = x;
  bgRangeArray = (System_Object_array *)this->fields.bgRangeArray;
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_RangeValue__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleFieldEnvironmentData___c__DisplayClass71_1__GetQuestCommonIndividuality_b__1__,
    0);
  return !BasicHelper__Any_object__51926292(
            bgRangeArray,
            (System_Func_T__bool__o *)v9,
            (const MethodInfo_3185514 *)Method_BasicHelper_Any_RangeValue___);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, buff);
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
    sub_1C942F0(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


bool BattleFieldEnvironmentData___c__DisplayClass79_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass79_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0 )
    sub_1C942F0(this, x);
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
    sub_1C942F0(this, x);
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
    sub_1C942F0(this, x);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_46926232(
    this->fields.__4__this,
    x,
    this->fields.isAddAfterTask,
    v3);
}