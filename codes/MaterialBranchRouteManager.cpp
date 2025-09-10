void MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  System_Collections_Generic_List_object__o *v3; // x19
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C285D2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    sub_1C2D490(&StringLiteral_6676/*"Fgo_20210908"*/);
    byte_4C285D2 = 1;
  }
  MaterialBranchRouteManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6676/*"Fgo_20210908"*/;
  sub_1C2D434((CGThumbnailListItem_o *)MaterialBranchRouteManager_TypeInfo->static_fields, StringLiteral_6676/*"Fgo_20210908"*/, v1, v2);
  *(_WORD *)&MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  static_fields = MaterialBranchRouteManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->infoList, (int32_t)v3, v5, v6);
}


void MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  __int64 v2; // x1
  MaterialBranchRouteManager_c *v3; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x8
  int32_t size; // w2
  int v6; // w9
  MaterialBranchRouteManager_c *v7; // x0

  if ( (byte_4C285CC & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__);
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    byte_4C285CC = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v1 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->infoList,
         (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v3 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v3 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = v3->static_fields->infoList;
    if ( !infoList )
      sub_1C2D6EC(v3, v2);
    size = infoList->fields._size;
    v6 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v6;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0);
  }
  v7 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v7 = MaterialBranchRouteManager_TypeInfo;
  }
  *(_WORD *)&v7->static_fields->isModfiy = 1;
}


void MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4C285CA & 1) == 0 )
  {
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    byte_4C285CA = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v1);
  if ( System_IO_File__Exists(FilePath, 0) )
    System_IO_File__Delete(FilePath, 0);
}


System_String_o *MaterialBranchRouteManager__GetFilePath(const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C285C9 & 1) == 0 )
  {
    sub_1C2D490(&AndroidUtil_TypeInfo);
    sub_1C2D490(&DatFileName_TypeInfo);
    sub_1C2D490(&StringLiteral_1048/*"/"*/);
    byte_4C285C9 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(35, 0);
  return System_String__Concat_63496112(DatFileSavePath, (System_String_o *)StringLiteral_1048/*"/"*/, FileName, 0);
}


void MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0

  if ( (byte_4C285CB & 1) == 0 )
  {
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    byte_4C285CB = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  MaterialBranchRouteManager__ReadData((const MethodInfo *)v1);
}


