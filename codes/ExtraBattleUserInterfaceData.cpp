void ExtraBattleUserInterfaceData___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  ExtraBattleUserInterfaceData_c *v9; // x8
  __int64 v10; // x1
  Il2CppType *v11; // x19
  System_RuntimeTypeHandle_o v12; // x0
  __int64 v13; // x1
  System_Type_o *TypeFromHandle; // x19
  System_Array_o *Values; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Int32Enum_array *v17; // x0
  struct ExtraBattleUserInterfaceData_StaticFields *static_fields; // x8
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_593B696 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Cast_ExtraBattleUserInterfaceData_LabelType___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelType___);
    sub_21FFC50(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_21FFC50(&ExtraBattleUserInterfaceData_LabelType___TypeInfo);
    sub_21FFC50(&ExtraBattleUserInterfaceData_LabelType_var);
    byte_593B696 = 1;
  }
  v1 = sub_21FFD10(ExtraBattleUserInterfaceData_LabelType___TypeInfo, 2);
  if ( !v1 )
    sub_21FFECC(0, v2);
  if ( (*(_DWORD *)(v1 + 24) & 0xFFFFFFFE) == 0 )
    sub_21FFED4(v1);
  ExtraBattleUserInterfaceData_TypeInfo->static_fields->DefaultUpdateLabelTypes = (struct ExtraBattleUserInterfaceData_LabelType_array *)v1;
  v9 = ExtraBattleUserInterfaceData_TypeInfo;
  *(_DWORD *)(v1 + 36) = 1;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v9->static_fields, v1, v3, v4, v5, v6, v7, v8);
  v11 = ExtraBattleUserInterfaceData_LabelType_var;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, v10);
  v12.fields.value = (intptr_t)v11;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v13);
  Values = System_Enum__GetValues(TypeFromHandle, 0);
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_Int32Enum_(
                                                               (System_Collections_IEnumerable_o *)Values,
                                                               (const MethodInfo_3835558 *)Method_System_Linq_Enumerable_Cast_ExtraBattleUserInterfaceData_LabelType___);
  v17 = System_Linq_Enumerable__ToArray_Int32Enum_(
          v16,
          (const MethodInfo_3868554 *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelType___);
  static_fields = ExtraBattleUserInterfaceData_TypeInfo->static_fields;
  static_fields->AllLabelTypes = (struct ExtraBattleUserInterfaceData_LabelType_array *)v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->AllLabelTypes,
    (int32_t)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void ExtraBattleUserInterfaceData___ctor(
        ExtraBattleUserInterfaceData_o *this,
        ExtraBattleUserInterfaceData_JsonConvertData_o *value,
        int32_t wave,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_Fields *p_fields; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  long double v21; // q0
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x8
  System_Collections_Generic_IEnumerable_TSource__o *labels; // x21
  ExtraBattleUserInterfaceData___c_c *v24; // x0
  struct ExtraBattleUserInterfaceData___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__37_0; // x22
  Il2CppObject *v27; // x23
  struct ExtraBattleUserInterfaceData___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Object_array *v36; // x1
  _QWORD *v37; // x21
  __int64 v38; // x8
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 v41; // x1
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  ExtraBattleUserInterfaceData___c_c *v44; // x0
  struct ExtraBattleUserInterfaceData___c_StaticFields *v45; // x8
  System_Func_object__bool__o *_9__37_1; // x22
  Il2CppObject *v47; // x23
  struct ExtraBattleUserInterfaceData___c_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  __int64 v56; // x1
  ExtraBattleUserInterfaceData___c_c *v57; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x21
  struct ExtraBattleUserInterfaceData___c_StaticFields *v59; // x9
  System_Func_object__object__o *_9__37_2; // x22
  Il2CppObject *v61; // x23
  struct ExtraBattleUserInterfaceData___c_StaticFields *v62; // x0
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  System_Collections_Generic_IEnumerable_TResult__o *v69; // x0
  __int64 v70; // x1
  ExtraBattleUserInterfaceData___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  struct ExtraBattleUserInterfaceData___c_StaticFields *v73; // x9
  System_Func_object__bool__o *_9__37_3; // x22
  Il2CppObject *v75; // x23
  struct ExtraBattleUserInterfaceData___c_StaticFields *v76; // x0
  System_String_o *v77; // x2
  System_String_o *v78; // x3
  int32_t v79; // w4
  int32_t v80; // w5
  bool v81; // w6
  bool v82; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  __int64 v84; // x1
  ExtraBattleUserInterfaceData___c_c *v85; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x21
  struct ExtraBattleUserInterfaceData___c_StaticFields *v87; // x9
  System_Func_object__int__o *_9__37_4; // x22
  Il2CppObject *v89; // x23
  struct ExtraBattleUserInterfaceData___c_StaticFields *v90; // x0
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  System_Collections_Generic_HashSet_int__o *v104; // x21
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *v105; // x8
  System_String_o *assignment; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v108; // x1
  System_String_o *v109; // x21
  ExtraBattleUserInterfaceData_CondData_o *cond; // x20
  ExtraBattleUserInterfaceData_CondDataWrapper_o *v111; // x21
  const MethodInfo *v112; // x2
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_593B695 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_21FFC50(&ExtraBattleUserInterfaceData_CondDataWrapper_TypeInfo);
    sub_21FFC50(&Method_System_Enum_TryParse_ExtraBattleUserInterfaceData_AssignmentType___);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_ValueData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_ValueData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelDataWrapper___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToHashSet_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ExtraBattleUserInterfaceData_LabelData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_ExtraBattleUserInterfaceData_ValueData___);
    sub_21FFC50(&System_Func_ExtraBattleUserInterfaceData_LabelData__IEnumerable_ExtraBattleUserInterfaceData_ValueData___TypeInfo);
    sub_21FFC50(&System_Func_ExtraBattleUserInterfaceData_LabelData__bool__TypeInfo);
    sub_21FFC50(&System_Func_ExtraBattleUserInterfaceData_ValueData__int__TypeInfo);
    sub_21FFC50(&System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__TypeInfo);
    sub_21FFC50(&System_Func_ExtraBattleUserInterfaceData_ValueData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceData___c___ctor_b__37_0__);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceData___c___ctor_b__37_1__);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceData___c___ctor_b__37_2__);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceData___c___ctor_b__37_3__);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceData___c___ctor_b__37_4__);
    sub_21FFC50(&ExtraBattleUserInterfaceData___c_TypeInfo);
    byte_593B695 = 1;
  }
  result = 0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = value;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)value, v8, v9, v10, v11, v12, v13);
  data = this->fields.data;
  this->fields._Wave_k__BackingField = wave;
  if ( data && (labels = (System_Collections_Generic_IEnumerable_TSource__o *)data->fields.labels) != 0 )
  {
    v24 = ExtraBattleUserInterfaceData___c_TypeInfo;
    if ( !*(&ExtraBattleUserInterfaceData___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData___c_TypeInfo, v14);
      v24 = ExtraBattleUserInterfaceData___c_TypeInfo;
    }
    static_fields = v24->static_fields;
    _9__37_0 = (System_Func_object__object__o *)static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !*(&v24->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v24, v14);
        static_fields = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__37_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__TypeInfo);
      System_Func_object__object____ctor(_9__37_0, v27, Method_ExtraBattleUserInterfaceData___c___ctor_b__37_0__, 0);
      v28 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
      v28->__9__37_0 = (struct System_Func_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper__o *)_9__37_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__37_0, (int32_t)_9__37_0, v29, v30, v31, v32, v33, v34);
    }
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 labels,
                                                                 (System_Func_TSource__TResult__o *)_9__37_0,
                                                                 (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_LabelDataWrapper___);
    v36 = System_Linq_Enumerable__ToArray_object_(
            v35,
            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LabelDataWrapper___);
  }
  else
  {
    v37 = Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___;
    v38 = *((_QWORD *)Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___ + 7);
    if ( !v38 )
    {
      sub_2237B54(Method_System_Array_Empty_ExtraBattleUserInterfaceData_LabelDataWrapper___);
      v38 = v37[7];
    }
    v39 = *(_QWORD *)(v38 + 16);
    if ( (*(_WORD *)(v39 + 309) & 1) == 0 )
      v39 = sub_2237AF8(v21);
    if ( !*(_DWORD *)(v39 + 228) )
      *(__n128 *)&v21 = j_il2cpp_runtime_class_init_0(v39, v14);
    v40 = *(_QWORD *)(v37[7] + 16LL);
    if ( (*(_WORD *)(v40 + 309) & 1) == 0 )
      v40 = sub_2237AF8(v21);
    v36 = **(System_Object_array ***)(v40 + 184);
  }
  this->fields._Labels_k__BackingField = (struct ExtraBattleUserInterfaceData_LabelDataWrapper_array *)v36;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Labels_k__BackingField,
    (int32_t)v36,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v42 = this->fields.data;
  if ( !v42 )
    goto LABEL_48;
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v42->fields.labels;
  if ( !v43 )
    goto LABEL_48;
  v44 = ExtraBattleUserInterfaceData___c_TypeInfo;
  if ( !*(&ExtraBattleUserInterfaceData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData___c_TypeInfo, v41);
    v44 = ExtraBattleUserInterfaceData___c_TypeInfo;
  }
  v45 = v44->static_fields;
  _9__37_1 = (System_Func_object__bool__o *)v45->__9__37_1;
  if ( !_9__37_1 )
  {
    if ( !*(&v44->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v44, v41);
      v45 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
    }
    v47 = (Il2CppObject *)v45->__9;
    _9__37_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ExtraBattleUserInterfaceData_LabelData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__37_1, v47, Method_ExtraBattleUserInterfaceData___c___ctor_b__37_1__, 0);
    v48 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
    v48->__9__37_1 = (struct System_Func_ExtraBattleUserInterfaceData_LabelData__bool__o *)_9__37_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v48->__9__37_1, (int32_t)_9__37_1, v49, v50, v51, v52, v53, v54);
  }
  v55 = System_Linq_Enumerable__Where_object_(
          v43,
          (System_Func_TSource__bool__o *)_9__37_1,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ExtraBattleUserInterfaceData_LabelData___);
  v57 = ExtraBattleUserInterfaceData___c_TypeInfo;
  v58 = v55;
  if ( !*(&ExtraBattleUserInterfaceData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData___c_TypeInfo, v56);
    v57 = ExtraBattleUserInterfaceData___c_TypeInfo;
  }
  v59 = v57->static_fields;
  _9__37_2 = (System_Func_object__object__o *)v59->__9__37_2;
  if ( !_9__37_2 )
  {
    if ( !*(&v57->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v57, v56);
      v59 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
    }
    v61 = (Il2CppObject *)v59->__9;
    _9__37_2 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_ExtraBattleUserInterfaceData_LabelData__IEnumerable_ExtraBattleUserInterfaceData_ValueData___TypeInfo);
    System_Func_object__object____ctor(_9__37_2, v61, Method_ExtraBattleUserInterfaceData___c___ctor_b__37_2__, 0);
    v62 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
    v62->__9__37_2 = (struct System_Func_ExtraBattleUserInterfaceData_LabelData__IEnumerable_ExtraBattleUserInterfaceData_ValueData___o *)_9__37_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v62->__9__37_2, (int32_t)_9__37_2, v63, v64, v65, v66, v67, v68);
  }
  v69 = System_Linq_Enumerable__SelectMany_object__object_(
          v58,
          (System_Func_TSource__IEnumerable_TResult___o *)_9__37_2,
          (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_ExtraBattleUserInterfaceData_LabelData__ExtraBattleUserInterfaceData_ValueData___);
  v71 = ExtraBattleUserInterfaceData___c_TypeInfo;
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
  if ( !*(&ExtraBattleUserInterfaceData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData___c_TypeInfo, v70);
    v71 = ExtraBattleUserInterfaceData___c_TypeInfo;
  }
  v73 = v71->static_fields;
  _9__37_3 = (System_Func_object__bool__o *)v73->__9__37_3;
  if ( !_9__37_3 )
  {
    if ( !*(&v71->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v71, v70);
      v73 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
    }
    v75 = (Il2CppObject *)v73->__9;
    _9__37_3 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ExtraBattleUserInterfaceData_ValueData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__37_3, v75, Method_ExtraBattleUserInterfaceData___c___ctor_b__37_3__, 0);
    v76 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
    v76->__9__37_3 = (struct System_Func_ExtraBattleUserInterfaceData_ValueData__bool__o *)_9__37_3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v76->__9__37_3, (int32_t)_9__37_3, v77, v78, v79, v80, v81, v82);
  }
  v83 = System_Linq_Enumerable__Where_object_(
          v72,
          (System_Func_TSource__bool__o *)_9__37_3,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_ExtraBattleUserInterfaceData_ValueData___);
  v85 = ExtraBattleUserInterfaceData___c_TypeInfo;
  v86 = v83;
  if ( !*(&ExtraBattleUserInterfaceData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData___c_TypeInfo, v84);
    v85 = ExtraBattleUserInterfaceData___c_TypeInfo;
  }
  v87 = v85->static_fields;
  _9__37_4 = (System_Func_object__int__o *)v87->__9__37_4;
  if ( !_9__37_4 )
  {
    if ( !*(&v85->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v85, v84);
      v87 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
    }
    v89 = (Il2CppObject *)v87->__9;
    _9__37_4 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ExtraBattleUserInterfaceData_ValueData__int__TypeInfo);
    System_Func_object__int____ctor(_9__37_4, v89, Method_ExtraBattleUserInterfaceData___c___ctor_b__37_4__, 0);
    v90 = ExtraBattleUserInterfaceData___c_TypeInfo->static_fields;
    v90->__9__37_4 = (struct System_Func_ExtraBattleUserInterfaceData_ValueData__int__o *)_9__37_4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v90->__9__37_4, (int32_t)_9__37_4, v91, v92, v93, v94, v95, v96);
  }
  v97 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v86,
                                                               (System_Func_TSource__TResult__o *)_9__37_4,
                                                               (const MethodInfo_385D394 *)Method_System_Linq_Enumerable_Select_ExtraBattleUserInterfaceData_ValueData__int___);
  v104 = (System_Collections_Generic_HashSet_int__o *)System_Linq_Enumerable__ToHashSet_int_(
                                                        v97,
                                                        (const MethodInfo_386D418 *)Method_System_Linq_Enumerable_ToHashSet_int___);
  if ( !v104 )
  {
LABEL_48:
    v104 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v104,
      (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  }
  this->fields.battleValueKeySet = v104;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleValueKeySet,
    (int32_t)v104,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  v105 = this->fields.data;
  this->fields._Assignment_k__BackingField = 0;
  if ( v105 )
    assignment = v105->fields.assignment;
  else
    assignment = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(assignment, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !p_fields->data )
      sub_21FFECC(IsNullOrEmpty, v108);
    v109 = p_fields->data->fields.assignment;
    if ( !*(_DWORD *)(qword_594C0C0 + 228) )
      j_il2cpp_runtime_class_init_0(qword_594C0C0, v108);
    if ( System_Enum__TryParse_Int32Enum_(
           v109,
           &result,
           (const MethodInfo_382E0BC *)Method_System_Enum_TryParse_ExtraBattleUserInterfaceData_AssignmentType___) )
    {
      this->fields._Assignment_k__BackingField = result;
    }
  }
  if ( p_fields->data )
    cond = p_fields->data->fields.cond;
  else
    cond = 0;
  v111 = (ExtraBattleUserInterfaceData_CondDataWrapper_o *)sub_21FFEBC(ExtraBattleUserInterfaceData_CondDataWrapper_TypeInfo);
  ExtraBattleUserInterfaceData_CondDataWrapper___ctor(v111, cond, v112);
  this->fields._Cond_k__BackingField = v111;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Cond_k__BackingField,
    (int32_t)v111,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
}


