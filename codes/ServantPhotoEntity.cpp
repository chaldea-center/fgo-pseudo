void __fastcall ServantPhotoEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int64_t v12; // x1
  struct ServantPhotoEntity_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x1
  struct ServantPhotoEntity_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  void *v28; // x1
  struct ServantPhotoEntity_StaticFields *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  if ( (byte_4BFE07B & 1) == 0 )
  {
    sub_1C2E12C(&ServantPhotoEntity_TypeInfo, v1);
    sub_1C2E12C(&StringLiteral_19894/*"form"*/, v8);
    sub_1C2E12C(&StringLiteral_18971/*"dispFormByFace"*/, v9);
    sub_1C2E12C(&StringLiteral_19701/*"faceIdx"*/, v10);
    sub_1C2E12C(&StringLiteral_24159/*"svtIdx"*/, v11);
    byte_4BFE07B = 1;
  }
  ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_KEY = (struct System_String_o *)StringLiteral_18971/*"dispFormByFace"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantPhotoEntity_TypeInfo->static_fields,
    StringLiteral_18971/*"dispFormByFace"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = StringLiteral_24159/*"svtIdx"*/;
  static_fields = ServantPhotoEntity_TypeInfo->static_fields;
  static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_24159/*"svtIdx"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY,
    v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = StringLiteral_19701/*"faceIdx"*/;
  v21 = ServantPhotoEntity_TypeInfo->static_fields;
  v21->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_19701/*"faceIdx"*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&v21->DISP_FORM_BY_FACE_FACEINDEX_KEY, v20, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_19894/*"form"*/;
  v29 = ServantPhotoEntity_TypeInfo->static_fields;
  v29->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_19894/*"form"*/;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&v29->DISP_FORM_BY_FACE_FORM_KEY,
    (int64_t)v28,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
}


