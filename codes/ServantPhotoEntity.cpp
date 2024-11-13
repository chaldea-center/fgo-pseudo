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
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  int64_t v16; // x1
  struct ServantPhotoEntity_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  struct ServantPhotoEntity_StaticFields *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  void *v32; // x1
  struct ServantPhotoEntity_StaticFields *v33; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7

  if ( (byte_4B16AB6 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantPhotoEntity_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_19743/*"form"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_18833/*"dispFormByFace"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_19556/*"faceIdx"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_23956/*"svtIdx"*/, v14, v15);
    byte_4B16AB6 = 1;
  }
  ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_KEY = (struct System_String_o *)StringLiteral_18833/*"dispFormByFace"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantPhotoEntity_TypeInfo->static_fields,
    StringLiteral_18833/*"dispFormByFace"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v16 = StringLiteral_23956/*"svtIdx"*/;
  static_fields = ServantPhotoEntity_TypeInfo->static_fields;
  static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY = (struct System_String_o *)StringLiteral_23956/*"svtIdx"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY,
    v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = StringLiteral_19556/*"faceIdx"*/;
  v25 = ServantPhotoEntity_TypeInfo->static_fields;
  v25->DISP_FORM_BY_FACE_FACEINDEX_KEY = (struct System_String_o *)StringLiteral_19556/*"faceIdx"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&v25->DISP_FORM_BY_FACE_FACEINDEX_KEY, v24, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_19743/*"form"*/;
  v33 = ServantPhotoEntity_TypeInfo->static_fields;
  v33->DISP_FORM_BY_FACE_FORM_KEY = (struct System_String_o *)StringLiteral_19743/*"form"*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v33->DISP_FORM_BY_FACE_FORM_KEY,
    (int64_t)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


void __fastcall ServantPhotoEntity___ctor(ServantPhotoEntity_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16AB5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataEntityBase_long___ctor__, method, v2);
    byte_4B16AB5 = 1;
  }
  DataEntityBase_long____ctor(
    (DataEntityBase_long__o *)this,
    (const MethodInfo_31B2C88 *)Method_DataEntityBase_long___ctor__);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  ServantPhotoEntity___c_c *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *dispFaceId; // x19
  System_Func_object__object__o *_9__5_0; // x22
  Il2CppObject *v49; // x23
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_Collections_Generic_List_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  ServantPhotoEntity___c_c *v62; // x8
  System_Collections_Generic_List_TSource__o *v63; // x22
  System_Func_object__int__o *_9__5_1; // x19
  Il2CppObject *v65; // x23
  struct ServantPhotoEntity___c_StaticFields *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int32_t v73; // w23
  ServantPhotoEntity_FaceData_array *v74; // x19
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x24
  unsigned int *OverrideFormList; // x0
  const MethodInfo *v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  System_Func_object__object__o *v83; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  int64_t v85; // x25
  __int64 v86; // x2
  __int64 v87; // x3
  unsigned __int64 v88; // x8
  int64_t v89; // x26
  unsigned __int64 v90; // x9
  __int64 v91; // x28
  int64_t v92; // x27
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  Il2CppClass **v111; // x0
  int v112; // w8
  __int64 v113; // x8
  unsigned int *v114; // x20
  __int64 v115; // x9
  int *v116; // x10
  __int64 v117; // x0
  __int64 v118; // x1
  __int64 v119; // x20
  __int64 v120; // x8
  __int64 v121; // x9
  int *v122; // x10
  __int64 v123; // x0
  __int64 v124; // x8
  __int64 v125; // x9
  int *v126; // x10
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x1
  int max_length; // w11
  ServantPhotoEntity_FaceData_o *v131; // x10
  struct System_Int32_array *multiForm; // x10
  int v133; // w11
  __int64 v134; // x8
  __int64 v135; // x9
  int *v136; // x10
  __int64 v137; // x0
  __int64 v139; // x0

  if ( (byte_4B16AB3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Min_int_____, *(_QWORD *)&defaultForm, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_SelectMany_int____int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_string__int_____, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_int_____, v12, v13);
    sub_1BCA7E0(&ServantPhotoEntity_FaceData___TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantPhotoEntity_FaceData_TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_string__int____TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_int____IEnumerable_int___TypeInfo, v20, v21);
    sub_1BCA7E0(&System_Func_int____int__TypeInfo, v22, v23);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, v28, v29);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v30, v31);
    sub_1BCA7E0(&int___TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int____get_Count__, v34, v35);
    sub_1BCA7E0(&Method_ServantPhotoEntity___c__GetFaceList_b__5_0__, v36, v37);
    sub_1BCA7E0(&Method_ServantPhotoEntity___c__GetFaceList_b__5_1__, v38, v39);
    sub_1BCA7E0(&Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__, v40, v41);
    sub_1BCA7E0(&ServantPhotoEntity___c__DisplayClass5_0_TypeInfo, v42, v43);
    sub_1BCA7E0(&ServantPhotoEntity___c_TypeInfo, v44, v45);
    byte_4B16AB3 = 1;
  }
  v46 = ServantPhotoEntity___c_TypeInfo;
  dispFaceId = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.dispFaceId;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo, *(_QWORD *)&defaultForm);
    v46 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__object__o *)v46->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46, *(_QWORD *)&defaultForm);
      v46 = ServantPhotoEntity___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__5_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_string__int____TypeInfo,
                                                 *(_QWORD *)&defaultForm,
                                                 method,
                                                 v3);
    System_Func_object__object____ctor(_9__5_0, v49, Method_ServantPhotoEntity___c__GetFaceList_b__5_0__, 0LL);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_string__int____o *)_9__5_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_0, (int64_t)_9__5_0, v51, v52, v53, v54, v55, v56);
  }
  v57 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               dispFaceId,
                                                               (System_Func_TSource__TResult__o *)_9__5_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_string__int_____);
  v58 = System_Linq_Enumerable__ToList_object_(
          v57,
          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_int_____);
  v62 = ServantPhotoEntity___c_TypeInfo;
  v63 = v58;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo, v59);
    v62 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__5_1 = (System_Func_object__int__o *)v62->static_fields->__9__5_1;
  if ( !_9__5_1 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62, v59);
      v62 = ServantPhotoEntity___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v62->static_fields->__9;
    _9__5_1 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_int____int__TypeInfo, v59, v60, v61);
    System_Func_object__int____ctor(_9__5_1, v65, Method_ServantPhotoEntity___c__GetFaceList_b__5_1__, 0LL);
    v66 = ServantPhotoEntity___c_TypeInfo->static_fields;
    v66->__9__5_1 = (struct System_Func_int____int__o *)_9__5_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v66->__9__5_1, (int64_t)_9__5_1, v67, v68, v69, v70, v71, v72);
  }
  v73 = System_Linq_Enumerable__Min_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v63,
          (System_Func_TSource__int__o *)_9__5_1,
          (const MethodInfo_2F3ADCC *)Method_System_Linq_Enumerable_Min_int_____);
  v74 = (ServantPhotoEntity_FaceData_array *)sub_1BCA888(ServantPhotoEntity_FaceData___TypeInfo, (unsigned int)v73);
  v78 = sub_1BCAA2C(ServantPhotoEntity___c__DisplayClass5_0_TypeInfo, v75, v76, v77);
  System_Object___ctor((Il2CppObject *)v78, 0LL);
  if ( !v78 )
    goto LABEL_67;
  *(_DWORD *)(v78 + 16) = 0;
  if ( v73 >= 1 )
  {
    while ( 1 )
    {
      v83 = (System_Func_object__object__o *)sub_1BCAA2C(System_Func_int____IEnumerable_int___TypeInfo, v80, v81, v82);
      System_Func_object__object____ctor(
        v83,
        (Il2CppObject *)v78,
        Method_ServantPhotoEntity___c__DisplayClass5_0__GetFaceList_b__3__,
        0LL);
      v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__int_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)v63,
                                                                   (System_Func_TSource__IEnumerable_TResult___o *)v83,
                                                                   (const MethodInfo_2F45F84 *)Method_System_Linq_Enumerable_SelectMany_int____int___);
      OverrideFormList = (unsigned int *)System_Linq_Enumerable__ToArray_int_(
                                           v84,
                                           (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !v63 )
        break;
      v85 = (int64_t)OverrideFormList;
      OverrideFormList = (unsigned int *)sub_1BCA888(int___TypeInfo, (unsigned int)v63->fields._size);
      if ( !OverrideFormList )
        break;
      v88 = OverrideFormList[6];
      v89 = (int64_t)OverrideFormList;
      if ( (__int64)(v88 << 32) >= 1 )
      {
        v90 = 0LL;
        while ( v90 < v88 )
        {
          OverrideFormList[v90++ + 8] = defaultForm;
          if ( (int)v88 == v90 )
            goto LABEL_23;
        }
LABEL_66:
        sub_1BCAA44(OverrideFormList, v80);
      }
LABEL_23:
      v91 = *(int *)(v78 + 16);
      v92 = sub_1BCAA2C(ServantPhotoEntity_FaceData_TypeInfo, v80, v86, v87);
      System_Object___ctor((Il2CppObject *)v92, 0LL);
      if ( !v92 )
        break;
      *(_QWORD *)(v92 + 16) = v85;
      sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 16), v85, v93, v94, v95, v96, v97, v98);
      *(_QWORD *)(v92 + 24) = v89;
      sub_1BCA784((PartyOrganizationUtility_o *)(v92 + 24), v89, v99, v100, v101, v102, v103, v104);
      if ( !v74 )
        break;
      OverrideFormList = (unsigned int *)sub_1BCA91C(v92, v74->obj.klass->_1.element_class);
      if ( !OverrideFormList )
      {
        v139 = sub_1BCAA60(0LL);
        sub_1BCA908(v139, 0LL);
      }
      if ( (unsigned int)v91 >= v74->max_length )
        goto LABEL_66;
      v111 = &v74->obj.klass + v91;
      v111[4] = (Il2CppClass *)v92;
      sub_1BCA784((PartyOrganizationUtility_o *)(v111 + 4), v92, v105, v106, v107, v108, v109, v110);
      v112 = *(_DWORD *)(v78 + 16) + 1;
      *(_DWORD *)(v78 + 16) = v112;
      if ( v112 >= v73 )
        goto LABEL_28;
    }
LABEL_67:
    sub_1BCAA3C(OverrideFormList, v80);
  }
LABEL_28:
  OverrideFormList = (unsigned int *)ServantPhotoEntity__GetOverrideFormList(this, v80);
  if ( !OverrideFormList )
    goto LABEL_67;
  v113 = *(_QWORD *)OverrideFormList;
  v114 = OverrideFormList;
  v115 = *(unsigned __int16 *)(*(_QWORD *)OverrideFormList + 302LL);
  if ( *(_WORD *)(*(_QWORD *)OverrideFormList + 302LL) )
  {
    v116 = (int *)(*(_QWORD *)(v113 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___c **)v116 - 1) != System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo )
    {
      --v115;
      v116 += 4;
      if ( !v115 )
        goto LABEL_33;
    }
    v117 = v113 + 16LL * *v116 + 312;
  }
  else
  {
LABEL_33:
    v117 = sub_1C1C7C0(
             OverrideFormList,
             System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___TypeInfo,
             0LL);
  }
  v119 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD))v117)(v114, *(_QWORD *)(v117 + 8));
  if ( !v119 )
    sub_1BCAA3C(0LL, v118);
  while ( 1 )
  {
    v120 = *(_QWORD *)v119;
    v121 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
    {
      v122 = (int *)(*(_QWORD *)(v120 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v122 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v121;
        v122 += 4;
        if ( !v121 )
          goto LABEL_40;
      }
      v123 = v120 + 16LL * *v122 + 312;
    }
    else
    {
LABEL_40:
      v123 = sub_1C1C7C0(v119, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v123)(v119, *(_QWORD *)(v123 + 8)) & 1) == 0 )
      break;
    v124 = *(_QWORD *)v119;
    v125 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
    {
      v126 = (int *)(*(_QWORD *)(v124 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___c **)v126 - 1) != System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo )
      {
        --v125;
        v126 += 4;
        if ( !v125 )
          goto LABEL_47;
      }
      v127 = v124 + 16LL * *v126 + 312;
    }
    else
    {
LABEL_47:
      v127 = sub_1C1C7C0(v119, System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___TypeInfo, 0LL);
    }
    v128 = (*(__int64 (__fastcall **)(__int64, _QWORD))v127)(v119, *(_QWORD *)(v127 + 8));
    if ( (v128 & 0x8000000000000000LL) == 0 )
    {
      if ( !v74 )
        sub_1BCAA3C(v128, v129);
      max_length = v74->max_length;
      if ( max_length > SHIDWORD(v128) )
      {
        if ( HIDWORD(v128) >= max_length )
          sub_1BCAA44(v128, v129);
        v131 = v74->m_Items[v128 >> 32];
        if ( !v131 )
          sub_1BCAA3C(v128, v129);
        if ( (v128 & 0x80000000) == 0 )
        {
          multiForm = v131->fields.multiForm;
          if ( !multiForm )
            sub_1BCAA3C(v128, v129);
          v133 = multiForm->max_length;
          if ( v133 > (int)v128 )
          {
            if ( (unsigned int)v128 >= v133 )
              sub_1BCAA44(v128, v129);
            multiForm->m_Items[(int)v128 + 1] = v129;
          }
        }
      }
    }
  }
  v134 = *(_QWORD *)v119;
  v135 = *(unsigned __int16 *)(*(_QWORD *)v119 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v119 + 302LL) )
  {
    v136 = (int *)(*(_QWORD *)(v134 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v136 - 1) != System_IDisposable_TypeInfo )
    {
      --v135;
      v136 += 4;
      if ( !v135 )
        goto LABEL_63;
    }
    v137 = v134 + 16LL * *v136 + 312;
  }
  else
  {
LABEL_63:
    v137 = sub_1C1C7C0(v119, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v137)(v119, *(_QWORD *)(v137 + 8));
  return v74;
}


System_Collections_Generic_IEnumerable_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList(
        ServantPhotoEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B16AB4 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method, v2);
    byte_4B16AB4 = 1;
  }
  v5 = sub_1BCAA2C(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = -2;
  *(_DWORD *)(v5 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
  *(_QWORD *)(v5 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  __int64 v2; // x2
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  int32_t _1__state; // w8
  struct ServantPhotoEntity_o *_4__this; // x8
  System_Collections_Generic_Dictionary_object__object__o *extendData; // x19
  ServantPhotoEntity_c *v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x0
  __int64 methodPtr_low; // x9
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v27; // x9
  __int128 v28; // q0
  struct System_Collections_Generic_List_Enumerator_object__o *p__7__wrap1; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_Dictionary_string__object__c *v36; // x1
  Il2CppObject *current; // x19
  __int64 v38; // x9
  ServantPhotoEntity_c *v39; // x0
  System_String_o *DISP_FORM_BY_FACE_SVTINDEX_KEY; // x20
  int32_t ScriptValue_38890912; // w20
  int32_t v42; // w21
  int32_t v43; // w3
  const MethodInfo_38FA09C *v44; // x5
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v45; // x9
  int32_t index; // w10
  struct System_Collections_Generic_List_T__o *list; // x11
  bool v48; // w8
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v49; // x9
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-60h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__6_o **v53; // [xsp+40h] [xbp-40h]
  Il2CppObject *value; // [xsp+48h] [xbp-38h] BYREF
  ServantPhotoEntity__GetOverrideFormList_d__6_o *v55; // [xsp+58h] [xbp-28h] BYREF
  System_ValueTuple_int__int__int__o v56; // 0:x0.12

  v55 = this;
  v3 = this;
  if ( (byte_4B16ABA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__get_Current__, v8, v9);
    sub_1BCA7E0(&JsonManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v14, v15);
    sub_1BCA7E0(&ServantPhotoEntity_TypeInfo, v16, v17);
    this = (ServantPhotoEntity__GetOverrideFormList_d__6_o *)sub_1BCA7E0(
                                                               &Method_System_ValueTuple_int__int__int___ctor__,
                                                               v18,
                                                               v19);
    byte_4B16ABA = 1;
  }
  v53 = &v55;
  value = 0LL;
  _1__state = v3->fields.__1__state;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    _4__this = v3->fields.__4__this;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      sub_1BCAA3C(this, method);
    extendData = (System_Collections_Generic_Dictionary_object__object__o *)_4__this->fields.extendData;
    if ( !extendData )
      return 0;
    v23 = ServantPhotoEntity_TypeInfo;
    if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo, method);
      v23 = ServantPhotoEntity_TypeInfo;
    }
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            extendData,
            (Il2CppObject *)v23->static_fields->DISP_FORM_BY_FACE_KEY,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0;
    v25 = value;
    if ( !value )
LABEL_27:
      sub_1BCAA3C(v25, v24);
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_26:
      sub_1BCACFC(v25);
      goto LABEL_27;
    }
    System_Collections_Generic_List_object___GetEnumerator(
      &v51,
      (System_Collections_Generic_List_object__o *)value,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_object__GetEnumerator__);
    v27 = v55;
    v28 = *(_OWORD *)&v51.fields._list;
    p__7__wrap1 = &v55->fields.__7__wrap1;
    v52 = v51;
    v55->fields.__7__wrap1.fields._current = v51.fields._current;
    *(_OWORD *)&v27->fields.__7__wrap1.fields._list = v28;
    sub_1BCA784((PartyOrganizationUtility_o *)p__7__wrap1, 0LL, v30, v31, v32, v33, v34, v35);
    v3 = v55;
  }
  v3->fields.__1__state = -3;
  if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
          &v3->fields.__7__wrap1,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_object__MoveNext__) )
  {
    ServantPhotoEntity__GetOverrideFormList_d__6____m__Finally1(v55, (const MethodInfo *)v36);
    v49 = v55;
    v48 = 0;
    v55->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v49->fields.__7__wrap1.fields._index = 0LL;
    v49->fields.__7__wrap1.fields._current = 0LL;
    return v48;
  }
  current = v55->fields.__7__wrap1.fields._current;
  if ( current )
  {
    v36 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v38 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(current->klass->vtable[0].methodPtr) < (unsigned int)v38
      || (System_Collections_Generic_Dictionary_string__object__c *)current->klass->_2.typeHierarchy[v38 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      sub_1BCACFC(v55->fields.__7__wrap1.fields._current);
      goto LABEL_26;
    }
  }
  v39 = ServantPhotoEntity_TypeInfo;
  if ( !ServantPhotoEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity_TypeInfo, v36);
    v39 = ServantPhotoEntity_TypeInfo;
  }
  DISP_FORM_BY_FACE_SVTINDEX_KEY = v39->static_fields->DISP_FORM_BY_FACE_SVTINDEX_KEY;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v36);
  ScriptValue_38890912 = JsonManager__GetScriptValue_38890912(
                           (System_Collections_Generic_Dictionary_string__object__o *)current,
                           DISP_FORM_BY_FACE_SVTINDEX_KEY,
                           0,
                           0LL);
  v42 = JsonManager__GetScriptValue_38890912(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FACEINDEX_KEY,
          0,
          0LL);
  v43 = JsonManager__GetScriptValue_38890912(
          (System_Collections_Generic_Dictionary_string__object__o *)current,
          ServantPhotoEntity_TypeInfo->static_fields->DISP_FORM_BY_FACE_FORM_KEY,
          0,
          0LL);
  v52.fields._index = 0;
  v52.fields._list = 0LL;
  *(_QWORD *)&v56.fields.Item1 = &v52;
  v56.fields.Item3 = ScriptValue_38890912;
  System_ValueTuple_int__int__int____ctor(v56, v42, v43, Method_System_ValueTuple_int__int__int___ctor__, v44);
  v45 = v55;
  index = v52.fields._index;
  list = v52.fields._list;
  v48 = 1;
  v55->fields.__1__state = 1;
  v45->fields.__2__current.fields.Item3 = index;
  *(_QWORD *)&v45->fields.__2__current.fields.Item1 = list;
  return v48;
}


System_Collections_Generic_IEnumerator_ValueTuple_int__int__int___o *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_Generic_IEnumerable__System_Int32_System_Int32_System_Int32___GetEnumerator(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  __int64 v6; // x20
  struct ServantPhotoEntity_o *_4__this; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B16ABD & 1) == 0 )
  {
    sub_1BCA7E0(&ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method, v2);
    byte_4B16ABD = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v6 = sub_1BCAA2C(ServantPhotoEntity__GetOverrideFormList_d__6_TypeInfo, method, v2, v3);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v6 + 40) = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)_4__this, v8, v9, v10, v11, v12, v13);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_ServantPhotoEntity__GetOverrideFormList_d__6_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall ServantPhotoEntity__GetOverrideFormList_d__6__System_Collections_IEnumerator_get_Current(
        ServantPhotoEntity__GetOverrideFormList_d__6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x9
  __int64 v6; // [xsp+0h] [xbp-30h] BYREF
  int32_t Item3; // [xsp+8h] [xbp-28h]

  if ( (byte_4B16ABC & 1) == 0 )
  {
    sub_1BCA7E0(&System_ValueTuple_int__int__int__TypeInfo, method, v2);
    byte_4B16ABC = 1;
  }
  v4 = *(_QWORD *)&this->fields.__2__current.fields.Item1;
  Item3 = this->fields.__2__current.fields.Item3;
  v6 = v4;
  return (Il2CppObject *)j_il2cpp_value_box_0(System_ValueTuple_int__int__int__TypeInfo, &v6);
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
  __int64 v2; // x2

  if ( (byte_4B16ABB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_object__Dispose__, method, v2);
    byte_4B16ABB = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &this->fields.__7__wrap1,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_object__Dispose__);
}


void __fastcall ServantPhotoEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16AB7 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantPhotoEntity___c_TypeInfo, v1, v2);
    byte_4B16AB7 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantPhotoEntity___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantPhotoEntity___c_TypeInfo->static_fields->__9 = (struct ServantPhotoEntity___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantPhotoEntity___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_array *v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  ServantPhotoEntity___c_c *v20; // x8
  System_Object_array *v21; // x19
  System_Converter_object__int__o *_9__5_2; // x20
  Il2CppObject *v23; // x21
  struct ServantPhotoEntity___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B16AB8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_ConvertAll_string__int___, s, method);
    sub_1BCA7E0(&System_Converter_string__int__TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ServantPhotoEntity___c__GetFaceList_b__5_2__, v6, v7);
    sub_1BCA7E0(&ServantPhotoEntity___c_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    this = (ServantPhotoEntity___c_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v14, v15);
    byte_4B16AB8 = 1;
  }
  if ( !s
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_62420848(
                                             s,
                                             (System_String_o *)StringLiteral_15978/*"["*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL)) == 0LL
    || (this = (ServantPhotoEntity___c_o *)System_String__Replace_62420848(
                                             (System_String_o *)this,
                                             (System_String_o *)StringLiteral_16236/*"]"*/,
                                             (System_String_o *)StringLiteral_1/*""*/,
                                             0LL)) == 0LL )
  {
    sub_1BCAA3C(this, s);
  }
  v16 = System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL);
  v20 = ServantPhotoEntity___c_TypeInfo;
  v21 = (System_Object_array *)v16;
  if ( !ServantPhotoEntity___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantPhotoEntity___c_TypeInfo, v17);
    v20 = ServantPhotoEntity___c_TypeInfo;
  }
  _9__5_2 = (System_Converter_object__int__o *)v20->static_fields->__9__5_2;
  if ( !_9__5_2 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v17);
      v20 = ServantPhotoEntity___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__5_2 = (System_Converter_object__int__o *)sub_1BCAA2C(System_Converter_string__int__TypeInfo, v17, v18, v19);
    System_Converter_object__int____ctor(_9__5_2, v23, Method_ServantPhotoEntity___c__GetFaceList_b__5_2__, 0LL);
    static_fields = ServantPhotoEntity___c_TypeInfo->static_fields;
    static_fields->__9__5_2 = (struct System_Converter_string__int__o *)_9__5_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__5_2, (int64_t)_9__5_2, v25, v26, v27, v28, v29, v30);
  }
  return System_Array__ConvertAll_object__int_(
           v21,
           (System_Converter_TInput__TOutput__o *)_9__5_2,
           (const MethodInfo_300B3D8 *)Method_System_Array_ConvertAll_string__int___);
}


int32_t __fastcall ServantPhotoEntity___c___GetFaceList_b__5_1(
        ServantPhotoEntity___c_o *this,
        System_Int32_array *l,
        const MethodInfo *method)
{
  if ( !l )
    sub_1BCAA3C(this, 0LL);
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
  __int64 v6; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0

  if ( (byte_4B16AB9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_int___, l, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Take_int___, v5, v6);
    byte_4B16AB9 = 1;
  }
  v7 = System_Linq_Enumerable__Skip_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)l,
         this->fields.i,
         (const MethodInfo_2F4A0C4 *)Method_System_Linq_Enumerable_Skip_int___);
  return (System_Collections_Generic_IEnumerable_int__o *)System_Linq_Enumerable__Take_int_(
                                                            v7,
                                                            1,
                                                            (const MethodInfo_2F4A6FC *)Method_System_Linq_Enumerable_Take_int___);
}