void ServantPhotoEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct ServantPhotoEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct ServantPhotoEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct ServantPhotoEntity_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  struct ServantPhotoEntity_StaticFields *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D313E3 & 1) == 0 )
  {
    sub_1C93AD4(&ServantPhotoEntity_TypeInfo);
    sub_1C93AD4(&StringLiteral_23363/*"restrictionSvtList"*/);
    sub_1C93AD4(&StringLiteral_19774/*"form"*/);
    sub_1C93AD4(&StringLiteral_18807/*"dispFormByFace"*/);
    sub_1C93AD4(&StringLiteral_19581/*"faceIdx"*/);
    sub_1C93AD4(&StringLiteral_24167/*"svtIdx"*/);
    byte_4D313E3 = 1;
  }
  ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_KEY = (struct System_String_o *)StringLiteral_18807/*"dispFormByFace"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantPhotoEntity_TypeInfo->static_fields,
    StringLiteral_18807/*"dispFormByFace"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_24167/*"svtIdx"*/;
  static_fields = ServantPhotoEntity_TypeInfo->static_fields;
  static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_24167/*"svtIdx"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = StringLiteral_19581/*"faceIdx"*/;
  v16 = ServantPhotoEntity_TypeInfo->static_fields;
  v16->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_19581/*"faceIdx"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->DISP_FORM_BY_FACE_FACEINDEX_KEY, v15, v17, v18, v19, v20, v21, v22);
  v23 = (int)StringLiteral_19774/*"form"*/;
  v24 = ServantPhotoEntity_TypeInfo->static_fields;
  v24->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_19774/*"form"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v24->DISP_FORM_BY_FACE_FORM_KEY, v23, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_23363/*"restrictionSvtList"*/;
  v32 = ServantPhotoEntity_TypeInfo->static_fields;
  v32->RestrictionSvtList = (struct System_String_o *)StringLiteral_23363/*"restrictionSvtList"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v32->RestrictionSvtList, v31, v33, v34, v35, v36, v37, v38);
}


void ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D313E2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_long___ctor__);
    byte_4D313E2 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3460B84 *)Method_DataEntityBase_long___ctor__);
}


int64_t ServantPhotoEntity__CreatePrimaryKey(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


ServantPhotoEntity_FaceData_array *ServantPhotoEntity__GetFaceList(
        ServantPhotoEntity_o *this,
        int32_t defaultForm,
        const MethodInfo *method)
{
  ServantPhotoEntity___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_TSource__o *dispFaceId; // x19
  System_Func_object__object__o *_9__6_0; // x22
  Il2CppObject *v8; // x23
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Collections_Generic_List_TSource__o *v17; // x0
  ServantPhotoEntity___c_c *v18; // x8
  System_Collections_Generic_List_TSource__o *v19; // x22
  System_Func_object__int__o *_9__6_1; // x19
  Il2CppObject *v21; // x23
  struct ServantPhotoEntity___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w23
  ServantPhotoEntity_FaceData_array *v30; // x19
  __int64 v31; // x24
  unsigned int *OverrideFormList; // x0
  const MethodInfo *v33; // x1
  System_Func_object__object__o *v34; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  unsigned int *v36; // x25
  unsigned __int64 v37; // x8
  unsigned int *v38; // x26
  unsigned __int64 v39; // x9
  __int64 v40; // x28
  __int64 v41; // x27
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  Il2CppClass **v60; // x0
  int v61; // w8
  __int64 v62; // x8
  unsigned int *v63; // x20
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x20
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  int max_length; // w11
  ServantPhotoEntity_FaceData_o *v80; // x10
  struct System_Int32_array *multiForm; // x10
  int v82; // w11
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v88; // x0

  if ( (byte_4D313DF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Min_int_____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_int____int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_string__int_____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int_____);
    sub_1C93AD4(&ServantPhotoEntity_FaceData___TypeInfo);
    sub_1C93AD4(&ServantPhotoEntity_FaceData_TypeInfo);
    sub_1C93AD4(&System_Func_string__int____TypeInfo);
    sub_1C93AD4(&System_Func_int____IEnumerable_int___TypeInfo);
    sub_1C93AD4(&System_Func_int____int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C93AD4(&Method_ServantPhotoEntity___c__GetFaceList_b__6_0__);
    sub_1C93AD4(&Method_ServantPhotoEntity___c__GetFaceList_b__6_1__);
    sub_1C93AD4(&Method_ServantPhotoEntity___c__DisplayClass6_0__GetFaceList_b__3__);
    sub_1C93AD4(&ServantPhotoEntity___c__DisplayClass6_0_TypeInfo);
    sub_1C93AD4(&ServantPhotoEntity___c_TypeInfo);
    byte_4D313DF = 1;
  }
  v5 = ServantPhotoEntity___c_TypeInfo;
  dispFaceId = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dispFaceId;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v5 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__object__o *)v5->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantPhotoEntity___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__6_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_string__int____TypeInfo);
    System_Func_object__object____ctor(_9__6_0, v8, Method_ServantPhotoEntity___c__GetFaceList_b__6_0__, 0);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_string__int____o *)_9__6_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v10, v11, v12, v13, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_string__int_____);
  v17 = System_Linq_Enumerable__ToList_object_(
          v16,
          (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_int_____);
  v18 = ServantPhotoEntity___c_TypeInfo;
  v19 = v17;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v18 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__6_1 = (System_Func_object__int__o *)v18->static_fields->__9__6_1;
  if ( !_9__6_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = ServantPhotoEntity___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__6_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_int____int__TypeInfo);
    System_Func_object__int____ctor(_9__6_1, v21, Method_ServantPhotoEntity___c__GetFaceList_b__6_1__, 0);
    v22 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v22->__9__6_1 = (struct System_Func_int____int__o *)_9__6_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v22->__9__6_1, (int32_t)_9__6_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = System_Linq_Enumerable__Min_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v19,
          (System_Func_TSource__int__o *)_9__6_1,
          (const MethodInfo_31D3230 *)Method_System_Linq_Enumerable_Min_int_____);
  v30 = (ServantPhotoEntity_FaceData_array *)sub_1C93B7C(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v29);
  v31 = sub_1C93D20(ServantPhotoEntity___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0);
  if ( !v31 )
    goto LABEL_67;
  *(_DWORD *)(v31 + 16) = 0;
  if ( v29 >= 1 )
  {
    while ( 1 )
    {
      v34 = (System_Func_object__object__o *)sub_1C93D20(System_Func_int____IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        v34,
        (Il2CppObject *)v31,
        Method_ServantPhotoEntity___c__DisplayClass6_0__GetFaceList_b__3__,
        0);
      v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v19,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)v34,
                                                                   (const MethodInfo_31DD360 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = (unsigned int *)System_Linq_Enumerable__ToArray_int_(
                                           v35,
                                           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v19 )
        break;
      v36 = OverrideFormList;
      OverrideFormList = (unsigned int *)sub_1C93B7C(int___TypeInfo, (unsigned int)v19->fields._size);
      if ( !OverrideFormList )
        break;
      v37 = OverrideFormList[6];
      v38 = OverrideFormList;
      if ( (__int64)(v37 << 32) >= 1 )
      {
        v39 = 0;
        while ( v39 < v37 )
        {
          OverrideFormList[v39++ + 8] = defaultForm;
          if ( (int)v37 == v39 )
            goto LABEL_23;
        }
LABEL_66:
        sub_1C93D34(OverrideFormList);
      }
LABEL_23:
      v40 = *(int *)(v31 + 16);
      v41 = sub_1C93D20(ServantPhotoEntity_FaceData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v41, 0);
      if ( !v41 )
        break;
      *(_QWORD *)(v41 + 16) = v36;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 16), (int32_t)v36, v42, v43, v44, v45, v46, v47);
      *(_QWORD *)(v41 + 24) = v38;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 24), (int32_t)v38, v48, v49, v50, v51, v52, v53);
      if ( !v30 )
        break;
      OverrideFormList = (unsigned int *)sub_1C93C10(v41, v30->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v88 = sub_1C93D50(0);
        sub_1C93BFC(v88, 0);
      }
      if ( (unsigned int)v40 >= LODWORD(v30->max_length) )
        goto LABEL_66;
      v60 = &v30->obj.klass + v40;
      v60[4] = (Il2CppClass *)v41;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v60 + 4), v41, v54, v55, v56, v57, v58, v59);
      v61 = *(_DWORD *)(v31 + 16) + 1;
      *(_DWORD *)(v31 + 16) = v61;
      if ( v61 >= v29 )
        goto LABEL_28;
    }
LABEL_67:
    sub_1C93D2C(OverrideFormList, v33);
  }
LABEL_28:
  OverrideFormList = (unsigned int *)ServantPhotoEntity__GetOverrideFormList(this, v33);
  if ( !OverrideFormList )
    goto LABEL_67;
  v62 = *(_QWORD *)OverrideFormList;
  v63 = OverrideFormList;
  v64 = *(unsigned __int16 *)(*(_QWORD *)OverrideFormList + 302LL);
  if ( *(_WORD *)(*(_QWORD *)OverrideFormList + 302LL) )
  {
    v65 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v65 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_33;
    }
    v66 = v62 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_33:
    v66 = sub_1C69E5C(OverrideFormList, System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, 0);
  }
  v68 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))v66)(v63, *(_QWORD *)(v66 + 8));
  if ( !v68 )
    sub_1C93D2C(0, v67);
  while ( 1 )
  {
    v69 = *(_QWORD *)v68;
    v70 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_40;
      }
      v72 = v69 + 16LL * *v71 + 312;
    }
    else
    {
LABEL_40:
      v72 = sub_1C69E5C(v68, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8)) & 1) == 0 )
      break;
    v73 = *(_QWORD *)v68;
    v74 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
    {
      v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v75 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
      {
        --v74;
        v75 += 4;
        if ( !v74 )
          goto LABEL_47;
      }
      v76 = v73 + 16LL * *v75 + 312;
    }
    else
    {
LABEL_47:
      v76 = sub_1C69E5C(v68, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0);
    }
    v77 = (*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v68, *(_QWORD *)(v76 + 8));
    if ( (v77 & 0x8000000000000000LL) == 0 )
    {
      if ( !v30 )
        sub_1C93D2C(v77, v78);
      max_length = v30->max_length;
      if ( max_length > SHIDWORD(v77) )
      {
        if ( HIDWORD(v77) >= max_length )
          sub_1C93D34(v77);
        v80 = v30->m_Items[v77 >> 32];
        if ( !v80 )
          sub_1C93D2C(v77, v78);
        if ( (v77 & 0x80000000) == 0 )
        {
          multiForm = v80->fields.multiForm;
          if ( !multiForm )
            sub_1C93D2C(v77, v78);
          v82 = multiForm->max_length;
          if ( v82 > (int)v77 )
          {
            if ( (unsigned int)v77 >= v82 )
              sub_1C93D34(v77);
            multiForm->m_Items[(int)v77] = v78;
          }
        }
      }
    }
  }
  v83 = *(_QWORD *)v68;
  v84 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
  {
    v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_63;
    }
    v86 = v83 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_63:
    v86 = sub_1C69E5C(v68, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v86)(v68, *(_QWORD *)(v86 + 8));
  return v30;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D313E0 & 1) == 0 )
  {
    sub_1C93AD4(&ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    byte_4D313E0 = 1;
  }
  v3 = sub_1C93D20(ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)this, v4, v5, v6, v7, v8, v9);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D313E1 & 1) == 0 )
  {
    sub_1C93AD4(&ServantPhotoEntity_TypeInfo);
    byte_4D313E1 = 1;
  }
  v5 = ServantPhotoEntity_TypeInfo;
  extendData = this->fields.extendData;
  if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v5 = ServantPhotoEntity_TypeInfo;
  }
  IntArray = EntityScriptUtil__GetIntArray(extendData, v5->static_fields->RestrictionSvtList, 0, 0);
  *restrictionSvtList = IntArray;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)restrictionSvtList, (int32_t)IntArray, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *v8; // x0
  __int64 naturalAligment; // x9
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v10; // x9
  __int128 v11; // q0
  struct System_Collections_Generic_List_Enumerator_object__o *p__7__wrap1; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  const MethodInfo *v19; // x1
  Il2CppObject *current; // x19
  __int64 v21; // x9
  ServantPhotoEntity_c *v22; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x20
  int32_t ScriptValue_41762716; // w20
  int32_t v25; // w21
  int32_t v26; // w3
  const MethodInfo_3BE3D78 *v27; // x5
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v28; // x9
  int32_t index; // w10
  struct System_Collections_Generic_List_T__o *list; // x11
  bool v31; // w8
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v32; // x9
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-60h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__7_o **v36; // [xsp+40h] [xbp-40h]
  Il2CppObject *value; // [xsp+48h] [xbp-38h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v38; // [xsp+58h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v39; // 0:x0.12

  v38 = this;
  v2 = this;
  if ( (byte_4D313E7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&ServantPhotoEntity_TypeInfo);
    this = (ServantPhotoEntity__GetOverrideFormList_d__7_o *)sub_1C93AD4(&Method_System_ValueTuple_int__int__int___ctor__);
    byte_4D313E7 = 1;
  }
  v36 = &v38;
  value = 0;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C93D2C(this, method);
    extendData = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.extendData;
    if ( !extendData )
      return 0;
    v6 = ServantPhotoEntity_TypeInfo;
    if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
      v6 = ServantPhotoEntity_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            extendData,
            (Il2CppObject *)v6->static_fields->DISP_FORM_BY_FACE_KEY,
            &value,
            (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v8 = value;
    if ( !value )
LABEL_27:
      sub_1C93D2C(v8, v7);
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_26:
      sub_1C940C8(v8);
      goto LABEL_27;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_object__o *)value,
      (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v10 = v38;
    v11 = *(_OWORD *)&v34.fields._list;
    p__7__wrap1 = &v38->fields.__7__wrap1;
    v35 = v34;
    v38->fields.__7__wrap1.fields._current = v34.fields._current;
    *(_OWORD *)&v10->fields.__7__wrap1.fields._list = v11;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p__7__wrap1, 0, v13, v14, v15, v16, v17, v18);
    v2 = v38;
  }
  v2->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v2->fields.__7__wrap1,
          (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__7____m__Finally1(v38, v19);
    v32 = v38;
    v31 = 0;
    v38->fields.__7__wrap1.fields._list = 0;
    *(_QWORD *)&v32->fields.__7__wrap1.fields._index = 0;
    v32->fields.__7__wrap1.fields._current = 0;
    return v31;
  }
  current = v38->fields.__7__wrap1.fields._current;
  if ( current )
  {
    v21 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( current->klass->_2.naturalAligment < (unsigned int)v21
      || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C940C8(v38->fields.__7__wrap1.fields._current);
      goto LABEL_26;
    }
  }
  v22 = ServantPhotoEntity_TypeInfo;
  if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v22 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v22->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  ScriptValue_41762716 = JsonManager__GetScriptValue_41762716(
                           (System_Collections_Generic_Dictionary_string__object__o *)current,
                           DISP_FORM_BY_FACE_SVTINDEX_KEY,
                           0,
                           0);
  v25 = JsonManager__GetScriptValue_41762716(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0);
  v26 = JsonManager__GetScriptValue_41762716(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0);
  v35.fields._index = 0;
  v35.fields._list = 0;
  *(_QWORD *)&v39.fields.Item1 = &v35;
  v39.fields.Item3 = ScriptValue_41762716;
  System_ValueTuple_int__int__int____ctor(v39, v25, v26, Method_System_ValueTuple_int__int__int___ctor__, v27);
  v28 = v38;
  index = v35.fields._index;
  list = v35.fields._list;
  v31 = 1;
  v38->fields.__1__state = 1;
  v28->fields.__2__current.fields.Item3 = index;
  *(_QWORD *)&v28->fields.__2__current.fields.Item1 = list;
  return v31;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct ServantPhotoEntity_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4D313EA & 1) == 0 )
  {
    sub_1C93AD4(&ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    byte_4D313EA = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C93D20(ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7, v8, v9, v10, v11);
    return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)this;
}


System_ValueTuple_int__int__int__o ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_Generic_IEnumerator__System_Int32_System_Int32_System_Int32___get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  System_ValueTuple_int__int__int__o result; // 0:x0.12

  result.fields.Item3 = this->fields.__2__current.fields.Item3;
  *(_QWORD *)&result.fields.Item1 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  return result;
}


void __noreturn ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_IEnumerator_Reset(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_ServantPhotoEntity__GetOverrideFormList_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x9
  __int64 v5; // [xsp+0h] [xbp-30h] BYREF
  int32_t Item3; // [xsp+8h] [xbp-28h]

  if ( (byte_4D313E9 & 1) == 0 )
  {
    sub_1C93AD4(&System_ValueTuple_int__int__int__TypeInfo);
    byte_4D313E9 = 1;
  }
  v3 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  Item3 = this->fields.__2__current.fields.Item3;
  v5 = v3;
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
  if ( (byte_4D313E8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    byte_4D313E8 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
}


void ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D313E4 & 1) == 0 )
  {
    sub_1C93AD4(&ServantPhotoEntity___c_TypeInfo);
    byte_4D313E4 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantPhotoEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantPhotoEntity___c_TypeInfo->static_fields->__9 = (struct ServantPhotoEntity___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantPhotoEntity___c_TypeInfo->static_fields,
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
  ServantPhotoEntity___c_c *v5; // x8
  System_Object_array *v6; // x19
  System_Converter_object__int__o *_9__6_2; // x20
  Il2CppObject *v8; // x21
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D313E5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_ConvertAll_string__int___);
    sub_1C93AD4(&System_Converter_string__int__TypeInfo);
    sub_1C93AD4(&Method_ServantPhotoEntity___c__GetFaceList_b__6_2__);
    sub_1C93AD4(&ServantPhotoEntity___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    this = (ServantPhotoEntity___c_o *)sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    byte_4D313E5 = 1;
  }
  if ( !s
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_64472288(
                                             s,
                                             (System_String_o *)StringLiteral_15904/*"["*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0)) == 0
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_64472288(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_16156/*"]"*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0)) == 0 )
  {
    sub_1C93D2C(this, s);
  }
  v4 = System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
  v5 = ServantPhotoEntity___c_TypeInfo;
  v6 = (System_Object_array *)v4;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v5 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__6_2 = (System_Converter_object__int__o *)v5->static_fields->__9__6_2;
  if ( !_9__6_2 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = ServantPhotoEntity___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__6_2 = (System_Converter_object__int__o *)sub_1C93D20(System_Converter_string__int__TypeInfo);
    System_Converter_object__int____ctor(_9__6_2, v8, Method_ServantPhotoEntity___c__GetFaceList_b__6_2__, 0);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_2 = (struct System_Converter_string__int__o *)_9__6_2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_2, (int32_t)_9__6_2, v10, v11, v12, v13, v14, v15);
  }
  return System_Array__ConvertAll_object__int_(
           v6,
           (System_Converter_TInput__TOutput__o *)_9__6_2,
           (const MethodInfo_32A7758 *)Method_System_Array_ConvertAll_string__int___);
}


int32_t ServantPhotoEntity___c___GetFaceList_b__6_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1C93D2C(this, 0);
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

  if ( (byte_4D313E6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Take_int___);
    byte_4D313E6 = 1;
  }
  v5 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_31E1EC4 *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v5,
                                                            1,
                                                            (const MethodInfo_31E2544 *)Method_System_Linq_Enumerable_Take_int___);
}