void __fastcall ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4BFE07A & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataEntityBase_long___ctor__, method);
    byte_4BFE07A = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_3278CE4 *)Method_DataEntityBase_long___ctor__);
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_TSource__o *v37; // x0
  ServantPhotoEntity___c_c *v38; // x8
  System_Collections_Generic_List_TSource__o *v39; // x22
  System_Func_object__int__o *_9__5_1; // x19
  Il2CppObject *v41; // x23
  struct ServantPhotoEntity___c_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int32_t v49; // w23
  ServantPhotoEntity_FaceData_array *v50; // x19
  __int64 v51; // x24
  unsigned int *OverrideFormList; // x0
  const MethodInfo *v53; // x1
  System_Func_object__object__o *v54; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  int64_t v56; // x25
  unsigned __int64 v57; // x8
  int64_t v58; // x26
  unsigned __int64 v59; // x9
  __int64 v60; // x28
  int64_t v61; // x27
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  Il2CppClass **v80; // x0
  int v81; // w8
  __int64 v82; // x8
  unsigned int *v83; // x20
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 v87; // x1
  __int64 v88; // x20
  __int64 v89; // x8
  __int64 v90; // x9
  int *v91; // x10
  __int64 v92; // x0
  __int64 v93; // x8
  __int64 v94; // x9
  int *v95; // x10
  __int64 v96; // x0
  __int64 v97; // x0
  __int64 v98; // x1
  int max_length; // w11
  ServantPhotoEntity_FaceData_o *v100; // x10
  struct System_Int32_array *multiForm; // x10
  int v102; // w11
  __int64 v103; // x8
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  __int64 v108; // x0

  if ( (byte_4BFE078 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Min_int_____, *(_QWORD *)&defaultForm);
    sub_1C2E12C(&Method_System_Linq_Enumerable_SelectMany_int____int___, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_string__int_____, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToList_int_____, v8);
    sub_1C2E12C(&ServantPhotoEntity_FaceData___TypeInfo, v9);
    sub_1C2E12C(&ServantPhotoEntity_FaceData_TypeInfo, v10);
    sub_1C2E12C(&System_Func_string__int____TypeInfo, v11);
    sub_1C2E12C(&System_Func_int____IEnumerable_int___TypeInfo, v12);
    sub_1C2E12C(&System_Func_int____int__TypeInfo, v13);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v14);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, v15);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, v16);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v17);
    sub_1C2E12C(&int___TypeInfo, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_int____get_Count__, v19);
    sub_1C2E12C(&Method_ServantPhotoEntity___c__GetFaceList_b__5_0__, v20);
    sub_1C2E12C(&Method_ServantPhotoEntity___c__GetFaceList_b__5_1__, v21);
    sub_1C2E12C(&Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__, v22);
    sub_1C2E12C(&ServantPhotoEntity___c__DisplayClass5_0_TypeInfo, v23);
    sub_1C2E12C(&ServantPhotoEntity___c_TypeInfo, v24);
    byte_4BFE078 = 1;
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
    _9__5_0 = (System_Func_object__object__o *)sub_1C2E378(System_Func_string__int____TypeInfo);
    System_Func_object__object____ctor(_9__5_0, v28, Method_ServantPhotoEntity___c__GetFaceList_b__5_0__, 0LL);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_string__int____o *)_9__5_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v30, v31, v32, v33, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_string__int_____);
  v37 = System_Linq_Enumerable__ToList_object_(
          v36,
          (const MethodInfo_300FBA0 *)Method_System_Linq_Enumerable_ToList_int_____);
  v38 = ServantPhotoEntity___c_TypeInfo;
  v39 = v37;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v38 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v38->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = ServantPhotoEntity___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v38->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_int____int__TypeInfo);
    System_Func_object__int____ctor(_9__5_1, v41, Method_ServantPhotoEntity___c__GetFaceList_b__5_1__, 0LL);
    v42 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v42->__9__5_1 = (struct System_Func_int____int__o *)_9__5_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v42->__9__5_1, (int64_t)_9__5_1, v43, v44, v45, v46, v47, v48);
  }
  v49 = System_Linq_Enumerable__Min_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v39,
          (System_Func_TSource__int__o *)_9__5_1,
          (const MethodInfo_2FFAF58 *)Method_System_Linq_Enumerable_Min_int_____);
  v50 = (ServantPhotoEntity_FaceData_array *)sub_1C2E1D4(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v49);
  v51 = sub_1C2E378(ServantPhotoEntity___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v51, 0LL);
  if ( !v51 )
    goto LABEL_67;
  *(_DWORD *)(v51 + 16) = 0;
  if ( v49 >= 1 )
  {
    while ( 1 )
    {
      v54 = (System_Func_object__object__o *)sub_1C2E378(System_Func_int____IEnumerable_int___TypeInfo);
      System_Func_object__object____ctor(
        v54,
        (Il2CppObject *)v51,
        Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__,
        0LL);
      v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)v54,
                                                                   (const MethodInfo_30060A4 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = (unsigned int *)System_Linq_Enumerable__ToArray_int_(
                                           v55,
                                           (const MethodInfo_300BC24 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v39 )
        break;
      v56 = (int64_t)OverrideFormList;
      OverrideFormList = (unsigned int *)sub_1C2E1D4(int___TypeInfo, (unsigned int)v39->fields._size);
      if ( !OverrideFormList )
        break;
      v57 = OverrideFormList[6];
      v58 = (int64_t)OverrideFormList;
      if ( (__int64)(v57 << 32) >= 1 )
      {
        v59 = 0LL;
        while ( v59 < v57 )
        {
          OverrideFormList[v59++ + 8] = defaultForm;
          if ( (int)v57 == v59 )
            goto LABEL_23;
        }
LABEL_66:
        sub_1C2E390(OverrideFormList, v53);
      }
LABEL_23:
      v60 = *(int *)(v51 + 16);
      v61 = sub_1C2E378(ServantPhotoEntity_FaceData_TypeInfo);
      System_Object___ctor((Il2CppObject *)v61, 0LL);
      if ( !v61 )
        break;
      *(_QWORD *)(v61 + 16) = v56;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v61 + 16), v56, v62, v63, v64, v65, v66, v67);
      *(_QWORD *)(v61 + 24) = v58;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v61 + 24), v58, v68, v69, v70, v71, v72, v73);
      if ( !v50 )
        break;
      OverrideFormList = (unsigned int *)sub_1C2E268(v61, v50->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v108 = sub_1C2E3AC(0LL);
        sub_1C2E254(v108, 0LL);
      }
      if ( (unsigned int)v60 >= v50->max_length )
        goto LABEL_66;
      v80 = &v50->obj.klass + v60;
      v80[4] = (Il2CppClass *)v61;
      sub_1C2E0D0((PartyOrganizationUtility_o *)(v80 + 4), v61, v74, v75, v76, v77, v78, v79);
      v81 = *(_DWORD *)(v51 + 16) + 1;
      *(_DWORD *)(v51 + 16) = v81;
      if ( v81 >= v49 )
        goto LABEL_28;
    }
