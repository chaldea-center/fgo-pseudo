void __fastcall BattleFieldEnvironmentData___ctor(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  System_Collections_Generic_List_object__o *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Collections_Generic_List_object__o *v40; // x21
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Collections_Generic_HashSet_T__o *v50; // x21
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct BattlePerformance_o *perf; // x1
  struct BattleLogic_o *logic; // x1
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7

  if ( (byte_4B18820 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__, data, method);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleLogicTask__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo, v18, v19);
    byte_4B18820 = 1;
  }
  v20 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                                       data,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData___ctor__);
  this->fields.backgroundList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.backgroundList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                                       v27,
                                                       v28,
                                                       v29);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData___ctor__);
  this->fields.bgmList = (struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)v30;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgmList, (int64_t)v30, v31, v32, v33, v34, v35, v36);
  this->fields.addOrder = 1;
  v40 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleLogicTask__TypeInfo,
                                                       v37,
                                                       v38,
                                                       v39);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleLogicTask___ctor__);
  this->fields.addTaskList = (struct System_Collections_Generic_List_BattleLogicTask__o *)v40;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.addTaskList, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  v50 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__TypeInfo,
                                                     v47,
                                                     v48,
                                                     v49);
  System_Collections_Generic_HashSet_Int32Enum____ctor(
    v50,
    (const MethodInfo_3456D28 *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE___ctor__);
  this->fields.hashDelType = (struct System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__o *)v50;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.hashDelType, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Data_k__BackingField = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Data_k__BackingField,
    (int64_t)data,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( !data )
    sub_1BCAA3C(v63, v64);
  perf = data->fields.perf;
  this->fields._Perf_k__BackingField = perf;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Perf_k__BackingField,
    (int64_t)perf,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  logic = data->fields.logic;
  this->fields._Logic_k__BackingField = logic;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Logic_k__BackingField,
    (int64_t)logic,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
}


// local variable allocation has failed, the output may be wrong!
BattleFieldEnvironmentData_BGMData_o *__fastcall BattleFieldEnvironmentData__AddBGM(
        BattleFieldEnvironmentData_o *this,
        Generator_BGM_o *bgmGenerator,
        int32_t grantType,
        AddBgmArgument_o *arg,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v8; // x19
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 addOrder; // x1
  int64_t v34; // x2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  BattleFieldEnvironmentData_BGMData_o *v40; // x21
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v42; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v44; // x8
  const MethodInfo *v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  BattleFieldEnvironmentData___c_c *v49; // x0
  System_Func_object__bool__o *_9__67_0; // x21
  Il2CppObject *v51; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  BattleFieldEnvironmentData___c_c *v62; // x8
  System_Collections_Generic_List_object__o *v63; // x21
  BattleFieldEnvironmentData_o *v64; // x20
  System_Predicate_object__o *_9__67_1; // x22
  Il2CppObject *v66; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *v67; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  System_Comparison_T__o *v77; // x21
  System_Collections_Generic_List_object__o *v78; // x21
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Object_array *items; // x8
  _QWORD *v86; // x9
  __int64 size; // x10
  BattleFieldEnvironmentData_o *v88; // x1
  Il2CppClass **v89; // x0

  v8 = this;
  if ( (byte_4B18830 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData_CompareData__, bgmGenerator, *(_QWORD *)&grantType);
    sub_1BCA7E0(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___, v13, v14);
    sub_1BCA7E0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__, v23, v24);
    sub_1BCA7E0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__AddBGM_b__67_0__, v27, v28);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__AddBGM_b__67_1__, v29, v30);
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v31, v32);
    byte_4B18830 = 1;
  }
  addOrder = (unsigned int)v8->fields.addOrder;
  v8->fields.addOrder = addOrder + 1;
  if ( !bgmGenerator )
    goto LABEL_33;
  v40 = (BattleFieldEnvironmentData_BGMData_o *)((__int64 (__fastcall *)(Generator_BGM_o *, __int64, _QWORD, void *, const MethodInfo *))bgmGenerator->klass->vtable._4_Make.method)(
                                                  bgmGenerator,
                                                  addOrder,
                                                  (unsigned int)grantType,
                                                  bgmGenerator->klass[1]._1.image,
                                                  method);
  if ( arg )
    AddBgmArgument__ControlOtherBgmPriorityAtOverStageBgm(arg, v8, v40, v35);
  this = (BattleFieldEnvironmentData_o *)v8->fields.bgmList;
  if ( !this )
    goto LABEL_33;
  buffData = this->fields._buffData;
  v42 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_33;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= LODWORD(buffData->fields.passiveList) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v40,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v44[4] = (BattleBuffData_c *)v40;
    sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v40, v34, (int32_t)v35, v36, v37, v38, v39);
  }
  if ( !v40 )
    goto LABEL_33;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, Il2CppMethodPointer))v40->klass->vtable._5_get_IsTargetBase.method)(
          v40,
          v40->klass->vtable._6_UpdateActive.methodPtr) & 1) == 0 )
    goto LABEL_32;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v8->fields.bgmList;
  v49 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v45);
    v49 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__67_0 = (System_Func_object__bool__o *)v49->static_fields->__9__67_0;
  if ( !_9__67_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49, v45);
      v49 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__67_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                v45,
                                                v46,
                                                v47);
    System_Func_object__bool____ctor(_9__67_0, v51, Method_BattleFieldEnvironmentData___c__AddBGM_b__67_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__67_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__67_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__67_0,
      (int64_t)_9__67_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  v59 = System_Linq_Enumerable__Where_object_(
          bgmList,
          (System_Func_TSource__bool__o *)_9__67_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  this = (BattleFieldEnvironmentData_o *)System_Linq_Enumerable__ToList_object_(
                                           v59,
                                           (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
  v62 = BattleFieldEnvironmentData___c_TypeInfo;
  v63 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList;
  v64 = this;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, addOrder);
    v62 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__67_1 = (System_Predicate_object__o *)v62->static_fields->__9__67_1;
  if ( !_9__67_1 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62, addOrder);
      v62 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v66 = (Il2CppObject *)v62->static_fields->__9;
    _9__67_1 = (System_Predicate_object__o *)sub_1BCAA2C(
                                               System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                               addOrder,
                                               v60,
                                               v61);
    System_Predicate_object____ctor(_9__67_1, v66, Method_BattleFieldEnvironmentData___c__AddBGM_b__67_1__, 0LL);
    v67 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v67->__9__67_1 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)_9__67_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v67->__9__67_1, (int64_t)_9__67_1, v68, v69, v70, v71, v72, v73);
  }
  if ( !v63 )
    goto LABEL_33;
  System_Collections_Generic_List_object___RemoveAll(
    v63,
    (System_Predicate_T__o *)_9__67_1,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v77 = (System_Comparison_T__o *)sub_1BCAA2C(
                                    System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                    v74,
                                    v75,
                                    v76);
  System_Comparison_object____ctor(v77, (Il2CppObject *)v8, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !v64
    || (System_Collections_Generic_List_object___Sort_56244000(
          (System_Collections_Generic_List_object__o *)v64,
          v77,
          (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__),
        v78 = (System_Collections_Generic_List_object__o *)v8->fields.bgmList,
        this = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)v64,
                                                 0,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__),
        !v78)
    || (items = v78->fields._items,
        v86 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__,
        ++v78->fields._version,
        !items) )
  {
LABEL_33:
    sub_1BCAA3C(this, addOrder);
  }
  size = v78->fields._size;
  v88 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v78,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = &items->obj.klass + size;
    v78->fields._size = size + 1;
    v89[4] = (Il2CppClass *)v88;
    sub_1BCA784((PartyOrganizationUtility_o *)(v89 + 4), (int64_t)v88, v79, v80, v81, v82, v83, v84);
  }
LABEL_32:
  BattleFieldEnvironmentData__SortBGM(v8, v45);
  return v8->fields._CurBGM_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
BattleFieldEnvironmentData_BackgroundData_o *__fastcall BattleFieldEnvironmentData__AddBackground(
        BattleFieldEnvironmentData_o *this,
        Generator_Background_o *bgGenerator,
        int32_t grantType,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 addOrder; // x1
  Il2CppObject *v16; // x20
  int64_t v17; // x2
  __int64 v18; // x3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  System_Collections_Generic_List_object__o *backgroundList; // x21
  System_Predicate_object__o *v24; // x22
  Il2CppObject *klass; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v34; // x9
  __int64 Data_k__BackingField_low; // x10
  BattleBuffData_c **v36; // x8
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1

  v6 = this;
  if ( (byte_4B1882F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__,
      bgGenerator,
      *(_QWORD *)&grantType);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__, v7, v8);
    sub_1BCA7E0(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__AddBackground_b__66_0__, v11, v12);
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v13, v14);
    byte_4B1882F = 1;
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
  v16 = (Il2CppObject *)this;
  if ( (((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
          this,
          this->klass->vtable._6_AddBGM.methodPtr) & 1) != 0 )
  {
    backgroundList = (System_Collections_Generic_List_object__o *)v6->fields.backgroundList;
    this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, addOrder);
      this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
    }
    v24 = *(System_Predicate_object__o **)&this[1].fields._CurBGM_k__BackingField[1].fields.isAfterReset;
    if ( !v24 )
    {
      if ( !LODWORD(this[1].fields.baseBgm) )
      {
        j_il2cpp_runtime_class_init_0(this, addOrder);
        this = (BattleFieldEnvironmentData_o *)BattleFieldEnvironmentData___c_TypeInfo;
      }
      klass = (Il2CppObject *)this[1].fields._CurBGM_k__BackingField->klass;
      v24 = (System_Predicate_object__o *)sub_1BCAA2C(
                                            System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                            addOrder,
                                            v17,
                                            v18);
      System_Predicate_object____ctor(v24, klass, Method_BattleFieldEnvironmentData___c__AddBackground_b__66_0__, 0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__66_0 = (struct System_Predicate_BattleFieldEnvironmentData_BackgroundData__o *)v24;
      sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__66_0, (int64_t)v24, v27, v28, v29, v30, v31, v32);
    }
    if ( backgroundList )
    {
      System_Collections_Generic_List_object___RemoveAll(
        backgroundList,
        (System_Predicate_T__o *)v24,
        (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__);
      goto LABEL_14;
    }
LABEL_20:
    sub_1BCAA3C(this, addOrder);
  }
