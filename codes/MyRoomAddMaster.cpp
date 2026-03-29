void MyRoomAddMaster___ctor(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D30F2A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
    byte_4D30F2A = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    198,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string___ctor__);
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__DisplayBgGroupList(
        MyRoomAddMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  System_ValueTuple_int__int__o v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Master_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  MyRoomAddMaster___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Func_object__int__o *_9__13_1; // x22
  Il2CppObject *v25; // x23
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x21
  System_Func_object__object__o *v34; // x22
  System_Collections_Generic_IEnumerable_TResult__o *v35; // x0
  MyRoomAddMaster___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x21
  System_Func_object__long__o *_9__13_3; // x22
  Il2CppObject *v39; // x23
  struct MyRoomAddMaster___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v47; // x0
  MyRoomAddMaster___c_c *v48; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x21
  System_Func_object__int__o *_9__13_4; // x22
  Il2CppObject *v51; // x23
  struct MyRoomAddMaster___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x0
  MyRoomAddMaster___c_c *v60; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v61; // x21
  System_Func_object__int__o *_9__13_5; // x22
  Il2CppObject *v63; // x23
  struct MyRoomAddMaster___c_StaticFields *v64; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v71; // x0
  MyRoomAddMaster___c_c *v72; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x21
  System_Func_T__TResult__o *_9__13_6; // x22
  Il2CppObject *v75; // x23
  struct MyRoomAddMaster___c_StaticFields *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_List_TSource__o *v84; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *v85; // x21
  System_Collections_Generic_List_ValueTuple_int__int___o *v86; // x19
  System_Func_object__bool__o *v87; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  MyRoomAddMaster___c_c *v89; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x20
  System_Func_object__int__o *_9__13_8; // x21
  Il2CppObject *v92; // x22
  struct MyRoomAddMaster___c_StaticFields *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  int32_t v101; // w0
  struct System_ValueTuple_int__int__array *items; // x8
  _QWORD *v103; // x9
  __int64 size; // x10
  MyRoomAddMaster___c_c *v105; // x0
  System_Func_ValueTuple_int__int___int__o *_9__13_9; // x20
  Il2CppObject *v107; // x21
  struct MyRoomAddMaster___c_StaticFields *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v115; // x0
  MyRoomAddMaster___c_c *v116; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x19
  System_Func_ValueTuple_int__int___int__o *_9__13_10; // x20
  Il2CppObject *v119; // x21
  struct MyRoomAddMaster___c_StaticFields *v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x0
  System_ValueTuple_int__int__o item; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D30F32 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_GroupBy_MyRoomAddEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending___f__AnonymousType1_int__long__int__int__int___long___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_ValueTuple_int__int___int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_IGrouping_int__MyRoomAddEntity_____f__AnonymousType1_int__long__int__int__int____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select___f__AnonymousType1_int__long__int__int__int___ValueTuple_int__int____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_ValueTuple_int__int___int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenByDescending___f__AnonymousType1_int__long__int__int__int___int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_ValueTuple_int__int____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C93AD4(&System_Func_ValueTuple_int__int___int__TypeInfo);
    sub_1C93AD4(&System_Func_IGrouping_int__MyRoomAddEntity_____f__AnonymousType1_int__long__int__int__int___TypeInfo);
    sub_1C93AD4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func___f__AnonymousType1_int__long__int__int__int___long__TypeInfo);
    sub_1C93AD4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func___f__AnonymousType1_int__long__int__int__int___ValueTuple_int__int___TypeInfo);
    sub_1C93AD4(&System_Func___f__AnonymousType1_int__long__int__int__int___int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ValueTuple_int__int___Add__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_10__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_1__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_3__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_4__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_5__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_6__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_8__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_9__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__0__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__2__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__7__);
    sub_1C93AD4(&MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    sub_1C93AD4(&Method_System_ValueTuple_int__int___ctor__);
    byte_4D30F32 = 1;
  }
  v3 = sub_1C93D20(MyRoomAddMaster___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_62;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  *(_QWORD *)(v3 + 16) = NetworkManager__getTime(0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarMaster___);
  *(_QWORD *)(v3 + 24) = Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)Master_object, v13, v14, v15, v16, v17, v18);
  list = this->fields.list;
  v20 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__0__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v22 = MyRoomAddMaster___c_TypeInfo;
  v23 = v21;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v22 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__int__o *)v22->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = MyRoomAddMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__13_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_1, v25, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_1__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__13_1;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_1,
      (int32_t)_9__13_1,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__GroupBy_object__int_(
                                                               v23,
                                                               (System_Func_TSource__TKey__o *)_9__13_1,
                                                               (const MethodInfo_31CE04C *)Method_System_Linq_Enumerable_GroupBy_MyRoomAddEntity__int___);
  v34 = (System_Func_object__object__o *)sub_1C93D20(System_Func_IGrouping_int__MyRoomAddEntity_____f__AnonymousType1_int__long__int__int__int___TypeInfo);
  System_Func_object__object____ctor(
    v34,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__2__,
    0);
  v35 = System_Linq_Enumerable__Select_object__object_(
          v33,
          (System_Func_TSource__TResult__o *)v34,
          (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_IGrouping_int__MyRoomAddEntity_____f__AnonymousType1_int__long__int__int__int____);
  v36 = MyRoomAddMaster___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v36 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_3 = (System_Func_object__long__o *)v36->static_fields->__9__13_3;
  if ( !_9__13_3 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = MyRoomAddMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__13_3 = (System_Func_object__long__o *)sub_1C93D20(System_Func___f__AnonymousType1_int__long__int__int__int___long__TypeInfo);
    System_Func_object__long____ctor(_9__13_3, v39, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_3__, 0);
    v40 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v40->__9__13_3 = (struct System_Func___f__AnonymousType1_int__long__int__int__int___long__o *)_9__13_3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v40->__9__13_3, (int32_t)_9__13_3, v41, v42, v43, v44, v45, v46);
  }
  v47 = System_Linq_Enumerable__OrderByDescending_object__long_(
          v37,
          (System_Func_TSource__TKey__o *)_9__13_3,
          (const MethodInfo_31D3E50 *)Method_System_Linq_Enumerable_OrderByDescending___f__AnonymousType1_int__long__int__int__int___long___);
  v48 = MyRoomAddMaster___c_TypeInfo;
  v49 = v47;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v48 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_4 = (System_Func_object__int__o *)v48->static_fields->__9__13_4;
  if ( !_9__13_4 )
  {
    if ( !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v48 = MyRoomAddMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v48->static_fields->__9;
    _9__13_4 = (System_Func_object__int__o *)sub_1C93D20(System_Func___f__AnonymousType1_int__long__int__int__int___int__TypeInfo);
    System_Func_object__int____ctor(_9__13_4, v51, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_4__, 0);
    v52 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v52->__9__13_4 = (struct System_Func___f__AnonymousType1_int__long__int__int__int___int__o *)_9__13_4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v52->__9__13_4, (int32_t)_9__13_4, v53, v54, v55, v56, v57, v58);
  }
  v59 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v49,
          (System_Func_TSource__TKey__o *)_9__13_4,
          (const MethodInfo_31E35A8 *)Method_System_Linq_Enumerable_ThenByDescending___f__AnonymousType1_int__long__int__int__int___int___);
  v60 = MyRoomAddMaster___c_TypeInfo;
  v61 = v59;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v60 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_5 = (System_Func_object__int__o *)v60->static_fields->__9__13_5;
  if ( !_9__13_5 )
  {
    if ( !v60->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v60);
      v60 = MyRoomAddMaster___c_TypeInfo;
    }
    v63 = (Il2CppObject *)v60->static_fields->__9;
    _9__13_5 = (System_Func_object__int__o *)sub_1C93D20(System_Func___f__AnonymousType1_int__long__int__int__int___int__TypeInfo);
    System_Func_object__int____ctor(_9__13_5, v63, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_5__, 0);
    v64 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v64->__9__13_5 = (struct System_Func___f__AnonymousType1_int__long__int__int__int___int__o *)_9__13_5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v64->__9__13_5, (int32_t)_9__13_5, v65, v66, v67, v68, v69, v70);
  }
  v71 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v61,
          (System_Func_TSource__TKey__o *)_9__13_5,
          (const MethodInfo_31E35A8 *)Method_System_Linq_Enumerable_ThenByDescending___f__AnonymousType1_int__long__int__int__int___int___);
  v72 = MyRoomAddMaster___c_TypeInfo;
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)v71;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v72 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_6 = (System_Func_T__TResult__o *)v72->static_fields->__9__13_6;
  if ( !_9__13_6 )
  {
    if ( !v72->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v72);
      v72 = MyRoomAddMaster___c_TypeInfo;
    }
    v75 = (Il2CppObject *)v72->static_fields->__9;
    _9__13_6 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func___f__AnonymousType1_int__long__int__int__int___ValueTuple_int__int___TypeInfo);
    System_Func_object__ValueTuple_int__int_____ctor(
      _9__13_6,
      v75,
      Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_6__,
      0);
    v76 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v76->__9__13_6 = (struct System_Func___f__AnonymousType1_int__long__int__int__int___ValueTuple_int__int___o *)_9__13_6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v76->__9__13_6, (int32_t)_9__13_6, v77, v78, v79, v80, v81, v82);
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__ValueTuple_int__int__(
                                                               v73,
                                                               (System_Func_TSource__TResult__o *)_9__13_6,
                                                               (const MethodInfo_31D9918 *)Method_System_Linq_Enumerable_Select___f__AnonymousType1_int__long__int__int__int___ValueTuple_int__int____);
  v84 = System_Linq_Enumerable__ToList_ValueTuple_int__int__(
          v83,
          (const MethodInfo_31E8AD8 *)Method_System_Linq_Enumerable_ToList_ValueTuple_int__int____);
  v85 = this->fields.list;
  v86 = (System_Collections_Generic_List_ValueTuple_int__int___o *)v84;
  v87 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v87,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass13_0__DisplayBgGroupList_b__7__,
    0);
  v88 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v85,
          (System_Func_TSource__bool__o *)v87,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v89 = MyRoomAddMaster___c_TypeInfo;
  v90 = v88;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v89 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_8 = (System_Func_object__int__o *)v89->static_fields->__9__13_8;
  if ( !_9__13_8 )
  {
    if ( !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      v89 = MyRoomAddMaster___c_TypeInfo;
    }
    v92 = (Il2CppObject *)v89->static_fields->__9;
    _9__13_8 = (System_Func_object__int__o *)sub_1C93D20(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_8, v92, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_8__, 0);
    v93 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v93->__9__13_8 = (struct System_Func_MyRoomAddEntity__int__o *)_9__13_8;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v93->__9__13_8, (int32_t)_9__13_8, v94, v95, v96, v97, v98, v99);
  }
  v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                v90,
                                                                (System_Func_TSource__TResult__o *)_9__13_8,
                                                                (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
  v101 = System_Linq_Enumerable__FirstOrDefault_int_(
           v100,
           (const MethodInfo_31CBF30 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
  item = 0;
  System_ValueTuple_int__int____ctor(
    (System_ValueTuple_int__int__o)&item,
    0,
    v101,
    (const MethodInfo_3BD76B8 *)Method_System_ValueTuple_int__int___ctor__);
  if ( !v86
    || (v5 = item,
        items = v86->fields._items,
        v103 = Method_System_Collections_Generic_List_ValueTuple_int__int___Add__,
        ++v86->fields._version,
        !items) )
  {
LABEL_62:
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C93D2C)(v4, v5);
  }
  size = v86->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_int__int____AddWithResize(
      v86,
      v5,
      *(const MethodInfo_381EAD8 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v86->fields._size = size + 1;
    items->m_Items[size] = v5;
  }
  v105 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v105 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_9 = v105->static_fields->__9__13_9;
  if ( !_9__13_9 )
  {
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = MyRoomAddMaster___c_TypeInfo;
    }
    v107 = (Il2CppObject *)v105->static_fields->__9;
    _9__13_9 = (System_Func_ValueTuple_int__int___int__o *)sub_1C93D20(System_Func_ValueTuple_int__int___int__TypeInfo);
    System_Func_ValueTuple_int__int___int____ctor(
      _9__13_9,
      v107,
      Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_9__,
      0);
    v108 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v108->__9__13_9 = _9__13_9;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v108->__9__13_9, (int32_t)_9__13_9, v109, v110, v111, v112, v113, v114);
  }
  v115 = System_Linq_Enumerable__OrderByDescending_ValueTuple_int__int___int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v86,
           (System_Func_TSource__TKey__o *)_9__13_9,
           (const MethodInfo_31D3BC8 *)Method_System_Linq_Enumerable_OrderByDescending_ValueTuple_int__int___int___);
  v116 = MyRoomAddMaster___c_TypeInfo;
  v117 = (System_Collections_Generic_IEnumerable_TSource__o *)v115;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v116 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_10 = v116->static_fields->__9__13_10;
  if ( !_9__13_10 )
  {
    if ( !v116->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v116);
      v116 = MyRoomAddMaster___c_TypeInfo;
    }
    v119 = (Il2CppObject *)v116->static_fields->__9;
    _9__13_10 = (System_Func_ValueTuple_int__int___int__o *)sub_1C93D20(System_Func_ValueTuple_int__int___int__TypeInfo);
    System_Func_ValueTuple_int__int___int____ctor(
      _9__13_10,
      v119,
      Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_10__,
      0);
    v120 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v120->__9__13_10 = _9__13_10;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v120->__9__13_10,
      (int32_t)_9__13_10,
      v121,
      v122,
      v123,
      v124,
      v125,
      v126);
  }
  v127 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ValueTuple_int__int___int_(
                                                                v117,
                                                                (System_Func_TSource__TResult__o *)_9__13_10,
                                                                (const MethodInfo_31D6604 *)Method_System_Linq_Enumerable_Select_ValueTuple_int__int___int___);
  return (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                     v127,
                                                     (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
}


int32_t MyRoomAddMaster__GetBackObjAnimationNum(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  struct MyRoomAddEntity_o **p_BackObjAnimationChangeEntity; // x19
  MyRoomAddEntity_o *EnableEntityList; // x0
  const MethodInfo *v8; // x1
  MyRoomAddEntity_o *BackObjAnimationChangeEntity; // x8
  System_Collections_Generic_List_object__o *v10; // x20
  MyRoomAddEntity_o *v11; // x21
  int32_t overwriteId; // w28
  int size; // w29
  int64_t Time; // x0
  int64_t v15; // x22
  MyRoomAddMaster___c_c *v16; // x0
  System_Comparison_T__o *_9__12_0; // x23
  Il2CppObject *v18; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w24
  int32_t v27; // w23
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  MyRoomAddEntity_o *v34; // x25
  int32_t condValue; // w26
  int32_t condType; // w27
  int64_t condValue2; // x25
  char v39; // [xsp+Ch] [xbp-64h]

  if ( (byte_4D30F31 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F31 = 1;
  }
  p_BackObjAnimationChangeEntity = &this->fields.BackObjAnimationChangeEntity;
  if ( !this->fields.BackObjAnimationChangeEntity )
    return 0;
  EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddMaster__GetEnableEntityList(this, 8, groupId, 1, v3);
  BackObjAnimationChangeEntity = this->fields.BackObjAnimationChangeEntity;
  if ( !BackObjAnimationChangeEntity
    || (v10 = (System_Collections_Generic_List_object__o *)EnableEntityList,
        EnableEntityList = (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(BackObjAnimationChangeEntity, v8),
        !*p_BackObjAnimationChangeEntity)
    || !v10 )
  {
LABEL_32:
    sub_1C93D2C(EnableEntityList, v8);
  }
  v11 = EnableEntityList;
  overwriteId = (*p_BackObjAnimationChangeEntity)->fields.overwriteId;
  size = v10->fields._size;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( size < 1 )
    return 1;
  v15 = Time;
  v16 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__12_0 = (System_Comparison_T__o *)v16->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__12_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__12_0, v18, Method_MyRoomAddMaster___c__GetBackObjAnimationNum_b__12_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__12_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__12_0,
      (int32_t)_9__12_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  System_Collections_Generic_List_object___Sort_59225184(
    v10,
    _9__12_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v39 = 0;
  v26 = 0;
  v27 = 1;
  do
  {
    EnableEntityList = (MyRoomAddEntity_o *)System_Collections_Generic_List_object___get_Item(
                                              v10,
                                              v26,
                                              (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_32;
    v34 = EnableEntityList;
    if ( overwriteId == EnableEntityList->fields.overwriteId )
    {
      if ( v11 == (MyRoomAddEntity_o *)MyRoomAddEntity__GetScheduleUpdateAt(EnableEntityList, v8) )
      {
        if ( v34->fields.endedAt > v15 )
          goto LABEL_26;
        v39 = 1;
      }
      if ( v34->fields.startedAt <= v15 )
      {
        condType = v34->fields.condType;
        condValue = v34->fields.condValue;
        condValue2 = v34->fields.condValue2;
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        v27 += CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
      }
    }
LABEL_26:
    ++v26;
  }
  while ( size != v26 );
  if ( (v39 & 1) != 0 )
  {
    *p_BackObjAnimationChangeEntity = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_BackObjAnimationChangeEntity, 0, v28, v29, v30, v31, v32, v33);
  }
  return v27;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBackObjId(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v7; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v9; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v11; // x20
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__10_0; // x21
  Il2CppObject *v14; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w21
  struct MyRoomAddEntity_o *v23; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24
  const MethodInfo *v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4D30F30 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F30 = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 8, groupId, v3);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      8,
                                                                      groupId,
                                                                      0,
                                                                      v7);
    if ( !EnableEntityList )
LABEL_23:
      sub_1C93D2C(EnableEntityList, v9);
    size = EnableEntityList->fields._size;
    v11 = EnableEntityList;
    if ( size < 1 )
    {
      return -1;
    }
    else
    {
      v12 = MyRoomAddMaster___c_TypeInfo;
      if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
        v12 = MyRoomAddMaster___c_TypeInfo;
      }
      _9__10_0 = (System_Comparison_T__o *)v12->static_fields->__9__10_0;
      if ( !_9__10_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = MyRoomAddMaster___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__10_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__10_0,
          v14,
          Method_MyRoomAddMaster___c__GetChangeMyRoomBackObjId_b__10_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__10_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__10_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
          (int32_t)_9__10_0,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      System_Collections_Generic_List_object___Sort_59225184(
        v11,
        _9__10_0,
        (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v22 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v11,
                                                                          v22,
                                                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_23;
        v23 = (struct MyRoomAddEntity_o *)EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          break;
        if ( size == ++v22 )
          return -1;
      }
      if ( MyRoomAddEntity__GetScheduleUpdateAt(v23, v27) >= 1 )
      {
        this->fields.BackObjAnimationChangeEntity = v23;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.BackObjAnimationChangeEntity,
          (int32_t)v23,
          v28,
          v29,
          v30,
          v31,
          v32,
          v33);
      }
      return v23->fields.overwriteId;
    }
  }
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgId(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v7; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v9; // x19
  MyRoomAddMaster___c_c *v10; // x0
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v12; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w20
  System_Collections_Generic_List_object__o *v21; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgImgId; // w0

  if ( (byte_4D30F2C & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F2C = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    1,
                                                                    groupId,
                                                                    0,
                                                                    v3);
  if ( !EnableEntityList )
    goto LABEL_21;
  size = EnableEntityList->fields._size;
  v9 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_17:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgImgId = EventMaster__getMyRoomBgImgId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgImgId & ~(MyRoomBgImgId >> 31);
      }
    }
LABEL_21:
    sub_1C93D2C(EnableEntityList, v7);
  }
  v10 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v10 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v10->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MyRoomAddMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v12, Method_MyRoomAddMaster___c__GetChangeMyRoomBgId_b__6_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__6_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v14, v15, v16, v17, v18, v19);
  }
  System_Collections_Generic_List_object___Sort_59225184(
    v9,
    _9__6_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v20 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v9,
                                                                      v20,
                                                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_21;
    v21 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v21->fields._syncRoot);
    if ( size == ++v20 )
      goto LABEL_17;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomBgm(MyRoomAddMaster_o *this, int32_t groupId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t result; // w0
  const MethodInfo *v7; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v9; // x1
  int size; // w25
  System_Collections_Generic_List_object__o *v11; // x19
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__7_0; // x20
  Il2CppObject *v14; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w20
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t klass_high; // w22
  int32_t klass; // w24
  int64_t monitor_low; // x23
  int32_t MyRoomBgmId; // w0

  if ( (byte_4D30F2D & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F2D = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 2, groupId, v3);
  if ( result > 0 )
    return result;
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    2,
                                                                    groupId,
                                                                    0,
                                                                    v7);
  if ( !EnableEntityList )
LABEL_23:
    sub_1C93D2C(EnableEntityList, v9);
  size = EnableEntityList->fields._size;
  v11 = EnableEntityList;
  if ( size < 1 )
  {
LABEL_18:
    EnableEntityList = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( EnableEntityList )
    {
      EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)EnableEntityList,
                                                                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( EnableEntityList )
      {
        MyRoomBgmId = EventMaster__getMyRoomBgmId((EventMaster_o *)EnableEntityList, 0);
        return MyRoomBgmId & ~(MyRoomBgmId >> 31);
      }
    }
    goto LABEL_23;
  }
  v12 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v12 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Comparison_T__o *)v12->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MyRoomAddMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__7_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(_9__7_0, v14, Method_MyRoomAddMaster___c__GetChangeMyRoomBgm_b__7_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__7_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v16, v17, v18, v19, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_59225184(
    v11,
    _9__7_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v11,
                                                                      v22,
                                                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_23;
    v23 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      return HIDWORD(v23->fields._syncRoot);
    if ( size == ++v22 )
      goto LABEL_18;
  }
}


