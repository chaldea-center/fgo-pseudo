void DialogMessageMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C56BC0 & 1) == 0 )
  {
    sub_1C3E564(&DialogMessageMaster_TypeInfo);
    sub_1C3E564(&StringLiteral_18630/*"dialogMessage_{0}_{1}"*/);
    sub_1C3E564(&StringLiteral_23048/*"remindDialogMessage_{0}_{1}"*/);
    byte_4C56BC0 = 1;
  }
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_18630/*"dialogMessage_{0}_{1}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)DialogMessageMaster_TypeInfo->static_fields, StringLiteral_18630/*"dialogMessage_{0}_{1}"*/, v1, v2);
  v3 = StringLiteral_23048/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_23048/*"remindDialogMessage_{0}_{1}"*/;
  sub_1C3E508((CGThumbnailListItem_o *)&static_fields->SAVE_REMIND_KEY, v3, v5, v6);
}


void DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C56BBA & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
    byte_4C56BBA = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_33B0C34 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
}


void DialogMessageMaster__DeleteContinueData(DialogMessageMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_Generic_IEnumerator_T__c *v10; // x8
  __int64 v11; // x9
  int32_t *v12; // x10
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  _DWORD *v21; // x20
  DialogMessageMaster_c *v22; // x0
  System_String_o *SAVE_KEY; // x21
  Il2CppObject *v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x5
  __int64 v29; // x6
  __int64 v30; // x7
  Il2CppObject *v31; // x2
  System_String_o *v32; // x0
  System_String_o *SAVE_REMIND_KEY; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x5
  __int64 v38; // x6
  __int64 v39; // x7
  Il2CppObject *v40; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  Il2CppObject *v47; // x2
  System_String_o *v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0
  int v53; // [xsp+10h] [xbp-60h] BYREF
  int v54; // [xsp+14h] [xbp-5Ch] BYREF
  int v55; // [xsp+18h] [xbp-58h] BYREF
  int v56; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C56BBB & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_1C3E564(&DialogMessageMaster_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    byte_4C56BBB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3E7C0(0, method);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v4);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_9;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v9 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v9)(
            Enumerator,
            *(_QWORD *)(v9 + 8))
        & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = &v10->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DialogMessageEntity__c **)v12 - 1) != System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo )
      {
        --v11;
        v12 += 4;
        if ( !v11 )
          goto LABEL_16;
      }
      v13 = (__int64)&v10->vtable[*v12];
    }
    else
    {
LABEL_16:
      v13 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
    }
    v21 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                      Enumerator,
                      *(_QWORD *)(v13 + 8));
    v22 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v22 = DialogMessageMaster_TypeInfo;
    }
    if ( !v21 )
      sub_1C3E7C0(v22, v14);
    SAVE_KEY = v22->static_fields->SAVE_KEY;
    v56 = v21[4];
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56, v15, v16, v17, v18, v19, v20);
    v55 = v21[17];
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v55, v25, v26, v27, v28, v29, v30);
    v32 = System_String__Format_63677760(SAVE_KEY, v24, v31, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v32, 0);
    SAVE_REMIND_KEY = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
    v54 = v21[4];
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v34, v35, v36, v37, v38, v39);
    v53 = v21[19];
    v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v41, v42, v43, v44, v45, v46);
    v48 = System_String__Format_63677760(SAVE_REMIND_KEY, v40, v47, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v48, 0);
  }
  v49 = Enumerator->klass;
  v50 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v51 = &v49->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_26;
    }
    v52 = (__int64)&v49->vtable[*v51];
  }
  else
  {
LABEL_26:
    v52 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(Enumerator, *(_QWORD *)(v52 + 8));
}


