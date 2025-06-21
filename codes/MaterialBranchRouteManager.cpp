void __fastcall MaterialBranchRouteManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B1D7CE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__, v1);
    sub_1BCAFF8(&System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v4);
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_6630/*"Fgo_20210908"*/, v6);
    byte_4B1D7CE = 1;
  }
  MaterialBranchRouteManager_TypeInfo->static_fields->SAVE_DATA_VERSION = (struct System_String_o *)StringLiteral_6630/*"Fgo_20210908"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)MaterialBranchRouteManager_TypeInfo->static_fields, StringLiteral_6630/*"Fgo_20210908"*/, v2, v3);
  *(_WORD *)&MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo___ctor__);
  static_fields = MaterialBranchRouteManager_TypeInfo->static_fields;
  static_fields->infoList = (struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *)v7;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->infoList, (int32_t)v7, v9, v10);
}


void __fastcall MaterialBranchRouteManager___ctor(MaterialBranchRouteManager_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialBranchRouteManager__ClearSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MaterialBranchRouteManager_c *v4; // x0
  __int64 v5; // x1
  MaterialBranchRouteManager_c *v6; // x0
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x8
  int32_t size; // w2
  int v9; // w9
  MaterialBranchRouteManager_c *v10; // x0

  if ( (byte_4B1D7C8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Clear__, v2);
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v3);
    byte_4B1D7C8 = 1;
  }
  v4 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v4 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->infoList,
         (const MethodInfo_302661C *)Method_System_Linq_Enumerable_Any_MaterialBranchRouteManager_MaterialBranchInfo___) )
  {
    v6 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v6 = MaterialBranchRouteManager_TypeInfo;
    }
    infoList = v6->static_fields->infoList;
    if ( !infoList )
      sub_1BCB254(v6, v5);
    size = infoList->fields._size;
    v9 = infoList->fields._version + 1;
    infoList->fields._size = 0;
    infoList->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)infoList->fields._items, 0, size, 0LL);
  }
  v10 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v10 = MaterialBranchRouteManager_TypeInfo;
  }
  *(_WORD *)&v10->static_fields->isModfiy = 1;
}


void __fastcall MaterialBranchRouteManager__DeleteSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0
  System_String_o *FilePath; // x19

  if ( (byte_4B1D7C6 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v1);
    byte_4B1D7C6 = 1;
  }
  v2 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v2);
  if ( System_IO_File__Exists(FilePath, 0LL) )
    System_IO_File__Delete(FilePath, 0LL);
}


System_String_o *__fastcall MaterialBranchRouteManager__GetFilePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B1D7C5 & 1) == 0 )
  {
    sub_1BCAFF8(&AndroidUtil_TypeInfo, v1);
    sub_1BCAFF8(&DatFileName_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v3);
    byte_4B1D7C5 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(35, 0LL);
  return System_String__Concat_62488672(DatFileSavePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
}


void __fastcall MaterialBranchRouteManager__Initialize(const MethodInfo *method)
{
  __int64 v1; // x1
  MaterialBranchRouteManager_c *v2; // x0

  if ( (byte_4B1D7C7 & 1) == 0 )
  {
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v1);
    byte_4B1D7C7 = 1;
  }
  v2 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  MaterialBranchRouteManager__ReadData((const MethodInfo *)v2);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteId(
        int32_t questId,
        int32_t routeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  MaterialBranchRouteManager___c__DisplayClass9_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  MaterialBranchRouteManager_c *v12; // x0
  System_Collections_Generic_List_T__o *infoList; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4B1D7C9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___, *(_QWORD *)&routeId);
    sub_1BCAFF8(&System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo, v5);
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__, v7);
    sub_1BCAFF8(&MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo, v8);
    byte_4B1D7C9 = 1;
  }
  v9 = (MaterialBranchRouteManager___c__DisplayClass9_0_o *)sub_1BCB244(MaterialBranchRouteManager___c__DisplayClass9_0_TypeInfo);
  MaterialBranchRouteManager___c__DisplayClass9_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  v9->fields.questId = questId;
  v9->fields.routeId = routeId;
  v12 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v12 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_T__o *)v12->static_fields->infoList;
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_MaterialBranchRouteManager_MaterialBranchInfo__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_MaterialBranchRouteManager___c__DisplayClass9_0__IsMaterialSelectedRouteId_b__0__,
    0LL);
  return BasicHelper__Any_object_(
           infoList,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_3003F1C *)Method_BasicHelper_Any_MaterialBranchRouteManager_MaterialBranchInfo___);
}