int32_t MyRoomAddMaster__GetChangeMyRoomFrontObjId(
        MyRoomAddMaster_o *this,
        int32_t defaultId,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t result; // w0
  const MethodInfo *v8; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v10; // x1
  int size; // w26
  System_Collections_Generic_List_object__o *v12; // x20
  MyRoomAddMaster___c_c *v13; // x0
  System_Comparison_T__o *_9__8_0; // x21
  Il2CppObject *v15; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w21
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t klass_high; // w23
  int32_t klass; // w25
  int64_t monitor_low; // x24

  if ( (byte_4D30F2E & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F2E = 1;
  }
  result = MyRoomAddMaster__GetDiffObjectId(this, 6, groupId, method);
  if ( result <= 0 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                      this,
                                                                      6,
                                                                      groupId,
                                                                      0,
                                                                      v8);
    if ( !EnableEntityList )
LABEL_21:
      sub_1C93D2C(EnableEntityList, v10);
    size = EnableEntityList->fields._size;
    v12 = EnableEntityList;
    if ( size < 1 )
    {
      return defaultId;
    }
    else
    {
      v13 = MyRoomAddMaster___c_TypeInfo;
      if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
        v13 = MyRoomAddMaster___c_TypeInfo;
      }
      _9__8_0 = (System_Comparison_T__o *)v13->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = MyRoomAddMaster___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__8_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_MyRoomAddEntity__TypeInfo);
        System_Comparison_object____ctor(
          _9__8_0,
          v15,
          Method_MyRoomAddMaster___c__GetChangeMyRoomFrontObjId_b__8_0__,
          0);
        static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__8_0;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0,
          (int32_t)_9__8_0,
          v17,
          v18,
          v19,
          v20,
          v21,
          v22);
      }
      System_Collections_Generic_List_object___Sort_59225184(
        v12,
        _9__8_0,
        (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
      v23 = 0;
      while ( 1 )
      {
        EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          v12,
                                                                          v23,
                                                                          (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
        if ( !EnableEntityList )
          goto LABEL_21;
        v24 = EnableEntityList;
        klass = (int32_t)EnableEntityList[1].klass;
        klass_high = HIDWORD(EnableEntityList[1].klass);
        monitor_low = SLODWORD(EnableEntityList[1].monitor);
        if ( !CondType_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
        if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
          return HIDWORD(v24->fields._syncRoot);
        if ( size == ++v23 )
          return defaultId;
      }
    }
  }
  return result;
}


int64_t MyRoomAddMaster__GetChangeMyRoomGetScheduleUpdateAt(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  int64_t result; // x0

  result = (int64_t)this->fields.BackObjAnimationChangeEntity;
  if ( result )
    return MyRoomAddEntity__GetScheduleUpdateAt((MyRoomAddEntity_o *)result, method);
  return result;
}


int32_t MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        bool checkDiff,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  System_Collections_Generic_List_object__o *EnableEntityList; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int size; // w28
  System_Collections_Generic_List_object__o *v11; // x22
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__9_0; // x23
  Il2CppObject *v14; // x24
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w23
  System_Collections_Generic_List_object__o *v23; // x24
  int32_t klass_high; // w25
  int32_t klass; // w27
  int64_t monitor_low; // x26
  int32_t syncRoot_high; // w22
  const MethodInfo *v28; // x3
  int32_t result; // w0

  if ( (byte_4D30F2F & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F2F = 1;
  }
  EnableEntityList = (System_Collections_Generic_List_object__o *)MyRoomAddMaster__GetEnableEntityList(
                                                                    this,
                                                                    7,
                                                                    groupId,
                                                                    0,
                                                                    v4);
  if ( !EnableEntityList )
    goto LABEL_28;
  size = EnableEntityList->fields._size;
  v11 = EnableEntityList;
  if ( size < 1 )
    goto LABEL_19;
  v12 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v12 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__9_0 = (System_Comparison_T__o *)v12->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MyRoomAddMaster___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__9_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_MyRoomAddEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__9_0,
      v14,
      Method_MyRoomAddMaster___c__GetChangeMyRoomMultipleViewBgId_b__9_0__,
      0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Comparison_MyRoomAddEntity__o *)_9__9_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v16, v17, v18, v19, v20, v21);
  }
  System_Collections_Generic_List_object___Sort_59225184(
    v11,
    _9__9_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
  v22 = 0;
  while ( 1 )
  {
    EnableEntityList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      v11,
                                                                      v22,
                                                                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( !EnableEntityList )
      goto LABEL_28;
    v23 = EnableEntityList;
    klass = (int32_t)EnableEntityList[1].klass;
    klass_high = HIDWORD(EnableEntityList[1].klass);
    monitor_low = SLODWORD(EnableEntityList[1].monitor);
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(klass, klass_high, monitor_low, 0, 0, 0) )
      break;
    if ( size == ++v22 )
      goto LABEL_19;
  }
  syncRoot_high = HIDWORD(v23->fields._syncRoot);
  if ( !syncRoot_high )