LABEL_67:
    sub_1C2E388(OverrideFormList, v53);
  }
LABEL_28:
  OverrideFormList = (unsigned int *)ServantPhotoEntity__GetOverrideFormList(this, v53);
  if ( !OverrideFormList )
    goto LABEL_67;
  v82 = *(_QWORD *)OverrideFormList;
  v83 = OverrideFormList;
  v84 = *(unsigned __int16 *)(*(_QWORD *)OverrideFormList + 302LL);
  if ( *(_WORD *)(*(_QWORD *)OverrideFormList + 302LL) )
  {
    v85 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v85 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
    {
      --v84;
      v85 += 4;
      if ( !v84 )
        goto LABEL_33;
    }
    v86 = v82 + 16LL * *v85 + 312;
  }
  else
  {
LABEL_33:
    v86 = sub_1C8010C(OverrideFormList, System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, 0LL);
  }
  v88 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))v86)(v83, *(_QWORD *)(v86 + 8));
  if ( !v88 )
    sub_1C2E388(0LL, v87);
  while ( 1 )
  {
    v89 = *(_QWORD *)v88;
    v90 = *(unsigned __int16 *)(*(_QWORD *)v88 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v88 + 302LL) )
    {
      v91 = (int *)(*(_QWORD *)(v89 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v91 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v90;
        v91 += 4;
        if ( !v90 )
          goto LABEL_40;
      }
      v92 = v89 + 16LL * *v91 + 312;
    }
    else
    {
LABEL_40:
      v92 = sub_1C8010C(v88, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v92)(v88, *(_QWORD *)(v92 + 8)) & 1) == 0 )
      break;
    v93 = *(_QWORD *)v88;
    v94 = *(unsigned __int16 *)(*(_QWORD *)v88 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v88 + 302LL) )
    {
      v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v95 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
      {
        --v94;
        v95 += 4;
        if ( !v94 )
          goto LABEL_47;
      }
      v96 = v93 + 16LL * *v95 + 312;
    }
    else
    {
LABEL_47:
      v96 = sub_1C8010C(v88, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0LL);
    }
    v97 = (*(__int64 (__fastcall **)(__int64, _QWORD))v96)(v88, *(_QWORD *)(v96 + 8));
    if ( (v97 & 0x8000000000000000LL) == 0 )
    {
      if ( !v50 )
        sub_1C2E388(v97, v98);
      max_length = v50->max_length;
      if ( max_length > SHIDWORD(v97) )
      {
        if ( HIDWORD(v97) >= max_length )
          sub_1C2E390(v97, v98);
        v100 = v50->m_Items[v97 >> 32];
        if ( !v100 )
          sub_1C2E388(v97, v98);
        if ( (v97 & 0x80000000) == 0 )
        {
          multiForm = v100->fields.multiForm;
          if ( !multiForm )
            sub_1C2E388(v97, v98);
          v102 = multiForm->max_length;
          if ( v102 > (int)v97 )
          {
            if ( (unsigned int)v97 >= v102 )
              sub_1C2E390(v97, v98);
            multiForm->m_Items[(int)v97 + 1] = v98;
          }
        }
      }
    }
  }
  v103 = *(_QWORD *)v88;
  v104 = *(unsigned __int16 *)(*(_QWORD *)v88 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v88 + 302LL) )
  {
    v105 = (int *)(*(_QWORD *)(v103 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v105 - 1) != System_IDisposable_TypeInfo )
    {
      --v104;
      v105 += 4;
      if ( !v104 )
        goto LABEL_63;
    }
    v106 = v103 + 16LL * *v105 + 312;
  }
  else
  {
LABEL_63:
    v106 = sub_1C8010C(v88, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v106)(v88, *(_QWORD *)(v106 + 8));
  return v50;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BFE079 & 1) == 0 )
  {
    sub_1C2E12C(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method);
    byte_4BFE079 = 1;
  }
  v3 = sub_1C2E378(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v3 + 40) = this;
  sub_1C2E0D0((PartyOrganizationUtility_o *)(v3 + 40), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v18; // x9
  __int128 v19; // q0
  struct System_Collections_Generic_List_Enumerator_object__o *p__7__wrap1; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x1
  Il2CppObject *current; // x19
  __int64 v29; // x9
  ServantPhotoEntity_c *v30; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x20
  int32_t ScriptValue_39493056; // w20
  int32_t v33; // w21
  int32_t v34; // w3
  const MethodInfo_39C5AEC *v35; // x5
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v36; // x9
  int32_t index; // w10
  struct System_Collections_Generic_List_T__o *list; // x11
  bool v39; // w8
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v40; // x9
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+20h] [xbp-60h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__6_o **v44; // [xsp+40h] [xbp-40h]
  Il2CppObject *value; // [xsp+48h] [xbp-38h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v46; // [xsp+58h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v47; // 0:x0.12

  v46 = this;
  v2 = this;
  if ( (byte_4BFE07F & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v5);
    sub_1C2E12C(&JsonManager_TypeInfo, v6);
    sub_1C2E12C(&Method_System_Collections_Generic_List_object__GetEnumerator__, v7);
    sub_1C2E12C(&System_Collections_Generic_List_object__TypeInfo, v8);
    sub_1C2E12C(&ServantPhotoEntity_TypeInfo, v9);
    this = (ServantPhotoEntity__GetOverrideFormList_d__6_o *)sub_1C2E12C(
                                                               &Method_System_ValueTuple_int__int__int___ctor__,
                                                               v10);
    byte_4BFE07F = 1;
  }
  v44 = &v46;
  value = 0LL;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C2E388(this, method);
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
            (const MethodInfo_3337380 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v16 = value;
    if ( !value )
LABEL_27:
      sub_1C2E388(v16, v15);
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_26:
      sub_1C2E648(v16);
      goto LABEL_27;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      &v42,
      (System_Collections_Generic_List_object__o *)value,
      (const MethodInfo_366C3A4 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v18 = v46;
    v19 = *(_OWORD *)&v42.fields._list;
    p__7__wrap1 = &v46->fields.__7__wrap1;
    v43 = v42;
    v46->fields.__7__wrap1.fields._current = v42.fields._current;
    *(_OWORD *)&v18->fields.__7__wrap1.fields._list = v19;
    sub_1C2E0D0((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v21, v22, v23, v24, v25, v26);
    v2 = v46;
  }
  v2->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v2->fields.__7__wrap1,
          (const MethodInfo_34001C4 *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__6____m__Finally1(v46, v27);
    v40 = v46;
    v39 = 0;
    v46->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v40->fields.__7__wrap1.fields._index = 0LL;
    v40->fields.__7__wrap1.fields._current = 0LL;
    return v39;
  }
  current = v46->fields.__7__wrap1.fields._current;
  if ( current )
  {
    v29 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)v29
      || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v29 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1C2E648(v46->fields.__7__wrap1.fields._current);
      goto LABEL_26;
    }
  }
  v30 = ServantPhotoEntity_TypeInfo;
  if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo);
    v30 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v30->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  ScriptValue_39493056 = JsonManager__GetScriptValue_39493056(
                           (System_Collections_Generic_Dictionary_string__object__o *)current,
                           DISP_FORM_BY_FACE_SVTINDEX_KEY,
                           0,
                           0LL);
  v33 = JsonManager__GetScriptValue_39493056(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0LL);
  v34 = JsonManager__GetScriptValue_39493056(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0LL);
  v43.fields._index = 0;
  v43.fields._list = 0LL;
  *(_QWORD *)&v47.fields.Item1 = &v43;
  v47.fields.Item3 = ScriptValue_39493056;
  System_ValueTuple_int__int__int____ctor(v47, v33, v34, Method_System_ValueTuple_int__int__int___ctor__, v35);
  v36 = v46;
  index = v43.fields._index;
  list = v43.fields._list;
  v39 = 1;
  v46->fields.__1__state = 1;
  v36->fields.__2__current.fields.Item3 = index;
  *(_QWORD *)&v36->fields.__2__current.fields.Item1 = list;
  return v39;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct ServantPhotoEntity_o *_4__this; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BFE082 & 1) == 0 )
  {
    sub_1C2E12C(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method);
    byte_4BFE082 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1C2E378(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1C2E0D0((PartyOrganizationUtility_o *)(v4 + 40), (int64_t)_4__this, v6, v7, v8, v9, v10, v11);
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

  v2 = sub_1C2E140(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2E378(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C2E140(&Method_ServantPhotoEntity__GetOverrideFormList_d__6_System_Collections_IEnumerator_Reset__);
  sub_1C2E254(v3, v4);
}


Il2CppObject *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x9
  __int64 v8; // [xsp+0h] [xbp-30h] BYREF
  int32_t Item3; // [xsp+8h] [xbp-28h]

  if ( (byte_4BFE081 & 1) == 0 )
  {
    sub_1C2E12C(&System_ValueTuple_int__int__int__TypeInfo, method);
    byte_4BFE081 = 1;
  }
  v6 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  Item3 = this->fields.__2__current.fields.Item3;
  v8 = v6;
  return (Il2CppObject *)j_il2cpp_value_box_0(System_ValueTuple_int__int__int__TypeInfo, &v8, v2, v3, v4);
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
  if ( (byte_4BFE080 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method);
    byte_4BFE080 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_34001C0 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
}


void __fastcall ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFE07C & 1) == 0 )
  {
    sub_1C2E12C(&ServantPhotoEntity___c_TypeInfo, v1);
    byte_4BFE07C = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(ServantPhotoEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantPhotoEntity___c_TypeInfo->static_fields->__9 = (struct ServantPhotoEntity___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)ServantPhotoEntity___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  ServantPhotoEntity___c_c *v11; // x8
  System_Object_array *v12; // x19
  System_Converter_object__int__o *_9__5_2; // x20
  Il2CppObject *v14; // x21
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BFE07D & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Array_ConvertAll_string__int___, s);
    sub_1C2E12C(&System_Converter_string__int__TypeInfo, v4);
    sub_1C2E12C(&Method_ServantPhotoEntity___c__GetFaceList_b__5_2__, v5);
    sub_1C2E12C(&ServantPhotoEntity___c_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_16099/*"["*/, v7);
    sub_1C2E12C(&StringLiteral_1/*""*/, v8);
    this = (ServantPhotoEntity___c_o *)sub_1C2E12C(&StringLiteral_16358/*"]"*/, v9);
    byte_4BFE07D = 1;
  }
  if ( !s
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_63255212(
                                             s,
                                             (System_String_o *)StringLiteral_16099/*"["*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL)) == 0LL
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_63255212(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_16358/*"]"*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL)) == 0LL )
  {
    sub_1C2E388(this, s);
  }
  v10 = System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
  v11 = ServantPhotoEntity___c_TypeInfo;
  v12 = (System_Object_array *)v10;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo);
    v11 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__5_2 = (System_Converter_object__int__o *)v11->static_fields->__9__5_2;
  if ( !_9__5_2 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = ServantPhotoEntity___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__5_2 = (System_Converter_object__int__o *)sub_1C2E378(System_Converter_string__int__TypeInfo);
    System_Converter_object__int____ctor(_9__5_2, v14, Method_ServantPhotoEntity___c__GetFaceList_b__5_2__, 0LL);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__5_2 = (struct System_Converter_string__int__o *)_9__5_2;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__5_2, (int64_t)_9__5_2, v16, v17, v18, v19, v20, v21);
  }
  return System_Array__ConvertAll_object__int_(
           v12,
           (System_Converter_TInput__TOutput__o *)_9__5_2,
           (const MethodInfo_30CBA68 *)Method_System_Array_ConvertAll_string__int___);
}


int32_t __fastcall ServantPhotoEntity___c___GetFaceList_b__5_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1C2E388(this, 0LL);
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

  if ( (byte_4BFE07E & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Linq_Enumerable_Skip_int___, l);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Take_int___, v5);
    byte_4BFE07E = 1;
  }
  v6 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_300A478 *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v6,
                                                            1,
                                                            (const MethodInfo_300AAB0 *)Method_System_Linq_Enumerable_Take_int___);
}