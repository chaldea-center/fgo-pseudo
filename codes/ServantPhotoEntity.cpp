void __fastcall ServantPhotoEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct ServantPhotoEntity_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct ServantPhotoEntity_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct ServantPhotoEntity_StaticFields *v25; // x0
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_43538CD & 1) == 0 )
  {
    sub_B70694(&ServantPhotoEntity_TypeInfo);
    sub_B70694(&StringLiteral_19100/*"form"*/);
    sub_B70694(&StringLiteral_18302/*"dispFormByFace"*/);
    sub_B70694(&StringLiteral_18953/*"faceIdx"*/);
    sub_B70694(&StringLiteral_22844/*"svtIdx"*/);
    byte_43538CD = 1;
  }
  static_fields = (BattleServantConfConponent_o *)ServantPhotoEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_18302/*"dispFormByFace"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18302/*"dispFormByFace"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = ServantPhotoEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_22844/*"svtIdx"*/;
  v9->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_22844/*"svtIdx"*/;
  sub_B70630((BattleServantConfConponent_o *)&v9->DISP_FORM_BY_FACE_SVTINDEX_KEY, v10, v11, v12, v13, v14, v15, v16);
  v17 = ServantPhotoEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18953/*"faceIdx"*/;
  v17->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_18953/*"faceIdx"*/;
  sub_B70630((BattleServantConfConponent_o *)&v17->DISP_FORM_BY_FACE_FACEINDEX_KEY, v18, v19, v20, v21, v22, v23, v24);
  v25 = ServantPhotoEntity_TypeInfo->static_fields;
  v26 = (System_Int32_array **)StringLiteral_19100/*"form"*/;
  v25->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_19100/*"form"*/;
  sub_B70630((BattleServantConfConponent_o *)&v25->DISP_FORM_BY_FACE_FORM_KEY, v26, v27, v28, v29, v30, v31, v32);
}