// local variable allocation has failed, the output may be wrong!
bool ExtraBattleUserInterfaceData__ContainsBattleValKey(
        ExtraBattleUserInterfaceData_o *this,
        int32_t key,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *battleValueKeySet; // x0

  if ( (byte_593B694 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_593B694 = 1;
  }
  battleValueKeySet = this->fields.battleValueKeySet;
  if ( !battleValueKeySet )
    sub_21FFECC(0, *(_QWORD *)&key);
  return System_Collections_Generic_HashSet_int___Contains(
           battleValueKeySet,
           key,
           (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}


System_Collections_Generic_IEnumerable_int__o *ExtraBattleUserInterfaceData__GetSkillEffectIds(
        ExtraBattleUserInterfaceData_JsonConvertData_array *dataArray,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593B693 & 1) == 0 )
  {
    sub_21FFC50(&ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_TypeInfo);
    byte_593B693 = 1;
  }
  v3 = sub_21FFEBC(ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = dataArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)dataArray, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_int__o *)v3;
}


System_String_o *ExtraBattleUserInterfaceData__get_AssetPath(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.asset;
  else
    return 0;
}


int32_t ExtraBattleUserInterfaceData__get_Assignment(ExtraBattleUserInterfaceData_o *this, const MethodInfo *method)
{
  return this->fields._Assignment_k__BackingField;
}