bool __fastcall MaterialBranchRouteManager__IsMaterialSelectedRouteIds(
        System_Collections_Generic_IList_int__o *questIds,
        System_Collections_Generic_IList_int__o *routeIds,
        int32_t count,
        int32_t checkType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_HashSet_int__o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IList_int__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IList_int__c *v35; // x8
  int32_t v36; // w26
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x25
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  const MethodInfo *v50; // x2
  int32_t v51; // w27
  _BOOL8 IsMaterialSelectedRouteId; // x0
  __int64 v53; // x1
  ScriptManager_c *v54; // x8
  System_Collections_ICollection_o *SelectRouteArray; // x0
  System_Int32_array *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  System_Int32_array *v59; // x28
  __int64 v60; // x8
  unsigned __int64 v61; // x22
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v72; // [xsp+18h] [xbp-68h]

  if ( (byte_4B1D7CA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__Add__, routeIds);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int__get_Count__, v8);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v14);
    sub_1BCAFF8(&ScriptManager_TypeInfo, v15);
    byte_4B1D7CA = 1;
  }
  v16 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v16,
    (const MethodInfo_3570C18 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !questIds )
    goto LABEL_94;
  klass = questIds->klass;
  v20 = *(unsigned __int16 *)(&questIds->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&questIds->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1B560(questIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))p_method)(
          questIds,
          *(_QWORD *)(p_method + 8));
  v72 = v23;
  while ( 1 )
  {
    if ( !v72 )
      sub_1BCB254(v23, v24);
    v25 = *(_QWORD *)v72;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_16;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_16:
      v28 = sub_1C1B560(v72, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v72, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v72;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v31 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_23;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_23:
      v32 = sub_1C1B560(v72, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v72, *(_QWORD *)(v32 + 8));
    if ( !routeIds )
      sub_1BCB254(v33, v34);
    v35 = routeIds->klass;
    v36 = v33;
    v37 = *(unsigned __int16 *)(&routeIds->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&routeIds->klass->_2.bitflags2 + 3) )
    {
      v38 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_int__c **)v38 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_30;
      }
      v39 = (__int64)&v35->vtable[*v38].method;
    }
    else
    {
LABEL_30:
      v39 = sub_1C1B560(routeIds, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IList_int__o *, _QWORD))v39)(
            routeIds,
            *(_QWORD *)(v39 + 8));
    if ( !v41 )
      sub_1BCB254(0LL, v40);
    while ( 1 )
    {
      v42 = *(_QWORD *)v41;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_37;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_37:
        v45 = sub_1C1B560(v41, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v41, *(_QWORD *)(v45 + 8)) & 1) == 0 )
        break;
      v46 = *(_QWORD *)v41;
      v47 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_int__c **)v48 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_44;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_44:
        v49 = sub_1C1B560(v41, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
      }
      v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v41, *(_QWORD *)(v49 + 8));
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      IsMaterialSelectedRouteId = MaterialBranchRouteManager__IsMaterialSelectedRouteId(v36, v51, v50);
      if ( IsMaterialSelectedRouteId )
      {
        if ( !v16 )
          sub_1BCB254(IsMaterialSelectedRouteId, v53);
        System_Collections_Generic_HashSet_int___Add(
          v16,
          v51,
          (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      else
      {
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        if ( !byte_4B1B418 )
        {
          sub_1BCAFF8(&ScriptManager_TypeInfo, v53);
          byte_4B1B418 = 1;
        }
        v54 = ScriptManager_TypeInfo;
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
          v54 = ScriptManager_TypeInfo;
        }
        if ( v54->static_fields->questId == v36 )
        {
          if ( !v54->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v54);
          SelectRouteArray = (System_Collections_ICollection_o *)ScriptManager__GetSelectRouteArray(0LL);
          if ( !BasicHelper__IsNullOrEmpty(SelectRouteArray, 0LL) )
          {
            if ( !ScriptManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
            v56 = ScriptManager__GetSelectRouteArray(0LL);
            v59 = v56;
            if ( !v56 )
              sub_1BCB254(0LL, v57);
            v60 = *(_QWORD *)&v56->max_length;
            if ( (int)v60 >= 1 )
            {
              v61 = 0LL;
              do
              {
                if ( v61 >= (unsigned int)v60 )
                  sub_1BCB25C(v56, v57, v58);
                if ( v51 == v59->m_Items[v61 + 1] )
                {
                  if ( !v16 )
                    sub_1BCB254(v56, v57);
                  v56 = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                v16,
                                                v51,
                                                (const MethodInfo_3571E1C *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                LODWORD(v60) = v59->max_length;
                ++v61;
              }
              while ( (__int64)v61 < (int)v60 );
            }
          }
        }
      }
    }
    v62 = *(_QWORD *)v41;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_76;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_76:
      v65 = sub_1C1B560(v41, System_IDisposable_TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v41, *(_QWORD *)(v65 + 8));
  }
  v66 = *(_QWORD *)v72;
  v67 = *(unsigned __int16 *)(*(_QWORD *)v72 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v72 + 302LL) )
  {
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_88;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_88:
    v69 = sub_1C1B560(v72, System_IDisposable_TypeInfo, 0LL);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v72, *(_QWORD *)(v69 + 8));
  if ( !v16 )
LABEL_94:
    sub_1BCB254(v17, v18);
  return v16->fields._count == count;
}


bool __fastcall MaterialBranchRouteManager__ReadData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ManagerConfig_c *v7; // x0
  MaterialBranchRouteManager_c *v9; // x0
  System_String_o *FilePath; // x19
  MaterialBranchRouteManager_c *v11; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryReader_o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x20
  MaterialBranchRouteManager_c *v17; // x0
  int v18; // w21
  char v19; // w20
  MaterialBranchRouteManager_c *v20; // x0
  int v21; // w20
  int32_t v22; // w22
  int32_t v23; // w23
  int32_t v24; // w24
  MaterialBranchRouteManager_MaterialBranchInfo_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  MaterialBranchRouteManager_c *v30; // x0
  System_Collections_Generic_List_object__o *infoList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_IO_BinaryReader_c *klass; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0

  if ( (byte_4B1D7CC & 1) == 0 )
  {
    sub_1BCAFF8(&System_IO_BinaryReader_TypeInfo, v1);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v3);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v4);
    sub_1BCAFF8(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v5);
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v6);
    byte_4B1D7CC = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( v7->static_fields->UseMock )
    return 1;
  v9 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  FilePath = MaterialBranchRouteManager__GetFilePath((const MethodInfo *)v9);
  if ( !System_IO_File__Exists(FilePath, 0LL) )
    return 0;
  v11 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
  MaterialBranchRouteManager__ClearSaveData((const MethodInfo *)v11);
  MaterialBranchRouteManager_TypeInfo->static_fields->isModfiy = 0;
  v12 = (System_IO_Stream_o *)System_IO_File__OpenRead(FilePath, 0LL);
  v13 = (System_IO_BinaryReader_o *)sub_1BCB244(System_IO_BinaryReader_TypeInfo);
  System_IO_BinaryReader___ctor(v13, v12, 0LL);
  if ( !v13 )
    sub_1BCB254(v14, v15);
  v16 = (System_String_o *)((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._22_ReadString.method)(
                             v13,
                             v13->klass->vtable._23_ReadChars.methodPtr);
  v17 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v17 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( System_String__op_Inequality(v17->static_fields->SAVE_DATA_VERSION, v16, 0LL) )
  {
    v18 = 5;
  }
  else
  {
    v19 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._9_ReadBoolean.method)(
            v13,
            v13->klass->vtable._10_ReadByte.methodPtr);
    v20 = MaterialBranchRouteManager_TypeInfo;
    if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      v20 = MaterialBranchRouteManager_TypeInfo;
    }
    v20->static_fields->isContinueDevice = v19 & 1;
    v21 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
            v13,
            v13->klass->vtable._16_ReadUInt32.methodPtr);
    if ( v21 >= 1 )
    {
      do
      {
        v22 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        v23 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        v24 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v13->klass->vtable._15_ReadInt32.method)(
                v13,
                v13->klass->vtable._16_ReadUInt32.methodPtr);
        v25 = (MaterialBranchRouteManager_MaterialBranchInfo_o *)sub_1BCB244(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
        MaterialBranchRouteManager_MaterialBranchInfo___ctor(v25, 0LL);
        if ( !v25 )
          sub_1BCB254(v26, v27);
        v25->fields.questId = v22;
        v25->fields.phase = v23;
        v25->fields.routeId = v24;
        v30 = MaterialBranchRouteManager_TypeInfo;
        if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
          v30 = MaterialBranchRouteManager_TypeInfo;
        }
        infoList = (System_Collections_Generic_List_object__o *)v30->static_fields->infoList;
        if ( !infoList )
          sub_1BCB254(0LL, v27);
        items = infoList->fields._items;
        v33 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++infoList->fields._version;
        if ( !items )
          sub_1BCB254(infoList, v27);
        size = infoList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            infoList,
            (Il2CppObject *)v25,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
        }
        else
        {
          v35 = &items->obj.klass + size;
          infoList->fields._size = size + 1;
          v35[4] = (Il2CppClass *)v25;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 4), (int32_t)v25, v28, v29);
        }
        --v21;
      }
      while ( v21 );
    }
    v18 = 8;
  }
  klass = v13->klass;
  v37 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_34;
    }
    v39 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_34:
    v39 = sub_1C1B560(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v39)(v13, *(_QWORD *)(v39 + 8));
  return (v18 | 8) == 8;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaterialBranchRouteManager__SetRouteId(
        int32_t questId,
        int32_t phase,
        int32_t index,
        ScriptManager_MenuRouteInfo_array *routeInfos,
        const MethodInfo *method)
{
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
  MaterialBranchRouteManager___c__DisplayClass11_0_o *v19; // x19
  System_Collections_Generic_List_object__o *All; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  ScriptManager_MenuRouteInfo_o *v23; // x8
  int32_t route; // w24
  MaterialBranchRouteManager_c *v25; // x0
  System_Collections_Generic_List_object__o *infoList; // x21
  System_Predicate_object__o *v27; // x22
  Il2CppObject *current; // x25
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x8
  __int64 v33; // x10
  ScriptManager_MenuRouteInfo_o *v34; // x11
  MaterialBranchRouteManager_c *v35; // x0
  __int64 v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  MaterialBranchRouteManager___c__DisplayClass11_0_Fields fields; // d0
  MaterialBranchRouteManager_c *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1D7CB & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__,
      *(_QWORD *)&phase);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__,
      v9);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__get_Current__,
      v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__, v12);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__,
      v13);
    sub_1BCAFF8(&MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo, v14);
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v15);
    sub_1BCAFF8(&System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo, v16);
    sub_1BCAFF8(&Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__, v17);
    sub_1BCAFF8(&MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo, v18);
    byte_4B1D7CB = 1;
  }
  memset(&v46, 0, sizeof(v46));
  v19 = (MaterialBranchRouteManager___c__DisplayClass11_0_o *)sub_1BCB244(MaterialBranchRouteManager___c__DisplayClass11_0_TypeInfo);
  MaterialBranchRouteManager___c__DisplayClass11_0___ctor(v19, 0LL);
  if ( !v19 )
    goto LABEL_40;
  v19->fields.questId = questId;
  v19->fields.phase = phase;
  if ( !routeInfos )
    goto LABEL_40;
  if ( routeInfos->max_length <= index )
    sub_1BCB25C(All, v21, v22);
  v23 = routeInfos->m_Items[index];
  if ( !v23 )
    goto LABEL_40;
  route = v23->fields.route;
  if ( !route )
    return;
  v25 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v25 = MaterialBranchRouteManager_TypeInfo;
  }
  infoList = (System_Collections_Generic_List_object__o *)v25->static_fields->infoList;
  v27 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_MaterialBranchRouteManager_MaterialBranchInfo__TypeInfo);
  System_Predicate_object____ctor(
    v27,
    (Il2CppObject *)v19,
    Method_MaterialBranchRouteManager___c__DisplayClass11_0__SetRouteId_b__0__,
    0LL);
  if ( !infoList )
    goto LABEL_40;
  All = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___FindAll(
                                                       infoList,
                                                       (System_Predicate_T__o *)v27,
                                                       (const MethodInfo_36BA2E0 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__FindAll__);
  if ( !All )
    goto LABEL_40;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    All,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__GetEnumerator__);
  current = 0LL;
  v46 = v45;