void __fastcall ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_43538CC & 1) == 0 )
  {
    sub_B70694(&Method_DataEntityBase_long___ctor__);
    byte_43538CC = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_21C0344 *)Method_DataEntityBase_long___ctor__);
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
  System_Collections_Generic_IEnumerable_TSource__o *dispFaceId; // x19
  ServantPhotoEntity___c_c *v6; // x0
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__5_0; // x22
  Il2CppObject *v9; // x23
  struct ServantPhotoEntity___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0
  ServantPhotoEntity___c_c *v19; // x8
  System_Collections_Generic_List_TSource__o *v20; // x22
  struct ServantPhotoEntity___c_StaticFields *v21; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__5_1; // x19
  Il2CppObject *v23; // x23
  struct ServantPhotoEntity___c_StaticFields *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int32_t v31; // w23
  ServantPhotoEntity_FaceData_array *v32; // x19
  ServantPhotoEntity___c__DisplayClass5_0_o *v33; // x24
  unsigned int *OverrideFormList; // x0
  const MethodInfo *v35; // x1
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v36; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Int32_array **v38; // x25
  unsigned __int64 v39; // x8
  System_Int32_array **v40; // x26
  unsigned __int64 v41; // x9
  __int64 i; // x21
  __int64 v43; // x27
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  Il2CppClass **v62; // x0
  int v63; // w8
  __int64 v64; // x8
  unsigned int *v65; // x20
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 v70; // x20
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x1
  int max_length; // w11
  ServantPhotoEntity_FaceData_o *v78; // x10
  struct System_Int32_array *multiForm; // x10
  int v80; // w11
  __int64 v81; // x8
  unsigned __int64 v82; // x10
  int *v83; // x11
  __int64 v84; // x0
  __int64 v85; // x8
  unsigned __int64 v86; // x10
  int *v87; // x11
  __int64 v88; // x0
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  ServantPhotoEntity_o *v94; // [xsp+0h] [xbp-60h]

  if ( (byte_43538CA & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Min_int_____);
    sub_B70694(&Method_System_Linq_Enumerable_SelectMany_int____int___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_string__int_____);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B70694(&Method_System_Linq_Enumerable_ToList_int_____);
    sub_B70694(&ServantPhotoEntity_FaceData___TypeInfo);
    sub_B70694(&ServantPhotoEntity_FaceData_TypeInfo);
    sub_B70694(&Method_System_Func_int____IEnumerable_int____ctor__);
    sub_B70694(&Method_System_Func_int____int___ctor__);
    sub_B70694(&Method_System_Func_string__int_____ctor__);
    sub_B70694(&System_Func_int____int__TypeInfo);
    sub_B70694(&System_Func_string__int____TypeInfo);
    sub_B70694(&System_Func_int____IEnumerable_int___TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_B70694(&Method_ServantPhotoEntity___c__GetFaceList_b__5_0__);
    sub_B70694(&Method_ServantPhotoEntity___c__GetFaceList_b__5_1__);
    sub_B70694(&Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__);
    sub_B70694(&ServantPhotoEntity___c__DisplayClass5_0_TypeInfo);
    sub_B70694(&ServantPhotoEntity___c_TypeInfo);
    byte_43538CA = 1;
  }
  dispFaceId = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dispFaceId;
  v94 = this;
  v6 = ServantPhotoEntity___c_TypeInfo;
  if ( (BYTE3(ServantPhotoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v6 = ServantPhotoEntity___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_string__int____TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__5_0,
      v9,
      Method_ServantPhotoEntity___c__GetFaceList_b__5_0__,
      (const MethodInfo_29ADCC4 *)Method_System_Func_string__int_____ctor__);
    v10 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v10->__9__5_0 = (struct System_Func_string__int____o *)_9__5_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v10->__9__5_0,
      (System_Int32_array **)_9__5_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_string__int_____);
  v18 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
          v17,
          (const MethodInfo_1CCB668 *)Method_System_Linq_Enumerable_ToList_int_____);
  v19 = ServantPhotoEntity___c_TypeInfo;
  v20 = v18;
  if ( (BYTE3(ServantPhotoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v19 = ServantPhotoEntity___c_TypeInfo;
  }
  v21 = v19->static_fields;
  _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v21->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v21 = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v21->__9;
    _9__5_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B70764(System_Func_int____int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__5_1,
      v23,
      Method_ServantPhotoEntity___c__GetFaceList_b__5_1__,
      (const MethodInfo_29AD124 *)Method_System_Func_int____int___ctor__);
    v24 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v24->__9__5_1 = (struct System_Func_int____int__o *)_9__5_1;
    sub_B70630(
      (BattleServantConfConponent_o *)&v24->__9__5_1,
      (System_Int32_array **)_9__5_1,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = System_Linq_Enumerable__Min_BattleBuffData_BuffData_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v20,
          (System_Func_TSource__int__o *)_9__5_1,
          (const MethodInfo_1CBF8DC *)Method_System_Linq_Enumerable_Min_int_____);
  v32 = (ServantPhotoEntity_FaceData_array *)sub_B706AC(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v31);
  v33 = (ServantPhotoEntity___c__DisplayClass5_0_o *)sub_B70764(ServantPhotoEntity___c__DisplayClass5_0_TypeInfo);
  ServantPhotoEntity___c__DisplayClass5_0___ctor(v33, 0LL);
  if ( !v33 )
    goto LABEL_72;
  v33->fields.i = 0;
  if ( v31 >= 1 )
  {
    while ( 1 )
    {
      v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_int____IEnumerable_int___TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v36,
        (Il2CppObject *)v33,
        Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_int____IEnumerable_int____ctor__);
      v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_ServantPhotoEntity_FaceData__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)v36,
                                                                   (const MethodInfo_1CC578C *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = (unsigned int *)System_Linq_Enumerable__ToArray_int_(
                                           v37,
                                           (const MethodInfo_1CC85F0 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v20 )
        break;
      v38 = (System_Int32_array **)OverrideFormList;
      OverrideFormList = (unsigned int *)sub_B706AC(int___TypeInfo, (unsigned int)v20->fields._size);
      if ( !OverrideFormList )
        break;
      v39 = OverrideFormList[6];
      v40 = (System_Int32_array **)OverrideFormList;
      if ( (__int64)(v39 << 32) >= 1 )
      {
        v41 = 0LL;
        while ( v41 < v39 )
        {
          OverrideFormList[v41++ + 8] = defaultForm;
          if ( (__int64)v41 >= (int)v39 )
            goto LABEL_27;
        }
LABEL_71:
        v90 = sub_B70798(OverrideFormList);
        sub_B70738(v90, 0LL);
      }
LABEL_27:
      i = v33->fields.i;
      v43 = sub_B70764(ServantPhotoEntity_FaceData_TypeInfo);
      ServantPhotoEntity_FaceData___ctor((ServantPhotoEntity_FaceData_o *)v43, 0LL);
      if ( !v43 )
        break;
      *(_QWORD *)(v43 + 16) = v38;
      sub_B70630((BattleServantConfConponent_o *)(v43 + 16), v38, v44, v45, v46, v47, v48, v49);
      *(_QWORD *)(v43 + 24) = v40;
      sub_B70630((BattleServantConfConponent_o *)(v43 + 24), v40, v50, v51, v52, v53, v54, v55);
      if ( !v32 )
        break;
      OverrideFormList = (unsigned int *)sub_B70754(v43, v32->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v91 = sub_B7078C(0LL);
        sub_B70738(v91, 0LL);
      }
      if ( (unsigned int)i >= v32->max_length )
        goto LABEL_71;
      v62 = &v32->obj.klass + i;
      v62[4] = (Il2CppClass *)v43;
      sub_B70630((BattleServantConfConponent_o *)(v62 + 4), (System_Int32_array **)v43, v56, v57, v58, v59, v60, v61);
      v63 = v33->fields.i + 1;
      v33->fields.i = v63;
      if ( v63 >= v31 )
        goto LABEL_32;
    }
LABEL_72:
    sub_B7076C(OverrideFormList, v35);
  }
LABEL_32:
  OverrideFormList = (unsigned int *)ServantPhotoEntity__GetOverrideFormList(v94, v35);
  if ( !OverrideFormList )
    goto LABEL_72;
  v64 = *(_QWORD *)OverrideFormList;
  v65 = OverrideFormList;
  if ( *(_WORD *)(*(_QWORD *)OverrideFormList + 298LL) )
  {
    v66 = 0LL;
    v67 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v67 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
    {
      ++v66;
      v67 += 4;
      if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)OverrideFormList + 298LL) )
        goto LABEL_37;
    }
    v68 = v64 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_37:
    v68 = sub_B08590(OverrideFormList, System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, 0LL);
  }
  v70 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))v68)(v65, *(_QWORD *)(v68 + 8));
  if ( !v70 )
    sub_B7076C(0LL, v69);
  while ( 1 )
  {
    v81 = *(_QWORD *)v70;
    if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
    {
      v82 = 0LL;
      v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v83 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v82;
        v83 += 4;
        if ( v82 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
          goto LABEL_61;
      }
      v84 = v81 + 16LL * *v83 + 312;
    }
    else
    {
LABEL_61:
      v84 = sub_B08590(v70, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v70, *(_QWORD *)(v84 + 8)) & 1) == 0 )
      break;
    v71 = *(_QWORD *)v70;
    if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
    {
      v72 = 0LL;
      v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v73 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
      {
        ++v72;
        v73 += 4;
        if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
          goto LABEL_45;
      }
      v74 = v71 + 16LL * *v73 + 312;
    }
    else
    {
LABEL_45:
      v74 = sub_B08590(v70, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0LL);
    }
    v75 = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v70, *(_QWORD *)(v74 + 8));
    if ( (v75 & 0x8000000000000000LL) == 0 )
    {
      if ( !v32 )
        sub_B7076C(v75, v76);
      max_length = v32->max_length;
      if ( SHIDWORD(v75) < max_length )
      {
        if ( HIDWORD(v75) >= max_length )
        {
          v92 = sub_B70798(v75);
          sub_B70738(v92, 0LL);
        }
        v78 = v32->m_Items[v75 >> 32];
        if ( !v78 )
          sub_B7076C(v75, v76);
        if ( (v75 & 0x80000000) == 0 )
        {
          multiForm = v78->fields.multiForm;
          if ( !multiForm )
            sub_B7076C(v75, v76);
          v80 = multiForm->max_length;
          if ( (int)v75 < v80 )
          {
            if ( (unsigned int)v75 >= v80 )
            {
              v93 = sub_B70798(v75);
              sub_B70738(v93, 0LL);
            }
            multiForm->m_Items[(int)v75 + 1] = v76;
          }
        }
      }
    }
  }
  v85 = *(_QWORD *)v70;
  if ( *(_WORD *)(*(_QWORD *)v70 + 298LL) )
  {
    v86 = 0LL;
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      ++v86;
      v87 += 4;
      if ( v86 >= *(unsigned __int16 *)(*(_QWORD *)v70 + 298LL) )
        goto LABEL_68;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_68:
    v88 = sub_B08590(v70, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v88)(v70, *(_QWORD *)(v88 + 8));
  return v32;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43538CB & 1) == 0 )
  {
    sub_B70694(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo);
    byte_43538CB = 1;
  }
  v3 = sub_B70764(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo);
  ServantPhotoEntity__GetOverrideFormList_d__6___ctor((ServantPhotoEntity__GetOverrideFormList_d__6_o *)v3, -2, 0LL);
  if ( !v3 )
    sub_B7076C(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 40), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *)v3;
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
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v2; // x19
  int32_t _1__state; // w8
  struct ServantPhotoEntity_o *_4__this; // x8
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *extendData; // x20
  ServantPhotoEntity_c *v6; // x0
  __int64 v7; // x1
  System_Xml_Schema_XmlSchemaObject_o *v8; // x0
  __int64 v9; // x9
  struct System_Collections_Generic_List_Enumerator_object__o *p__7__wrap1; // x20
  __int128 v11; // q0
  const MethodInfo *v12; // x1
  System_Collections_Generic_Dictionary_string__object__o *current; // x20
  __int64 v14; // x9
  ServantPhotoEntity_c *v15; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x21
  int32_t ScriptValue_23926536; // w21
  int32_t v18; // w22
  int32_t v19; // w3
  const MethodInfo_267B700 *v20; // x5
  struct System_Collections_Generic_List_T__o *list; // x9
  int32_t index; // w10
  bool v23; // w8
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+18h] [xbp-48h] BYREF
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+38h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v27; // 0:x0.12

  v2 = this;
  if ( (byte_434F251 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_B70694(&System_Collections_Generic_List_object__TypeInfo);
    sub_B70694(&ServantPhotoEntity_TypeInfo);
    this = (ServantPhotoEntity__GetOverrideFormList_d__6_o *)sub_B70694(&Method_System_ValueTuple_int__int__int___ctor__);
    byte_434F251 = 1;
  }
  value = 0LL;
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &v2->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_B7076C(this, method);
    extendData = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)_4__this->fields.extendData;
    if ( !extendData )
      return 0;
    v6 = ServantPhotoEntity_TypeInfo;
    if ( (BYTE3(ServantPhotoEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
      v6 = ServantPhotoEntity_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            extendData,
            (System_Xml_XmlQualifiedName_o *)v6->static_fields->DISP_FORM_BY_FACE_KEY,
            &value,
            (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v8 = value;
    if ( !value )
LABEL_31:
      sub_B7076C(v8, v7);
    v9 = *(&System_Collections_Generic_List_object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&value->klass->_2.bitflags2 + 1) < (unsigned int)v9
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v9 - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_30:
      v8 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B70A60(v8);
      goto LABEL_31;
    }
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)value,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    p__7__wrap1 = &v2->fields.__7__wrap1;
    v11 = *(_OWORD *)&v25.fields.list;
    v2->fields.__7__wrap1.fields.current = v25.fields.current;
    *(_OWORD *)&v2->fields.__7__wrap1.fields.list = v11;
    sub_B70630(&v2->fields.__7__wrap1);
  }
  v2->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
          (System_Collections_Generic_List_Enumerator_T__o *)p__7__wrap1,
          (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__6____m__Finally1(v2, v12);
    v23 = 0;
    p__7__wrap1->fields.list = 0LL;
    *(_QWORD *)&p__7__wrap1->fields.index = 0LL;
    p__7__wrap1->fields.current = 0LL;
    return v23;
  }
  current = (System_Collections_Generic_Dictionary_string__object__o *)v2->fields.__7__wrap1.fields.current;
  if ( current )
  {
    v14 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v14
      || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v14 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      v8 = (System_Xml_Schema_XmlSchemaObject_o *)sub_B70A60(v2->fields.__7__wrap1.fields.current);
      goto LABEL_30;
    }
  }
  v15 = ServantPhotoEntity_TypeInfo;
  if ( (BYTE3(ServantPhotoEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v15 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v15->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  ScriptValue_23926536 = JsonManager__GetScriptValue_23926536(current, DISP_FORM_BY_FACE_SVTINDEX_KEY, 0, 0LL);
  v18 = JsonManager__GetScriptValue_23926536(
          current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0LL);
  v19 = JsonManager__GetScriptValue_23926536(
          current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0LL);
  v25.fields.index = 0;
  v25.fields.list = 0LL;
  *(_QWORD *)&v27.fields.Item1 = &v25;
  v27.fields.Item3 = ScriptValue_23926536;
  System_ValueTuple_int__int__int____ctor(v27, v18, v19, Method_System_ValueTuple_int__int__int___ctor__, v20);
  list = v25.fields.list;
  index = v25.fields.index;
  v23 = 1;
  v2->fields.__1__state = 1;
  *(_QWORD *)&v2->fields.__2__current.fields.Item1 = list;
  v2->fields.__2__current.fields.Item3 = index;
  return v23;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1

  if ( (byte_434F254 & 1) == 0 )
  {
    sub_B70694(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo);
    byte_434F254 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_B70764(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    if ( !v4 )
      sub_B7076C(CurrentManagedThreadId, v6);
    *(_QWORD *)(v4 + 40) = this->fields.__4__this;
    sub_B70630(v4 + 40);
    return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)v4;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_ServantPhotoEntity__GetOverrideFormList_d__6_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t Item3; // w9
  __int64 v6; // [xsp+0h] [xbp-20h] BYREF
  int32_t v7; // [xsp+8h] [xbp-18h]

  if ( (byte_434F253 & 1) == 0 )
  {
    sub_B70694(&System_ValueTuple_int__int__int__TypeInfo);
    byte_434F253 = 1;
  }
  Item3 = this->fields.__2__current.fields.Item3;
  v6 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  v7 = Item3;
  return (Il2CppObject *)j_il2cpp_value_box_0(System_ValueTuple_int__int__int__TypeInfo, &v6, v2);
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
  if ( (byte_434F252 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    byte_434F252 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&this->fields.__7__wrap1,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
}


void __fastcall ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0

  if ( (byte_434F24E & 1) == 0 )
  {
    sub_B70694(&ServantPhotoEntity___c_TypeInfo);
    byte_434F24E = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantPhotoEntity___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantPhotoEntity___c_o *)v1;
  sub_B70630(static_fields);
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
  System_String_o *v3; // x19
  System_String_o *v4; // x19
  System_String_array *v5; // x19
  ServantPhotoEntity___c_c *v6; // x8
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__5_2; // x20
  Il2CppObject *v9; // x21
  struct ServantPhotoEntity___c_StaticFields *v10; // x0
  __int64 v12; // x0

  v3 = s;
  if ( (byte_434F24F & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_ConvertAll_string__int___);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_System_Converter_string__int___ctor__);
    sub_B70694(&System_Converter_string__int__TypeInfo);
    sub_B70694(&Method_ServantPhotoEntity___c__GetFaceList_b__5_2__);
    sub_B70694(&ServantPhotoEntity___c_TypeInfo);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    this = (ServantPhotoEntity___c_o *)sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_434F24F = 1;
  }
  if ( !v3 )
    goto LABEL_17;
  this = (ServantPhotoEntity___c_o *)System_String__Replace_44765404(
                                       v3,
                                       (System_String_o *)StringLiteral_15855/*"["*/,
                                       (System_String_o *)StringLiteral_1/*""*/,
                                       0LL);
  if ( !this )
    goto LABEL_17;
  v4 = System_String__Replace_44765404(
         (System_String_o *)this,
         (System_String_o *)StringLiteral_16092/*"]"*/,
         (System_String_o *)StringLiteral_1/*""*/,
         0LL);
  this = (ServantPhotoEntity___c_o *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_17;
  s = (System_String_o *)this;
  if ( !LODWORD(this[1].monitor) )
  {
    v12 = sub_B70798(this);
    sub_B70738(v12, 0LL);
  }
  LOWORD(this[2].klass) = 44;
  if ( !v4 )
LABEL_17:
    sub_B7076C(this, s);
  v5 = System_String__Split(v4, (System_Char_array *)this, 0LL);
  v6 = ServantPhotoEntity___c_TypeInfo;
  if ( (BYTE3(ServantPhotoEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v6 = ServantPhotoEntity___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__5_2 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__5_2;
  if ( !_9__5_2 )
  {
    if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__5_2 = (System_Converter_BattleActionData_HealData__int__o *)sub_B70764(System_Converter_string__int__TypeInfo);
    System_Converter_BattleActionData_HealData__int____ctor(
      _9__5_2,
      v9,
      Method_ServantPhotoEntity___c__GetFaceList_b__5_2__,
      (const MethodInfo_21BC5DC *)Method_System_Converter_string__int___ctor__);
    v10 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v10->__9__5_2 = (struct System_Converter_string__int__o *)_9__5_2;
    sub_B70630(&v10->__9__5_2);
  }
  return System_Array__ConvertAll_string__int_(
           v5,
           (System_Converter_TInput__TOutput__o *)_9__5_2,
           (const MethodInfo_1FC9CB4 *)Method_System_Array_ConvertAll_string__int___);
}


int32_t __fastcall ServantPhotoEntity___c___GetFaceList_b__5_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_B7076C(this, 0LL);
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
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_434F250 & 1) == 0 )
  {
    sub_B70694(&Method_System_Linq_Enumerable_Skip_int___);
    sub_B70694(&Method_System_Linq_Enumerable_Take_int___);
    byte_434F250 = 1;
  }
  v5 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_1CC78B0 *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v5,
                                                            1,
                                                            (const MethodInfo_1CC7C04 *)Method_System_Linq_Enumerable_Take_int___);
}