DialogMessageEntity_array *DialogMessageMaster__GetDialogList(
        DialogMessageMaster_o *this,
        int32_t openType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  int64_t Time; // x23
  DialogMessageEntity_o *v7; // x0
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  DialogMessageEntity_o *v21; // x0
  const MethodInfo *v22; // x2
  DialogMessageEntity_o *v23; // x24
  const MethodInfo *v24; // x2
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w4
  const MethodInfo *v29; // x5
  _BOOL8 IsOpenCondition; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  DialogMessageMaster___c_c *v42; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v44; // x21
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3

  if ( (byte_4C56BBC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_1C3E564(&System_Comparison_DialogMessageEntity__TypeInfo);
    sub_1C3E564(&DialogMessageEntity_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    sub_1C3E564(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__);
    sub_1C3E564(&DialogMessageMaster___c_TypeInfo);
    byte_4C56BBC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v7 = (DialogMessageEntity_o *)sub_1C3E7B0(DialogMessageEntity_TypeInfo);
  DialogMessageEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_334C9A0 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3E7C0(0, v11);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_11;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v16 = sub_1C8ED7C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DialogMessageEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_1C8ED7C(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
    }
    v21 = (DialogMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                     Enumerator,
                                     *(_QWORD *)(v20 + 8));
    v23 = v21;
    if ( v21 )
    {
      if ( v21->fields.dialogOpenType == openType
        && DialogMessageEntity__IsOpenTime(v21, Time, v22)
        && !DialogMessageMaster__IsSavedAsSeen(this, v23, v24) )
      {
        IsOpenCondition = DialogMessageEntity__IsOpenCondition(v23, v25, v26, v27, v28, v29);
        if ( IsOpenCondition )
        {
          if ( !v5 )
            sub_1C3E7C0(IsOpenCondition, v31);
          items = v5->fields._items;
          v35 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C3E7C0(IsOpenCondition, v31);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v23,
              *(const MethodInfo_37B5460 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
          }
          else
          {
            v37 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v37[4] = (Il2CppClass *)v23;
            sub_1C3E508((CGThumbnailListItem_o *)(v37 + 4), (int32_t)v23, v32, v33);
          }
        }
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_34;
    }
    v41 = (__int64)&v38->vtable[*v40];
  }
  else
  {
LABEL_34:
    v41 = sub_1C8ED7C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                             Enumerator,
                                                             *(_QWORD *)(v41 + 8));
  v42 = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    v42 = DialogMessageMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v42->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = DialogMessageMaster___c_TypeInfo;
    }
    v44 = (Il2CppObject *)v42->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C3E7B0(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v44, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v46, v47);
  }
  if ( !v5 )
LABEL_44:
    sub_1C3E7C0(list, v9);
  System_Collections_Generic_List_object___Sort_58421028(
    v5,
    _9__6_0,
    (const MethodInfo_37B6F24 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_37B6FB8 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
}


bool DialogMessageMaster__IsSavedAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  DialogMessageMaster_o *v9; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v11; // x0
  System_String_o *v12; // x20
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  System_Collections_Generic_List_int__o *seenList; // x0
  DialogMessageMaster_c *v23; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x5
  __int64 v30; // x6
  __int64 v31; // x7
  Il2CppObject *v32; // x0
  System_String_o *v33; // x0
  int32_t Int; // w20
  DialogMessageEntity_o *Time; // x0
  const MethodInfo *v36; // x4
  bool IsOpenTimeInSpecifiedTimeRange; // w0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  DialogMessageMaster_c *v44; // x0
  System_String_o *v45; // x20
  Il2CppObject *v46; // x21
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x0
  System_String_o *v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x5
  __int64 v59; // x6
  __int64 v60; // x7
  DialogMessageMaster_c *v61; // x0
  System_String_o *SAVE_REMIND_KEY; // x20
  Il2CppObject *v63; // x21
  __int64 v64; // x2
  __int64 v65; // x3
  __int64 v66; // x4
  __int64 v67; // x5
  __int64 v68; // x6
  __int64 v69; // x7
  Il2CppObject *v70; // x0
  System_String_o *v71; // x0
  __int64 v72; // x2
  __int64 v73; // x3
  __int64 v74; // x4
  __int64 v75; // x5
  __int64 v76; // x6
  __int64 v77; // x7
  DialogMessageMaster_c *v78; // x0
  System_String_o *v79; // x20
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  __int64 v83; // x5
  __int64 v84; // x6
  __int64 v85; // x7
  Il2CppObject *v86; // x21
  System_Int32_c *v87; // x0
  int32_t *p_openedAt; // x1
  DialogMessageMaster_c *v89; // x0
  System_String_o *v90; // x20
  Il2CppObject *v91; // x21
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  __int64 v95; // x5
  __int64 v96; // x6
  __int64 v97; // x7
  Il2CppObject *v98; // x0
  System_String_o *v99; // x0
  __int64 v100; // x2
  __int64 v101; // x3
  __int64 v102; // x4
  __int64 v103; // x5
  __int64 v104; // x6
  __int64 v105; // x7
  Il2CppObject *v106; // x0
  System_String_o *v107; // x0
  int32_t remindAt; // [xsp+0h] [xbp-40h] BYREF
  int32_t v110; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t openedAt; // [xsp+8h] [xbp-38h] BYREF
  int32_t id; // [xsp+Ch] [xbp-34h] BYREF

  v9 = this;
  if ( (byte_4C56BBF & 1) == 0 )
  {
    sub_1C3E564(&DialogMessageMaster_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    this = (DialogMessageMaster_o *)sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C56BBF = 1;
  }
  if ( !entity )
    sub_1C3E7C0(this, entity);
  frequencyType = entity->fields.frequencyType;
  if ( frequencyType == 7 )
  {
    v23 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v23 = DialogMessageMaster_TypeInfo;
    }
    SAVE_KEY = v23->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4, v5, v6, v7);
    openedAt = entity->fields.openedAt;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v26, v27, v28, v29, v30, v31);
    v33 = System_String__Format_63677760(SAVE_KEY, v25, v32, 0);
    Int = UnityEngine_PlayerPrefs__GetInt(v33, 0, 0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = (DialogMessageEntity_o *)NetworkManager__getTime(0);
    IsOpenTimeInSpecifiedTimeRange = DialogMessageEntity__IsOpenTimeInSpecifiedTimeRange(
                                       Time,
                                       entity->fields.remindAt,
                                       entity->fields.closedAt,
                                       (int64_t)Time,
                                       v36);
    if ( Int < 1 )
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_34;
      v61 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v61 = DialogMessageMaster_TypeInfo;
      }
      SAVE_REMIND_KEY = v61->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v38, v39, v40, v41, v42, v43);
      openedAt = entity->fields.remindAt;
      v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v64, v65, v66, v67, v68, v69);
      v71 = System_String__Format_63677760(SAVE_REMIND_KEY, v63, v70, 0);
      if ( UnityEngine_PlayerPrefs__GetInt(v71, 0, 0) > 0 )
        goto LABEL_34;
      v78 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v78 = DialogMessageMaster_TypeInfo;
      }
      v79 = v78->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v72, v73, v74, v75, v76, v77);
      v87 = int_TypeInfo;
      p_openedAt = &openedAt;
      openedAt = entity->fields.remindAt;
    }
    else
    {
      if ( !IsOpenTimeInSpecifiedTimeRange )
        goto LABEL_22;
      v44 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v44 = DialogMessageMaster_TypeInfo;
      }
      v45 = v44->static_fields->SAVE_REMIND_KEY;
      id = entity->fields.id;
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v38, v39, v40, v41, v42, v43);
      openedAt = entity->fields.remindAt;
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v47, v48, v49, v50, v51, v52);
      v54 = System_String__Format_63677760(v45, v46, v53, 0);
      if ( UnityEngine_PlayerPrefs__GetInt(v54, 0, 0) > 0 )
      {
LABEL_22:
        LOBYTE(seenList) = 1;
        return (char)seenList;
      }
      v89 = DialogMessageMaster_TypeInfo;
      if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
        v89 = DialogMessageMaster_TypeInfo;
      }
      v90 = v89->static_fields->SAVE_KEY;
      id = entity->fields.id;
      v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, v55, v56, v57, v58, v59, v60);
      openedAt = entity->fields.openedAt;
      v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v92, v93, v94, v95, v96, v97);
      v99 = System_String__Format_63677760(v90, v91, v98, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v99, 0);
      v79 = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
      v110 = entity->fields.id;
      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110, v100, v101, v102, v103, v104, v105);
      v87 = int_TypeInfo;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v106 = (Il2CppObject *)j_il2cpp_value_box_0(v87, p_openedAt, v80, v81, v82, v83, v84, v85);
    v107 = System_String__Format_63677760(v79, v86, v106, 0);
    UnityEngine_PlayerPrefs__SetInt(v107, 1, 0);
