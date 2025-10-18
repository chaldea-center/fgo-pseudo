void ServantPhotoEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct ServantPhotoEntity_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct ServantPhotoEntity_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct ServantPhotoEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  struct ServantPhotoEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C439B1 & 1) == 0 )
  {
    sub_1C37058(&ServantPhotoEntity_TypeInfo);
    sub_1C37058(&StringLiteral_23074/*"restrictionSvtList"*/);
    sub_1C37058(&StringLiteral_19564/*"form"*/);
    sub_1C37058(&StringLiteral_18645/*"dispFormByFace"*/);
    sub_1C37058(&StringLiteral_19374/*"faceIdx"*/);
    sub_1C37058(&StringLiteral_23869/*"svtIdx"*/);
    byte_4C439B1 = 1;
  }
  ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_KEY = (struct System_String_o *)StringLiteral_18645/*"dispFormByFace"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantPhotoEntity_TypeInfo->static_fields, StringLiteral_18645/*"dispFormByFace"*/, v1, v2);
  v3 = StringLiteral_23869/*"svtIdx"*/;
  static_fields = ServantPhotoEntity_TypeInfo->static_fields;
  static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_23869/*"svtIdx"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY, v3, v5, v6);
  v7 = StringLiteral_19374/*"faceIdx"*/;
  v8 = ServantPhotoEntity_TypeInfo->static_fields;
  v8->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_19374/*"faceIdx"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v8->DISP_FORM_BY_FACE_FACEINDEX_KEY, v7, v9, v10);
  v11 = (int)StringLiteral_19564/*"form"*/;
  v12 = ServantPhotoEntity_TypeInfo->static_fields;
  v12->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_19564/*"form"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v12->DISP_FORM_BY_FACE_FORM_KEY, v11, v13, v14);
  v15 = StringLiteral_23074/*"restrictionSvtList"*/;
  v16 = ServantPhotoEntity_TypeInfo->static_fields;
  v16->RestrictionSvtList = (struct System_String_o *)StringLiteral_23074/*"restrictionSvtList"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->RestrictionSvtList, v15, v17, v18);
}


void ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4C439B0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataEntityBase_long___ctor__);
    byte_4C439B0 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_339EC04 *)Method_DataEntityBase_long___ctor__);
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
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Collections_Generic_List_TSource__o *v13; // x0
  ServantPhotoEntity___c_c *v14; // x8
  System_Collections_Generic_List_TSource__o *v15; // x22
  System_Func_object__int__o *_9__6_1; // x19
  Il2CppObject *v17; // x23
  struct ServantPhotoEntity___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w23
  ServantPhotoEntity_FaceData_array *v22; // x19
  __int64 v23; // x24
  unsigned int *OverrideFormList; // x0
  const MethodInfo *v25; // x1
  System_Func_object__object__o *v26; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  unsigned int *v28; // x25
  unsigned __int64 v29; // x8
  unsigned int *v30; // x26
  unsigned __int64 v31; // x9
  __int64 v32; // x28
  __int64 v33; // x27
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppClass **v40; // x0
  int v41; // w8
  __int64 v42; // x8
  unsigned int *v43; // x20
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x20
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  int32_t v57; // w1
  int max_length; // w11
  ServantPhotoEntity_FaceData_o *v59; // x10
  struct System_Int32_array *multiForm; // x10
  int v61; // w11
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v67; // x0

  if ( (byte_4C439AD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Min_int_____);
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_int____int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_string__int_____);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_int_____);
    sub_1C37058(&ServantPhotoEntity_FaceData___TypeInfo);
    sub_1C37058(&ServantPhotoEntity_FaceData_TypeInfo);
    sub_1C37058(&System_Func_string__int____TypeInfo);
    sub_1C37058(&System_Func_int____IEnumerable_int___TypeInfo);
    sub_1C37058(&System_Func_int____int__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int____get_Count__);
    sub_1C37058(&Method_ServantPhotoEntity___c__GetFaceList_b__6_0__);
    sub_1C37058(&Method_ServantPhotoEntity___c__GetFaceList_b__6_1__);
    sub_1C37058(&Method_ServantPhotoEntity___c__DisplayClass6_0__GetFaceList_b__3__);
    sub_1C37058(&ServantPhotoEntity___c__DisplayClass6_0_TypeInfo);
    sub_1C37058(&ServantPhotoEntity___c_TypeInfo);
    byte_4C439AD = 1;
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
    _9__6_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_string__int____TypeInfo);
    System_Func_object__object____ctor(_9__6_0, v8, Method_ServantPhotoEntity___c__GetFaceList_b__6_0__, 0);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_string__int____o *)_9__6_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_string__int_____);
  v13 = System_Linq_Enumerable__ToList_object_(
          v12,
          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_int_____);
  v14 = ServantPhotoEntity___c_TypeInfo;
  v15 = v13;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v14 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__6_1 = (System_Func_object__int__o *)v14->static_fields->__9__6_1;
  if ( !_9__6_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = ServantPhotoEntity___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__6_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_int____int__TypeInfo);
    System_Func_object__int____ctor(_9__6_1, v17, Method_ServantPhotoEntity___c__GetFaceList_b__6_1__, 0);
    v18 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v18->__9__6_1 = (struct System_Func_int____int__o *)_9__6_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v18->__9__6_1, (int32_t)_9__6_1, v19, v20);
  }
  v21 = System_Linq_Enumerable__Min_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Func_TSource__int__o *)_9__6_1,
          (const MethodInfo_3116D0C *)Method_System_Linq_Enumerable_Min_int_____);
  v22 = (ServantPhotoEntity_FaceData_array *)sub_1C37100(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v21);
  v23 = sub_1C372A4(ServantPhotoEntity___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v23, 0);
  if ( !v23 )
    goto LABEL_67;
  *(_DWORD *)(v23 + 16) = 0;
  if ( v21 >= 1 )
  {
    while ( 1 )
    {
      v26 = (System_Func_object__object__o *)sub_1C372A4(System_Func_int____IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        v26,
        (Il2CppObject *)v23,
        Method_ServantPhotoEntity___c__DisplayClass6_0__GetFaceList_b__3__,
        0);
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)v26,
                                                                   (const MethodInfo_31210A4 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = (unsigned int *)System_Linq_Enumerable__ToArray_int_(
                                           v27,
                                           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v15 )
        break;
      v28 = OverrideFormList;
      OverrideFormList = (unsigned int *)sub_1C37100(int___TypeInfo, (unsigned int)v15->fields._size);
      if ( !OverrideFormList )
        break;
      v29 = OverrideFormList[6];
      v30 = OverrideFormList;
      if ( (__int64)(v29 << 32) >= 1 )
      {
        v31 = 0;
        while ( v31 < v29 )
        {
          OverrideFormList[v31++ + 8] = defaultForm;
          if ( (int)v29 == v31 )
            goto LABEL_23;
        }
LABEL_66:
        sub_1C372BC(OverrideFormList);
      }
LABEL_23:
      v32 = *(int *)(v23 + 16);
      v33 = sub_1C372A4(ServantPhotoEntity_FaceData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v33, 0);
      if ( !v33 )
        break;
      *(_QWORD *)(v33 + 16) = v28;
      sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v28, v34, v35);
      *(_QWORD *)(v33 + 24) = v30;
      sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 24), (int32_t)v30, v36, v37);
      if ( !v22 )
        break;
      OverrideFormList = (unsigned int *)sub_1C37194(v33, v22->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v67 = sub_1C372D8(0);
        sub_1C37180(v67, 0);
      }
      if ( (unsigned int)v32 >= LODWORD(v22->max_length) )
        goto LABEL_66;
      v40 = &v22->obj.klass + v32;
      v40[4] = (Il2CppClass *)v33;
      sub_1C36FFC((CGThumbnailListItem_o *)(v40 + 4), v33, v38, v39);
      v41 = *(_DWORD *)(v23 + 16) + 1;
      *(_DWORD *)(v23 + 16) = v41;
      if ( v41 >= v21 )
        goto LABEL_28;
    }
LABEL_67:
    sub_1C372B4(OverrideFormList);
  }
LABEL_28:
  OverrideFormList = (unsigned int *)ServantPhotoEntity__GetOverrideFormList(this, v25);
  if ( !OverrideFormList )
    goto LABEL_67;
  v42 = *(_QWORD *)OverrideFormList;
  v43 = OverrideFormList;
  v44 = *(unsigned __int16 *)(*(_QWORD *)OverrideFormList + 302LL);
  if ( *(_WORD *)(*(_QWORD *)OverrideFormList + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v45 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_33;
    }
    v46 = v42 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_33:
    v46 = sub_1C87870(OverrideFormList, System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, 0);
  }
  v47 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  if ( !v47 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_40;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_40:
      v51 = sub_1C87870(v47, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v54 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_47;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_47:
      v55 = sub_1C87870(v47, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    if ( (v56 & 0x8000000000000000LL) == 0 )
    {
      if ( !v22 )
        sub_1C372B4(v56);
      max_length = v22->max_length;
      if ( max_length > SHIDWORD(v56) )
      {
        if ( HIDWORD(v56) >= max_length )
          sub_1C372BC(v56);
        v59 = v22->m_Items[v56 >> 32];
        if ( !v59 )
          sub_1C372B4(v56);
        if ( (v56 & 0x80000000) == 0 )
        {
          multiForm = v59->fields.multiForm;
          if ( !multiForm )
            sub_1C372B4(v56);
          v61 = multiForm->max_length;
          if ( v61 > (int)v56 )
          {
            if ( (unsigned int)v56 >= v61 )
              sub_1C372BC(v56);
            multiForm->m_Items[(int)v56] = v57;
          }
        }
      }
    }
  }
  v62 = *(_QWORD *)v47;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_63;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_63:
    v65 = sub_1C87870(v47, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v65)(v47, *(_QWORD *)(v65 + 8));
  return v22;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C439AE & 1) == 0 )
  {
    sub_1C37058(&ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    byte_4C439AE = 1;
  }
  v3 = sub_1C372A4(ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
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
  const MethodInfo *v9; // x3

  if ( (byte_4C439AF & 1) == 0 )
  {
    sub_1C37058(&ServantPhotoEntity_TypeInfo);
    byte_4C439AF = 1;
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
  sub_1C36FFC((CGThumbnailListItem_o *)restrictionSvtList, (int32_t)IntArray, v8, v9);
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
  Il2CppObject *v7; // x0
  __int64 naturalAligment; // x9
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v9; // x9
  __int128 v10; // q0
  struct System_Collections_Generic_List_Enumerator_object__o *p__7__wrap1; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  Il2CppObject *current; // x19
  __int64 v16; // x9
  ServantPhotoEntity_c *v17; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x20
  int32_t ScriptValue_40958356; // w20
  int32_t v20; // w21
  int32_t v21; // w3
  const MethodInfo_3B06434 *v22; // x5
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v23; // x9
  int32_t index; // w10
  struct System_Collections_Generic_List_T__o *list; // x11
  bool v26; // w8
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v27; // x9
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+20h] [xbp-60h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__7_o **v31; // [xsp+40h] [xbp-40h]
  Il2CppObject *value; // [xsp+48h] [xbp-38h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v33; // [xsp+58h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v34; // 0:x0.12

  v33 = this;
  v2 = this;
  if ( (byte_4C439B5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_object__GetEnumerator__);
    sub_1C37058(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C37058(&ServantPhotoEntity_TypeInfo);
    this = (ServantPhotoEntity__GetOverrideFormList_d__7_o *)sub_1C37058(&Method_System_ValueTuple_int__int__int___ctor__);
    byte_4C439B5 = 1;
  }
  v31 = &v33;
  value = 0;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C372B4(this);
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
            (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v7 = value;
    if ( !value )
LABEL_27:
      sub_1C372B4(v7);
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_26:
      sub_1C37574(v7);
      goto LABEL_27;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      &v29,
      (System_Collections_Generic_List_object__o *)value,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v9 = v33;
    v10 = *(_OWORD *)&v29.fields._list;
    p__7__wrap1 = &v33->fields.__7__wrap1;
    v30 = v29;
    v33->fields.__7__wrap1.fields._current = v29.fields._current;
    *(_OWORD *)&v9->fields.__7__wrap1.fields._list = v10;
    sub_1C36FFC((CGThumbnailListItem_o *)p__7__wrap1, 0, v12, v13);
    v2 = v33;
  }
  v2->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v2->fields.__7__wrap1,
          (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__7____m__Finally1(v33, v14);
    v27 = v33;
    v26 = 0;
    v33->fields.__7__wrap1.fields._list = 0;
    *(_QWORD *)&v27->fields.__7__wrap1.fields._index = 0;
    v27->fields.__7__wrap1.fields._current = 0;
    return v26;
  }
  current = v33->fields.__7__wrap1.fields._current;
  if ( current )
  {
    v16 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( current->klass->_2.naturalAligment < (unsigned int)v16
      || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v16 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C37574(v33->fields.__7__wrap1.fields._current);
      goto LABEL_26;
    }
  }
  v17 = ServantPhotoEntity_TypeInfo;
  if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v17 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v17->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  ScriptValue_40958356 = JsonManager__GetScriptValue_40958356(
                           (System_Collections_Generic_Dictionary_string__object__o *)current,
                           DISP_FORM_BY_FACE_SVTINDEX_KEY,
                           0,
                           0);
  v20 = JsonManager__GetScriptValue_40958356(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0);
  v21 = JsonManager__GetScriptValue_40958356(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0);
  v30.fields._index = 0;
  v30.fields._list = 0;
  *(_QWORD *)&v34.fields.Item1 = &v30;
  v34.fields.Item3 = ScriptValue_40958356;
  System_ValueTuple_int__int__int____ctor(v34, v20, v21, Method_System_ValueTuple_int__int__int___ctor__, v22);
  v23 = v33;
  index = v30.fields._index;
  list = v30.fields._list;
  v26 = 1;
  v33->fields.__1__state = 1;
  v23->fields.__2__current.fields.Item3 = index;
  *(_QWORD *)&v23->fields.__2__current.fields.Item1 = list;
  return v26;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct ServantPhotoEntity_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C439B8 & 1) == 0 )
  {
    sub_1C37058(&ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    byte_4C439B8 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C372A4(ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_ServantPhotoEntity__GetOverrideFormList_d__7_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v9; // x9
  __int64 v11; // [xsp+0h] [xbp-30h] BYREF
  int32_t Item3; // [xsp+8h] [xbp-28h]

  if ( (byte_4C439B7 & 1) == 0 )
  {
    sub_1C37058(&System_ValueTuple_int__int__int__TypeInfo);
    byte_4C439B7 = 1;
  }
  v9 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  Item3 = this->fields.__2__current.fields.Item3;
  v11 = v9;
  return (Il2CppObject *)j_il2cpp_value_box_0(System_ValueTuple_int__int__int__TypeInfo, &v11, v2, v3, v4, v5, v6, v7);
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
  if ( (byte_4C439B6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
    byte_4C439B6 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
}


void ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C439B2 & 1) == 0 )
  {
    sub_1C37058(&ServantPhotoEntity___c_TypeInfo);
    byte_4C439B2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantPhotoEntity___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantPhotoEntity___c_TypeInfo->static_fields->__9 = (struct ServantPhotoEntity___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ServantPhotoEntity___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  const MethodInfo *v11; // x3

  if ( (byte_4C439B3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_ConvertAll_string__int___);
    sub_1C37058(&System_Converter_string__int__TypeInfo);
    sub_1C37058(&Method_ServantPhotoEntity___c__GetFaceList_b__6_2__);
    sub_1C37058(&ServantPhotoEntity___c_TypeInfo);
    sub_1C37058(&StringLiteral_15804/*"["*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    this = (ServantPhotoEntity___c_o *)sub_1C37058(&StringLiteral_16058/*"]"*/);
    byte_4C439B3 = 1;
  }
  if ( !s
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_63608204(
                                             s,
                                             (System_String_o *)StringLiteral_15804/*"["*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0)) == 0
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_63608204(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_16058/*"]"*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0)) == 0 )
  {
    sub_1C372B4(this);
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
    _9__6_2 = (System_Converter_object__int__o *)sub_1C372A4(System_Converter_string__int__TypeInfo);
    System_Converter_object__int____ctor(_9__6_2, v8, Method_ServantPhotoEntity___c__GetFaceList_b__6_2__, 0);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_2 = (struct System_Converter_string__int__o *)_9__6_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__6_2, (int32_t)_9__6_2, v10, v11);
  }
  return System_Array__ConvertAll_object__int_(
           v6,
           (System_Converter_TInput__TOutput__o *)_9__6_2,
           (const MethodInfo_31EB2DC *)Method_System_Array_ConvertAll_string__int___);
}


int32_t ServantPhotoEntity___c___GetFaceList_b__6_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1C372B4(this);
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

  if ( (byte_4C439B4 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Skip_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Take_int___);
    byte_4C439B4 = 1;
  }
  v5 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_31254E8 *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v5,
                                                            1,
                                                            (const MethodInfo_3125B20 *)Method_System_Linq_Enumerable_Take_int___);
}