LABEL_19:
    syncRoot_high = MyRoomAddMaster__GetChangeMyRoomBgId(this, groupId, v9);
  if ( !checkDiff )
    return syncRoot_high;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  EnableEntityList = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !EnableEntityList )
LABEL_28:
    sub_1C93D2C(EnableEntityList, v8);
  result = MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)EnableEntityList, 1, syncRoot_high, v28);
  if ( result <= 0 )
    return syncRoot_high;
  return result;
}


int32_t MyRoomAddMaster__GetDiffObjectId(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t v7; // w20
  Il2CppObject *Master_object; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4D30F36 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D30F36 = 1;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, 0, method);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_MyroomAddBgDiffMaster___);
  if ( !Master_object )
    sub_1C93D2C(0, v9);
  return MyroomAddBgDiffMaster__GetDisplayObjectId((MyroomAddBgDiffMaster_o *)Master_object, type, v7, v10);
}


System_Collections_Generic_List_int__o *MyRoomAddMaster__GetDisplayOverWriteIds(
        MyRoomAddMaster_o *this,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x19
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  const MethodInfo *v13; // x3
  struct System_Int32_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  const MethodInfo *v17; // x2
  struct System_Int32_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  MyRoomAddMaster___c_c *v24; // x0
  System_Predicate_int__o *_9__14_0; // x20
  Il2CppObject *v26; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7

  if ( (byte_4D30F33 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__RemoveAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Predicate_int__TypeInfo);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F33 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v7 = MyRoomAddMaster__GetChangeMyRoomMultipleViewBgId(this, groupId, 1, v6);
  if ( !v5 )
    goto LABEL_27;
  items = v5->fields._items;
  v11 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_27;
  size = v5->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = size + 1;
    items->m_Items[size] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBgm(this, groupId, v9);
  v14 = v5->fields._items;
  v15 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v14 )
    goto LABEL_27;
  v16 = v5->fields._size;
  if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v16 + 1;
    v14->m_Items[v16] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomFrontObjId(this, groupId, -1, v13);
  v18 = v5->fields._items;
  v19 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v18 )
    goto LABEL_27;
  v20 = v5->fields._size;
  if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v20 + 1;
    v18->m_Items[v20] = v7;
  }
  v7 = MyRoomAddMaster__GetChangeMyRoomBackObjId(this, groupId, v17);
  v21 = v5->fields._items;
  v22 = Method_System_Collections_Generic_List_int__Add__;
  ++v5->fields._version;
  if ( !v21 )
