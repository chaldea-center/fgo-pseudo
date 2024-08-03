void __fastcall ServantPhotoEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct ServantPhotoEntity_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  struct ServantPhotoEntity_StaticFields *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  struct ServantPhotoEntity_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FCBBA & 1) == 0 )
  {
    sub_1B640C8(&ServantPhotoEntity_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_19463/*"form"*/, v4);
    sub_1B640C8(&StringLiteral_18568/*"dispFormByFace"*/, v5);
    sub_1B640C8(&StringLiteral_19277/*"faceIdx"*/, v6);
    sub_1B640C8(&StringLiteral_23611/*"svtIdx"*/, v7);
    byte_49FCBBA = 1;
  }
  ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_KEY = (struct System_String_o *)StringLiteral_18568/*"dispFormByFace"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ServantPhotoEntity_TypeInfo->static_fields,
    StringLiteral_18568/*"dispFormByFace"*/,
    v2,
    v3);
  v8 = StringLiteral_23611/*"svtIdx"*/;
  static_fields = ServantPhotoEntity_TypeInfo->static_fields;
  static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_23611/*"svtIdx"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY, v8, v10, v11);
  v12 = StringLiteral_19277/*"faceIdx"*/;
  v13 = ServantPhotoEntity_TypeInfo->static_fields;
  v13->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_19277/*"faceIdx"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v13->DISP_FORM_BY_FACE_FACEINDEX_KEY, v12, v14, v15);
  v16 = (int)StringLiteral_19463/*"form"*/;
  v17 = ServantPhotoEntity_TypeInfo->static_fields;
  v17->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_19463/*"form"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->DISP_FORM_BY_FACE_FORM_KEY, v16, v18, v19);
}


void __fastcall ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCBB9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_long___ctor__, method);
    byte_49FCBB9 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_30D3CEC *)Method_DataEntityBase_long___ctor__);
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
  System_Func_object__object__o *_9__5_0; // x22
  Il2CppObject *v28; // x23
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  ServantPhotoEntity___c_c *v36; // x8
  System_Collections_Generic_List_TSource__o *v37; // x22
  System_Func_object__int__o *_9__5_1; // x19
  Il2CppObject *v39; // x23
  struct ServantPhotoEntity___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w23
  ServantPhotoEntity_FaceData_array *v44; // x19
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x24
  unsigned int *OverrideFormList; // x0
  const MethodInfo *v49; // x1
  __int64 v50; // x2
  System_Func_object__object__o *v51; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  unsigned int *v53; // x25
  __int64 v54; // x1
  __int64 v55; // x2
  unsigned __int64 v56; // x8
  unsigned int *v57; // x26
  unsigned __int64 v58; // x9
  __int64 v59; // x28
  __int64 v60; // x27
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppClass **v67; // x0
  int v68; // w8
  __int64 v69; // x8
  unsigned int *v70; // x20
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x20
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x1
  int max_length; // w11
  ServantPhotoEntity_FaceData_o *v86; // x10
  struct System_Int32_array *multiForm; // x10
  int v88; // w11
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 v94; // x0

  if ( (byte_49FCBB7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Min_int_____, *(_QWORD *)&defaultForm);
    sub_1B640C8(&Method_System_Linq_Enumerable_SelectMany_int____int___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_string__int_____, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_int_____, v8);
    sub_1B640C8(&ServantPhotoEntity_FaceData___TypeInfo, v9);
    sub_1B640C8(&ServantPhotoEntity_FaceData_TypeInfo, v10);
    sub_1B640C8(&System_Func_string__int____TypeInfo, v11);
    sub_1B640C8(&System_Func_int____IEnumerable_int___TypeInfo, v12);
    sub_1B640C8(&System_Func_int____int__TypeInfo, v13);
    sub_1B640C8(&System_IDisposable_TypeInfo, v14);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, v15);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, v16);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1B640C8(&int___TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_int____get_Count__, v19);
    sub_1B640C8(&Method_ServantPhotoEntity___c__GetFaceList_b__5_0__, v20);
    sub_1B640C8(&Method_ServantPhotoEntity___c__GetFaceList_b__5_1__, v21);
    sub_1B640C8(&Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__, v22);
    sub_1B640C8(&ServantPhotoEntity___c__DisplayClass5_0_TypeInfo, v23);
    sub_1B640C8(&ServantPhotoEntity___c_TypeInfo, v24);
    byte_49FCBB7 = 1;
  }
  v25 = ServantPhotoEntity___c_TypeInfo;
  dispFaceId = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dispFaceId;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v25 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v25->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = ServantPhotoEntity___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1B64314(
                                                 System_Func_string__int____TypeInfo,
                                                 *(_QWORD *)&defaultForm,
                                                 method);
    System_Func_object__object____ctor(_9__5_0, v28, Method_ServantPhotoEntity___c__GetFaceList_b__5_0__, 0LL);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_string__int____o *)_9__5_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_string__int_____);
  v33 = System_Linq_Enumerable__ToList_object_(
          v32,
          (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_int_____);
  v36 = ServantPhotoEntity___c_TypeInfo;
  v37 = v33;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v36 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v36->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = ServantPhotoEntity___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_int____int__TypeInfo, v34, v35);
    System_Func_object__int____ctor(_9__5_1, v39, Method_ServantPhotoEntity___c__GetFaceList_b__5_1__, 0LL);
    v40 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v40->__9__5_1 = (struct System_Func_int____int__o *)_9__5_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v40->__9__5_1, (int32_t)_9__5_1, v41, v42);
  }
  v43 = System_Linq_Enumerable__Min_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (System_Func_TSource__int__o *)_9__5_1,
          (const MethodInfo_2E62AF8 *)Method_System_Linq_Enumerable_Min_int_____);
  v44 = (ServantPhotoEntity_FaceData_array *)sub_1B64170(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v43);
  v47 = sub_1B64314(ServantPhotoEntity___c__DisplayClass5_0_TypeInfo, v45, v46);
  System_Object___ctor((Il2CppObject *)v47, 0LL);
  if ( !v47 )
    goto LABEL_67;
  *(_DWORD *)(v47 + 16) = 0;
  if ( v43 >= 1 )
  {
    while ( 1 )
    {
      v51 = (System_Func_object__object__o *)sub_1B64314(System_Func_int____IEnumerable_int___TypeInfo, v49, v50);
      System_Func_object__object____ctor(
        v51,
        (Il2CppObject *)v47,
        Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__,
        0LL);
      v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)v51,
                                                                   (const MethodInfo_2E6B8C0 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = (unsigned int *)System_Linq_Enumerable__ToArray_int_(
                                           v52,
                                           (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v37 )
        break;
      v53 = OverrideFormList;
      OverrideFormList = (unsigned int *)sub_1B64170(int___TypeInfo, (unsigned int)v37->fields._size);
      if ( !OverrideFormList )
        break;
      v56 = OverrideFormList[6];
      v57 = OverrideFormList;
      if ( (__int64)(v56 << 32) >= 1 )
      {
        v58 = 0LL;
        while ( v58 < v56 )
        {
          OverrideFormList[v58++ + 8] = defaultForm;
          if ( (int)v56 == v58 )
            goto LABEL_23;
        }
LABEL_66:
        sub_1B6432C(OverrideFormList, v54);
      }
LABEL_23:
      v59 = *(int *)(v47 + 16);
      v60 = sub_1B64314(ServantPhotoEntity_FaceData_TypeInfo, v54, v55);
      System_Object___ctor((Il2CppObject *)v60, 0LL);
      if ( !v60 )
        break;
      *(_QWORD *)(v60 + 16) = v53;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 16), (int32_t)v53, v61, v62);
      *(_QWORD *)(v60 + 24) = v57;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v60 + 24), (int32_t)v57, v63, v64);
      if ( !v44 )
        break;
      OverrideFormList = (unsigned int *)sub_1B64204(v60, v44->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v94 = sub_1B64348(0LL);
        sub_1B641F0(v94, 0LL);
      }
      if ( (unsigned int)v59 >= v44->max_length )
        goto LABEL_66;
      v67 = &v44->obj.klass + v59;
      v67[4] = (Il2CppClass *)v60;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v67 + 4), v60, v65, v66);
      v68 = *(_DWORD *)(v47 + 16) + 1;
      *(_DWORD *)(v47 + 16) = v68;
      if ( v68 >= v43 )
        goto LABEL_28;
    }
LABEL_67:
    sub_1B64324(OverrideFormList);
  }
LABEL_28:
  OverrideFormList = (unsigned int *)ServantPhotoEntity__GetOverrideFormList(this, v49);
  if ( !OverrideFormList )
    goto LABEL_67;
  v69 = *(_QWORD *)OverrideFormList;
  v70 = OverrideFormList;
  v71 = *(unsigned __int16 *)(*(_QWORD *)OverrideFormList + 302LL);
  if ( *(_WORD *)(*(_QWORD *)OverrideFormList + 302LL) )
  {
    v72 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v72 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
    {
      --v71;
      v72 += 4;
      if ( !v71 )
        goto LABEL_33;
    }
    v73 = v69 + 16LL * *v72 + 312;
  }
  else
  {
LABEL_33:
    v73 = sub_1BB60A8(OverrideFormList, System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, 0LL);
  }
  v74 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))v73)(v70, *(_QWORD *)(v73 + 8));
  if ( !v74 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v75 = *(_QWORD *)v74;
    v76 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
    {
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_40;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_40:
      v78 = sub_1BB60A8(v74, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8)) & 1) == 0 )
      break;
    v79 = *(_QWORD *)v74;
    v80 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
    {
      v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v81 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
      {
        --v80;
        v81 += 4;
        if ( !v80 )
          goto LABEL_47;
      }
      v82 = v79 + 16LL * *v81 + 312;
    }
    else
    {
LABEL_47:
      v82 = sub_1BB60A8(v74, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0LL);
    }
    v83 = (*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v74, *(_QWORD *)(v82 + 8));
    if ( (v83 & 0x8000000000000000LL) == 0 )
    {
      if ( !v44 )
        sub_1B64324(v83);
      max_length = v44->max_length;
      if ( max_length > SHIDWORD(v83) )
      {
        if ( HIDWORD(v83) >= max_length )
          sub_1B6432C(v83, v84);
        v86 = v44->m_Items[v83 >> 32];
        if ( !v86 )
          sub_1B64324(v83);
        if ( (v83 & 0x80000000) == 0 )
        {
          multiForm = v86->fields.multiForm;
          if ( !multiForm )
            sub_1B64324(v83);
          v88 = multiForm->max_length;
          if ( v88 > (int)v83 )
          {
            if ( (unsigned int)v83 >= v88 )
              sub_1B6432C(v83, v84);
            multiForm->m_Items[(int)v83 + 1] = v84;
          }
        }
      }
    }
  }
  v89 = *(_QWORD *)v74;
  v90 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
  {
    v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v91 - 1) != System_IDisposable_TypeInfo )
    {
      --v90;
      v91 += 4;
      if ( !v90 )
        goto LABEL_63;
    }
    v92 = v89 + 16LL * *v91 + 312;
  }
  else
  {
LABEL_63:
    v92 = sub_1BB60A8(v74, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v92)(v74, *(_QWORD *)(v92 + 8));
  return v44;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FCBB8 & 1) == 0 )
  {
    sub_1B640C8(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method);
    byte_49FCBB8 = 1;
  }
  v4 = sub_1B64314(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = -2;
  *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v4 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)this, v5, v6);
  return (System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *)v4;
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
  Il2CppObject *v15; // x0
  __int64 methodPtr_low; // x9
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v17; // x9
  __int128 v18; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x1
  Il2CppObject *current; // x19
  __int64 v24; // x9
  ServantPhotoEntity_c *v25; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x20
  int32_t ScriptValue_37864244; // w20
  int32_t v28; // w21
  int32_t v29; // w3
  const MethodInfo_3801044 *v30; // x5
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v31; // x9
  int32_t index; // w10
  struct System_Collections_Generic_List_T__o *list; // x11
  bool v34; // w8
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v35; // x9
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-60h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__6_o **v39; // [xsp+40h] [xbp-40h]
  Il2CppObject *value; // [xsp+48h] [xbp-38h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v41; // [xsp+58h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v42; // 0:x0.12

  v41 = this;
  v2 = this;
  if ( (byte_49FCBBE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v5);
    sub_1B640C8(&JsonManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__GetEnumerator__, v7);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1B640C8(&ServantPhotoEntity_TypeInfo, v9);
    this = (ServantPhotoEntity__GetOverrideFormList_d__6_o *)sub_1B640C8(
                                                               &Method_System_ValueTuple_int__int__int___ctor__,
                                                               v10);
    byte_49FCBBE = 1;
  }
  v39 = &v41;
  value = 0LL;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1B64324(this);
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
            (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v15 = value;
    if ( !value )
LABEL_27:
      sub_1B64324(v15);
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_26:
      sub_1B645E4(v15);
      goto LABEL_27;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_object__o *)value,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v17 = v41;
    v18 = *(_OWORD *)&v37.fields._list;
    p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v41->fields.__7__wrap1;
    v38 = v37;
    v41->fields.__7__wrap1.fields._current = v37.fields._current;
    *(_OWORD *)&v17->fields.__7__wrap1.fields._list = v18;
    sub_1B6406C(p__7__wrap1, 0, v20, v21);
    v2 = v41;
  }
  v2->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v2->fields.__7__wrap1,
          (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__6____m__Finally1(v41, v22);
    v35 = v41;
    v34 = 0;
    v41->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v35->fields.__7__wrap1.fields._index = 0LL;
    v35->fields.__7__wrap1.fields._current = 0LL;
    return v34;
  }
  current = v41->fields.__7__wrap1.fields._current;
  if ( current )
  {
    v24 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)v24
      || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v24 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1B645E4(v41->fields.__7__wrap1.fields._current);
      goto LABEL_26;
    }
  }
  v25 = ServantPhotoEntity_TypeInfo;
  if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v25 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v25->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  ScriptValue_37864244 = JsonManager__GetScriptValue_37864244(
                           (System_Collections_Generic_Dictionary_string__object__o *)current,
                           DISP_FORM_BY_FACE_SVTINDEX_KEY,
                           0,
                           0LL);
  v28 = JsonManager__GetScriptValue_37864244(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0LL);
  v29 = JsonManager__GetScriptValue_37864244(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0LL);
  v38.fields._index = 0;
  v38.fields._list = 0LL;
  *(_QWORD *)&v42.fields.Item1 = &v38;
  v42.fields.Item3 = ScriptValue_37864244;
  System_ValueTuple_int__int__int____ctor(v42, v28, v29, Method_System_ValueTuple_int__int__int___ctor__, v30);
  v31 = v41;
  index = v38.fields._index;
  list = v38.fields._list;
  v34 = 1;
  v41->fields.__1__state = 1;
  v31->fields.__2__current.fields.Item3 = index;
  *(_QWORD *)&v31->fields.__2__current.fields.Item1 = list;
  return v34;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  __int64 v5; // x20
  struct ServantPhotoEntity_o *_4__this; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FCBC1 & 1) == 0 )
  {
    sub_1B640C8(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method);
    byte_49FCBC1 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v5 = sub_1B64314(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method, v2);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v5 + 40) = _4__this;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)_4__this, v7, v8);
    return (System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *)v5;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_ServantPhotoEntity__GetOverrideFormList_d__6_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x9
  __int64 v5; // [xsp+0h] [xbp-30h] BYREF
  int32_t Item3; // [xsp+8h] [xbp-28h]

  if ( (byte_49FCBC0 & 1) == 0 )
  {
    sub_1B640C8(&System_ValueTuple_int__int__int__TypeInfo, method);
    byte_49FCBC0 = 1;
  }
  v3 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  Item3 = this->fields.__2__current.fields.Item3;
  v5 = v3;
  return (Il2CppObject *)j_il2cpp_value_box_0(System_ValueTuple_int__int__int__TypeInfo, &v5);
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
  if ( (byte_49FCBBF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    byte_49FCBBF = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
}


void __fastcall ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCBBB & 1) == 0 )
  {
    sub_1B640C8(&ServantPhotoEntity___c_TypeInfo, v1);
    byte_49FCBBB = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantPhotoEntity___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantPhotoEntity___c_TypeInfo->static_fields->__9 = (struct ServantPhotoEntity___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)ServantPhotoEntity___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_array *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  ServantPhotoEntity___c_c *v13; // x8
  System_Object_array *v14; // x19
  System_Converter_object__int__o *_9__5_2; // x20
  Il2CppObject *v16; // x21
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49FCBBC & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_ConvertAll_string__int___, s);
    sub_1B640C8(&System_Converter_string__int__TypeInfo, v4);
    sub_1B640C8(&Method_ServantPhotoEntity___c__GetFaceList_b__5_2__, v5);
    sub_1B640C8(&ServantPhotoEntity___c_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v7);
    sub_1B640C8(&StringLiteral_1/*""*/, v8);
    this = (ServantPhotoEntity___c_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v9);
    byte_49FCBBC = 1;
  }
  if ( !s
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_61395016(
                                             s,
                                             (System_String_o *)StringLiteral_15744/*"["*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL)) == 0LL
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_61395016(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_16000/*"]"*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  v10 = System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
  v13 = ServantPhotoEntity___c_TypeInfo;
  v14 = (System_Object_array *)v10;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v13 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__5_2 = (System_Converter_object__int__o *)v13->static_fields->__9__5_2;
  if ( !_9__5_2 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = ServantPhotoEntity___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__5_2 = (System_Converter_object__int__o *)sub_1B64314(System_Converter_string__int__TypeInfo, v11, v12);
    System_Converter_object__int____ctor(_9__5_2, v16, Method_ServantPhotoEntity___c__GetFaceList_b__5_2__, 0LL);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__5_2 = (struct System_Converter_string__int__o *)_9__5_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__5_2, (int32_t)_9__5_2, v18, v19);
  }
  return System_Array__ConvertAll_object__int_(
           v14,
           (System_Converter_TInput__TOutput__o *)_9__5_2,
           (const MethodInfo_2F2E8A0 *)Method_System_Array_ConvertAll_string__int___);
}


int32_t __fastcall ServantPhotoEntity___c___GetFaceList_b__5_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1B64324(this);
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
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x0

  if ( (byte_49FCBBD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Skip_int___, l);
    sub_1B640C8(&Method_System_Linq_Enumerable_Take_int___, v5);
    byte_49FCBBD = 1;
  }
  v6 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_2E6FA00 *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v6,
                                                            1,
                                                            (const MethodInfo_2E70250 *)Method_System_Linq_Enumerable_Take_int___);
}