LABEL_34:
    LOBYTE(seenList) = 0;
    return (char)seenList;
  }
  if ( frequencyType != 3 )
  {
    if ( frequencyType != 1 )
      goto LABEL_34;
    v11 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v11 = DialogMessageMaster_TypeInfo;
    }
    v12 = v11->static_fields->SAVE_KEY;
    id = entity->fields.id;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4, v5, v6, v7);
    openedAt = entity->fields.openedAt;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v14, v15, v16, v17, v18, v19);
    v21 = System_String__Format_63677760(v12, v13, v20, 0);
    if ( UnityEngine_PlayerPrefs__GetInt(v21, 0, 0) < 1 )
      goto LABEL_34;
    goto LABEL_22;
  }
  seenList = v9->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
  return (char)seenList;
}


void DialogMessageMaster__SaveAsSeen(
        DialogMessageMaster_o *this,
        DialogMessageEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  DialogMessageEntity_o *v8; // x19
  DialogMessageMaster_o *v9; // x20
  int32_t frequencyType; // w8
  DialogMessageMaster_c *v11; // x0
  System_String_o *SAVE_KEY; // x20
  Il2CppObject *v13; // x21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x5
  __int64 v18; // x6
  __int64 v19; // x7
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  CGThumbnailListItem_o *p_seenList; // x20
  DialogMessageMaster_o *seenList; // t1
  System_Collections_Generic_List_int__o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x8
  _QWORD *v28; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t id; // [xsp+Ch] [xbp-24h] BYREF

  v8 = entity;
  v9 = this;
  if ( (byte_4C56BBE & 1) == 0 )
  {
    sub_1C3E564(&DialogMessageMaster_TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    this = (DialogMessageMaster_o *)sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C56BBE = 1;
  }
  if ( !v8 )
    goto LABEL_17;
  frequencyType = v8->fields.frequencyType;
  if ( frequencyType != 7 )
  {
    if ( frequencyType != 3 )
    {
      if ( frequencyType != 1 )
        return;
      goto LABEL_7;
    }
    seenList = (DialogMessageMaster_o *)v9->fields.seenList;
    p_seenList = (CGThumbnailListItem_o *)&v9->fields.seenList;
    this = seenList;
    if ( seenList
      || (v24 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v24,
            (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (CGThumbnailListItem_c *)v24,
          sub_1C3E508(p_seenList, (int32_t)v24, v25, v26),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0) )
    {
      entity = (DialogMessageEntity_o *)(unsigned int)v8->fields.id;
      v27 = *(_QWORD *)&this->fields._MasterKind_k__BackingField;
      v28 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields._MasterName_k__BackingField);
      if ( v27 )
      {
        MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v27 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            (int32_t)entity,
            *(const MethodInfo_379843C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_DWORD *)(v27 + 4 * MasterName_k__BackingField_low + 32) = (_DWORD)entity;
        }
        return;
      }
    }
LABEL_17:
    sub_1C3E7C0(this, entity);
  }
LABEL_7:
  v11 = DialogMessageMaster_TypeInfo;
  if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
    v11 = DialogMessageMaster_TypeInfo;
  }
  SAVE_KEY = v11->static_fields->SAVE_KEY;
  id = v8->fields.id;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &id, method, v3, v4, v5, v6, v7);
  openedAt = v8->fields.openedAt;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v14, v15, v16, v17, v18, v19);
  v21 = System_String__Format_63677760(SAVE_KEY, v13, v20, 0);
  UnityEngine_PlayerPrefs__SetInt(v21, 1, 0);
}


