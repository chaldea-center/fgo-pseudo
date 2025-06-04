void __fastcall ServantPhotoEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  struct ServantPhotoEntity_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct ServantPhotoEntity_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct ServantPhotoEntity_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  struct ServantPhotoEntity_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4B029C2 & 1) == 0 )
  {
    sub_1BC3008(&ServantPhotoEntity_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_22848/*"restrictionSvtList"*/, v4);
    sub_1BC3008(&StringLiteral_19377/*"form"*/, v5);
    sub_1BC3008(&StringLiteral_18471/*"dispFormByFace"*/, v6);
    sub_1BC3008(&StringLiteral_19188/*"faceIdx"*/, v7);
    sub_1BC3008(&StringLiteral_23632/*"svtIdx"*/, v8);
    byte_4B029C2 = 1;
  }
  ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_KEY = (struct System_String_o *)StringLiteral_18471/*"dispFormByFace"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)ServantPhotoEntity_TypeInfo->static_fields, StringLiteral_18471/*"dispFormByFace"*/, v2, v3);
  v9 = StringLiteral_23632/*"svtIdx"*/;
  static_fields = ServantPhotoEntity_TypeInfo->static_fields;
  static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_23632/*"svtIdx"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY, v9, v11, v12);
  v13 = StringLiteral_19188/*"faceIdx"*/;
  v14 = ServantPhotoEntity_TypeInfo->static_fields;
  v14->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_19188/*"faceIdx"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v14->DISP_FORM_BY_FACE_FACEINDEX_KEY, v13, v15, v16);
  v17 = (int)StringLiteral_19377/*"form"*/;
  v18 = ServantPhotoEntity_TypeInfo->static_fields;
  v18->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_19377/*"form"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v18->DISP_FORM_BY_FACE_FORM_KEY, v17, v19, v20);
  v21 = StringLiteral_22848/*"restrictionSvtList"*/;
  v22 = ServantPhotoEntity_TypeInfo->static_fields;
  v22->RestrictionSvtList = (struct System_String_o *)StringLiteral_22848/*"restrictionSvtList"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v22->RestrictionSvtList, v21, v23, v24);
}


void __fastcall ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B029C1 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataEntityBase_long___ctor__, method);
    byte_4B029C1 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_32ACBD4 *)Method_DataEntityBase_long___ctor__);
}


int64_t __fastcall ServantPhotoEntity__CreatePrimaryKey(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


// local variable allocation has failed, the output may be wrong!
ServantPhotoEntity_FaceData_array *__fastcall ServantPhotoEntity__GetFaceList(
        ServantPhotoEntity_o *this,
        int32_t defaultForm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  ServantPhotoEntity___c_c *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *dispFaceId; // x19
  System_Func_object__object__o *_9__6_0; // x22
  Il2CppObject *v28; // x23
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x0
  ServantPhotoEntity___c_c *v34; // x8
  System_Collections_Generic_List_TSource__o *v35; // x22
  System_Func_object__int__o *_9__6_1; // x19
  Il2CppObject *v37; // x23
  struct ServantPhotoEntity___c_StaticFields *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w23
  ServantPhotoEntity_FaceData_array *v42; // x19
  __int64 v43; // x24
  unsigned int *OverrideFormList; // x0
  const MethodInfo *v45; // x1
  System_Func_object__object__o *v46; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  unsigned int *v48; // x25
  __int64 v49; // x2
  unsigned __int64 v50; // x8
  unsigned int *v51; // x26
  unsigned __int64 v52; // x9
  __int64 v53; // x28
  __int64 v54; // x27
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
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
  __int64 v79; // x2
  int max_length; // w11
  ServantPhotoEntity_FaceData_o *v81; // x10
  struct System_Int32_array *multiForm; // x10
  int v83; // w11
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  __int64 v89; // x0

  if ( (byte_4B029BE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Min_int_____, *(_QWORD *)&defaultForm);
    sub_1BC3008(&Method_System_Linq_Enumerable_SelectMany_int____int___, v5);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_string__int_____, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_int_____, v8);
    sub_1BC3008(&ServantPhotoEntity_FaceData___TypeInfo, v9);
    sub_1BC3008(&ServantPhotoEntity_FaceData_TypeInfo, v10);
    sub_1BC3008(&System_Func_string__int____TypeInfo, v11);
    sub_1BC3008(&System_Func_int____IEnumerable_int___TypeInfo, v12);
    sub_1BC3008(&System_Func_int____int__TypeInfo, v13);
    sub_1BC3008(&System_IDisposable_TypeInfo, v14);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, v15);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, v16);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1BC3008(&int___TypeInfo, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_int____get_Count__, v19);
    sub_1BC3008(&Method_ServantPhotoEntity___c__GetFaceList_b__6_0__, v20);
    sub_1BC3008(&Method_ServantPhotoEntity___c__GetFaceList_b__6_1__, v21);
    sub_1BC3008(&Method_ServantPhotoEntity___c__DisplayClass6_0__GetFaceList_b__3__, v22);
    sub_1BC3008(&ServantPhotoEntity___c__DisplayClass6_0_TypeInfo, v23);
    sub_1BC3008(&ServantPhotoEntity___c_TypeInfo, v24);
    byte_4B029BE = 1;
  }
  v25 = ServantPhotoEntity___c_TypeInfo;
  dispFaceId = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dispFaceId;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v25 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__object__o *)v25->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = ServantPhotoEntity___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__6_0 = (System_Func_object__object__o *)sub_1BC3254(System_Func_string__int____TypeInfo);
    System_Func_object__object____ctor(_9__6_0, v28, Method_ServantPhotoEntity___c__GetFaceList_b__6_0__, 0LL);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_string__int____o *)_9__6_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__6_0,
                                                               (const MethodInfo_3036320 *)Method_System_Linq_Enumerable_Select_string__int_____);
  v33 = System_Linq_Enumerable__ToList_object_(
          v32,
          (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_int_____);
  v34 = ServantPhotoEntity___c_TypeInfo;
  v35 = v33;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v34 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__6_1 = (System_Func_object__int__o *)v34->static_fields->__9__6_1;
  if ( !_9__6_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ServantPhotoEntity___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v34->static_fields->__9;
    _9__6_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_int____int__TypeInfo);
    System_Func_object__int____ctor(_9__6_1, v37, Method_ServantPhotoEntity___c__GetFaceList_b__6_1__, 0LL);
    v38 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v38->__9__6_1 = (struct System_Func_int____int__o *)_9__6_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v38->__9__6_1, (int32_t)_9__6_1, v39, v40);
  }
  v41 = System_Linq_Enumerable__Min_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (System_Func_TSource__int__o *)_9__6_1,
          (const MethodInfo_302CF40 *)Method_System_Linq_Enumerable_Min_int_____);
  v42 = (ServantPhotoEntity_FaceData_array *)sub_1BC30B0(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v41);
  v43 = sub_1BC3254(ServantPhotoEntity___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v43, 0LL);
  if ( !v43 )
    goto LABEL_67;
  *(_DWORD *)(v43 + 16) = 0;
  if ( v41 >= 1 )
  {
    while ( 1 )
    {
      v46 = (System_Func_object__object__o *)sub_1BC3254(System_Func_int____IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        v46,
        (Il2CppObject *)v43,
        Method_ServantPhotoEntity___c__DisplayClass6_0__GetFaceList_b__3__,
        0LL);
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v35,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)v46,
                                                                   (const MethodInfo_30387C4 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = (unsigned int *)System_Linq_Enumerable__ToArray_int_(
                                           v47,
                                           (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v35 )
        break;
      v48 = OverrideFormList;
      OverrideFormList = (unsigned int *)sub_1BC30B0(int___TypeInfo, (unsigned int)v35->fields._size);
      if ( !OverrideFormList )
        break;
      v50 = OverrideFormList[6];
      v51 = OverrideFormList;
      if ( (__int64)(v50 << 32) >= 1 )
      {
        v52 = 0LL;
        while ( v52 < v50 )
        {
          OverrideFormList[v52++ + 8] = defaultForm;
          if ( (int)v50 == v52 )
            goto LABEL_23;
        }
LABEL_66:
        sub_1BC326C(OverrideFormList, v45, v49);
      }
LABEL_23:
      v53 = *(int *)(v43 + 16);
      v54 = sub_1BC3254(ServantPhotoEntity_FaceData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v54, 0LL);
      if ( !v54 )
        break;
      *(_QWORD *)(v54 + 16) = v48;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v54 + 16), (int32_t)v48, v55, v56);
      *(_QWORD *)(v54 + 24) = v51;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v54 + 24), (int32_t)v51, v57, v58);
      if ( !v42 )
        break;
      OverrideFormList = (unsigned int *)sub_1BC3144(v54, v42->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v89 = sub_1BC3288(0LL);
        sub_1BC3130(v89, 0LL);
      }
      if ( (unsigned int)v53 >= v42->max_length )
        goto LABEL_66;
      v60 = &v42->obj.klass + v53;
      v60[4] = (Il2CppClass *)v54;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v60 + 4), v54, v49, v59);
      v61 = *(_DWORD *)(v43 + 16) + 1;
      *(_DWORD *)(v43 + 16) = v61;
      if ( v61 >= v41 )
        goto LABEL_28;
    }
LABEL_67:
    sub_1BC3264(OverrideFormList, v45);
  }
LABEL_28:
  OverrideFormList = (unsigned int *)ServantPhotoEntity__GetOverrideFormList(this, v45);
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
    v66 = sub_1C13570(OverrideFormList, System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, 0LL);
  }
  v68 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))v66)(v63, *(_QWORD *)(v66 + 8));
  if ( !v68 )
    sub_1BC3264(0LL, v67);
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
      v72 = sub_1C13570(v68, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v76 = sub_1C13570(v68, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0LL);
    }
    v77 = (*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v68, *(_QWORD *)(v76 + 8));
    if ( (v77 & 0x8000000000000000LL) == 0 )
    {
      if ( !v42 )
        sub_1BC3264(v77, v78);
      max_length = v42->max_length;
      if ( max_length > SHIDWORD(v77) )
      {
        if ( HIDWORD(v77) >= max_length )
          sub_1BC326C(v77, v78, v79);
        v81 = v42->m_Items[v77 >> 32];
        if ( !v81 )
          sub_1BC3264(v77, v78);
        if ( (v77 & 0x80000000) == 0 )
        {
          multiForm = v81->fields.multiForm;
          if ( !multiForm )
            sub_1BC3264(v77, v78);
          v83 = multiForm->max_length;
          if ( v83 > (int)v77 )
          {
            if ( (unsigned int)v77 >= v83 )
              sub_1BC326C(v77, v78, v79);
            multiForm->m_Items[(int)v77 + 1] = v78;
          }
        }
      }
    }
  }
  v84 = *(_QWORD *)v68;
  v85 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
  {
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_63;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_63:
    v87 = sub_1C13570(v68, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v68, *(_QWORD *)(v87 + 8));
  return v42;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B029BF & 1) == 0 )
  {
    sub_1BC3008(&ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo, method);
    byte_4B029BF = 1;
  }
  v3 = sub_1BC3254(ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)this, v4, v5);
  return (System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *)v3;
}


bool __fastcall ServantPhotoEntity__TryGetRestrictionSvtList(
        ServantPhotoEntity_o *this,
        System_Int32_array **restrictionSvtList,
        const MethodInfo *method)
{
  ServantPhotoEntity_c *v5; // x0
  System_Collections_Generic_Dictionary_string__object__o *extendData; // x20
  System_Int32_array *IntArray; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B029C0 & 1) == 0 )
  {
    sub_1BC3008(&ServantPhotoEntity_TypeInfo, restrictionSvtList);
    byte_4B029C0 = 1;
  }
  v5 = ServantPhotoEntity_TypeInfo;
  extendData = this->fields.extendData;
  if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v5 = ServantPhotoEntity_TypeInfo;
  }
  IntArray = EntityScriptUtil__GetIntArray(extendData, v5->static_fields->RestrictionSvtList, 0LL, 0LL);
  *restrictionSvtList = IntArray;
  sub_1BC2FAC((CGThumbnailListItem_o *)restrictionSvtList, (int32_t)IntArray, v8, v9);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*restrictionSvtList, 0LL);
}


void __fastcall ServantPhotoEntity_FaceData___ctor(ServantPhotoEntity_FaceData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantPhotoEntity__GetOverrideFormList_d__7___ctor(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall ServantPhotoEntity__GetOverrideFormList_d__7__MoveNext(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct ServantPhotoEntity_o *_4__this; // x8
  System_Collections_Generic_Dictionary_object__object__o *extendData; // x19
  ServantPhotoEntity_c *v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x0
  __int64 methodPtr_low; // x9
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v18; // x9
  __int128 v19; // q0
  struct System_Collections_Generic_List_Enumerator_object__o *p__7__wrap1; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  Il2CppObject *current; // x19
  __int64 v25; // x9
  ServantPhotoEntity_c *v26; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x20
  int32_t ScriptValue_39988720; // w20
  int32_t v29; // w21
  int32_t v30; // w3
  const MethodInfo_39F5B70 *v31; // x5
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v32; // x9
  int32_t index; // w10
  struct System_Collections_Generic_List_T__o *list; // x11
  bool v35; // w8
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v36; // x9
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+20h] [xbp-60h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__7_o **v40; // [xsp+40h] [xbp-40h]
  Il2CppObject *value; // [xsp+48h] [xbp-38h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__7_o *v42; // [xsp+58h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v43; // 0:x0.12

  v42 = this;
  v2 = this;
  if ( (byte_4B029C6 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v5);
    sub_1BC3008(&JsonManager_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_object__GetEnumerator__, v7);
    sub_1BC3008(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1BC3008(&ServantPhotoEntity_TypeInfo, v9);
    this = (ServantPhotoEntity__GetOverrideFormList_d__7_o *)sub_1BC3008(
                                                               &Method_System_ValueTuple_int__int__int___ctor__,
                                                               v10);
    byte_4B029C6 = 1;
  }
  v40 = &v42;
  value = 0LL;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BC3264(this, method);
    extendData = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.extendData;
    if ( !extendData )
      return 0;
    v14 = ServantPhotoEntity_TypeInfo;
    if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
      v14 = ServantPhotoEntity_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            extendData,
            (Il2CppObject *)v14->static_fields->DISP_FORM_BY_FACE_KEY,
            &value,
            (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v16 = value;
    if ( !value )
LABEL_27:
      sub_1BC3264(v16, v15);
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_26:
      sub_1BC3524(v16);
      goto LABEL_27;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      &v38,
      (System_Collections_Generic_List_object__o *)value,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v18 = v42;
    v19 = *(_OWORD *)&v38.fields._list;
    p__7__wrap1 = &v42->fields.__7__wrap1;
    v39 = v38;
    v42->fields.__7__wrap1.fields._current = v38.fields._current;
    *(_OWORD *)&v18->fields.__7__wrap1.fields._list = v19;
    sub_1BC2FAC((CGThumbnailListItem_o *)p__7__wrap1, 0, v21, v22);
    v2 = v42;
  }
  v2->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v2->fields.__7__wrap1,
          (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__7____m__Finally1(v42, v23);
    v36 = v42;
    v35 = 0;
    v42->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v36->fields.__7__wrap1.fields._index = 0LL;
    v36->fields.__7__wrap1.fields._current = 0LL;
    return v35;
  }
  current = v42->fields.__7__wrap1.fields._current;
  if ( current )
  {
    v25 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)v25
      || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v25 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BC3524(v42->fields.__7__wrap1.fields._current);
      goto LABEL_26;
    }
  }
  v26 = ServantPhotoEntity_TypeInfo;
  if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v26 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v26->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  ScriptValue_39988720 = JsonManager__GetScriptValue_39988720(
                           (System_Collections_Generic_Dictionary_string__object__o *)current,
                           DISP_FORM_BY_FACE_SVTINDEX_KEY,
                           0,
                           0LL);
  v29 = JsonManager__GetScriptValue_39988720(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0LL);
  v30 = JsonManager__GetScriptValue_39988720(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0LL);
  v39.fields._index = 0;
  v39.fields._list = 0LL;
  *(_QWORD *)&v43.fields.Item1 = &v39;
  v43.fields.Item3 = ScriptValue_39988720;
  System_ValueTuple_int__int__int____ctor(v43, v29, v30, Method_System_ValueTuple_int__int__int___ctor__, v31);
  v32 = v42;
  index = v39.fields._index;
  list = v39.fields._list;
  v35 = 1;
  v42->fields.__1__state = 1;
  v32->fields.__2__current.fields.Item3 = index;
  *(_QWORD *)&v32->fields.__2__current.fields.Item1 = list;
  return v35;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct ServantPhotoEntity_o *_4__this; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B029C9 & 1) == 0 )
  {
    sub_1BC3008(&ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo, method);
    byte_4B029C9 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1BC3254(ServantPhotoEntity__GetOverrideFormList_d__7_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)this;
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__int__int__o __fastcall ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_Generic_IEnumerator__System_Int32_System_Int32_System_Int32___get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
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


void __fastcall __noreturn ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_IEnumerator_Reset(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_ServantPhotoEntity__GetOverrideFormList_d__7_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
}


Il2CppObject *__fastcall ServantPhotoEntity__GetOverrideFormList_d__7__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x9
  __int64 v8; // [xsp+0h] [xbp-30h] BYREF
  int32_t Item3; // [xsp+8h] [xbp-28h]

  if ( (byte_4B029C8 & 1) == 0 )
  {
    sub_1BC3008(&System_ValueTuple_int__int__int__TypeInfo, method);
    byte_4B029C8 = 1;
  }
  v6 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  Item3 = this->fields.__2__current.fields.Item3;
  v8 = v6;
  return (Il2CppObject *)j_il2cpp_value_box_0(System_ValueTuple_int__int__int__TypeInfo, &v8, v2, v3, v4);
}


void __fastcall ServantPhotoEntity__GetOverrideFormList_d__7__System_IDisposable_Dispose(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    ServantPhotoEntity__GetOverrideFormList_d__7____m__Finally1(this, method);
}


void __fastcall ServantPhotoEntity__GetOverrideFormList_d__7____m__Finally1(
        ServantPhotoEntity__GetOverrideFormList_d__7_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B029C7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    byte_4B029C7 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
}


void __fastcall ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B029C3 & 1) == 0 )
  {
    sub_1BC3008(&ServantPhotoEntity___c_TypeInfo, v1);
    byte_4B029C3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ServantPhotoEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantPhotoEntity___c_TypeInfo->static_fields->__9 = (struct ServantPhotoEntity___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)ServantPhotoEntity___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall ServantPhotoEntity___c___ctor(ServantPhotoEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall ServantPhotoEntity___c___GetFaceList_b__6_0(
        ServantPhotoEntity___c_o *this,
        System_String_o *s,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array *v10; // x0
  ServantPhotoEntity___c_c *v11; // x8
  System_Object_array *v12; // x19
  System_Converter_object__int__o *_9__6_2; // x20
  Il2CppObject *v14; // x21
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B029C4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_ConvertAll_string__int___, s);
    sub_1BC3008(&System_Converter_string__int__TypeInfo, v4);
    sub_1BC3008(&Method_ServantPhotoEntity___c__GetFaceList_b__6_2__, v5);
    sub_1BC3008(&ServantPhotoEntity___c_TypeInfo, v6);
    sub_1BC3008(&StringLiteral_15658/*"["*/, v7);
    sub_1BC3008(&StringLiteral_1/*""*/, v8);
    this = (ServantPhotoEntity___c_o *)sub_1BC3008(&StringLiteral_15911/*"]"*/, v9);
    byte_4B029C4 = 1;
  }
  if ( !s
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_62395196(
                                             s,
                                             (System_String_o *)StringLiteral_15658/*"["*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL)) == 0LL
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_62395196(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_15911/*"]"*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL)) == 0LL )
  {
    sub_1BC3264(this, s);
  }
  v10 = System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
  v11 = ServantPhotoEntity___c_TypeInfo;
  v12 = (System_Object_array *)v10;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v11 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__6_2 = (System_Converter_object__int__o *)v11->static_fields->__9__6_2;
  if ( !_9__6_2 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantPhotoEntity___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__6_2 = (System_Converter_object__int__o *)sub_1BC3254(System_Converter_string__int__TypeInfo);
    System_Converter_object__int____ctor(_9__6_2, v14, Method_ServantPhotoEntity___c__GetFaceList_b__6_2__, 0LL);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__6_2 = (struct System_Converter_string__int__o *)_9__6_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__6_2, (int32_t)_9__6_2, v16, v17);
  }
  return System_Array__ConvertAll_object__int_(
           v12,
           (System_Converter_TInput__TOutput__o *)_9__6_2,
           (const MethodInfo_30FC8AC *)Method_System_Array_ConvertAll_string__int___);
}


int32_t __fastcall ServantPhotoEntity___c___GetFaceList_b__6_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1BC3264(this, 0LL);
  return l->max_length;
}


int32_t __fastcall ServantPhotoEntity___c___GetFaceList_b__6_2(
        ServantPhotoEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  return System_Int32__Parse(input, 0LL);
}


void __fastcall ServantPhotoEntity___c__DisplayClass6_0___ctor(
        ServantPhotoEntity___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_int__o *__fastcall ServantPhotoEntity___c__DisplayClass6_0___GetFaceList_b__3(
        ServantPhotoEntity___c__DisplayClass6_0_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_4B029C5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Skip_int___, l);
    sub_1BC3008(&Method_System_Linq_Enumerable_Take_int___, v5);
    byte_4B029C5 = 1;
  }
  v6 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_303CC08 *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v6,
                                                            1,
                                                            (const MethodInfo_303D240 *)Method_System_Linq_Enumerable_Take_int___);
}