ExtraBattleUserInterfaceData_CondDataWrapper_o *ExtraBattleUserInterfaceData__get_Cond(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  return this->fields._Cond_k__BackingField;
}


bool ExtraBattleUserInterfaceData__get_IsFromQuestPhase(ExtraBattleUserInterfaceData_o *this, const MethodInfo *method)
{
  return this->fields._Wave_k__BackingField == -999;
}


ExtraBattleUserInterfaceData_LabelDataWrapper_array *ExtraBattleUserInterfaceData__get_Labels(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  return this->fields._Labels_k__BackingField;
}


ExtraBattleUserInterfaceData_ExecSkillData_o *ExtraBattleUserInterfaceData__get_Skill(
        ExtraBattleUserInterfaceData_o *this,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_JsonConvertData_o *data; // x8

  data = this->fields.data;
  if ( data )
    return data->fields.executeSkill;
  else
    return 0;
}


int32_t ExtraBattleUserInterfaceData__get_Wave(ExtraBattleUserInterfaceData_o *this, const MethodInfo *method)
{
  return this->fields._Wave_k__BackingField;
}


void ExtraBattleUserInterfaceData_CondData___ctor(
        ExtraBattleUserInterfaceData_CondData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData_CondDataWrapper___ctor(
        ExtraBattleUserInterfaceData_CondDataWrapper_o *this,
        ExtraBattleUserInterfaceData_CondData_o *value,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *v5; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o **p_fields; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1

  if ( (byte_593B69C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__TypeInfo);
    byte_593B69C = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__bool____ctor(
    v5,
    (const MethodInfo_3F7EBB4 *)Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool___ctor__);
  this->fields.stateDict = (struct System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__o *)v5;
  p_fields = (System_Collections_Generic_Dictionary_TKey__TValue__o **)&this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v7, v8, v9, v10, v11, v12);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( value && value->fields.existAliveSubMember == 1 )
  {
    if ( !*p_fields )
      sub_21FFECC(0, v13);
    System_Collections_Generic_Dictionary_Int32Enum__bool___Add(
      *p_fields,
      0,
      0,
      (const MethodInfo_3F7F568 *)Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__Add__);
  }
}


bool ExtraBattleUserInterfaceData_CondDataWrapper__IsAllVerified(
        ExtraBattleUserInterfaceData_CondDataWrapper_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *stateDict; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x19
  ExtraBattleUserInterfaceData_CondDataWrapper___c_c *v7; // x8
  struct ExtraBattleUserInterfaceData_CondDataWrapper___c_StaticFields *static_fields; // x9
  System_Func_bool__bool__o *_9__3_0; // x20
  Il2CppObject *v10; // x21
  struct ExtraBattleUserInterfaceData_CondDataWrapper___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593B69E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__get_Values__);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_bool___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_KeyValuePair_ExtraBattleUserInterfaceData_ButtonCondType__bool____);
    sub_21FFC50(&System_Func_bool__bool__TypeInfo);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceData_CondDataWrapper___c__IsAllVerified_b__3_0__);
    sub_21FFC50(&ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo);
    byte_593B69E = 1;
  }
  if ( !System_Linq_Enumerable__Any_KeyValuePair_Int32Enum__bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.stateDict,
          (const MethodInfo_3832124 *)Method_System_Linq_Enumerable_Any_KeyValuePair_ExtraBattleUserInterfaceData_ButtonCondType__bool____) )
    return 1;
  stateDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.stateDict;
  if ( !stateDict )
    sub_21FFECC(0, v3);
  Values = System_Collections_Generic_Dictionary_Int32Enum__bool___get_Values(
             stateDict,
             (const MethodInfo_3F7F368 *)Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__get_Values__);
  v7 = ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo;
  if ( !*(&ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo, v5);
    v7 = ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__3_0 = static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v5);
      static_fields = ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_bool__bool__o *)sub_21FFEBC(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__3_0,
      v10,
      Method_ExtraBattleUserInterfaceData_CondDataWrapper___c__IsAllVerified_b__3_0__,
      0);
    v11 = ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo->static_fields;
    v11->__9__3_0 = _9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__3_0, (int32_t)_9__3_0, v12, v13, v14, v15, v16, v17);
  }
  return System_Linq_Enumerable__All_bool_(
           (System_Collections_Generic_IEnumerable_TSource__o *)Values,
           (System_Func_TSource__bool__o *)_9__3_0,
           (const MethodInfo_3830F1C *)Method_System_Linq_Enumerable_All_bool___);
}