LABEL_14:
  this = (BattleFieldEnvironmentData_o *)v6->fields.backgroundList;
  if ( !this )
    goto LABEL_20;
  buffData = this->fields._buffData;
  v34 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Add__;
  ++HIDWORD(this->fields._Data_k__BackingField);
  if ( !buffData )
    goto LABEL_20;
  Data_k__BackingField_low = SLODWORD(this->fields._Data_k__BackingField);
  if ( (unsigned int)Data_k__BackingField_low >= LODWORD(buffData->fields.passiveList) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      v16,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &buffData->klass + Data_k__BackingField_low;
    LODWORD(this->fields._Data_k__BackingField) = Data_k__BackingField_low + 1;
    v36[4] = (BattleBuffData_c *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v16, v17, v18, v19, v20, v21, v22);
  }
  BattleFieldEnvironmentData__SortBackGround(v6, v37);
  BattleFieldEnvironmentData__SortBGM(v6, v38);
  return v6->fields._CurBackGround_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *changeBgmBuffArray,
        const MethodInfo *method)
{
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
  __int64 v21; // x3
  bool IsNullOrEmpty; // w19
  BattleFieldEnvironmentData___c_c *v23; // x0
  System_Func_object__int__o *_9__59_0; // x22
  Il2CppObject *v25; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v36; // x20
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v40; // x1
  __int64 v41; // x20
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x1
  BattleBuffData_ChangeBgmData_o *v52; // x0
  Generator_BGM_o *v53; // x1
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0

  if ( (byte_4B18828 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___, changeBgmBuffArray, method);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__59_0__, v15, v16);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v17, v18);
    byte_4B18828 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)changeBgmBuffArray, 0LL);
  if ( !IsNullOrEmpty )
  {
    v23 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v19);
      v23 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__59_0 = (System_Func_object__int__o *)v23->static_fields->__9__59_0;
    if ( !_9__59_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23, v19);
        v23 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__59_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                 System_Func_BattleBuffData_BuffData__int__TypeInfo,
                                                 v19,
                                                 v20,
                                                 v21);
      System_Func_object__int____ctor(
        _9__59_0,
        v25,
        Method_BattleFieldEnvironmentData___c__AddBgmFromChangeBgmBuffArray_b__59_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__59_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__59_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__59_0,
        (int64_t)_9__59_0,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
    }
    v33 = System_Linq_Enumerable__OrderBy_object__int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)changeBgmBuffArray,
            (System_Func_TSource__TKey__o *)_9__59_0,
            (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_BattleBuffData_BuffData__int___);
    if ( !v33 )
      sub_1BCAA3C(0LL, v34);
    klass = v33->klass;
    v36 = v33;
    v37 = *(unsigned __int16 *)(&v33->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v33->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
      {
        --v37;
        p_offset += 4;
        if ( !v37 )
          goto LABEL_15;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_15:
      p_method = sub_1C1C7C0(v33, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
            v36,
            *(_QWORD *)(p_method + 8));
    if ( !v41 )
      sub_1BCAA3C(0LL, v40);
    while ( 1 )
    {
      v42 = *(_QWORD *)v41;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_22;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_22:
        v45 = sub_1C1C7C0(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
        break;
      v46 = *(_QWORD *)v41;
      v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v48 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_29;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_29:
        v49 = sub_1C1C7C0(v41, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
      }
      v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
      if ( !v50 )
        sub_1BCAA3C(0LL, v51);
      v52 = *(BattleBuffData_ChangeBgmData_o **)(v50 + 376);
      if ( !v52 )
        sub_1BCAA3C(0LL, v51);
      v53 = BattleBuffData_ChangeBgmData__MakeBgmGenerator(v52, this->fields._Data_k__BackingField, 0LL);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v53,
        2LL,
        0LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
    v54 = *(_QWORD *)v41;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_38;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_38:
      v57 = sub_1C1C7C0(v41, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v57)(v41, *(_QWORD *)(v57 + 8));
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
    sub_1BCAA3C(0LL, v7);
  BattleBuffData__addBuff(BuffData, buff, 1, unFixBuff, 0LL);
}


void __fastcall BattleFieldEnvironmentData__AddLastInterruptTasks(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *addTaskList; // x0
  struct System_Collections_Generic_List_BattleLogicTask__o *v15; // x8
  int32_t size; // w2
  int v17; // w9

  if ( (byte_4B1883A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__, logic, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Clear__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__get_Count__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1883A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, logic);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)logic, 0LL, 0LL) )
  {
    addTaskList = (System_Collections_Generic_List_object__o *)this->fields.addTaskList;
    if ( !addTaskList )
      goto LABEL_15;
    if ( addTaskList->fields._size >= 1 )
    {
      addTaskList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                   addTaskList,
                                                                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleLogicTask__ToArray__);
      if ( logic )
      {
        BattleLogic__addBattleLogicTask(logic, (BattleLogicTask_array *)addTaskList, 0LL);
        v15 = this->fields.addTaskList;
        if ( v15 )
        {
          size = v15->fields._size;
          v17 = v15->fields._version + 1;
          v15->fields._size = 0;
          v15->fields._version = v17;
          if ( size >= 1 )
            System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
          addTaskList = (System_Collections_Generic_List_object__o *)this->fields.hashDelType;
          if ( addTaskList )
          {
            System_Collections_Generic_HashSet_Int32Enum___Clear(
              (System_Collections_Generic_HashSet_T__o *)addTaskList,
              (const MethodInfo_34573BC *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Clear__);
            return;
          }
        }
      }
LABEL_15:
      sub_1BCAA3C(addTaskList, v13);
    }
  }
}


void __fastcall BattleFieldEnvironmentData__AddPlayerServantChangeBgmWhenContinue(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  BattleFieldEnvironmentData_o *v4; // x19
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
  struct BattleData_o *Data_k__BackingField; // x8
  System_Collections_Generic_IEnumerable_TSource__o *player_datalist; // x20
  BattleFieldEnvironmentData___c_c *v21; // x0
  System_Func_object__bool__o *_9__58_0; // x21
  Il2CppObject *v23; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  BattleFieldEnvironmentData___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  System_Func_object__object__o *_9__58_1; // x21
  Il2CppObject *v38; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Object_array *v47; // x1
  const MethodInfo *v48; // x2

  v4 = this;
  if ( (byte_4B18827 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v7, v8);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_0__, v13, v14);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_1__, v15, v16);
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v17, v18);
    byte_4B18827 = 1;
  }
  Data_k__BackingField = v4->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1BCAA3C(this, method);
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)Data_k__BackingField->fields.player_datalist;
  v21 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v21 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__58_0 = (System_Func_object__bool__o *)v21->static_fields->__9__58_0;
  if ( !_9__58_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, method);
      v21 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__58_0 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleServantData__bool__TypeInfo, method, v2, v3);
    System_Func_object__bool____ctor(
      _9__58_0,
      v23,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__58_0 = (struct System_Func_BattleServantData__bool__o *)_9__58_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__58_0,
      (int64_t)_9__58_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Where_object_(
          player_datalist,
          (System_Func_TSource__bool__o *)_9__58_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v35 = BattleFieldEnvironmentData___c_TypeInfo;
  v36 = v31;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v32);
    v35 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__58_1 = (System_Func_object__object__o *)v35->static_fields->__9__58_1;
  if ( !_9__58_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v32);
      v35 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__58_1 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo,
                                                  v32,
                                                  v33,
                                                  v34);
    System_Func_object__object____ctor(
      _9__58_1,
      v38,
      Method_BattleFieldEnvironmentData___c__AddPlayerServantChangeBgmWhenContinue_b__58_1__,
      0LL);
    v39 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v39->__9__58_1 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__58_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v39->__9__58_1, (int64_t)_9__58_1, v40, v41, v42, v43, v44, v45);
  }
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v36,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__58_1,
                                                               (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
  v47 = System_Linq_Enumerable__ToArray_object_(
          v46,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v4, (BattleBuffData_BuffData_array *)v47, v48);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__AddRemoveProcTask(
        BattleFieldEnvironmentData_o *this,
        BattleLogicTask_o *task,
        int32_t addType,
        bool isNotDuplicated,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_HashSet_T__o *hashDelType; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_Int32_array *buckets; // x8
  _QWORD *v21; // x9
  __int64 slots_low; // x10
  __int64 v23; // x8

  if ( (byte_4B1883B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__, task, *(_QWORD *)&addType);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleLogicTask__Add__, v11, v12);
    byte_4B1883B = 1;
  }
  if ( isNotDuplicated )
  {
    hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
    if ( !hashDelType )
      goto LABEL_12;
    if ( System_Collections_Generic_HashSet_Int32Enum___Contains(
           hashDelType,
           addType,
           (const MethodInfo_345741C *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Contains__) )
    {
      return;
    }
  }
  hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.hashDelType;
  if ( !hashDelType
    || (System_Collections_Generic_HashSet_Int32Enum___Add(
          hashDelType,
          addType,
          (const MethodInfo_3457F2C *)Method_System_Collections_Generic_HashSet_BuffList_DEL_AFTER_TYPE__Add__),
        (hashDelType = (System_Collections_Generic_HashSet_T__o *)this->fields.addTaskList) == 0LL)
    || (buckets = hashDelType->fields._buckets,
        v21 = Method_System_Collections_Generic_List_BattleLogicTask__Add__,
        ++HIDWORD(hashDelType->fields._slots),
        !buckets) )
  {
LABEL_12:
    sub_1BCAA3C(hashDelType, task);
  }
  slots_low = SLODWORD(hashDelType->fields._slots);
  if ( (unsigned int)slots_low >= buckets->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)hashDelType,
      (Il2CppObject *)task,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = (__int64)buckets + 8 * slots_low;
    LODWORD(hashDelType->fields._slots) = slots_low + 1;
    *(_QWORD *)(v23 + 32) = task;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 32), (int64_t)task, v14, v15, v16, v17, v18, v19);
  }
}


void __fastcall BattleFieldEnvironmentData__AddServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_T__o *AllValidBGMChangeBuffArray; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  System_Action_object__o *v13; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_4B18840 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData_BuffData__TypeInfo, svtData, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v5, v6);
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(
                                             &Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__99_0__,
                                             v7,
                                             v8);
    byte_4B18840 = 1;
  }
  if ( !svtData || (this = (BattleFieldEnvironmentData_o *)BattleServantData__get_BuffData(svtData, 0LL)) == 0LL )
    sub_1BCAA3C(this, svtData);
  AllValidBGMChangeBuffArray = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__GetAllValidBGMChangeBuffArray(
                                                                                (BattleBuffData_o *)this,
                                                                                0LL);
  v13 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleBuffData_BuffData__TypeInfo, v10, v11, v12);
  System_Action_object____ctor(v13, v4, Method_BattleFieldEnvironmentData__AddServantChangeBgm_b__99_0__, 0LL);
  BasicHelper__ForEach_object_(
    AllValidBGMChangeBuffArray,
    (System_Action_T__o *)v13,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateBgmTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  PlayCurrentBgmLogicTask_o *v5; // x20
  const MethodInfo *v6; // x4

  if ( (byte_4B18842 & 1) == 0 )
  {
    sub_1BCA7E0(&PlayCurrentBgmLogicTask_TypeInfo, method, v2);
    byte_4B18842 = 1;
  }
  v5 = (PlayCurrentBgmLogicTask_o *)sub_1BCAA2C(PlayCurrentBgmLogicTask_TypeInfo, method, v2, v3);
  PlayCurrentBgmLogicTask___ctor(v5, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v5, 3, 1, v6);
}


void __fastcall BattleFieldEnvironmentData__AddUpdateViewTask(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  UpdateFieldViewBattleLogicTask_o *v5; // x20
  const MethodInfo *v6; // x4

  if ( (byte_4B18841 & 1) == 0 )
  {
    sub_1BCA7E0(&UpdateFieldViewBattleLogicTask_TypeInfo, method, v2);
    byte_4B18841 = 1;
  }
  v5 = (UpdateFieldViewBattleLogicTask_o *)sub_1BCAA2C(UpdateFieldViewBattleLogicTask_TypeInfo, method, v2, v3);
  UpdateFieldViewBattleLogicTask___ctor(v5, 0LL);
  BattleFieldEnvironmentData__AddRemoveProcTask(this, (BattleLogicTask_o *)v5, 2, 1, v6);
}


bool __fastcall BattleFieldEnvironmentData__CheckBuffAvoid(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *buffIndiv,
        BattleServantData_o *opSvt,
        const MethodInfo *method)
{
  System_Int32_array *Individualities_43727200; // x19
  BattleBuffData_o *BuffData; // x21
  const MethodInfo *v7; // x1
  BattleBuffData_o *v8; // x0
  __int64 v9; // x1
  System_Int32_array *BuffIndividualities; // x0

  Individualities_43727200 = buffIndiv;
  if ( opSvt )
    Individualities_43727200 = BattleServantData__getIndividualities_43727200(opSvt, buffIndiv, 1, 0, 0LL);
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
    sub_1BCAA3C(v8, v9);
  }
  return BattleBuffData__checkActBuff(BuffData, 105, (System_Int32_array *)v8, Individualities_43727200, 0LL);
}


