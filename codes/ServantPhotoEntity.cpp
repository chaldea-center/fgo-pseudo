void __fastcall ServantPhotoEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v21; // x1
  struct ServantPhotoEntity_StaticFields *v22; // x0
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct ServantPhotoEntity_StaticFields *v30; // x0
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct ServantPhotoEntity_StaticFields *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7

  if ( (byte_42EAA21 & 1) == 0 )
  {
    sub_B5D5C4(&ServantPhotoEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_19047/*"form"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18255/*"dispFormByFace"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18903/*"faceIdx"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_22773/*"svtIdx"*/, v17, v18, v19);
    byte_42EAA21 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantPhotoEntity_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_18255/*"dispFormByFace"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18255/*"dispFormByFace"*/;
  sub_B5D560(static_fields, v21, v2, v3, v4, v5, v6, v7);
  v22 = ServantPhotoEntity_TypeInfo->static_fields;
  v23 = (System_Int32_array **)StringLiteral_22773/*"svtIdx"*/;
  v22->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_22773/*"svtIdx"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v22->DISP_FORM_BY_FACE_SVTINDEX_KEY, v23, v24, v25, v26, v27, v28, v29);
  v30 = ServantPhotoEntity_TypeInfo->static_fields;
  v31 = (System_Int32_array **)StringLiteral_18903/*"faceIdx"*/;
  v30->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_18903/*"faceIdx"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v30->DISP_FORM_BY_FACE_FACEINDEX_KEY, v31, v32, v33, v34, v35, v36, v37);
  v38 = ServantPhotoEntity_TypeInfo->static_fields;
  v39 = (System_Int32_array **)StringLiteral_19047/*"form"*/;
  v38->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_19047/*"form"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v38->DISP_FORM_BY_FACE_FORM_KEY, v39, v40, v41, v42, v43, v44, v45);
}


void __fastcall ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EAA20 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_long___ctor__, (_DWORD)method, v2, v3);
    byte_42EAA20 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_23FAD14 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall ServantPhotoEntity__CreatePrimaryKey(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


ServantPhotoEntity_FaceData_array *__fastcall ServantPhotoEntity__GetFaceList(
        ServantPhotoEntity_o *this,
        int32_t defaultForm,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  System_Collections_Generic_IEnumerable_TSource__o *dispFaceId; // x19
  ServantPhotoEntity___c_c *v76; // x0
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x22
  Il2CppObject *v79; // x23
  struct ServantPhotoEntity___c_StaticFields *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x0
  System_Collections_Generic_List_TSource__o *v88; // x0
  ServantPhotoEntity___c_c *v89; // x8
  System_Collections_Generic_List_TSource__o *v90; // x22
  struct ServantPhotoEntity___c_StaticFields *v91; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x19
  Il2CppObject *v93; // x23
  struct ServantPhotoEntity___c_StaticFields *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  int32_t v101; // w23
  ServantPhotoEntity_FaceData_array *v102; // x19
  ServantPhotoEntity___c__DisplayClass5_0_o *v103; // x24
  unsigned int *OverrideFormList; // x0
  const MethodInfo *v105; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v106; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  System_Int32_array **v108; // x25
  unsigned __int64 v109; // x8
  System_Int32_array **v110; // x26
  unsigned __int64 v111; // x9
  __int64 i; // x21
  __int64 v113; // x27
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  Il2CppClass **v132; // x0
  int v133; // w8
  __int64 v134; // x3
  __int64 v135; // x8
  unsigned int *v136; // x20
  unsigned __int64 v137; // x10
  int *v138; // x11
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 v141; // x3
  __int64 v142; // x20
  __int64 v143; // x8
  unsigned __int64 v144; // x10
  int *v145; // x11
  __int64 v146; // x0
  __int64 v147; // x0
  __int64 v148; // x1
  int max_length; // w11
  ServantPhotoEntity_FaceData_o *v150; // x10
  struct System_Int32_array *multiForm; // x10
  int v152; // w11
  __int64 v153; // x8
  unsigned __int64 v154; // x10
  int *v155; // x11
  __int64 v156; // x0
  __int64 v157; // x3
  __int64 v158; // x8
  unsigned __int64 v159; // x10
  int *v160; // x11
  __int64 v161; // x0
  __int64 v163; // x0
  __int64 v164; // x0
  __int64 v165; // x0
  __int64 v166; // x0
  ServantPhotoEntity_o *v167; // [xsp+0h] [xbp-60h]

  if ( (byte_42EAA1E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Min_int_____, defaultForm, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_SelectMany_int____int___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_string__int_____, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int_____, v15, v16, v17);
    sub_B5D5C4(&ServantPhotoEntity_FaceData___TypeInfo, v18, v19, v20);
    sub_B5D5C4(&ServantPhotoEntity_FaceData_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_int____IEnumerable_int____ctor__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Func_int____int___ctor__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_string__int_____ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_int____int__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Func_string__int____TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Func_int____IEnumerable_int___TypeInfo, v39, v40, v41);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, v45, v46, v47);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, v48, v49, v50);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&int___TypeInfo, v54, v55, v56);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int____get_Count__, v57, v58, v59);
    sub_B5D5C4(&Method_ServantPhotoEntity___c__GetFaceList_b__5_0__, v60, v61, v62);
    sub_B5D5C4(&Method_ServantPhotoEntity___c__GetFaceList_b__5_1__, v63, v64, v65);
    sub_B5D5C4(&Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__, v66, v67, v68);
    sub_B5D5C4(&ServantPhotoEntity___c__DisplayClass5_0_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&ServantPhotoEntity___c_TypeInfo, v72, v73, v74);
    byte_42EAA1E = 1;
  }
  dispFaceId = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dispFaceId;
  v167 = this;
  v76 = ServantPhotoEntity___c_TypeInfo;
  if ( (BYTE3(ServantPhotoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v76 = ServantPhotoEntity___c_TypeInfo;
  }
  static_fields = v76->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v79 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_string__int____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v79,
      Method_ServantPhotoEntity___c__GetFaceList_b__5_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_string__int_____ctor__);
    v80 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v80->__9__5_0 = (struct System_Func_string__int____o *)_9__5_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v80->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
  }
  v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_string__int_____);
  v88 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v87,
          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_int_____);
  v89 = ServantPhotoEntity___c_TypeInfo;
  v90 = v88;
  if ( (BYTE3(ServantPhotoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v89 = ServantPhotoEntity___c_TypeInfo;
  }
  v91 = v89->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v91->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v89->vtable._0_Equals.methodPtr) & 4) != 0 && !v89->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v89);
      v91 = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v93 = (Il2CppObject *)v91->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B5D694(System_Func_int____int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v93,
      Method_ServantPhotoEntity___c__GetFaceList_b__5_1__,
      (const MethodInfo_2C2F87C *)Method_System_Func_int____int___ctor__);
    v94 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v94->__9__5_1 = (struct System_Func_int____int__o *)_9__5_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v94->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
  }
  v101 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v90,
           (System_Func_TSource__int__o *)_9__5_1,
           (const MethodInfo_1CAEF98 *)Method_System_Linq_Enumerable_Min_int_____);
  v102 = (ServantPhotoEntity_FaceData_array *)sub_B5D5DC(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v101);
  v103 = (ServantPhotoEntity___c__DisplayClass5_0_o *)sub_B5D694(ServantPhotoEntity___c__DisplayClass5_0_TypeInfo);
  ServantPhotoEntity___c__DisplayClass5_0___ctor(v103, 0LL);
  if ( !v103 )
    goto LABEL_72;
  v103->fields.i = 0;
  if ( v101 >= 1 )
  {
    while ( 1 )
    {
      v106 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_int____IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v106,
        (Il2CppObject *)v103,
        Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__,
        (const MethodInfo_2C3041C *)Method_System_Func_int____IEnumerable_int____ctor__);
      v107 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                    (System_Collections_Generic_IEnumerable_TSource__o *)v90,
                                                                    (System_Func_TSource__IEnumerable_TResult___o *)v106,
                                                                    (const MethodInfo_1CB4938 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = (unsigned int *)System_Linq_Enumerable__ToArray_int_(
                                           v107,
                                           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v90 )
        break;
      v108 = (System_Int32_array **)OverrideFormList;
      OverrideFormList = (unsigned int *)sub_B5D5DC(int___TypeInfo, (unsigned int)v90->fields._size);
      if ( !OverrideFormList )
        break;
      v109 = OverrideFormList[6];
      v110 = (System_Int32_array **)OverrideFormList;
      if ( (__int64)(v109 << 32) >= 1 )
      {
        v111 = 0LL;
        while ( v111 < v109 )
        {
          OverrideFormList[v111++ + 8] = defaultForm;
          if ( (__int64)v111 >= (int)v109 )
            goto LABEL_27;
        }
LABEL_71:
        v163 = sub_B5D6C8(OverrideFormList);
        sub_B5D668(v163, 0LL);
      }
LABEL_27:
      i = v103->fields.i;
      v113 = sub_B5D694(ServantPhotoEntity_FaceData_TypeInfo);
      ServantPhotoEntity_FaceData___ctor((ServantPhotoEntity_FaceData_o *)v113, 0LL);
      if ( !v113 )
        break;
      *(_QWORD *)(v113 + 16) = v108;
      sub_B5D560((BattleServantConfConponent_o *)(v113 + 16), v108, v114, v115, v116, v117, v118, v119);
      *(_QWORD *)(v113 + 24) = v110;
      sub_B5D560((BattleServantConfConponent_o *)(v113 + 24), v110, v120, v121, v122, v123, v124, v125);
      if ( !v102 )
        break;
      OverrideFormList = (unsigned int *)sub_B5D684(v113, v102->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v164 = sub_B5D6BC(0LL);
        sub_B5D668(v164, 0LL);
      }
      if ( (unsigned int)i >= v102->max_length )
        goto LABEL_71;
      v132 = &v102->obj.klass + i;
      v132[4] = (Il2CppClass *)v113;
      sub_B5D560(
        (BattleServantConfConponent_o *)(v132 + 4),
        (System_Int32_array **)v113,
        v126,
        v127,
        v128,
        v129,
        v130,
        v131);
      v133 = v103->fields.i + 1;
      v103->fields.i = v133;
      if ( v133 >= v101 )
        goto LABEL_32;
    }
LABEL_72:
    sub_B5D69C(OverrideFormList, v105);
  }
LABEL_32:
  OverrideFormList = (unsigned int *)ServantPhotoEntity__GetOverrideFormList(v167, v105);
  if ( !OverrideFormList )
    goto LABEL_72;
  v135 = *(_QWORD *)OverrideFormList;
  v136 = OverrideFormList;
  if ( *(_WORD *)(*(_QWORD *)OverrideFormList + 298LL) )
  {
    v137 = 0LL;
    v138 = (int *)(*(_QWORD *)(v135 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v138 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
    {
      ++v137;
      v138 += 4;
      if ( v137 >= *(unsigned __int16 *)(*(_QWORD *)OverrideFormList + 298LL) )
        goto LABEL_37;
    }
    v139 = v135 + 16LL * *v138 + 312;
  }
  else
  {
LABEL_37:
    v139 = sub_AF54C0(
             OverrideFormList,
             System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo,
             0LL,
             v134);
  }
  v142 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))v139)(v136, *(_QWORD *)(v139 + 8));
  if ( !v142 )
    sub_B5D69C(0LL, v140);
  while ( 1 )
  {
    v153 = *(_QWORD *)v142;
    if ( *(_WORD *)(*(_QWORD *)v142 + 298LL) )
    {
      v154 = 0LL;
      v155 = (int *)(*(_QWORD *)(v153 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v155 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v154;
        v155 += 4;
        if ( v154 >= *(unsigned __int16 *)(*(_QWORD *)v142 + 298LL) )
          goto LABEL_61;
      }
      v156 = v153 + 16LL * *v155 + 312;
    }
    else
    {
LABEL_61:
      v156 = sub_AF54C0(v142, System_Collections_IEnumerator_TypeInfo, 0LL, v141);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v156)(v142, *(_QWORD *)(v156 + 8)) & 1) == 0 )
      break;
    v143 = *(_QWORD *)v142;
    if ( *(_WORD *)(*(_QWORD *)v142 + 298LL) )
    {
      v144 = 0LL;
      v145 = (int *)(*(_QWORD *)(v143 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v145 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
      {
        ++v144;
        v145 += 4;
        if ( v144 >= *(unsigned __int16 *)(*(_QWORD *)v142 + 298LL) )
          goto LABEL_45;
      }
      v146 = v143 + 16LL * *v145 + 312;
    }
    else
    {
LABEL_45:
      v146 = sub_AF54C0(v142, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0LL, v157);
    }
    v147 = (*(__int64 (__fastcall **)(__int64, _QWORD))v146)(v142, *(_QWORD *)(v146 + 8));
    if ( (v147 & 0x8000000000000000LL) == 0 )
    {
      if ( !v102 )
        sub_B5D69C(v147, v148);
      max_length = v102->max_length;
      if ( SHIDWORD(v147) < max_length )
      {
        if ( HIDWORD(v147) >= max_length )
        {
          v165 = sub_B5D6C8(v147);
          sub_B5D668(v165, 0LL);
        }
        v150 = v102->m_Items[v147 >> 32];
        if ( !v150 )
          sub_B5D69C(v147, v148);
        if ( (v147 & 0x80000000) == 0 )
        {
          multiForm = v150->fields.multiForm;
          if ( !multiForm )
            sub_B5D69C(v147, v148);
          v152 = multiForm->max_length;
          if ( (int)v147 < v152 )
          {
            if ( (unsigned int)v147 >= v152 )
            {
              v166 = sub_B5D6C8(v147);
              sub_B5D668(v166, 0LL);
            }
            multiForm->m_Items[(int)v147 + 1] = v148;
          }
        }
      }
    }
  }
  v158 = *(_QWORD *)v142;
  if ( *(_WORD *)(*(_QWORD *)v142 + 298LL) )
  {
    v159 = 0LL;
    v160 = (int *)(*(_QWORD *)(v158 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v160 - 1) != System_IDisposable_TypeInfo )
    {
      ++v159;
      v160 += 4;
      if ( v159 >= *(unsigned __int16 *)(*(_QWORD *)v142 + 298LL) )
        goto LABEL_68;
    }
    v161 = v158 + 16LL * *v160 + 312;
  }
  else
  {
LABEL_68:
    v161 = sub_AF54C0(v142, System_IDisposable_TypeInfo, 0LL, v157);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v161)(v142, *(_QWORD *)(v161 + 8));
  return v102;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EAA1F & 1) == 0 )
  {
    sub_B5D5C4(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EAA1F = 1;
  }
  v5 = sub_B5D694(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo);
  ServantPhotoEntity__GetOverrideFormList_d__6___ctor((ServantPhotoEntity__GetOverrideFormList_d__6_o *)v5, -2, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *)v5;
}


void __fastcall ServantPhotoEntity_FaceData___ctor(ServantPhotoEntity_FaceData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantPhotoEntity__GetOverrideFormList_d__6___ctor(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall ServantPhotoEntity__GetOverrideFormList_d__6__MoveNext(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int32_t _1__state; // w8
  struct ServantPhotoEntity_o *_4__this; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *extendData; // x20
  ServantPhotoEntity_c *v32; // x0
  __int64 v33; // x1
  System_Xml_Schema_XmlSchemaObject_o *v34; // x0
  __int64 v35; // x9
  struct System_Collections_Generic_List_Enumerator_object__o *p__7__wrap1; // x20
  __int128 v37; // q0
  const MethodInfo *v38; // x1
  System_Collections_Generic_Dictionary_string__object__o *current; // x20
  __int64 v40; // x9
  ServantPhotoEntity_c *v41; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x21
  int32_t ScriptValue_23861708; // w21
  int32_t v44; // w22
  int32_t v45; // w3
  const MethodInfo_2BEB8EC *v46; // x5
  struct System_Collections_Generic_List_T__o *list; // x9
  int32_t index; // w10
  bool v49; // w8
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+18h] [xbp-48h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v53; // 0:x0.12

  v4 = this;
  if ( (byte_42E5D72 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v11, v12, v13);
    sub_B5D5C4(&JsonManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_object__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_object__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&ServantPhotoEntity_TypeInfo, v23, v24, v25);
    this = (ServantPhotoEntity__GetOverrideFormList_d__6_o *)sub_B5D5C4(
                                                               &Method_System_ValueTuple_int__int__int___ctor__,
                                                               v26,
                                                               v27,
                                                               v28);
    byte_42E5D72 = 1;
  }
  value = 0LL;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &v4->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
    extendData = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.extendData;
    if ( !extendData )
      return 0;
    v32 = ServantPhotoEntity_TypeInfo;
    if ( (BYTE3(ServantPhotoEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
      v32 = ServantPhotoEntity_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            extendData,
            (System_Xml_XmlQualifiedName_o *)v32->static_fields->DISP_FORM_BY_FACE_KEY,
            &value,
            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v34 = value;
    if ( !value )
LABEL_31:
      sub_B5D69C(v34, v33);
    v35 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&value->klass->_2.bitflags2 + 1) < (unsigned int)v35
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v35 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_30:
      v34 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B5D990(v34);
      goto LABEL_31;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v51,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    p__7__wrap1 = &v4->fields.__7__wrap1;
    v37 = *(_OWORD *)&v51.fields.list;
    v4->fields.__7__wrap1.fields.current = v51.fields.current;
    *(_OWORD *)&v4->fields.__7__wrap1.fields.list = v37;
    sub_B5D560(&v4->fields.__7__wrap1);
  }
  v4->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
          (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__6____m__Finally1(v4, v38);
    v49 = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
    return v49;
  }
  current = (System_Collections_Generic_Dictionary_string__object__o *)v4->fields.__7__wrap1.fields.current;
  if ( current )
  {
    v40 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v40
      || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v40 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v34 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B5D990(v4->fields.__7__wrap1.fields.current);
      goto LABEL_30;
    }
  }
  v41 = ServantPhotoEntity_TypeInfo;
  if ( (BYTE3(ServantPhotoEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v41 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v41->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  ScriptValue_23861708 = JsonManager__GetScriptValue_23861708(current, DISP_FORM_BY_FACE_SVTINDEX_KEY, 0, 0LL);
  v44 = JsonManager__GetScriptValue_23861708(
          current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0LL);
  v45 = JsonManager__GetScriptValue_23861708(
          current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0LL);
  v51.fields.index = 0;
  v51.fields.list = 0LL;
  *(_QWORD *)&v53.fields.Item1 = &v51;
  v53.fields.Item3 = ScriptValue_23861708;
  System_ValueTuple_int__int__int____ctor(v53, v44, v45, Method_System_ValueTuple_int__int__int___ctor__, v46);
  list = v51.fields.list;
  index = v51.fields.index;
  v49 = 1;
  v4->fields.__1__state = 1;
  *(_QWORD *)&v4->fields.__2__current.fields.Item1 = list;
  v4->fields.__2__current.fields.Item3 = index;
  return v49;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1

  if ( (byte_42E5D75 & 1) == 0 )
  {
    sub_B5D5C4(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5D75 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_B5D694(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v6 + 32) = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    *(_QWORD *)(v6 + 40) = this->fields.__4__this;
    sub_B5D560(v6 + 40);
    return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)v6;
  }
  return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)this;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__int__int__o __fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_Generic_IEnumerator__System_Int32_System_Int32_System_Int32___get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  int32_t Item3; // w1
  __int64 v3; // x0 OVERLAPPED
  System_ValueTuple_int__int__int__o result; // 0:x0.12

  Item3 = this->fields.__2__current.fields.Item3;
  v3 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  *(_QWORD *)&result.fields.Item1 = v3;
  result.fields.Item3 = Item3;
  return result;
}


void __fastcall __noreturn ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_IEnumerator_Reset(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_ServantPhotoEntity__GetOverrideFormList_d__6_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t Item3; // w9
  __int64 v7; // [xsp+0h] [xbp-20h] BYREF
  int32_t v8; // [xsp+8h] [xbp-18h]

  if ( (byte_42E5D74 & 1) == 0 )
  {
    sub_B5D5C4(&System_ValueTuple_int__int__int__TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5D74 = 1;
  }
  Item3 = this->fields.__2__current.fields.Item3;
  v7 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  v8 = Item3;
  return (Il2CppObject *)j_il2cpp_value_box_0(System_ValueTuple_int__int__int__TypeInfo, &v7);
}


void __fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_IDisposable_Dispose(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ServantPhotoEntity__GetOverrideFormList_d__6____m__Finally1(this, method);
}


void __fastcall ServantPhotoEntity__GetOverrideFormList_d__6____m__Finally1(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E5D73 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, (_DWORD)method, v2, v3);
    byte_42E5D73 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
}


void __fastcall ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0

  if ( (byte_42E5D6F & 1) == 0 )
  {
    sub_B5D5C4(&ServantPhotoEntity___c_TypeInfo, v1, v2, v3);
    byte_42E5D6F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(ServantPhotoEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantPhotoEntity___c_o *)v4;
  sub_B5D560(static_fields);
}


void __fastcall ServantPhotoEntity___c___ctor(ServantPhotoEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall ServantPhotoEntity___c___GetFaceList_b__5_0(
        ServantPhotoEntity___c_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  System_String_o *v29; // x19
  System_String_array *v30; // x19
  ServantPhotoEntity___c_c *v31; // x8
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__5_2; // x20
  Il2CppObject *v34; // x21
  struct ServantPhotoEntity___c_StaticFields *v35; // x0
  __int64 v37; // x0

  v4 = s;
  if ( (byte_42E5D70 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_ConvertAll_string__int___, (_DWORD)s, (_DWORD)method, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Converter_string__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Converter_string__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_ServantPhotoEntity___c__GetFaceList_b__5_2__, v14, v15, v16);
    sub_B5D5C4(&ServantPhotoEntity___c_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1/*""*/, v23, v24, v25);
    this = (ServantPhotoEntity___c_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v26, v27, v28);
    byte_42E5D70 = 1;
  }
  if ( !v4 )
    goto LABEL_17;
  this = (ServantPhotoEntity___c_o *)System_String__Replace_44585024(
                                       v4,
                                       (System_String_o *)StringLiteral_15824/*"["*/,
                                       (System_String_o *)StringLiteral_1/*""*/,
                                       0LL);
  if ( !this )
    goto LABEL_17;
  v29 = System_String__Replace_44585024(
          (System_String_o *)this,
          (System_String_o *)StringLiteral_16061/*"]"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0LL);
  this = (ServantPhotoEntity___c_o *)sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_17;
  s = (System_String_o *)this;
  if ( !LODWORD(this[1].monitor) )
  {
    v37 = sub_B5D6C8(this);
    sub_B5D668(v37, 0LL);
  }
  LOWORD(this[2].klass) = 44;
  if ( !v29 )
LABEL_17:
    sub_B5D69C(this, s);
  v30 = System_String__Split(v29, (System_Char_array *)this, 0LL);
  v31 = ServantPhotoEntity___c_TypeInfo;
  if ( (BYTE3(ServantPhotoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v31 = ServantPhotoEntity___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__5_2 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__5_2;
  if ( !_9__5_2 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__5_2 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_string__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__5_2,
      v34,
      Method_ServantPhotoEntity___c__GetFaceList_b__5_2__,
      (const MethodInfo_23F6FAC *)Method_System_Converter_string__int___ctor__);
    v35 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v35->__9__5_2 = (struct System_Converter_string__int__o *)_9__5_2;
    sub_B5D560(&v35->__9__5_2);
  }
  return System_Array__ConvertAll_string__int_(
           v30,
           (System_Converter_TInput__TOutput__o *)_9__5_2,
           (const MethodInfo_1FBF43C *)Method_System_Array_ConvertAll_string__int___);
}


int32_t __fastcall ServantPhotoEntity___c___GetFaceList_b__5_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_B5D69C(this, 0LL);
  return l->max_length;
}


int32_t __fastcall ServantPhotoEntity___c___GetFaceList_b__5_2(
        ServantPhotoEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  return System_Int32__Parse(input, 0LL);
}


void __fastcall ServantPhotoEntity___c__DisplayClass5_0___ctor(
        ServantPhotoEntity___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall ServantPhotoEntity___c__DisplayClass5_0___GetFaceList_b__3(
        ServantPhotoEntity___c__DisplayClass5_0_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_42E5D71 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_int___, (_DWORD)l, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Take_int___, v6, v7, v8);
    byte_42E5D71 = 1;
  }
  v9 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_1CB6A5C *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v9,
                                                            1,
                                                            (const MethodInfo_1CB6DB0 *)Method_System_Linq_Enumerable_Take_int___);
}