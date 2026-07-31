void ServantPhotoEntity___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct ServantPhotoEntity_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct ServantPhotoEntity_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct ServantPhotoEntity_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  struct ServantPhotoEntity_StaticFields *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  if ( (byte_59390E9 & 1) == 0 )
  {
    sub_21FFC50(&ServantPhotoEntity_TypeInfo);
    sub_21FFC50(&StringLiteral_24234/*"restrictionSvtList"*/);
    sub_21FFC50(&StringLiteral_20450/*"form"*/);
    sub_21FFC50(&StringLiteral_19450/*"dispFormByFace"*/);
    sub_21FFC50(&StringLiteral_20239/*"faceIdx"*/);
    sub_21FFC50(&StringLiteral_25092/*"svtIdx"*/);
    byte_59390E9 = 1;
  }
  v7 = StringLiteral_19450/*"dispFormByFace"*/;
  ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_KEY = (struct System_String_o *)StringLiteral_19450/*"dispFormByFace"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantPhotoEntity_TypeInfo->static_fields,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v8 = StringLiteral_25092/*"svtIdx"*/;
  static_fields = ServantPhotoEntity_TypeInfo->static_fields;
  static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_25092/*"svtIdx"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY,
    v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = StringLiteral_20239/*"faceIdx"*/;
  v17 = ServantPhotoEntity_TypeInfo->static_fields;
  v17->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_20239/*"faceIdx"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v17->DISP_FORM_BY_FACE_FACEINDEX_KEY,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (int)StringLiteral_20450/*"form"*/;
  v25 = ServantPhotoEntity_TypeInfo->static_fields;
  v25->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_20450/*"form"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->DISP_FORM_BY_FACE_FORM_KEY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_24234/*"restrictionSvtList"*/;
  v33 = ServantPhotoEntity_TypeInfo->static_fields;
  v33->RestrictionSvtList = (struct System_String_o *)StringLiteral_24234/*"restrictionSvtList"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->RestrictionSvtList, v32, v34, v35, v36, v37, v38, v39);
}


void ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59390E8 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_long___ctor__);
    byte_59390E8 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3EDADB8 *)Method_DataEntityBase_long___ctor__);
}


int64_t ServantPhotoEntity__CreatePrimaryKey(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
ServantPhotoEntity_FaceData_array *ServantPhotoEntity__GetFaceList(
        ServantPhotoEntity_o *this,
        int32_t defaultForm,
        const MethodInfo *method)
{
  ServantPhotoEntity___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *dispFaceId; // x19
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x8
  System_Func_object__object__o *_9__6_0; // x22
  Il2CppObject *v9; // x23
  struct ServantPhotoEntity___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_List_TSource__o *v18; // x0
  __int64 v19; // x1
  ServantPhotoEntity___c_c *v20; // x8
  System_Collections_Generic_List_TSource__o *v21; // x22
  struct ServantPhotoEntity___c_StaticFields *v22; // x9
  System_Func_object__int__o *_9__6_1; // x19
  Il2CppObject *v24; // x23
  struct ServantPhotoEntity___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w23
  ServantPhotoEntity_FaceData_array *v33; // x19
  __int64 v34; // x24
  _QWORD *OverrideFormList; // x0
  const MethodInfo *v36; // x1
  System_Func_object__object__o *v37; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  _QWORD *v39; // x25
  __int64 v40; // x9
  _QWORD *v41; // x26
  __int64 v42; // x8
  __int64 v43; // x9
  int32_t *v44; // x10
  __int64 v45; // x29
  __int64 v46; // x27
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  __int64 v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  int v66; // w8
  __int64 v67; // x8
  _QWORD *v68; // x20
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 i; // x20
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  unsigned __int64 v85; // x0
  __int64 v86; // x1
  int max_length; // w9
  ServantPhotoEntity_FaceData_o *v88; // x8
  struct System_Int32_array *multiForm; // x8
  int v90; // w9
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  __int64 v96; // x0
  __int64 v97; // [xsp+18h] [xbp-68h]

  if ( (byte_59390E5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Min_int_____);
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_int____int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_string__int_____);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_int_____);
    sub_21FFC50(&ServantPhotoEntity_FaceData___TypeInfo);
    sub_21FFC50(&ServantPhotoEntity_FaceData_TypeInfo);
    sub_21FFC50(&System_Func_string__int____TypeInfo);
    sub_21FFC50(&System_Func_int____IEnumerable_int___TypeInfo);
    sub_21FFC50(&System_Func_int____int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_21FFC50(&Method_ServantPhotoEntity___c__GetFaceList_b__6_0__);
    sub_21FFC50(&Method_ServantPhotoEntity___c__GetFaceList_b__6_1__);
    sub_21FFC50(&Method_ServantPhotoEntity___c__DisplayClass6_0__GetFaceList_b__3__);
    sub_21FFC50(&ServantPhotoEntity___c__DisplayClass6_0_TypeInfo);
    sub_21FFC50(&ServantPhotoEntity___c_TypeInfo);
    byte_59390E5 = 1;
  }
  v5 = ServantPhotoEntity___c_TypeInfo;
  dispFaceId = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dispFaceId;
  if ( !*(&ServantPhotoEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo, *(_QWORD *)&defaultForm);
    v5 = ServantPhotoEntity___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__6_0 = (System_Func_object__object__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, *(_QWORD *)&defaultForm);
      static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_string__int____TypeInfo);
    System_Func_object__object____ctor(_9__6_0, v9, Method_ServantPhotoEntity___c__GetFaceList_b__6_0__, 0);
    v10 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v10->__9__6_0 = (struct System_Func_string__int____o *)_9__6_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__6_0, (int32_t)_9__6_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_string__int_____);
  v18 = System_Linq_Enumerable__ToList_object_(
          v17,
          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_int_____);
  v20 = ServantPhotoEntity___c_TypeInfo;
  v21 = v18;
  if ( !*(&ServantPhotoEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo, v19);
    v20 = ServantPhotoEntity___c_TypeInfo;
  }
  v22 = v20->static_fields;
  _9__6_1 = (System_Func_object__int__o *)v22->__9__6_1;
  if ( !_9__6_1 )
  {
    if ( !*(&v20->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v20, v19);
      v22 = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)v22->__9;
    _9__6_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_int____int__TypeInfo);
    System_Func_object__int____ctor(_9__6_1, v24, Method_ServantPhotoEntity___c__GetFaceList_b__6_1__, 0);
    v25 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v25->__9__6_1 = (struct System_Func_int____int__o *)_9__6_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->__9__6_1, (int32_t)_9__6_1, v26, v27, v28, v29, v30, v31);
  }
  v32 = System_Linq_Enumerable__Min_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (System_Func_TSource__int__o *)_9__6_1,
          (const MethodInfo_3854F2C *)Method_System_Linq_Enumerable_Min_int_____);
  v33 = (ServantPhotoEntity_FaceData_array *)sub_21FFD10(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v32);
  v34 = sub_21FFEBC(ServantPhotoEntity___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0);
  if ( !v34 )
    goto LABEL_73;
  *(_DWORD *)(v34 + 16) = 0;
  if ( v32 >= 1 )
  {
    while ( 1 )
    {
      v37 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_int____IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        v37,
        (Il2CppObject *)v34,
        Method_ServantPhotoEntity___c__DisplayClass6_0__GetFaceList_b__3__,
        0);
      v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)v37,
                                                                   (const MethodInfo_3860774 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = System_Linq_Enumerable__ToArray_int_(
                           v38,
                           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v21 )
        break;
      v39 = OverrideFormList;
      OverrideFormList = (_QWORD *)sub_21FFD10(int___TypeInfo, (unsigned int)v21->fields._size);
      if ( !OverrideFormList )
        break;
      v40 = OverrideFormList[3];
      v41 = OverrideFormList;
      if ( (int)v40 >= 1 )
      {
        v42 = (unsigned int)v40 & ~((int)v40 >> 31);
        v43 = (unsigned int)OverrideFormList[3];
        v44 = (int32_t *)(OverrideFormList + 4);
        while ( v43 )
        {
          --v42;
          --v43;
          *v44++ = defaultForm;
          if ( !v42 )
            goto LABEL_23;
        }
LABEL_72:
        sub_21FFED4(OverrideFormList);
      }
LABEL_23:
      v45 = *(int *)(v34 + 16);
      v46 = sub_21FFEBC(ServantPhotoEntity_FaceData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v46, 0);
      if ( !v46 )
        break;
      *(_QWORD *)(v46 + 16) = v39;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 16), (int32_t)v39, v47, v48, v49, v50, v51, v52);
      *(_QWORD *)(v46 + 24) = v41;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 24), (int32_t)v41, v53, v54, v55, v56, v57, v58);
      if ( !v33 )
        break;
      OverrideFormList = (_QWORD *)sub_21FFDA4(v46, v33->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v96 = sub_21FFEF0(0, v59);
        sub_21FFD90(v96, 0);
      }
      if ( (unsigned int)v45 >= LODWORD(v33->max_length) )
        goto LABEL_72;
      v33->m_Items[v45] = (ServantPhotoEntity_FaceData_o *)v46;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v33->m_Items[v45], v46, v60, v61, v62, v63, v64, v65);
      v66 = *(_DWORD *)(v34 + 16) + 1;
      *(_DWORD *)(v34 + 16) = v66;
      if ( v66 >= v32 )
        goto LABEL_28;
    }
LABEL_73:
    sub_21FFECC(OverrideFormList, v36);
  }
LABEL_28:
  OverrideFormList = ServantPhotoEntity__GetOverrideFormList(this, v36);
  if ( !OverrideFormList )
    goto LABEL_73;
  v67 = *OverrideFormList;
  v68 = OverrideFormList;
  v69 = *(unsigned __int16 *)(*OverrideFormList + 302LL);
  if ( *(_WORD *)(*OverrideFormList + 302LL) )
  {
    v70 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v70 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_33;
    }
    v71 = v67 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_33:
    v71 = sub_2237E2C(OverrideFormList, System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, 0);
  }
  v72 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v71)(v68, *(_QWORD *)(v71 + 8));
  v97 = v72;
  if ( !v72 )
    sub_21FFECC(v72, v73);
  for ( i = v72; ; i = v97 )
  {
    v75 = *(_QWORD *)i;
    v76 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_41;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_41:
      v78 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v79 = (*(__int64 (__fastcall **)(__int64, _QWORD))v78)(i, *(_QWORD *)(v78 + 8));
    if ( (v79 & 1) == 0 )
      break;
    if ( !v97 )
      sub_21FFECC(v79, v80);
    v81 = *(_QWORD *)v97;
    v82 = *(unsigned __int16 *)(*(_QWORD *)v97 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v97 + 302LL) )
    {
      v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v83 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
      {
        --v82;
        v83 += 4;
        if ( !v82 )
          goto LABEL_49;
      }
      v84 = v81 + 16LL * *v83 + 312;
    }
    else
    {
LABEL_49:
      v84 = sub_2237E2C(v97, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0);
    }
    v85 = (*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v97, *(_QWORD *)(v84 + 8));
    if ( (v85 & 0x8000000000000000LL) == 0 )
    {
      if ( !v33 )
        sub_21FFECC(v85, v86);
      max_length = v33->max_length;
      if ( max_length > SHIDWORD(v85) )
      {
        if ( HIDWORD(v85) >= max_length )
          sub_21FFED4(v85);
        v88 = v33->m_Items[HIDWORD(v85)];
        if ( !v88 )
          sub_21FFECC(v85, v86);
        if ( (v85 & 0x80000000) == 0 )
        {
          multiForm = v88->fields.multiForm;
          if ( !multiForm )
            sub_21FFECC(v85, v86);
          v90 = multiForm->max_length;
          if ( v90 > (int)v85 )
          {
            if ( (unsigned int)v85 >= v90 )
              sub_21FFED4(v85);
            multiForm->m_Items[(int)v85] = v86;
          }
        }
      }
    }
  }
  if ( v97 )
  {
    v91 = *(_QWORD *)v97;
    v92 = *(unsigned __int16 *)(*(_QWORD *)v97 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v97 + 302LL) )
    {
      v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v93 - 1) != System_IDisposable_TypeInfo )
      {
        --v92;
        v93 += 4;
        if ( !v92 )
          goto LABEL_68;
      }
      v94 = v91 + 16LL * *v93 + 312;
    }
    else
    {
LABEL_68:
      v94 = sub_2237E2C(v97, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v94)(v97, *(_QWORD *)(v94 + 8));
  }
  return v33;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_59390E6 & 1) == 0 )
  {
    sub_21FFC50(&ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    byte_59390E6 = 1;
  }
  v3 = sub_21FFEBC(ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *)v3;
}


bool ServantPhotoEntity__TryGetRestrictionSvtList(
        ServantPhotoEntity_o *this,
        System_Int32_array **restrictionSvtList,
        const MethodInfo *method)
{
  ServantPhotoEntity_c *v5; // x0
  System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  System_Int32_array *IntArray; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59390E7 & 1) == 0 )
  {
    sub_21FFC50(&ServantPhotoEntity_TypeInfo);
    byte_59390E7 = 1;
  }
  v5 = ServantPhotoEntity_TypeInfo;
  extendData = this->fields.extendData;
  if ( !*(&ServantPhotoEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo, restrictionSvtList);
    v5 = ServantPhotoEntity_TypeInfo;
  }
  IntArray = EntityScriptUtil__GetIntArray(extendData, v5->static_fields->RestrictionSvtList, 0, 0);
  *restrictionSvtList = IntArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)restrictionSvtList, (int32_t)IntArray, v8, v9, v10, v11, v12, v13);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*restrictionSvtList, 0);
}


void ServantPhotoEntity_FaceData___ctor(ServantPhotoEntity_FaceData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ServantPhotoEntity__GetOverrideFormList_d__7___ctor(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool ServantPhotoEntity__GetOverrideFormList_d__7__MoveNext(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v2; // x19
  int32_t _1__state; // w8
  struct ServantPhotoEntity_o *_4__this; // x8
  System_Collections_Generic_Dictionary_object__object__o *extendData; // x19
  ServantPhotoEntity_c *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *v9; // x0
  System_Collections_Generic_List_object__c *v10; // x1
  __int64 naturalAligment; // x9
  Il2CppObject *current; // x8
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v13; // x9
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_Dictionary_string__object__c *v20; // x1
  __int64 v21; // x2
  Il2CppObject *v22; // x19
  __int64 v23; // x9
  ServantPhotoEntity_c *v24; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x20
  int32_t ScriptValue_47969284; // w20
  int32_t v27; // w21
  int32_t v28; // w3
  const MethodInfo_3CCD12C *v29; // x5
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v30; // x8
  bool result; // w0
  int32_t index; // w10
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v33; // x8
  __int64 v34; // x19
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+20h] [xbp-60h] BYREF
  __int64 v37; // [xsp+38h] [xbp-48h]
  ServantPhotoEntity__GetOverrideFormList_d__7_o **v38; // [xsp+40h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+48h] [xbp-38h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v40; // [xsp+58h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v41; // 0:x0.12

  v40 = this;
  v2 = this;
  if ( (byte_59390ED & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&ServantPhotoEntity_TypeInfo);
    this = (ServantPhotoEntity__GetOverrideFormList_d__7_o *)sub_21FFC50(&Method_System_ValueTuple_int__int__int___ctor__);
    byte_59390ED = 1;
  }
  _1__state = v2->fields.__1__state;
  v37 = 0;
  v38 = &v40;
  value = 0;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      goto LABEL_23;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_21FFECC(this, method);
    extendData = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.extendData;
    if ( !extendData )
      goto LABEL_23;
    v6 = ServantPhotoEntity_TypeInfo;
    if ( !*(&ServantPhotoEntity_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo, method);
      v6 = ServantPhotoEntity_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            extendData,
            (Il2CppObject *)v6->static_fields->DISP_FORM_BY_FACE_KEY,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
LABEL_23:
      result = 0;
      goto LABEL_25;
    }
    v9 = value;
    if ( !value )
LABEL_30:
      sub_21FFECC(v9, v7);
    v10 = System_Collections_Generic_List_object__TypeInfo;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_29:
      sub_220024C(v9, v10, v8);
      goto LABEL_30;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      &v35,
      (System_Collections_Generic_List_object__o *)value,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    current = v35.fields._current;
    v13 = v40;
    v36 = v35;
    *(_OWORD *)&v40->fields.__7__wrap1.fields._list = *(_OWORD *)&v35.fields._list;
    v13->fields.__7__wrap1.fields._current = current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->fields.__7__wrap1, 0, v14, v15, v16, v17, v18, v19);
    v2 = v40;
  }
  v2->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v2->fields.__7__wrap1,
          (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__7____m__Finally1(v40, (const MethodInfo *)v20);
    v33 = v40;
    result = 0;
    *(_QWORD *)&v40->fields.__7__wrap1.fields._index = 0;
    v33->fields.__7__wrap1.fields._current = 0;
    v33->fields.__7__wrap1.fields._list = 0;
    goto LABEL_25;
  }
  v22 = v40->fields.__7__wrap1.fields._current;
  if ( v22 )
  {
    v20 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v23 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( v22->klass->_2.naturalAligment < (unsigned int)v23
      || (System_Collections_Generic_Dictionary_string__object__c *)v22->klass->_2.typeHierarchy[v23 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_220024C(
        v40->fields.__7__wrap1.fields._current,
        System_Collections_Generic_Dictionary_string__object__TypeInfo,
        v21);
      goto LABEL_29;
    }
  }
  v24 = ServantPhotoEntity_TypeInfo;
  if ( !*(&ServantPhotoEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo, v20);
    v24 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v24->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v20);
  ScriptValue_47969284 = JsonManager__GetScriptValue_47969284(
                           (System_Collections_Generic_Dictionary_string__object__o *)v22,
                           DISP_FORM_BY_FACE_SVTINDEX_KEY,
                           0,
                           0);
  v27 = JsonManager__GetScriptValue_47969284(
          (System_Collections_Generic_Dictionary_string__object__o *)v22,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0);
  v28 = JsonManager__GetScriptValue_47969284(
          (System_Collections_Generic_Dictionary_string__object__o *)v22,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0);
  v36.fields._index = 0;
  v36.fields._list = 0;
  *(_QWORD *)&v41.fields.Item1 = &v36;
  v41.fields.Item3 = ScriptValue_47969284;
  System_ValueTuple_int__int__int____ctor(v41, v27, v28, Method_System_ValueTuple_int__int__int___ctor__, v29);
  v30 = v40;
  result = 1;
  index = v36.fields._index;
  *(_QWORD *)&v40->fields.__2__current.fields.Item1 = v36.fields._list;
  v30->fields.__2__current.fields.Item3 = index;
  v30->fields.__1__state = 1;
LABEL_25:
  v34 = v37;
  if ( v37 )
  {
    sub_1FFB388(&v38);
    sub_21FFEC4(v34);
  }
  return result;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  int32_t CurrentManagedThreadId; // w0
  struct ServantPhotoEntity_o *_4__this; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_59390F0 & 1) == 0 )
  {
    sub_21FFC50(&ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    byte_59390F0 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_21FFEBC(ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_DWORD *)(v4 + 32) = CurrentManagedThreadId;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)_4__this, v7, v8, v9, v10, v11, v12);
    return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)this;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__int__int__o ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_Generic_IEnumerator__System_Int32_System_Int32_System_Int32___get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  int32_t Item3; // w1
  __int64 v3; // x0
  System_ValueTuple_int__int__int__o result; // 0:x0.12

  Item3 = this->fields.__2__current.fields.Item3;
  v3 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  *(_QWORD *)&result.fields.Item1 = v3;
  result.fields.Item3 = Item3;
  return result;
}


void __noreturn ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_IEnumerator_Reset(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_ServantPhotoEntity__GetOverrideFormList_d__7_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  int32_t Item3; // w9
  __int64 v5; // [xsp+0h] [xbp-30h] BYREF
  int32_t v6; // [xsp+8h] [xbp-28h]

  if ( (byte_59390EF & 1) == 0 )
  {
    sub_21FFC50(&System_ValueTuple_int__int__int__TypeInfo);
    byte_59390EF = 1;
  }
  Item3 = this->fields.__2__current.fields.Item3;
  v5 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  v6 = Item3;
  return (Il2CppObject *)j_il2cpp_value_box_0(System_ValueTuple_int__int__int__TypeInfo, &v5);
}


void ServantPhotoEntity__GetOverrideFormList_d__7__System_IDisposable_Dispose(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ServantPhotoEntity__GetOverrideFormList_d__7____m__Finally1(this, method);
}


void ServantPhotoEntity__GetOverrideFormList_d__7____m__Finally1(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_59390EE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    byte_59390EE = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(&this->fields.__7__wrap1, v3);
}


void ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59390EA & 1) == 0 )
  {
    sub_21FFC50(&ServantPhotoEntity___c_TypeInfo);
    byte_59390EA = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantPhotoEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantPhotoEntity___c_TypeInfo->static_fields->__9 = (struct ServantPhotoEntity___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantPhotoEntity___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantPhotoEntity___c___ctor(ServantPhotoEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Int32_array *ServantPhotoEntity___c___GetFaceList_b__6_0(
        ServantPhotoEntity___c_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  __int64 v5; // x1
  ServantPhotoEntity___c_c *v6; // x8
  System_Object_array *v7; // x19
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x9
  System_Converter_object__int__o *_9__6_2; // x20
  Il2CppObject *v10; // x21
  struct ServantPhotoEntity___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_59390EB & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_ConvertAll_string__int___);
    sub_21FFC50(&System_Converter_string__int__TypeInfo);
    sub_21FFC50(&Method_ServantPhotoEntity___c__GetFaceList_b__6_2__);
    sub_21FFC50(&ServantPhotoEntity___c_TypeInfo);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (ServantPhotoEntity___c_o *)sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_59390EB = 1;
  }
  if ( !s
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_75490096(
                                             s,
                                             (System_String_o *)StringLiteral_16395/*"["*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0)) == 0
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_75490096(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_16659/*"]"*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0)) == 0 )
  {
    sub_21FFECC(this, s);
  }
  v4 = System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
  v6 = ServantPhotoEntity___c_TypeInfo;
  v7 = (System_Object_array *)v4;
  if ( !*(&ServantPhotoEntity___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo, v5);
    v6 = ServantPhotoEntity___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__6_2 = (System_Converter_object__int__o *)static_fields->__9__6_2;
  if ( !_9__6_2 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v5);
      static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__6_2 = (System_Converter_object__int__o *)sub_21FFEBC(System_Converter_string__int__TypeInfo);
    System_Converter_object__int____ctor(_9__6_2, v10, Method_ServantPhotoEntity___c__GetFaceList_b__6_2__, 0);
    v11 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v11->__9__6_2 = (struct System_Converter_string__int__o *)_9__6_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__6_2, (int32_t)_9__6_2, v12, v13, v14, v15, v16, v17);
  }
  return System_Array__ConvertAll_object__int_(
           v7,
           (System_Converter_TInput__TOutput__o *)_9__6_2,
           (const MethodInfo_3974B98 *)Method_System_Array_ConvertAll_string__int___);
}


int32_t ServantPhotoEntity___c___GetFaceList_b__6_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_21FFECC(this, 0);
  return l->max_length;
}


int32_t ServantPhotoEntity___c___GetFaceList_b__6_2(
        ServantPhotoEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  return System_Int32__Parse(input, 0);
}


void ServantPhotoEntity___c__DisplayClass6_0___ctor(
        ServantPhotoEntity___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_int__o *ServantPhotoEntity___c__DisplayClass6_0___GetFaceList_b__3(
        ServantPhotoEntity___c__DisplayClass6_0_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_59390EC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Skip_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Take_int___);
    byte_59390EC = 1;
  }
  v5 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_38665C4 *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v5,
                                                            1,
                                                            (const MethodInfo_3866CE8 *)Method_System_Linq_Enumerable_Take_int___);
}