void __fastcall BattleFieldEnvironmentData__CheckUsedBuff(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *BuffData; // x0
  __int64 v4; // x1
  RemovedBuffInfo_o *v5; // x1
  const MethodInfo *v6; // x3

  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    sub_1BCAA3C(0LL, v4);
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
    sub_1BCAA3C(this, a);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  BattleFieldEnvironmentData___c_c *v11; // x0
  System_Func_object__object__o *_9__57_0; // x20
  Il2CppObject *v13; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4B18826 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___, method, v2);
    sub_1BCA7E0(&System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__57_0__, v7, v8);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v9, v10);
    byte_4B18826 = 1;
  }
  if ( !servantEnumerable )
    return 0LL;
  v11 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v11 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__57_0 = (System_Func_object__object__o *)v11->static_fields->__9__57_0;
  if ( !_9__57_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__57_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___TypeInfo,
                                                  method,
                                                  v2,
                                                  v3);
    System_Func_object__object____ctor(
      _9__57_0,
      v13,
      Method_BattleFieldEnvironmentData___c__EnumerateValidBgmChangeBuff_b__57_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__57_0 = (struct System_Func_BattleServantData__IEnumerable_BattleBuffData_BuffData___o *)_9__57_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__57_0,
      (int64_t)_9__57_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                                                (System_Collections_Generic_IEnumerable_TSource__o *)servantEnumerable,
                                                                                (System_Func_TSource__IEnumerable_TResult___o *)_9__57_0,
                                                                                (const MethodInfo_2F45FF4 *)Method_System_Linq_Enumerable_SelectMany_BattleServantData__BattleBuffData_BuffData___);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B1883C & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(
                                             &Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__,
                                             removeBuffInfo,
                                             isAddAfterTask);
    byte_4B1883C = 1;
  }
  if ( !removeBuffInfo
    || (this = (BattleFieldEnvironmentData_o *)removeBuffInfo->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
    sub_1BCAA3C(this, removeBuffInfo);
  }
  v7 = System_Collections_Generic_List_object___ToArray(
         (System_Collections_Generic_List_object__o *)this,
         (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_43534056(
    v6,
    (BattleBuffData_BuffData_array *)v7,
    isAddAfterTask,
    v8);
  return removeBuffInfo;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_43534056(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *removeBuffArray,
        bool isAddAfterTask,
        const MethodInfo *method)
{
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
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  BattleFieldEnvironmentData___c_c *v33; // x0
  System_Func_object__bool__o *_9__87_0; // x22
  Il2CppObject *v35; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_T__o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Action_object__o *v47; // x22
  const MethodInfo *v48; // x1

  if ( (byte_4B1883D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData_BuffData__TypeInfo, removeBuffArray, isAddAfterTask);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v9, v10);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__87_0__, v13, v14);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__DisplayClass87_0__ExecRemoveBuffAfterProc_b__1__, v15, v16);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c__DisplayClass87_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v19, v20);
    byte_4B1883D = 1;
  }
  v21 = sub_1BCAA2C(BattleFieldEnvironmentData___c__DisplayClass87_0_TypeInfo, removeBuffArray, isAddAfterTask, method);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    sub_1BCAA3C(v22, v23);
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_BYTE *)(v21 + 24) = isAddAfterTask;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffArray, 0LL) )
  {
    v33 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v30);
      v33 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__87_0 = (System_Func_object__bool__o *)v33->static_fields->__9__87_0;
    if ( !_9__87_0 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33, v30);
        v33 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v35 = (Il2CppObject *)v33->static_fields->__9;
      _9__87_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                  v30,
                                                  v31,
                                                  v32);
      System_Func_object__bool____ctor(
        _9__87_0,
        v35,
        Method_BattleFieldEnvironmentData___c__ExecRemoveBuffAfterProc_b__87_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__87_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__87_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__87_0,
        (int64_t)_9__87_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)removeBuffArray,
                                                           (System_Func_TSource__bool__o *)_9__87_0,
                                                           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    v47 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleBuffData_BuffData__TypeInfo, v44, v45, v46);
    System_Action_object____ctor(
      v47,
      (Il2CppObject *)v21,
      Method_BattleFieldEnvironmentData___c__DisplayClass87_0__ExecRemoveBuffAfterProc_b__1__,
      0LL);
    BasicHelper__ForEach_object_(
      v43,
      (System_Action_T__o *)v47,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
    BattleFieldEnvironmentData__AddUpdateViewTask(this, v48);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_43534660(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *removeBuff,
        bool isAddAfterTask,
        const MethodInfo *method)
{
  FieldBuffDeleteProcess_o *v7; // x0
  FieldBuffDeleteProcess_o *v8; // x22

  if ( !removeBuff )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  BattleFieldEnvironmentData___c_c *v13; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  System_Func_object__bool__o *_9__68_0; // x20
  Il2CppObject *v16; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B18831 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___, v5, v6);
    sub_1BCA7E0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__68_0__, v9, v10);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v11, v12);
    byte_4B18831 = 1;
  }
  v13 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v13 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__68_0 = (System_Func_object__bool__o *)v13->static_fields->__9__68_0;
  if ( !_9__68_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__68_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                method,
                                                v2,
                                                v3);
    System_Func_object__bool____ctor(
      _9__68_0,
      v16,
      Method_BattleFieldEnvironmentData___c__GetBaseBgmList_b__68_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__68_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__68_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__68_0,
      (int64_t)_9__68_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
          (System_Func_TSource__bool__o *)_9__68_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
  return (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)System_Linq_Enumerable__ToList_object_(
                                                                                    v24,
                                                                                    (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_BattleFieldEnvironmentData_BGMData___);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x19
  const MethodInfo *v12; // x1
  void *BuffData; // x0
  __int64 v14; // x1
  int v15; // w8
  void *v16; // x20
  unsigned int v17; // w21
  __int64 v18; // x23

  if ( (byte_4B1882C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B1882C = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v12);
  if ( !BuffData )
    goto LABEL_15;
  BuffData = BattleBuffData__GetFieldChangeArray((BattleBuffData_o *)BuffData, 0LL);
  if ( !BuffData )
    goto LABEL_15;
  v15 = *((_DWORD *)BuffData + 6);
  v16 = BuffData;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= v15 )
        sub_1BCAA44(BuffData, v14);
      v18 = *((_QWORD *)v16 + (int)v17 + 4);
      if ( !v18 )
        break;
      BuffData = (void *)BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)(v18 + 56), 0LL);
      if ( ((unsigned __int8)BuffData & 1) == 0 )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_int___AddRange(
          v11,
          *(System_Collections_Generic_IEnumerable_T__o **)(v18 + 56),
          (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
        goto LABEL_13;
    }
LABEL_15:
    sub_1BCAA3C(BuffData, v14);
  }
LABEL_13:
  if ( !v11 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetCommonFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *individuality,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x21
  System_Int32_array *IsNullOrEmpty; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4B18843 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, individuality, addIndiv);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_4B18843 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    individuality,
                                                    addIndiv,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  IsNullOrEmpty = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                          (System_Collections_ICollection_o *)individuality,
                                          0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v13);
    if ( !v11 )
LABEL_11:
      sub_1BCAA3C(IsNullOrEmpty, v13);
  }
  else
  {
    if ( !v11 )
      goto LABEL_11;
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)individuality,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
    IsNullOrEmpty = BattleFieldEnvironmentData__GetChangeFieldIndividuality(this, v14);
  }
  System_Collections_Generic_List_int___AddRange(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)IsNullOrEmpty,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)addIndiv, 0LL) )
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)addIndiv,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  return BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(this, v11, v15);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetFieldIndividuality(
        BattleFieldEnvironmentData_o *this,
        System_Int32_array *addIndiv,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_int__o *v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  BattleFieldEnvironmentData___c_c *v24; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x22
  System_Func_object__bool__o *_9__60_0; // x23
  Il2CppObject *v27; // x24
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_IEnumerable_T__o *baseBackground; // x0
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  const MethodInfo *v37; // x1
  System_Collections_ICollection_o *QuestCommonIndividuality; // x0
  const MethodInfo *v39; // x1
  System_Int32_array *v40; // x1
  const MethodInfo *v41; // x3

  if ( (byte_4B18829 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____76880584,
      addIndiv,
      method);
    sub_1BCA7E0(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__60_0__, v16, v17);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v18, v19);
    byte_4B18829 = 1;
  }
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    addIndiv,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v24 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = this->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v21);
    v24 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__60_0 = (System_Func_object__bool__o *)v24->static_fields->__9__60_0;
  if ( !_9__60_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24, v21);
      v24 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__60_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo,
                                                v21,
                                                v22,
                                                v23);
    System_Func_object__bool____ctor(
      _9__60_0,
      v27,
      Method_BattleFieldEnvironmentData___c__GetFieldIndividuality_b__60_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__60_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__60_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__60_0,
      (int64_t)_9__60_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  baseBackground = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)backgroundList,
                                                                    (System_Func_TSource__bool__o *)_9__60_0,
                                                                    (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____76880584);
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
    if ( v20 )
      goto LABEL_17;
LABEL_19:
    sub_1BCAA3C(baseBackground, monitor);
  }
  if ( !v20 )
    goto LABEL_19;
  System_Collections_Generic_List_int___AddRange(
    v20,
    monitor,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  QuestCommonIndividuality = (System_Collections_ICollection_o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                   this,
                                                                   v37);
  if ( !BasicHelper__IsNullOrEmpty(QuestCommonIndividuality, 0LL) )
  {
    baseBackground = (System_Collections_Generic_IEnumerable_T__o *)BattleFieldEnvironmentData__get_QuestCommonIndividuality(
                                                                      this,
                                                                      v39);
LABEL_17:
    System_Collections_Generic_List_int___AddRange(
      v20,
      baseBackground,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  v40 = System_Collections_Generic_List_int___ToArray(
          v20,
          (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
  return BattleFieldEnvironmentData__GetCommonFieldIndividuality(this, v40, addIndiv, v41);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetIndividualityExceptDelTarget(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_int__o *individualityList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x21
  const MethodInfo *v19; // x1
  BattleBuffData_o *BuffData; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_List_int__o **v28; // x22
  System_Collections_Generic_List_int__o *v29; // x20
  __int64 v30; // x2
  __int64 v31; // x3
  System_Predicate_int__o *v32; // x20

  if ( (byte_4B1883F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, individualityList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__RemoveAll__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v10, v11);
    sub_1BCA7E0(&System_Predicate_int__TypeInfo, v12, v13);
    sub_1BCA7E0(
      &Method_BattleFieldEnvironmentData___c__DisplayClass92_0__GetIndividualityExceptDelTarget_b__0__,
      v14,
      v15);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c__DisplayClass92_0_TypeInfo, v16, v17);
    byte_4B1883F = 1;
  }
  v18 = sub_1BCAA2C(BattleFieldEnvironmentData___c__DisplayClass92_0_TypeInfo, individualityList, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v19);
  if ( !BuffData )
    goto LABEL_13;
  BuffData = (BattleBuffData_o *)BattleBuffData__GetBuffGeneralParamList(BuffData, 112, 0LL, 0LL, 1, 0LL);
  if ( !v18 )
    goto LABEL_13;
  *(_QWORD *)(v18 + 16) = BuffData;
  v28 = (System_Collections_Generic_List_int__o **)(v18 + 16);
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)BuffData, v22, v23, v24, v25, v26, v27);
  BuffData = (BattleBuffData_o *)this->fields._Data_k__BackingField;
  if ( !BuffData )
    goto LABEL_13;
  v29 = *v28;
  BuffData = (BattleBuffData_o *)BattleData__GetSubFieldIndividualityServant((BattleData_o *)BuffData, 0LL);
  if ( !v29 )
    goto LABEL_13;
  System_Collections_Generic_List_int___AddRange(
    v29,
    (System_Collections_Generic_IEnumerable_T__o *)BuffData,
    (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( !*v28 )
    goto LABEL_13;
  if ( (*v28)->fields._size < 1 )
  {
    if ( individualityList )
      return System_Collections_Generic_List_int___ToArray(
               individualityList,
               (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
LABEL_13:
    sub_1BCAA3C(BuffData, v21);
  }
  v32 = (System_Predicate_int__o *)sub_1BCAA2C(System_Predicate_int__TypeInfo, v21, v30, v31);
  System_Predicate_int____ctor(
    v32,
    (Il2CppObject *)v18,
    Method_BattleFieldEnvironmentData___c__DisplayClass92_0__GetIndividualityExceptDelTarget_b__0__,
    0LL);
  if ( !individualityList )
    goto LABEL_13;
  System_Collections_Generic_List_int___RemoveAll(
    individualityList,
    (System_Predicate_T__o *)v32,
    (const MethodInfo_3586260 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return System_Collections_Generic_List_int___ToArray(
           individualityList,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleFieldEnvironmentData__GetLinkBuffData(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x19
  BattleData_o *Data_k__BackingField; // x0
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x8
  BattleServantData_o *ServantData; // x0
  BattleBuffData_o *BuffData; // x0
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v24; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Func_object__bool__o *v28; // x21

  if ( (byte_4B1882D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____76880560, uniqueVal, method);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__DisplayClass64_0__GetLinkBuffData_b__0__, v8, v9);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c__DisplayClass64_0_TypeInfo, v10, v11);
    byte_4B1882D = 1;
  }
  v12 = sub_1BCAA2C(BattleFieldEnvironmentData___c__DisplayClass64_0_TypeInfo, uniqueVal, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_12;
  *(_QWORD *)(v12 + 16) = uniqueVal;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)uniqueVal, v15, v16, v17, v18, v19, v20);
  v21 = *(_QWORD *)(v12 + 16);
  if ( !v21 )
    goto LABEL_12;
  v14 = (const MethodInfo *)*(unsigned int *)(v21 + 20);
  if ( ((unsigned int)v14 & 0x80000000) == 0 )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( Data_k__BackingField )
    {
      ServantData = BattleData__getServantData(Data_k__BackingField, (int32_t)v14, 0LL);
      if ( ServantData )
      {
        BuffData = BattleServantData__get_BuffData(ServantData, 0LL);
        if ( BuffData )
          goto LABEL_9;
      }
      return 0LL;
    }
LABEL_12:
    sub_1BCAA3C(Data_k__BackingField, v14);
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, v14);
  if ( BuffData )
  {
LABEL_9:
    v24 = BattleBuffData__AllBuffEnumerable(BuffData, 0LL);
    v28 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v25, v26, v27);
    System_Func_object__bool____ctor(
      v28,
      (Il2CppObject *)v12,
      Method_BattleFieldEnvironmentData___c__DisplayClass64_0__GetLinkBuffData_b__0__,
      0LL);
    return (BattleBuffData_BuffData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                          (System_Func_TSource__bool__o *)v28,
                                          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleBuffData_BuffData____76880560);
  }
  return 0LL;
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetLinkBuffIndividuality(
        BattleFieldEnvironmentData_o *this,
        BuffUniqueValue_o *uniqueVal,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *LinkBuffData; // x0
  __int64 v6; // x1
  long double inited; // q0
  System_Int32_array *result; // x0
  _QWORD *v9; // x19
  __int64 v10; // x8
  __int64 v11; // x0
  __int64 v12; // x0

  if ( (byte_4B1882E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, uniqueVal, method);
    byte_4B1882E = 1;
  }
  LinkBuffData = BattleFieldEnvironmentData__GetLinkBuffData(this, uniqueVal, method);
  if ( !LinkBuffData || (result = BattleBuffData_BuffData__GetIndividualty(LinkBuffData, 0, 0, 0, 0LL)) == 0LL )
  {
    v9 = Method_System_Array_Empty_int___;
    v10 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v10 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v6);
      v10 = v9[7];
    }
    v11 = *(_QWORD *)(v10 + 16);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v11 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v11, v6);
    v12 = *(_QWORD *)(v9[7] + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C1C6BC(inited);
    return **(System_Int32_array ***)(v12 + 184);
  }
  return result;
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetQuestCommonIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  __int64 v21; // x19
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_TSource__o *QuestPhaseIndividuality; // x20
  __int64 v24; // x1
  long double inited; // q0
  Il2CppObject *Value; // x21
  _QWORD *v27; // x19
  __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  System_Object_array *v32; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  System_Func_int__bool__o *v43; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_4B1882B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_int___, v7, v8);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_RangeValue___, v11, v12);
    sub_1BCA7E0(&JsonManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__DisplayClass62_0__GetQuestCommonIndividuality_b__0__, v15, v16);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_3052/*"BG_INDIVIDUALITY_VALUE_RANGE"*/, v19, v20);
    byte_4B1882B = 1;
  }
  v21 = sub_1BCAA2C(BattleFieldEnvironmentData___c__DisplayClass62_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  QuestPhaseIndividuality = (System_Collections_Generic_IEnumerable_TSource__o *)BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
                                                                                   this,
                                                                                   v22);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)QuestPhaseIndividuality, 0LL)
    || (Value = (Il2CppObject *)ConstantStrMaster__getValue((System_String_o *)StringLiteral_3052/*"BG_INDIVIDUALITY_VALUE_RANGE"*/, 0LL),
        System_String__IsNullOrEmpty((System_String_o *)Value, 0LL)) )
  {
    v27 = Method_System_Array_Empty_int___;
    v28 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v28 )
    {
      sub_1C1C718(Method_System_Array_Empty_int___, v24);
      v28 = v27[7];
    }
    v29 = *(_QWORD *)(v28 + 16);
    if ( (*(_BYTE *)(v29 + 309) & 1) == 0 )
      v29 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v29 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v29, v24);
    v30 = *(_QWORD *)(v27[7] + 16LL);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1C1C6BC(inited);
    return **(System_Int32_array ***)(v30 + 184);
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v24);
    v32 = JsonManager__DeserializeArray_object_(
            Value,
            (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_RangeValue___);
    if ( !v21 )
      sub_1BCAA3C(v32, v33);
    *(_QWORD *)(v21 + 16) = v32;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 16), (int64_t)v32, v34, v35, v36, v37, v38, v39);
    v43 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v40, v41, v42);
    System_Func_int__bool____ctor(
      v43,
      (Il2CppObject *)v21,
      Method_BattleFieldEnvironmentData___c__DisplayClass62_0__GetQuestCommonIndividuality_b__0__,
      0LL);
    v44 = System_Linq_Enumerable__Where_int_(
            QuestPhaseIndividuality,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_2F515C0 *)Method_System_Linq_Enumerable_Where_int___);
    return System_Linq_Enumerable__ToArray_int_(
             v44,
             (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  }
}