// local variable allocation has failed, the output may be wrong!
bool ExtraBattleUserInterfaceData_CondDataWrapper__IsValidCondType(
        ExtraBattleUserInterfaceData_CondDataWrapper_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *stateDict; // x0

  if ( (byte_593B69F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__ContainsKey__);
    byte_593B69F = 1;
  }
  stateDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.stateDict;
  if ( !stateDict )
    sub_21FFECC(0, *(_QWORD *)&condType);
  return System_Collections_Generic_Dictionary_Int32Enum__bool___ContainsKey(
           stateDict,
           condType,
           (const MethodInfo_3F7F760 *)Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__ContainsKey__);
}


// local variable allocation has failed, the output may be wrong!
bool ExtraBattleUserInterfaceData_CondDataWrapper__IsVerified(
        ExtraBattleUserInterfaceData_CondDataWrapper_o *this,
        int32_t condType,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *stateDict; // x0
  bool v6; // w0
  bool value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593B6A0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__TryGetValue__);
    byte_593B6A0 = 1;
  }
  stateDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.stateDict;
  value = 0;
  if ( !stateDict )
    sub_21FFECC(0, *(_QWORD *)&condType);
  v6 = System_Collections_Generic_Dictionary_Int32Enum__bool___TryGetValue(
         stateDict,
         condType,
         &value,
         (const MethodInfo_3F80EE8 *)Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__TryGetValue__);
  return value || !v6;
}


void ExtraBattleUserInterfaceData_CondDataWrapper__UpdateVerification(
        ExtraBattleUserInterfaceData_CondDataWrapper_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  BattleData_o *v3; // x19
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *stateDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x21
  const MethodInfo_37DCADC **v10; // x25
  const MethodInfo_3F7F554 **v11; // x29
  unsigned __int64 v12; // x26
  System_Collections_Generic_Dictionary_TKey__TValue__o *v13; // x22
  BattleServantData_array *SubServantArray; // x0
  __int64 v15; // x1
  ExtraBattleUserInterfaceData_CondDataWrapper___c_c *v16; // x8
  System_Object_array *v17; // x23
  struct ExtraBattleUserInterfaceData_CondDataWrapper___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__2_0; // x24
  ExtraBattleUserInterfaceData_CondDataWrapper_o *v20; // x19
  const MethodInfo_3F7F554 **v21; // x20
  const MethodInfo_37DCADC **v22; // x29
  Il2CppObject *v23; // x25
  struct ExtraBattleUserInterfaceData_CondDataWrapper___c_StaticFields *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  BattleData_o *v31; // [xsp+8h] [xbp-68h]

  v3 = battleData;
  if ( (byte_593B69D & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_BattleServantData____91484808);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__get_Keys__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__set_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_ButtonCondType___);
    sub_21FFC50(&System_Func_BattleServantData__bool__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceData_CondDataWrapper___c__UpdateVerification_b__2_0__);
    sub_21FFC50(&ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo);
    byte_593B69D = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, battleData);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v3, 0, 0) )
  {
    stateDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.stateDict;
    if ( !stateDict
      || (Keys = System_Collections_Generic_Dictionary_Int32Enum__bool___get_Keys(
                   stateDict,
                   (const MethodInfo_3F7F20C *)Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__get_Keys__),
          (stateDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                                  (const MethodInfo_3868554 *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_ButtonCondType___)) == 0) )
    {
LABEL_24:
      sub_21FFECC(stateDict, v5);
    }
    entries = stateDict->fields._entries;
    v9 = stateDict;
    if ( (int)entries >= 1 )
    {
      v10 = (const MethodInfo_37DCADC **)&Method_BasicHelper_Any_BattleServantData____91484808;
      v11 = (const MethodInfo_3F7F554 **)&Method_System_Collections_Generic_Dictionary_ExtraBattleUserInterfaceData_ButtonCondType__bool__set_Item__;
      v12 = 0;
      v31 = v3;
      do
      {
        if ( v12 >= (unsigned int)entries )
          sub_21FFED4(stateDict);
        if ( !*(&v9->fields._count + v12) )
        {
          if ( !v3 )
            goto LABEL_24;
          v13 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.stateDict;
          SubServantArray = BattleData__GetSubServantArray(v3, 0, 0);
          v16 = ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo;
          v17 = (System_Object_array *)SubServantArray;
          if ( !*(&ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo, v15);
            v16 = ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo;
          }
          static_fields = v16->static_fields;
          _9__2_0 = (System_Func_object__bool__o *)static_fields->__9__2_0;
          if ( !_9__2_0 )
          {
            v20 = this;
            v21 = v11;
            v22 = v10;
            if ( !*(&v16->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v16, v15);
              static_fields = ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo->static_fields;
            }
            v23 = (Il2CppObject *)static_fields->__9;
            _9__2_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              _9__2_0,
              v23,
              Method_ExtraBattleUserInterfaceData_CondDataWrapper___c__UpdateVerification_b__2_0__,
              0);
            v24 = ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo->static_fields;
            v24->__9__2_0 = (struct System_Func_BattleServantData__bool__o *)_9__2_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v24->__9__2_0,
              (int32_t)_9__2_0,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30);
            v10 = v22;
            v11 = v21;
            this = v20;
            v3 = v31;
          }
          stateDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)BasicHelper__Any_object__58575580(
                                                                                 v17,
                                                                                 (System_Func_T__bool__o *)_9__2_0,
                                                                                 *v10);
          if ( !v13 )
            goto LABEL_24;
          System_Collections_Generic_Dictionary_Int32Enum__bool___set_Item(v13, 0, (unsigned __int8)stateDict & 1, *v11);
        }
        LODWORD(entries) = v9->fields._entries;
        ++v12;
      }
      while ( (__int64)v12 < (int)entries );
    }
  }
}