LABEL_27:
    sub_1C93D2C(v7, v8);
  v23 = v5->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v5,
      v7,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v5->fields._size = v23 + 1;
    v21->m_Items[v23] = v7;
  }
  v24 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v24 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__14_0 = v24->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = MyRoomAddMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v24->static_fields->__9;
    _9__14_0 = (System_Predicate_int__o *)sub_1C93D20(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(_9__14_0, v26, Method_MyRoomAddMaster___c__GetDisplayOverWriteIds_b__14_0__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = _9__14_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0,
      (int32_t)_9__14_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  System_Collections_Generic_List_int___RemoveAll(
    v5,
    (System_Predicate_T__o *)_9__14_0,
    (const MethodInfo_385DFA0 *)Method_System_Collections_Generic_List_int__RemoveAll__);
  return v5;
}


System_Collections_Generic_List_MyRoomAddEntity__o *MyRoomAddMaster__GetEnableEntityList(
        MyRoomAddMaster_o *this,
        int32_t type,
        int32_t groupId,
        bool isIgnoreTimeLimit,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x23
  const MethodInfo *v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w24
  int64_t Time; // x25
  int32_t MainGroupWarId; // w26
  int32_t v15; // w27
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0

  if ( (byte_4D30F2B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D30F2B = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_MyRoomAddEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_MyRoomAddEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_29;
  Count = System_Collections_ObjectModel_Collection_object___get_Count(
            list,
            (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Count__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( groupId )
    MainGroupWarId = 0;
  else
    MainGroupWarId = MyRoomAddMaster__GetMainGroupWarId(this, v10);
  if ( Count >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
      if ( !list )
        break;
      list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                                 list,
                                                                 v15,
                                                                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_MyRoomAddEntity__get_Item__);
      if ( !list )
        break;
      v10 = (const MethodInfo *)list;
      if ( HIDWORD(list->fields.items) == type
        && (groupId < 0 || HIDWORD(list[1].klass) == groupId)
        && (groupId || LODWORD(list[1].monitor) == MainGroupWarId)
        && (isIgnoreTimeLimit || (__int64)list[2].monitor <= Time && (__int64)list[2].fields.items >= Time) )
      {
        if ( !v9 )
          break;
        items = v9->fields._items;
        v23 = Method_System_Collections_Generic_List_MyRoomAddEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          break;
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)list,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v25[4] = (Il2CppClass *)v10;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v10, v16, v17, v18, v19, v20, v21);
        }
      }
      if ( Count == ++v15 )
        return (System_Collections_Generic_List_MyRoomAddEntity__o *)v9;
    }
LABEL_29:
    sub_1C93D2C(list, v10);
  }
  return (System_Collections_Generic_List_MyRoomAddEntity__o *)v9;
}