bool MaterialBranchRouteManager__IsMaterialSelectedRouteId(int32_t questId, int32_t routeId, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  MaterialBranchRouteManager_c *v8; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C285CD & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
    sub_1C2D490(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    sub_1C2D490(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__);
    sub_1C2D490(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
    byte_4C285CD = 1;
  }
  v5 = sub_1C2D6DC(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_DWORD *)(v5 + 16) = questId;
  *(_DWORD *)(v5 + 20) = routeId;
  v8 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v8 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v8->static_fields->infoList;
  v10 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    0);
  return BasicHelper__Any_object_(
           infoList,
           (System_Func_T__bool__o *)v10,
           (const MethodInfo_30B7CF0 *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
}


bool MaterialBranchRouteManager__IsMaterialSelectedRouteIds(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IList_int__c *v26; // x8
  int32_t v27; // w26
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x25
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  const MethodInfo *v41; // x2
  int32_t v42; // w27
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v44; // x1
  ScriptManager_c *v45; // x8
  System_Collections_ICollection_o *SelectRouteArray; // x0
  System_Int32_array *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  System_Int32_array *v50; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v52; // x22
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v63; // [xsp+18h] [xbp-68h]

  if ( (byte_4C285CE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    sub_1C2D490(&ScriptManager_TypeInfo);
    byte_4C285CE = 1;
  }
  v7 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v7,
    (const MethodInfo_363A780 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_94;
  klass = questIds->klass;
  v11 = *(unsigned __int16 *)&questIds->klass->_2.rank;
  if ( *(_WORD *)&questIds->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v13 = sub_1C7DCA8(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v13)(
          questIds,
          *(_QWORD *)(v13 + 8));
  v63 = v14;
  while ( 1 )
  {
    if ( !v63 )
      sub_1C2D6EC(v14, v15);
    v16 = *(_QWORD *)v63;
    v17 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
    {
      v18 = (int *)(*(_QWORD *)(v16 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = v16 + 16LL * *v18 + 312;
    }
    else
    {
LABEL_16:
      v19 = sub_1C7DCA8(v63, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v19)(v63, *(_QWORD *)(v19 + 8)) & 1) == 0 )
      break;
    v20 = *(_QWORD *)v63;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v22 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_23;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_23:
      v23 = sub_1C7DCA8(v63, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v63, *(_QWORD *)(v23 + 8));
    if ( !routeIds )
      sub_1C2D6EC(v24, v25);
    v26 = routeIds->klass;
    v27 = v24;
    v28 = *(unsigned __int16 *)&routeIds->klass->_2.rank;
    if ( *(_WORD *)&routeIds->klass->_2.rank )
    {
      v29 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v29 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_30;
      }
      v30 = (__int64)&v26->vtable[*v29];
    }
    else
    {
LABEL_30:
      v30 = sub_1C7DCA8(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v30)(
            routeIds,
            *(_QWORD *)(v30 + 8));
    if ( !v32 )
      sub_1C2D6EC(0, v31);
    while ( 1 )
    {
      v33 = *(_QWORD *)v32;
      v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
      {
        v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v34;
          v35 += 4;
          if ( !v34 )
            goto LABEL_37;
        }
        v36 = v33 + 16LL * *v35 + 312;
      }
      else
      {
LABEL_37:
        v36 = sub_1C7DCA8(v32, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
        break;
      v37 = *(_QWORD *)v32;
      v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v39 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_44;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_44:
        v40 = sub_1C7DCA8(v32, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
      }
      v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v27, v42, v41);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v7 )
          sub_1C2D6EC(IsMaterialSelectedRouteId, v44);
        System_Collections_Generic_HashSet_int___Add(
          v7,
          v42,
          (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      else
      {
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        if ( !byte_4C261B2 )
        {
          sub_1C2D490(&ScriptManager_TypeInfo);
          byte_4C261B2 = 1;
        }
        v45 = ScriptManager_TypeInfo;
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          v45 = ScriptManager_TypeInfo;
        }
        if ( v45->static_fields->questId == v27 )
        {
          if ( !v45->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v45);
          SelectRouteArray = (System_Collections_ICollection_o *)ScriptManager__GetSelectRouteArray(0);
          if ( !BasicHelper__IsNullOrEmpty(SelectRouteArray, 0) )
          {
            if ( !ScriptManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            v47 = ScriptManager__GetSelectRouteArray(0);
            v50 = v47;
            if ( !v47 )
              sub_1C2D6EC(0, v48);
            max_length = v47->max_length;
            if ( (int)max_length >= 1 )
            {
              v52 = 0;
              do
              {
                if ( v52 >= (unsigned int)max_length )
                  sub_1C2D6F4(v47, v48, v49);
                if ( v42 == v50->m_Items[v52] )
                {
                  if ( !v7 )
                    sub_1C2D6EC(v47, v48);
                  v47 = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                v7,
                                                v42,
                                                (const MethodInfo_363B984 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                LODWORD(max_length) = v50->max_length;
                ++v52;
              }
              while ( (__int64)v52 < (int)max_length );
            }
          }
        }
      }
    }
    v53 = *(_QWORD *)v32;
    v54 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
      {
        --v54;
        v55 += 4;
        if ( !v54 )
          goto LABEL_76;
      }
      v56 = v53 + 16LL * *v55 + 312;
    }
    else
    {
LABEL_76:
      v56 = sub_1C7DCA8(v32, System_IDisposable_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v32, *(_QWORD *)(v56 + 8));
  }
  v57 = *(_QWORD *)v63;
  v58 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
  {
    v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_88;
    }
    v60 = v57 + 16LL * *v59 + 312;
  }
  else
  {
LABEL_88:
    v60 = sub_1C7DCA8(v63, System_IDisposable_TypeInfo, 0);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v63, *(_QWORD *)(v60 + 8));
  if ( !v7 )
LABEL_94:
    sub_1C2D6EC(v8, v9);
  return v7->fields._count == count;
}


bool MaterialBranchRouteManager__ReadData(const MethodInfo *method)
{
  ManagerConfig_c *v1; // x0
  MaterialBranchRouteManager_c *v3; // x0
  System_String_o *FilePath; // x19
  MaterialBranchRouteManager_c *v5; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryReader_o *v7; // x19
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  MaterialBranchRouteManager_c *v11; // x0
  int v12; // w21
  char v13; // w20
  MaterialBranchRouteManager_c *v14; // x0
  int v15; // w20
  int v16; // w22
  int v17; // w23
  int v18; // w24
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  MaterialBranchRouteManager_c *v24; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 v33; // x0

  if ( (byte_4C285D0 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryReader_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    byte_4C285D0 = 1;
  }
  v1 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v1 = ManagerConfig_TypeInfo;
  }
  if ( v1->static_fields->UseMock )
    return 1;
  v3 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v3);
  if ( !System_IO_File__Exists(FilePath, 0) )
    return 0;
  v5 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  MaterialBranchRouteManager__ClearSaveData((const MethodInfo *)v5);
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v6 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0);
  v7 = (System_IO_BinaryReader_o *)sub_1C2D6DC(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v7, v6, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._22_ReadString.methodPtr)(
                             v7,
                             v7->klass->vtable._22_ReadString.method);
  v11 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v11 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v11->static_fields->SAVE_DATA_VERSION, v10, 0) )
  {
    v12 = 5;
  }
  else
  {
    v13 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._9_ReadBoolean.methodPtr)(
            v7,
            v7->klass->vtable._9_ReadBoolean.method);
    v14 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v14 = MaterialBranchRouteManager_TypeInfo;
    }
    v14->static_fields->isContinueDevice = v13 & 1;
    v15 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
            v7,
            v7->klass->vtable._15_ReadInt32.method);
    if ( v15 >= 1 )
    {
      do
      {
        v16 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v17 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v18 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, const MethodInfo *))v7->klass->vtable._15_ReadInt32.methodPtr)(
                v7,
                v7->klass->vtable._15_ReadInt32.method);
        v19 = sub_1C2D6DC(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
        System_Object___ctor((Il2CppObject *)v19, 0);
        if ( !v19 )
          sub_1C2D6EC(v20, v21);
        *(_DWORD *)(v19 + 16) = v16;
        *(_DWORD *)(v19 + 20) = v17;
        *(_DWORD *)(v19 + 24) = v18;
        v24 = MaterialBranchRouteManager_TypeInfo;
        if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
          v24 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v24->static_fields->infoList;
        if ( !infoList )
          sub_1C2D6EC(0, v21);
        items = infoList->fields._items;
        v27 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1C2D6EC(infoList, v21);
        size = infoList->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v19,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v29[4] = (Il2CppClass *)v19;
          sub_1C2D434((CGThumbnailListItem_o *)(v29 + 4), v19, v22, v23);
        }
        --v15;
      }
      while ( v15 );
    }
    v12 = 8;
  }
  klass = v7->klass;
  v31 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_34;
    }
    v33 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_34:
    v33 = sub_1C7DCA8(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v33)(v7, *(_QWORD *)(v33 + 8));
  return (v12 | 8) == 8;
}