System_Int32_array *__fastcall BattleFieldEnvironmentData__GetQuestPhaseIndividuality(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0
  System_Int32_array **p_questPhaseIndividuality; // x19
  BattleData_o *Data_k__BackingField; // x0
  System_Int32_array *PrioredIndividuality; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  long double inited; // q0
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0

  if ( (byte_4B1882A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, method, v2);
    byte_4B1882A = 1;
  }
  p_questPhaseIndividuality = &this->fields.questPhaseIndividuality;
  result = this->fields.questPhaseIndividuality;
  if ( !result )
  {
    Data_k__BackingField = this->fields._Data_k__BackingField;
    if ( !Data_k__BackingField )
      sub_1BCAA3C(0LL, method);
    PrioredIndividuality = BattleData__GetPrioredIndividuality(Data_k__BackingField, 0LL);
    *p_questPhaseIndividuality = PrioredIndividuality;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.questPhaseIndividuality,
      (int64_t)PrioredIndividuality,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    result = *p_questPhaseIndividuality;
    if ( !*p_questPhaseIndividuality )
    {
      v16 = Method_System_Array_Empty_int___;
      v17 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v17 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, v14);
        v17 = v16[7];
      }
      v18 = *(_QWORD *)(v17 + 16);
      if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
        v18 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v18 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v18, v14);
      v19 = *(_QWORD *)(v16[7] + 16LL);
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1C1C6BC(inited);
      return **(System_Int32_array ***)(v19 + 184);
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
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  _QWORD *v7; // x8
  Il2CppObject *v8; // x19

  if ( (byte_4B1883E & 1) == 0 )
  {
    sub_1BCA7E0(&ChangeBgmBuffDeleteProcess_TypeInfo, *(_QWORD *)&delAfterProcType, method);
    sub_1BCA7E0(&FieldChangeBuffDeleteProcess_TypeInfo, v5, v6);
    byte_4B1883E = 1;
  }
  if ( delAfterProcType == 1 )
  {
    v7 = &FieldChangeBuffDeleteProcess_TypeInfo;
  }
  else
  {
    if ( delAfterProcType != 3 )
      return 0LL;
    v7 = &ChangeBgmBuffDeleteProcess_TypeInfo;
  }
  v8 = (Il2CppObject *)sub_1BCAA2C(*v7, *(_QWORD *)&delAfterProcType, method, v3);
  System_Object___ctor(v8, 0LL);
  return (FieldBuffDeleteProcess_o *)v8;
}


BattleFieldEnvironmentData_SaveData_o *__fastcall BattleFieldEnvironmentData__GetSaveData(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  void *backgroundList; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v19; // x21
  Il2CppObject *v20; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Object_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  const MethodInfo *v45; // x1
  BattleBuffData_SaveData_o *SaveData; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  BattleFieldEnvironmentData_SaveData_o *result; // x0

  if ( (byte_4B1881C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__, v9, v10);
    sub_1BCA7E0(&BattleFieldEnvironmentData_SaveData_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, v13, v14);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v15, v16);
    byte_4B1881C = 1;
  }
  backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
  }
  v19 = *(System_Action_object__o **)(*((_QWORD *)backgroundList + 23) + 8LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)backgroundList + 56) )
    {
      j_il2cpp_runtime_class_init_0(backgroundList, method);
      backgroundList = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)backgroundList + 23);
    v19 = (System_Action_object__o *)sub_1BCAA2C(
                                       System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                       method,
                                       v2,
                                       v3);
    System_Action_object____ctor(v19, v20, Method_BattleFieldEnvironmentData___c__GetSaveData_b__7_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)v19;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__7_0, (int64_t)v19, v22, v23, v24, v25, v26, v27);
  }
  if ( !bgmList )
    goto LABEL_15;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v19,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v31 = sub_1BCAA2C(BattleFieldEnvironmentData_SaveData_TypeInfo, v28, v29, v30);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  backgroundList = this->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_15;
  backgroundList = System_Collections_Generic_List_object___ToArray(
                     (System_Collections_Generic_List_object__o *)backgroundList,
                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__ToArray__);
  if ( !v31
    || (*(_QWORD *)(v31 + 16) = backgroundList,
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 16), (int64_t)backgroundList, v32, v33, v34, v35, v36, v37),
        (backgroundList = this->fields.bgmList) == 0LL)
    || (v38 = System_Collections_Generic_List_object___ToArray(
                (System_Collections_Generic_List_object__o *)backgroundList,
                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ToArray__),
        *(_QWORD *)(v31 + 24) = v38,
        sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 24), (int64_t)v38, v39, v40, v41, v42, v43, v44),
        (backgroundList = BattleFieldEnvironmentData__get_BuffData(this, v45)) == 0LL) )
  {
LABEL_15:
    sub_1BCAA3C(backgroundList, method);
  }
  SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)backgroundList, 0LL);
  *(_QWORD *)(v31 + 32) = SaveData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 32), (int64_t)SaveData, v47, v48, v49, v50, v51, v52);
  result = (BattleFieldEnvironmentData_SaveData_o *)v31;
  *(_DWORD *)(v31 + 40) = this->fields.addOrder;
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
  __int64 v2; // x2
  BattleFieldEnvironmentData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  BattleData_o *Data_k__BackingField; // x20
  StageEntity_o *StageEntity; // x21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  Generator_BGFromQuestPhase_o *v27; // x22
  const MethodInfo *v28; // x3
  StageEntity_o *v29; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  Generator_BGFromStage_o *v33; // x21
  const MethodInfo *v34; // x2
  BattleData_o *v35; // x21
  int32_t bgmId; // w22
  int32_t PriorityBgm; // w20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  Generator_BGM_o *v41; // x23
  const MethodInfo *v42; // x6
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  BattleFieldEnvironmentData___c_c *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *backgroundList; // x20
  System_Func_object__bool__o *_9__51_0; // x21
  Il2CppObject *v49; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  Il2CppObject *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  BattleFieldEnvironmentData___c_c *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *bgmList; // x20
  System_Func_object__bool__o *_9__51_1; // x21
  Il2CppObject *v70; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  Il2CppObject *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7

  v3 = this;
  if ( (byte_4B18821 & 1) == 0 )
  {
    sub_1BCA7E0(&Generator_BGFromQuestPhase_TypeInfo, method, v2);
    sub_1BCA7E0(&Generator_BGFromStage_TypeInfo, v4, v5);
    sub_1BCA7E0(&Generator_BGM_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____76880576, v8, v9);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____76880584,
      v10,
      v11);
    sub_1BCA7E0(&System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__InitStageField_b__51_0__, v16, v17);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__InitStageField_b__51_1__, v18, v19);
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v20, v21);
    byte_4B18821 = 1;
  }
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (StageEntity = BattleData__getStageEntity(v3->fields._Data_k__BackingField, 0LL),
        v27 = (Generator_BGFromQuestPhase_o *)sub_1BCAA2C(Generator_BGFromQuestPhase_TypeInfo, v24, v25, v26),
        Generator_BGFromQuestPhase___ctor(v27, Data_k__BackingField, StageEntity, v28),
        ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromQuestPhase_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._5_AddBackground.method)(
          v3,
          v27,
          1LL,
          v3->klass->vtable._6_AddBGM.methodPtr),
        (this = (BattleFieldEnvironmentData_o *)v3->fields._Data_k__BackingField) == 0LL)
    || (this = (BattleFieldEnvironmentData_o *)BattleData__getStageEntity((BattleData_o *)this, 0LL)) == 0LL )
  {
    sub_1BCAA3C(this, method);
  }
  v29 = (StageEntity_o *)this;
  if ( StageEntity__getChangeBgId((StageEntity_o *)this, 0LL) >= 1 )
  {
    v33 = (Generator_BGFromStage_o *)sub_1BCAA2C(Generator_BGFromStage_TypeInfo, v30, v31, v32);
    Generator_BGFromStage___ctor(v33, v29, v34);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromStage_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._5_AddBackground.method)(
      v3,
      v33,
      1LL,
      v3->klass->vtable._6_AddBGM.methodPtr);
  }
  v35 = v3->fields._Data_k__BackingField;
  bgmId = v29->fields.bgmId;
  PriorityBgm = StageEntity__GetPriorityBgm(v29, 0, 0LL);
  v41 = (Generator_BGM_o *)sub_1BCAA2C(Generator_BGM_TypeInfo, v38, v39, v40);
  Generator_BGM___ctor(v41, v35, bgmId, 0, PriorityBgm, 0LL, v42);
  ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))v3->klass->vtable._6_AddBGM.method)(
    v3,
    v41,
    1LL,
    0LL,
    v3->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  v46 = BattleFieldEnvironmentData___c_TypeInfo;
  backgroundList = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.backgroundList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v43);
    v46 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__51_0 = (System_Func_object__bool__o *)v46->static_fields->__9__51_0;
  if ( !_9__51_0 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46, v43);
      v46 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__51_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleFieldEnvironmentData_BackgroundData__bool__TypeInfo,
                                                v43,
                                                v44,
                                                v45);
    System_Func_object__bool____ctor(
      _9__51_0,
      v49,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__51_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__51_0 = (struct System_Func_BattleFieldEnvironmentData_BackgroundData__bool__o *)_9__51_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__51_0,
      (int64_t)_9__51_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  v57 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          backgroundList,
          (System_Func_TSource__bool__o *)_9__51_0,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData____76880584);
  v3->fields.baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)v57;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.baseBackground, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  v67 = BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_IEnumerable_TSource__o *)v3->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v64);
    v67 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__51_1 = (System_Func_object__bool__o *)v67->static_fields->__9__51_1;
  if ( !_9__51_1 )
  {
    if ( !v67->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v67, v64);
      v67 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v67->static_fields->__9;
    _9__51_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                v64,
                                                v65,
                                                v66);
    System_Func_object__bool____ctor(
      _9__51_1,
      v70,
      Method_BattleFieldEnvironmentData___c__InitStageField_b__51_1__,
      0LL);
    v71 = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v71->__9__51_1 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__51_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v71->__9__51_1, (int64_t)_9__51_1, v72, v73, v74, v75, v76, v77);
  }
  v78 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          bgmList,
          (System_Func_TSource__bool__o *)_9__51_1,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData____76880576);
  v3->fields.baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)v78;
  sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.baseBgm, (int64_t)v78, v79, v80, v81, v82, v83, v84);
}