void ExtraBattleUserInterfaceData_CondDataWrapper___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B6A1 & 1) == 0 )
  {
    sub_21FFC50(&ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo);
    byte_593B6A1 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceData_CondDataWrapper___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExtraBattleUserInterfaceData_CondDataWrapper___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceData_CondDataWrapper___c___ctor(
        ExtraBattleUserInterfaceData_CondDataWrapper___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ExtraBattleUserInterfaceData_CondDataWrapper___c___IsAllVerified_b__3_0(
        ExtraBattleUserInterfaceData_CondDataWrapper___c_o *this,
        bool x,
        const MethodInfo *method)
{
  return x;
}


bool ExtraBattleUserInterfaceData_CondDataWrapper___c___UpdateVerification_b__2_0(
        ExtraBattleUserInterfaceData_CondDataWrapper___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return BattleServantData__isAlive(x, 0, 0);
}


void ExtraBattleUserInterfaceData_ExecSkillData___ctor(
        ExtraBattleUserInterfaceData_ExecSkillData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *ExtraBattleUserInterfaceData_ExecSkillData__get_SkillIdLvKey(
        ExtraBattleUserInterfaceData_ExecSkillData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  Il2CppObject *v4; // x0
  int32_t skillLv; // [xsp+8h] [xbp-28h] BYREF
  int32_t skillId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593B697 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    byte_593B697 = 1;
  }
  skillId = this->fields.skillId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &skillId);
  skillLv = this->fields.skillLv;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &skillLv);
  return System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, v3, v4, 0);
}


void ExtraBattleUserInterfaceData_JsonConvertData___ctor(
        ExtraBattleUserInterfaceData_JsonConvertData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData_LabelData___ctor(
        ExtraBattleUserInterfaceData_LabelData_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **v9; // x8
  struct System_String_o *v10; // x1

  v9 = *(struct System_String_o ***)(qword_594C0B8 + 184);
  v10 = *v9;
  this->fields.valueStringFormat = *v9;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.valueStringFormat, (int32_t)v10, v2, v3, v4, v5, v6, v7);
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData_LabelDataWrapper___ctor(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *value,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_Fields *p_fields; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 NumMissionCondDetail; // x0
  __int64 v13; // x1
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x9
  struct ExtraBattleUserInterfaceData_ValueData_array *values; // x23
  il2cpp_array_size_t max_length; // x8
  __int64 v17; // x24
  ExtraBattleUserInterfaceData_ValueData_o *v18; // x9
  struct ExtraBattleUserInterfaceData_LabelData_o *v19; // x8
  int64_t staticCount; // x27
  int32_t missionConditionDetailId; // w21
  int32_t countMax; // w22
  System_Collections_Generic_IEnumerable_TSource__o *limitTurns; // x20
  ExtraBattleUserInterfaceData_LabelDataWrapper___c_c *v29; // x0
  struct ExtraBattleUserInterfaceData_LabelDataWrapper___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__11_0; // x21
  Il2CppObject *v32; // x22
  struct ExtraBattleUserInterfaceData_LabelDataWrapper___c_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Object_array *v41; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct UnityEngine_Color_o v48; // [xsp+0h] [xbp-60h]

  if ( (byte_593B698 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_ExtraBattleUserInterfaceData_LimitTurnData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LimitTurnData___);
    sub_21FFC50(&System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__TypeInfo);
    sub_21FFC50(&Method_ExtraBattleUserInterfaceData_LabelDataWrapper___c___ctor_b__11_0__);
    sub_21FFC50(&ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
    byte_593B698 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.data = value;
  p_fields = &this->fields;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)value, v6, v7, v8, v9, v10, v11);
  data = this->fields.data;
  if ( !data )
    goto LABEL_36;
  if ( data->fields.labelType == 1 )
  {
    values = data->fields.values;
    if ( values )
    {
      max_length = values->max_length;
      if ( (int)max_length >= 1 )
      {
        v17 = 0;
        do
        {
          if ( (unsigned int)v17 >= (unsigned int)max_length )
            sub_21FFED4(NumMissionCondDetail);
          v18 = values->m_Items[v17];
          if ( !v18 )
            goto LABEL_36;
          if ( !v18->fields.valueType )
          {
            v19 = this->fields.data;
            if ( !v19 )
              goto LABEL_36;
            staticCount = this->fields.staticCount;
            missionConditionDetailId = v18->fields.missionConditionDetailId;
            countMax = v19->fields.countMax;
            if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v13);
            NumMissionCondDetail = CondType__GetNumMissionCondDetail(missionConditionDetailId, countMax, 0);
            max_length = values->max_length;
            this->fields.staticCount = staticCount + (int)NumMissionCondDetail;
          }
          ++v17;
        }
        while ( (int)v17 < (int)max_length );
        data = p_fields->data;
        if ( !p_fields->data )
          goto LABEL_36;
      }
    }
  }
  NumMissionCondDetail = System_String__IsNullOrEmpty(data->fields.labelColor, 0);
  __asm { FMOV            V0.4S, #1.0 }
  v48 = _Q0;
  if ( (NumMissionCondDetail & 1) != 0 )
    goto LABEL_20;
  if ( !p_fields->data )
    goto LABEL_36;
  NumMissionCondDetail = UnityEngine_ColorUtility__TryParseHtmlString(
                           p_fields->data->fields.labelColor,
                           &this->fields.normalColor,
                           0);
  if ( (NumMissionCondDetail & 1) == 0 )
LABEL_20:
    this->fields.normalColor = v48;
  if ( !p_fields->data )
    goto LABEL_36;
  NumMissionCondDetail = System_String__IsNullOrEmpty(p_fields->data->fields.overBorderColor, 0);
  if ( (NumMissionCondDetail & 1) != 0 )
    goto LABEL_25;
  if ( !p_fields->data )
    goto LABEL_36;
  NumMissionCondDetail = UnityEngine_ColorUtility__TryParseHtmlString(
                           p_fields->data->fields.overBorderColor,
                           &this->fields.overBorderColor,
                           0);
  if ( (NumMissionCondDetail & 1) == 0 )
LABEL_25:
    this->fields.overBorderColor = v48;
  if ( !p_fields->data )
LABEL_36:
    sub_21FFECC(NumMissionCondDetail, v13);
  limitTurns = (System_Collections_Generic_IEnumerable_TSource__o *)p_fields->data->fields.limitTurns;
  if ( limitTurns )
  {
    v29 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo;
    if ( !*(&ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo, v13);
      v29 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo;
    }
    static_fields = v29->static_fields;
    _9__11_0 = (System_Func_object__int__o *)static_fields->__9__11_0;
    if ( !_9__11_0 )
    {
      if ( !*(&v29->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v29, v13);
        static_fields = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields;
      }
      v32 = (Il2CppObject *)static_fields->__9;
      _9__11_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__11_0,
        v32,
        Method_ExtraBattleUserInterfaceData_LabelDataWrapper___c___ctor_b__11_0__,
        0);
      v33 = ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields;
      v33->__9__11_0 = (struct System_Func_ExtraBattleUserInterfaceData_LimitTurnData__int__o *)_9__11_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->__9__11_0, (int32_t)_9__11_0, v34, v35, v36, v37, v38, v39);
    }
    v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 limitTurns,
                                                                 (System_Func_TSource__TKey__o *)_9__11_0,
                                                                 (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_ExtraBattleUserInterfaceData_LimitTurnData__int___);
    v41 = System_Linq_Enumerable__ToArray_object_(
            v40,
            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_ExtraBattleUserInterfaceData_LimitTurnData___);
    this->fields.sortedLimitTurns = (struct ExtraBattleUserInterfaceData_LimitTurnData_array *)v41;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.sortedLimitTurns,
      (int32_t)v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *v4; // x19
  struct ExtraBattleUserInterfaceData_LabelData_o *v6; // x8
  int32_t v7; // [xsp+Ch] [xbp-14h] BYREF

  data = this->fields.data;
  v7 = value;
  if ( !data )
    goto LABEL_7;
  v4 = this;
  this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)System_String__IsNullOrEmpty(
                                                              data->fields.valueStringFormat,
                                                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return System_Int32__ToString((int32_t)&v7, 0);
  v6 = v4->fields.data;
  if ( !v6 )
LABEL_7:
    sub_21FFECC(this, *(_QWORD *)&value);
  return System_Int32__ToString_76925352((int32_t)&v7, v6->fields.valueStringFormat, 0);
}