void DialogMessageMaster__ShowAvailables(
        DialogMessageMaster_o *this,
        int32_t opType,
        System_Action_o *callback,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  DialogMessageEntity_array *DialogList; // x1
  const MethodInfo *v11; // x4

  DialogList = DialogMessageMaster__GetDialogList(this, opType, (const MethodInfo *)callback);
  DialogMessageMaster__ShowChain(this, DialogList, 0, callback, v11);
}


void DialogMessageMaster__ShowChain(
        DialogMessageMaster_o *this,
        DialogMessageEntity_array *entitys,
        int32_t idx,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  __int64 v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x8
  __int64 v20; // x9
  int v21; // w10
  DialogMessageEntity_o *v22; // x20
  System_Action_o *v23; // x21
  const MethodInfo *v24; // x2

  if ( (byte_4C56BBD & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__);
    sub_1C3E564(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
    byte_4C56BBD = 1;
  }
  v9 = sub_1C3E7B0(DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = entitys;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 24), (int32_t)entitys, v14, v15);
  *(_QWORD *)(v9 + 40) = callBack;
  v16 = v9 + 40;
  *(_DWORD *)(v9 + 32) = idx;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callBack, v17, v18);
  v19 = *(_QWORD *)(v9 + 24);
  if ( !v19 )
    goto LABEL_11;
  v20 = *(int *)(v9 + 32);
  v21 = *(_DWORD *)(v19 + 24);
  if ( (int)v20 < v21 )
  {
    if ( (unsigned int)v20 >= v21 )
      sub_1C3E7C8(v10, v11);
    v22 = *(DialogMessageEntity_o **)(v19 + 8 * v20 + 32);
    v23 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)v9, Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__, 0);
    if ( v22 )
    {
      DialogMessageEntity__Open(v22, v23, v24);
      return;
    }