bool __fastcall BattleFieldEnvironmentData__InitWave(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  struct BattleData_o *Data_k__BackingField; // x8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1

  Data_k__BackingField = this->fields._Data_k__BackingField;
  if ( !Data_k__BackingField )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  if ( (byte_4B18839 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_BgmManager__get_Instance__, method, v2);
    byte_4B18839 = 1;
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
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( !Instance )
LABEL_10:
      sub_1BCAA3C(Instance, v5);
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
  __int64 v3; // x3
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
  int *v19; // x0
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v21; // x21
  Il2CppObject *v22; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  BattleFieldEnvironmentData___c_c *v33; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v34; // x20
  System_Func_object__bool__o *_9__69_1; // x21
  Il2CppObject *v36; // x22
  PartyOrganizationUtility_o *v37; // x0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8

  if ( (byte_4B18832 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___, method, v2);
    sub_1BCA7E0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v9, v10);
    sub_1BCA7E0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_0__, v13, v14);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_1__, v15, v16);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v17, v18);
    byte_4B18832 = 1;
  }
  v19 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v19 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
  }
  v21 = *(System_Predicate_object__o **)(*((_QWORD *)v19 + 23) + 136LL);
  if ( !v21 )
  {
    if ( !v19[56] )
    {
      j_il2cpp_runtime_class_init_0(v19, method);
      v19 = (int *)BattleFieldEnvironmentData___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)v19 + 23);
    v21 = (System_Predicate_object__o *)sub_1BCAA2C(
                                          System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                          method,
                                          v2,
                                          v3);
    System_Predicate_object____ctor(v21, v22, Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_0__, 0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Predicate_BattleFieldEnvironmentData_BGMData__o *)v21;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__69_0, (int64_t)v21, v24, v25, v26, v27, v28, v29);
  }
  if ( !bgmList )
    goto LABEL_23;
  System_Collections_Generic_List_object___RemoveAll(
    bgmList,
    (System_Predicate_T__o *)v21,
    (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__);
  v33 = BattleFieldEnvironmentData___c_TypeInfo;
  v34 = this->fields.bgmList;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v30);
    v33 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__69_1 = (System_Func_object__bool__o *)v33->static_fields->__9__69_1;
  if ( !_9__69_1 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, v30);
      v33 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v33->static_fields->__9;
    _9__69_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo,
                                                v30,
                                                v31,
                                                v32);
    System_Func_object__bool____ctor(
      _9__69_1,
      v36,
      Method_BattleFieldEnvironmentData___c__RemoveAfterResetBGM_b__69_1__,
      0LL);
    v37 = (PartyOrganizationUtility_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    v37[1].klass = (PartyOrganizationUtility_c *)_9__69_1;
    sub_1BCA784(v37 + 1, (int64_t)_9__69_1, v38, v39, v40, v41, v42, v43);
  }
  if ( System_Linq_Enumerable__Count_object__49476864(
         (System_Collections_Generic_IEnumerable_TSource__o *)v34,
         (System_Func_TSource__bool__o *)_9__69_1,
         (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_BattleFieldEnvironmentData_BGMData___) <= 0 )
  {
    v19 = (int *)this->fields.bgmList;
    if ( v19 )
    {
      method = (const MethodInfo *)this->fields.baseBgm;
      v50 = *((_QWORD *)v19 + 2);
      v51 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
      ++v19[7];
      if ( v50 )
      {
        v52 = v19[6];
        if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v19,
            (Il2CppObject *)method,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
        }
        else
        {
          v53 = v50 + 8 * v52;
          v19[6] = v52 + 1;
          *(_QWORD *)(v53 + 32) = method;
          sub_1BCA784((PartyOrganizationUtility_o *)(v53 + 32), (int64_t)method, v44, v45, v46, v47, v48, v49);
        }
        goto LABEL_22;
      }
    }
LABEL_23:
    sub_1BCAA3C(v19, method);
  }
LABEL_22:
  BattleFieldEnvironmentData__SortBGM(this, method);
  return this->fields._CurBGM_k__BackingField;
}


bool __fastcall BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Predicate_object__o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1

  if ( (byte_4B18835 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__75_0__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v5, v6);
    sub_1BCA7E0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v7, v8);
    byte_4B18835 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v10 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                        method,
                                        v2,
                                        v3);
  System_Predicate_object____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff_b__75_0__,
    0LL);
  if ( !bgmList )
    sub_1BCAA3C(v11, v12);
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v10,
         (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) >= 1 )
    BattleFieldEnvironmentData__SortBGM(this, v13);
  return BattleFieldEnvironmentData__get_IsChangeBgm(this, v13);
}


void __fastcall BattleFieldEnvironmentData__RemoveBgmRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  BattleFieldEnvironmentData___c_c *v33; // x0
  System_Func_object__bool__o *_9__71_0; // x21
  Il2CppObject *v35; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  System_Func_object__object__o *v47; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_IEnumerable_TResult__c *klass; // x8
  System_Collections_Generic_IEnumerable_TResult__o *v51; // x20
  __int64 v52; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v55; // x1
  __int64 v56; // x20
  int i; // w24
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x3
  __int64 v65; // x21
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  int64_t v70; // x0
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  System_Collections_Generic_List_object__o *bgmList; // x22
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Predicate_T__o *v81; // x23
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  const MethodInfo *v88; // x1

  if ( (byte_4B18834 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__, buffArray, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v7, v8);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v21, v22);
    sub_1BCA7E0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__71_0__, v25, v26);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__DisplayClass71_0__RemoveBgmRelateBuff_b__1__, v27, v28);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo, v29, v30);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v31, v32);
    byte_4B18834 = 1;
  }
  v33 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, buffArray);
    v33 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__71_0 = (System_Func_object__bool__o *)v33->static_fields->__9__71_0;
  if ( !_9__71_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33, buffArray);
      v33 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__71_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleBuffData_BuffData__bool__TypeInfo,
                                                buffArray,
                                                method,
                                                v3);
    System_Func_object__bool____ctor(
      _9__71_0,
      v35,
      Method_BattleFieldEnvironmentData___c__RemoveBgmRelateBuff_b__71_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__71_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__71_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__71_0,
      (int64_t)_9__71_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)buffArray,
          (System_Func_TSource__bool__o *)_9__71_0,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v47 = (System_Func_object__object__o *)sub_1BCAA2C(
                                           System_Func_BattleBuffData_BuffData__BuffUniqueValue__TypeInfo,
                                           v44,
                                           v45,
                                           v46);
  System_Func_object__object____ctor(
    v47,
    (Il2CppObject *)this,
    Method_BattleFieldEnvironmentData_GetChangeBuffUniqueVal__,
    0LL);
  v48 = System_Linq_Enumerable__Select_object__object_(
          v43,
          (System_Func_TSource__TResult__o *)v47,
          (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BuffUniqueValue___);
  if ( !v48 )
    sub_1BCAA3C(0LL, v49);
  klass = v48->klass;
  v51 = v48;
  v52 = *(unsigned __int16 *)(&v48->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v48->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BuffUniqueValue__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo )
    {
      --v52;
      p_offset += 4;
      if ( !v52 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C1C7C0(v48, System_Collections_Generic_IEnumerable_BuffUniqueValue__TypeInfo, 0LL);
  }
  v56 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TResult__o *, _QWORD))p_method)(
          v51,
          *(_QWORD *)(p_method + 8));
  if ( !v56 )
    sub_1BCAA3C(0LL, v55);
  for ( i = 0;
        ;
        i += System_Collections_Generic_List_object___RemoveAll(
               bgmList,
               v81,
               (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__) )
  {
    v58 = *(_QWORD *)v56;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_22;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_22:
      v61 = sub_1C1C7C0(v56, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v56, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v65 = sub_1BCAA2C(BattleFieldEnvironmentData___c__DisplayClass71_0_TypeInfo, v62, v63, v64);
    System_Object___ctor((Il2CppObject *)v65, 0LL);
    v66 = *(_QWORD *)v56;
    v67 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BuffUniqueValue__c **)v68 - 1) != System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_29;
      }
      v69 = v66 + 16LL * *v68 + 312;
    }
    else
    {
LABEL_29:
      v69 = sub_1C1C7C0(v56, System_Collections_Generic_IEnumerator_BuffUniqueValue__TypeInfo, 0LL);
    }
    v70 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v56, *(_QWORD *)(v69 + 8));
    if ( !v65 )
      sub_1BCAA3C(v70, v70);
    *(_QWORD *)(v65 + 16) = v70;
    sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 16), v70, v71, v72, v73, v74, v75, v76);
    bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
    v81 = (System_Predicate_T__o *)sub_1BCAA2C(
                                     System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                     v78,
                                     v79,
                                     v80);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)v81,
      (Il2CppObject *)v65,
      Method_BattleFieldEnvironmentData___c__DisplayClass71_0__RemoveBgmRelateBuff_b__1__,
      0LL);
    if ( !bgmList )
      sub_1BCAA3C(v82, v83);
  }
  v84 = *(_QWORD *)v56;
  v85 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
  {
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_38;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_38:
    v87 = sub_1C1C7C0(v56, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v56, *(_QWORD *)(v87 + 8));
  if ( i > 0 )
    BattleFieldEnvironmentData__SortBGM(this, v88);
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
      sub_1BCAA3C(0LL, v3);
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
    sub_1BCAA3C(this, deadSvtData);
  }
  AllBGMChangeBuffArray = BattleBuffData__GetAllBGMChangeBuffArray((BattleBuffData_o *)this, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_43534056(v3, AllBGMChangeBuffArray, 1, v5);
}