void MaterialBranchRouteManager__SetRouteId(
        int32_t questId,
        int32_t phase,
        int32_t index,
        ScriptManager_MenuRouteInfo_array *routeInfos,
        const MethodInfo *method)
{
  __int64 v9; // x19
  System_Collections_Generic_List_object__o *All; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  ScriptManager_MenuRouteInfo_o *v13; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v15; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v17; // x22
  Il2CppObject *current; // x25
  _BOOL8 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  il2cpp_array_size_t max_length; // x8
  __int64 v23; // x10
  ScriptManager_MenuRouteInfo_o *v24; // x11
  MaterialBranchRouteManager_c *v25; // x0
  __int64 v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // d0
  MaterialBranchRouteManager_c *v30; // x0
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C285CF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
    sub_1C2D490(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    sub_1C2D490(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
    sub_1C2D490(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__);
    sub_1C2D490(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
    byte_4C285CF = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v9 = sub_1C2D6DC(MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_40;
  *(_DWORD *)(v9 + 16) = questId;
  *(_DWORD *)(v9 + 20) = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( LODWORD(routeInfos->max_length) <= index )
    sub_1C2D6F4(All, v11, v12);
  v13 = routeInfos->m_Items[index];
  if ( !v13 )
    goto LABEL_40;
  route = v13->fields.route;
  if ( !route )
    return;
  v15 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v15 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
  v17 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Predicate_object____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    0);
  if ( !infoList )
    goto LABEL_40;
  All = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                       infoList,
                                                       (System_Predicate_T__o *)v17,
                                                       (const MethodInfo_378A294 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    All,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0;
  v36 = v35;
LABEL_13:
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v19 )
      break;
    max_length = routeInfos->max_length;
    if ( (int)max_length >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v23 >= (unsigned int)max_length )
          sub_1C2D6F4(v19, v20, v21);
        v24 = routeInfos->m_Items[v23];
        if ( !v24 )
          sub_1C2D6EC(v19, v20);
        if ( !v36.fields._current )
          sub_1C2D6EC(v19, v20);
        if ( v24->fields.route == LODWORD(v36.fields._current[1].monitor) )
          break;
        if ( (int)++v23 >= (int)max_length )
          goto LABEL_13;
      }
      current = v36.fields._current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v26 = sub_1C2D6DC(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v26, 0);
    if ( v26 )
    {
      v29 = *(_QWORD *)(v9 + 16);
      *(_DWORD *)(v26 + 24) = route;
      *(_QWORD *)(v26 + 16) = v29;
      v30 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v30 = MaterialBranchRouteManager_TypeInfo;
      }
      All = (System_Collections_Generic_List_object__o *)v30->static_fields->infoList;
      if ( All )
      {
        items = All->fields._items;
        v32 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++All->fields._version;
        if ( items )
        {
          size = All->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              All,
              (Il2CppObject *)v26,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            All->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v26;
            sub_1C2D434((CGThumbnailListItem_o *)(v34 + 4), v26, v27, v28);
          }
          goto LABEL_34;
        }
      }
    }
LABEL_40:
    sub_1C2D6EC(All, v11);
  }
  *(_DWORD *)((char *)&off_18 + (_QWORD)current) = route;
  v25 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