LABEL_13:
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__MoveNext__);
    if ( !v29 )
      break;
    v32 = *(_QWORD *)&routeInfos->max_length;
    if ( (int)v32 >= 1 )
    {
      v33 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v33 >= (unsigned int)v32 )
          sub_1BCB25C(v29, v30, v31);
        v34 = routeInfos->m_Items[v33];
        if ( !v34 )
          sub_1BCB254(v29, v30);
        if ( !v46.fields._current )
          sub_1BCB254(v29, v30);
        if ( v34->fields.route == LODWORD(v46.fields._current[1].monitor) )
          break;
        if ( (int)++v33 >= (int)v32 )
          goto LABEL_13;
      }
      current = v46.fields._current;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_MaterialBranchRouteManager_MaterialBranchInfo__Dispose__);
  if ( !current )
  {
    v36 = sub_1BCB244(MaterialBranchRouteManager_MaterialBranchInfo_TypeInfo);
    MaterialBranchRouteManager_MaterialBranchInfo___ctor((MaterialBranchRouteManager_MaterialBranchInfo_o *)v36, 0LL);
    if ( v36 )
    {
      fields = v19->fields;
      *(_DWORD *)(v36 + 24) = route;
      *(MaterialBranchRouteManager___c__DisplayClass11_0_Fields *)(v36 + 16) = fields;
      v40 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v40 = MaterialBranchRouteManager_TypeInfo;
      }
      All = (System_Collections_Generic_List_object__o *)v40->static_fields->infoList;
      if ( All )
      {
        items = All->fields._items;
        v42 = Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__Add__;
        ++All->fields._version;
        if ( items )
        {
          size = All->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              All,
              (Il2CppObject *)v36,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            All->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v36;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v44 + 4), v36, v37, v38);
          }
          goto LABEL_34;
        }
      }
    }