void __fastcall BattleFieldEnvironmentData__RemoveRelateBuff(
        BattleFieldEnvironmentData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x20
  BattleFieldEnvironmentData_o *v19; // x0
  const MethodInfo *v20; // x2
  BuffUniqueValue_o *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  System_Collections_Generic_List_object__o *backgroundList; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Predicate_object__o *v33; // x22
  int32_t v34; // w0
  System_Collections_Generic_List_object__o *bgmList; // x22
  int32_t v36; // w21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  System_Predicate_object__o *v40; // x23
  const MethodInfo *v41; // x2

  if ( (byte_4B18833 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__,
      buff,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__, v6, v7);
    sub_1BCA7E0(&System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__0__, v12, v13);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__1__, v14, v15);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c__DisplayClass70_0_TypeInfo, v16, v17);
    byte_4B18833 = 1;
  }
  v18 = sub_1BCAA2C(BattleFieldEnvironmentData___c__DisplayClass70_0_TypeInfo, buff, method, v3);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  v21 = BattleFieldEnvironmentData__GetChangeBuffUniqueVal(v19, buff, v20);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 16) = v21;
  sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 16), (int64_t)v21, v23, v24, v25, v26, v27, v28);
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v33 = (System_Predicate_object__o *)sub_1BCAA2C(
                                        System_Predicate_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                        v30,
                                        v31,
                                        v32);
  System_Predicate_object____ctor(
    v33,
    (Il2CppObject *)v18,
    Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__0__,
    0LL);
  if ( !backgroundList
    || (v34 = System_Collections_Generic_List_object___RemoveAll(
                backgroundList,
                (System_Predicate_T__o *)v33,
                (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__RemoveAll__),
        bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList,
        v36 = v34,
        v40 = (System_Predicate_object__o *)sub_1BCAA2C(
                                              System_Predicate_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                              v37,
                                              v38,
                                              v39),
        System_Predicate_object____ctor(
          v40,
          (Il2CppObject *)v18,
          Method_BattleFieldEnvironmentData___c__DisplayClass70_0__RemoveRelateBuff_b__1__,
          0LL),
        !bgmList) )
  {
LABEL_9:
    sub_1BCAA3C(v21, v22);
  }
  if ( System_Collections_Generic_List_object___RemoveAll(
         bgmList,
         (System_Predicate_T__o *)v40,
         (const MethodInfo_35A32B8 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__RemoveAll__)
     + v36 >= 1 )
    BattleFieldEnvironmentData__SortFieldData(this, 3, v41);
}


void __fastcall BattleFieldEnvironmentData__ResetFieldInfo(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleFieldEnvironmentData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__o *backgroundList; // x8
  int32_t size; // w2
  int v8; // w9
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x8
  int32_t v10; // w2
  int v11; // w9

  v3 = this;
  if ( (byte_4B18822 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Clear__, method, v2);
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(
                                             &Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Clear__,
                                             v4,
                                             v5);
    byte_4B18822 = 1;
  }
  backgroundList = v3->fields.backgroundList;
  if ( !backgroundList )
    goto LABEL_10;
  size = backgroundList->fields._size;
  v8 = backgroundList->fields._version + 1;
  backgroundList->fields._size = 0;
  backgroundList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)backgroundList->fields._items, 0, size, 0LL);
  bgmList = v3->fields.bgmList;
  if ( !bgmList )
LABEL_10:
    sub_1BCAA3C(this, method);
  v10 = bgmList->fields._size;
  v11 = bgmList->fields._version + 1;
  bgmList->fields._size = 0;
  bgmList->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)bgmList->fields._items, 0, v10, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SetSaveData(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_SaveData_o *sv,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *backgroundList; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_IEnumerable_T__o *bgmData; // x21
  BattleFieldEnvironmentData___c_c *v25; // x0
  System_Action_object__o *_9__8_0; // x22
  Il2CppObject *v27; // x23
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x2
  int32_t v36; // w20
  int32_t v37; // w21
  bool ExistOverwriteBgIndividuality; // w22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Generator_Background_o *v42; // x23
  const MethodInfo *v43; // x5
  struct BattleData_o *Data_k__BackingField; // x20
  struct OverwriteBattleBgmData_o *overwriteBgmData_k__BackingField; // x21
  int32_t BgmId_k__BackingField; // w22
  bool allowSubBgmPlaying; // w0
  System_String_o *BgmName_k__BackingField; // x21
  bool v49; // w23
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  Generator_BGM_o *v53; // x24
  const MethodInfo *v54; // x6

  if ( (byte_4B1881D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, sv, method);
    sub_1BCA7E0(&Generator_BGM_TypeInfo, v5, v6);
    sub_1BCA7E0(&Generator_Background_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__, v13, v14);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, v15, v16);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v17, v18);
    byte_4B1881D = 1;
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
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__AddRange__);
    }
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)sv->fields.bgmData, 0LL) )
    {
      bgmData = (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData;
      v25 = BattleFieldEnvironmentData___c_TypeInfo;
      if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v21);
        v25 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      _9__8_0 = (System_Action_object__o *)v25->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v25->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v25, v21);
          v25 = BattleFieldEnvironmentData___c_TypeInfo;
        }
        v27 = (Il2CppObject *)v25->static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_1BCAA2C(
                                               System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                               v21,
                                               v22,
                                               v23);
        System_Action_object____ctor(_9__8_0, v27, Method_BattleFieldEnvironmentData___c__SetSaveData_b__8_0__, 0LL);
        static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_BattleFieldEnvironmentData_BGMData__o *)_9__8_0;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&static_fields->__9__8_0,
          (int64_t)_9__8_0,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
      }
      BasicHelper__ForEach_object_(
        bgmData,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleFieldEnvironmentData_BGMData___);
      backgroundList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
      if ( !backgroundList )
        goto LABEL_27;
      System_Collections_Generic_List_object___AddRange(
        backgroundList,
        (System_Collections_Generic_IEnumerable_T__o *)sv->fields.bgmData,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__AddRange__);
    }
    backgroundList = (System_Collections_Generic_List_object__o *)BattleFieldEnvironmentData__get_BuffData(this, v21);
    if ( backgroundList )
    {
      BattleBuffData__setSaveData((BattleBuffData_o *)backgroundList, sv->fields.buffData, 0LL);
      this->fields.addOrder = sv->fields.addOrder;
      BattleFieldEnvironmentData__SortFieldData(this, 3, v35);
      return;
    }
LABEL_27:
    sub_1BCAA3C(backgroundList, v19);
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
    v36 = (int)backgroundList;
    backgroundList = (System_Collections_Generic_List_object__o *)BattlePerformance__get_CurrentGroundType(
                                                                    this->fields._Perf_k__BackingField,
                                                                    0LL);
    if ( !this->fields._Data_k__BackingField )
      goto LABEL_27;
    v37 = (int)backgroundList;
    ExistOverwriteBgIndividuality = BattleData__get_ExistOverwriteBgIndividuality(
                                      this->fields._Data_k__BackingField,
                                      0LL);
    v42 = (Generator_Background_o *)sub_1BCAA2C(Generator_Background_TypeInfo, v39, v40, v41);
    Generator_Background___ctor(v42, v36, v37, 0, ExistOverwriteBgIndividuality, v43);
    backgroundList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_Background_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
                                                                    this,
                                                                    v42,
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
    v49 = allowSubBgmPlaying;
    v53 = (Generator_BGM_o *)sub_1BCAA2C(Generator_BGM_TypeInfo, v50, v51, v52);
    Generator_BGM___ctor(v53, Data_k__BackingField, BgmId_k__BackingField, v49, 0, BgmName_k__BackingField, v54);
    ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGM_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
      this,
      v53,
      2LL,
      0LL,
      this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
}


void __fastcall BattleFieldEnvironmentData__SortBGM(BattleFieldEnvironmentData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *bgmList; // x20
  System_Action_object__o *v18; // x21
  BattleData_o *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_object__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Comparison_T__o *v25; // x21
  struct BattleFieldEnvironmentData_BGMData_o *baseBgm; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct BattleFieldEnvironmentData_BGMData_o **p_CurBGM_k__BackingField; // x19

  if ( (byte_4B18837 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData_CompareData__, v5, v6);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData__SortBGM_b__78_0__, v7, v8);
    sub_1BCA7E0(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v15, v16);
    byte_4B18837 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v18 = (System_Action_object__o *)sub_1BCAA2C(
                                     System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                     method,
                                     v2,
                                     v3);
  System_Action_object____ctor(v18, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__78_0__, 0LL);
  if ( !bgmList )
    goto LABEL_9;
  System_Collections_Generic_List_object___ForEach(
    bgmList,
    (System_Action_T__o *)v18,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v21 = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  v25 = (System_Comparison_T__o *)sub_1BCAA2C(
                                    System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                    v22,
                                    v23,
                                    v24);
  System_Comparison_object____ctor(v25, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !v21 )
    goto LABEL_9;
  System_Collections_Generic_List_object___Sort_56244000(
    v21,
    v25,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
  baseBgm = (struct BattleFieldEnvironmentData_BGMData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                             (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.bgmList,
                                                             (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BGMData___);
  if ( !baseBgm )
    baseBgm = this->fields.baseBgm;
  this->fields._CurBGM_k__BackingField = baseBgm;
  p_CurBGM_k__BackingField = &this->fields._CurBGM_k__BackingField;
  sub_1BCA784((PartyOrganizationUtility_o *)p_CurBGM_k__BackingField, (int64_t)baseBgm, v27, v28, v29, v30, v31, v32);
  v19 = (BattleData_o *)*(p_CurBGM_k__BackingField - 3);
  if ( !v19 )
LABEL_9:
    sub_1BCAA3C(v19, v20);
  BattleData__SetOverrideBgmData(v19, *p_CurBGM_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__SortBGM_43518552(
        BattleFieldEnvironmentData_o *this,
        System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *targetBgmList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_object__o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Comparison_T__o *v22; // x21

  if ( (byte_4B18838 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo, targetBgmList, method);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData_CompareData__, v6, v7);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData__SortBGM_b__79_0__, v8, v9);
    sub_1BCA7E0(&System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__, v14, v15);
    byte_4B18838 = 1;
  }
  v16 = (System_Action_object__o *)sub_1BCAA2C(
                                     System_Action_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                     targetBgmList,
                                     method,
                                     v3);
  System_Action_object____ctor(v16, (Il2CppObject *)this, Method_BattleFieldEnvironmentData__SortBGM_b__79_0__, 0LL);
  if ( !targetBgmList )
    sub_1BCAA3C(v17, v18);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    (System_Action_T__o *)v16,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__ForEach__);
  v22 = (System_Comparison_T__o *)sub_1BCAA2C(
                                    System_Comparison_BattleFieldEnvironmentData_BGMData__TypeInfo,
                                    v19,
                                    v20,
                                    v21);
  System_Comparison_object____ctor(v22, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  System_Collections_Generic_List_object___Sort_56244000(
    (System_Collections_Generic_List_object__o *)targetBgmList,
    v22,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Sort__);
}


void __fastcall BattleFieldEnvironmentData__SortBackGround(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *backgroundList; // x20
  System_Comparison_T__o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  struct BattleFieldEnvironmentData_BackgroundData_o *baseBackground; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B18836 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData_CompareData__, method, v2);
    sub_1BCA7E0(&System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__, v9, v10);
    byte_4B18836 = 1;
  }
  backgroundList = (System_Collections_Generic_List_object__o *)this->fields.backgroundList;
  v12 = (System_Comparison_T__o *)sub_1BCAA2C(
                                    System_Comparison_BattleFieldEnvironmentData_BackgroundData__TypeInfo,
                                    method,
                                    v2,
                                    v3);
  System_Comparison_object____ctor(v12, (Il2CppObject *)this, Method_BattleFieldEnvironmentData_CompareData__, 0LL);
  if ( !backgroundList )
    sub_1BCAA3C(v13, v14);
  System_Collections_Generic_List_object___Sort_56244000(
    backgroundList,
    v12,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BackgroundData__Sort__);
  baseBackground = (struct BattleFieldEnvironmentData_BackgroundData_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                                                           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.backgroundList,
                                                                           (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleFieldEnvironmentData_BackgroundData___);
  if ( !baseBackground )
    baseBackground = this->fields.baseBackground;
  this->fields._CurBackGround_k__BackingField = baseBackground;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CurBackGround_k__BackingField,
    (int64_t)baseBackground,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
    sub_1BCAA3C(BuffData, v8);
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
    sub_1BCAA3C(0LL, v6);
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
    sub_1BCAA3C(0LL, v8);
  v9 = BattleBuffData__SubBuffFromType(BuffData, buffId, 1, 0LL);
  return BattleFieldEnvironmentData__ExecRemoveBuffAfterProc(this, v9, isAddAfterTask, v10);
}


void __fastcall BattleFieldEnvironmentData__TakeOverChangeField(
        BattleFieldEnvironmentData_o *this,
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
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  BattleBuffData_o *BuffData; // x0
  __int64 v23; // x1
  BattleBuffData_FieldChangeData_array *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  BattleFieldEnvironmentData___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  System_Func_object__bool__o *_9__54_0; // x21
  Il2CppObject *v31; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v40; // x19
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  __int64 v44; // x1
  __int64 v45; // x19
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  BattleBuffData_FieldChangeData_o *v58; // x21
  Generator_BGFromFieldChangeBGBuff_o *v59; // x22
  const MethodInfo *v60; // x2
  BattleData_o *Data_k__BackingField; // x23
  Generator_BGMFromFieldChangeBGBuff_o *v62; // x22
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0

  if ( (byte_4B18823 & 1) == 0 )
  {
    sub_1BCA7E0(&Generator_BGFromFieldChangeBGBuff_TypeInfo, method, v2);
    sub_1BCA7E0(&Generator_BGMFromFieldChangeBGBuff_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___, v6, v7);
    sub_1BCA7E0(&System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__54_0__, v18, v19);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v20, v21);
    byte_4B18823 = 1;
  }
  BuffData = BattleFieldEnvironmentData__get_BuffData(this, method);
  if ( !BuffData )
    goto LABEL_45;
  v24 = BattleBuffData__GetFieldChangeArray(BuffData, 0LL);
  v28 = BattleFieldEnvironmentData___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v24;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v25);
    v28 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__54_0 = (System_Func_object__bool__o *)v28->static_fields->__9__54_0;
  if ( !_9__54_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28, v25);
      v28 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v31 = (Il2CppObject *)v28->static_fields->__9;
    _9__54_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleBuffData_FieldChangeData__bool__TypeInfo,
                                                v25,
                                                v26,
                                                v27);
    System_Func_object__bool____ctor(
      _9__54_0,
      v31,
      Method_BattleFieldEnvironmentData___c__TakeOverChangeField_b__54_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__54_0 = (struct System_Func_BattleBuffData_FieldChangeData__bool__o *)_9__54_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__54_0,
      (int64_t)_9__54_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  BuffData = (BattleBuffData_o *)System_Linq_Enumerable__Where_object_(
                                   v29,
                                   (System_Func_TSource__bool__o *)_9__54_0,
                                   (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleBuffData_FieldChangeData___);
  if ( !BuffData )
LABEL_45:
    sub_1BCAA3C(BuffData, v23);
  klass = BuffData->klass;
  v40 = BuffData;
  v41 = *(unsigned __int16 *)(&BuffData->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&BuffData->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo )
    {
      --v41;
      p_offset += 4;
      if ( !v41 )
        goto LABEL_15;
    }
    v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_15:
    v43 = sub_1C1C7C0(BuffData, System_Collections_Generic_IEnumerable_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
  }
  v45 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v43)(v40, *(_QWORD *)(v43 + 8));
  if ( !v45 )
    sub_1BCAA3C(0LL, v44);
  while ( 1 )
  {
    v46 = *(_QWORD *)v45;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v48 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_22;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_22:
      v49 = sub_1C1C7C0(v45, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v45, *(_QWORD *)(v49 + 8)) & 1) == 0 )
      break;
    v50 = *(_QWORD *)v45;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__c **)v52 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_29;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_29:
      v53 = sub_1C1C7C0(v45, System_Collections_Generic_IEnumerator_BattleBuffData_FieldChangeData__TypeInfo, 0LL);
    }
    v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v45, *(_QWORD *)(v53 + 8));
    v58 = (BattleBuffData_FieldChangeData_o *)v54;
    if ( !v54 )
      sub_1BCAA3C(0LL, v55);
    if ( *(int *)(v54 + 24) >= 1 )
    {
      v59 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1BCAA2C(
                                                     Generator_BGFromFieldChangeBGBuff_TypeInfo,
                                                     v55,
                                                     v56,
                                                     v57);
      Generator_BGFromFieldChangeBGBuff___ctor(v59, v58, v60);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGFromFieldChangeBGBuff_o *, __int64, Il2CppMethodPointer))this->klass->vtable._5_AddBackground.method)(
        this,
        v59,
        2LL,
        this->klass->vtable._6_AddBGM.methodPtr);
    }
    if ( v58->fields.bgmId > 0 || !System_String__IsNullOrEmpty(v58->fields.bgmName, 0LL) )
    {
      Data_k__BackingField = this->fields._Data_k__BackingField;
      v62 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1BCAA2C(
                                                      Generator_BGMFromFieldChangeBGBuff_TypeInfo,
                                                      v55,
                                                      v56,
                                                      v57);
      Generator_BGMFromFieldChangeBGBuff___ctor(v62, Data_k__BackingField, v58, v63);
      ((void (__fastcall *)(BattleFieldEnvironmentData_o *, Generator_BGMFromFieldChangeBGBuff_o *, __int64, _QWORD, Il2CppMethodPointer))this->klass->vtable._6_AddBGM.method)(
        this,
        v62,
        2LL,
        0LL,
        this->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
    }
  }
  v64 = *(_QWORD *)v45;
  v65 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_41;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_41:
    v67 = sub_1C1C7C0(v45, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v67)(v45, *(_QWORD *)(v67 + 8));
}