// local variable allocation has failed, the output may be wrong!
MyRoomAddEntity_o *MyRoomAddMaster__GetEntity(
        MyRoomAddMaster_o *this,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D30F28 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
    byte_4D30F28 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&priority);
  return (MyRoomAddEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                PK,
                                (const MethodInfo_34681D4 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__GetEntity__);
}


int32_t MyRoomAddMaster__GetMainGroupWarId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  int32_t *v6; // x22
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v8; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0
  System_Collections_Generic_List_T__o *v10; // x19
  System_Func_object__bool__o *v11; // x21
  MyRoomAddMaster___c_c *v12; // x0
  System_Comparison_T__o *_9__16_2; // x20
  Il2CppObject *v14; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7

  if ( (byte_4D30F35 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_MyRoomAddEntity___);
    sub_1C93AD4(&System_Comparison_MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C93AD4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__);
    sub_1C93AD4(&MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_5317/*"DisplayMyRoomBgWar"*/);
    byte_4D30F35 = 1;
  }
  v3 = sub_1C93D20(MyRoomAddMaster___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    goto LABEL_19;
  *(_QWORD *)(v3 + 16) = Time;
  *(_DWORD *)(v3 + 24) = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5317/*"DisplayMyRoomBgWar"*/, -1, 0);
  v6 = (int32_t *)(v3 + 24);
  list = this->fields.list;
  v8 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__0__,
    0);
  v9 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v8,
         (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v10 = (System_Collections_Generic_List_T__o *)System_Linq_Enumerable__ToList_object_(
                                                  v9,
                                                  (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_MyRoomAddEntity___);
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v3,
    Method_MyRoomAddMaster___c__DisplayClass16_0__GetMainGroupWarId_b__1__,
    0);
  Time = BasicHelper__Any_object_(
           v10,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_318DB78 *)Method_BasicHelper_Any_MyRoomAddEntity___);
  if ( (Time & 1) != 0 )
    return *v6;
  if ( !v10 )