LABEL_40:
    sub_1BCB254(All, v21);
  }
  LODWORD(current[1].monitor) = route;
  v35 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
LABEL_34:
    v35 = MaterialBranchRouteManager_TypeInfo;
  }
  v35->static_fields->isModfiy = 1;
}


bool __fastcall MaterialBranchRouteManager__WriteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  MaterialBranchRouteManager_c *v7; // x0
  ManagerConfig_c *v8; // x0
  const MethodInfo *v10; // x0
  System_String_o *FilePath; // x0
  System_IO_Stream_o *v12; // x20
  System_IO_BinaryWriter_o *v13; // x19
  __int64 v14; // x1
  MaterialBranchRouteManager_c *v15; // x0
  struct MaterialBranchRouteManager_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__o *infoList; // x9
  int size; // w20
  __int64 v19; // x1
  int32_t i; // w21
  MaterialBranchRouteManager_c *v21; // x0
  System_Collections_Generic_List_object__o *v22; // x0
  Il2CppObject *Item; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x22
  System_IO_BinaryWriter_c *klass; // x8
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0

  if ( (byte_4B1D7CD & 1) == 0 )
  {
    sub_1BCAFF8(&System_IO_BinaryWriter_TypeInfo, v1);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Count__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__, v4);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v5);
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v6);
    byte_4B1D7CD = 1;
  }
  v7 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v7 = MaterialBranchRouteManager_TypeInfo;
  }
  if ( !v7->static_fields->isModfiy )
    return 0;
  v8 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v8 = ManagerConfig_TypeInfo;
  }
  if ( v8->static_fields->UseMock )
    return 0;
  v10 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v10 = (const MethodInfo *)MaterialBranchRouteManager_TypeInfo;
  }
  *((_BYTE *)v10[2].virtualMethodPointer + 8) = 0;
  FilePath = MaterialBranchRouteManager__GetFilePath(v10);
  v12 = (System_IO_Stream_o *)System_IO_File__OpenWrite(FilePath, 0LL);
  v13 = (System_IO_BinaryWriter_o *)sub_1BCB244(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63360348(v13, v12, 0LL);
  v15 = MaterialBranchRouteManager_TypeInfo;
  if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
    v15 = MaterialBranchRouteManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  infoList = static_fields->infoList;
  if ( !infoList )
    sub_1BCB254(v15, v14);
  if ( !v13 )
    sub_1BCB254(v15, v14);
  size = infoList->fields._size;
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, struct System_String_o *, void *))v13->klass->vtable._22_Write.method)(
    v13,
    static_fields->SAVE_DATA_VERSION,
    v13->klass[1]._1.image);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, bool, Il2CppMethodPointer))v13->klass->vtable._8_Write.method)(
    v13,
    MaterialBranchRouteManager_TypeInfo->static_fields->isContinueDevice,
    v13->klass->vtable._9_Write.methodPtr);
  ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
    v13,
    (unsigned int)size,
    v13->klass->vtable._18_Write.methodPtr);
  if ( size >= 1 )
  {
    for ( i = 0; i != size; ++i )
    {
      v21 = MaterialBranchRouteManager_TypeInfo;
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
        v21 = MaterialBranchRouteManager_TypeInfo;
      }
      v22 = (System_Collections_Generic_List_object__o *)v21->static_fields->infoList;
      if ( !v22 )
        sub_1BCB254(0LL, v19);
      Item = System_Collections_Generic_List_object___get_Item(
               v22,
               i,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MaterialBranchRouteManager_MaterialBranchInfo__get_Item__);
      v25 = Item;
      if ( !Item )
        sub_1BCB254(0LL, v24);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[1].klass),
        v13->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        HIDWORD(v25[1].klass),
        v13->klass->vtable._18_Write.methodPtr);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(v25[1].monitor),
        v13->klass->vtable._18_Write.methodPtr);
    }
  }
  klass = v13->klass;
  v27 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_27;
    }
    v29 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_27:
    v29 = sub_1C1B560(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v29)(v13, *(_QWORD *)(v29 + 8));
  return 1;
}


void __fastcall MaterialBranchRouteManager_MaterialBranchInfo___ctor(
        MaterialBranchRouteManager_MaterialBranchInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MaterialBranchRouteManager___c__DisplayClass11_0___ctor(
        MaterialBranchRouteManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialBranchRouteManager___c__DisplayClass11_0___SetRouteId_b__0(
        MaterialBranchRouteManager___c__DisplayClass11_0_o *this,
        MaterialBranchRouteManager_MaterialBranchInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.phase == this->fields.phase;
}


void __fastcall MaterialBranchRouteManager___c__DisplayClass9_0___ctor(
        MaterialBranchRouteManager___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MaterialBranchRouteManager___c__DisplayClass9_0___IsMaterialSelectedRouteId_b__0(
        MaterialBranchRouteManager___c__DisplayClass9_0_o *this,
        MaterialBranchRouteManager_MaterialBranchInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.routeId == this->fields.routeId;
}