LABEL_34:
    v25 = MaterialBranchRouteManager_TypeInfo;
  }
  v25->static_fields->isModfiy = 1;
}


bool MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  MaterialBranchRouteManager_c *v1; // x0
  ManagerConfig_c *v2; // x0
  const MethodInfo *v4; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v6; // x20
  System_IO_BinaryWriter_o *v7; // x19
  __int64 v8; // x1
  MaterialBranchRouteManager_c *v9; // x0
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w20
  __int64 v13; // x1
  int32_t i; // w21
  MaterialBranchRouteManager_c *v15; // x0
  System_Collections_Generic_List_object__o *v16; // x0
  Il2CppObject *Item; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0

  if ( (byte_4C285D1 & 1) == 0 )
  {
    sub_1C2D490(&System_IO_BinaryWriter_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
    sub_1C2D490(&ManagerConfig_TypeInfo);
    sub_1C2D490(&MaterialBranchRouteManager_TypeInfo);
    byte_4C285D1 = 1;
  }
  v1 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v1 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( !v1->static_fields->isModfiy )
    return 0;
  v2 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v2 = ManagerConfig_TypeInfo;
  }
  if ( v2->static_fields->UseMock )
    return 0;
  v4 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v4 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  }
  *((_BYTE *)v4[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialBranchRouteManager__GetFilePath(v4);
  v6 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0);
  v7 = (System_IO_BinaryWriter_o *)sub_1C2D6DC(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_64369912(v7, v6, 0);
  v9 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v9 = MaterialBranchRouteManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1C2D6EC(v9, v8);
  if ( !v7 )
    sub_1C2D6EC(v9, v8);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, const MethodInfo *))v7->klass->vtable._22_Write.methodPtr)(
    v7,
    static_fields->SAVE_DATA_VERSION,
    v7->klass->vtable._22_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, const MethodInfo *))v7->klass->vtable._8_Write.methodPtr)(
    v7,
    MaterialBranchRouteManager_TypeInfo->static_fields->isContinueDevice,
    v7->klass->vtable._8_Write.method);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
    v7,
    (unsigned int)size,
    v7->klass->vtable._17_Write.method);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v15 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v15 = MaterialBranchRouteManager_TypeInfo;
      }
      v16 = (System_Collections_Generic_List_object__o *)v15->static_fields->infoList;
      if ( !v16 )
        sub_1C2D6EC(0, v13);
      Item = System_Collections_Generic_List_object___get_Item(
               v16,
               i,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
      v19 = Item;
      if ( !Item )
        sub_1C2D6EC(0, v18);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(Item[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        HIDWORD(v19[1].klass),
        v7->klass->vtable._17_Write.method);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, const MethodInfo *))v7->klass->vtable._17_Write.methodPtr)(
        v7,
        LODWORD(v19[1].monitor),
        v7->klass->vtable._17_Write.method);
    }
  }
  klass = v7->klass;
  v21 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_27;
    }
    v23 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_27:
    v23 = sub_1C7DCA8(v7, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v23)(v7, *(_QWORD *)(v23 + 8));
  return 1;
}


void MaterialBranchRouteManager_MaterialBranchInfo___ctor(
        MaterialBranchRouteManager_MaterialBranchInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MaterialBranchRouteManager___c__DisplayClass11_0___ctor(
        MaterialBranchRouteManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialBranchRouteManager___c__DisplayClass11_0___SetRouteId_b__0(
        MaterialBranchRouteManager___c__DisplayClass11_0_o *this,
        MaterialBranchRouteManager_MaterialBranchInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.phase == this->fields.phase;
}


void MaterialBranchRouteManager___c__DisplayClass9_0___ctor(
        MaterialBranchRouteManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MaterialBranchRouteManager___c__DisplayClass9_0___IsMaterialSelectedRouteId_b__0(
        MaterialBranchRouteManager___c__DisplayClass9_0_o *this,
        MaterialBranchRouteManager_MaterialBranchInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}