LABEL_19:
    sub_1C93D2C(Time, v5);
  if ( v10->fields._size >= 1 )
  {
    v12 = MyRoomAddMaster___c_TypeInfo;
    if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
      v12 = MyRoomAddMaster___c_TypeInfo;
    }
    _9__16_2 = (System_Comparison_T__o *)v12->static_fields->__9__16_2;
    if ( !_9__16_2 )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = MyRoomAddMaster___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v12->static_fields->__9;
      _9__16_2 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_MyRoomAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__16_2, v14, Method_MyRoomAddMaster___c__GetMainGroupWarId_b__16_2__, 0);
      static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
      static_fields->__9__16_2 = (struct System_Comparison_MyRoomAddEntity__o *)_9__16_2;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_2,
        (int32_t)_9__16_2,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
    }
    System_Collections_Generic_List_object___Sort_59225184(
      (System_Collections_Generic_List_object__o *)v10,
      _9__16_2,
      (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_MyRoomAddEntity__Sort__);
    Time = (int64_t)System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)v10,
                      0,
                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MyRoomAddEntity__get_Item__);
    if ( Time )
    {
      v6 = (int32_t *)(Time + 32);
      return *v6;
    }
    goto LABEL_19;
  }
  return 0;
}


int32_t MyRoomAddMaster__GetPhotoCampaignBgGroupId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0
  MyRoomAddMaster___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__int__o *_9__18_1; // x20
  Il2CppObject *v12; // x21
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4D30F37 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
    sub_1C93AD4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__GetPhotoCampaignBgGroupId_b__18_1__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayClass18_0__GetPhotoCampaignBgGroupId_b__0__);
    sub_1C93AD4(&MyRoomAddMaster___c__DisplayClass18_0_TypeInfo);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F37 = 1;
  }
  v3 = (Il2CppObject *)sub_1C93D20(MyRoomAddMaster___c__DisplayClass18_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    sub_1C93D2C(Time, v5);
  v3[1].klass = (Il2CppClass *)Time;
  list = this->fields.list;
  v7 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    v3,
    Method_MyRoomAddMaster___c__DisplayClass18_0__GetPhotoCampaignBgGroupId_b__0__,
    0);
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_MyRoomAddEntity___);
  v9 = MyRoomAddMaster___c_TypeInfo;
  v10 = v8;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v9 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__18_1 = (System_Func_object__int__o *)v9->static_fields->__9__18_1;
  if ( !_9__18_1 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = MyRoomAddMaster___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__18_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__18_1, v12, Method_MyRoomAddMaster___c__GetPhotoCampaignBgGroupId_b__18_1__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__18_1 = (struct System_Func_MyRoomAddEntity__int__o *)_9__18_1;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_1,
      (int32_t)_9__18_1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               v10,
                                                               (System_Func_TSource__TResult__o *)_9__18_1,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_MyRoomAddEntity__int___);
  return System_Linq_Enumerable__FirstOrDefault_int_(
           v20,
           (const MethodInfo_31CBF30 *)Method_System_Linq_Enumerable_FirstOrDefault_int___);
}