void __fastcall BattleFieldEnvironmentData__TakeOverPlayerServantChangeBgm(
        BattleFieldEnvironmentData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleFieldEnvironmentData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct BattleData_o *Data_k__BackingField; // x8
  BattleFieldEnvironmentData_o *v15; // x0
  const MethodInfo *v16; // x2
  __int64 v17; // x2
  __int64 v18; // x3
  struct BattleData_o *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *player_datalist; // x20
  BattleFieldEnvironmentData___c_c *v21; // x0
  System_Func_object__bool__o *_9__55_0; // x21
  Il2CppObject *v23; // x22
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_BattleServantData__o *v31; // x0
  const MethodInfo *v32; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v33; // x0
  System_Object_array *v34; // x1
  const MethodInfo *v35; // x2

  v3 = this;
  if ( (byte_4B18824 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleServantData___, v4, v5);
    sub_1BCA7E0(&System_Func_BattleServantData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__55_0__, v10, v11);
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v12, v13);
    byte_4B18824 = 1;
  }
  Data_k__BackingField = v3->fields._Data_k__BackingField;
  if ( !Data_k__BackingField
    || (this = (BattleFieldEnvironmentData_o *)Data_k__BackingField->fields.player_datalist) == 0LL
    || (v15 = (BattleFieldEnvironmentData_o *)System_Collections_Generic_List_object___ToArray(
                                                (System_Collections_Generic_List_object__o *)this,
                                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__),
        BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(v15, (BattleServantData_array *)v15, v16),
        (v19 = v3->fields._Data_k__BackingField) == 0LL) )
  {
    sub_1BCAA3C(this, method);
  }
  player_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v19->fields.player_datalist;
  v21 = BattleFieldEnvironmentData___c_TypeInfo;
  if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, method);
    v21 = BattleFieldEnvironmentData___c_TypeInfo;
  }
  _9__55_0 = (System_Func_object__bool__o *)v21->static_fields->__9__55_0;
  if ( !_9__55_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21, method);
      v21 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__55_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_BattleServantData__bool__TypeInfo,
                                                method,
                                                v17,
                                                v18);
    System_Func_object__bool____ctor(
      _9__55_0,
      v23,
      Method_BattleFieldEnvironmentData___c__TakeOverPlayerServantChangeBgm_b__55_0__,
      0LL);
    static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
    static_fields->__9__55_0 = (struct System_Func_BattleServantData__bool__o *)_9__55_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__55_0,
      (int64_t)_9__55_0,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_BattleServantData__o *)System_Linq_Enumerable__Where_object_(
                                                                         player_datalist,
                                                                         (System_Func_TSource__bool__o *)_9__55_0,
                                                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleServantData___);
  v33 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(v31, v32);
  v34 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v33,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(v3, (BattleBuffData_BuffData_array *)v34, v35);
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
    sub_1BCAA3C(0LL, v8);
  v9 = BattleBuffData__CommonTurnProgressing(BuffData, logic, isEndEnemyTurn, 0, 0LL);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_43534056(this, v9, 1, v10);
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
    sub_1BCAA3C(Perf_k__BackingField, method);
  }
  BattlePerformance__updateStatus(Perf_k__BackingField, 0LL);
}


void __fastcall BattleFieldEnvironmentData__UpdateBgmBuffPriorityOnInitWave(
        BattleFieldEnvironmentData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Collections_Generic_IEnumerable_T__o *v14; // x19
  BattleFieldEnvironmentData___c_c *v15; // x0
  System_Action_object__o *_9__56_0; // x20
  Il2CppObject *v17; // x21
  struct BattleFieldEnvironmentData___c_StaticFields *static_fields; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4B18825 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_BattleBuffData_BuffData__TypeInfo, servantArray, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v4, v5);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__56_0__, v6, v7);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v8, v9);
    byte_4B18825 = 1;
  }
  v10 = BattleFieldEnvironmentData__EnumerateValidBgmChangeBuff(
          (System_Collections_Generic_IEnumerable_BattleServantData__o *)servantArray,
          (const MethodInfo *)servantArray);
  if ( v10 )
  {
    v14 = (System_Collections_Generic_IEnumerable_T__o *)v10;
    v15 = BattleFieldEnvironmentData___c_TypeInfo;
    if ( !BattleFieldEnvironmentData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFieldEnvironmentData___c_TypeInfo, v11);
      v15 = BattleFieldEnvironmentData___c_TypeInfo;
    }
    _9__56_0 = (System_Action_object__o *)v15->static_fields->__9__56_0;
    if ( !_9__56_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15, v11);
        v15 = BattleFieldEnvironmentData___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__56_0 = (System_Action_object__o *)sub_1BCAA2C(System_Action_BattleBuffData_BuffData__TypeInfo, v11, v12, v13);
      System_Action_object____ctor(
        _9__56_0,
        v17,
        Method_BattleFieldEnvironmentData___c__UpdateBgmBuffPriorityOnInitWave_b__56_0__,
        0LL);
      static_fields = BattleFieldEnvironmentData___c_TypeInfo->static_fields;
      static_fields->__9__56_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__56_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__56_0,
        (int64_t)_9__56_0,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
    }
    BasicHelper__ForEach_object_(
      v14,
      (System_Action_T__o *)_9__56_0,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
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
    sub_1BCAA3C(this, buff);
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
    sub_1BCAA3C(this, 0LL);
  return BattleFieldEnvironmentData_BGMData__IsRemove(x, this->fields._Data_k__BackingField, method);
}


void __fastcall BattleFieldEnvironmentData___SortBGM_b__78_0(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  __int64 v3; // x3
  PartyOrganizationUtility_o *p_fields; // x19
  BattleBuffData_o *v6; // x20
  struct BattleBuffData_o *buffData; // t1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1881E & 1) == 0 )
  {
    sub_1BCA7E0(&BattleBuffData_TypeInfo, method, v2);
    byte_4B1881E = 1;
  }
  buffData = this->fields._buffData;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  v6 = buffData;
  if ( !buffData )
  {
    v6 = (BattleBuffData_o *)sub_1BCAA2C(BattleBuffData_TypeInfo, method, v2, v3);
    BattleBuffData___ctor(v6, 0LL);
    p_fields->klass = (PartyOrganizationUtility_c *)v6;
    sub_1BCA784(p_fields, (int64_t)v6, v8, v9, v10, v11, v12, v13);
  }
  return v6;
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  BattleFieldEnvironmentData_o *v3; // x19
  struct BattleFieldEnvironmentData_BGMData_o *CurBGM_k__BackingField; // x8
  struct OverwriteBattleBgmData_o *BgmData_k__BackingField; // x8
  System_String_o *BgmName_k__BackingField; // x19
  System_String_o *BgmName; // x0

  v3 = this;
  if ( (byte_4B1881F & 1) == 0 )
  {
    this = (BattleFieldEnvironmentData_o *)sub_1BCA7E0(
                                             &Method_SingletonMonoBehaviour_BgmManager__get_Instance__,
                                             method,
                                             v2);
    byte_4B1881F = 1;
  }
  CurBGM_k__BackingField = v3->fields._CurBGM_k__BackingField;
  if ( !CurBGM_k__BackingField )
    goto LABEL_8;
  BgmData_k__BackingField = CurBGM_k__BackingField->fields._BgmData_k__BackingField;
  if ( BgmData_k__BackingField )
  {
    BgmName_k__BackingField = BgmData_k__BackingField->fields._BgmName_k__BackingField;
    this = (BattleFieldEnvironmentData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_BgmManager__get_Instance__);
    if ( this )
    {
      BgmName = BgmManager__get_BgmName((BgmManager_o *)this, 0LL);
      LOBYTE(BgmData_k__BackingField) = !BasicHelper__EqualExceptNullOrEmpty(BgmName_k__BackingField, BgmName, 0LL);
      return (unsigned __int8)BgmData_k__BackingField & 1;
    }
LABEL_8:
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(CurBackGround_k__BackingField, method);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  p_questCommonIndividualityCache = &this->fields.questCommonIndividualityCache;
  questCommonIndividualityCache = this->fields.questCommonIndividualityCache;
  if ( !questCommonIndividualityCache )
  {
    questCommonIndividualityCache = BattleFieldEnvironmentData__GetQuestCommonIndividuality(this, method);
    this->fields.questCommonIndividualityCache = questCommonIndividualityCache;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)p_questCommonIndividualityCache,
      (int64_t)questCommonIndividualityCache,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
  }
  return questCommonIndividualityCache;
}


