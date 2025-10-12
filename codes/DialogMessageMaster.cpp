void DialogMessageMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct DialogMessageMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C37820 & 1) == 0 )
  {
    sub_1C32C20(&DialogMessageMaster_TypeInfo);
    sub_1C32C20(&StringLiteral_18609/*"dialogMessage_{0}_{1}"*/);
    sub_1C32C20(&StringLiteral_23025/*"remindDialogMessage_{0}_{1}"*/);
    byte_4C37820 = 1;
  }
  DialogMessageMaster_TypeInfo->static_fields->SAVE_KEY = (struct System_String_o *)StringLiteral_18609/*"dialogMessage_{0}_{1}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)DialogMessageMaster_TypeInfo->static_fields, StringLiteral_18609/*"dialogMessage_{0}_{1}"*/, v1, v2);
  v3 = StringLiteral_23025/*"remindDialogMessage_{0}_{1}"*/;
  static_fields = DialogMessageMaster_TypeInfo->static_fields;
  static_fields->SAVE_REMIND_KEY = (struct System_String_o *)StringLiteral_23025/*"remindDialogMessage_{0}_{1}"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->SAVE_REMIND_KEY, v3, v5, v6);
}


void DialogMessageMaster___ctor(DialogMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3781A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
    byte_4C3781A = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    234,
    (const MethodInfo_3394514 *)Method_DataMasterBase_DialogMessageMaster__DialogMessageEntity__int___ctor__);
}


void DialogMessageMaster__DeleteContinueData(DialogMessageMaster_o *this, const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_Generic_IEnumerator_T__c *v9; // x8
  __int64 v10; // x9
  int32_t *v11; // x10
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  _DWORD *v19; // x20
  DialogMessageMaster_c *v20; // x0
  System_String_o *SAVE_KEY; // x21
  Il2CppObject *v22; // x22
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  __int64 v26; // x5
  __int64 v27; // x6
  __int64 v28; // x7
  Il2CppObject *v29; // x2
  System_String_o *v30; // x0
  System_String_o *SAVE_REMIND_KEY; // x21
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x5
  __int64 v36; // x6
  __int64 v37; // x7
  Il2CppObject *v38; // x22
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x2
  System_String_o *v46; // x0
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  int v51; // [xsp+10h] [xbp-60h] BYREF
  int v52; // [xsp+14h] [xbp-5Ch] BYREF
  int v53; // [xsp+18h] [xbp-58h] BYREF
  int v54; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C3781B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_1C32C20(&DialogMessageMaster_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    byte_4C3781B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_9;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v8 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v8)(
            Enumerator,
            *(_QWORD *)(v8 + 8))
        & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = &v9->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DialogMessageEntity__c **)v11 - 1) != System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo )
      {
        --v10;
        v11 += 4;
        if ( !v10 )
          goto LABEL_16;
      }
      v12 = (__int64)&v9->vtable[*v11];
    }
    else
    {
LABEL_16:
      v12 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
                      Enumerator,
                      *(_QWORD *)(v12 + 8));
    v20 = DialogMessageMaster_TypeInfo;
    if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
      v20 = DialogMessageMaster_TypeInfo;
    }
    if ( !v19 )
      sub_1C32E7C(v20);
    SAVE_KEY = v20->static_fields->SAVE_KEY;
    v54 = v19[4];
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v13, v14, v15, v16, v17, v18);
    v53 = v19[17];
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v23, v24, v25, v26, v27, v28);
    v30 = System_String__Format_63559836(SAVE_KEY, v22, v29, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v30, 0);
    SAVE_REMIND_KEY = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
    v52 = v19[4];
    v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v52, v32, v33, v34, v35, v36, v37);
    v51 = v19[19];
    v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v51, v39, v40, v41, v42, v43, v44);
    v46 = System_String__Format_63559836(SAVE_REMIND_KEY, v38, v45, 0);
    UnityEngine_PlayerPrefs__DeleteKey(v46, 0);
  }
  v47 = Enumerator->klass;
  v48 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v49 = &v47->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_26;
    }
    v50 = (__int64)&v47->vtable[*v49];
  }
  else
  {
LABEL_26:
    v50 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(Enumerator, *(_QWORD *)(v50 + 8));
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  DialogMessageEntity_o *v19; // x0
  const MethodInfo *v20; // x2
  DialogMessageEntity_o *v21; // x24
  const MethodInfo *v22; // x2
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w4
  const MethodInfo *v27; // x5
  _BOOL8 IsOpenCondition; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  DialogMessageMaster___c_c *v39; // x8
  System_Comparison_T__o *_9__6_0; // x20
  Il2CppObject *v41; // x21
  struct DialogMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3

  if ( (byte_4C3781C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
    sub_1C32C20(&System_Comparison_DialogMessageEntity__TypeInfo);
    sub_1C32C20(&DialogMessageEntity_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_DialogMessageEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_DialogMessageMaster___c__GetDialogList_b__6_0__);
    sub_1C32C20(&DialogMessageMaster___c_TypeInfo);
    byte_4C3781C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_DialogMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_DialogMessageEntity___ctor__);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v7 = (DialogMessageEntity_o *)sub_1C32E6C(DialogMessageEntity_TypeInfo);
  DialogMessageEntity___ctor(v7, v8);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_DialogMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_11;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v14 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DialogMessageEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_DialogMessageEntity__TypeInfo, 0);
    }
    v19 = (DialogMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                     Enumerator,
                                     *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( v19 )
    {
      if ( v19->fields.dialogOpenType == openType
        && DialogMessageEntity__IsOpenTime(v19, Time, v20)
        && !DialogMessageMaster__IsSavedAsSeen(this, v21, v22) )
      {
        IsOpenCondition = DialogMessageEntity__IsOpenCondition(v21, v23, v24, v25, v26, v27);
        if ( IsOpenCondition )
        {
          if ( !v5 )
            sub_1C32E7C(IsOpenCondition);
          items = v5->fields._items;
          v32 = Method_System_Collections_Generic_List_DialogMessageEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C32E7C(IsOpenCondition);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              (Il2CppObject *)v21,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v21;
            sub_1C32BC4((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v21, v29, v30);
          }
        }
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_34;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_34:
    v38 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                                                             Enumerator,
                                                             *(_QWORD *)(v38 + 8));
  v39 = DialogMessageMaster___c_TypeInfo;
  if ( !DialogMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster___c_TypeInfo);
    v39 = DialogMessageMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Comparison_T__o *)v39->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = DialogMessageMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__6_0 = (System_Comparison_T__o *)sub_1C32E6C(System_Comparison_DialogMessageEntity__TypeInfo);
    System_Comparison_object____ctor(_9__6_0, v41, Method_DialogMessageMaster___c__GetDialogList_b__6_0__, 0);
    static_fields = DialogMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Comparison_DialogMessageEntity__o *)_9__6_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v43, v44);
  }
  if ( !v5 )
LABEL_44:
    sub_1C32E7C(list);
  System_Collections_Generic_List_object___Sort_58303104(
    v5,
    _9__6_0,
    (const MethodInfo_379A280 *)Method_System_Collections_Generic_List_DialogMessageEntity__Sort__);
  return (DialogMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v5,
                                        (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_DialogMessageEntity__ToArray__);
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
  if ( (byte_4C3781F & 1) == 0 )
  {
    sub_1C32C20(&DialogMessageMaster_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    this = (DialogMessageMaster_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3781F = 1;
  }
  if ( !entity )
    sub_1C32E7C(this);
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
    v33 = System_String__Format_63559836(SAVE_KEY, v25, v32, 0);
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
      v71 = System_String__Format_63559836(SAVE_REMIND_KEY, v63, v70, 0);
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
      v54 = System_String__Format_63559836(v45, v46, v53, 0);
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
      v99 = System_String__Format_63559836(v90, v91, v98, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v99, 0);
      v79 = DialogMessageMaster_TypeInfo->static_fields->SAVE_REMIND_KEY;
      v110 = entity->fields.id;
      v86 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v110, v100, v101, v102, v103, v104, v105);
      v87 = int_TypeInfo;
      p_openedAt = &remindAt;
      remindAt = entity->fields.remindAt;
    }
    v106 = (Il2CppObject *)j_il2cpp_value_box_0(v87, p_openedAt, v80, v81, v82, v83, v84, v85);
    v107 = System_String__Format_63559836(v79, v86, v106, 0);
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
    v21 = System_String__Format_63559836(v12, v13, v20, 0);
    if ( UnityEngine_PlayerPrefs__GetInt(v21, 0, 0) < 1 )
      goto LABEL_34;
    goto LABEL_22;
  }
  seenList = v9->fields.seenList;
  if ( seenList )
    LOBYTE(seenList) = System_Collections_Generic_List_int___Contains(
                         seenList,
                         entity->fields.id,
                         (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__);
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
  int32_t id; // w1
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 MasterName_k__BackingField_low; // x10
  int32_t openedAt; // [xsp+8h] [xbp-28h] BYREF
  int32_t v32; // [xsp+Ch] [xbp-24h] BYREF

  v9 = this;
  if ( (byte_4C3781E & 1) == 0 )
  {
    sub_1C32C20(&DialogMessageMaster_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    this = (DialogMessageMaster_o *)sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3781E = 1;
  }
  if ( !entity )
    goto LABEL_17;
  frequencyType = entity->fields.frequencyType;
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
      || (v24 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo),
          System_Collections_Generic_List_int____ctor(
            v24,
            (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__),
          p_seenList->klass = (CGThumbnailListItem_c *)v24,
          sub_1C32BC4(p_seenList, (int32_t)v24, v25, v26),
          (this = (DialogMessageMaster_o *)p_seenList->klass) != 0) )
    {
      id = entity->fields.id;
      v28 = *(_QWORD *)&this->fields._MasterKind_k__BackingField;
      v29 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(this->fields._MasterName_k__BackingField);
      if ( v28 )
      {
        MasterName_k__BackingField_low = SLODWORD(this->fields._MasterName_k__BackingField);
        if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(v28 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            id,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
          *(_DWORD *)(v28 + 4 * MasterName_k__BackingField_low + 32) = id;
        }
        return;
      }
    }
LABEL_17:
    sub_1C32E7C(this);
  }
LABEL_7:
  v11 = DialogMessageMaster_TypeInfo;
  if ( !DialogMessageMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DialogMessageMaster_TypeInfo);
    v11 = DialogMessageMaster_TypeInfo;
  }
  SAVE_KEY = v11->static_fields->SAVE_KEY;
  v32 = entity->fields.id;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32, method, v3, v4, v5, v6, v7);
  openedAt = entity->fields.openedAt;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &openedAt, v14, v15, v16, v17, v18, v19);
  v21 = System_String__Format_63559836(SAVE_KEY, v13, v20, 0);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x8
  __int64 v19; // x9
  int v20; // w10
  DialogMessageEntity_o *v21; // x20
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x2

  if ( (byte_4C3781D & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__);
    sub_1C32C20(&DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
    byte_4C3781D = 1;
  }
  v9 = sub_1C32E6C(DialogMessageMaster___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 24) = entitys;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 24), (int32_t)entitys, v13, v14);
  *(_QWORD *)(v9 + 40) = callBack;
  v15 = v9 + 40;
  *(_DWORD *)(v9 + 32) = idx;
  sub_1C32BC4((CGThumbnailListItem_o *)(v9 + 40), (int32_t)callBack, v16, v17);
  v18 = *(_QWORD *)(v9 + 24);
  if ( !v18 )
    goto LABEL_11;
  v19 = *(int *)(v9 + 32);
  v20 = *(_DWORD *)(v18 + 24);
  if ( (int)v19 < v20 )
  {
    if ( (unsigned int)v19 >= v20 )
      sub_1C32E84(v10);
    v21 = *(DialogMessageEntity_o **)(v18 + 8 * v19 + 32);
    v22 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)v9, Method_DialogMessageMaster___c__DisplayClass8_0__ShowChain_b__0__, 0);
    if ( v21 )
    {
      DialogMessageEntity__Open(v21, v22, v23);
      return;
    }
LABEL_11:
    sub_1C32E7C(v10);
  }
  if ( !*(_QWORD *)v15 )
    goto LABEL_11;
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(
    *(_QWORD *)(*(_QWORD *)v15 + 64LL),
    *(_QWORD *)(*(_QWORD *)v15 + 40LL));
}


void DialogMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37821 & 1) == 0 )
  {
    sub_1C32C20(&DialogMessageMaster___c_TypeInfo);
    byte_4C37821 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(DialogMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DialogMessageMaster___c_TypeInfo->static_fields->__9 = (struct DialogMessageMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)DialogMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C32E7C(this);
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
    sub_1C32E84(this);
  this = (DialogMessageMaster___c__DisplayClass8_0_o *)this->fields.__4__this;
  if ( !this
    || (DialogMessageMaster__SaveAsSeen((DialogMessageMaster_o *)this, entitys->m_Items[idx], v2),
        (this = (DialogMessageMaster___c__DisplayClass8_0_o *)v5->fields.__4__this) == 0) )
  {
LABEL_6:
    sub_1C32E7C(this);
  }
  DialogMessageMaster__ShowChain(
    (DialogMessageMaster_o *)this,
    v5->fields.entitys,
    v5->fields.idx + 1,
    v5->fields.callBack,
    v6);
}