bool MyRoomAddMaster__IsExistOverWriteIdInGroup(
        MyRoomAddMaster_o *this,
        int32_t overWriteId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4D30F34 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_1C93AD4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__);
    sub_1C93AD4(&MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
    byte_4D30F34 = 1;
  }
  v7 = sub_1C93D20(MyRoomAddMaster___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  *(_DWORD *)(v7 + 16) = groupId;
  *(_DWORD *)(v7 + 20) = overWriteId;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_MyRoomAddMaster___c__DisplayClass15_0__IsExistOverWriteIdInGroup_b__0__,
    0);
  return System_Linq_Enumerable__Any_object__52110824(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v11,
           (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


bool MyRoomAddMaster__IsForceDispBgGroupId(MyRoomAddMaster_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int64_t Time; // x0
  __int64 v5; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v7; // x21

  if ( (byte_4D30F38 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
    sub_1C93AD4(&System_Func_MyRoomAddEntity__bool__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayClass19_0__IsForceDispBgGroupId_b__0__);
    sub_1C93AD4(&MyRoomAddMaster___c__DisplayClass19_0_TypeInfo);
    byte_4D30F38 = 1;
  }
  v3 = (Il2CppObject *)sub_1C93D20(MyRoomAddMaster___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor(v3, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  if ( !v3 )
    sub_1C93D2C(Time, v5);
  v3[1].klass = (Il2CppClass *)Time;
  list = this->fields.list;
  v7 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_MyRoomAddEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(v7, v3, Method_MyRoomAddMaster___c__DisplayClass19_0__IsForceDispBgGroupId_b__0__, 0);
  return System_Linq_Enumerable__Any_object__52110824(
           (System_Collections_Generic_IEnumerable_TSource__o *)list,
           (System_Func_TSource__bool__o *)v7,
           (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_MyRoomAddEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool MyRoomAddMaster__TryGetEntity(
        MyRoomAddMaster_o *this,
        MyRoomAddEntity_o **entity,
        int32_t id,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D30F29 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
    byte_4D30F29 = 1;
  }
  PK = (Il2CppObject *)MyRoomAddEntity__CreatePK(id, type, priority, *(const MethodInfo **)&type);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_MyRoomAddMaster__MyRoomAddEntity__string__TryGetEntity__);
}


void MyRoomAddMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D30F39 & 1) == 0 )
  {
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    byte_4D30F39 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(MyRoomAddMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomAddMaster___c_TypeInfo->static_fields->__9 = (struct MyRoomAddMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MyRoomAddMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MyRoomAddMaster___c___ctor(MyRoomAddMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.groupId;
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_10(
        MyRoomAddMaster___c_o *this,
        System_ValueTuple_int__int__o x,
        const MethodInfo *method)
{
  return x.fields.Item1;
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_11(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C93D2C(this, 0);
  return MyRoomAddEntity__GetSortPriority(e, (const MethodInfo *)e);
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_12(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C93D2C(this, 0);
  return e->fields.priority;
}


int64_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_3(
        MyRoomAddMaster___c_o *this,
        __f__AnonymousType1_int__long__int__int__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4D30F3A & 1) == 0 )
  {
    this = (MyRoomAddMaster___c_o *)sub_1C93AD4(&Method___f__AnonymousType1_int__long__int__int__int__get_EventStartAt__);
    byte_4D30F3A = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  return x->fields._EventStartAt_i__Field;
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_4(
        MyRoomAddMaster___c_o *this,
        __f__AnonymousType1_int__long__int__int__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4D30F3B & 1) == 0 )
  {
    this = (MyRoomAddMaster___c_o *)sub_1C93AD4(&Method___f__AnonymousType1_int__long__int__int__int__get_SortPriority__);
    byte_4D30F3B = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  return x->fields._SortPriority_i__Field;
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_5(
        MyRoomAddMaster___c_o *this,
        __f__AnonymousType1_int__long__int__int__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4D30F3C & 1) == 0 )
  {
    this = (MyRoomAddMaster___c_o *)sub_1C93AD4(&Method___f__AnonymousType1_int__long__int__int__int__get_Priority__);
    byte_4D30F3C = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  return x->fields._Priority_i__Field;
}


System_ValueTuple_int__int__o MyRoomAddMaster___c___DisplayBgGroupList_b__13_6(
        MyRoomAddMaster___c_o *this,
        __f__AnonymousType1_int__long__int__int__int__o *x,
        const MethodInfo *method)
{
  int32_t GroupId_i__Field; // w1
  int32_t ForceDispBgPriority_i__Field; // w2
  System_ValueTuple_int__int__o v6; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D30F3D & 1) == 0 )
  {
    sub_1C93AD4(&Method___f__AnonymousType1_int__long__int__int__int__get_ForceDispBgPriority__);
    sub_1C93AD4(&Method___f__AnonymousType1_int__long__int__int__int__get_GroupId__);
    this = (MyRoomAddMaster___c_o *)sub_1C93AD4(&Method_System_ValueTuple_int__int___ctor__);
    byte_4D30F3D = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  GroupId_i__Field = x->fields._GroupId_i__Field;
  ForceDispBgPriority_i__Field = x->fields._ForceDispBgPriority_i__Field;
  v6 = 0;
  System_ValueTuple_int__int____ctor(
    (System_ValueTuple_int__int__o)&v6,
    GroupId_i__Field,
    ForceDispBgPriority_i__Field,
    (const MethodInfo_3BD76B8 *)Method_System_ValueTuple_int__int___ctor__);
  return v6;
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_8(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return MyRoomAddEntity__GetForceDispBgPriority(entity, (const MethodInfo *)entity);
}


int32_t MyRoomAddMaster___c___DisplayBgGroupList_b__13_9(
        MyRoomAddMaster___c_o *this,
        System_ValueTuple_int__int__o x,
        const MethodInfo *method)
{
  return x.fields.Item2;
}


int32_t MyRoomAddMaster___c___GetBackObjAnimationNum_b__12_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBackObjId_b__10_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgId_b__6_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomBgm_b__7_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomFrontObjId_b__8_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetChangeMyRoomMultipleViewBgId_b__9_0(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


bool MyRoomAddMaster___c___GetDisplayOverWriteIds_b__14_0(
        MyRoomAddMaster___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id < 1;
}


int32_t MyRoomAddMaster___c___GetMainGroupWarId_b__16_2(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *a,
        MyRoomAddEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}


int32_t MyRoomAddMaster___c___GetPhotoCampaignBgGroupId_b__18_1(
        MyRoomAddMaster___c_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.groupId;
}


void MyRoomAddMaster___c__DisplayClass13_0___ctor(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass13_0___DisplayBgGroupList_b__0(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.groupId && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, method);
}


__f__AnonymousType1_int__long__int__int__int__o *MyRoomAddMaster___c__DisplayClass13_0___DisplayBgGroupList_b__2(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        System_Linq_IGrouping_int__MyRoomAddEntity__o *group,
        const MethodInfo *method)
{
  MyRoomAddMaster___c_c *v5; // x0
  System_Func_object__int__o *_9__13_11; // x21
  Il2CppObject *v7; // x22
  struct MyRoomAddMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x0
  MyRoomAddMaster___c_c *v16; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x21
  System_Func_object__int__o *_9__13_12; // x22
  Il2CppObject *v19; // x23
  struct MyRoomAddMaster___c_StaticFields *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  WarMaster_o *object; // x0
  __int64 v29; // x1
  System_Linq_IGrouping_int__MyRoomAddEntity__c *klass; // x8
  MyRoomAddEntity_o *v31; // x21
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  int32_t v35; // w20
  int64_t EventStartAt; // x19
  const MethodInfo *v37; // x1
  int32_t SortPriority; // w0
  int32_t priority; // w22
  int32_t v40; // w23
  const MethodInfo *v41; // x1
  int32_t ForceDispBgPriority; // w21
  __f__AnonymousType1_int__long__int__int__int__o *v43; // x24

  if ( (byte_4D30F3E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_MyRoomAddEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
    sub_1C93AD4(&System_Func_MyRoomAddEntity__int__TypeInfo);
    sub_1C93AD4(&System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_11__);
    sub_1C93AD4(&Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_12__);
    sub_1C93AD4(&MyRoomAddMaster___c_TypeInfo);
    sub_1C93AD4(&Method___f__AnonymousType1_int__long__int__int__int___ctor__);
    sub_1C93AD4(&_f__AnonymousType1_int__long__int__int__int__TypeInfo);
    byte_4D30F3E = 1;
  }
  v5 = MyRoomAddMaster___c_TypeInfo;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v5 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_11 = (System_Func_object__int__o *)v5->static_fields->__9__13_11;
  if ( !_9__13_11 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = MyRoomAddMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__13_11 = (System_Func_object__int__o *)sub_1C93D20(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_11, v7, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_11__, 0);
    static_fields = MyRoomAddMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_11 = (struct System_Func_MyRoomAddEntity__int__o *)_9__13_11;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_11,
      (int32_t)_9__13_11,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = System_Linq_Enumerable__OrderByDescending_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)group,
          (System_Func_TSource__TKey__o *)_9__13_11,
          (const MethodInfo_31D3DE4 *)Method_System_Linq_Enumerable_OrderByDescending_MyRoomAddEntity__int___);
  v16 = MyRoomAddMaster___c_TypeInfo;
  v17 = v15;
  if ( !MyRoomAddMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomAddMaster___c_TypeInfo);
    v16 = MyRoomAddMaster___c_TypeInfo;
  }
  _9__13_12 = (System_Func_object__int__o *)v16->static_fields->__9__13_12;
  if ( !_9__13_12 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomAddMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__13_12 = (System_Func_object__int__o *)sub_1C93D20(System_Func_MyRoomAddEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_12, v19, Method_MyRoomAddMaster___c__DisplayBgGroupList_b__13_12__, 0);
    v20 = MyRoomAddMaster___c_TypeInfo->static_fields;
    v20->__9__13_12 = (struct System_Func_MyRoomAddEntity__int__o *)_9__13_12;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v20->__9__13_12, (int32_t)_9__13_12, v21, v22, v23, v24, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenByDescending_object__int_(
                                                               v17,
                                                               (System_Func_TSource__TKey__o *)_9__13_12,
                                                               (const MethodInfo_31E35A8 *)Method_System_Linq_Enumerable_ThenByDescending_MyRoomAddEntity__int___);
  object = (WarMaster_o *)System_Linq_Enumerable__First_object_(
                            v27,
                            (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_MyRoomAddEntity___);
  if ( !group )
    goto LABEL_25;
  klass = group->klass;
  v31 = (MyRoomAddEntity_o *)object;
  v32 = *(unsigned __int16 *)&group->klass->_2.rank;
  if ( *(_WORD *)&group->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_int__MyRoomAddEntity__c **)p_offset - 1) != System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_20;
    }
    v34 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_20:
    v34 = sub_1C69E5C(group, System_Linq_IGrouping_int__MyRoomAddEntity__TypeInfo, 0);
  }
  object = (WarMaster_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_int__MyRoomAddEntity__o *, _QWORD))v34)(
                            group,
                            *(_QWORD *)(v34 + 8));
  if ( !v31 || (v35 = (int)object, (object = this->fields.warMst) == 0) )
LABEL_25:
    sub_1C93D2C(object, v29);
  EventStartAt = WarMaster__GetEventStartAt(object, v31->fields.warId, 0);
  SortPriority = MyRoomAddEntity__GetSortPriority(v31, v37);
  priority = v31->fields.priority;
  v40 = SortPriority;
  ForceDispBgPriority = MyRoomAddEntity__GetForceDispBgPriority(v31, v41);
  v43 = (__f__AnonymousType1_int__long__int__int__int__o *)sub_1C93D20(_f__AnonymousType1_int__long__int__int__int__TypeInfo);
  _f__AnonymousType1_int__long__int__int__int____ctor(
    v43,
    v35,
    EventStartAt,
    v40,
    priority,
    ForceDispBgPriority,
    (const MethodInfo_3382104 *)Method___f__AnonymousType1_int__long__int__int__int___ctor__);
  return v43;
}


bool MyRoomAddMaster___c__DisplayClass13_0___DisplayBgGroupList_b__7(
        MyRoomAddMaster___c__DisplayClass13_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  int32_t warId; // w19

  if ( !entity )
    goto LABEL_6;
  if ( entity->fields.groupId )
    return 0;
  this = (MyRoomAddMaster___c__DisplayClass13_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_6:
    sub_1C93D2C(this, entity);
  warId = entity->fields.warId;
  return warId == MyRoomAddMaster__GetMainGroupWarId((MyRoomAddMaster_o *)this, (const MethodInfo *)entity);
}


void MyRoomAddMaster___c__DisplayClass15_0___ctor(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass15_0___IsExistOverWriteIdInGroup_b__0(
        MyRoomAddMaster___c__DisplayClass15_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.groupId == this->fields.groupId && entity->fields.overwriteId == this->fields.overWriteId;
}


void MyRoomAddMaster___c__DisplayClass16_0___ctor(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass16_0___GetMainGroupWarId_b__0(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  MyRoomAddMaster___c__DisplayClass16_0_o *v4; // x20
  bool result; // w0
  int32_t condValue; // w21
  int32_t condType; // w23
  int64_t condValue2; // x22
  bool IsOpen; // w8
  int64_t nowTime; // x8

  v4 = this;
  if ( (byte_4D30F3F & 1) == 0 )
  {
    this = (MyRoomAddMaster___c__DisplayClass16_0_o *)sub_1C93AD4(&CondType_TypeInfo);
    byte_4D30F3F = 1;
  }
  if ( !entity )
    sub_1C93D2C(this, entity);
  if ( entity->fields.groupId )
    return 0;
  condType = entity->fields.condType;
  condValue = entity->fields.condValue;
  condValue2 = entity->fields.condValue2;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsOpen = CondType__IsOpen(condType, condValue, condValue2, 0, 0, 0);
  result = 0;
  if ( IsOpen )
  {
    nowTime = v4->fields.nowTime;
    if ( entity->fields.startedAt > nowTime )
      return 0;
    return entity->fields.endedAt >= nowTime;
  }
  return result;
}


bool MyRoomAddMaster___c__DisplayClass16_0___GetMainGroupWarId_b__1(
        MyRoomAddMaster___c__DisplayClass16_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C93D2C(this, 0);
  return entity->fields.warId == this->fields.displayWarId;
}


void MyRoomAddMaster___c__DisplayClass18_0___ctor(
        MyRoomAddMaster___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass18_0___GetPhotoCampaignBgGroupId_b__0(
        MyRoomAddMaster___c__DisplayClass18_0_o *this,
        MyRoomAddEntity_o *entity,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( !entity )
    sub_1C93D2C(this, 0);
  return MyRoomAddEntity__IsPhotoCampaign(entity, (const MethodInfo *)entity)
      && MyRoomAddEntity__IsOpen(entity, this->fields.nowTime, v5);
}


void MyRoomAddMaster___c__DisplayClass19_0___ctor(
        MyRoomAddMaster___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomAddMaster___c__DisplayClass19_0___IsForceDispBgGroupId_b__0(
        MyRoomAddMaster___c__DisplayClass19_0_o *this,
        MyRoomAddEntity_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.type == 1
      && MyRoomAddEntity__IsOpen(x, this->fields.nowTime, method)
      && MyRoomAddEntity__GetForceDispBgPriority(x, v4) > 0;
}