// local variable allocation has failed, the output may be wrong!
ExtraBattleUserInterfaceData_LimitTurnData_o *ExtraBattleUserInterfaceData_LabelDataWrapper__GetCurrentLimitTurnData(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        int32_t limitTurn,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_LimitTurnData_array *sortedLimitTurns; // x9
  int max_length; // w8
  ExtraBattleUserInterfaceData_LimitTurnData_o **i; // x9
  ExtraBattleUserInterfaceData_LimitTurnData_o *result; // x0

  sortedLimitTurns = this->fields.sortedLimitTurns;
  if ( !sortedLimitTurns )
    return 0;
  max_length = sortedLimitTurns->max_length;
  if ( max_length < 1 )
    return 0;
  for ( i = sortedLimitTurns->m_Items; ; ++i )
  {
    result = *i;
    if ( !*i )
      sub_21FFECC(0, *(_QWORD *)&limitTurn);
    if ( result->fields.turn <= limitTurn )
      break;
    if ( !--max_length )
      return 0;
  }
  return result;
}


int32_t ExtraBattleUserInterfaceData_LabelDataWrapper__GetTotalCount(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        BattleData_o *battleData,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *v4; // x20
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  struct ExtraBattleUserInterfaceData_ValueData_array *values; // x22
  int max_length; // w8
  int64_t staticCount; // x19
  unsigned int v9; // w23
  ExtraBattleUserInterfaceData_ValueData_o *v10; // x8
  struct ExtraBattleUserInterfaceData_LabelData_o *v11; // x8
  int32_t countBorder; // w9
  int32_t countMax; // w8
  int32_t v14; // w20

  v4 = this;
  if ( (byte_593B699 & 1) == 0 )
  {
    this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_21FFC50(&System_Math_TypeInfo);
    byte_593B699 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_22;
  if ( data->fields.labelType != 1 )
    return 0;
  values = data->fields.values;
  if ( !values )
    goto LABEL_22;
  max_length = values->max_length;
  staticCount = v4->fields.staticCount;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_21FFED4(this);
      v10 = values->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.valueType == 1 )
      {
        if ( !battleData )
          break;
        this = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)BattleData__GetBattleValueForExBattleUi(
                                                                    battleData,
                                                                    v10->fields.battleValueKey,
                                                                    0);
        staticCount += (int)this;
      }
      max_length = values->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_14;
    }
LABEL_22:
    sub_21FFECC(this, battleData);
  }
LABEL_14:
  v11 = v4->fields.data;
  if ( !v11 )
    goto LABEL_22;
  countBorder = v11->fields.countBorder;
  countMax = v11->fields.countMax;
  if ( countBorder <= countMax )
    v14 = countMax;
  else
    v14 = countBorder;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, battleData);
  return System_Math__Min_76940304(v14, staticCount, 0);
}