LABEL_11:
    sub_1C3E7C0(v10, v11);
  }
  if ( !*(_QWORD *)v16 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v16 + 64LL),
    *(_QWORD *)(*(_QWORD *)v16 + 40LL));
}


void DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C56BC1 & 1) == 0 )
  {
    sub_1C3E564(&DialogMessageMaster___c_TypeInfo);
    byte_4C56BC1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)DialogMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void DialogMessageMaster___c___ctor(DialogMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t DialogMessageMaster___c___GetDialogList_b__6_0(
        DialogMessageMaster___c_o *this,
        DialogMessageEntity_o *a,
        DialogMessageEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C3E7C0(this, a);
  return b->fields.priority - a->fields.priority;
}


void DialogMessageMaster___c__DisplayClass8_0___ctor(
        DialogMessageMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DialogMessageMaster___c__DisplayClass8_0___ShowChain_b__0(
        DialogMessageMaster___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct DialogMessageEntity_array *entitys; // x8
  __int64 idx; // x9
  DialogMessageMaster___c__DisplayClass8_0_o *v5; // x19
  const MethodInfo *v6; // x4

  entitys = this->fields.entitys;
  if ( !entitys )
    goto LABEL_6;
  idx = this->fields.idx;
  v5 = this;
  if ( (unsigned int)idx >= LODWORD(entitys->max_length) )
    sub_1C3E7C8(this, method);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0) )
  {
LABEL_6:
    sub_1C3E7C0(this, method);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}