void __fastcall BattleFieldEnvironmentData__set_CurBGM(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BGMData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CurBGM_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CurBGM_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData__set_CurBackGround(
        BattleFieldEnvironmentData_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CurBackGround_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._CurBackGround_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData__set_Data(
        BattleFieldEnvironmentData_o *this,
        BattleData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Data_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Data_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData__set_Logic(
        BattleFieldEnvironmentData_o *this,
        BattleLogic_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Logic_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Logic_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData__set_Perf(
        BattleFieldEnvironmentData_o *this,
        BattlePerformance_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Perf_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Perf_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleFieldEnvironmentData_BGMData___ctor(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleFieldEnvironmentData_BGMData___ctor_43514684(
        BattleFieldEnvironmentData_BGMData_o *this,
        OverwriteBattleBgmData_o *bgmData,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  this->fields.isActive = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgmData_k__BackingField = bgmData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BgmData_k__BackingField,
    (int64_t)bgmData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


System_Int32_array *__fastcall BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_cachedBuffIndividuality; // x19
  System_Int32_array *cachedBuffIndividuality; // x21
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  const MethodInfo *v7; // x2
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  p_cachedBuffIndividuality = (PartyOrganizationUtility_o *)&this->fields.cachedBuffIndividuality;
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
      sub_1BCAA3C(comData, fieldEnv);
    }
    cachedBuffIndividuality = BattleFieldEnvironmentData__GetLinkBuffIndividuality(
                                fieldEnv,
                                (BuffUniqueValue_o *)comData,
                                v7);
    p_cachedBuffIndividuality->klass = (PartyOrganizationUtility_c *)cachedBuffIndividuality;
    sub_1BCA784(p_cachedBuffIndividuality, (int64_t)cachedBuffIndividuality, v8, v9, v10, v11, v12, v13);
  }
  return cachedBuffIndividuality;
}


bool __fastcall BattleFieldEnvironmentData_BGMData__IsRemove(
        BattleFieldEnvironmentData_BGMData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x19
  const MethodInfo *v13; // x1
  BattleFieldEnvironmentData_CommonData_o *comData; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x8
  BattleServantData_o *ServantData; // x0
  System_Object_array *AllBGMChangeBuffArray; // x20
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  System_Func_object__bool__o *v27; // x21

  if ( (byte_4B18846 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_BattleBuffData_BuffData____76840520, data, method);
    sub_1BCA7E0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__, v8, v9);
    sub_1BCA7E0(&BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo, v10, v11);
    byte_4B18846 = 1;
  }
  v12 = sub_1BCAA2C(BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0_TypeInfo, data, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  comData = this->fields.comData;
  if ( !comData )
    goto LABEL_14;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleFieldEnvironmentData_CommonData__get_UniqueVal(
                                                         comData,
                                                         v13);
  if ( !v12 )
    goto LABEL_14;
  *(_QWORD *)(v12 + 16) = comData;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)comData, v15, v16, v17, v18, v19, v20);
  v21 = *(_QWORD *)(v12 + 16);
  if ( !v21 )
    goto LABEL_14;
  v13 = (const MethodInfo *)*(unsigned int *)(v21 + 20);
  if ( ((unsigned int)v13 & 0x80000000) != 0 )
    return 0;
  if ( !data )
    goto LABEL_14;
  ServantData = BattleData__getServantData(data, (int32_t)v13, 0LL);
  if ( !ServantData )
    return 1;
  comData = (BattleFieldEnvironmentData_CommonData_o *)BattleServantData__get_BuffData(ServantData, 0LL);
  if ( !comData )
LABEL_14:
    sub_1BCAA3C(comData, v13);
  AllBGMChangeBuffArray = (System_Object_array *)BattleBuffData__GetAllBGMChangeBuffArray(
                                                   (BattleBuffData_o *)comData,
                                                   0LL);
  v27 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleBuffData_BuffData__bool__TypeInfo, v24, v25, v26);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v12,
    Method_BattleFieldEnvironmentData_BGMData___c__DisplayClass13_0__IsRemove_b__0__,
    0LL);
  return !BasicHelper__Any_object__49274176(
            AllBGMChangeBuffArray,
            (System_Func_T__bool__o *)v27,
            (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_BattleBuffData_BuffData____76840520);
}


void __fastcall BattleFieldEnvironmentData_BGMData__PreGetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_SaveData_o *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  v3 = OverwriteBattleBgmData__ConvertToSaveData(this->fields._BgmData_k__BackingField, 0LL);
  this->fields.bgmSaveData = v3;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.bgmSaveData, (int64_t)v3, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleFieldEnvironmentData_BGMData__PreSetSave(
        BattleFieldEnvironmentData_BGMData_o *this,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(this->fields.bgmSaveData, 0LL);
  this->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BgmData_k__BackingField,
    (int64_t)InstanceFromSaveData,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
    sub_1BCAA3C(this, fieldEnv);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BgmData_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._BgmData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1BCAA3C(this, x);
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
  __int64 v3; // x3
  BgResourceData_o *cachedBgResource; // x21
  int32_t v6; // w22
  int32_t id; // w23
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B18845 & 1) == 0 )
  {
    sub_1BCA7E0(&BgResourceData_TypeInfo, method, v2);
    byte_4B18845 = 1;
  }
  cachedBgResource = this->fields.cachedBgResource;
  if ( !cachedBgResource )
  {
    v6 = *((_DWORD *)&this->fields.isActive + 1);
    id = this->fields.id;
    cachedBgResource = (BgResourceData_o *)sub_1BCAA2C(BgResourceData_TypeInfo, method, v2, v3);
    BgResourceData___ctor(cachedBgResource, v6, id, 0LL);
    this->fields.cachedBgResource = cachedBgResource;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.cachedBgResource,
      (int64_t)cachedBgResource,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
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
    sub_1BCAA3C(this, method);
  return comData->fields.grantType;
}


bool __fastcall BattleFieldEnvironmentData_BaseData__get_IsTargetBase(
        BattleFieldEnvironmentData_BaseData_o *this,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  comData = this->fields.comData;
  if ( !comData )
    sub_1BCAA3C(this, method);
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
    sub_1BCAA3C(0LL, v5);
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
  __int64 v3; // x3
  BuffUniqueValue_o *cachedUniqueVal; // x21
  int32_t linkBuffUid; // w22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B18844 & 1) == 0 )
  {
    sub_1BCA7E0(&BuffUniqueValue_TypeInfo, method, v2);
    byte_4B18844 = 1;
  }
  cachedUniqueVal = this->fields.cachedUniqueVal;
  if ( !cachedUniqueVal )
  {
    linkBuffUid = this->fields.linkBuffUid;
    cachedUniqueVal = (BuffUniqueValue_o *)sub_1BCAA2C(BuffUniqueValue_TypeInfo, method, v2, v3);
    BuffUniqueValue___ctor_43377756(cachedUniqueVal, linkBuffUid, -1, 0LL);
    this->fields.cachedUniqueVal = cachedUniqueVal;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.cachedUniqueVal,
      (int64_t)cachedUniqueVal,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B18847 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleFieldEnvironmentData___c_TypeInfo, v1, v2);
    byte_4B18847 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleFieldEnvironmentData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleFieldEnvironmentData___c_TypeInfo->static_fields->__9 = (struct BattleFieldEnvironmentData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleFieldEnvironmentData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, buff);
  return changeBgmData->fields.addBgmOrder;
}


bool __fastcall BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__58_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1BCAA3C(this, 0LL);
  return !BattleServantData__isAlive(svt, 0, 0LL);
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleFieldEnvironmentData___c___AddPlayerServantChangeBgmWhenContinue_b__58_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt || (this = (BattleFieldEnvironmentData___c_o *)BattleServantData__get_BuffData(svt, 0LL)) == 0LL )
    sub_1BCAA3C(this, svt);
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
    sub_1BCAA3C(this, svt);
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
    sub_1BCAA3C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistDelProc(x, 0LL);
}


bool __fastcall BattleFieldEnvironmentData___c___GetBaseBgmList_b__68_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  v4 = OverwriteBattleBgmData__ConvertToSaveData(x->fields._BgmData_k__BackingField, 0LL);
  x->fields.bgmSaveData = v4;
  sub_1BCA784((PartyOrganizationUtility_o *)&x->fields.bgmSaveData, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__51_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1BCAA3C(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___InitStageField_b__51_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1BCAA3C(this, x);
  return comData->fields.grantType == 1;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__69_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1BCAA3C(this, 0LL);
  return bgm->fields.isAfterReset;
}


bool __fastcall BattleFieldEnvironmentData___c___RemoveAfterResetBGM_b__69_1(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *bgm,
        const MethodInfo *method)
{
  if ( !bgm )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___SetSaveData_b__8_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  struct OverwriteBattleBgmData_o *InstanceFromSaveData; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  InstanceFromSaveData = OverwriteBattleBgmData__CreateInstanceFromSaveData(x->fields.bgmSaveData, 0LL);
  x->fields._BgmData_k__BackingField = InstanceFromSaveData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&x->fields._BgmData_k__BackingField,
    (int64_t)InstanceFromSaveData,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverChangeField_b__54_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_FieldChangeData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.isTakeOverNextWave;
}


bool __fastcall BattleFieldEnvironmentData___c___TakeOverPlayerServantChangeBgm_b__55_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


void __fastcall BattleFieldEnvironmentData___c___UpdateBgmBuffPriorityOnInitWave_b__56_0(
        BattleFieldEnvironmentData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (BattleFieldEnvironmentData___c_o *)x->fields.changeBgmData) == 0LL )
    sub_1BCAA3C(this, x);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Object_array *bgRangeArray; // x19
  System_Func_object__bool__o *v18; // x20

  if ( (byte_4B18848 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_RangeValue___, *(_QWORD *)&x, method);
    sub_1BCA7E0(&System_Func_RangeValue__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_BattleFieldEnvironmentData___c__DisplayClass62_1__GetQuestCommonIndividuality_b__1__, v8, v9);
    sub_1BCA7E0(&BattleFieldEnvironmentData___c__DisplayClass62_1_TypeInfo, v10, v11);
    byte_4B18848 = 1;
  }
  v12 = sub_1BCAA2C(BattleFieldEnvironmentData___c__DisplayClass62_1_TypeInfo, *(_QWORD *)&x, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_DWORD *)(v12 + 16) = x;
  bgRangeArray = (System_Object_array *)this->fields.bgRangeArray;
  v18 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_RangeValue__bool__TypeInfo, v14, v15, v16);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_BattleFieldEnvironmentData___c__DisplayClass62_1__GetQuestCommonIndividuality_b__1__,
    0LL);
  return !BasicHelper__Any_object__49274176(
            bgRangeArray,
            (System_Func_T__bool__o *)v18,
            (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_RangeValue___);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, buff);
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
    sub_1BCAA3C(this, x);
  return BattleFieldEnvironmentData_CommonData__IsMatch(comData, this->fields.val, method);
}


bool __fastcall BattleFieldEnvironmentData___c__DisplayClass70_0___RemoveRelateBuff_b__1(
        BattleFieldEnvironmentData___c__DisplayClass70_0_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  BattleFieldEnvironmentData_CommonData_o *comData; // x8

  if ( !x || (comData = x->fields.comData) == 0LL )
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
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
    sub_1BCAA3C(this, x);
  BattleFieldEnvironmentData__ExecRemoveBuffAfterProc_43534660(
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

  if ( (byte_4B18849 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&x, method);
    byte_4B18849 = 1;
  }
  subList = this->fields.subList;
  if ( !subList )
    sub_1BCAA3C(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_List_int___Contains(
           subList,
           x,
           (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__);
}