// local variable allocation has failed, the output may be wrong!
bool ExtraBattleUserInterfaceData_LabelDataWrapper__LoadTextAndColorByLatestStats(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        BattleData_o *battleData,
        int32_t addTurn,
        System_String_o **text,
        UnityEngine_Color_o *color,
        System_String_o **animationName,
        ExtraBattleUserInterfaceData_LabelType_array *updateLabelTypes,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *DefaultUpdateLabelTypes; // x23
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_String_o *CurrentLimitTurnData; // x0
  __int64 v22; // x1
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  int32_t labelType; // w27
  __int64 v25; // x1
  ExtraBattleUserInterfaceData_c *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  bool v33; // w23
  struct System_String_o **p_CurrentAnimationName_k__BackingField; // x26
  MethodInfo *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  const MethodInfo *v41; // x2
  int v42; // w9
  int32_t v43; // w24
  struct ExtraBattleUserInterfaceData_LabelData_o *v44; // x8
  System_String_o *v45; // x25
  System_String_o *v46; // x22
  Il2CppObject *v47; // x0
  System_String_o *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  System_String_o *monitor; // x1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x1
  System_String_o **v63; // x0
  int32_t TotalCount; // w21
  const MethodInfo *v65; // x2
  MethodInfo *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct ExtraBattleUserInterfaceData_LabelData_o *v72; // x8
  System_String_o *v73; // x24
  System_String_o *v74; // x0
  struct ExtraBattleUserInterfaceData_LabelData_o *v75; // x8
  struct ExtraBattleUserInterfaceData_LabelData_o *v76; // x8
  int32_t v78; // [xsp+Ch] [xbp-54h] BYREF

  DefaultUpdateLabelTypes = (System_Collections_ICollection_o *)updateLabelTypes;
  if ( (byte_593B69A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_ExtraBattleUserInterfaceData_LabelType___);
    sub_21FFC50(&ExtraBattleUserInterfaceData_TypeInfo);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_1123/*"/"*/);
    byte_593B69A = 1;
  }
  *text = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)text,
    0,
    *(System_String_o **)&addTurn,
    (System_String_o *)text,
    (int32_t)color,
    (int32_t)animationName,
    (bool)updateLabelTypes,
    (bool)method);
  *color = this->fields.normalColor;
  *animationName = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)animationName, 0, v15, v16, v17, v18, v19, v20);
  data = this->fields.data;
  if ( !data )
    goto LABEL_29;
  labelType = data->fields.labelType;
  if ( BasicHelper__IsNullOrEmpty(DefaultUpdateLabelTypes, 0) )
  {
    v26 = ExtraBattleUserInterfaceData_TypeInfo;
    if ( !*(&ExtraBattleUserInterfaceData_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ExtraBattleUserInterfaceData_TypeInfo, v25);
      v26 = ExtraBattleUserInterfaceData_TypeInfo;
    }
    DefaultUpdateLabelTypes = (System_Collections_ICollection_o *)v26->static_fields->DefaultUpdateLabelTypes;
  }
  v33 = System_Linq_Enumerable__Contains_Int32Enum_(
          (System_Collections_Generic_IEnumerable_TSource__o *)DefaultUpdateLabelTypes,
          labelType,
          (const MethodInfo_3843278 *)Method_System_Linq_Enumerable_Contains_ExtraBattleUserInterfaceData_LabelType___);
  if ( !v33 )
    return v33;
  this->fields._CurrentAnimationName_k__BackingField = 0;
  p_CurrentAnimationName_k__BackingField = &this->fields._CurrentAnimationName_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentAnimationName_k__BackingField,
    0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( labelType == 1 )
  {
    TotalCount = ExtraBattleUserInterfaceData_LabelDataWrapper__GetTotalCount(this, battleData, v35);
    CurrentLimitTurnData = ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(this, TotalCount, v65);
    v72 = this->fields.data;
    if ( v72 )
    {
      v73 = CurrentLimitTurnData;
      if ( v72->fields.showBorder == 1 )
      {
        v74 = ExtraBattleUserInterfaceData_LabelDataWrapper__ConvertIntToString(this, v72->fields.countBorder, v66);
        v73 = System_String__Concat_75481624(v73, (System_String_o *)StringLiteral_1123/*"/"*/, v74, 0);
      }
      *text = v73;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)text,
        (int32_t)v73,
        (System_String_o *)v66,
        v67,
        v68,
        v69,
        v70,
        v71);
      v75 = this->fields.data;
      if ( v75 )
      {
        if ( v75->fields.countBorder <= TotalCount )
          *color = this->fields.overBorderColor;
        return v33;
      }
    }
LABEL_29:
    sub_21FFECC(CurrentLimitTurnData, v22);
  }
  if ( labelType != 2 )
  {
    v76 = this->fields.data;
    if ( v76 )
    {
      v62 = v76->fields.text;
      v63 = text;
      *text = v62;
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  if ( !battleData )
    goto LABEL_29;
  v42 = BattleData__GetLimitElapsedTurn(battleData, 0) + addTurn;
  if ( v42 <= 1 )
    v42 = 1;
  v43 = (battleData->fields.limitTurnCount - v42 + 1) & ~((battleData->fields.limitTurnCount - v42 + 1) >> 31);
  CurrentLimitTurnData = (System_String_o *)ExtraBattleUserInterfaceData_LabelDataWrapper__GetCurrentLimitTurnData(
                                              this,
                                              v43,
                                              v41);
  v44 = this->fields.data;
  if ( !v44 )
    goto LABEL_29;
  v45 = v44->fields.text;
  v46 = CurrentLimitTurnData;
  v78 = v43;
  if ( System_String__IsNullOrEmpty(v45, 0) )
    v45 = (System_String_o *)StringLiteral_26433/*"{0}"*/;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v78);
  v48 = System_String__Format(v45, v47, 0);
  *text = v48;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)text, (int32_t)v48, v49, v50, v51, v52, v53, v54);
  if ( v46 )
  {
    UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)v46[1].klass, color, 0);
    monitor = (System_String_o *)v46[1].monitor;
    *animationName = monitor;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)animationName, (int32_t)monitor, v56, v57, v58, v59, v60, v61);
    v62 = *animationName;
    v63 = p_CurrentAnimationName_k__BackingField;
    *p_CurrentAnimationName_k__BackingField = *animationName;
LABEL_27:
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v63, (int32_t)v62, (System_String_o *)v35, v36, v37, v38, v39, v40);
  }
  return v33;
}


int32_t ExtraBattleUserInterfaceData_LabelDataWrapper__get_CountMax(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        const MethodInfo *method)
{
  struct ExtraBattleUserInterfaceData_LabelData_o *data; // x8
  int32_t countBorder; // w9
  int32_t countMax; // w8

  data = this->fields.data;
  if ( !data )
    sub_21FFECC(this, method);
  countBorder = data->fields.countBorder;
  countMax = data->fields.countMax;
  if ( countBorder <= countMax )
    return countMax;
  else
    return countBorder;
}


System_String_o *ExtraBattleUserInterfaceData_LabelDataWrapper__get_CurrentAnimationName(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentAnimationName_k__BackingField;
}


void ExtraBattleUserInterfaceData_LabelDataWrapper__set_CurrentAnimationName(
        ExtraBattleUserInterfaceData_LabelDataWrapper_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CurrentAnimationName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentAnimationName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceData_LabelDataWrapper___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B69B & 1) == 0 )
  {
    sub_21FFC50(&ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
    byte_593B69B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceData_LabelDataWrapper___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExtraBattleUserInterfaceData_LabelDataWrapper___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceData_LabelDataWrapper___c___ctor(
        ExtraBattleUserInterfaceData_LabelDataWrapper___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ExtraBattleUserInterfaceData_LabelDataWrapper___c____ctor_b__11_0(
        ExtraBattleUserInterfaceData_LabelDataWrapper___c_o *this,
        ExtraBattleUserInterfaceData_LimitTurnData_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_21FFECC(this, 0);
  return v->fields.turn;
}


void ExtraBattleUserInterfaceData_LimitTurnData___ctor(
        ExtraBattleUserInterfaceData_LimitTurnData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData_ValueData___ctor(
        ExtraBattleUserInterfaceData_ValueData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0___ctor(
        ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0__MoveNext(
        ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  Il2CppObject *Master_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct ExtraBattleUserInterfaceData_JsonConvertData_array *dataArray; // x1
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
  int32_t v30; // w8
  int32_t _7__wrap5; // w8
  int32_t v32; // w8
  ExtraBattleUserInterfaceData_JsonConvertData_o *v33; // x8
  struct ExtraBattleUserInterfaceData_ExecSkillData_o *executeSkill; // x8
  MissionNaviTransitionBoardItem_o *p__7__wrap2; // x0
  struct System_Int32_array *AssumedEffectId; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  struct System_Int32_array *_7__wrap4; // x9
  int32_t v44; // w10
  struct ExtraBattleUserInterfaceData_JsonConvertData_array *_7__wrap2; // x9
  int32_t max_length; // w10
  bool result; // w0
  int32_t v48; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_593B6A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    byte_593B6A4 = 1;
  }
  _1__state = this->fields.__1__state;
  entity = 0;
  if ( _1__state == 1 )
  {
    _7__wrap5 = this->fields.__7__wrap5;
    this->fields.__1__state = -1;
    v32 = _7__wrap5 + 1;
    this->fields.__7__wrap5 = v32;
    goto LABEL_16;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  this->fields._skillMaster_5__2 = (struct SkillMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._skillMaster_5__2,
    (int32_t)Master_object,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  dataArray = this->fields.dataArray;
  this->fields.__7__wrap2 = dataArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap2,
    (int32_t)dataArray,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v30 = 0;
  for ( this->fields.__7__wrap3 = 0; ; this->fields.__7__wrap3 = v30 )
  {
    p__7__wrap2 = (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap2;
    _7__wrap2 = this->fields.__7__wrap2;
    if ( !_7__wrap2 )
LABEL_27:
      sub_21FFECC(p__7__wrap2, method);
    max_length = _7__wrap2->max_length;
    if ( v30 >= max_length )
    {
      p__7__wrap2->klass = 0;
      sub_21FFBF4(p__7__wrap2, 0, v24, v25, v26, v27, v28, v29);
      return 0;
    }
    if ( v30 >= (unsigned int)max_length )
      goto LABEL_28;
    v33 = _7__wrap2->m_Items[v30];
    if ( !v33 )
      goto LABEL_27;
    executeSkill = v33->fields.executeSkill;
    if ( executeSkill )
    {
      p__7__wrap2 = (MissionNaviTransitionBoardItem_o *)this->fields._skillMaster_5__2;
      if ( !p__7__wrap2 )
        goto LABEL_27;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)p__7__wrap2,
             &entity,
             executeSkill->fields.skillId,
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
      {
        break;
      }
    }
LABEL_19:
    v30 = this->fields.__7__wrap3 + 1;
  }
  p__7__wrap2 = (MissionNaviTransitionBoardItem_o *)entity;
  if ( !entity )
    goto LABEL_27;
  AssumedEffectId = SkillEntity__GetAssumedEffectId((SkillEntity_o *)entity, 0);
  this->fields.__7__wrap4 = AssumedEffectId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap4,
    (int32_t)AssumedEffectId,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v32 = 0;
  this->fields.__7__wrap5 = 0;
LABEL_16:
  p__7__wrap2 = (MissionNaviTransitionBoardItem_o *)&this->fields.__7__wrap4;
  _7__wrap4 = this->fields.__7__wrap4;
  if ( !_7__wrap4 )
    goto LABEL_27;
  v44 = _7__wrap4->max_length;
  if ( v32 >= v44 )
  {
    p__7__wrap2->klass = 0;
    sub_21FFBF4(p__7__wrap2, 0, v2, v3, v4, v5, v6, v7);
    goto LABEL_19;
  }
  if ( v32 >= (unsigned int)v44 )
LABEL_28:
    sub_21FFED4(p__7__wrap2);
  result = 1;
  v48 = _7__wrap4->m_Items[v32];
  this->fields.__1__state = 1;
  this->fields.__2__current = v48;
  return result;
}


System_Collections_Generic_IEnumerator_int__o *ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *v10; // x20
  struct ExtraBattleUserInterfaceData_JsonConvertData_array *_3__dataArray; // x1

  if ( (byte_593B6A5 & 1) == 0 )
  {
    sub_21FFC50(&ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_TypeInfo);
    byte_593B6A5 = 1;
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
    v10 = (ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *)sub_21FFEBC(ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__dataArray = this->fields.__3__dataArray;
  v10->fields.dataArray = _3__dataArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.dataArray,
    (int32_t)_3__dataArray,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_int__o *)v10;
}


int32_t ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0__System_Collections_IEnumerator_Reset(
        ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0__System_Collections_IEnumerator_get_Current(
        ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &_2__current);
}


void ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0__System_IDisposable_Dispose(
        ExtraBattleUserInterfaceData__GetSkillEffectIds_d__0_o *this,
        const MethodInfo *method)
{
  ;
}


void ExtraBattleUserInterfaceData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B6A2 & 1) == 0 )
  {
    sub_21FFC50(&ExtraBattleUserInterfaceData___c_TypeInfo);
    byte_593B6A2 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ExtraBattleUserInterfaceData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ExtraBattleUserInterfaceData___c_TypeInfo->static_fields->__9 = (struct ExtraBattleUserInterfaceData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ExtraBattleUserInterfaceData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ExtraBattleUserInterfaceData___c___ctor(ExtraBattleUserInterfaceData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


ExtraBattleUserInterfaceData_LabelDataWrapper_o *ExtraBattleUserInterfaceData___c____ctor_b__37_0(
        ExtraBattleUserInterfaceData___c_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *ld,
        const MethodInfo *method)
{
  ExtraBattleUserInterfaceData_LabelDataWrapper_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_593B6A3 & 1) == 0 )
  {
    sub_21FFC50(&ExtraBattleUserInterfaceData_LabelDataWrapper_TypeInfo);
    byte_593B6A3 = 1;
  }
  v4 = (ExtraBattleUserInterfaceData_LabelDataWrapper_o *)sub_21FFEBC(ExtraBattleUserInterfaceData_LabelDataWrapper_TypeInfo);
  ExtraBattleUserInterfaceData_LabelDataWrapper___ctor(v4, ld, v5);
  return v4;
}


bool ExtraBattleUserInterfaceData___c____ctor_b__37_1(
        ExtraBattleUserInterfaceData___c_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *label,
        const MethodInfo *method)
{
  return label && label->fields.values && label->fields.labelType == 1;
}


System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceData_ValueData__o *ExtraBattleUserInterfaceData___c____ctor_b__37_2(
        ExtraBattleUserInterfaceData___c_o *this,
        ExtraBattleUserInterfaceData_LabelData_o *label,
        const MethodInfo *method)
{
  if ( !label )
    sub_21FFECC(this, 0);
  return (System_Collections_Generic_IEnumerable_ExtraBattleUserInterfaceData_ValueData__o *)label->fields.values;
}


bool ExtraBattleUserInterfaceData___c____ctor_b__37_3(
        ExtraBattleUserInterfaceData___c_o *this,
        ExtraBattleUserInterfaceData_ValueData_o *valueData,
        const MethodInfo *method)
{
  return valueData && valueData->fields.valueType == 1;
}


int32_t ExtraBattleUserInterfaceData___c____ctor_b__37_4(
        ExtraBattleUserInterfaceData___c_o *this,
        ExtraBattleUserInterfaceData_ValueData_o *valueData,
        const MethodInfo *method)
{
  if ( !valueData )
    sub_21FFECC(this, 0);
  return valueData->fields.battleValueKey;
}